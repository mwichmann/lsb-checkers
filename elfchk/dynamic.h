/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestnadards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */

struct tetj_handle;
typedef int (*DynTagsFcn)(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, 
                           struct tetj_handle *);


int checkDT_HASH(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_INIT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_NEEDED(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_NULL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_PLTGOT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_PLTRELSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RELA(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RELAENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RELASZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_STRSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_STRTAB(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SYMENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SYMTAB(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_ADDRRNGHI(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_ADDRRNGLO(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_AUXILIARY(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_BIND_NOW(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_DEBUG(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_FILTER(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_FINI(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_FINI_ARRAY(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_FINI_ARRAYSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_FLAGS_1(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_HIOS(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_HIPROC(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_INIT_ARRAY(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_INIT_ARRAYSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_JMPREL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_LOOS(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_LOPROC(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_NUM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_PLTREL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_POSFLAG_1(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RELCOUNT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_REL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RELENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RELSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_RPATH(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SONAME(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SYMBOLIC(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SYMINENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SYMINFO(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_SYMINSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_TEXTREL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VALRNGHI(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VALRNGLO(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VERDEF(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VERDEFNUM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VERNEED(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VERNEEDNUM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
int checkDT_VERSYM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);

struct DynamicInfo {
	char		*name;
	int		tag;
	DynTagsFcn	func;
	};

extern	struct DynamicInfo DynamicInfo[];
extern	int numDynamicInfo;
