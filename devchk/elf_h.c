/*
 * Test of elf.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "elf.h"



int elf_h()
{
int cnt=0;
#ifdef EI_MAG0
CompareConstant(EI_MAG0,0)
#else
Msg( "Warning: Constant not found: EI_MAG0\n");
#endif
#ifdef EI_MAG1
CompareConstant(EI_MAG1,1	)
#else
Msg( "Warning: Constant not found: EI_MAG1\n");
#endif
#ifdef EI_MAG2
CompareConstant(EI_MAG2,2	)
#else
Msg( "Warning: Constant not found: EI_MAG2\n");
#endif
#ifdef EI_MAG3
CompareConstant(EI_MAG3,3	)
#else
Msg( "Warning: Constant not found: EI_MAG3\n");
#endif
#ifdef EI_CLASS
CompareConstant(EI_CLASS,4	)
#else
Msg( "Warning: Constant not found: EI_CLASS\n");
#endif
#ifdef EI_DATA
CompareConstant(EI_DATA,5	)
#else
Msg( "Warning: Constant not found: EI_DATA\n");
#endif
#ifdef EI_VERSION
CompareConstant(EI_VERSION,6	)
#else
Msg( "Warning: Constant not found: EI_VERSION\n");
#endif
#ifdef ELFMAG0
CompareConstant(ELFMAG0,0x7f)
#else
Msg( "Warning: Constant not found: ELFMAG0\n");
#endif
#ifdef ELFMAG1
CompareConstant(ELFMAG1,'E')
#else
Msg( "Warning: Constant not found: ELFMAG1\n");
#endif
#ifdef ELFMAG2
CompareConstant(ELFMAG2,'L')
#else
Msg( "Warning: Constant not found: ELFMAG2\n");
#endif
#ifdef ELFMAG3
CompareConstant(ELFMAG3,'F')
#else
Msg( "Warning: Constant not found: ELFMAG3\n");
#endif
#ifdef ELFCLASSNONE
CompareConstant(ELFCLASSNONE,0	)
#else
Msg( "Warning: Constant not found: ELFCLASSNONE\n");
#endif
#ifdef ELFCLASS32
CompareConstant(ELFCLASS32,1	)
#else
Msg( "Warning: Constant not found: ELFCLASS32\n");
#endif
#ifdef ELFCLASS64
CompareConstant(ELFCLASS64,2	)
#else
Msg( "Warning: Constant not found: ELFCLASS64\n");
#endif
#ifdef ELFDATANONE
CompareConstant(ELFDATANONE,0	)
#else
Msg( "Warning: Constant not found: ELFDATANONE\n");
#endif
#ifdef ELFDATA2LSB
CompareConstant(ELFDATA2LSB,1	)
#else
Msg( "Warning: Constant not found: ELFDATA2LSB\n");
#endif
#ifdef ELFDATA2MSB
CompareConstant(ELFDATA2MSB,2	)
#else
Msg( "Warning: Constant not found: ELFDATA2MSB\n");
#endif
#ifdef ELFMAG
CompareConstant(ELFMAG,"\177ELF")
#else
Msg( "Warning: Constant not found: ELFMAG\n");
#endif
#ifdef SELFMAG
CompareConstant(SELFMAG,4)
#else
Msg( "Warning: Constant not found: SELFMAG\n");
#endif
#ifdef ET_NONE
CompareConstant(ET_NONE,0	)
#else
Msg( "Warning: Constant not found: ET_NONE\n");
#endif
#ifdef ET_REL
CompareConstant(ET_REL,1	)
#else
Msg( "Warning: Constant not found: ET_REL\n");
#endif
#ifdef ET_EXEC
CompareConstant(ET_EXEC,2	)
#else
Msg( "Warning: Constant not found: ET_EXEC\n");
#endif
#ifdef ET_DYN
CompareConstant(ET_DYN,3	)
#else
Msg( "Warning: Constant not found: ET_DYN\n");
#endif
#ifdef ET_CORE
CompareConstant(ET_CORE,4	)
#else
Msg( "Warning: Constant not found: ET_CORE\n");
#endif
#ifdef ET_NUM
CompareConstant(ET_NUM,5		)
#else
Msg( "Warning: Constant not found: ET_NUM\n");
#endif
#ifdef ET_LOPROC
CompareConstant(ET_LOPROC,0xff00		)
#else
Msg( "Warning: Constant not found: ET_LOPROC\n");
#endif
#ifdef ET_HIPROC
CompareConstant(ET_HIPROC,0xffff		)
#else
Msg( "Warning: Constant not found: ET_HIPROC\n");
#endif
#ifdef EM_NONE
CompareConstant(EM_NONE,0	)
#else
Msg( "Warning: Constant not found: EM_NONE\n");
#endif
#ifdef EM_M32
CompareConstant(EM_M32,1	)
#else
Msg( "Warning: Constant not found: EM_M32\n");
#endif
#ifdef EM_SPARC
CompareConstant(EM_SPARC,2	)
#else
Msg( "Warning: Constant not found: EM_SPARC\n");
#endif
#ifdef EM_386
CompareConstant(EM_386,3	)
#else
Msg( "Warning: Constant not found: EM_386\n");
#endif
#ifdef EM_68K
CompareConstant(EM_68K,4	)
#else
Msg( "Warning: Constant not found: EM_68K\n");
#endif
#ifdef EM_88K
CompareConstant(EM_88K,5	)
#else
Msg( "Warning: Constant not found: EM_88K\n");
#endif
#ifdef EM_486
CompareConstant(EM_486,6	)
#else
Msg( "Warning: Constant not found: EM_486\n");
#endif
#ifdef EM_860
CompareConstant(EM_860,7	)
#else
Msg( "Warning: Constant not found: EM_860\n");
#endif
#ifdef EM_MIPS
CompareConstant(EM_MIPS,8	)
#else
Msg( "Warning: Constant not found: EM_MIPS\n");
#endif
#ifdef EM_MIPS_RS4_BE
CompareConstant(EM_MIPS_RS4_BE,10	)
#else
Msg( "Warning: Constant not found: EM_MIPS_RS4_BE\n");
#endif
#ifdef EM_SPARC64
CompareConstant(EM_SPARC64,11	)
#else
Msg( "Warning: Constant not found: EM_SPARC64\n");
#endif
#ifdef EM_PARISC
CompareConstant(EM_PARISC,15	)
#else
Msg( "Warning: Constant not found: EM_PARISC\n");
#endif
#ifdef EM_PPC
CompareConstant(EM_PPC,20	)
#else
Msg( "Warning: Constant not found: EM_PPC\n");
#endif
#ifdef EM_S370
CompareConstant(EM_S370,9		)
#else
Msg( "Warning: Constant not found: EM_S370\n");
#endif
#ifdef EM_ALPHA
CompareConstant(EM_ALPHA,0x9026)
#else
Msg( "Warning: Constant not found: EM_ALPHA\n");
#endif
#ifdef EV_NONE
CompareConstant(EV_NONE,0)
#else
Msg( "Warning: Constant not found: EV_NONE\n");
#endif
#ifdef EV_CURRENT
CompareConstant(EV_CURRENT,1)
#else
Msg( "Warning: Constant not found: EV_CURRENT\n");
#endif
#ifdef SHN_UNDEF
CompareConstant(SHN_UNDEF,0		)
#else
Msg( "Warning: Constant not found: SHN_UNDEF\n");
#endif
#ifdef SHN_LORESERVE
CompareConstant(SHN_LORESERVE,0xff00		)
#else
Msg( "Warning: Constant not found: SHN_LORESERVE\n");
#endif
#ifdef SHN_LOPROC
CompareConstant(SHN_LOPROC,0xff00		)
#else
Msg( "Warning: Constant not found: SHN_LOPROC\n");
#endif
#ifdef SHN_HIPROC
CompareConstant(SHN_HIPROC,0xff1f		)
#else
Msg( "Warning: Constant not found: SHN_HIPROC\n");
#endif
#ifdef SHN_ABS
CompareConstant(SHN_ABS,0xfff1		)
#else
Msg( "Warning: Constant not found: SHN_ABS\n");
#endif
#ifdef SHN_COMMON
CompareConstant(SHN_COMMON,0xfff2		)
#else
Msg( "Warning: Constant not found: SHN_COMMON\n");
#endif
#ifdef SHN_HIRESERVE
CompareConstant(SHN_HIRESERVE,0xffff		)
#else
Msg( "Warning: Constant not found: SHN_HIRESERVE\n");
#endif
#ifdef SHT_NULL
CompareConstant(SHT_NULL,0		)
#else
Msg( "Warning: Constant not found: SHT_NULL\n");
#endif
#ifdef SHT_PROGBITS
CompareConstant(SHT_PROGBITS,1		)
#else
Msg( "Warning: Constant not found: SHT_PROGBITS\n");
#endif
#ifdef SHT_SYMTAB
CompareConstant(SHT_SYMTAB,2		)
#else
Msg( "Warning: Constant not found: SHT_SYMTAB\n");
#endif
#ifdef SHT_STRTAB
CompareConstant(SHT_STRTAB,3		)
#else
Msg( "Warning: Constant not found: SHT_STRTAB\n");
#endif
#ifdef SHT_RELA
CompareConstant(SHT_RELA,4		)
#else
Msg( "Warning: Constant not found: SHT_RELA\n");
#endif
#ifdef SHT_HASH
CompareConstant(SHT_HASH,5		)
#else
Msg( "Warning: Constant not found: SHT_HASH\n");
#endif
#ifdef SHT_DYNAMIC
CompareConstant(SHT_DYNAMIC,6		)
#else
Msg( "Warning: Constant not found: SHT_DYNAMIC\n");
#endif
#ifdef SHT_NOTE
CompareConstant(SHT_NOTE,7		)
#else
Msg( "Warning: Constant not found: SHT_NOTE\n");
#endif
#ifdef SHT_NOBITS
CompareConstant(SHT_NOBITS,8		)
#else
Msg( "Warning: Constant not found: SHT_NOBITS\n");
#endif
#ifdef SHT_REL
CompareConstant(SHT_REL,9		)
#else
Msg( "Warning: Constant not found: SHT_REL\n");
#endif
#ifdef SHT_SHLIB
CompareConstant(SHT_SHLIB,10		)
#else
Msg( "Warning: Constant not found: SHT_SHLIB\n");
#endif
#ifdef SHT_DYNSYM
CompareConstant(SHT_DYNSYM,11		)
#else
Msg( "Warning: Constant not found: SHT_DYNSYM\n");
#endif
#ifdef SHT_LOPROC
CompareConstant(SHT_LOPROC,0x70000000	)
#else
Msg( "Warning: Constant not found: SHT_LOPROC\n");
#endif
#ifdef SHT_HIPROC
CompareConstant(SHT_HIPROC,0x7fffffff	)
#else
Msg( "Warning: Constant not found: SHT_HIPROC\n");
#endif
#ifdef SHT_LOUSER
CompareConstant(SHT_LOUSER,0x80000000	)
#else
Msg( "Warning: Constant not found: SHT_LOUSER\n");
#endif
#ifdef SHT_HIUSER
CompareConstant(SHT_HIUSER,0x8fffffff)
#else
Msg( "Warning: Constant not found: SHT_HIUSER\n");
#endif
#ifdef SHF_WRITE
CompareConstant(SHF_WRITE,(1 << 0)	)
#else
Msg( "Warning: Constant not found: SHF_WRITE\n");
#endif
#ifdef SHF_ALLOC
CompareConstant(SHF_ALLOC,(1 << 1)	)
#else
Msg( "Warning: Constant not found: SHF_ALLOC\n");
#endif
#ifdef SHF_EXECINSTR
CompareConstant(SHF_EXECINSTR,(1 << 2)	)
#else
Msg( "Warning: Constant not found: SHF_EXECINSTR\n");
#endif
#ifdef SHF_MASKPROC
CompareConstant(SHF_MASKPROC,0xf0000000	)
#else
Msg( "Warning: Constant not found: SHF_MASKPROC\n");
#endif
/* No test for ELF32_ST_INFO(bind, type) */
/* No test for ELF32_ST_BIND(val) */
/* No test for ELF32_ST_TYPE(val) */
#ifdef STB_LOCAL
CompareConstant(STB_LOCAL,0	)
#else
Msg( "Warning: Constant not found: STB_LOCAL\n");
#endif
#ifdef STB_GLOBAL
CompareConstant(STB_GLOBAL,1	)
#else
Msg( "Warning: Constant not found: STB_GLOBAL\n");
#endif
#ifdef STB_WEAK
CompareConstant(STB_WEAK,2	)
#else
Msg( "Warning: Constant not found: STB_WEAK\n");
#endif
#ifdef STB_LOPROC
CompareConstant(STB_LOPROC,13	)
#else
Msg( "Warning: Constant not found: STB_LOPROC\n");
#endif
#ifdef STB_HIPROC
CompareConstant(STB_HIPROC,15	)
#else
Msg( "Warning: Constant not found: STB_HIPROC\n");
#endif
#ifdef STB_NUM
CompareConstant(STB_NUM,3		)
#else
Msg( "Warning: Constant not found: STB_NUM\n");
#endif
#ifdef STT_NOTYPE
CompareConstant(STT_NOTYPE,0	)
#else
Msg( "Warning: Constant not found: STT_NOTYPE\n");
#endif
#ifdef STT_OBJECT
CompareConstant(STT_OBJECT,1	)
#else
Msg( "Warning: Constant not found: STT_OBJECT\n");
#endif
#ifdef STT_FUNC
CompareConstant(STT_FUNC,2	)
#else
Msg( "Warning: Constant not found: STT_FUNC\n");
#endif
#ifdef STT_SECTION
CompareConstant(STT_SECTION,3	)
#else
Msg( "Warning: Constant not found: STT_SECTION\n");
#endif
#ifdef STT_FILE
CompareConstant(STT_FILE,4	)
#else
Msg( "Warning: Constant not found: STT_FILE\n");
#endif
#ifdef STT_LOPROC
CompareConstant(STT_LOPROC,13	)
#else
Msg( "Warning: Constant not found: STT_LOPROC\n");
#endif
#ifdef STT_HIPROC
CompareConstant(STT_HIPROC,15	)
#else
Msg( "Warning: Constant not found: STT_HIPROC\n");
#endif
#ifdef STT_NUM
CompareConstant(STT_NUM,5		)
#else
Msg( "Warning: Constant not found: STT_NUM\n");
#endif
#ifdef STN_UNDEF
CompareConstant(STN_UNDEF,0	)
#else
Msg( "Warning: Constant not found: STN_UNDEF\n");
#endif
#ifdef PT_NULL
CompareConstant(PT_NULL,0	)
#else
Msg( "Warning: Constant not found: PT_NULL\n");
#endif
#ifdef PT_LOAD
CompareConstant(PT_LOAD,1	)
#else
Msg( "Warning: Constant not found: PT_LOAD\n");
#endif
#ifdef PT_DYNAMIC
CompareConstant(PT_DYNAMIC,2	)
#else
Msg( "Warning: Constant not found: PT_DYNAMIC\n");
#endif
#ifdef PT_INTERP
CompareConstant(PT_INTERP,3	)
#else
Msg( "Warning: Constant not found: PT_INTERP\n");
#endif
#ifdef PT_NOTE
CompareConstant(PT_NOTE,4	)
#else
Msg( "Warning: Constant not found: PT_NOTE\n");
#endif
#ifdef PT_SHLIB
CompareConstant(PT_SHLIB,5	)
#else
Msg( "Warning: Constant not found: PT_SHLIB\n");
#endif
#ifdef PT_PHDR
CompareConstant(PT_PHDR,6	)
#else
Msg( "Warning: Constant not found: PT_PHDR\n");
#endif
#ifdef PT_LOPROC
CompareConstant(PT_LOPROC,0x70000000	)
#else
Msg( "Warning: Constant not found: PT_LOPROC\n");
#endif
#ifdef PT_HIPROC
CompareConstant(PT_HIPROC,0x7fffffff	)
#else
Msg( "Warning: Constant not found: PT_HIPROC\n");
#endif
#ifdef PT_NUM
CompareConstant(PT_NUM,7		)
#else
Msg( "Warning: Constant not found: PT_NUM\n");
#endif
#ifdef PF_X
CompareConstant(PF_X,0x1	)
#else
Msg( "Warning: Constant not found: PF_X\n");
#endif
#ifdef PF_W
CompareConstant(PF_W,0x2	)
#else
Msg( "Warning: Constant not found: PF_W\n");
#endif
#ifdef PF_R
CompareConstant(PF_R,0x4	)
#else
Msg( "Warning: Constant not found: PF_R\n");
#endif
#ifdef PF_MASKPROC
CompareConstant(PF_MASKPROC,0xf0000000	)
#else
Msg( "Warning: Constant not found: PF_MASKPROC\n");
#endif
#ifdef NT_PRSTATUS
CompareConstant(NT_PRSTATUS,1		)
#else
Msg( "Warning: Constant not found: NT_PRSTATUS\n");
#endif
#ifdef NT_FPREGSET
CompareConstant(NT_FPREGSET,2		)
#else
Msg( "Warning: Constant not found: NT_FPREGSET\n");
#endif
#ifdef NT_PRPSINFO
CompareConstant(NT_PRPSINFO,3		)
#else
Msg( "Warning: Constant not found: NT_PRPSINFO\n");
#endif
#ifdef NT_VERSION
CompareConstant(NT_VERSION,1		)
#else
Msg( "Warning: Constant not found: NT_VERSION\n");
#endif
#ifdef DT_NULL
CompareConstant(DT_NULL,0	)
#else
Msg( "Warning: Constant not found: DT_NULL\n");
#endif
#ifdef DT_NEEDED
CompareConstant(DT_NEEDED,1)
#else
Msg( "Warning: Constant not found: DT_NEEDED\n");
#endif
#ifdef DT_PLTRELSZ
CompareConstant(DT_PLTRELSZ,2	)
#else
Msg( "Warning: Constant not found: DT_PLTRELSZ\n");
#endif
#ifdef DT_PLTGOT
CompareConstant(DT_PLTGOT,3	)
#else
Msg( "Warning: Constant not found: DT_PLTGOT\n");
#endif
#ifdef DT_HASH
CompareConstant(DT_HASH,4	)
#else
Msg( "Warning: Constant not found: DT_HASH\n");
#endif
#ifdef DT_STRTAB
CompareConstant(DT_STRTAB,5	)
#else
Msg( "Warning: Constant not found: DT_STRTAB\n");
#endif
#ifdef DT_SYMTAB
CompareConstant(DT_SYMTAB,6	)
#else
Msg( "Warning: Constant not found: DT_SYMTAB\n");
#endif
#ifdef DT_RELA
CompareConstant(DT_RELA,7	)
#else
Msg( "Warning: Constant not found: DT_RELA\n");
#endif
#ifdef DT_RELASZ
CompareConstant(DT_RELASZ,8	)
#else
Msg( "Warning: Constant not found: DT_RELASZ\n");
#endif
#ifdef DT_RELAENT
CompareConstant(DT_RELAENT,9	)
#else
Msg( "Warning: Constant not found: DT_RELAENT\n");
#endif
#ifdef DT_STRSZ
CompareConstant(DT_STRSZ,10	)
#else
Msg( "Warning: Constant not found: DT_STRSZ\n");
#endif
#ifdef DT_SYMENT
CompareConstant(DT_SYMENT,11	)
#else
Msg( "Warning: Constant not found: DT_SYMENT\n");
#endif
#ifdef DT_INIT
CompareConstant(DT_INIT,12	)
#else
Msg( "Warning: Constant not found: DT_INIT\n");
#endif
#ifdef DT_FINI
CompareConstant(DT_FINI,13	)
#else
Msg( "Warning: Constant not found: DT_FINI\n");
#endif
#ifdef DT_SONAME
CompareConstant(DT_SONAME,14)
#else
Msg( "Warning: Constant not found: DT_SONAME\n");
#endif
#ifdef DT_RPATH
CompareConstant(DT_RPATH,15	)
#else
Msg( "Warning: Constant not found: DT_RPATH\n");
#endif
#ifdef DT_SYMBOLIC
CompareConstant(DT_SYMBOLIC,16	)
#else
Msg( "Warning: Constant not found: DT_SYMBOLIC\n");
#endif
#ifdef DT_REL
CompareConstant(DT_REL,17	)
#else
Msg( "Warning: Constant not found: DT_REL\n");
#endif
#ifdef DT_RELSZ
CompareConstant(DT_RELSZ,18	)
#else
Msg( "Warning: Constant not found: DT_RELSZ\n");
#endif
#ifdef DT_RELENT
CompareConstant(DT_RELENT,19	)
#else
Msg( "Warning: Constant not found: DT_RELENT\n");
#endif
#ifdef DT_PLTREL
CompareConstant(DT_PLTREL,20	)
#else
Msg( "Warning: Constant not found: DT_PLTREL\n");
#endif
#ifdef DT_DEBUG
CompareConstant(DT_DEBUG,21	)
#else
Msg( "Warning: Constant not found: DT_DEBUG\n");
#endif
#ifdef DT_TEXTREL
CompareConstant(DT_TEXTREL,22)
#else
Msg( "Warning: Constant not found: DT_TEXTREL\n");
#endif
#ifdef DT_JMPREL
CompareConstant(DT_JMPREL,23	)
#else
Msg( "Warning: Constant not found: DT_JMPREL\n");
#endif
#ifdef DT_NUM
CompareConstant(DT_NUM,29)
#else
Msg( "Warning: Constant not found: DT_NUM\n");
#endif
#ifdef DT_LOPROC
CompareConstant(DT_LOPROC,0x70000000	)
#else
Msg( "Warning: Constant not found: DT_LOPROC\n");
#endif
#ifdef DT_HIPROC
CompareConstant(DT_HIPROC,0x7fffffff	)
#else
Msg( "Warning: Constant not found: DT_HIPROC\n");
#endif
#ifdef DT_PROCNUM
CompareConstant(DT_PROCNUM,DT_MIPS_NUM	)
#else
Msg( "Warning: Constant not found: DT_PROCNUM\n");
#endif
#ifdef DT_VERSYM
CompareConstant(DT_VERSYM,0x6ffffff0)
#else
Msg( "Warning: Constant not found: DT_VERSYM\n");
#endif
#ifdef DT_VERDEF
CompareConstant(DT_VERDEF,0x6ffffffc)
#else
Msg( "Warning: Constant not found: DT_VERDEF\n");
#endif
#ifdef DT_VERDEFNUM
CompareConstant(DT_VERDEFNUM,0x6ffffffd	)
#else
Msg( "Warning: Constant not found: DT_VERDEFNUM\n");
#endif
#ifdef DT_VERNEED
CompareConstant(DT_VERNEED,0x6ffffffe)
#else
Msg( "Warning: Constant not found: DT_VERNEED\n");
#endif
#ifdef DT_VERNEEDNUM
CompareConstant(DT_VERNEEDNUM,0x6fffffff	)
#else
Msg( "Warning: Constant not found: DT_VERNEEDNUM\n");
#endif
/* No test for DT_VERSIONTAGIDX(tag) */
#ifdef DT_VERSIONTAGNUM
CompareConstant(DT_VERSIONTAGNUM,16)
#else
Msg( "Warning: Constant not found: DT_VERSIONTAGNUM\n");
#endif
#ifdef DT_AUXILIARY
CompareConstant(DT_AUXILIARY,0x7ffffffd)
#else
Msg( "Warning: Constant not found: DT_AUXILIARY\n");
#endif
#ifdef DT_FILTER
CompareConstant(DT_FILTER,0x7fffffff)
#else
Msg( "Warning: Constant not found: DT_FILTER\n");
#endif
/* No test for DT_EXTRATAGIDX(tag) */
#ifdef DT_EXTRANUM
CompareConstant(DT_EXTRANUM,3)
#else
Msg( "Warning: Constant not found: DT_EXTRANUM\n");
#endif
#ifdef VER_DEF_NONE
CompareConstant(VER_DEF_NONE,0		)
#else
Msg( "Warning: Constant not found: VER_DEF_NONE\n");
#endif
#ifdef VER_DEF_CURRENT
CompareConstant(VER_DEF_CURRENT,1		)
#else
Msg( "Warning: Constant not found: VER_DEF_CURRENT\n");
#endif
#ifdef VER_DEF_NUM
CompareConstant(VER_DEF_NUM,2		)
#else
Msg( "Warning: Constant not found: VER_DEF_NUM\n");
#endif
#ifdef VER_FLG_BASE
CompareConstant(VER_FLG_BASE,0x1		)
#else
Msg( "Warning: Constant not found: VER_FLG_BASE\n");
#endif
#ifdef VER_FLG_WEAK
CompareConstant(VER_FLG_WEAK,0x2		)
#else
Msg( "Warning: Constant not found: VER_FLG_WEAK\n");
#endif
#ifdef VER_NEED_NONE
CompareConstant(VER_NEED_NONE,0		)
#else
Msg( "Warning: Constant not found: VER_NEED_NONE\n");
#endif
#ifdef VER_NEED_CURRENT
CompareConstant(VER_NEED_CURRENT,1		)
#else
Msg( "Warning: Constant not found: VER_NEED_CURRENT\n");
#endif
#ifdef VER_NEED_NUM
CompareConstant(VER_NEED_NUM,2		)
#else
Msg( "Warning: Constant not found: VER_NEED_NUM\n");
#endif
#ifdef AT_NULL
CompareConstant(AT_NULL,0		)
#else
Msg( "Warning: Constant not found: AT_NULL\n");
#endif
#ifdef AT_IGNORE
CompareConstant(AT_IGNORE,1		)
#else
Msg( "Warning: Constant not found: AT_IGNORE\n");
#endif
#ifdef AT_EXECFD
CompareConstant(AT_EXECFD,2		)
#else
Msg( "Warning: Constant not found: AT_EXECFD\n");
#endif
#ifdef AT_PHDR
CompareConstant(AT_PHDR,3		)
#else
Msg( "Warning: Constant not found: AT_PHDR\n");
#endif
#ifdef AT_PHENT
CompareConstant(AT_PHENT,4		)
#else
Msg( "Warning: Constant not found: AT_PHENT\n");
#endif
#ifdef AT_PHNUM
CompareConstant(AT_PHNUM,5		)
#else
Msg( "Warning: Constant not found: AT_PHNUM\n");
#endif
#ifdef AT_PAGESZ
CompareConstant(AT_PAGESZ,6		)
#else
Msg( "Warning: Constant not found: AT_PAGESZ\n");
#endif
#ifdef AT_BASE
CompareConstant(AT_BASE,7		)
#else
Msg( "Warning: Constant not found: AT_BASE\n");
#endif
#ifdef AT_FLAGS
CompareConstant(AT_FLAGS,8		)
#else
Msg( "Warning: Constant not found: AT_FLAGS\n");
#endif
#ifdef AT_ENTRY
CompareConstant(AT_ENTRY,9		)
#else
Msg( "Warning: Constant not found: AT_ENTRY\n");
#endif
#ifdef AT_NOTELF
CompareConstant(AT_NOTELF,10		)
#else
Msg( "Warning: Constant not found: AT_NOTELF\n");
#endif
#ifdef AT_UID
CompareConstant(AT_UID,11		)
#else
Msg( "Warning: Constant not found: AT_UID\n");
#endif
#ifdef AT_EUID
CompareConstant(AT_EUID,12		)
#else
Msg( "Warning: Constant not found: AT_EUID\n");
#endif
#ifdef AT_GID
CompareConstant(AT_GID,13		)
#else
Msg( "Warning: Constant not found: AT_GID\n");
#endif
#ifdef AT_EGID
CompareConstant(AT_EGID,14		)
#else
Msg( "Warning: Constant not found: AT_EGID\n");
#endif
#ifdef R_386_NONE
CompareConstant(R_386_NONE,0		)
#else
Msg( "Warning: Constant not found: R_386_NONE\n");
#endif
#ifdef R_386_32
CompareConstant(R_386_32,1		)
#else
Msg( "Warning: Constant not found: R_386_32\n");
#endif
#ifdef R_386_PC32
CompareConstant(R_386_PC32,2		)
#else
Msg( "Warning: Constant not found: R_386_PC32\n");
#endif
#ifdef R_386_GOT32
CompareConstant(R_386_GOT32,3		)
#else
Msg( "Warning: Constant not found: R_386_GOT32\n");
#endif
#ifdef R_386_PLT32
CompareConstant(R_386_PLT32,4		)
#else
Msg( "Warning: Constant not found: R_386_PLT32\n");
#endif
#ifdef R_386_COPY
CompareConstant(R_386_COPY,5		)
#else
Msg( "Warning: Constant not found: R_386_COPY\n");
#endif
#ifdef R_386_GLOB_DAT
CompareConstant(R_386_GLOB_DAT,6		)
#else
Msg( "Warning: Constant not found: R_386_GLOB_DAT\n");
#endif
#ifdef R_386_JMP_SLOT
CompareConstant(R_386_JMP_SLOT,7		)
#else
Msg( "Warning: Constant not found: R_386_JMP_SLOT\n");
#endif
#ifdef R_386_RELATIVE
CompareConstant(R_386_RELATIVE,8		)
#else
Msg( "Warning: Constant not found: R_386_RELATIVE\n");
#endif
#ifdef R_386_GOTOFF
CompareConstant(R_386_GOTOFF,9		)
#else
Msg( "Warning: Constant not found: R_386_GOTOFF\n");
#endif
#ifdef R_386_GOTPC
CompareConstant(R_386_GOTPC,10		)
#else
Msg( "Warning: Constant not found: R_386_GOTPC\n");
#endif
CheckTypeSize(Elf32_Half,2)
CheckTypeSize(Elf32_Word,4)
CheckTypeSize(Elf32_Sword,4)
CheckTypeSize(Elf32_Addr,4)
CheckTypeSize(Elf32_Off,4)
CheckTypeSize(Elf32_Section,2)
CheckTypeSize(Elf32_Symndx,4)
CheckTypeSize(Elf32_Ehdr,52)
CheckTypeSize(Elf32_Shdr,0)
CheckTypeSize(Elf32_Sym,0)
CheckTypeSize(Elf32_Rel,0)
CheckTypeSize(Elf32_Rela,0)
CheckTypeSize(Elf32_Verdef,0)
CheckTypeSize(Elf32_Verdaux,0)
CheckTypeSize(Elf32_Verneed,0)
CheckTypeSize(Elf32_Vernaux,0)
printf("%d tests in elf.h\n",cnt);
return cnt;
}
