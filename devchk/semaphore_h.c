/*
 * Test of semaphore.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "semaphore.h"



int semaphore_h()
{
int cnt=0;
CheckTypeSize(_pthread_descr,4)
CheckTypeSize(sem_t,16)
printf("%d tests in semaphore.h\n",cnt);
return cnt;
}
