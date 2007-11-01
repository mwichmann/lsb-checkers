#include <stdio.h>
#include <string.h>
#include "symbols.h"
#include "libraries.h"
#include "elfchk.h"
#include "output.h"

/* extern int modules; */

int
checksymbols(ElfFile *file, int modules)
{
  int	i, j, numsyms;
  Elf_Sym	*syms1;
#define TMP_STRING_LENGTH 255  
  char tmp_string[TMP_STRING_LENGTH];
  char *symbol_name;

#ifdef VERBOSE
  fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

  numsyms=file->dynsymhdr->sh_size/file->dynsymhdr->sh_entsize;

  syms1=(Elf_Sym *)((caddr_t)file->addr+file->dynsymhdr->sh_offset);

  for(i=0;i<numsyms;i++)
  {
    tetj_tp_count++;
    symbol_name = ElfGetStringIndex(file, syms1[i].st_name, 
                                    file->dynsymhdr->sh_link);
    
    PURPOSE_START(tetj_activity_count, tetj_tp_count, symbol_name);

    if ((ELF32_ST_BIND(syms1[i].st_info) != STB_LOCAL) /* Static Symbols */
        && (ELF32_ST_BIND(syms1[i].st_info) != STB_WEAK)     /* Weak Symbols 
                                                                and provided by
                                                                the app */
        && (syms1[i].st_shndx == SHN_UNDEF) /* provided by section in app */
        && (ELF32_ST_TYPE(syms1[i].st_info) == STT_OBJECT ||
            ELF32_ST_TYPE(syms1[i].st_info) == STT_FUNC))
    {
#if __powerpc64__
/* Symbols representing functions in the ppc64 ABI are function descriptors. 
   The code for the function is contained within a symbol of the same name but
   starting with '.'. We need mangle the symbol name so it doesn't
   contain the '.' */
      if (symbol_name!=NULL && symbol_name[0]=='.'
          && ELF32_ST_TYPE(syms1[i].st_info) == STT_FUNC)
      {
        symbol_name++;
      }
#endif

      for (j=0; j<numDynSyms[LSB_Version]; j++) 
      {
	if( !(modules&DynSyms[LSB_Version][j].modname) )
	  continue;

        if (!strcmp(symbol_name, DynSyms[LSB_Version][j].name))
          break;
      }
      if ( j == numDynSyms[LSB_Version] ) 
      {
        if (!symbolinlibrary(symbol_name, journal))
        {
          output_report_missing_symbol(symbol_name);

          snprintf(tmp_string, TMP_STRING_LENGTH, 
                   "Symbol %s is used, but is not included in %s",
                   symbol_name, getlsbprofile(LSB_Versions[LSB_Version], modules) );
          TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                        tmp_string);
          RESULT(tetj_activity_count, tetj_tp_count, TETJ_FAIL);
          PURPOSE_END(tetj_activity_count, tetj_tp_count);
          continue;
        } 
        else
        {
        /*
         * Symbol is not in the LSB, but it is provided by a
         * library that was specified as being private to the app.
         */
        }
      }
      else
      {
        /* If the symbol is versioned, make sure the correct version is used */
        

        if( file->vers   /* This bit means it's internal */
            && !(file->vers[i] & 0x8000)
            && file->vers[i]!= 0 /* Zero means the symbol is local */
            && file->versionnames[file->vers[i]] != 0 )
        {
#ifdef DEBUG
          printf( "Symbol %s vers %x %s\n",
                  symbol_name, file->vers[i],
                  file->versionnames[file->vers[i]]);
#endif
          if(strcmp(file->versionnames[file->vers[i]],DynSyms[LSB_Version][j].vername) != 0)
          {
            if(strlen(DynSyms[LSB_Version][j].vername) == 0) {
              snprintf(tmp_string, TMP_STRING_LENGTH,
                       "Symbol %s has version %s expecting unversioned",
                       symbol_name,
                       file->versionnames[file->vers[i]]);
            } else {
              snprintf(tmp_string, TMP_STRING_LENGTH,
                       "Symbol %s has version %s expecting %s",
                       symbol_name,
                       file->versionnames[file->vers[i]], DynSyms[LSB_Version][j].vername);
            }
            printf("%s\n", tmp_string);
            TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
            RESULT(tetj_activity_count, tetj_tp_count, TETJ_FAIL);
            PURPOSE_END(tetj_activity_count, tetj_tp_count);
            continue;
          }
        }

	/*
	 * Check to see if the symbol has been deprecated. If so, issue a
	 * warning.
	 */
	if( DynSyms[LSB_Version][j].deprecated ) {
            snprintf(tmp_string, TMP_STRING_LENGTH,
                     "Symbol %s has been deprecated",
                     DynSyms[LSB_Version][j].name);
            printf("%s\n", tmp_string);
            TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
            RESULT(tetj_activity_count, tetj_tp_count, TETJ_WARNING);
            PURPOSE_END(tetj_activity_count, tetj_tp_count);
          }

	/*
	 * Check to see if the symbol is "ioctl". If so, issue a special 
	 * warning.
	 */
	if( strcmp( DynSyms[LSB_Version][j].name, "ioctl" ) == 0 ) {
            snprintf(tmp_string, TMP_STRING_LENGTH,
                     "Unable to determine if parameters to ioctl() are used in accordance with the LSB");
            TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
            RESULT(tetj_activity_count, tetj_tp_count, TETJ_FIP);
            PURPOSE_END(tetj_activity_count, tetj_tp_count);
            continue;
          }

	/*
	 * do the same for "dlopen"
	 */
	if( strcmp( DynSyms[LSB_Version][j].name, "dlopen" ) == 0 ) {
            snprintf(tmp_string, TMP_STRING_LENGTH,
                     "Unable to automatically check libraries accessed via dlopen()");
            TESTCASE_INFO(tetj_activity_count, tetj_tp_count, 0, 0, 0, 
                          tmp_string);
            RESULT(tetj_activity_count, tetj_tp_count, TETJ_FIP);
            PURPOSE_END(tetj_activity_count, tetj_tp_count);
            continue;
          }
      }
    }

    RESULT(tetj_activity_count, tetj_tp_count, TETJ_PASS);
    PURPOSE_END(tetj_activity_count, tetj_tp_count);

  } /* i */
  return 0; 
}
