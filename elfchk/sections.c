/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdio.h>
#include <string.h>
#include "sections.h"
#include "progbits.h"
#include "../tetj/tetj.h"

int
checkDUMMY(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "DUMMY SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkGNU_versym(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_versym SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkGNU_verdef(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_verdef SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkGNU_verneed(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_verneed SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkNOBITS(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "NOBITS SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkNULL(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "NULL SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkBITS(char *secname, ElfFile *file1, Elf_Shdr *hdr1)
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
 return 0; 
}

int
checkPROGBITS(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
  int i;
  /*
   * Need to look at the section name, and figure out how to check it
   * more closely.
   */

  for(i=0;i<numProgbitsInfo;i++ ) {
	if( strcmp(ElfGetString(file1, hdr1->sh_name),
	      ProgbitsInfo[i].secname) == 0 ) {
  		return ProgbitsInfo[i].func( file1, hdr1, journal );
	}
  }
#ifdef VERBOSE
fprintf(stderr, "Contents of section %s not checked.\n",
				ElfGetString(file1, hdr1->sh_name));
#endif
  return 0;
}

int
checkHASH(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
  return checkBITS( "HASH", file1, hdr1 );
}

int
checkSTRTAB(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
  return checkBITS( "STRTAB", file1, hdr1 );
}

int
checkNOTE(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
  return check_NOTE(file1, ((caddr_t)(file1->addr)+hdr1->sh_offset), hdr1->sh_size, journal );
}

int
checkSYMBOLS(char *secname, ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
int	i, numsyms;
Elf_Sym	*syms1;

#ifdef VERBOSE
fprintf(stderr, "%s SECTION\n", secname );
#endif /* VERBOSE */

numsyms=hdr1->sh_size/hdr1->sh_entsize;

syms1=(Elf_Sym *)((caddr_t)file1->addr+hdr1->sh_offset);

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
 return 0; 
}

int
checkSYMTAB(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
checkSYMBOLS( "SYMTAB", file1, hdr1, journal );
 return 0; 
}

int
checkDYNSYM(ElfFile *file, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

file->dynsymhdr=hdr1;
 return 0; 
}

int
checkREL(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
int	i, numrels, pass=1;
Elf_Rel	*rel1;

#ifdef VERBOSE
fprintf(stderr, "REL SECTION\n" );
#endif /* VERBOSE */

numrels=hdr1->sh_size/hdr1->sh_entsize;

rel1=(Elf_Rel *)((caddr_t)file1->addr+hdr1->sh_offset);

#define comparerelfield( field ) \
if( rel1[i].field != rel2[i].field ) { \
	fprintf( stderr, "compareREL: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x != ", rel1[i].field ); \
	fprintf( stderr, "%8.8x\n", rel2[i].field ); \
        pass = 0; \
	}

for(i=0;i<numrels;i++)
	{
/*
	comparerelfield( r_offset )
	comparerelfield( r_info )
*/
	}
#undef comparerelfield
 return pass; 
}

int
checkRELA(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
int	i, numrels, pass = 1;
Elf_Rela	*rel1;

#ifdef VERBOSE
fprintf(stderr, "RELA SECTION\n" );
#endif /* VERBOSE */

numrels=hdr1->sh_size/hdr1->sh_entsize;

rel1=(Elf_Rela *)((caddr_t)file1->addr+hdr1->sh_offset);

#define comparerelfield( field ) \
if( rel1[i].field != rel2[i].field ) { \
	fprintf( stderr, "compareRELA: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x != ", rel1[i].field ); \
	fprintf( stderr, "%8.8x\n", rel2[i].field ); \
        pass = 0; \
	}

for(i=0;i<numrels;i++)
	{
/*
	comparerelfield( r_offset )
	comparerelfield( r_info )
*/
	}
#undef comparerelfield
 return pass; 
}

int
checkINIT_ARRAY(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "INIT_ARRAY SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkPREINIT_ARRAY(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "PREINIT_ARRAY SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkFINI_ARRAY(ElfFile *file1, Elf_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "FINI_ARRAY SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

#if defined(__ia64__)
int
checkIA_64_EXT(ElfFile *file1, Elf64_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "IA_64_EXT SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}

int
checkIA_64_UNWIND(ElfFile *file1, Elf64_Shdr *hdr1, struct tetj_handle *journal)
{
#ifdef VERBOSE
fprintf(stderr, "IA_64_UNWIND SECTION\n" );
#endif /* VERBOSE */
 return 0; 
}
#endif

void
dumpsection(Elf_Shdr *hdr)
{
fprintf(stderr,"sh_type %x\n", hdr->sh_type );
fprintf(stderr,"sh_flags %lx\n", (u_long)hdr->sh_flags );
fprintf(stderr,"sh_addr %lx\n", (u_long)hdr->sh_addr );
fprintf(stderr,"sh_offset %lx\n", (u_long)hdr->sh_offset );
fprintf(stderr,"sh_size %lx\n", (u_long)hdr->sh_size );
fprintf(stderr,"sh_link %x\n", hdr->sh_link );
fprintf(stderr,"sh_info %x\n", hdr->sh_info );
fprintf(stderr,"sh_addralign %lx\n", (u_long)hdr->sh_addralign );
fprintf(stderr,"sh_entsize %lx\n", (u_long)hdr->sh_entsize );
return;
}

void
checkElfsection(int index, ElfFile *file1, struct tetj_handle *journal)
{
  Elf_Shdr	*hdr1;
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
                   "Section %s: sh_flags is wrong. expecting %x, got %lx",
                   SectionInfo[i].name, SectionInfo[i].attributes, 
                   (u_long)hdr1->sh_flags);
          fprintf(stderr, "%s\n", tmp_string);
          tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
                             0, 0, 0, tmp_string);
          fail = 1;
        }
      }
      switch (SectionInfo[i].func(file1, hdr1, journal)) {
	      case 1: /* Pass */
			break;
	      case 0: /* Not checked */
			if( elfchk_debug&DEBUG_SECTION_CONTENTS ) {
				fprintf( stderr, "Section [%2d] %-12.12s Not checked\n",
						i, SectionInfo[i].name );
			}
			break;
	      case -1: /* Fail */
			fail = 1;
			break;
      }

      tetj_result(journal, tetj_activity_count, tetj_tp_count,
                  fail ? TETJ_FAIL : TETJ_PASS);
      tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
      return;
    }
  }
  if( hdr1->sh_flags &SHF_ALLOC ) {
  	snprintf(tmp_string, TMP_STRING_SIZE, "section %s is not in the LSB",
           ElfGetString(file1, hdr1->sh_name));
  	fprintf(stderr, "%s\n", tmp_string);
		tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
											 0, 0, 0, tmp_string);
  	tetj_result(journal, tetj_activity_count, tetj_tp_count,
              	TETJ_FAIL);
  	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  } else {
  	snprintf(tmp_string, TMP_STRING_SIZE, "ignoring %s: Not in the LSB but not loaded",
           ElfGetString(file1, hdr1->sh_name));
	if( elfchk_debug&DEBUG_SECTION_HEADERS )
  		fprintf(stderr, "%s\n", tmp_string);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
										 0, 0, 0, tmp_string);
	tetj_result(journal, tetj_activity_count, tetj_tp_count,
							TETJ_WARNING);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  }
  return;
}
