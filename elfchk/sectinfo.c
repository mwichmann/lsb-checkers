/* Generated file - Do Not Edit */
#include "elfchk.h"
#include "sections.h"

struct SectionInfo SectionInfo[] = {
	{".bss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
	{".comment",SHT_PROGBITS,0,checkPROGBITS},
	{".ctors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".debug",SHT_PROGBITS,0,checkPROGBITS},
	{".dtors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".dynamic",SHT_DYNAMIC,SHF_ALLOC+SHF_WRITE,checkDYNAMIC},
	{".dynstr",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".dynsym",SHT_DYNSYM,SHF_ALLOC,checkDYNSYM},
	{".eh_frame",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if defined(__i386__)
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __i386__ */
#if defined(__ia64__)
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
#if defined(__powerpc__)
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc__ */
#if defined(__powerpc__)
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if defined(__ia64__)
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* __ia64__ */
#if defined(__ia64__)
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
#if defined(__ia64__)
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* __ia64__ */
#if defined(__ia64__)
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if defined(__i386__)
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __i386__ */
#if defined(__ia64__)
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __ia64__ */
#if defined(__powerpc__)
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* __powerpc__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if defined(__i386__)
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if defined(__i386__)
	{".rel.data",SHT_REL,0,checkREL},
#endif /* __i386__ */
#if defined(__i386__)
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if defined(__i386__)
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if defined(__i386__)
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if defined(__i386__)
	{".rel.text",SHT_REL,0,checkREL},
#endif /* __i386__ */
#if defined(__powerpc__)
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ */
#if defined(__ia64__)
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __ia64__ */
#if defined(__powerpc__)
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ */
#if defined(__powerpc__)
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ */
#if defined(__ia64__)
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __ia64__ */
#if defined(__powerpc__)
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ */
#if defined(__powerpc__)
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if defined(__i386__)
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
#endif /* __i386__ */
#if defined(__ia64__)
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* __ia64__ */
#if defined(__powerpc__)
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* __powerpc__ */
#if defined(__ia64__)
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
#if defined(__powerpc__)
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc__ */
#if defined(__ia64__)
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	};

int numSectionInfo = sizeof(SectionInfo)/sizeof(struct SectionInfo);
