/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdio.h>
#include "hdr.h"
#include "symvers.h"
#include "tetj.h"

void
checkElfhdr(ElfFile *file1, int isProgram, struct tetj_handle *journal)
{
#define TMP_STRING_SIZE (400)
  char tmp_string[TMP_STRING_SIZE+1];
Elf_Ehdr *hdr1;

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
	snprintf( tmp_string, TMP_STRING_SIZE, "compareElfhdr: e_ident[%s] isn't expected value %s", #index, #value); \
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
checkhdrident( EI_OSABI, ELFOSABI_SYSV )
checkhdrident( EI_ABIVERSION, 0 )

#undef checkhdrident

#define checkhdrfield( member, value ) \
{ \
tetj_tp_count++; \
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check header field "#member" is "#value); \
if( hdr1->member != value ) { \
	snprintf( tmp_string, TMP_STRING_SIZE, "compareElfhdr: %s isn't expected value %s, found %x instead\n", #member, #value, hdr1->member); \
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

/* Check e_type */

if (isProgram)
{
  checkhdrfield( e_type, ET_EXEC )
}
else
{
  checkhdrfield( e_type, ET_DYN )
}

/* Check e_machine */

#if defined(i386)
checkhdrfield( e_machine, EM_386 )
#elif defined( __ia64__ )
checkhdrfield( e_machine, EM_IA_64 )
#elif __powerpc__ && !__powerpc64__
checkhdrfield( e_machine, EM_PPC )
#elif __powerpc64__
checkhdrfield( e_machine, EM_PPC64 )
#elif __s390__ && !__s390x__
checkhdrfield( e_machine, EM_S390 )
#elif __s390x__
checkhdrfield( e_machine, EM_S390 )
#elif __x86_64__
checkhdrfield( e_machine, EM_X86_64 )
#else
fprintf(stderr, "e_machine not checked!!\n");
#endif

/* Check e_version */

checkhdrfield( e_version, EV_CURRENT )

/* Check e_flags */

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

#undef checkhdrfield

if( hdr1->e_shstrndx != SHN_UNDEF ) {
	file1->straddr = file1->addr+file1->saddr[hdr1->e_shstrndx].sh_offset;
	}
file1->strndx = hdr1->e_shstrndx;

getSymbolVersionInfo(file1);
}
