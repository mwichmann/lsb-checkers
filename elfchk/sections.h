#ifndef _ELF_SECTIONS_H
#define _ELF_SECTIONS_H

#include "elfchk.h"

typedef void (*SectionFcn)(ElfFile *, Elf32_Shdr *);

void checkDUMMY(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkNOBITS(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkNULL(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkPROGBITS(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkHASH(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkSTRTAB(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkNOTE(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkSYMTAB(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkDYNSYM(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkDYNAMIC(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkREL(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkGNU_versym(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkGNU_verneed(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkPREINIT_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 );
void checkFINI_ARRAY(ElfFile *file1, Elf32_Shdr *hdr1 );
#if defined(__ia64__)
void checkIA_64_EXT(ElfFile *file1, Elf64_Shdr *hdr1 );
void checkIA_64_UNWIND(ElfFile *file1, Elf64_Shdr *hdr1 );
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
