/* Generated file */
#include <unistd.h>
#include "libs.h"
#include "libchk.h"

#include "../tetj/tetj.h"

void check_libs(struct tetj_handle *journal)
{
#if __i386__
check_lib("libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo,journal);
#endif
}
