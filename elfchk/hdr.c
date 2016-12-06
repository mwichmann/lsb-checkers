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
    case EM_386:            return "EM_386 (Intel 80386)";
    case EM_PPC:            return "EM_PPC (PowerPC)";
    case EM_PPC64:          return "EM_PPC64 (PowerPC 64-bit)";
    case EM_S390:           return "EM_S390 (IBM S390)";
    case EM_ARM:            return "EM_ARM (ARM)";
    case EM_IA_64:          return "EM_IA_64 (Intel Merced)";
    case EM_X86_64:         return "EM_X86_64 (AMD x86-64 architecture)";
    case EM_AARCH64:        return "EM_AARCH64 (ARM AARCH64)";
    default:
      snprintf(buff, sizeof (buff), "<unknown/non-LSB>: 0x%x", e_machine);
      return buff;
    }
}
