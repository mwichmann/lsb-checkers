/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include "symvers.h"
#include <string.h>

int
expand_versionnames(ElfFile *file, int maxindex)
{
  int maxentries;
  char **new_versionnames;

  /* If we want foo[index] to work, we need index + 1 entries in foo. */
  maxentries = maxindex + 1;

  /* If we request a size less than the current size, don't do anything. */
  if (maxentries < file->versionnames_size)
    return 0;

  new_versionnames = (char **) realloc(file->versionnames,
                                       maxentries * sizeof(char *));

  if (new_versionnames != NULL) {
    file->versionnames = new_versionnames;
    file->versionnames_size = maxentries;
    return 0;
  } else {
    return -1;
  }
}

void
getSymbolVersionInfo(ElfFile *file)
{
Elf_Shdr	*hdr;
Elf_Verdaux	*verdaux;
Elf_Vernaux	*vernaux;
int	numvernaux,numverdaux,i,j;

for(i=0;i<file->numsh;i++) {
	hdr=&(file->saddr[i]);
#ifdef DEBUG
	printf( "Checking %s\n", ElfGetString(file,hdr->sh_name));
#endif
	if( strcmp(ElfGetString(file,hdr->sh_name),".dynamic") == 0 ) {
		file->dynhdr=hdr;
		}
	if( strcmp(ElfGetString(file,hdr->sh_name),".dynsym") == 0 ) {
		file->symhdr=hdr;
		}
	if( strcmp(ElfGetString(file,hdr->sh_name),".dynstr") == 0 ) {
		file->dynshdr=hdr;
		}
	if( strcmp(ElfGetString(file,hdr->sh_name),".gnu.version") == 0 ) {
		file->verhdr=hdr;
		}
	if( strcmp(ElfGetString(file,hdr->sh_name),".gnu.version_d") == 0 ) {
		file->verdhdr=hdr;
		}
	if( strcmp(ElfGetString(file,hdr->sh_name),".gnu.version_r") == 0 ) {
		file->vernhdr=hdr;
		}
	}

 if (file->symhdr==0)
 {
   /* Not a dynamically linked executable */
   file->numsyms = 0;
   return;
 }

file->numsyms=file->symhdr->sh_size/file->symhdr->sh_entsize;

file->syms=(Elf_Sym *)((caddr_t)file->addr+file->symhdr->sh_offset);
if( file->verhdr )
	file->vers=(Elf_Half *)((caddr_t)file->addr+file->verhdr->sh_offset);
if( file->verdhdr )
	file->verd=(Elf_Verdef *)((caddr_t)file->addr+file->verdhdr->sh_offset);
if( file->vernhdr )
	file->vern=(Elf_Verneed *)((caddr_t)file->addr+file->vernhdr->sh_offset);
file->dyns=(Elf_Dyn *)((caddr_t)file->addr+file->dynhdr->sh_offset);

/*
Look in dynhdr to get the number of entries in verd, so we can parse it.
*/
file->numdynents=file->dynhdr->sh_size/file->dynhdr->sh_entsize;
for(i=0;i<file->numdynents;i++) {
	if( file->dyns[i].d_tag == DT_VERDEFNUM ) {
		file->numverdefs = file->dyns[i].d_un.d_val;
		}
	if( file->dyns[i].d_tag == DT_VERNEEDNUM ) {
		file->numverneed = file->dyns[i].d_un.d_val;
		}
	}

/* Get the names of the Versions used */

if( file->verd )
	for(i=0;i<file->numverdefs;i++) {
#ifdef DEBUG
		printf("version def index %x\n", file->verd->vd_ndx);
#endif
		verdaux=(Elf_Verdaux *)((char *)file->verd+file->verd->vd_aux);
		numverdaux=file->verd->vd_cnt;
		/* Note, we only want the first (ie best) version in a list */
		expand_versionnames(file, file->verd->vd_ndx);
		file->versionnames[file->verd->vd_ndx]=ElfGetStringIndex(file,
						verdaux->vda_name,
						file->verdhdr->sh_link);
		for(j=0;j<numverdaux;j++) {
#ifdef DEBUG
			printf("version def %x %x %s\n", i, verdaux->vda_name,
		  	ElfGetStringIndex(file,verdaux->vda_name,file->verdhdr->sh_link));
#endif
			verdaux=(Elf_Verdaux *)((char *)verdaux+ verdaux->vda_next);
			}
		file->verd=(Elf_Verdef *)((char *)file->verd+file->verd->vd_next);
		}

if( file->vern )
	for(i=0;i<file->numverneed;i++) {
#ifdef DEBUG
		printf("version need index %x\n", file->vern->vn_version);
#endif
		vernaux=(Elf_Vernaux *)((char *)file->vern+file->vern->vn_aux);
		numvernaux=file->vern->vn_cnt;
		/* Note, we only want the first (ie best) version in a list */
		expand_versionnames(file, vernaux->vna_next);
		if( !file->versionnames[vernaux->vna_other] )
		file->versionnames[vernaux->vna_other]=ElfGetStringIndex(file,
						vernaux->vna_name,
						file->vernhdr->sh_link);
		for(j=0;j<numvernaux;j++) {
#ifdef DEBUG
			printf("version need %x %x %s\n", i, vernaux->vna_other,
		  	ElfGetStringIndex(file,vernaux->vna_name,file->vernhdr->sh_link));
#endif
			file->versionnames[vernaux->vna_other]=ElfGetStringIndex(file,
						vernaux->vna_name,
						file->vernhdr->sh_link);
			vernaux=(Elf_Vernaux *)((char *)vernaux+ vernaux->vna_next);
			}
		file->vern=(Elf_Verneed *)((char *)file->vern+file->vern->vn_next);
		}
}
