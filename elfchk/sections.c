#include <stdio.h>
#include <string.h>
#include "elfchk.h"
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
int	i, size;
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
checkDYNSYM(ElfFile *file1, Elf32_Shdr *hdr1 )
{
int	i, j, numsyms;
Elf32_Sym	*syms1;

#ifdef VERBOSE
fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

numsyms=hdr1->sh_size/hdr1->sh_entsize;

syms1=(Elf32_Sym *)((caddr_t)file1->addr+hdr1->sh_offset);

for(i=0;i<numsyms;i++) {
	/* Static Symbols */
	if( ELF32_ST_BIND(syms1[i].st_info) == STB_LOCAL ) continue;
	/* Weak Symbols and provided by the app */
	if( ELF32_ST_BIND(syms1[i].st_info) == STB_WEAK ) continue;
	/* Actually provided by a section in the app */
	if( syms1[i].st_shndx != 0 ) continue;
	if( !(ELF32_ST_TYPE(syms1[i].st_info) == STT_OBJECT ||
	      ELF32_ST_TYPE(syms1[i].st_info) == STT_FUNC) ) continue;
/*
fprintf(stderr,"%s %x %x %x\n",
	ElfGetStringIndex(file1,syms1[i].st_name,hdr1->sh_link),
	ELF32_ST_BIND(syms1[i].st_info),
	ELF32_ST_TYPE(syms1[i].st_info),
	syms1[i].st_shndx
	);
*/
	for( j=0; j<numDynSyms; j++ ) 
	if( !strcmp(
		    ElfGetStringIndex(file1, syms1[i].st_name, hdr1->sh_link),
		    DynSyms[j].name ) )
		break;
	if( j == numDynSyms )
		fprintf( stderr, "Symbol %s used, but not part of LSB\n",
		    ElfGetStringIndex(file1, syms1[i].st_name, hdr1->sh_link) );
	/* If the symbol is versioned, make sure the correct version is used */
	} /* i */
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

/*
#define comparesectionfield( field ) \
if( hdr1->field != hdr2->field ) { \
	fprintf( stderr, "compareElfsection: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x != ", hdr1->field ); \
	fprintf( stderr, "%8.8x\n", hdr2->field ); \
	}

if( strcmp(ElfGetString(file1, hdr1->sh_name),
		ElfGetString(file2, hdr2->sh_name)) ) {
	fprintf( stderr, "compareElfsection: sh_name doesn't match\n");
	fprintf( stderr, "%s\n", ElfGetString(file1, hdr1->sh_name) );
	fprintf( stderr, "%s\n", ElfGetString(file2, hdr2->sh_name) );
	}

comparesectionfield( sh_type ) 
comparesectionfield( sh_flags ) 
comparesectionfield( sh_addr ) 
comparesectionfield( sh_offset ) 
comparesectionfield( sh_size ) 
comparesectionfield( sh_link ) 
comparesectionfield( sh_info ) 
comparesectionfield( sh_addralign ) 
comparesectionfield( sh_entsize ) 
*/

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
		if( hdr1->sh_flags != SectionInfo[i].attributes ) {
			fprintf(stderr,"Section %s: sh_flag is wrong. ",
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
