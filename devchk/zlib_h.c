/*
 * Test of zlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "zlib.h"



int zlib_h()
{
int cnt=0;
CheckTypeSize(Bytef *,0)
CheckTypeSize(struct internal_state,0)
CheckTypeSize(struct internal_state *,0)
CheckTypeSize(alloc_func,0)
CheckTypeSize(free_func,0)
CheckTypeSize(z_stream *,0)
CheckTypeSize(z_streamp,0)
CheckTypeSize(const Bytef,0)
CheckTypeSize(const Bytef *,0)
CheckTypeSize(uLongf *,0)
CheckTypeSize(gzFile,0)
CheckTypeSize(const voidp,0)
CheckTypeSize(const uLongf,0)
CheckTypeSize(const uLongf *,0)
printf("%d tests in zlib.h\n",cnt);
return cnt;
}
