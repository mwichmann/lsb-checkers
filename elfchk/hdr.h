/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestnadards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#ifndef _ELF_HDR_H
#define _ELF_HDR_H

#include "elfchk.h"

/* Check elf header
   If its not a program its considered to be shared library */
extern void checkElfhdr(ElfFile *file1, int isProgram, 
                        struct tetj_handle *journal);

#endif /* _ELF_HDR_H */
