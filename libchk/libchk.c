/*
 * libchk.c 
 *
 * Copyright (c) 2001 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@metrolink.com)
 * Chris Yeoh (yeohc@au.ibm.com)
 *
 * This is $Revision: 1.9 $
 *
 * $Log: libchk.c,v $
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
#include "elfchk.h"
#include "hdr.h"

char *libpaths[] = {
	"/lib/lsb/%s",
	"/usr/lib/lsb/%s",
	"/lib/%s",
	"/usr/lib/%s",
	"/usr/X11R6/lib/%s",
	0 };

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) libchk_revision = "$Revision: 1.9 $";

/* Returns 1 on match, 0 otherwise */
int
check_symbol(ElfFile *file, struct versym *entry, int print_warnings)
{
  int j;
  /* See if this symbol is in the dynsyn section of the library */

  /* printf("Looking for %s\n", entry->name); */
  for (j=0; j<file->numsyms; j++) 
  {
    if (! (ELF32_ST_TYPE(file->syms[j].st_info) == STT_FUNC ||
           ELF32_ST_TYPE(file->syms[j].st_info) == STT_OBJECT))
      continue;
#ifdef DEBUG
    printf("Bind=%x\n", ELF32_ST_BIND(file->syms[j].st_info) );
    printf("Type=%x\n", ELF32_ST_TYPE(file->syms[j].st_info) );
    printf("Comparing %s and %s\n", 
           ElfGetStringIndex(file,file->syms[j].st_name,
                             file->symhdr->sh_link),entry->name);
#endif
    if (strcmp(ElfGetStringIndex(file,file->syms[j].st_name,
                                 file->symhdr->sh_link),entry->name) 
        == 0)
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
check_lib(char *libname, struct versym entries[])
{
  ElfFile *file = NULL;
  char filename[PATH_MAX+1];
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

  if(file==NULL) 
  {
    printf("Unable to find library %s\n", libname );
    return;
  }

  checkElfhdr(file, 0);

  printf("Checking symbols in %s\n", filename );

  for (i=0; entries[i].name; i++) 
  {
    if(!check_symbol(file, entries+i, 0))
    {
      /* Failed to match */
      printf("  Didn't find %s ", entries[i].name);
      if (strlen(entries[i].vername)>0) printf("(%s)", entries[i].vername);
      else printf("(unversioned)");
      printf(" in %s\n", libname);
      check_symbol(file, entries+i, 1);
    }
  }
}


extern void check_libs(); /* Generated function by mkfunclist */

int main(int argc, char *argv[])
{
  printf("%s built for Specification Version " LSBVERSION "\n", 
         basename(argv[0]));
  printf("Program Revision: 1.1\n\n");
  check_libs();
  exit(0);
}

