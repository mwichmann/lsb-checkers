#include <stdio.h>
#include <string.h>
#include "symbols.h"
#include "libraries.h"

int
checksymbols(ElfFile *file, struct tetj_handle *journal)
{
  int	i, j, numsyms;
  Elf_Sym	*syms1;
#define TMP_STRING_LENGTH 100  
  char tmp_string[TMP_STRING_LENGTH];
  

#ifdef VERBOSE
  fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

  numsyms=file->dynsymhdr->sh_size/file->dynsymhdr->sh_entsize;

  syms1=(Elf_Sym *)((caddr_t)file->addr+file->dynsymhdr->sh_offset);

  for(i=0;i<numsyms;i++)
  {
    tetj_tp_count++;
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
                             ElfGetStringIndex(file, syms1[i].st_name, 
                                               file->dynsymhdr->sh_link));

    if ((ELF32_ST_BIND(syms1[i].st_info) != STB_LOCAL) /* Static Symbols */
        && (ELF32_ST_BIND(syms1[i].st_info) != STB_WEAK)     /* Weak Symbols 
                                                                and provided by
                                                                the app */
        && (syms1[i].st_shndx == SHN_UNDEF) /* provided by section in app */
        && (ELF32_ST_TYPE(syms1[i].st_info) == STT_OBJECT ||
            ELF32_ST_TYPE(syms1[i].st_info) == STT_FUNC))
    {
      for (j=0; j<numDynSyms; j++) 
      {
        if (!strcmp(ElfGetStringIndex(file, syms1[i].st_name, 
                                      file->dynsymhdr->sh_link),
                    DynSyms[j].name))
          break;
      }
      if ( j == numDynSyms ) 
      {
        if (!symbolinlibrary(ElfGetStringIndex(file, 
                                               syms1[i].st_name, 
                                               file->dynsymhdr->sh_link),
                             journal) ) 
        {
          snprintf(tmp_string, TMP_STRING_LENGTH, 
                   "Symbol %s used, but not part of LSB",
                   ElfGetStringIndex(file, syms1[i].st_name,
                                     file->dynsymhdr->sh_link) );
          printf("%s\n", tmp_string);
          tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 
                             0, 0, tmp_string);
          tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
          tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
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
                ElfGetStringIndex(file,file->syms[i].st_name,
                                  file->symhdr->sh_link), file->vers[i],
                  file->versionnames[file->vers[i]]);
#endif
          if(strcmp(file->versionnames[file->vers[i]],DynSyms[j].vername) != 0)
          {
            snprintf(tmp_string, TMP_STRING_LENGTH,
                     "Symbol %s has version %s expecting %s",
                     ElfGetStringIndex(file,file->syms[i].st_name,
                                       file->symhdr->sh_link),
                     file->versionnames[file->vers[i]], DynSyms[j].vername);
            printf("%s\n", tmp_string);
            tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0,
                               0, 0, tmp_string);
            tetj_result(journal, tetj_activity_count, tetj_tp_count, 
                        TETJ_FAIL);
            tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
          }
        }

	/*
	 * Check to see if the symbol has been deprecated. If so, issue a
	 * warning.
	 */
	if( DynSyms[j].deprecated ) {
            snprintf(tmp_string, TMP_STRING_LENGTH,
                     "Symbol %s has been deprecated",
                     DynSyms[j].name);
            printf("%s\n", tmp_string);
            tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0,
                               0, 0, tmp_string);
            tetj_result(journal, tetj_activity_count, tetj_tp_count, 
                        TETJ_FAIL);
            tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
          }
	/*
	 * Check to see if the symbol is "ioctl". If so, issue a special 
	 * warning.
	 */
	if( strcmp( DynSyms[j].name, "ioctl" ) == 0 ) {
            snprintf(tmp_string, TMP_STRING_LENGTH,
                     "Unable to determine if parameters to ioctl() are used in accordance with the LSB. ");
            printf("%s\n", tmp_string);
            tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0,
                               0, 0, tmp_string);
            tetj_result(journal, tetj_activity_count, tetj_tp_count, 
                        TETJ_FIP);
            tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
          }
      }
    }

    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  } /* i */
  return 0; 
}
