#ifndef _PROGHDR_H
#define _PROGHDR_H

#include "elfchk.h"

extern int checkPT_NULL(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_LOAD(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_DYNAMIC(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_INTERP(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_NOTE(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_SHLIB(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_PHDR(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern int checkPT_NUM(ElfFile *, Elf32_Phdr *, struct tetj_handle *);
extern void checkElfproghdr(int index, ElfFile *file1, struct tetj_handle *);

#endif /* _PROGHDR_H */
