/*
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestnadards.org)
 *
 */

#include <stdio.h>
#include "elfchk.h"

int
check_NOTE(ElfFile *file, unsigned char *notes, int length, struct tetj_handle *journal)
{
Elf32_Nhdr	*note;
char	*name,*desc;

note=(Elf32_Nhdr *)notes;
while(length>0) {
	//fprintf(stderr,"note %x length %x\n", note, length);
	fprintf(stderr,"n_namesz %d\t", note->n_namesz );
	name=(char *)(note+1);
	fprintf(stderr,"n_descsz %d\t", note->n_descsz );
	desc=(name+note->n_namesz);
	fprintf(stderr,"n_type %d\n", note->n_type );
	fprintf(stderr,"name: %s\n", name);
	fprintf(stderr,"desc:" );
	dumpbytes(desc,note->n_descsz);
	length-=sizeof(Elf32_Nhdr);
	length-=note->n_namesz;
	length-=note->n_descsz;
	note=(Elf32_Nhdr *)(((char *)note)+sizeof(Elf32_Nhdr)+note->n_namesz+note->n_descsz);
	}

return 1;
}

