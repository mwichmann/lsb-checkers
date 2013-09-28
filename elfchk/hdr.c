/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdio.h>
#include "hdr.h"
#include "elf_values.h"
#include "symvers.h"
#include "tetj.h"

static char* get_machine_name (unsigned e_machine);

int
checkElfhdr(ElfFile *file1, Elf_type expect, struct tetj_handle *journal,
	    int checking_app)
{
#define TMP_STRING_SIZE (400)
  char tmp_string[TMP_STRING_SIZE+1];
Elf_Ehdr *hdr1;
int elf_type = ELF_UNKNOWN;
int hdrfield_error;
int abi_forbidden;

hdr1=(Elf_Ehdr *)file1->addr;

if( hdr1->e_phoff ) {
	file1->paddr=(Elf_Phdr *)((caddr_t)file1->addr+hdr1->e_phoff);
	file1->numph = hdr1->e_phnum;
	}
if( hdr1->e_shoff ) {
	file1->saddr=(Elf_Shdr *)((caddr_t)file1->addr+hdr1->e_shoff);
	file1->numsh = hdr1->e_shnum;
	}

/* Check e_ident */

#define checkhdrident( index, value ) \
{ \
tetj_tp_count++; \
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check header id "#index" is "#value); \
if( hdr1->e_ident[index] != value ) { \
	snprintf( tmp_string, TMP_STRING_SIZE, "checkElfhdr: e_ident[%s] isn't expected value %s", #index, #value); \
        fprintf(stderr, "%s\n", tmp_string); \
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string); \
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL); \
	} \
else \
{ \
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); \
} \
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); \
}

checkhdrident( EI_MAG0, ELFMAG0 )
checkhdrident( EI_MAG1, ELFMAG1 )
checkhdrident( EI_MAG2, ELFMAG2 )
checkhdrident( EI_MAG3, ELFMAG3 )
#if defined(i386)
checkhdrident( EI_CLASS, ELFCLASS32 )
#elif defined( __ia64__ )
checkhdrident( EI_CLASS, ELFCLASS64 )
#elif  __powerpc__ && !__powerpc64__
checkhdrident( EI_CLASS, ELFCLASS32 )
#elif __powerpc64__
checkhdrident( EI_CLASS, ELFCLASS64 )
#elif __s390x__
checkhdrident( EI_CLASS, ELFCLASS64 )
#elif __s390__ && !__s390x__
checkhdrident( EI_CLASS, ELFCLASS32 )
#elif __x86_64__
checkhdrident( EI_CLASS, ELFCLASS64 )
#else
fprintf(stderr, "EI_CLASS not checked!!\n");
#endif
#if defined(i386)
checkhdrident( EI_DATA, ELFDATA2LSB )
#elif defined( __ia64__ )
checkhdrident( EI_DATA, ELFDATA2LSB )
#elif  __powerpc__ && !__powerpc64__
checkhdrident( EI_DATA, ELFDATA2MSB )
#elif __powerpc64__
checkhdrident( EI_DATA, ELFDATA2MSB )
#elif __s390__ && !__s390x__
checkhdrident( EI_DATA, ELFDATA2MSB )
#elif __s390x__
checkhdrident( EI_DATA, ELFDATA2MSB )
#elif __x86_64__
checkhdrident( EI_DATA, ELFDATA2LSB )
#else
fprintf(stderr, "EI_DATA not checked!!\n");
#endif
checkhdrident( EI_VERSION, EV_CURRENT )

/*
 * EI_OSABI can be either ELFOSABI_SYSV or ELFOSABI_LINUX, 
 * but only for system libraries.  We can't use checkhdrident
 * macro for such a check.
 */
tetj_tp_count++;
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
	"Check header id EI_OSABI for the proper ELFOSABI value");
abi_forbidden = (hdr1->e_ident[EI_OSABI] != ELFOSABI_SYSV);
if(!checking_app) {
    abi_forbidden = abi_forbidden && 
                    (hdr1->e_ident[EI_OSABI] != ELFOSABI_LINUX);
 }
if(abi_forbidden) {
    snprintf( tmp_string, TMP_STRING_SIZE,
"checkElfhdr: e_ident[EI_OSABI] is not set to an allowable value");
    fprintf(stderr, "%s\n", tmp_string);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0,
                       tmp_string);
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
} else {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
}
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); \

