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
	{".eh_frame_hdr",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
#if __powerpc64__
	{".glink",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __powerpc64__ */
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if __i386__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __i386__ */
#if __ia64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
#if __powerpc__ && !__powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkPROGBITS},
#endif /* __powerpc__ && !__powerpc64__ */
#if __s390__ && !__s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __s390__ && !__s390x__ */
#if __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc64__ */
#if __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __s390x__ */
#if __powerpc__ && !__powerpc64__
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc__ && !__powerpc64__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if __ia64__
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* __ia64__ */
#if __ia64__
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
#if __ia64__
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* __ia64__ */
#if __ia64__
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".jcr",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if __powerpc64__
	{".opd",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc64__ */
#if __i386__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __i386__ */
#if __ia64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __ia64__ */
#if __powerpc__ && !__powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* __powerpc__ && !__powerpc64__ */
#if __s390__ && !__s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __s390__ && !__s390x__ */
#if __powerpc64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc64__ */
#if __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* __s390x__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if __i386__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if __i386__
	{".rel.data",SHT_REL,0,checkREL},
#endif /* __i386__ */
#if __i386__
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if __i386__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if __i386__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* __i386__ */
#if __i386__
	{".rel.text",SHT_REL,0,checkREL},
#endif /* __i386__ */
#if __powerpc__ && !__powerpc64__
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ && !__powerpc64__ */
#if __ia64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __ia64__ */
#if __powerpc__ && !__powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ && !__powerpc64__ */
#if __s390__ && !__s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __s390__ && !__s390x__ */
#if __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc64__ */
#if __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __s390x__ */
#if __powerpc__ && !__powerpc64__
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ && !__powerpc64__ */
#if __powerpc__ && !__powerpc64__
	{".rela.got2",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ && !__powerpc64__ */
#if __ia64__
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __ia64__ */
#if __powerpc__ && !__powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ && !__powerpc64__ */
#if __s390__ && !__s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __s390__ && !__s390x__ */
#if __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc64__ */
#if __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __s390x__ */
#if __powerpc__ && !__powerpc64__
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* __powerpc__ && !__powerpc64__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if __ia64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* __ia64__ */
#if __ia64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
#if __powerpc__ && !__powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* __powerpc__ && !__powerpc64__ */
#if __ia64__
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* __ia64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#if __powerpc64__
	{".toc",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* __powerpc64__ */
#if __powerpc64__
	{".toc1",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* __powerpc64__ */
#if __powerpc64__
	{".tocbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* __powerpc64__ */
	};

int numSectionInfo = sizeof(SectionInfo)/sizeof(struct SectionInfo);
