/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "setjmp.h"



int setjmp_h()
{
int cnt=0;
CheckTypeSize(jmp_buf,0)
CheckTypeSize(sigjmp_buf,0)
printf("%d tests in setjmp.h\n",cnt);
return cnt;
}
