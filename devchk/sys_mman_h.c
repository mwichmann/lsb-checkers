/*
 * Test of sys/mman.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/mman.h"



int sys_mman_h()
{
int cnt=0;
#ifdef PROT_READ
CompareConstant(PROT_READ,1)
#else
Msg( "Warning: Constant not found: PROT_READ\n");
#endif
#ifdef PROT_WRITE
CompareConstant(PROT_WRITE,2)
#else
Msg( "Warning: Constant not found: PROT_WRITE\n");
#endif
#ifdef PROT_EXEC
CompareConstant(PROT_EXEC,4)
#else
Msg( "Warning: Constant not found: PROT_EXEC\n");
#endif
#ifdef PROT_NONE
CompareConstant(PROT_NONE,0)
#else
Msg( "Warning: Constant not found: PROT_NONE\n");
#endif
#ifdef MAP_SHARED
CompareConstant(MAP_SHARED,1)
#else
Msg( "Warning: Constant not found: MAP_SHARED\n");
#endif
#ifdef MAP_PRIVATE
CompareConstant(MAP_PRIVATE,2)
#else
Msg( "Warning: Constant not found: MAP_PRIVATE\n");
#endif
#ifdef MAP_FIXED
CompareConstant(MAP_FIXED,16)
#else
Msg( "Warning: Constant not found: MAP_FIXED\n");
#endif
#ifdef MAP_FAILED
CompareConstant(MAP_FAILED,(-1))
#else
Msg( "Warning: Constant not found: MAP_FAILED\n");
#endif
#ifdef MS_ASYNC
CompareConstant(MS_ASYNC,1)
#else
Msg( "Warning: Constant not found: MS_ASYNC\n");
#endif
#ifdef MS_SYNC
CompareConstant(MS_SYNC,4)
#else
Msg( "Warning: Constant not found: MS_SYNC\n");
#endif
#ifdef MS_INVALIDATE
CompareConstant(MS_INVALIDATE,2)
#else
Msg( "Warning: Constant not found: MS_INVALIDATE\n");
#endif
#ifdef MCL_CURRENT
CompareConstant(MCL_CURRENT,1)
#else
Msg( "Warning: Constant not found: MCL_CURRENT\n");
#endif
#ifdef MCL_FUTURE
CompareConstant(MCL_FUTURE,2)
#else
Msg( "Warning: Constant not found: MCL_FUTURE\n");
#endif
printf("%d tests in sys/mman.h\n",cnt);
return cnt;
}
