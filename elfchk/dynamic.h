/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */

struct tetj_handle;
typedef int (*DynTagsFcn)(ElfFile *, Elf_Shdr *, Elf_Dyn *, 
                           struct tetj_handle *);


int checkDT_HASH(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_INIT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_NEEDED(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_NULL(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_PLTGOT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_PLTRELSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELA(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELAENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELASZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_STRSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_STRTAB(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SYMENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SYMTAB(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_ADDRRNGHI(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_ADDRRNGLO(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_AUXILIARY(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_BIND_NOW(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_DEBUG(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_FILTER(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_FINI(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_FINI_ARRAY(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_FINI_ARRAYSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_FLAGS_1(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_HIOS(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_HIPROC(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_INIT_ARRAY(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_INIT_ARRAYSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_JMPREL(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_LOOS(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_LOPROC(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_NUM(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_PLTREL(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_POSFLAG_1(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELCOUNT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_REL(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELACOUNT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RELSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_RPATH(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SONAME(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SYMBOLIC(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SYMINENT(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SYMINFO(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_SYMINSZ(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_TEXTREL(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VALRNGHI(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VALRNGLO(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VERDEF(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VERDEFNUM(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VERNEED(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VERNEEDNUM(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);
int checkDT_VERSYM(ElfFile *, Elf_Shdr *, Elf_Dyn *, struct tetj_handle *);

struct DynamicInfo {
	char		*name;
	int		tag;
	DynTagsFcn	func;
	};

extern	struct DynamicInfo DynamicInfo[];
extern	int numDynamicInfo;
