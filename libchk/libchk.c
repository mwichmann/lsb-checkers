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

check_lib(char *libname,struct versym entries[])
{
ElfFile		*file=NULL;
Elf32_Shdr	*hdr;
char filename[128];
int i,j;

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

for(i=0;entries[i].name;i++) {
	/* See if this symbol is in the dynsyn section of the library */

	/* printf("Looking for %s\n", entries[i].name); */
	for(j=0;j<file->numsyms;j++) {
		if( !( ELF32_ST_TYPE(file->syms[j].st_info) == STT_FUNC ||
		       ELF32_ST_TYPE(file->syms[j].st_info) == STT_OBJECT) )
			continue;
#ifdef DEBUG
		printf("Bind=%x\n", ELF32_ST_BIND(file->syms[j].st_info) );
		printf("Type=%x\n", ELF32_ST_TYPE(file->syms[j].st_info) );
		printf("Comparing %s and %s\n", 
			ElfGetStringIndex(file,file->syms[j].st_name,
				file->symhdr->sh_link),entries[i].name);
#endif
		if( strcmp(ElfGetStringIndex(file,file->syms[j].st_name,
				file->symhdr->sh_link),entries[i].name) == 0 )
			break;
		}
	if( j == file->numsyms ) {
		printf("Didn't find %s in %s\n", entries[i].name,libname);
		continue;
		}

	/* Now, check to see if it has the right version associated with it */

	/* This bit means it's internal */
	if( file->vers[j] & 0x8000 )
		continue;

	/* Zero means the symbol is local */
	if( file->vers[j] == 0 )
		continue;

	/* One means the symbol is defined & available, but not versioned */
	if( file->vers[j] == 1 )
		if( entries[i].vername[0] != '\000' )
		printf("Warning!!! Found unversioned symbol %s, but expecting version %s\n",
		ElfGetStringIndex(file,file->syms[j].st_name,file->symhdr->sh_link),
		entries[i].vername);
		continue;

	/* This is just a sanity check, which should never be hit */
	if( file->vers[j] > file->numverdefs ) {
		printf("Warning!!! Found version %x, for %s which is too big\n",
		file->vers[j],
		ElfGetStringIndex(file,file->syms[j].st_name,file->symhdr->sh_link));
		continue;
	}

#ifdef DEBUG
	printf("Symbol %s vers %s\n",
		ElfGetStringIndex(file,file->syms[j].st_name,file->symhdr->sh_link),
		file->versionnames[file->vers[j]]);
#endif
	if( strcmp(file->versionnames[file->vers[j]], entries[i].vername) != 0 ) {
		printf("%s has version %s, expecting %s\n",
			ElfGetStringIndex(file,file->syms[j].st_name,file->symhdr->sh_link),
			file->versionnames[file->vers[j]], entries[i].vername );
		}
	}
}
