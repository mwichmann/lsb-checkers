#ifndef _ARCHK_SYMBOLS_H
#define _ARCHK_SYMBOLS_H

#include "../elfchk/elfchk.h"
#include "../tetj/tetj.h"

extern int checksymbols(ElfFile *file, struct tetj_handle *journal);

#endif /* _ARCHK_SYMBOLS_H */
