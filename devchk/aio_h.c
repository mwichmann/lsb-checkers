/*
 * Test of aio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "aio.h"



int aio_h()
{
int cnt=0;
CheckTypeSize(struct aiocb,0)
CheckOffset(struct aiocb,aio_fildes,0)
CheckOffset(struct aiocb,aio_lio_opcode,4)
CheckOffset(struct aiocb,aio_reqprio,8)
CheckOffset(struct aiocb,aio_buf,12)
CheckOffset(struct aiocb,aio_nbytes,16)
CheckOffset(struct aiocb,aio_sigevent,20)
CheckOffset(struct aiocb,__next_prio,84)
CheckOffset(struct aiocb,__abs_prio,88)
CheckOffset(struct aiocb,__policy,92)
CheckOffset(struct aiocb,__error_code,96)
CheckOffset(struct aiocb,__return_value,100)
CheckOffset(struct aiocb,aio_offset,104)
CheckOffset(struct aiocb,__pad,108)
CheckOffset(struct aiocb,__unused,112)
printf("%d tests in aio.h\n",cnt);
return cnt;
}
