#include <stdio.h>
#include <string.h>
#include "sections.h"
#include "../tetj/tetj.h"

void
checkDUMMY(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "DUMMY SECTION\n" );
#endif /* VERBOSE */
}

void
checkGNU_versym(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_versym SECTION\n" );
#endif /* VERBOSE */
}

void
checkGNU_verdef(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_verdef SECTION\n" );
#endif /* VERBOSE */
}

void
checkGNU_verneed(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_verneed SECTION\n" );
#endif /* VERBOSE */
}

void
checkNOBITS(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "NOBITS SECTION\n" );
#endif /* VERBOSE */
}

void
checkNULL(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "NULL SECTION\n" );
#endif /* VERBOSE */
}

void
checkBITS(char *secname, ElfFile *file1, Elf32_Shdr *hdr1)
{
caddr_t	bits1;

#ifdef VERBOSE
fprintf(stderr, "%s SECTION\n", secname );
#endif /* VERBOSE */

bits1=file1->addr+hdr1->sh_offset;

/*
#define min(a,b) ((a) <= (b) ? (a) : (b))
size=min(hdr1->sh_size, hdr2->sh_size);
#undef min

for(i=0; i<size; i++)
	if( bits1[i] != bits2[i] ) {
		fprintf( stderr, "compare%s: bytes differ at offset %d\n",
					secname,		     i );
		return;
		}
*/
}

void
checkPROGBITS(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
checkBITS( "PROGBITS", file1, hdr1 );
}

void
checkHASH(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
checkBITS( "HASH", file1, hdr1 );
}

void
checkSTRTAB(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
checkBITS( "STRTAB", file1, hdr1 );
}

void
checkNOTE(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
checkBITS( "NOTE", file1, hdr1 );
}

void
checkSYMBOLS(char *secname, ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
int	i, numsyms;
Elf32_Sym	*syms1;

#ifdef VERBOSE
fprintf(stderr, "%s SECTION\n", secname );
#endif /* VERBOSE */

numsyms=hdr1->sh_size/hdr1->sh_entsize;

syms1=(Elf32_Sym *)((caddr_t)file1->addr+hdr1->sh_offset);

for(i=0;i<numsyms;i++)
	{
#ifdef VERBOSE
	fprintf( stderr, "%s\n",
			ElfGetStringIndex(file1,syms1[i].st_name,hdr1->sh_link)
			);
#endif /* VERBOSE */
/*
	if( strcmp(ElfGetStringIndex(file1, syms1[i].st_name, hdr1->sh_link),
		   ElfGetStringIndex(file2, syms2[i].st_name, hdr2->sh_link) )
	  ) {
		fprintf( stderr,"compare%s: symbol name %d doesn't match\n",
					secname,        i );
		fprintf( stderr, "%s %s\n",
			ElfGetStringIndex(file1,syms1[i].st_name,hdr1->sh_link),
			ElfGetStringIndex(file2,syms2[i].st_name,hdr2->sh_link)
			);
		}
*/
	}
}

void
checkSYMTAB(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
checkSYMBOLS( "SYMTAB", file1, hdr1, journal );
}

void
checkDYNSYM(ElfFile *file, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

file->dynsymhdr=hdr1;
}

void
checkREL(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
int	i, numrels;
Elf32_Rel	*rel1;

#ifdef VERBOSE
fprintf(stderr, "REL SECTION\n" );
#endif /* VERBOSE */

numrels=hdr1->sh_size/hdr1->sh_entsize;

rel1=(Elf32_Rel *)((caddr_t)file1->addr+hdr1->sh_offset);

#define comparerelfield( field ) \
if( rel1[i].field != rel2[i].field ) { \
	fprintf( stderr, "compareREL: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x != ", rel1[i].field ); \
	fprintf( stderr, "%8.8x\n", rel2[i].field ); \
	}

for(i=0;i<numrels;i++)
	{
/*
	comparerelfield( r_offset )
	comparerelfield( r_info )
*/
	}
#undef comparerelfield
}

