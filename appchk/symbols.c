#include <stdio.h>
#include "symbols.h"
#include "libraries.h"

int
checksymbols(ElfFile *file)
{
int	i, j, numsyms;
Elf32_Sym	*syms1;

#ifdef VERBOSE
fprintf(stderr, "DYNSYM\n" );
#endif /* VERBOSE */

numsyms=file->dynsymhdr->sh_size/file->dynsymhdr->sh_entsize;

syms1=(Elf32_Sym *)((caddr_t)file->addr+file->dynsymhdr->sh_offset);

for(i=0;i<numsyms;i++) {
	/* Static Symbols */
	if( ELF32_ST_BIND(syms1[i].st_info) == STB_LOCAL ) continue;
	/* Weak Symbols and provided by the app */
	if( ELF32_ST_BIND(syms1[i].st_info) == STB_WEAK ) continue;
	/* Actually provided by a section in the app */
	if( syms1[i].st_shndx != SHN_UNDEF ) continue;
	if( !(ELF32_ST_TYPE(syms1[i].st_info) == STT_OBJECT ||
	      ELF32_ST_TYPE(syms1[i].st_info) == STT_FUNC) ) continue;
/*
fprintf(stderr,"%s %x %x %x\n",
	ElfGetStringIndex(file,syms1[i].st_name,file->dynsymhdr->sh_link),
	ELF32_ST_BIND(syms1[i].st_info),
	ELF32_ST_TYPE(syms1[i].st_info),
	syms1[i].st_shndx
	);
*/
	for( j=0; j<numDynSyms; j++ ) 
	if( !strcmp(
		    ElfGetStringIndex(file, syms1[i].st_name, file->dynsymhdr->sh_link),
		    DynSyms[j].name ) )
		break;
	if( j == numDynSyms ) {
		if( !symbolinlibrary(ElfGetStringIndex(file, syms1[i].st_name, file->dynsymhdr->sh_link)) ) {
			fprintf( stderr, "Symbol %s used, but not part of LSB\n",
			    ElfGetStringIndex(file, syms1[i].st_name,
						file->dynsymhdr->sh_link) );
		continue;
		} else {
		/*
		 * Symbol is not in the LSB, but it is provided by a
		 * library that was specified as being private to the app.
		 */
		continue;
		}
	}

	/* If the symbol is versioned, make sure the correct version is used */

	/* This bit means it's internal */
	if( !file->vers ) continue;

	if( file->vers[i] & 0x8000 )
		continue;

	/* Zero means the symbol is local */
	if( file->vers[i] == 0 )
		continue;

	if( file->versionnames[file->vers[i]] == 0 )
		continue;

#ifdef DEBUG
	printf( "Symbol %s vers %x %s\n",
		ElfGetStringIndex(file,file->syms[i].st_name,
		file->symhdr->sh_link), file->vers[i],
		file->versionnames[file->vers[i]]);
#endif
	if(strcmp(file->versionnames[file->vers[i]],DynSyms[j].vername) != 0) {
		printf( "Symbol %s has version %s expecting %s\n",
			ElfGetStringIndex(file,file->syms[i].st_name,file->symhdr->sh_link),
				file->versionnames[file->vers[i]], DynSyms[j].vername);
		}
	} /* i */
 return 0; 
}
