/*
 * libchk.c 
 *
 * Copyright (c) 2001 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@freestandards.org)
 * Chris Yeoh (yeohc@au.ibm.com)
 *
 * This is $Revision: 1.44 $
 *
 * $Log: libchk.c,v $
 * Revision 1.44  2004/08/09 13:53:13  anderson
 * Turn on checking the sizes, but don't gripe the DB sez 0 meaning the data hasn't been filled in
 *
 * Revision 1.43  2004/08/06 18:43:53  anderson
 * First cut at actually checking symbol size for OBJT
 *
 * Revision 1.42  2004/07/28 14:02:07  anderson
 * As a default now, turn off some of the extraneous messages
 *
 * Revision 1.41  2004/07/27 18:52:31  cyeoh
 * Adds missing testcase end marker
 *
 * Revision 1.40  2004/05/12 19:40:19  anderson
 * Change the logic to make the program more helpful.
 * remove print_warnings, instead, rely on the debug flags from the env to control
 * what gets output.
 * Add a new flag for warnings about older versions of symbols.
 *
 * Revision 1.39  2004/05/12 19:35:07  anderson
 * Fix warnings caused by bad pointer decls
 *
 * Revision 1.38  2004/05/12 16:04:52  anderson
 * We want to be able to query for newer version at any time
 *
 * Revision 1.37  2004/05/12 14:23:38  anderson
 * Bug 227 - logic snafu
 *
 * Revision 1.36  2004/04/22 12:51:59  anderson
 * check_libs isn't used by cxxabichk, so just leave it out completely
 *
 * Revision 1.35  2004/04/21 14:36:02  anderson
 * No need to mangle the module name
 *
 * Revision 1.34  2004/04/21 12:48:26  anderson
 * Add -M modulename
 *
 * Revision 1.33  2004/04/20 20:10:02  anderson
 * Restructure things so that libs belong to a specification module. Currently,
 * the code checkes everything, which is that same as the p[revious behavior.
 * An option still needs to be added that specifies which Module to limit
 * the check by.
 *
 * Revision 1.32  2003/10/31 00:05:15  cyeoh
 * Adds error message logging to journal file
 *
 * Revision 1.31  2003/10/28 21:38:25  mats
 * printf format fixes
 *
 * Revision 1.30  2003/10/28 19:32:12  anderson
 * 1) Add use of env variable LIBCHK_DEBUG
 * 2) cleanup warnings in class checking code and hide some of them behind
 *    maintained debug flags
 *
 * Revision 1.29  2003/10/27 15:07:26  anderson
 * libchk should now check the class data also
 *
 * Revision 1.28  2003/09/12 11:41:59  anderson
 * Allow a single argument which specifies the lib to check when in cxxabichk mode
 *
 * Revision 1.27  2003/09/01 05:38:31  cyeoh
 * Log file not found errors to journal file
 *
 * Revision 1.26  2003/08/29 13:40:54  anderson
 * Work around other recent fixes that I didn't have onthe airplane 8-). Specify the full path to libstdc__.so.5 to keeps things standalong for cxxabichk
 *
 * Revision 1.25  2003/08/29 13:18:39  anderson
 * Change to build as standalone cxxabichk:
 *
 * 1) Don't include tetj.h using a rletive path
 * 2) #ifdef _CXXABICHK_ a couple of things
 * 3) Call check_lib() directly for libstdcxx instead of check_libs().
 *
 * Add some maintainer diagnostics for checking symbol versions. Report
 * when newer version are found.
 *
 * Revision 1.24  2003/08/26 07:58:38  cyeoh
 * libchk now calculates dynamically where the lsb libraries are by
 * using ldd and a dummy LSB binary which is linked against all LSB libraries
 * Comment out class checking code
 *
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
#include <getopt.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#include "elfchk.h"
#include "libchk.h"
#include "hdr.h"
#include "tetj.h"

#ifdef _CXXABICHK_
extern struct versym libstdcxx_so_5[];
extern struct classinfo libstdcxx_so_5_classinfo[];
#endif

#define MAX_LENGTH_STRING 80
struct libpath 
{
	char library[MAX_LENGTH_STRING+1];
	char fullpath[MAX_LENGTH_STRING+1];
};
static struct libpath *library_paths = NULL;
static int library_path_count = 0;

/* Real CVS revision number so we can strings it from
   the binary if necessary */
static const char * __attribute((unused)) libchk_revision = "$Revision: 1.44 $";

/*
 * Some debugging bits which are useful to maintainers,
 * but probably not others
 */

int libchk_debug=LIBCHK_DEBUG_CXXHUSH;

/*
 * What module to check against. - NULL means check all
 */
char *module = NULL;

