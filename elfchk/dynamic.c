#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "elfchk.h"
#include "sections.h"
#include "dynamic.h"
#include "../tetj/tetj.h"

void
checkDT_HASH(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_HASH Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_INIT(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_INIT Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_NEEDED(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
  int	j;
#define TMP_STRING_SIZE (200)
  char tmp_string[TMP_STRING_SIZE+1];

#ifdef VERBOSE
  fprintf(stderr, "checkDT_NEEDED Dynamic Tag\n" );
#endif /* VERBOSE */
#ifdef VERBOSE
  fprintf(stderr, "DT_NEEDED: %s\n", 
          ElfGetStringIndex(file1,dyn1->d_un.d_val, hdr1->sh_link));
#endif /* VERBOSE */
  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Check valid DT_NEEDED of %s",
           ElfGetStringIndex(file1,dyn1->d_un.d_val, hdr1->sh_link));
          
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  for(j=0;j<numDtNeeded;j++) {
	if( !strcmp(
		ElfGetStringIndex(file1,dyn1->d_un.d_val, hdr1->sh_link),
		DtNeeded[j]) ) break;
	}
  if ( j == numDtNeeded ) 
  {
    /* DT_NEEDED not found in table */
    snprintf(tmp_string, TMP_STRING_SIZE,
             "DT_NEEDED: %s is used, but not part of the LSB", 
             ElfGetStringIndex(file1,dyn1->d_un.d_val, hdr1->sh_link));
    fprintf(stderr, "%s\n", tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                       0, 0, 0, tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
  }
  else
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
  }			
}

void
checkDT_NULL(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_NULL Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_PLTGOT(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_PLTGOT Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_PLTRELSZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_PLTRELSZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_RELA(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_RELA Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_RELAENT(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_RELAENT Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_RELASZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_RELASZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_STRSZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_STRSZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_STRTAB(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_STRTAB Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SYMENT(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SYMENT Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SYMTAB(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SYMTAB Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_ADDRRNGLO(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_ADDRRNGLO Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_AUXILIARY(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_AUXILIARY Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_BIND_NOW(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_BIND_NOW Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_DEBUG(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_DEBUG Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_FILTER(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_FILTER Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_FINI(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_FINI Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_FINI_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_FINI_ARRAY Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_FINI_ARRAYSZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_FINI_ARRAYSZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_FLAGS_1(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_FLAGS_1 Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_HIOS(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_HIOS Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_HIPROC(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_HIPROC Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_INIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_INIT_ARRAY Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_INIT_ARRAYSZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_INIT_ARRAYSZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_JMPREL(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_JMPREL Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_LOOS(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_LOOS Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_LOPROC(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_LOPROC Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_NUM(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_NUM Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_PLTREL(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_PLTREL Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_POSFLAG_1(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_POSFLAG_1 Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_REL(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_REL Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_RELENT(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_RELENT Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_RELSZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_RELSZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_RPATH(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_RPATH Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SONAME(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SONAME Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SYMBOLIC(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SYMBOLIC Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SYMINENT(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SYMINENT Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SYMINFO(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SYMINFO Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_SYMINSZ(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_SYMINSZ Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_TEXTREL(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_TEXTREL Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VALRNGHI(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VALRNGHI Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VALRNGLO(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VALRNGLO Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VERDEF(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VERDEF Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VERDEFNUM(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VERDEFNUM Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VERNEED(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VERNEED Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VERNEEDNUM(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VERNEEDNUM Dynamic Tag\n" );
#endif /* VERBOSE */
}

void
checkDT_VERSYM(ElfFile *file1, Elf32_Shdr *hdr1, Elf32_Dyn *dyn1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkDT_VERSYM Dynamic Tag\n" );
#endif /* VERBOSE */
}


void
checkDYNAMIC(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal )
{
int	i, j, numdyn;
Elf32_Dyn	*dyn1;

#ifdef VERBOSE
fprintf(stderr, "DYNAMIC SECTION\n" );
#endif /* VERBOSE */

numdyn=hdr1->sh_size/hdr1->sh_entsize;

dyn1=(Elf32_Dyn *)((caddr_t)file1->addr+hdr1->sh_offset);

for(i=0;i<numdyn;i++)
	{
	for(j=0;j<numDynamicInfo;j++) {
//fprintf(stderr,"Comparing %d to %d\n", dyn1[i].d_tag, DynamicInfo[j].tag );
		if (dyn1[i].d_tag == DynamicInfo[j].tag ) {
			//fprintf(stderr,"matched dyn tag\n" );
			DynamicInfo[i].func(file1, hdr1, dyn1, journal);
			break;
			}
		}
	if( j == numDynamicInfo )
		fprintf(stderr,"Dynamic Tag %d unknown\n", dyn1[i].d_tag );

	}
}
