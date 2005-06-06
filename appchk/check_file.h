#ifndef __CHECK_FILE_H
#define __CHECK_FILE_H

#include "../tetj/tetj.h"
#include "../elfchk/elfchk.h"
#include "../elfchk/hdr.h"
#include "../elfchk/proghdr.h"

int check_file(ElfFile *elffile, struct tetj_handle *journal, Elf_type isLib);
void check_lib(ElfFile *elffile, struct tetj_handle *journal, Elf_type isLib, int modules);

#endif /* __CHECK_FILE_H */