/* Returns 1 on match, 0 otherwise */
int
check_symbol(ElfFile *file, struct versym *entry)
{
  int i, j;
  char *symbol_name;
  int foundit=0;
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
            printf("    Warning!!! Found unversioned symbol %s,"
                   "but expecting version %s\n",
                   ElfGetStringIndex(file,file->syms[j].st_name,
                                     file->symhdr->sh_link),
                   entry->vername);
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
          printf("    Warning!!! Found version %x, for %s which is too big\n",
                 vers,
                 ElfGetStringIndex(file,file->syms[j].st_name,
                                   file->symhdr->sh_link));
        continue;
      }

#ifdef DEBUG
      printf("Symbol %s vers %s\n",
             ElfGetStringIndex(file,file->syms[j].st_name,
                               file->symhdr->sh_link),
             file->versionnames[vers]);
#endif

      /* Convert the Version from the DB into a numerical value so we can do
         more interesting comparisons */

      for(i=2;i<file->numverdefs;i++)
	if( strcmp(file->versionnames[i], entry->vername) == 0 )
		break;

      /* If the version matches, stop, we are done */
      if (vers == i)
	foundit=1;

      /* If the version in the libary is greater, then warn, if in
         maintainer mode */
      if (vers > i )
      {
        if ((libchk_debug&LIBCHK_DEBUG_NEWVERS) )
        {
          printf("    %s has newer version %s, expecting ",
                 ElfGetStringIndex(file,file->syms[j].st_name,
                                   file->symhdr->sh_link),
                 file->versionnames[vers]);
            printf("%s\n", entry->vername);
	
        }
      }

      /* If the version in the library is less than (older), only warn if
         in maintainer mode. */
      if (vers < i )
      {
        if ((libchk_debug&LIBCHK_DEBUG_OLDVERS) )
        {
          printf("    %s has version %s, expecting ",
                 ElfGetStringIndex(file,file->syms[j].st_name,
                                   file->symhdr->sh_link),
                 file->versionnames[vers]);
          if (strlen(entry->vername)>0)
            printf("%s\n", entry->vername);
          else
            printf("unversioned\n");

        }
      }
    }
  }

  /* Did not find exact match for symbol */
  return foundit;
}

/* Returns 1 on match, 0 otherwise */
int
check_size(ElfFile *file, struct versym *entry)
{
  int j;
  char *symbol_name;
  /* See if this symbol is in the dynsyn section of the library */

  /* printf("Looking for %s\n", entry->name); */
  for (j=0; j<file->numsyms; j++) 
  {
    if ( !(ELF32_ST_TYPE(file->syms[j].st_info) == STT_OBJECT) )
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
    /* Now, check to see if it has the right size associated with it */

	if( entry->size == 0 ) {
		/* Until the DB is fully populated, skip the check is the size is 0 */
		return 0;
	}
	if( file->syms[j].st_size != entry->size ) {
			fprintf(stderr, "size for %s doesn't match %d vs %d\n",
							symbol_name, file->syms[j].st_size, entry->size );
			return -1;
	} else {
#ifdef DEBUG
			fprintf(stderr, "size for %s does match %d vs %d\n",
							symbol_name, file->syms[j].st_size, entry->size );
#endif
			return 1;
	}

    }
  }

  /* Did not find exact match for symbol */
  return 0;
}


void
check_lib(char *libname, struct versym *entries, struct classinfo *classes, struct tetj_handle *journal)
{
  ElfFile *file = NULL;
  char filename[PATH_MAX+1];
#define TMP_STRING_SIZE (PATH_MAX+20)
  char tmp_string[TMP_STRING_SIZE+1];
  char tmp_string2[TMP_STRING_SIZE+1];
  struct stat stat_info;
  FILE *md5_proc;
  int i;

  tetj_activity_count++;
  tetj_testcase_start(journal, tetj_activity_count, libname, "");
  tetj_tp_count = 0;

  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Looking for library %s",
           libname);
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  if (libname[0]!='/')
  {
    /* Find the library */
    for (i=0; i<library_path_count; i++)
    {
      if (strcmp(libname, library_paths[i].library)==0)
      {
	snprintf(tmp_string, TMP_STRING_SIZE, "Found match for %s as %s\n",
	         library_paths[i].library, library_paths[i].fullpath);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	                   0, 0, 0, tmp_string);
	file = OpenElfFile(library_paths[i].fullpath);
	strncpy(filename, library_paths[i].fullpath, PATH_MAX);
	break;
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
    snprintf(tmp_string, TMP_STRING_SIZE, "Unable to find library %s",
             libname);
    fprintf(stderr, "%s\n", tmp_string);
		tetj_add_controller_error(journal, tmp_string);
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
    /* Check the symbol version */
    tetj_tp_count++;
    snprintf(tmp_string, TMP_STRING_SIZE, "%s (%s)",
            entries[i].name, entries[i].vername>0 ? entries[i].vername :
            "unversioned");
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                       tmp_string);
    if(check_symbol(file, entries+i))
    {
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    }
    else
    {
      /* Failed to match */
			snprintf(tmp_string, TMP_STRING_SIZE, "Didn't find %s (%s) in %s",
							 entries[i].name,
							 strlen(entries[i].vername)>0 ? entries[i].vername : 
							   "(unversioned)",
							 libname);
			printf("%s\n", tmp_string);
			tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
												 0, 0, 0, tmp_string);

      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);

      check_symbol(file, entries+i);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    /* Check the symbol size, if it's an OBJT */
    snprintf(tmp_string, TMP_STRING_SIZE, "%s (%s)",
            entries[i].name, entries[i].vername>0 ? entries[i].vername :
            "unversioned");
    switch(check_size(file, entries+i)) {
	case 0: /* Not an obj */
			break;
	case 1: /* Passed */
    {
      tetj_tp_count++;
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                       tmp_string);
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
	  break;
    }
	case 2: /* Failed */
    {
      tetj_tp_count++;
      tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                       tmp_string);
