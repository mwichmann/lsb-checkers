#ifndef __CHECK_FILE_H
#define __CHECK_FILE_H

#include "../tetj/tetj.h"
#include "../elfchk/elfchk.h"

ElfFile *check_file(char *filename, struct tetj_handle *journal, int isProgram);

#endif /* __CHECK_FILE_H */
