#ifndef _APPCHK_SYMBOLS_H
#define _APPCHK_SYMBOLS_H

#include "../elfchk/elfchk.h"
#include "../tetj/tetj.h"

extern int checksymbols(ElfFile *file, struct tetj_handle *journal, int modules);

#endif /* _APPCHK_SYMBOLS_H */
