/*
 * libchk.c 
 *
 * Copyright (c) 2001 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@freestandards.org)
 * Chris Yeoh (yeohc@au.ibm.com)
 *
 * This is $Revision: 1.23 $
 *
 * $Log: libchk.c,v $
 * Revision 1.23  2003/07/16 07:07:47  cyeoh
 * Workaround for .symbols for ppc64. Eeek!
 *
 * Revision 1.22  2003/05/15 15:35:05  anderson
 * Pick up some RPC updates
 *
 * Revision 1.21  2003/04/28 11:51:40  anderson
 * Turn off the class checking code for everyone else
 *
 * Revision 1.20  2003/04/15 20:30:45  anderson
 * Add the class data structures
 *
 * Revision 1.19  2003/03/26 22:21:16  anderson
 * Add x86_64 support
 *
 * Revision 1.18  2003/02/14 07:42:26  cyeoh
 * cope with different library paths on most 64 bit systems. Should
 * really determine this dynamically
 *
 * Revision 1.17  2002/11/26 00:25:55  anderson
 * Metro who???
 *
 * Revision 1.16  2002/06/28 02:07:27  cyeoh
 * Ensure end of journal tag is added to end of journal
 *
 * Revision 1.15  2002/06/20 05:27:20  cyeoh
 * Adds package version tag to journal file
 *
 * Revision 1.14  2002/05/08 21:57:04  kingdon
 * Include stdlib.h (for exit()).
 *
 * Revision 1.13  2002/04/29 04:39:06  cyeoh
 * Adds support for 'IC Start' and 'IC End' markers in
 * the journal file
 *
 * Revision 1.12  2002/03/21 01:24:18  cyeoh
 * Adds test for existance of library instead of reporting a controller error
 * Adds logging of file size and md5sum of each library
 *
 * Revision 1.11  2002/03/20 06:50:47  cyeoh
 * adds more reporting to journal
 *
 * Revision 1.10  2002/03/20 04:37:38  cyeoh
 * Adds tet journal reporting
 * General cleanup
 *
 * Revision 1.9  2002/01/07 03:17:58  cyeoh
 * Fix for check_lib when given absolute path to library (don't do
 * search)
 *
 * Revision 1.8  2001/12/06 04:21:00  cyeoh
 * Fixes elfchk to handle checking elf header for programs & libraries
 * (instead of assuming its a program)
 * General code cleanup
 *
 * Revision 1.7  2001/10/31 01:35:15  cyeoh
 * search LSB paths first for libraries
 *
 * Revision 1.6  2001/07/30 20:10:19  cyeoh
 * Add more version information printed
 *
 *
 */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "elfchk.h"
#include "libchk.h"
#include "hdr.h"
#include "../tetj/tetj.h"

#if __powerpc64__ || __s390x__ || __x86_64__
#define LIBNAME "/lib64" 
#else
#define LIBNAME "/lib" 
#endif 

char *libpaths[] = {
	LIBNAME "/lsb/%s",
	"/usr" LIBNAME "/lsb/%s",
	LIBNAME "/%s",
	"/usr" LIBNAME "/%s",
	"/usr/X11R6" LIBNAME "/%s",
	0 };

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) libchk_revision = "$Revision: 1.23 $";

extern int check_class_info(char *libname, struct classinfo classes[], struct tetj_handle *journal);


/* Returns 1 on match, 0 otherwise */
int
check_symbol(ElfFile *file, struct versym *entry, int print_warnings)
{
  int j;
  char *symbol_name;
  /* See if this symbol is in the dynsyn section of the library */

  /* printf("Looking for %s\n", entry->name); */
  for (j=0; j<file->numsyms; j++) 
  {
    if (! (ELF32_ST_TYPE(file->syms[j].st_info) == STT_FUNC ||
           ELF32_ST_TYPE(file->syms[j].st_info) == STT_OBJECT))
    {
      continue;
    }
#ifdef DEBUG
    printf("Bind=%x\n", ELF32_ST_BIND(file->syms[j].st_info) );
    printf("Type=%x\n", ELF32_ST_TYPE(file->syms[j].st_info) );
    printf("Comparing %s and %s\n", 
           ElfGetStringIndex(file,file->syms[j].st_name,
                             file->symhdr->sh_link),entry->name);
#endif
    symbol_name = ElfGetStringIndex(file,file->syms[j].st_name,
				    file->symhdr->sh_link);
#if __powerpc64__
    /* On PPC64 systems the real text for functions is stored in a symbol
       of the same name, but prepended with a '.'. Since in the LSB DB
       we store the names of the functions without a '.' we need this horrible
       horrible hack so libchk can match against the correct symbols */
    if (symbol_name[0]=='.' && ELF32_ST_TYPE(file->syms[j].st_info)==STT_FUNC) 
    {
	symbol_name++;
    }
#endif
    if (strcmp(symbol_name,entry->name) == 0)
    {

      /* Now, check to see if it has the right version associated with it */

      /* This bit means it's internal */
      Elf32_Half vers = file->vers[j];
      if (vers & 0x8000)
      {
        vers = vers & 0x7FFF;
      }

      /* Zero means the symbol is local */
      if (vers == 0)
        continue;

      /* One means the symbol is defined & available, but not versioned */
      if (vers == 1) 
      {
        if (entry->vername[0] != '\000')
        {
          if (print_warnings)
          {
            printf("    Warning!!! Found unversioned symbol %s,"
                   "but expecting version %s\n",
                   ElfGetStringIndex(file,file->syms[j].st_name,
                                     file->symhdr->sh_link),
                   entry->vername);
          }
          continue;
        }
        else
        {
          /* Found and expected unversioned symbol */
          return 1;
        }
      }

      /* This is just a sanity check, which should never be hit */
      if (vers > file->numverdefs) 
      {
        if (print_warnings)
        {
          printf("    Warning!!! Found version %x, for %s which is too big\n",
                 vers,
                 ElfGetStringIndex(file,file->syms[j].st_name,
                                   file->symhdr->sh_link));
        }
        continue;
      }

      if (strcmp(file->versionnames[vers], entry->vername) != 0) 
      {
        if (print_warnings)
        {
          printf("    %s has version %s, expecting ",
                 ElfGetStringIndex(file,file->syms[j].st_name,
                                   file->symhdr->sh_link),
                 file->versionnames[vers]);
          if (strlen(entry->vername)>0)
            printf("%s\n", entry->vername);
          else
            printf("unversioned\n");

#ifdef DEBUG
      printf("Symbol %s vers %s\n",
             ElfGetStringIndex(file,file->syms[j].st_name,
                               file->symhdr->sh_link),
             file->versionnames[vers]);
#endif

        }
      }
      else
      {
        /* Found match */
        return 1;
      }
    }
  }

  /* Did not find exact match for symbol */
  return 0;
}


