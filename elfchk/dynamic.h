
struct tetj_handle;
typedef void (*DynTagsFcn)(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, 
                           struct tetj_handle *);


void checkDT_HASH(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_INIT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_NEEDED(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_NULL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_PLTGOT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_PLTRELSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_RELA(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_RELAENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_RELASZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_STRSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_STRTAB(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SYMENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SYMTAB(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_ADDRRNGLO(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_AUXILIARY(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_BIND_NOW(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_DEBUG(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_FILTER(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_FINI(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_FINI_ARRAY(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_FINI_ARRAYSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_FLAGS_1(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_HIOS(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_HIPROC(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_INIT_ARRAY(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_INIT_ARRAYSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_JMPREL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_LOOS(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_LOPROC(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_NUM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_PLTREL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_POSFLAG_1(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_REL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_RELENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_RELSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_RPATH(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SONAME(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SYMBOLIC(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SYMINENT(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SYMINFO(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_SYMINSZ(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_TEXTREL(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VALRNGHI(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VALRNGLO(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VERDEF(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VERDEFNUM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VERNEED(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VERNEEDNUM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);
void checkDT_VERSYM(ElfFile *, Elf32_Shdr *, Elf32_Dyn *, struct tetj_handle *);

struct DynamicInfo {
	char		*name;
	int		tag;
	DynTagsFcn	func;
	};

extern	struct DynamicInfo DynamicInfo[];
extern	int numDynamicInfo;
