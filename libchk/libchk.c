/*
 * libchk.c 
 *
 * Copyright (c) 2001 The Free Standards Group Inc.
 *
 * Stuart Anderson (anderson@freestandards.org)
 * Chris Yeoh (yeohc@au.ibm.com)
 *
 * This is $Revision: 1.74 $
 *
 * $Log: libchk.c,v $
 * Revision 1.74  2006/04/18 19:36:25  mats
 * bug 1241: logic change in case the first instance of a symbol is
 * unversioned but we're expecting versioned - keep looking!
 *
 * Revision 1.73  2006/04/10 23:26:00  mats
 * misc. cleanup (no functional changes)
 *
 * Revision 1.72  2006/04/10 20:27:02  mats
 * other half of bug 1122
 *
 * Revision 1.71  2006/04/10 18:58:30  mats
 * Partial fix for bug 1122 - if symbols are expected unversioned, but found
 * versioned, that should be okay. Case where there are multiple version
 * symbols in library not handled yet. Also, case where symbol expected
 * versioned and found unversioned is changed to an error from a warning.
 *
 * Revision 1.70  2006/04/01 00:08:03  rajesh
 * removed -T option and made desktop as the default
 *
 * Revision 1.69  2006/03/30 18:41:07  heffler
 * change libchk so it handles module sets better
 *
 * Revision 1.68  2006/01/31 01:49:05  mats
 * Changes for bug 986.  The underlying files have changed a bit since
 * the patches were submitted, hopefully these changes were still
 * applied correctly.
 *
 * Revision 1.67  2006/01/13 21:19:02  ferringb
 * Added
 * -T core support for specifying the product.
 *
 * Revision 1.66  2005/07/05 12:47:35  mats
 * One more cleanup pass: make sure unexpected number of arguments
 * exits with an error code.
 *
 * Revision 1.65  2005/07/04 16:41:32  mats
 * Use the common argument handling
 *
 * Revision 1.64  2005/06/02 13:58:11  mats
 * Improve error journaling on serious failures - complete the test
 * but emit info lines on the problem (bug 971)
 *
 * Revision 1.63  2005/05/04 17:12:15  mats
 * Bug 861: log module information to journal
 *
 * Revision 1.62  2005/05/04 00:11:50  mats
 * Adapt to corrected tetj_testcase_end routine
 *
 * Revision 1.61  2005/04/11 22:56:50  anderson
 * bug - 816 don't return immediately so we can see all of the available versions
 *
 * Revision 1.60  2005/03/31 16:36:52  anderson
 * Bug 736 - make Module additive
 *
 * Revision 1.59  2005/03/21 13:58:56  anderson
 * Make the default report new symbols for now - turn of later for final release
 *
 * Revision 1.58  2005/03/01 19:09:15  anderson
 * bug #513 - make isProgram be tri-state to support prog, libs & objs
 *
 * Revision 1.57  2005/02/23 22:50:41  anderson
 * missed a change inside #if DEBUG
 *
 * Revision 1.56  2005/02/22 22:29:03  anderson
 * Update for v6 libstdc++ when building as cxxabichk
 *
 * Revision 1.55  2005/02/01 05:38:46  anderson
 * Upgrade libstdc++ to the v6 abi
 *
 * Revision 1.54  2004/12/14 23:05:10  mats
 * fix up the "other versions" message again
 *
 * Revision 1.53  2004/12/14 16:46:52  mats
 * remove spurious blank lines in journal after library match
 *
 * Revision 1.52  2004/12/14 16:33:28  mats
 * fiddle with reporting of extra versions
 *
 * Revision 1.51  2004/12/13 22:07:32  mats
 * Improve information if expected symbol version is not in library
 *
 * Revision 1.50  2004/10/28 17:47:00  anderson
 * bug 602: Now handles missing symbols better and checks for having only a default library wide version
 *
 * Revision 1.47  2004/10/22 16:20:22  anderson
 * Check to make sure we didn't fail to find a symbol at all
 *
 * Revision 1.46  2004/08/12 18:55:31  mats
 * warning cleanups
 *
 * Revision 1.45  2004/08/10 17:37:46  anderson
 * rerror is -1, not 2
 *
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
#include "symvers.h"
#include "tetj.h"

#ifdef _CXXABICHK_
extern struct versym libstdcxx_so_6[];
extern struct classinfo libstdcxx_so_6_classinfo[];
#endif

#define MAX_LENGTH_STRING 80
struct libpath 
{
        char library[MAX_LENGTH_STRING+1];
        char fullpath[MAX_LENGTH_STRING+1];
};
static struct libpath *library_paths = NULL;
static int library_path_count = 0;

/* Real CVS revision number so we can strings it from the binary if necessary */
static const char * __attribute((unused)) libchk_revision = "$Revision: 1.74 $";

