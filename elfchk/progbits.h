/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 *
 */
#ifndef _ELF_PROGBITS_H
#define _ELF_PROGBITS_H

typedef int (*ProgBitsFcn)(ElfFile *, Elf32_Shdr *, struct tetj_handle *);

int checkPROGBITS_data(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_data1(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_eh_frame(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_eh_frame_hdr(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_interp(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_rodata(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_rodata1(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_sdata(ElfFile *, Elf32_Shdr *, struct tetj_handle *);
int checkPROGBITS_sdata1(ElfFile *, Elf32_Shdr *, struct tetj_handle *);

typedef struct {
	char	*secname;
	ProgBitsFcn	func;
	} ProgBitsFuncRec;

extern ProgBitsFuncRec ProgbitsInfo[];
extern int numProgbitsInfo;

#endif /* _ELF_PROGBITS_H */
