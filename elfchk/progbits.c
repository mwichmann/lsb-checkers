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
	{ ".data1",checkPROGBITS_data1 },
	{ ".interp",checkPROGBITS_interp },
	{ ".rodata",checkPROGBITS_rodata },
	{ ".rodata1",checkPROGBITS_rodata1 },
	{ ".sdata",checkPROGBITS_sdata },
	{ ".sdata1",checkPROGBITS_sdata1 },
	};

int numProgbitsInfo = sizeof(ProgbitsInfo)/sizeof(ProgBitsFuncRec);

int
checkPROGBITS_data(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
/*
 * .data contains arbitrary initialized data. There is nothing to check.
 */
return 0;
}

int
checkPROGBITS_data1(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
/*
 * .data contains arbitrary initialized data. There is nothing to check.
 */
return 0;
}

int
checkPROGBITS_interp(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
char	*iname;

iname=((caddr_t)file1->addr+hdr1->sh_offset);

if( strcmp(iname, ProgInterp ) == 0 ) {
	return 1;
	}
fprintf(stderr,"Found wrong intepreter in .interp section: %s ", iname );
fprintf(stderr,"instead of: %s\n", ProgInterp );
return 0;
}

int
checkPROGBITS_rodata(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
/*
 * .rodata contains arbitrary initialized data. There is nothing to check.
 */
return 0;
}

int
checkPROGBITS_rodata1(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
/*
 * .rodata1 contains arbitrary initialized data. There is nothing to check.
 */
return 0;
}

int
checkPROGBITS_sdata(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
/*
 * .sdata contains arbitrary initialized data. There is nothing to check.
 */
return 0;
}

int
checkPROGBITS_sdata1(ElfFile *file1, Elf32_Shdr *hdr1, struct tetj_handle *journal)
{
/*
 * .sdata1 contains arbitrary initialized data. There is nothing to check.
 */
return 0;
}

