#include <stdio.h>
#include <string.h>
#include "sections.h"

void
checkDUMMY(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "DUMMY SECTION\n" );
#endif /* VERBOSE */
}

void
checkGNU_versym(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_versym SECTION\n" );
#endif /* VERBOSE */
}

void
checkGNU_verneed(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "checkGNU_verneed SECTION\n" );
#endif /* VERBOSE */
}

void
checkNOBITS(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "NOBITS SECTION\n" );
#endif /* VERBOSE */
}

void
checkNULL(ElfFile *file1, Elf32_Shdr *hdr1 )
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
checkPROGBITS(ElfFile *file1, Elf32_Shdr *hdr1 )
{
checkBITS( "PROGBITS", file1, hdr1 );
}

void
checkHASH(ElfFile *file1, Elf32_Shdr *hdr1 )
{
checkBITS( "HASH", file1, hdr1 );
}

void
checkSTRTAB(ElfFile *file1, Elf32_Shdr *hdr1 )
{
checkBITS( "STRTAB", file1, hdr1 );
}

void
checkNOTE(ElfFile *file1, Elf32_Shdr *hdr1 )
{
checkBITS( "NOTE", file1, hdr1 );
}

void
checkSYMBOLS(char *secname, ElfFile *file1, Elf32_Shdr *hdr1 )
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
checkSYMTAB(ElfFile *file1, Elf32_Shdr *hdr1 )
{
checkSYMBOLS( "SYMTAB", file1, hdr1 );
}

void
checkDYNSYM(ElfFile *file, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

file->dynsymhdr=hdr1;
}

void
checkREL(ElfFile *file1, Elf32_Shdr *hdr1 )
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
}

void
checkINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "INIT_ARRAY SECTION\n" );
#endif /* VERBOSE */
}

void
checkPREINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "PREINIT_ARRAY SECTION\n" );
#endif /* VERBOSE */
}

void
checkFINI_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 )
{
#ifdef VERBOSE
fprintf(stderr, "FINI_ARRAY SECTION\n" );
#endif /* VERBOSE */
}

void
checkElfsection(int index, ElfFile *file1)
{
Elf32_Shdr	*hdr1;
int	i;

hdr1=&(file1->saddr[index]);
if ( index == 0 ) return; /* A dummy section */

#ifdef VERBOSE
fprintf( stderr, "checkElfsection[%d]: %s\n", index,
				ElfGetString(file1, hdr1->sh_name));
#endif /* VERBOSE */

if( !hdr1 )
	return;

for(i=0;i<numSectionInfo;i++) {
	if( strcmp(ElfGetString(file1, hdr1->sh_name),
			SectionInfo[i].name ) == 0 ) {
#ifdef VERBOSE
		fprintf( stderr, "Section[%2d] %-12.12s %s\n",
			index, SectionInfo[i].name,
			ElfGetString(file1, hdr1->sh_name) );
#endif /* VERBOSE */
		if( hdr1->sh_type != SectionInfo[i].type ) {
			fprintf(stderr,"Section %s: sh_type is wrong. ",
						SectionInfo[i].name );
			fprintf(stderr,"  expecting %x, got %x\n",
					SectionInfo[i].type, hdr1->sh_type );
		}
		if( hdr1->sh_flags != SectionInfo[i].attributes )
		  if( hdr1->sh_flags|SHF_ALLOC != SectionInfo[i].attributes ) {
			fprintf(stderr,"Section %s: sh_flags is wrong. ",
						SectionInfo[i].name );
			fprintf(stderr,"  expecting %x, got %x\n",
				SectionInfo[i].attributes, hdr1->sh_flags );
		}
		SectionInfo[i].func(file1, hdr1);
		return;
		}
	}
fprintf( stderr, "section %s is not in the LSB\n",
					ElfGetString(file1, hdr1->sh_name));
return;
}
