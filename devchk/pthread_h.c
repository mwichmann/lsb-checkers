/*
 * Test of pthread.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "pthread.h"



int pthread_h()
{
int cnt=0;
CheckTypeSize(struct _pthread_cleanup_buffer,0)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12)
printf("%d tests in pthread.h\n",cnt);
return cnt;
}