#if 0
      /* Failed to match */
			snprintf(tmp_string, TMP_STRING_SIZE, "Didn't find %s (%s) in %s",
							 entries[i].name,
							 strlen(entries[i].vername)>0 ? entries[i].vername : 
							   "(unversioned)",
							 libname);
			printf("%s\n", tmp_string);
			tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
												 0, 0, 0, tmp_string);
#endif

      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    }
   }
  }

/*   printf("Checking Class Information in %s\n", filename ); */

  check_class_info(filename,classes,journal);

	tetj_testcase_end(journal, tetj_activity_count, libname, "");

}

#ifndef _CXXABICHK_
void check_libs(struct tetj_handle *journal)
{
	int	i=0;
	do {
		if( !module || (module && (strcmp(module,modlibs[i].modname)==0)) )
			check_lib(modlibs[i].runname, modlibs[i].symbols,
				modlibs[i].classinfo, journal);
	} while( modlibs[++i].modname );

}
#endif

void init_library_table(char *filename)
{
	FILE *in_file;
	char tmp_str[MAX_LENGTH_STRING+1];
	char key[MAX_LENGTH_STRING+1];
	int have_key = 0;


	in_file = fopen(filename, "r");
	if (in_file==NULL)
	{
		fprintf(stderr, "Attempted to open %s\n", filename);
		perror("Unable to open file: %s");
		exit(1);
	}

	while (fgets(tmp_str, MAX_LENGTH_STRING, in_file))
	{
		if (have_key)
		{
			if (key[0]!='/')
			{
				/* Have key, and now value */
				library_path_count += 1;
				library_paths = realloc(library_paths, 
																library_path_count*sizeof(struct libpath));
				if (!library_paths)
				{
					perror("Out of memory");
					exit(1);
				}

				if (strlen(key)>0 && key[strlen(key)-1]=='\n') 
					key[strlen(key)-1] = 0;
				if (strlen(tmp_str)>0 && tmp_str[strlen(tmp_str)-1]=='\n') 
					tmp_str[strlen(tmp_str)-1] = 0;

				strcpy(library_paths[library_path_count-1].library, key);
				strcpy(library_paths[library_path_count-1].fullpath, tmp_str);
			}
			have_key = 0;
		}
		else 
		{
			strcpy(key, tmp_str); 
			have_key = 1;
		}
	}	

}

int main(int argc, char *argv[])
{
  signed char c;
  struct tetj_handle *journal;
  char *ptr,tmp_string[TMP_STRING_SIZE+1];
  
  if( (ptr=getenv("LIBCHK_DEBUG")) != NULL ) {
	  libchk_debug=strtod(ptr,NULL);
  }

  /* Parse options */
  while(1) {
      c=getopt(argc,argv,"M:");
      if( c == -1 )
        break;
      switch(c) {
      case 'M':
	module=optarg;
	printf("Only checking libraries in module %s\n", module);
        break;
      default:
        printf ("?? getopt returned character code 0%o ??\n", c);
      }
  }

#ifndef _CXXABICHK_
	if (argc<=optind)
	{
		fprintf(stderr, 
					 "Need to supply file containing lookup map of shared libraries\n");
		exit(1);
	}
	init_library_table(argv[optind]);
#endif



  if (tetj_start_journal("journal.libchk", &journal, "libchk")!=0)
  {
    perror("Could not open journal file");
    exit(1);
  }


#ifdef _CXXABICHK_
  snprintf(tmp_string, TMP_STRING_SIZE, "C++ ABI Checker" );

  tetj_add_config(journal, tmp_string);

  check_lib(argc==2?argv[1]:"/usr/lib/libstdc++.so.5",
		  libstdcxx_so_5,libstdcxx_so_5_classinfo,journal);
#else
  snprintf(tmp_string, TMP_STRING_SIZE, "VSX_NAME=lsblibchk " LSBLIBCHK_VERSION);
  tetj_add_config(journal, tmp_string);

  check_libs(journal);
#endif

  tetj_close_journal(journal);

  exit(0);
}
  
