#include "elfchk.h"

void
checkElfhdr(ElfFile *file1)
{
Elf32_Ehdr *hdr1;

hdr1=(Elf32_Ehdr *)file1->addr;

if( hdr1->e_phoff ) {
	file1->paddr=(Elf32_Phdr *)((caddr_t)file1->addr+hdr1->e_phoff);
	file1->numph = hdr1->e_phnum;
	}
if( hdr1->e_shoff ) {
	file1->saddr=(Elf32_Shdr *)((caddr_t)file1->addr+hdr1->e_shoff);
	file1->numsh = hdr1->e_shnum;
	}

/*
if( memcmp(hdr1->e_ident, hdr2->e_ident, EI_NIDENT) != 0 ) {
	int	i;
	fprintf(stderr, "compareElfhdr: e_ident doesn't match\n" );
	for( i=0;i<EI_NIDENT;i++)
		fprintf(stderr, "%2.2x ", hdr1->e_ident[i] );
	fprintf(stderr, "\n" );
	for( i=0;i<EI_NIDENT;i++)
		fprintf(stderr, "%2.2x ", hdr2->e_ident[i] );
	fprintf(stderr, "\n" );
	}
*/

/*
#define comparehdrfield( field ) \
if( hdr1->field != hdr2->field ) { \
	fprintf( stderr, "compareElfhdr: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x\n", hdr1->field ); \
	fprintf( stderr, "%8.8x\n", hdr2->field ); \
	}

comparehdrfield( e_type )
comparehdrfield( e_machine )
comparehdrfield( e_version )
comparehdrfield( e_entry )
comparehdrfield( e_phoff )
comparehdrfield( e_shoff )
comparehdrfield( e_flags )
comparehdrfield( e_ehsize )
comparehdrfield( e_phentsize )
comparehdrfield( e_phnum )
comparehdrfield( e_shentsize )
comparehdrfield( e_shnum )
comparehdrfield( e_shstrndx )

#undef comparehdrfield
*/

if( hdr1->e_shstrndx != SHN_UNDEF ) {
	file1->straddr = file1->addr+file1->saddr[hdr1->e_shstrndx].sh_offset;
	}
file1->strndx = hdr1->e_shstrndx;
}
