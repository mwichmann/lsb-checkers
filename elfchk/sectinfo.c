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
	{".gnu.version_d",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
	{".gnu.version_r",SHT_GNU_verneed,SHF_ALLOC,checkGNU_verneed},
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".got",SHT_PROGBITS,SHF_ALLOC+SHF_WRITE,checkPROGBITS},
	{".hash",SHT_HASH,SHF_ALLOC,checkHASH},
	{".init",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".init_array",SHT_INIT_ARRAY, SHF_ALLOC+SHF_WRITE,checkINIT_ARRAY},
	{".interp",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".line",SHT_PROGBITS,0,checkPROGBITS},
	{".note",SHT_NOTE,0,checkNOTE},
	{".note.ABI-tag",SHT_NOTE,SHF_ALLOC,checkNOTE},
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".plt",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	{".preinit_array",SHT_PREINIT_ARRAY,SHF_ALLOC+SHF_WRITE,checkPREINIT_ARRAY},
	{".rel.bss",SHT_REL,SHF_ALLOC,checkREL},
	{".rel.data",SHT_REL,0,checkREL},
	{".rel.dyn",SHT_REL,0,checkREL},
	{".rel.got",SHT_REL,SHF_ALLOC,checkREL},
	{".rel.plt",SHT_REL,SHF_ALLOC,checkREL},
	{".rel.text",SHT_REL,0,checkREL},
	{".rodata",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".rodata1",SHT_PROGBITS,SHF_ALLOC,checkPROGBITS},
	{".sbss",SHT_PROGBITS,SHF_WRITE,checkPROGBITS},
	{".shstrtab",SHT_STRTAB,0,checkSTRTAB},
	{".stab",SHT_PROGBITS,0,checkPROGBITS},
	{".stabstr",SHT_STRTAB,0,checkSTRTAB},
	{".strtab",SHT_STRTAB,SHF_ALLOC,checkSTRTAB},
	{".symtab",SHT_SYMTAB,SHF_ALLOC,checkSYMTAB},
	{".text",SHT_PROGBITS,SHF_ALLOC+SHF_EXECINSTR,checkPROGBITS},
	};

int numSectionInfo = sizeof(SectionInfo)/sizeof(struct SectionInfo);
