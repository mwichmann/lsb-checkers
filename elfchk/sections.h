#ifndef _ELF_SECTIONS_H
#define _ELF_SECTIONS_H

#include "elfchk.h"

typedef void (*SectionFcn)(ElfFile *, Elf32_Shdr *, struct tetj_handle *);

void checkDUMMY(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkNOBITS(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkNULL(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkPROGBITS(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkHASH(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkSTRTAB(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkNOTE(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkSYMTAB(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkDYNSYM(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkDYNAMIC(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkREL(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkRELA(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkGNU_versym(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkGNU_verdef(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkGNU_verneed(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkPREINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
void checkFINI_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 , struct tetj_handle *);
#if defined(__ia64__)
void checkIA_64_EXT(ElfFile *file1, Elf64_Shdr *hdr1 , struct tetj_handle *);
void checkIA_64_UNWIND(ElfFile *file1, Elf64_Shdr *hdr1 , struct tetj_handle *);
#endif

extern void checkElfsection(int index, ElfFile *file1, 
                            struct tetj_handle *journal);

struct SectionInfo {
	char		*name;
	int		type;
	int		attributes;
	SectionFcn	func;
	};

extern	struct SectionInfo SectionInfo[];
extern	int numSectionInfo;

#endif /* _ELF_SECTIONS_H */
