/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "elfchk.h"
#include "hdr.h"
#include "proghdr.h"
#include "sections.h"

int elfchk_debug=0;

int
checkElf(ElfFile *file1, int isProgram, struct tetj_handle *journal)
{
int	i;
char	*ptr;
int elf_type = ELF_UNKNOWN;

if( (ptr=getenv("ELFCHK_DEBUG")) != NULL ) {
	elfchk_debug=strtod(ptr,NULL);
	if( elfchk_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"elfchk debug set to 0x%x\n", elfchk_debug );
	}

elf_type = checkElfhdr(file1, isProgram, journal);
for(i=0;i<file1->numph;i++)
	{
	checkElfproghdr(i, file1, journal);
	}

for(i=0;i<file1->numsh;i++)
	{
	checkElfsection(i, file1, journal);
	}

return elf_type;
}