checkhdrident( EI_ABIVERSION, 0 )

#undef checkhdrident

#define checkhdrfield( member, value ) \
{ \
tetj_tp_count++; \
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check header field "#member" is "#value); \
if( hdr1->member != value ) { \
	snprintf( tmp_string, TMP_STRING_SIZE, "checkElfhdr: %s isn't expected value %s, found %x instead", #member, #value, hdr1->member); \
        fprintf(stderr, "%s\n", tmp_string); \
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string); \
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL); \
        hdrfield_error = 1; \
	} \
else \
{ \
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); \
} \
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); \
	}

/*
 * The same macro as above, but also provides a user-readable explanation
 * of the value found (in case when it is not as expected)
 */
#define checkhdrfield_ext( member, value, str_member, str_value ) \
{ \
tetj_tp_count++; \
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check header field "#member" is "#value); \
if( hdr1->member != value ) { \
    snprintf( tmp_string, TMP_STRING_SIZE, "checkElfhdr: %s isn't expected value %s, found %s instead", #member, str_member, str_value); \
        fprintf(stderr, "%s\n", tmp_string); \
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string); \
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL); \
        hdrfield_error = 1; \
    } \
else \
{ \
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); \
} \
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); \
    }

/* Check e_type */
elf_type = hdr1->e_type;
switch( expect ) {
	case ELF_ERROR:
	case ELF_UNKNOWN:
		break;
	case ELF_IS_EXEC:
		checkhdrfield( e_type, ET_EXEC )
		break;
	case ELF_IS_PIE:
		checkhdrfield( e_type, ET_DYN )
		break;
	case ELF_IS_DSO:
		checkhdrfield( e_type, ET_DYN )
		break;
	case ELF_IS_OBJ:
		checkhdrfield( e_type, ET_REL )
		break;
}

/* Check e_machine */
hdrfield_error = 0;

#if defined(i386)
checkhdrfield_ext( e_machine, EM_386, get_machine_name(EM_386), get_machine_name(hdr1->e_machine) )
#elif defined( __ia64__ )
checkhdrfield_ext( e_machine, EM_IA_64, get_machine_name(EM_IA_64), get_machine_name(hdr1->e_machine) )
#elif __powerpc__ && !__powerpc64__
checkhdrfield_ext( e_machine, EM_PPC, get_machine_name(EM_PPC), get_machine_name(hdr1->e_machine) )
#elif __powerpc64__
checkhdrfield_ext( e_machine, EM_PPC64, get_machine_name(EM_PPC64), get_machine_name(hdr1->e_machine) )
#elif __s390__ && !__s390x__
checkhdrfield_ext( e_machine, EM_S390, get_machine_name(EM_S390), get_machine_name(hdr1->e_machine) )
#elif __s390x__
checkhdrfield_ext( e_machine, EM_S390, get_machine_name(EM_S390), get_machine_name(hdr1->e_machine) )
#elif __x86_64__
checkhdrfield_ext( e_machine, EM_X86_64, get_machine_name(EM_X86_64), get_machine_name(hdr1->e_machine) )
#else
fprintf(stderr, "e_machine not checked!!\n");
#endif

if (hdrfield_error)
	elf_type = ELF_ERROR;

/* Check e_version */

checkhdrfield( e_version, EV_CURRENT )

/* Check e_flags */

if (elf_type != ELF_ERROR) {  /* Check e_flags only if e_machine check passed */
#if defined(i386)
    checkhdrfield( e_flags, 0 )
#elif defined( __ia64__ )
/* today this is correct... but some bits are RFE, may change later? */
    checkhdrfield( e_flags, 0x10 )
#elif __powerpc__ && !__powerpc64__
    checkhdrfield( e_flags, 0 )
#elif __powerpc64__
    checkhdrfield( e_flags, 0 )
#elif __s390__ && !__s390x__
    checkhdrfield( e_flags, 0 )
#elif __s390x__
    checkhdrfield( e_flags, 0 )
#elif __x86_64__
    checkhdrfield( e_flags, 0 )
#else
    fprintf(stderr, "e_flags not checked!!\n");
#endif
}
else {
    tetj_tp_count++;
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check header field e_flags");
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, "ELF file has wrong architecture. ELF flags are not tested, since the tests are architecture specific.");
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_UNTESTED);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
}

