#ifndef __ARCHK_LIBRARIES_H
#define  __ARCHK_LIBRARIES_H

#include "../tetj/tetj.h"

extern int symbolinlibrary(char *symname, struct tetj_handle *journal);
extern int add_archive_symbols(char *libname, struct tetj_handle *journal);

#endif /* __ARCHK_LIBRARIES_H */
