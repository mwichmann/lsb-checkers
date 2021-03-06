#ifndef __CHECK_FILE_H
#define __CHECK_FILE_H

#include "../tetj/tetj.h"
#include "../elfchk/elfchk.h"
#include "../elfchk/hdr.h"
#include "../elfchk/proghdr.h"

extern ElfFile *open_archive(char *filename, struct tetj_handle *journal, int isProgram);
extern ElfFile *check_archive(char *filename, struct tetj_handle *journal, int isProgram);
extern int next_member(ElfFile *elffile, struct tetj_handle *journal);
extern void check_lib(char *filename, struct tetj_handle *journal, int isProgram);

#endif /* __CHECK_FILE_H */