void
checkRELA(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
int	i, numrels;
Elf32_Rela	*rel1;

#ifdef VERBOSE
fprintf(stderr, "RELA SECTION\n" );
#endif /* VERBOSE */

numrels=hdr1->sh_size/hdr1->sh_entsize;

rel1=(Elf32_Rela *)((caddr_t)file1->addr+hdr1->sh_offset);

#define comparerelfield( field ) \
if( rel1[i].field != rel2[i].field ) { \
	fprintf( stderr, "compareRELA: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x != ", rel1[i].field ); \
	fprintf( stderr, "%8.8x\n", rel2[i].field ); \
	}

for(i=0;i<numrels;i++)
	{
/*
	comparerelfield( r_offset )
	comparerelfield( r_info )
*/
	}
#undef comparerelfield
}

void
checkINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "INIT_ARRAY SECTION\n" );
#endif /* VERBOSE */
}

void
checkPREINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "PREINIT_ARRAY SECTION\n" );
#endif /* VERBOSE */
}

void
checkFINI_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "FINI_ARRAY SECTION\n" );
#endif /* VERBOSE */
}

#if defined(__ia64__)
void
checkIA_64_EXT(ElfFile *file1, Elf64_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "IA_64_EXT SECTION\n" );
#endif /* VERBOSE */
}

void
checkIA_64_UNWIND(ElfFile *file1, Elf64_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "IA_64_UNWIND SECTION\n" );
#endif /* VERBOSE */
}
#endif

void
checkElfsection(int index, ElfFile *file1, struct tetj_handle *journal)
{
  Elf32_Shdr	*hdr1;
  int	i;
  int fail = 0;
#define TMP_STRING_SIZE (200)
  char tmp_string[TMP_STRING_SIZE+1];
  
  hdr1=&(file1->saddr[index]);
  if ( index == 0 ) return; /* A dummy section */
  
#ifdef VERBOSE
  fprintf( stderr, "checkElfsection[%d]: %s\n", index,
           ElfGetString(file1, hdr1->sh_name));
#endif /* VERBOSE */
  
  if( !hdr1 )
    return;
  
  tetj_tp_count++;
  snprintf(tmp_string, TMP_STRING_SIZE, "Check Elf Section %s", 
           ElfGetString(file1, hdr1->sh_name));
  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);

  for(i=0;i<numSectionInfo;i++)
  {
    if( strcmp(ElfGetString(file1, hdr1->sh_name),
               SectionInfo[i].name ) == 0 ) 
    {
#ifdef VERBOSE
      fprintf( stderr, "Section[%2d] %-12.12s %s\n",
               index, SectionInfo[i].name,
               ElfGetString(file1, hdr1->sh_name) );
#endif /* VERBOSE */
      if( hdr1->sh_type != SectionInfo[i].type ) 
      {
        snprintf(tmp_string, TMP_STRING_SIZE,
                 "Section %s: sh_type is wrong. Expecting %x, got %x",
                 SectionInfo[i].name, SectionInfo[i].type, hdr1->sh_type);
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                           0, 0, 0, tmp_string);
        fail = 1;
      }
      if( hdr1->sh_flags != SectionInfo[i].attributes )
      {
        if( (hdr1->sh_flags|SHF_ALLOC) != SectionInfo[i].attributes ) 
        {
          snprintf(tmp_string, TMP_STRING_SIZE,
                   "Section %s: sh_flags is wrong. expecting %x, got %x",
                   SectionInfo[i].name, SectionInfo[i].attributes, 
                   hdr1->sh_flags);
          fprintf(stderr, "%s\n", tmp_string);
          tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                             0, 0, 0, tmp_string);
          fail = 1;
        }
      }
      SectionInfo[i].func(file1, hdr1, journal);
      tetj_result(journal, tetj_activity_count, tetj_tp_count,
                  fail ? TETJ_FAIL : TETJ_PASS);
      return;
    }
  }
  snprintf(tmp_string, TMP_STRING_SIZE, "section %s is not in the LSB",
           ElfGetString(file1, hdr1->sh_name));
  fprintf(stderr, "%s\n", tmp_string);
  tetj_result(journal, tetj_activity_count, tetj_tp_count,
              TETJ_FAIL);
  return;
}
