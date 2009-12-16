/* Generated file - Do Not Edit */
#include "elfchk.h"
#include "sections.h"

struct SectionInfo SectionInfo_LSB30[] = {
#if defined __powerpc64__
	{".branch_lt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".bss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
	{".comment",SHT_PROGBITS,0,checkPROGBITS},
	{".ctors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data.rel.ro",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".debug",SHT_PROGBITS,0,checkPROGBITS},
	{".dtors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".dynamic",SHT_DYNAMIC,SHF_ALLOC+SHF_WRITE,checkDYNAMIC},
	{".dynstr",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".dynsym",SHT_DYNSYM,SHF_ALLOC,checkDYNSYM},
	{".eh_frame",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".eh_frame_hdr",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
	{".gcc_except_table",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if defined __powerpc64__
	{".glink",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if defined __i386__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
	{".got.plt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#if defined __powerpc__ && !defined __powerpc64__
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if defined __ia64__
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".jcr",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if defined __ia64__
	{".opd",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc64__
	{".opd",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __i386__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390x__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if defined __i386__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.data",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.data",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __i386__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.text",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.text",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got2",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
#if defined __ia64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390x__
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
#if defined __ia64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __ia64__
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata2",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".tbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkNOBITS},
	{".tdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkPROGBITS},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#if defined __powerpc64__
	{".toc",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".toc1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".tocbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
};

int numSectionInfo_LSB30 = sizeof(SectionInfo_LSB30)/sizeof(struct SectionInfo);

struct SectionInfo SectionInfo_LSB31[] = {
#if defined __powerpc64__
	{".branch_lt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".bss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
	{".comment",SHT_PROGBITS,0,checkPROGBITS},
	{".ctors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data.rel.ro",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".debug",SHT_PROGBITS,0,checkPROGBITS},
	{".dtors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".dynamic",SHT_DYNAMIC,SHF_ALLOC+SHF_WRITE,checkDYNAMIC},
	{".dynstr",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".dynsym",SHT_DYNSYM,SHF_ALLOC,checkDYNSYM},
	{".eh_frame",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".eh_frame_hdr",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
	{".gcc_except_table",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if defined __powerpc64__
	{".glink",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if defined __i386__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
	{".got.plt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#if defined __powerpc__ && !defined __powerpc64__
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if defined __ia64__
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".jcr",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if defined __ia64__
	{".opd",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc64__
	{".opd",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __i386__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390x__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if defined __i386__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.data",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.data",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __i386__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.text",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.text",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got2",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
#if defined __ia64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390x__
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
#if defined __ia64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __ia64__
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata2",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".tbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkNOBITS},
	{".tdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkPROGBITS},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#if defined __powerpc64__
	{".toc",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".toc1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".tocbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
};

int numSectionInfo_LSB31 = sizeof(SectionInfo_LSB31)/sizeof(struct SectionInfo);

struct SectionInfo SectionInfo_LSB32[] = {
#if defined __powerpc64__
	{".branch_lt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".bss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
	{".comment",SHT_PROGBITS,0,checkPROGBITS},
	{".ctors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data.rel.ro",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".debug",SHT_PROGBITS,0,checkPROGBITS},
	{".dtors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".dynamic",SHT_DYNAMIC,SHF_ALLOC+SHF_WRITE,checkDYNAMIC},
	{".dynstr",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".dynsym",SHT_DYNSYM,SHF_ALLOC,checkDYNSYM},
	{".eh_frame",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".eh_frame_hdr",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
	{".gcc_except_table",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if defined __powerpc64__
	{".glink",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if defined __i386__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
	{".got.plt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#if defined __powerpc__ && !defined __powerpc64__
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if defined __ia64__
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".jcr",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if defined __ia64__
	{".opd",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc64__
	{".opd",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __i386__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390x__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if defined __i386__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.data",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.data",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __i386__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.text",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.text",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got2",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
#if defined __ia64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390x__
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
#if defined __ia64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __ia64__
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata2",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".tbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkNOBITS},
	{".tdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkPROGBITS},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#if defined __powerpc64__
	{".toc",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".toc1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".tocbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
};

int numSectionInfo_LSB32 = sizeof(SectionInfo_LSB32)/sizeof(struct SectionInfo);

struct SectionInfo SectionInfo_LSB40[] = {
#if defined __powerpc64__
	{".branch_lt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".bss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
	{".comment",SHT_PROGBITS,0,checkPROGBITS},
	{".ctors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data.rel.ro",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".debug",SHT_PROGBITS,0,checkPROGBITS},
	{".dtors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".dynamic",SHT_DYNAMIC,SHF_ALLOC+SHF_WRITE,checkDYNAMIC},
	{".dynstr",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".dynsym",SHT_DYNSYM,SHF_ALLOC,checkDYNSYM},
	{".eh_frame",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".eh_frame_hdr",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
	{".gcc_except_table",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if defined __powerpc64__
	{".glink",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if defined __i386__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
	{".got.plt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#if defined __powerpc__ && !defined __powerpc64__
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if defined __ia64__
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".jcr",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if defined __ia64__
	{".opd",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc64__
	{".opd",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __i386__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390x__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if defined __i386__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.data",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.data",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __i386__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.text",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.text",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got2",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
#if defined __ia64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390x__
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
#if defined __ia64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __ia64__
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata2",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".tbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkNOBITS},
	{".tdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkPROGBITS},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#if defined __powerpc64__
	{".toc",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".toc1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".tocbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
};

int numSectionInfo_LSB40 = sizeof(SectionInfo_LSB40)/sizeof(struct SectionInfo);

struct SectionInfo SectionInfo_LSB41[] = {
#if defined __powerpc64__
	{".branch_lt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".bss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
	{".comment",SHT_PROGBITS,0,checkPROGBITS},
	{".ctors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data.rel.ro",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".data1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".debug",SHT_PROGBITS,0,checkPROGBITS},
	{".dtors",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".dynamic",SHT_DYNAMIC,SHF_ALLOC+SHF_WRITE,checkDYNAMIC},
	{".dynstr",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".dynsym",SHT_DYNSYM,SHF_ALLOC,checkDYNSYM},
	{".eh_frame",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".eh_frame_hdr",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".fini",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".fini_array",SHT_FINI_ARRAY,SHF_ALLOC+SHF_WRITE,checkFINI_ARRAY},
	{".gcc_except_table",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#if defined __powerpc64__
	{".glink",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc64__ */
	{".gnu.version",SHT_GNU_versym,SHF_ALLOC,checkGNU_versym},
	{".gnu.version_d",SHT_GNU_verdef,SHF_ALLOC,checkGNU_verdef},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
#if defined __i386__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
	{".got.plt",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#if defined __powerpc__ && !defined __powerpc64__
	{".got2",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
#if defined __ia64__
	{".IA_64.archext",SHT_IA_64_EXT,0,checkIA_64_EXT},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.pltoff",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind",SHT_IA_64_UNWIND,SHF_ALLOC+SHF_LINK_ORDER,checkIA_64_UNWIND},
#endif /* defined __ia64__ */
#if defined __ia64__
	{".IA_64.unwind_info",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".jcr",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
#if defined __ia64__
	{".opd",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc64__
	{".opd",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __i386__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __i386__ */
#if defined __ia64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_EXECINSTR,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".plt",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#endif /* defined __s390x__ */
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
#if defined __i386__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.data",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.data",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.dyn",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __i386__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __i386__
	{".rel.text",SHT_REL,0,checkREL},
#endif /* defined __i386__ */
#if defined __x86_64__
	{".rel.text",SHT_REL,SHF_ALLOC,checkREL},
#endif /* defined __x86_64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.bss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.dyn",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.got2",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __ia64__
	{".rela.IA_64.pltoff",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __x86_64__ */
#if defined __s390x__
	{".rela.plt",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __s390x__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".rela.sbss",SHT_RELA,SHF_ALLOC,checkRELA},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".rodata",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC+SHF_MERGE+SHF_STRINGS,checkPROGBITS},
#if defined __ia64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkNOBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
#if defined __s390x__
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
#endif /* defined __s390x__ */
#if defined __ia64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
	{".sdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __ia64__
	{".sdata1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_IA_64_SHORT,checkPROGBITS},
#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
	{".sdata2",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
#endif /* defined __powerpc__ && !defined __powerpc64__ */
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".tbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkNOBITS},
	{".tdata",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE+SHF_TLS,checkPROGBITS},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
#if defined __powerpc64__
	{".toc",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".toc1",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
#endif /* defined __powerpc64__ */
#if defined __powerpc64__
	{".tocbss",SHT_NOBITS,SHF_ALLOC+SHF_WRITE,checkNOBITS},
#endif /* defined __powerpc64__ */
};

int numSectionInfo_LSB41 = sizeof(SectionInfo_LSB41)/sizeof(struct SectionInfo);

struct SectionInfo* SectionInfo[] = {SectionInfo_LSB30, SectionInfo_LSB31, SectionInfo_LSB32, SectionInfo_LSB40, SectionInfo_LSB41};
int numSectionInfo[] = {sizeof(SectionInfo_LSB30)/sizeof(struct SectionInfo), sizeof(SectionInfo_LSB31)/sizeof(struct SectionInfo), sizeof(SectionInfo_LSB32)/sizeof(struct SectionInfo), sizeof(SectionInfo_LSB40)/sizeof(struct SectionInfo), sizeof(SectionInfo_LSB41)/sizeof(struct SectionInfo)};

