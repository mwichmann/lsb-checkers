#ifndef __APPCHK_LIBRARIES_H
#define  __APPCHK_LIBRARIES_H

#include "../tetj/tetj.h"

extern int symbolinlibrary(char *symname, struct tetj_handle *journal);
extern int add_library_symbols(ElfFile *elffile, struct tetj_handle *journal);

#endif /* __APPCHK_LIBRARIES_H */
