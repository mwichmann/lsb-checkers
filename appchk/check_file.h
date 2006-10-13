#ifndef __CHECK_FILE_H
#define __CHECK_FILE_H

#include "../elfchk/elfchk.h"
#include "../elfchk/hdr.h"
#include "../elfchk/proghdr.h"

int check_file(ElfFile *elffile, Elf_type isLib);
void check_lib(ElfFile *elffile, Elf_type isLib, int modules);

#endif /* __CHECK_FILE_H */