/*
 * Some debugging bits which are useful to maintainers,
 * but probably not others
 */

int libchk_debug=LIBCHK_DEBUG_CXXHUSH|LIBCHK_DEBUG_NEWVERS;

/*
 * What module to check against. - NULL means check all
 */
int module = 0;


/* Find the absolute path of an ELF file. */
int
find_elf_file(char *libname, char *filename, int maxlen)
{
  int i;

  if (libname[0] != '/') {
    /* Find the library */
    for (i=0; i<library_path_count; i++) {
      if (strcmp(libname, library_paths[i].library) == 0) {
        strncpy(filename, library_paths[i].fullpath, maxlen);
        break;
      }
    }
  } else {
    /* absolute path given so we don't do a search through the library paths */
    strncpy(filename, libname, maxlen);
  }

  return access(filename, R_OK);
}

/* Finish initialization on ElfFile after open. */

void
init_elf_file(ElfFile *file)
{
  Elf_Ehdr *hdr1 = (Elf_Ehdr *)file->addr;

  if( hdr1->e_phoff ) {
    file->paddr=(Elf_Phdr *)((caddr_t)file->addr+hdr1->e_phoff);
    file->numph = hdr1->e_phnum;
  }
  if( hdr1->e_shoff ) {
    file->saddr=(Elf_Shdr *)((caddr_t)file->addr+hdr1->e_shoff);
    file->numsh = hdr1->e_shnum;
  }

  if( hdr1->e_shstrndx != SHN_UNDEF ) {
    file->straddr = file->addr+file->saddr[hdr1->e_shstrndx].sh_offset;
  }
  file->strndx = hdr1->e_shstrndx;

  getSymbolVersionInfo(file);
}

/* dump info on extra versions in library (maintainer mode) */
void
extra_vers(ElfFile * file, int index, int vers, char *msg, char *vername)
{

    printf("    %s has %s version %s ",
           ElfGetStringIndex(file, file->syms[index].st_name,
                             file->symhdr->sh_link),
           msg, file->versionnames[vers]);
    if (strlen(vername) > 0)
        printf("(db %s)\n", vername);
    else
        printf("(db unversioned)\n");
}

/* Retrieve the list of dependencies for a ELF file. */
ElfFile **
get_dt_needed(ElfFile *file)
{
  int i, size;
  ElfFile **results = NULL;
  char *symbol_str;
  char needed_fn[PATH_MAX];

  for (i = 0; i < file->numdynents; i++) {
    /* Skip all symbols except DT_NEEDED. */
    if (file->dyns[i].d_tag != DT_NEEDED)
      continue;

    /* Find the library referenced in the symbol. */
    symbol_str = ElfGetStringIndex(file, file->dyns[i].d_un.d_val, 
                                   file->dynhdr->sh_link);
    find_elf_file(symbol_str, needed_fn, PATH_MAX);

    if (access(needed_fn, R_OK) != 0)
      continue;

    /* Open the library, and add it to the results. */
    if (results != NULL) {
      for (size = 0; results[size] != NULL; size++) ;
      results = (ElfFile **) realloc(results, sizeof(ElfFile *) * (size + 2));
    } else {
      size = 0;
      results = (ElfFile **) malloc(sizeof(ElfFile *) * 2);
    }

    if (results == NULL) {
      perror("error finding dependency");
      exit(1);
    }

    results[size] = OpenElfFile(needed_fn);
    if ((results[size] == NULL) || (results[size] == ELFFILE_FATAL_ERROR)) {
      fprintf(stderr, "could not open %s\n", needed_fn);
      exit(1);
    }

    results[size + 1] = NULL;

    init_elf_file(results[size]);
  }

  return results;
}

