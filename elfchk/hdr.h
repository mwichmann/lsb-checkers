#ifndef _ELF_HDR_H
#define _ELF_HDR_H

#include "elfchk.h"

/* Check elf header
   If its not a program its considered to be shared library */
extern void checkElfhdr(ElfFile *file1, int isProgram);

#endif /* _ELF_HDR_H */
