/*
 * Test of sys/shm.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/shm.h"



int sys_shm_h()
{
int cnt=0;
#ifdef SHM_RDONLY
CompareConstant(SHM_RDONLY,4096)
#else
Msg( "Warning: Constant not found: SHM_RDONLY\n");
#endif
#ifdef SHMLBA
CompareConstant(SHMLBA,4096)
#else
Msg( "Warning: Constant not found: SHMLBA\n");
#endif
#ifdef SHM_RND
CompareConstant(SHM_RND,8192)
#else
Msg( "Warning: Constant not found: SHM_RND\n");
#endif
printf("%d tests in sys/shm.h\n",cnt);
return cnt;
}