#undef checkhdrfield
#undef checkhdrfield_ext

if (elf_type != ELF_ERROR) {          /* Protect appchk from crash if alien architecture. */
	if( hdr1->e_shstrndx != SHN_UNDEF ) {
		file1->straddr = file1->addr+file1->saddr[hdr1->e_shstrndx].sh_offset;
	}
	file1->strndx = hdr1->e_shstrndx;

	getSymbolVersionInfo(file1);
}
else {
	tetj_tp_count++;
	tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "");
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, "ELF file has wrong architecture. Further tests are skipped to avoid using of corrupted data structures.");
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_UNTESTED);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
}

return elf_type;
}

int getElfType (ElfFile *file1)
{
   int elf_type = ELF_UNKNOWN;
   Elf_Ehdr *hdr1 = NULL;

   if (file1)
      hdr1=(Elf_Ehdr *)file1->addr;
   if (hdr1)
      elf_type = hdr1->e_type;

   return elf_type;
}

/* Convert e_machine to something user-readable */
static char *
get_machine_name (unsigned e_machine)
{
  static char buff[64];

  switch (e_machine) {
    case EM_NONE:           return "EM_NONE (No machine)";
    case EM_M32:            return "EM_M32 (AT&T WE 32100)";
    case EM_SPARC:          return "EM_SPARC (SUN SPARC)";
    case EM_386:            return "EM_386 (Intel 80386)";
    case EM_68K:            return "EM_68K (Motorola m68k family)";
    case EM_88K:            return "EM_88K (Motorola m88k family)";
    case EM_860:            return "EM_860 (Intel 80860)";
    case EM_MIPS:           return "EM_MIPS (MIPS R3000 big-endian)";
    case EM_S370:           return "EM_S370 (IBM System/370)";
    case EM_MIPS_RS3_LE:    return "EM_MIPS_RS3_LE (MIPS R3000 little-endian)";
    case EM_PARISC:         return "EM_PARISC (HPPA)";
    case EM_VPP500:         return "EM_VPP500 (Fujitsu VPP500)";
    case EM_SPARC32PLUS:    return "EM_SPARC32PLUS (Sun's v8plus)";
    case EM_960:            return "EM_960 (Intel 80960)";
    case EM_PPC:            return "EM_PPC (PowerPC)";
    case EM_PPC64:          return "EM_PPC64 (PowerPC 64-bit)";
    case EM_S390:           return "EM_S390 (IBM S390)";
    case EM_V800:           return "EM_V800 (NEC V800 series)";
    case EM_FR20:           return "EM_FR20 (Fujitsu FR20)";
    case EM_RH32:           return "EM_RH32 (TRW RH-32)";
    case EM_RCE:            return "EM_RCE (Motorola RCE)";
    case EM_ARM:            return "EM_ARM (ARM)";
    case EM_FAKE_ALPHA:     return "EM_FAKE_ALPHA (Digital Alpha)";
    case EM_SH:             return "EM_SH (Hitachi SH)";
    case EM_SPARCV9:        return "EM_SPARCV9 (SPARC v9 64-bit)";
    case EM_TRICORE:        return "EM_TRICORE (Siemens Tricore)";
    case EM_ARC:            return "EM_ARC (Argonaut RISC Core)";
    case EM_H8_300:         return "EM_H8_300 (Hitachi H8/300)";
    case EM_H8_300H:        return "EM_H8_300H (Hitachi H8/300H)";
    case EM_H8S:            return "EM_H8S (Hitachi H8S)";
    case EM_H8_500:         return "EM_H8_500 (Hitachi H8/500)";
    case EM_IA_64:          return "EM_IA_64 (Intel Merced)";
    case EM_MIPS_X:         return "EM_MIPS_X (Stanford MIPS-X)";
    case EM_COLDFIRE:       return "EM_COLDFIRE (Motorola Coldfire)";
    case EM_68HC12:         return "EM_68HC12 (Motorola M68HC12)";
    case EM_MMA:            return "EM_MMA (Fujitsu MMA Multimedia Accelerator)";
    case EM_PCP:            return "EM_PCP (Siemens PCP)";
    case EM_NCPU:           return "EM_NCPU (Sony nCPU embeeded RISC)";
    case EM_NDR1:           return "EM_NDR1 (Denso NDR1 microprocessor)";
    case EM_STARCORE:       return "EM_STARCORE (Motorola Start*Core processor)";
    case EM_ME16:           return "EM_ME16 (Toyota ME16 processor)";
    case EM_ST100:          return "EM_ST100 (STMicroelectronic ST100 processor)";
    case EM_TINYJ:          return "EM_TINYJ (Advanced Logic Corp. Tinyj emb.fam)";
    case EM_X86_64:         return "EM_X86_64 (AMD x86-64 architecture)";
    case EM_PDSP:           return "EM_PDSP (Sony DSP Processor)";
    case EM_FX66:           return "EM_FX66 (Siemens FX66 microcontroller)";
    case EM_ST9PLUS:        return "EM_ST9PLUS (STMicroelectronics ST9+ 8/16 mc)";
    case EM_ST7:            return "EM_ST7 (STmicroelectronics ST7 8 bit mc)";
    case EM_68HC16:         return "EM_68HC16 (Motorola MC68HC16 microcontroller)";
    case EM_68HC11:         return "EM_68HC11 (Motorola MC68HC11 microcontroller)";
    case EM_68HC08:         return "EM_68HC08 (Motorola MC68HC08 microcontroller)";
    case EM_68HC05:         return "EM_68HC05 (Motorola MC68HC05 microcontroller)";
    case EM_SVX:            return "EM_SVX (Silicon Graphics SVx)";
    case EM_ST19:           return "EM_ST19 (STMicroelectronics ST19 8 bit mc)";
    case EM_VAX:            return "EM_VAX (Digital VAX)";
    case EM_CRIS:           return "EM_CRIS (Axis Communications 32-bit embedded processor)";
    case EM_JAVELIN:        return "EM_JAVELIN (Infineon Technologies 32-bit embedded processor)";
    case EM_FIREPATH:       return "EM_FIREPATH (Element 14 64-bit DSP Processor)";
    case EM_ZSP:            return "EM_ZSP (LSI Logic 16-bit DSP Processor)";
    case EM_MMIX:           return "EM_MMIX (Donald Knuth's educational 64-bit processor)";
    case EM_HUANY:          return "EM_HUANY (Harvard University machine-independent object files)";
    case EM_PRISM:          return "EM_PRISM (SiTera Prism)";
    case EM_AVR:            return "EM_AVR (Atmel AVR 8-bit microcontroller)";
    case EM_FR30:           return "EM_FR30 (Fujitsu FR30)";
    case EM_D10V:           return "EM_D10V (Mitsubishi D10V)";
    case EM_D30V:           return "EM_D30V (Mitsubishi D30V)";
    case EM_V850:           return "EM_V850 (NEC v850)";
    case EM_M32R:           return "EM_M32R (Mitsubishi M32R)";
    case EM_MN10300:        return "EM_MN10300 (Matsushita MN10300)";
    case EM_MN10200:        return "EM_MN10200 (Matsushita MN10200)";
    case EM_PJ:             return "EM_PJ (picoJava)";
    case EM_OPENRISC:       return "EM_OPENRISC (OpenRISC 32-bit embedded processor)";
    case EM_ARC_A5:         return "EM_ARC_A5 (ARC Cores Tangent-A5)";
    case EM_XTENSA:         return "EM_XTENSA (Tensilica Xtensa Architecture)";
    case EM_ALPHA:          return "EM_ALPHA (Alpha)";
    default:
      snprintf(buff, sizeof (buff), "<unknown>: 0x%x", e_machine);
      return buff;
    }
}
