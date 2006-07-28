/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 *
 */

#include <stdio.h>
#include <string.h>
#include "elfchk.h"
#include "progbits.h"
#include "dwarf.h"
#include "../tetj/tetj.h"

ProgBitsFuncRec ProgbitsInfo[] = {
    {".data", checkPROGBITS_data},
    {".data.rel.ro", checkPROGBITS_data},
    {".data1", checkPROGBITS_data1},
    {".eh_frame", checkPROGBITS_eh_frame},
    {".eh_frame_hdr", checkPROGBITS_eh_frame_hdr},
    {".gcc_except_table", checkPROGBITS_gcc_except_table},
    {".interp", checkPROGBITS_interp},
    {".rodata", checkPROGBITS_rodata},
    {".rodata1", checkPROGBITS_rodata1},
    {".sdata", checkPROGBITS_sdata},
    {".sdata1", checkPROGBITS_sdata1},
};

int numProgbitsInfo = sizeof(ProgbitsInfo) / sizeof(ProgBitsFuncRec);

int
checkPROGBITS_data(ElfFile * file1, Elf_Shdr * hdr1,
		   struct tetj_handle *journal)
{
    /*
     * .data contains arbitrary initialized data.
     * There is nothing to check.
     */
    return 1;
}

int
checkPROGBITS_data1(ElfFile * file1, Elf_Shdr * hdr1,
		    struct tetj_handle *journal)
{
    /*
     * .data1 contains arbitrary initialized data.
     * There is nothing to check.
     */
    return 1;
}

int
checkPROGBITS_eh_frame(ElfFile * file1, Elf_Shdr * hdr1,
		       struct tetj_handle *journal)
{
    int error;
    if (elfchk_debug & DEBUG_SECTION_CONTENTS)
	fprintf(stderr, "checking .eh_frame %lx bytes at %lx\n",
		(u_long) hdr1->sh_size, (u_long) hdr1->sh_offset);

    /*
     * We should loop over this until the entire section has been used up,
     * but the GNU tools seem to reduce things to a single CIE record.
     */
    check_CFInformation((unsigned char *) (file1->addr) + hdr1->sh_offset,
			(u_long) hdr1->sh_size, &error);

    if (error) {
	printf
	    ("WARNING: The program has detected an error in parsing the\n"
	     "eh_frame section. This is not a problem for certification but please\n"
	     "rerun the program with the environment variable ELFCHK_DEBUG\n"
	     "set to 17 and email the output to <lsb-test@freestandards.org>\n");
    }

    return 1;
}

int
checkPROGBITS_eh_frame_hdr(ElfFile * file1, Elf_Shdr * hdr1,
			   struct tetj_handle *journal)
{
    EHFRMHDRImage *frmhdrimg;
    EHFRMHDR frmhdr;
    unsigned char *ptr;
    unsigned int i;
    int numused;
    void *tmp;

    if (elfchk_debug & DEBUG_SECTION_CONTENTS)
	fprintf(stderr, "checking .eh_frame_hdr %lx bytes at %lx\n",
		(u_long) hdr1->sh_size, (u_long) hdr1->sh_offset);

    frmhdrimg = (EHFRMHDRImage *) ((caddr_t) (file1->addr) + hdr1->sh_offset);
    if (elfchk_debug & DEBUG_SECTION_CONTENTS)
	dumpbytes((unsigned char *) frmhdrimg, hdr1->sh_size);

    frmhdr.version = frmhdrimg->version;
    frmhdr.eh_frame_ptr_enc = frmhdrimg->eh_frame_ptr_enc;
    frmhdr.fde_count_enc = frmhdrimg->fde_count_enc;
    frmhdr.table_enc = frmhdrimg->table_enc;
    ptr = (unsigned char *) frmhdrimg + sizeof(EHFRMHDRImage);
    frmhdr.eh_frame_ptr =
	read_FDE_encoded(ptr, frmhdr.eh_frame_ptr_enc, &numused);
    ptr += numused;
    frmhdr.fde_count =
	(long) read_FDE_encoded(ptr, frmhdr.fde_count_enc, &numused);
    ptr += numused;

    if (elfchk_debug & DEBUG_SECTION_CONTENTS) {
	fprintf(stderr, "version: 0x%2.2x\n", frmhdr.version);
	fprintf(stderr, "eh_frame_ptr_enc: 0x%2.2x\n",
		frmhdr.eh_frame_ptr_enc);
	fprintf(stderr, "fde_count_enc: 0x%2.2x\n", frmhdr.fde_count_enc);
	fprintf(stderr, "table_enc: 0x%2.2x\n", frmhdr.table_enc);
	fprintf(stderr, "eh_frame_ptr: %lx\n",
		(u_long) frmhdr.eh_frame_ptr);
	if (frmhdr.fde_count_enc != DW_EH_PE_omit) {
	    fprintf(stderr, "fde_count: %lx\n", frmhdr.fde_count);
	}
    }

    /* Now, decode the table, if present */

    if (elfchk_debug & DEBUG_SECTION_CONTENTS)
	dumpbytes(ptr, hdr1->sh_size - (ptr - (unsigned char *) frmhdrimg));

    for (i = 0; i < frmhdr.fde_count; i++) {
	tmp = read_FDE_encoded(ptr, frmhdr.table_enc, &numused);
	ptr += numused;
	if (elfchk_debug & DEBUG_SECTION_CONTENTS)
	    fprintf(stderr, "[%2.2x] Initial_location: %lx\t", i, (u_long) tmp);
	tmp = read_FDE_encoded(ptr, frmhdr.table_enc, &numused);
	ptr += numused;
	if (elfchk_debug & DEBUG_SECTION_CONTENTS)
	    fprintf(stderr, "address: %lx\n", (u_long) tmp);
    }

    return 1;
}

int
checkPROGBITS_gcc_except_table(ElfFile * file1, Elf_Shdr * hdr1,
			       struct tetj_handle *journal)
{
    /*
     * .gcc_except_table contains arbitrary initialized data. 
     * There is nothing to check.
     */
    return 1;
}

int
checkPROGBITS_interp(ElfFile * file1, Elf_Shdr * hdr1,
		     struct tetj_handle *journal)
{
    char *iname;

    iname = ((caddr_t) file1->addr + hdr1->sh_offset);

    if (strcmp(iname, ProgInterp) == 0) {
	return 1;
    }
    fprintf(stderr, "Found wrong intepreter in .interp section: %s ",
	    iname);
    fprintf(stderr, "instead of: %s\n", ProgInterp);
    return 0;
}

int
checkPROGBITS_rodata(ElfFile * file1, Elf_Shdr * hdr1,
		     struct tetj_handle *journal)
{
    /*
     * .rodata contains arbitrary initialized data.
     * There is nothing to check.
     */
    return 1;
}

int
checkPROGBITS_rodata1(ElfFile * file1, Elf_Shdr * hdr1,
		      struct tetj_handle *journal)
{
    /*
     * .rodata1 contains arbitrary initialized data.
     * There is nothing to check.
     */
    return 1;
}

int
checkPROGBITS_sdata(ElfFile * file1, Elf_Shdr * hdr1,
		    struct tetj_handle *journal)
{
    /*
     * .sdata contains arbitrary initialized data.
     * There is nothing to check.
     */
    return 1;
}

int
checkPROGBITS_sdata1(ElfFile * file1, Elf_Shdr * hdr1,
		     struct tetj_handle *journal)
{
    /*
     * .sdata1 contains arbitrary initialized data.
     * There is nothing to check.
     */
    return 1;
}
