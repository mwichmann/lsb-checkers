/*
 * Test of sys/sem.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/sem.h"



int sys_sem_h()
{
int cnt=0;
CheckTypeSize(struct sembuf,0)
CheckOffset(struct sembuf,sem_num,0)
CheckOffset(struct sembuf,sem_op,2)
CheckOffset(struct sembuf,sem_flg,4)
printf("%d tests in sys/sem.h\n",cnt);
return cnt;
}
