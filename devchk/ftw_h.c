/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ftw.h"



int ftw_h()
{
int cnt=0;
CheckTypeSize(__ftw_func_t,0)
printf("%d tests in ftw.h\n",cnt);
return cnt;
}
