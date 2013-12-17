/*
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 * check a NOTE section
 * doesn't really do anything at the moment, just steps 
 * through and returns 1.
 *
 * code commented in C++ style is debugging stuff
 * code commented in C style is to quiet "not used" warnings
 *
 * The padding switches are questionable, Elf_Off may be 4 or 8
 * depending on arch, but this seems to assume 4-byte align only ???
 */

#include <stdio.h>
#include "elfchk.h"

int
check_NOTE(ElfFile *file, unsigned char *notes, int length, struct tetj_handle *journal)
{
Elf_Nhdr	*note;
/*char	*name,*desc;*/
int	curlen=0;

note=(Elf_Nhdr *)notes;
while(curlen<length) {
	//fprintf(stderr,"note %x length %x\n", note, length);
	//fprintf(stderr,"n_namesz %d\t", note->n_namesz );
/*	name=(char *)(note+1);*/
	curlen+=sizeof(Elf_Nhdr);
	//fprintf(stderr,"n_descsz %d\t", note->n_descsz );
/*	desc=(name+note->n_namesz);*/
	curlen+=note->n_namesz;
	/* Pad if needed */
	switch(curlen%sizeof(Elf_Off)) {
		case 1:	curlen++;	/* fallthrough */
		case 2:	curlen++;	/* fallthrough */
		case 3:	curlen++;
			break;
		}
	//fprintf(stderr,"n_type %d\n", note->n_type );
	//fprintf(stderr,"name: %s\n", name);
	//fprintf(stderr,"desc:" );
	//dumpbytes(desc,note->n_descsz);
	curlen+=note->n_descsz;
	/* Pad if needed */
	switch(curlen%sizeof(Elf_Off)) {
		case 1:	curlen++;	/* fallthrough */
		case 2:	curlen++;	/* fallthrough */
		case 3:	curlen++;
			break;
		}
			
	note=(Elf_Nhdr *)(((char *)notes)+curlen);
	}

return 1;
}

