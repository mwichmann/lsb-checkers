/*
 * Test of aio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "aio.h"



#ifdef TET_TEST
void aio_h()
{
#else
int aio_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in aio.h\n");
#endif

#ifdef AIO_CANCELED
	CompareConstant(AIO_CANCELED,AIO_CANCELED)
#else
Msg( "Warning: Constant not found: AIO_CANCELED\n");
#endif

#ifdef AIO_NOTCANCELED
	CompareConstant(AIO_NOTCANCELED,AIO_NOTCANCELED)
#else
Msg( "Warning: Constant not found: AIO_NOTCANCELED\n");
#endif

#ifdef AIO_ALLDONE
	CompareConstant(AIO_ALLDONE,AIO_ALLDONE)
#else
Msg( "Warning: Constant not found: AIO_ALLDONE\n");
#endif

#ifdef LIO_READ
	CompareConstant(LIO_READ,LIO_READ)
#else
Msg( "Warning: Constant not found: LIO_READ\n");
#endif

#ifdef LIO_NOP
	CompareConstant(LIO_NOP,LIO_NOP)
#else
Msg( "Warning: Constant not found: LIO_NOP\n");
#endif

#ifdef LIO_WAIT
	CompareConstant(LIO_WAIT,LIO_WAIT)
#else
Msg( "Warning: Constant not found: LIO_WAIT\n");
#endif

#ifdef LIO_WRITE
	CompareConstant(LIO_WRITE,LIO_WRITE)
#else
Msg( "Warning: Constant not found: LIO_WRITE\n");
#endif

#ifdef LIO_NOWAIT
	CompareConstant(LIO_NOWAIT,LIO_NOWAIT)
#else
Msg( "Warning: Constant not found: LIO_NOWAIT\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in aio.h\n",cnt);
return cnt;
#endif

}
