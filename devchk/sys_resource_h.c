/*
 * Test of sys/resource.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/resource.h"



int sys_resource_h()
{
int cnt=0;
#ifdef PRIO_PROCESS
CompareConstant(PRIO_PROCESS,(-1))
#else
Msg( "Warning: Constant not found: PRIO_PROCESS\n");
#endif
#ifdef PRIO_PGRP
CompareConstant(PRIO_PGRP,(-1))
#else
Msg( "Warning: Constant not found: PRIO_PGRP\n");
#endif
#ifdef PRIO_USER
CompareConstant(PRIO_USER,(-1))
#else
Msg( "Warning: Constant not found: PRIO_USER\n");
#endif
#ifdef RLIM_INFINITY
CompareConstant(RLIM_INFINITY,2147483647)
#else
Msg( "Warning: Constant not found: RLIM_INFINITY\n");
#endif
#ifdef RLIM_SAVED_MAX
CompareConstant(RLIM_SAVED_MAX,2147483647)
#else
Msg( "Warning: Constant not found: RLIM_SAVED_MAX\n");
#endif
#ifdef RLIM_SAVED_CUR
CompareConstant(RLIM_SAVED_CUR,2147483647)
#else
Msg( "Warning: Constant not found: RLIM_SAVED_CUR\n");
#endif
#ifdef RUSAGE_SELF
CompareConstant(RUSAGE_SELF,0)
#else
Msg( "Warning: Constant not found: RUSAGE_SELF\n");
#endif
#ifdef RUSAGE_CHILDREN
CompareConstant(RUSAGE_CHILDREN,(-1))
#else
Msg( "Warning: Constant not found: RUSAGE_CHILDREN\n");
#endif
#ifdef RLIMIT_CORE
CompareConstant(RLIMIT_CORE,4)
#else
Msg( "Warning: Constant not found: RLIMIT_CORE\n");
#endif
#ifdef RLIMIT_CPU
CompareConstant(RLIMIT_CPU,0)
#else
Msg( "Warning: Constant not found: RLIMIT_CPU\n");
#endif
#ifdef RLIMIT_DATA
CompareConstant(RLIMIT_DATA,2)
#else
Msg( "Warning: Constant not found: RLIMIT_DATA\n");
#endif
#ifdef RLIMIT_FSIZE
CompareConstant(RLIMIT_FSIZE,1)
#else
Msg( "Warning: Constant not found: RLIMIT_FSIZE\n");
#endif
#ifdef RLIMIT_NOFILE
CompareConstant(RLIMIT_NOFILE,7)
#else
Msg( "Warning: Constant not found: RLIMIT_NOFILE\n");
#endif
#ifdef RLIMIT_STACK
CompareConstant(RLIMIT_STACK,3)
#else
Msg( "Warning: Constant not found: RLIMIT_STACK\n");
#endif
#ifdef RLIMIT_AS
CompareConstant(RLIMIT_AS,9)
#else
Msg( "Warning: Constant not found: RLIMIT_AS\n");
#endif
printf("%d tests in sys/resource.h\n",cnt);
return cnt;
}
