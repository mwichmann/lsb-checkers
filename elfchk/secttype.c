/* Generated file - Do Not Edit */
#include "elfchk.h"
#include "sections.h"

struct SectionType SectionType[] = {
	{"SHT_DYNAMIC",SHT_DYNAMIC,checkDYNAMIC},
	{"SHT_DYNSYM",SHT_DYNSYM,checkDYNSYM},
	{"SHT_FINI_ARRAY",SHT_FINI_ARRAY,checkFINI_ARRAY},
	{"SHT_GNU_verdef",SHT_GNU_verdef,checkGNU_verdef},
	{"SHT_GNU_verneed",SHT_GNU_verneed,checkGNU_verneed},
	{"SHT_GNU_versym",SHT_GNU_versym,checkGNU_versym},
	{"SHT_HASH",SHT_HASH,checkHASH},
#if __ia64__
	{"SHT_IA_64_EXT",SHT_IA_64_EXT,checkIA_64_EXT},
#endif /* __ia64__ */
#if __ia64__
	{"SHT_IA_64_UNWIND",SHT_IA_64_UNWIND,checkIA_64_UNWIND},
#endif /* __ia64__ */
	{"SHT_INIT_ARRAY",SHT_INIT_ARRAY,checkINIT_ARRAY},
	{"SHT_NOBITS",SHT_NOBITS,checkNOBITS},
	{"SHT_NOTE",SHT_NOTE,checkNOTE},
	{"SHT_NULL",SHT_NULL,checkNULL},
	{"SHT_PREINIT_ARRAY",SHT_PREINIT_ARRAY,checkPREINIT_ARRAY},
	{"SHT_PROGBITS",SHT_PROGBITS,checkPROGBITS},
	{"SHT_REL",SHT_REL,checkREL},
	{"SHT_RELA",SHT_RELA,checkRELA},
	{"SHT_STRTAB",SHT_STRTAB,checkSTRTAB},
	{"SHT_SYMTAB",SHT_SYMTAB,checkSYMTAB},
	};

int numSectionType = sizeof(SectionType)/sizeof(struct SectionType);
