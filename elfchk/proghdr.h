/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#ifndef _PROGHDR_H
#define _PROGHDR_H

#include "elfchk.h"

extern int checkPT_NULL(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_LOAD(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_DYNAMIC(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_INTERP(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_NOTE(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_SHLIB(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_PHDR(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_TLS(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_GNU_EH_FRAME(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_GNU_STACK(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern int checkPT_IA_64_UNWIND(ElfFile *, Elf_Phdr *, struct tetj_handle *);
extern void checkElfproghdr(int index, ElfFile *file1, struct tetj_handle *);

#endif /* _PROGHDR_H */
