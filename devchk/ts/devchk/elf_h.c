/*
 * Test of elf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "elf.h"



#ifdef TET_TEST
void elf_h()
{
#else
int elf_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in elf.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef EI_NIDENT
	CompareConstant(EI_NIDENT,(16),20448,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_NIDENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VERDEF
	CompareConstant(DT_VERDEF,0x6ffffffc,20449,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VERDEF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VERDEFNUM
	CompareConstant(DT_VERDEFNUM,0x6ffffffd,20450,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VERDEFNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VERNEED
	CompareConstant(DT_VERNEED,0x6ffffffe,20451,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VERNEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VERNEEDNUM
	CompareConstant(DT_VERNEEDNUM,0x6fffffff,20452,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VERNEEDNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_NULL
	CompareConstant(DT_NULL,0,20453,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_NEEDED
	CompareConstant(DT_NEEDED,1,20454,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_NEEDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PLTRELSZ
	CompareConstant(DT_PLTRELSZ,2,20455,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_PLTRELSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PLTGOT
	CompareConstant(DT_PLTGOT,3,20456,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_PLTGOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_HASH
	CompareConstant(DT_HASH,4,20457,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_HASH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_STRTAB
	CompareConstant(DT_STRTAB,5,20458,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_STRTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SYMTAB
	CompareConstant(DT_SYMTAB,6,20459,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SYMTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELA
	CompareConstant(DT_RELA,7,20460,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELASZ
	CompareConstant(DT_RELASZ,8,20461,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELASZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELAENT
	CompareConstant(DT_RELAENT,9,20462,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELAENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_STRSZ
	CompareConstant(DT_STRSZ,10,20463,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_STRSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SYMENT
	CompareConstant(DT_SYMENT,11,20464,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SYMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_INIT
	CompareConstant(DT_INIT,12,20465,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_INIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FINI
	CompareConstant(DT_FINI,13,20466,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_FINI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SONAME
	CompareConstant(DT_SONAME,14,20467,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SONAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RPATH
	CompareConstant(DT_RPATH,15,20468,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RPATH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SYMBOLIC
	CompareConstant(DT_SYMBOLIC,16,20469,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SYMBOLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_REL
	CompareConstant(DT_REL,17,20470,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_REL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELSZ
	CompareConstant(DT_RELSZ,18,20471,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELENT
	CompareConstant(DT_RELENT,19,20472,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PLTREL
	CompareConstant(DT_PLTREL,20,20473,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_PLTREL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_DEBUG
	CompareConstant(DT_DEBUG,21,20474,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_TEXTREL
	CompareConstant(DT_TEXTREL,22,20475,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_TEXTREL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_JMPREL
	CompareConstant(DT_JMPREL,23,20476,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_JMPREL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_BIND_NOW
	CompareConstant(DT_BIND_NOW,24,20477,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_BIND_NOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_INIT_ARRAY
	CompareConstant(DT_INIT_ARRAY,25,20478,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_INIT_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FINI_ARRAY
	CompareConstant(DT_FINI_ARRAY,26,20479,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_FINI_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_INIT_ARRAYSZ
	CompareConstant(DT_INIT_ARRAYSZ,27,20480,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_INIT_ARRAYSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FINI_ARRAYSZ
	CompareConstant(DT_FINI_ARRAYSZ,28,20481,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_FINI_ARRAYSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RUNPATH
	CompareConstant(DT_RUNPATH,29,20482,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RUNPATH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_NUM
	CompareConstant(DT_NUM,34,20483,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_NUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_LOOS
	CompareConstant(DT_LOOS,0x6000000d,20484,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_LOOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_HIOS
	CompareConstant(DT_HIOS,0x6ffff000,20485,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_HIOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_LOPROC
	CompareConstant(DT_LOPROC,0x70000000,20486,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_LOPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_HIPROC
	CompareConstant(DT_HIPROC,0x7fffffff,20487,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_HIPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_NONE
	CompareConstant(ET_NONE,0,20488,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_REL
	CompareConstant(ET_REL,1,20489,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_REL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_EXEC
	CompareConstant(ET_EXEC,2,20490,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_EXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_DYN
	CompareConstant(ET_DYN,3,20491,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_DYN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_CORE
	CompareConstant(ET_CORE,4,20492,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_CORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_NUM
	CompareConstant(ET_NUM,5,20493,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_NUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_LOOS
	CompareConstant(ET_LOOS,0xfe00,20494,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_LOOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_HIOS
	CompareConstant(ET_HIOS,0xfeff,20495,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_HIOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_LOPROC
	CompareConstant(ET_LOPROC,0xff00,20496,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_LOPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ET_HIPROC
	CompareConstant(ET_HIPROC,0xffff,20497,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ET_HIPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_MAG0
	CompareConstant(EI_MAG0,0,20498,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_MAG0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFMAG0
	CompareConstant(ELFMAG0,0x7f,20499,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFMAG0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_MAG1
	CompareConstant(EI_MAG1,1,20500,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_MAG1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELFMAG1 */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_MAG2
	CompareConstant(EI_MAG2,2,20502,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_MAG2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELFMAG2 */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_MAG3
	CompareConstant(EI_MAG3,3,20504,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_MAG3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELFMAG3 */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFMAG
	CompareStringConstant(ELFMAG,"\177ELF",20506,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFMAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SELFMAG
	CompareConstant(SELFMAG,4,20507,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SELFMAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_UNDEF
	CompareConstant(SHN_UNDEF,0,20508,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_UNDEF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELF32_ST_TYPE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELF32_ST_INFO(bind,type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELF64_ST_BIND(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELF64_ST_TYPE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELF64_ST_INFO(bind,type) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef STT_NOTYPE
	CompareConstant(STT_NOTYPE,0,20514,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STT_NOTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STT_OBJECT
	CompareConstant(STT_OBJECT,1,20515,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STT_OBJECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STT_FUNC
	CompareConstant(STT_FUNC,2,20516,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STT_FUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFOSABI_SYSV
	CompareConstant(ELFOSABI_SYSV,0,20517,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFOSABI_SYSV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_CLASS
	CompareConstant(EI_CLASS,4,20518,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_CLASS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFCLASSNONE
	CompareConstant(ELFCLASSNONE,0,20519,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFCLASSNONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFCLASS32
	CompareConstant(ELFCLASS32,1,20520,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFCLASS32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFCLASS64
	CompareConstant(ELFCLASS64,2,20521,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFCLASS64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFCLASSNUM
	CompareConstant(ELFCLASSNUM,3,20522,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFCLASSNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_DATA
	CompareConstant(EI_DATA,5,20523,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFDATANONE
	CompareConstant(ELFDATANONE,0,20524,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFDATANONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFDATA2LSB
	CompareConstant(ELFDATA2LSB,1,20525,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFDATA2LSB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFDATA2MSB
	CompareConstant(ELFDATA2MSB,2,20526,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFDATA2MSB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFDATANUM
	CompareConstant(ELFDATANUM,3,20527,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFDATANUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VERSYM
	CompareConstant(DT_VERSYM,0x6ffffff0,20528,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VERSYM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELACOUNT
	CompareConstant(DT_RELACOUNT,0x6ffffff9,20529,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELACOUNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_RELCOUNT
	CompareConstant(DT_RELCOUNT,0x6ffffffa,20530,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_RELCOUNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FLAGS_1
	CompareConstant(DT_FLAGS_1,0x6ffffffb,20531,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_FLAGS_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for DT_VERSIONTAGIDX(tag) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VERSIONTAGNUM
	CompareConstant(DT_VERSIONTAGNUM,16,20533,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VERSIONTAGNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VALRNGLO
	CompareConstant(DT_VALRNGLO,0x6ffffd00,20534,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VALRNGLO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_GNU_PRELINKED
	CompareConstant(DT_GNU_PRELINKED,0x6ffffdf5,20535,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_GNU_PRELINKED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_GNU_CONFLICTSZ
	CompareConstant(DT_GNU_CONFLICTSZ,0x6ffffdf6,20536,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_GNU_CONFLICTSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_GNU_LIBLISTSZ
	CompareConstant(DT_GNU_LIBLISTSZ,0x6ffffdf7,20537,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_GNU_LIBLISTSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_CHECKSUM
	CompareConstant(DT_CHECKSUM,0x6ffffdf8,20538,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_CHECKSUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PLTPADSZ
	CompareConstant(DT_PLTPADSZ,0x6ffffdf9,20539,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_PLTPADSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_MOVEENT
	CompareConstant(DT_MOVEENT,0x6ffffdfa,20540,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_MOVEENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_MOVESZ
	CompareConstant(DT_MOVESZ,0x6ffffdfb,20541,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_MOVESZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FEATURE_1
	CompareConstant(DT_FEATURE_1,0x6ffffdfc,20542,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_FEATURE_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_POSFLAG_1
	CompareConstant(DT_POSFLAG_1,0x6ffffdfd,20543,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_POSFLAG_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SYMINSZ
	CompareConstant(DT_SYMINSZ,0x6ffffdfe,20544,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SYMINSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SYMINENT
	CompareConstant(DT_SYMINENT,0x6ffffdff,20545,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SYMINENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VALRNGHI
	CompareConstant(DT_VALRNGHI,0x6ffffdff,20546,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VALRNGHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for DT_VALTAGIDX(tag) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_VALNUM
	CompareConstant(DT_VALNUM,12,20548,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_VALNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_AUXILIARY
	CompareConstant(DT_AUXILIARY,0x7ffffffd,20549,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_AUXILIARY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FILTER
	CompareConstant(DT_FILTER,0x7fffffff,20550,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_FILTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_EXTRANUM
	CompareConstant(DT_EXTRANUM,3,20551,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_EXTRANUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_VERSION
	CompareConstant(EI_VERSION,6,20552,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_OSABI
	CompareConstant(EI_OSABI,7,20553,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_OSABI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFOSABI_NONE
	CompareConstant(ELFOSABI_NONE,0,20554,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFOSABI_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ELFOSABI_LINUX
	CompareConstant(ELFOSABI_LINUX,3,20555,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ELFOSABI_LINUX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EV_NONE
	CompareConstant(EV_NONE,0,20556,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EV_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EV_CURRENT
	CompareConstant(EV_CURRENT,1,20557,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EV_CURRENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EV_NUM
	CompareConstant(EV_NUM,2,20558,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EV_NUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EI_ABIVERSION
	CompareConstant(EI_ABIVERSION,8,20559,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: EI_ABIVERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_X
	CompareConstant(PF_X,(1 << 0),20560,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PF_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_W
	CompareConstant(PF_W,(1 << 1),20561,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PF_W\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_R
	CompareConstant(PF_R,(1 << 2),20562,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PF_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_ADDRRNGLO
	CompareConstant(DT_ADDRRNGLO,0x6ffffe00,20563,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_ADDRRNGLO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_GNU_HASH
	CompareConstant(DT_GNU_HASH,0x6ffffef5,20564,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_GNU_HASH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_TLSDESC_PLT
	CompareConstant(DT_TLSDESC_PLT,0x6ffffef6,20565,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_TLSDESC_PLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_TLSDESC_GOT
	CompareConstant(DT_TLSDESC_GOT,0x6ffffef7,20566,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_TLSDESC_GOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_GNU_CONFLICT
	CompareConstant(DT_GNU_CONFLICT,0x6ffffef8,20567,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_GNU_CONFLICT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_GNU_LIBLIST
	CompareConstant(DT_GNU_LIBLIST,0x6ffffef9,20568,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_GNU_LIBLIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_CONFIG
	CompareConstant(DT_CONFIG,0x6ffffefa,20569,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_CONFIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_DEPAUDIT
	CompareConstant(DT_DEPAUDIT,0x6ffffefb,20570,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_DEPAUDIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_AUDIT
	CompareConstant(DT_AUDIT,0x6ffffefc,20571,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_AUDIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PLTPAD
	CompareConstant(DT_PLTPAD,0x6ffffefd,20572,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_PLTPAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_MOVETAB
	CompareConstant(DT_MOVETAB,0x6ffffefe,20573,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_MOVETAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_SYMINFO
	CompareConstant(DT_SYMINFO,0x6ffffeff,20574,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_SYMINFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_ADDRRNGHI
	CompareConstant(DT_ADDRRNGHI,0x6ffffeff,20575,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_ADDRRNGHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for DT_ADDRTAGIDX(tag) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_ADDRNUM
	CompareConstant(DT_ADDRNUM,11,20577,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DT_ADDRNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_NULL
	CompareConstant(PT_NULL,0,20578,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_LOAD
	CompareConstant(PT_LOAD,1,20579,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_LOAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_DYNAMIC
	CompareConstant(PT_DYNAMIC,2,20580,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_DYNAMIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_INTERP
	CompareConstant(PT_INTERP,3,20581,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_INTERP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_NOTE
	CompareConstant(PT_NOTE,4,20582,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_NOTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_SHLIB
	CompareConstant(PT_SHLIB,5,20583,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_SHLIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_PHDR
	CompareConstant(PT_PHDR,6,20584,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_PHDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_TLS
	CompareConstant(PT_TLS,7,20585,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_TLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_NUM
	CompareConstant(PT_NUM,8,20586,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_NUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_LOOS
	CompareConstant(PT_LOOS,0x60000000,20587,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_LOOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_GNU_EH_FRAME
	CompareConstant(PT_GNU_EH_FRAME,0x6474e550,20588,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_GNU_EH_FRAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_GNU_STACK
	CompareConstant(PT_GNU_STACK,0x6474e551,20589,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_GNU_STACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_GNU_RELRO
	CompareConstant(PT_GNU_RELRO,0x6474e552,20590,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_GNU_RELRO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_WRITE
	CompareConstant(SHF_WRITE,(1 << 0),20591,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_ALLOC
	CompareConstant(SHF_ALLOC,(1 << 1),20592,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_ALLOC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_EXECINSTR
	CompareConstant(SHF_EXECINSTR,(1 << 2),20593,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_EXECINSTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_MERGE
	CompareConstant(SHF_MERGE,(1 << 4),20594,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_MERGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_STRINGS
	CompareConstant(SHF_STRINGS,(1 << 5),20595,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_STRINGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_LINK_ORDER
	CompareConstant(SHF_LINK_ORDER,(1 << 7),20596,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_LINK_ORDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_TLS
	CompareConstant(SHF_TLS,(1 << 10),20597,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_TLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_NULL
	CompareConstant(SHT_NULL,0,20598,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_PROGBITS
	CompareConstant(SHT_PROGBITS,1,20599,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_PROGBITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_SYMTAB
	CompareConstant(SHT_SYMTAB,2,20600,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_SYMTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_STRTAB
	CompareConstant(SHT_STRTAB,3,20601,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_STRTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_RELA
	CompareConstant(SHT_RELA,4,20602,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_RELA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_HASH
	CompareConstant(SHT_HASH,5,20603,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_HASH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_DYNAMIC
	CompareConstant(SHT_DYNAMIC,6,20604,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_DYNAMIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_NOTE
	CompareConstant(SHT_NOTE,7,20605,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_NOTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_NOBITS
	CompareConstant(SHT_NOBITS,8,20606,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_NOBITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_REL
	CompareConstant(SHT_REL,9,20607,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_REL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_SHLIB
	CompareConstant(SHT_SHLIB,10,20608,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_SHLIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_DYNSYM
	CompareConstant(SHT_DYNSYM,11,20609,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_DYNSYM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_INIT_ARRAY
	CompareConstant(SHT_INIT_ARRAY,14,20610,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_INIT_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_FINI_ARRAY
	CompareConstant(SHT_FINI_ARRAY,15,20611,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_FINI_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_PREINIT_ARRAY
	CompareConstant(SHT_PREINIT_ARRAY,16,20612,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_PREINIT_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_GNU_verdef
	CompareConstant(SHT_GNU_verdef,0x6ffffffd,20613,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_GNU_verdef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_GNU_verneed
	CompareConstant(SHT_GNU_verneed,0x6ffffffe,20614,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_GNU_verneed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_GNU_versym
	CompareConstant(SHT_GNU_versym,0x6fffffff,20615,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_GNU_versym\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_LOPROC
	CompareConstant(SHT_LOPROC,0x70000000,20616,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_LOPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_HIPROC
	CompareConstant(SHT_HIPROC,0x7fffffff,20617,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_HIPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_LOUSER
	CompareConstant(SHT_LOUSER,0x80000000,20618,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_LOUSER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_HIUSER
	CompareConstant(SHT_HIUSER,0x8fffffff,20619,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_HIUSER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_LOCAL
	CompareConstant(STB_LOCAL,0,20620,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_LOCAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_GLOBAL
	CompareConstant(STB_GLOBAL,1,20621,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_GLOBAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_WEAK
	CompareConstant(STB_WEAK,2,20622,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_WEAK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_NUM
	CompareConstant(STB_NUM,3,20623,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_NUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_LOOS
	CompareConstant(STB_LOOS,10,20624,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_LOOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_HIOS
	CompareConstant(STB_HIOS,12,20625,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_HIOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_LOPROC
	CompareConstant(STB_LOPROC,13,20626,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_LOPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STB_HIPROC
	CompareConstant(STB_HIPROC,15,20627,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: STB_HIPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_LORESERVE
	CompareConstant(SHN_LORESERVE,0xff00,20628,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_LORESERVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_LOPROC
	CompareConstant(SHN_LOPROC,0xff00,20629,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_LOPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_HIPROC
	CompareConstant(SHN_HIPROC,0xff1f,20630,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_HIPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_LOOS
	CompareConstant(SHN_LOOS,0xff20,20631,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_LOOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_HIOS
	CompareConstant(SHN_HIOS,0xff3f,20632,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_HIOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_ABS
	CompareConstant(SHN_ABS,0xfff1,20633,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_ABS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_COMMON
	CompareConstant(SHN_COMMON,0xfff2,20634,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_COMMON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_XINDEX
	CompareConstant(SHN_XINDEX,0xffff,20635,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_XINDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHN_HIRESERVE
	CompareConstant(SHN_HIRESERVE,0xffff,20636,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHN_HIRESERVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ELF32_ST_BIND(val) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_LOPROC
	CompareConstant(PT_LOPROC,0x70000000,20638,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_LOPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_HIPROC
	CompareConstant(PT_HIPROC,0x7fffffff,20639,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_HIPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PT_IA_64_UNWIND
	CompareConstant(PT_IA_64_UNWIND,(PT_LOPROC + 1),20640,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PT_IA_64_UNWIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_IA_64_EXT
	CompareConstant(SHT_IA_64_EXT,(SHT_LOPROC + 0),20641,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_IA_64_EXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHT_IA_64_UNWIND
	CompareConstant(SHT_IA_64_UNWIND,(SHT_LOPROC + 1),20642,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHT_IA_64_UNWIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHF_IA_64_SHORT
	CompareConstant(SHF_IA_64_SHORT,0x10000000,20643,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: SHF_IA_64_SHORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_FLAGS
	CompareConstant(DT_FLAGS,30,20662,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DT_FLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_ENCODING
	CompareConstant(DT_ENCODING,32,20663,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DT_ENCODING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PREINIT_ARRAY
	CompareConstant(DT_PREINIT_ARRAY,32,20664,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DT_PREINIT_ARRAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DT_PREINIT_ARRAYSZ
	CompareConstant(DT_PREINIT_ARRAYSZ,33,20665,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DT_PREINIT_ARRAYSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DF_ORIGIN
	CompareConstant(DF_ORIGIN,0x00000001,20666,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DF_ORIGIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DF_SYMBOLIC
	CompareConstant(DF_SYMBOLIC,0x00000002,20667,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DF_SYMBOLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DF_TEXTREL
	CompareConstant(DF_TEXTREL,0x00000004,20668,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DF_TEXTREL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DF_BIND_NOW
	CompareConstant(DF_BIND_NOW,0x00000008,20669,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DF_BIND_NOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DF_STATIC_TLS
	CompareConstant(DF_STATIC_TLS,0x00000010,20670,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DF_STATIC_TLS\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(Elf32_Addr,0, 40325, 1, 1.0, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Addr,0, 40326, 1, 1.0, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Word,0, 40327, 1, 1.0, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Word,0, 40328, 1, 1.0, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Sword,0, 40329, 1, 1.0, NULL, 6997, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Sword,0, 40330, 1, 1.0, NULL, 6997, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Xword,0, 40331, 1, 1.0, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Xword,0, 40332, 1, 1.0, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Sxword,0, 40333, 1, 1.0, NULL, 6998, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Sxword,0, 40334, 1, 1.0, NULL, 6998, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Off,0, 40335, 1, 1.0, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Off,0, 40336, 1, 1.0, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Phdr,0, 40338, 1, 1.0, NULL, 40337, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Phdr,0, 40340, 1, 1.0, NULL, 40339, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Half,0, 40345, 1, 1.0, NULL, 9271, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Half,0, 40346, 1, 1.0, NULL, 9271, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Section,0, 40347, 1, 1.0, NULL, 9271, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Section,0, 40348, 1, 1.0, NULL, 9271, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Nhdr,0, 40351, 1, 1.0, NULL, 40350, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Nhdr,0, 40353, 1, 1.0, NULL, 40352, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Sym,0, 40355, 1, 1.0, NULL, 40354, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Sym,0, 40357, 1, 1.0, NULL, 40356, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Rel,0, 40359, 1, 1.0, NULL, 40358, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Rel,0, 40361, 1, 1.0, NULL, 40360, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Rela,0, 40363, 1, 1.0, NULL, 40362, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Rela,0, 40365, 1, 1.0, NULL, 40364, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Verdef,0, 40367, 1, 1.0, NULL, 40366, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Verdef,0, 40369, 1, 1.0, NULL, 40368, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Verdaux,0, 40371, 1, 1.0, NULL, 40370, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Verdaux,0, 40373, 1, 1.0, NULL, 40372, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Verneed,0, 40375, 1, 1.0, NULL, 40374, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Verneed,0, 40377, 1, 1.0, NULL, 40376, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Vernaux,0, 40379, 1, 1.0, NULL, 40378, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Vernaux,0, 40381, 1, 1.0, NULL, 40380, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Ehdr,0, 40383, 1, 1.0, NULL, 40382, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Ehdr,0, 40385, 1, 1.0, NULL, 40384, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Shdr,0, 40387, 1, 1.0, NULL, 40386, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Shdr,0, 40389, 1, 1.0, NULL, 40388, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Dyn,0, 40393, 1, 1.0, NULL, 40392, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Dyn,0, 40395, 1, 1.0, NULL, 40394, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in elf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
