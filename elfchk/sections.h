/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#ifndef _ELF_SECTIONS_H
#define _ELF_SECTIONS_H

#include "elfchk.h"

typedef int (*SectionFcn)(ElfFile *, Elf_Shdr *, struct tetj_handle *);

int checkDUMMY(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkNOBITS(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkNULL(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkPROGBITS(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkHASH(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkSTRTAB(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkNOTE(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkSYMTAB(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkDYNSYM(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkDYNAMIC(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkREL(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkRELA(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkGNU_versym(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkGNU_verdef(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkGNU_verneed(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkINIT_ARRAY(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkPREINIT_ARRAY(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
int checkFINI_ARRAY(ElfFile *file1, Elf_Shdr *hdr1 , struct tetj_handle *);
#if defined(__ia64__)
int checkIA_64_EXT(ElfFile *file1, Elf64_Shdr *hdr1 , struct tetj_handle *);
int checkIA_64_UNWIND(ElfFile *file1, Elf64_Shdr *hdr1 , struct tetj_handle *);
#endif

extern void checkElfsection(int index, ElfFile *file1, 
                            struct tetj_handle *journal);

struct SectionInfo {
	char		*name;
	int		type;
	int		attributes;
	SectionFcn	func;
	};

struct SectionType {
	char		*name;
	int		type;
	SectionFcn	func;
	};

extern	struct SectionInfo* SectionInfo[];
extern	int numSectionInfo[];
extern	struct SectionType SectionType[];
extern	int numSectionType;

#endif /* _ELF_SECTIONS_H */
