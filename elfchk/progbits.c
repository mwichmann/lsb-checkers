/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestnadards.org)
 *
 */

#include <stdio.h>
#include <string.h>
#include "elfchk.h"
#include "progbits.h"
#include "../tetj/tetj.h"

ProgBitsFuncRec ProgbitsInfo[] = {
	{ ".data",checkPROGBITS_data },
	{ ".interp",checkPROGBITS_interp },
	};

int numProgbitsInfo = sizeof(ProgbitsInfo)/sizeof(ProgBitsFuncRec);

int
checkPROGBITS_data(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
fprintf(stderr, "checkPROGBITS_data\n" );
return 0;
}

int
checkPROGBITS_interp(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
char	*iname;
fprintf(stderr, "checkPROGBITS_interp\n" );

iname=((caddr_t)file1->addr+hdr1->sh_offset);

if( strcmp(iname, ProgInterp ) == 0 ) {
	return 1;
	}
fprintf(stderr,"Found wrong intepreter in .interp section: %s ", iname );
fprintf(stderr,"instead of: %s\n", ProgInterp );
return 0;
}

