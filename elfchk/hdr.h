/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#ifndef _ELF_HDR_H
#define _ELF_HDR_H

#include "elfchk.h"

typedef enum {
    ELF_UNKNOWN = 0x0,
	ELF_IS_EXEC = 0x1,
	ELF_IS_DSO = 0x2,
	ELF_IS_OBJ = 0x4
	} Elf_type;

/* Check elf header
   If its not a program its considered to be shared library */
/* If ELF type is unknown, the function will return the type of file */
extern int checkElfhdr(ElfFile *file1, Elf_type expect, 
                        struct tetj_handle *journal);

#endif /* _ELF_HDR_H */
