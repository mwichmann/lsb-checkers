/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */

#include "../tetj/tetj.h"

typedef int (*DynTagsFcn)(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);

int checkDT_HASH(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_INIT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_NEEDED(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_NULL(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_PLTGOT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_PLTRELSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELA(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELAENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELASZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_STRSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_STRTAB(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SYMENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SYMTAB(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_ADDRRNGHI(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_ADDRRNGLO(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_AUXILIARY(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_BIND_NOW(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_DEBUG(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_FILTER(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_FINI(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_FINI_ARRAY(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_FINI_ARRAYSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_FLAGS_1(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_HIOS(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_HIPROC(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_INIT_ARRAY(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_INIT_ARRAYSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_JMPREL(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_LOOS(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_LOPROC(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_NUM(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_PLTREL(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_POSFLAG_1(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELCOUNT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_REL(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELACOUNT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RELSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RPATH(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_RUNPATH(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_FLAGS(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_PREINIT_ARRAY(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_PREINIT_ARRAYSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SONAME(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SYMBOLIC(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SYMINENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SYMINFO(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_SYMINSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_TEXTREL(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VALRNGHI(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VALRNGLO(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VERDEF(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VERDEFNUM(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VERNEED(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VERNEEDNUM(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);
int checkDT_VERSYM(ElfFile *, Elf_Shdr *, Elf_Dyn *, tetjp);

struct DynamicInfo {
	char		*name;
	int		tag;
	DynTagsFcn	func;
};

extern	struct DynamicInfo* DynamicInfo[];
extern	int numDynamicInfo[];

const char *get_tag_name(u_long dt_value);
