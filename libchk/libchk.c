#include <unistd.h>
#include "elfchk.h"

main()
{
check_libs();
}

char *libpaths[] = {
	"/lib/%s",
	"/usr/lib/%s",
	"/usr/X11R6/lib/%s",
	0 };

check_lib(char *libname,char *entries[])
{
ElfFile		*file=NULL;
Elf32_Shdr	*hdr;
Elf32_Sym	*syms;
char filename[128];
int numsyms,i,j;


/* Find the library */

for(i=0;libpaths[i];i++) {
	sprintf(filename,libpaths[i],libname);
	if( access(filename,R_OK) == 0 ) {
		file=OpenElfFile(filename);
		if(file) break;
		}
	}

if( !file ) {
	printf("Unable to find library %s\n", libname );
	return;
	}

checkElfhdr(file);

printf("Checking symbols in %s\n", filename );

/* Open it, and start parsing ELF */

for(i=0;i<file->numsh;i++) {
	hdr=&(file->saddr[i]);
#ifdef DEBUG
	printf( "Checking %s\n", ElfGetString(file,hdr->sh_name));
#endif
	if( strcmp(ElfGetString(file,hdr->sh_name),".dynsym") == 0 ) {
		break;
		}
	}

if( i == file->numsh ) {
	printf("Unable to find .dynsym section in %s\n", libname );
	return;
	}

numsyms=hdr->sh_size/hdr->sh_entsize;

syms=(Elf32_Sym *)((caddr_t)file->addr+hdr->sh_offset);

for(i=0;entries[i];i++) {
	/* See if this symbol is in the dynsyn section of the library */

	/* printf("Looking for %s\n", entries[i]); */
	for(j=0;j<numsyms;j++) {
		if( !( ELF32_ST_TYPE(syms[j].st_info) == STT_FUNC ||
		       ELF32_ST_TYPE(syms[j].st_info) == STT_OBJECT) ) continue;
#ifdef DEBUG
		printf("Bind=%x\n", ELF32_ST_BIND(syms[j].st_info) );
		printf("Type=%x\n", ELF32_ST_TYPE(syms[j].st_info) );
		printf("Comparing %s and %s\n", 
			ElfGetStringIndex(file,syms[j].st_name,
				hdr->sh_link),entries[i]);
#endif
		if( strcmp(ElfGetStringIndex(file,syms[j].st_name,
				hdr->sh_link),entries[i]) == 0 ) break;
		}
	if( j == numsyms )
		printf("Didn't find %s in %s\n", entries[i],libname);
	}
}
