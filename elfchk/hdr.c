#include <stdio.h>
#include "hdr.h"
#include "symvers.h"

void
checkElfhdr(ElfFile *file1, int isProgram)
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

/* Check e_ident */

#define checkhdrident( index, value ) \
if( hdr1->e_ident[index] != value ) { \
	fprintf( stderr, "compareElfhdr: e_ident[%s] isn't expected value %s\n", #index, #value); \
	}

checkhdrident( EI_MAG0, ELFMAG0 )
checkhdrident( EI_MAG1, ELFMAG1 )
checkhdrident( EI_MAG2, ELFMAG2 )
checkhdrident( EI_MAG3, ELFMAG3 )
#if defined(i386)
checkhdrident( EI_CLASS, ELFCLASS32 )
#elif defined( ia64 )
checkhdrident( EI_CLASS, ELFCLASS64 )
#else
fprintf(stderr, "EI_CLASS not checked!!\n");
#endif
#if defined(i386)
checkhdrident( EI_DATA, ELFDATA2LSB )
#elif defined( ia64 )
checkhdrident( EI_DATA, ELFDATA2LSB )
#else
fprintf(stderr, "EI_DATA not checked!!\n");
#endif
checkhdrident( EI_VERSION, EV_CURRENT )
checkhdrident( EI_OSABI, ELFOSABI_SYSV )
checkhdrident( EI_ABIVERSION, 0 )

#undef checkhdrident

#define checkhdrfield( member, value ) \
if( hdr1->member != value ) { \
	fprintf( stderr, "compareElfhdr: %s isn't expected value %s\n", #member, #value); \
	fprintf( stderr, "\tfound %x instead\n", hdr1->member); \
	}

/* Check e_type */

if (isProgram)
{
  checkhdrfield( e_type, ET_EXEC )
}
else
{
  checkhdrfield( e_type, ET_DYN )
}

/* Check e_machine */

#if defined(i386)
checkhdrfield( e_machine, EM_386 )
#elif defined( ia64 )
checkhdrfield( e_machine, EM_IA_64 )
#else
fprintf(stderr, "e_machine not checked!!\n");
#endif

/* Check e_version */

checkhdrfield( e_version, EV_CURRENT )

/* Check e_flags */

#if defined(i386)
checkhdrfield( e_flags, 0 )
#elif defined( ia64 )
checkhdrfield( e_flags, 0 ) /* Need to figure this out for Linux */
#else
fprintf(stderr, "e_flags not checked!!\n");
#endif

#undef checkhdrfield

if( hdr1->e_shstrndx != SHN_UNDEF ) {
	file1->straddr = file1->addr+file1->saddr[hdr1->e_shstrndx].sh_offset;
	}
file1->strndx = hdr1->e_shstrndx;

getSymbolVersionInfo(file1);
}
