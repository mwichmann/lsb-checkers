/*
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 */

#include <stdio.h>
#include "elfchk.h"

int
check_NOTE(ElfFile *file, unsigned char *notes, int length, struct tetj_handle *journal)
{
Elf32_Nhdr	*note;
char	*name,*desc;
int	curlen=0;

note=(Elf32_Nhdr *)notes;
while(curlen<length) {
	//fprintf(stderr,"note %x length %x\n", note, length);
	//fprintf(stderr,"n_namesz %d\t", note->n_namesz );
	name=(char *)(note+1);
	curlen+=sizeof(Elf32_Nhdr);
	//fprintf(stderr,"n_descsz %d\t", note->n_descsz );
	desc=(name+note->n_namesz);
	curlen+=note->n_namesz;
	/* Pad if needed */
	switch(curlen%sizeof(Elf32_Off)) {
		case 1:	curlen++;
		case 2:	curlen++;
		case 3:	curlen++;
		}
	//fprintf(stderr,"n_type %d\n", note->n_type );
	//fprintf(stderr,"name: %s\n", name);
	//fprintf(stderr,"desc:" );
	//dumpbytes(desc,note->n_descsz);
	curlen+=note->n_descsz;
	/* Pad if needed */
	switch(curlen%sizeof(Elf32_Off)) {
		case 1:	curlen++;
		case 2:	curlen++;
		case 3:	curlen++;
		}
			
	note=(Elf32_Nhdr *)(((char *)notes)+curlen);
	}

return 1;
}

