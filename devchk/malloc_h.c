/*
 * Test of malloc.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "malloc.h"



int malloc_h()
{
int cnt=0;
CheckTypeSize(struct mallinfo,0)
CheckOffset(struct mallinfo,arena,0)
CheckOffset(struct mallinfo,ordblks,4)
CheckOffset(struct mallinfo,smblks,8)
CheckOffset(struct mallinfo,hblks,12)
CheckOffset(struct mallinfo,hblkhd,16)
CheckOffset(struct mallinfo,usmblks,20)
CheckOffset(struct mallinfo,fsmblks,24)
CheckOffset(struct mallinfo,uordblks,28)
CheckOffset(struct mallinfo,fordblks,32)
CheckOffset(struct mallinfo,keepcost,36)
printf("%d tests in malloc.h\n",cnt);
return cnt;
}