/* Free DT_NEEDED file lists returned by get_dt_needed() */
void
free_dt_needed(ElfFile **needed)
{
  int index;

  if (needed != NULL) {
    for (index = 0; needed[index] != NULL; index++) {
      CloseElfFile(needed[index]);
    }

    free(needed);
  }
}

/* Returns 1 on match, 0 otherwise */
int
check_symbol(ElfFile *file, struct versym *entry)
{
  int i, j;
  char *symbol_name;
  int foundit=0;
  int checkedit=0;
  int pendingerr=0;
  static ElfFile **checked_files = NULL;
  ElfFile **needed_files;

  /* See if this symbol is in the dynsym section of the library */

  /* printf("Looking for %s\n", entry->name); */
  for (j=0; j<file->numsyms; j++) {
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
    /*
     * On PPC64 systems the real text for functions is stored in a symbol
     * of the same name, but prepended with a '.'. Since in the LSB DB
     * we store the names of the functions without a '.' we need this horrible
     * horrible hack so libchk can match against the correct symbols
     * Note: this is now fixed on ppc64, but leave hack for a while
     * until systems generally catch up
     */
    if (symbol_name[0]=='.' && ELF32_ST_TYPE(file->syms[j].st_info)==STT_FUNC) {
        symbol_name++;
    }
#endif
    if (strcmp(symbol_name,entry->name) == 0) {

      /* Now, check to see if it has the right version associated with it */

      /* This bit means it's internal */
      Elf32_Half vers = file->vers[j];
      if (vers & 0x8000) {
        vers = vers & 0x7FFF;
      }

      /* Zero means the symbol is local */
      if (vers == 0)
        continue;

      /* One means the symbol is defined & available, but not versioned */
      if (vers == 1) {
        if (entry->vername[0] != '\000') {
          /*
           * this was a warning, then an error... but actually, we don't
           * know yet. seems some libraries do have both an unversioned
           * and a versioned symbol in the library. so set a flag,
           * keep checking, and if we didn't find what we needed,
           * error out at that point
           */
          pendingerr=j;
          continue;
        } else {
          /* Found an expected unversioned symbol */
          return 1;
        }
      }

      /* This is just a sanity check, which should never be hit */
      if (vers > file->numverdefs) {
          printf("    Warning: found version %x for %s which is too big\n",
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

      if( file->numverdefs == 2 ) {
        /* The library only has a single version, which is the default */
        if (entry->vername[0] == '\000') {
          printf("    Warning: expected unversioned symbol %s in library\n",
                 ElfGetStringIndex(file,file->syms[j].st_name,
                                   file->symhdr->sh_link));
          if (libchk_debug & (LIBCHK_DEBUG_NEWVERS | LIBCHK_DEBUG_OLDVERS))
            printf("        found version %s\n", file->versionnames[2]);
        } else if( strcmp(file->versionnames[2], entry->vername) != 0 ) {
          printf("    Warning: did not find version tag %s in library\n",
                 entry->vername);
          if (libchk_debug & (LIBCHK_DEBUG_NEWVERS | LIBCHK_DEBUG_OLDVERS))
            printf("        only available version is %s\n", file->versionnames[2]);
          return 0;
        }
        i=2; 
      } else {
          /* The library has multiple versions, check each one */

          /*
           * Note that the Versions are stored with a bias of 2. There are
           * two entries at the bottom of the array that are not included in
           * the count for how many version are available. The symbols use
           * the bias also, we we'll just adjust the loop start & end conditions
           * to match this bias.
           */
          for(i=2;i<=file->numverdefs;i++) {
            if( strcmp(file->versionnames[i], entry->vername) == 0 )
                break;
          }

          if( i > file->numverdefs ) {
            if (entry->vername[0] == '\000') {
              printf("    Warning: expected unversioned symbol %s in library\n",
                     ElfGetStringIndex(file,file->syms[j].st_name,
                                       file->symhdr->sh_link));
              if (libchk_debug & (LIBCHK_DEBUG_NEWVERS | LIBCHK_DEBUG_OLDVERS))
                printf("        found version %s\n", file->versionnames[vers]);
              foundit=1;        /* pretend vers was found */
            } else {
              printf("    Warning: did not find version tag %s in library\n",
                     entry->vername);
              if (libchk_debug & (LIBCHK_DEBUG_NEWVERS | LIBCHK_DEBUG_OLDVERS))
                printf("        available version is %s\n", file->versionnames[vers]);
            }
          }
      }

      /* If the version matches, we're going to return success */
      if (vers == i)
        foundit=1;

      /* If the version in the library is greater (newer) then warn if
         in maintainer mode */
      if (vers > i && (libchk_debug&LIBCHK_DEBUG_NEWVERS))
          extra_vers(file, j, vers, "newer", entry->vername);

      /* If the version in the library is less (older) then warn if
         in maintainer mode. */
      if (vers < i && (libchk_debug&LIBCHK_DEBUG_OLDVERS))
          extra_vers(file, j, vers, "older", entry->vername);
    }
  }

  /* if not in this library, check its deps */
  if (!foundit && !pendingerr && (needed_files != NULL)) {
    needed_files = get_dt_needed(file);
    if (needed_files != NULL) {
      for (i = 0; needed_files[i] != NULL; i++) {
        /* Make sure we haven't checked this one before. */
        checkedit = 0;
        if (checked_files != NULL) {
          for (j = 0; checked_files[j] != NULL; j++) {
            if (needed_files[i] == checked_files[j]) {
              checkedit = 1;
              break;
            }
          }
        }

        if (checkedit)
          continue;

        /* Add the current library to the list of the already-checked. */
        if (checked_files != NULL) {
          for (j = 0; checked_files[j] != NULL; j++) ;
          checked_files =
            (ElfFile **) realloc(checked_files, sizeof(ElfFile *) * (j + 2));
        } else {
          j = 0;
          checked_files = (ElfFile **) malloc(sizeof(ElfFile *) * 2);
        }

        if (checked_files == NULL) {
          perror("error checking dependency");
          exit(1);
        }

        checked_files[j] = file;
        checked_files[j + 1] = NULL;

        /* Look for the symbol in the dep. */
        foundit = check_symbol(needed_files[i], entry);

        /* Clean up. */
        if (j == 0) {
          free(checked_files);
          checked_files = NULL;
        }

        /* Stop if we've found what we're looking for. */
        if (foundit)
          break;
      }

      free_dt_needed(needed_files);
    }
  }


  /* check for possible error saved from above */
  if (!foundit && pendingerr) {
    printf("    Error: found unversioned symbol %s, expecting version %s\n",
           ElfGetStringIndex(file,file->syms[pendingerr].st_name,
                             file->symhdr->sh_link),
           entry->vername);
    /* and fall through: already know foundit=0 */
  } 

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
  for (j=0; j<file->numsyms; j++) {
    if ( !(ELF32_ST_TYPE(file->syms[j].st_info) == STT_OBJECT) ) {
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
    /*
     * On PPC64 systems the real text for functions is stored in a symbol
     * of the same name, but prepended with a '.'. Since in the LSB DB
     * we store the names of the functions without a '.' we need this horrible
     * horrible hack so libchk can match against the correct symbols
     * Note: this is now fixed on ppc64, but leave hack for a while
     * until systems generally catch up
     */
    if (symbol_name[0]=='.' && ELF32_ST_TYPE(file->syms[j].st_info)==STT_FUNC) {
        symbol_name++;
    }
#endif
    if (strcmp(symbol_name,entry->name) == 0) {
      /* Now, check to see if it has the right size associated with it */

      if( entry->size == 0 ) {
        /* Until the DB is fully populated, skip the check is the size is 0 */
        return 0;
      }
      if( file->syms[j].st_size != entry->size ) {
        fprintf(stderr, "size for %s doesn't match %ld vs %d\n",
                symbol_name, (u_long)file->syms[j].st_size, entry->size );
	/*
	 * Negative return value indicates an error.
	 * We also need real size for correct error message generation, so
	 * let's return negative real size.
	 */
        return -(u_long)file->syms[j].st_size;
      } else {
#ifdef DEBUG
        fprintf(stderr, "size for %s does match %ld vs %d\n",
                symbol_name, (u_long)file->syms[j].st_size, entry->size );
#endif
        return 1;
      }
    }
  }

  /* Did not find exact match for symbol */
  return 0;
}

/* Returns the size associated with a symbol */
int
get_size(ElfFile *file, char *symname)
{
  int j;
  char *symbol_name;
  /* See if this symbol is in the dynsyn section of the library */

  /* printf("Looking for %s\n", entry->name); */
  for (j=0; j<file->numsyms; j++) {
    if ( !(ELF32_ST_TYPE(file->syms[j].st_info) == STT_OBJECT) ) {
      continue;
    }
#ifdef DEBUG
    printf("Bind=%x\n", ELF32_ST_BIND(file->syms[j].st_info) );
    printf("Type=%x\n", ELF32_ST_TYPE(file->syms[j].st_info) );
    printf("Comparing %s and %s\n", 
           ElfGetStringIndex(file,file->syms[j].st_name,
                             file->symhdr->sh_link),symname);
#endif
    symbol_name = ElfGetStringIndex(file,file->syms[j].st_name,
                                    file->symhdr->sh_link);
#if __powerpc64__
    /*
     * On PPC64 systems the real text for functions is stored in a symbol
     * of the same name, but prepended with a '.'. Since in the LSB DB
     * we store the names of the functions without a '.' we need this horrible
     * horrible hack so libchk can match against the correct symbols
     * Note: this is now fixed on ppc64, but leave hack for a while
     * until systems generally catch up
     */
    if (symbol_name[0]=='.' && ELF32_ST_TYPE(file->syms[j].st_info)==STT_FUNC) {
        symbol_name++;
    }
#endif
    if (strcmp(symbol_name,symname) == 0) {
      return file->syms[j].st_size;
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
  int size_check_result;

  tetj_activity_count++;
  tetj_testcase_start(journal, tetj_activity_count, libname, "");
  tetj_tp_count = 0;

  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Looking for library %s", libname);
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  find_elf_file(libname, filename, PATH_MAX);
  file = OpenElfFile(filename);

  if(file==NULL) {
    snprintf(tmp_string, TMP_STRING_SIZE, "Unable to find library %s",
             libname);
    fprintf(stderr, "%s\n", tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                     tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return;
  }

  /* Log file size */
  if (stat(filename, &stat_info) == -1) {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not stat file %s", 
             filename);
    perror(tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                     tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return;
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "FILE_SIZE %lu", stat_info.st_size);
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                     tmp_string);

  /* md5sum of binary */
  snprintf(tmp_string, TMP_STRING_SIZE, "md5sum %s", filename);
  md5_proc = popen(tmp_string, "r");
  i=0;
  while (i<32 && !feof(md5_proc)) {
    i += fread(tmp_string+i, 1, 32-i, md5_proc);
  }
  if (pclose(md5_proc) == -1) {
    /* XXX should this be a failure? */
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                       "Failed to calculate md5sum of binary");
  } else {
    tmp_string[32] = 0;
    snprintf(tmp_string2, TMP_STRING_SIZE, "BINARY_MD5SUM=%s", tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                       tmp_string2);
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  /* Check elf header contents */
  checkElfhdr(file, ELF_IS_DSO, journal);

#ifdef dEBUG
  for(i=1;file->versionnames[i];i++)
    printf("Lib ver: %s\n", file->versionnames[i]);
#endif

  printf("Checking symbols in %s\n", filename );

  for (i=0; entries[i].name; i++) 
  {
    /* Check the symbol version */
    tetj_tp_count++;
    /* save this, used repeatedly */
    snprintf(tmp_string, TMP_STRING_SIZE, "%s (%s)",
            entries[i].name, entries[i].vername>0 ? entries[i].vername :
                                                    "unversioned");
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                       tmp_string);

    if(check_symbol(file, entries+i)) {
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    } else {
      /* Failed to match */
      snprintf(tmp_string2, TMP_STRING_SIZE, "Did not find %s in %s",
               tmp_string, libname);
      printf("%s\n", tmp_string2);
      tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                         0, 0, 0, tmp_string2);
      tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

    /* Check the symbol size, if it's an OBJT */
    size_check_result=check_size(file, entries+i);
    switch(size_check_result) {
        case 0: /* Not an obj */
            break;
        case 1: /* Passed */
            tetj_tp_count++;
            tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                               tmp_string);
            tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
            tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
            break;
        default: /* Failed */
            tetj_tp_count++;
            tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                               tmp_string);
#if 0
            /* Failed to match */
            snprintf(tmp_string2, TMP_STRING_SIZE, "Did not find %s in %s",
                     tmp_string, libname);
            printf("%s\n", tmp_string2);
            tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                               0, 0, 0, tmp_string2);
#endif
            snprintf(tmp_string2, TMP_STRING_SIZE, "Found wrong symbol size for %s: found %ld, expected %d",
                     tmp_string, -size_check_result, (entries+i)->size);
            printf("%s\n", tmp_string2);
            tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                               0, 0, 0, tmp_string2);
            tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
            tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
     }
  }

/*  printf("Checking Class Information in %s\n", filename ); */
  check_class_info(file,filename,classes,journal);
  tetj_testcase_end(journal, tetj_activity_count, 0, "");

}

