#include "elfchk.h"

typedef struct	{
	int		type;
	char		*name;
	} PhTypeFuncRec;

PhTypeFuncRec	Headers[] = {
	PT_NULL,	"PT_NULL",
	PT_LOAD,	"PT_LOAD",
	PT_DYNAMIC,	"PT_DYNAMIC",
	PT_INTERP,	"PT_INTERP",
	PT_NOTE,	"PT_NOTE",
	PT_SHLIB,	"PT_SHLIB",
	PT_PHDR,	"PT_PHDR",
	PT_NUM,		"PT_NUM",
	};

void
checkElfproghdr(int index, ElfFile *file1)
{
Elf32_Phdr *hdr1;

hdr1=&(file1->paddr[index]);

if( !hdr1 )
	return;

#ifdef VERBOSE
fprintf( stderr, "Header[%2d] %-12.12s\n",
			index, Headers[hdr1->p_type].name );
#endif /* VERBOSE */

#define checkproghdrfield( field, value ) \
if( hdr1->field != value ) { \
	fprintf( stderr, "checkElfproghdr: %s doesn't match\n", #field); \
	fprintf( stderr, "%8.8x\n", hdr1->field ); \
	fprintf( stderr, "%8.8x\n", value ); \
	}

//compareproghdrfield( p_type, 0 )
//compareproghdrfield( p_offset, 0 )
//compareproghdrfield( p_vaddr, 0 )
//compareproghdrfield( p_paddr, 0 )
//compareproghdrfield( p_filesz, 0 )
//compareproghdrfield( p_memsz, 0 )
//compareproghdrfield( p_flags, 0 )
//compareproghdrfield( p_align, 0 )

#undef compareproghdrfield
}