void
check_lib(char *libname, struct versym entries[], struct classinfo classes[], struct tetj_handle *journal)
{
  ElfFile *file = NULL;
  char filename[PATH_MAX+1];
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  char tmp_string2[TMP_STRING_SIZE+1];
  struct stat stat_info;
  FILE *md5_proc;
  int i;

  if (libname[0]!='/')
  {
    /* Find the library */
    for(i=0; libpaths[i]; i++)
    {
      snprintf(filename, PATH_MAX, libpaths[i], libname);
      if (access(filename,R_OK) == 0) 
      {
        file=OpenElfFile(filename);
        if(file) break;
      }
    }
  }
  else
  {
    /* absolute path given so we don't do a search through the library paths */
    strncpy(filename, libname, PATH_MAX);
    if (access(filename,R_OK) == 0) 
    {
      file=OpenElfFile(filename);
    }
  }

  tetj_activity_count++;
  tetj_testcase_start(journal, tetj_activity_count, libname, "");
  tetj_tp_count = 0;

  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Looking for library %s",
           libname);
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  if(file==NULL) 
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Unable to find library %s",
             libname);
    printf("%s\n", tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return;
  }
  else
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
  }

  /* Log file size */
  if (stat(filename, &stat_info)==-1)
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file %s", 
             filename);
    perror(tmp_string);
    tetj_add_controller_error(journal, tmp_string);
    return;
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "FILE_SIZE %lu", stat_info.st_size);
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                     tmp_string);

  /* md5sum of binary */
  snprintf(tmp_string, TMP_STRING_SIZE, "md5sum %s", filename);
  md5_proc = popen(tmp_string, "r");
  i=0;
  while (i<32 && !feof(md5_proc))
  {
    i += fread(tmp_string+i, 1, 32-i, md5_proc);
  }
  if (pclose(md5_proc)==-1)
  {
    tetj_add_controller_error(journal, "Failed to calculate md5sum of binary");
  }
  else
  {
    tmp_string[32] = 0;
    snprintf(tmp_string2, TMP_STRING_SIZE, "BINARY_MD5SUM=%s", tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                       tmp_string2);
  }

  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  /* Check elf header contents */
  checkElfhdr(file, 0, journal);

  printf("Checking symbols in %s\n", filename );

  for (i=0; entries[i].name; i++) 
  {
    tetj_tp_count++;
    snprintf(tmp_string, TMP_STRING_SIZE, "%s (%s)",
            entries[i].name, entries[i].vername>0 ? entries[i].vername :
            "unversioned");
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                       tmp_string);
    if(check_symbol(file, entries+i, 0))
    {
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    }
    else
    {
      /* Failed to match */
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      printf("  Didn't find %s ", entries[i].name);
      if (strlen(entries[i].vername)>0) printf("(%s)", entries[i].vername);
      else printf("(unversioned)");
      printf(" in %s\n", libname);
      check_symbol(file, entries+i, 1);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  }

  printf("Checking Class Information in %s\n", filename );

  check_class_info(filename,classes,journal);
}

/* Generated function by mkfunclist */
extern void check_libs(struct tetj_handle *journal); 

int main(int argc, char *argv[])
{
  struct tetj_handle *journal;
  char tmp_string[TMP_STRING_SIZE+1];
  

  if (tetj_start_journal("journal.libchk", &journal, "libchk")!=0)
  {
    perror("Could not open journal file");
    exit(1);
  }

  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsblibchk " LSBLIBCHK_VERSION);
  tetj_add_config(journal, tmp_string);

  check_libs(journal);

  tetj_close_journal(journal);

  exit(0);
}