#ifndef _CXXABICHK_
void check_libs(struct tetj_handle *journal)
{
        int        i=0;
        do {
                if( module&modlibs[i].modname )
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
                                library_paths = realloc(library_paths, library_path_count*sizeof(struct libpath));
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

void
usage(char *progname)
{
    printf("usage: %s [options] library_map\n"
           "  -h, --help                     show this help message and exit\n"
           "  -v, --version                  show version and LSB version\n"
           "  -n, --nojournal                do not write a journal file\n"
           "  -T, --lsb-product=[core,c++|core,c++,desktop]\n"
           "                                 target product to load modules for\n"
           "  -M MODULE, --module=MODULE     check only the libraries found in MODULE\n"
           "  -j JOURNAL, --journal=JOURNAL  use JOURNAL as file/path for journal file\n",
           progname);
}

int
main(int argc, char *argv[])
{
  struct tetj_handle *journal;
  char *ptr,tmp_string[TMP_STRING_SIZE+1];
  char journal_filename[TMP_STRING_SIZE+1];
  int option_index = 0;
  int i;

#if 0
  /* Ignore LSB_PRODUCT env variable for LSB 3.1 */
  char *s = getenv("LSB_PRODUCT");
  if(s) {
    if(strcasecmp(s, "core") == 0)
      module = LSB_Core_Modules;
    else if(strcasecmp(s, "desktop") == 0)
      module = LSB_Desktop_Modules;
    else if(strcasecmp(s, "all") == 0)
      module = LSB_All_Modules;
    else {
      printf("warning: env var LSB_PRODUCT specifies an invalid product, ignoring it.\n");
      module = LSB_Core_Modules;
    }
  }
  else
    module = LSB_Core_Modules;
#endif

  /* Ensure compatibility between single-LSB-version libchk and multi-LSB-version elfchk. */
  for (i = 0; i < num_LSB_Versions; ++i) {
    if (strcmp(LSB_Version_str, LSB_Versions[i]) == 0) {
        LSB_Version = i;
        break;
    }
  }
  if (LSB_Version == -1) {
    printf("Internal error: LSB version '%s' is not implemented!\n", LSB_Version_str);
    exit(2);
  }
  
  module = LSB_All_Modules;   // default to all modules
  if ((ptr = getenv("LIBCHK_DEBUG")) != NULL) {
    libchk_debug = strtod(ptr,NULL);
  }
  snprintf(journal_filename, TMP_STRING_SIZE, "journal.libchk");

  while (1) {
    int c;
    static struct option long_options[] = {
      {"help",        no_argument,       NULL, 'h'},
      {"version",     no_argument,       NULL, 'v'},
      {"nojournal",   no_argument,       NULL, 'n'},
      {"module",      required_argument, NULL, 'M'},
      {"lsb-product", required_argument, NULL, 'T'},
      {"journal",     required_argument, NULL, 'j'},
      {0, 0, 0, 0}
    };

    c = getopt_long (argc, argv, "hvnM:j:T:", long_options, &option_index);
    if (c == -1)
      break;
    switch (c) {
      case 'h':
        usage(argv[0]);
        exit (0);
      case 'v':
        printf("%s %s for LSB Specification %s\n", argv[0],
               LSBLIBCHK_VERSION, LSBVERSION);
        break;
      case 'n':
        snprintf(journal_filename, TMP_STRING_SIZE, "/dev/null");
        break;
      case 'T':
        if(strcasecmp(optarg, "core,c++") == 0)
          module = LSB_Core_Modules;
        else if(strcasecmp(optarg, "core,c++,desktop") == 0)
          module |= LSB_Desktop_Modules[LSB_Version];
        else if(strcasecmp(optarg, "all") == 0)
          module |= LSB_All_Modules;
        else {
          printf("product '%s' is not valid!\n", optarg);
          usage(argv[0]);
          exit(1);
        }
        break;
      case 'M':
        module |= getmoduleval(optarg);
        printf("Only checking libraries in module %s\n", optarg);
        break;
      case 'j':
        snprintf(journal_filename, TMP_STRING_SIZE, optarg);
        break;
      default:
        usage(argv[0]);
        exit (0);
    }
  }
#ifndef _CXXABICHK_
  if (optind != (argc - 1)) {
    printf("missing argument: if not called as lsblibchk, must supply a \"library_map\"\n");
    usage(argv[0]);
    exit (1);
  }
  init_library_table(argv[optind]);
#endif

  if (tetj_start_journal(journal_filename, &journal, "libchk") != 0) {
    snprintf(tmp_string, TMP_STRING_SIZE, "Could not open journal file %s",
             journal_filename);
    perror(tmp_string);
    fprintf(stderr, "Use -j <filename> to specify an alternate location for the journal file\n");
    exit(1);
  }

#ifdef _CXXABICHK_
  snprintf(tmp_string, TMP_STRING_SIZE, "C++ ABI Checker" );
  tetj_add_config(journal, tmp_string);
  check_lib(argc==2?argv[1]:"/usr/lib/libstdc++.so.6",
                  libstdcxx_so_6,libstdcxx_so_6_classinfo,journal);
#else
  /*
   * new journal standard requires arch in the
   * VSX_NAME line in order to fetch waiver files correctly
   */
  snprintf(tmp_string, TMP_STRING_SIZE,
           "VSX_NAME=lsblibchk %s (%s)", LSBLIBCHK_VERSION, tetj_arch);
  tetj_add_config(journal, tmp_string);
  snprintf(tmp_string, TMP_STRING_SIZE, "LSB_VERSION=%s", LSBVERSION);
  tetj_add_config(journal, tmp_string);
  snprintf(tmp_string, TMP_STRING_SIZE, "LSB_MODULES=%s", getmodulename(module));
  tetj_add_config(journal, tmp_string);

  check_libs(journal);
#endif

  tetj_close_journal(journal);
  exit(0);
}
  
