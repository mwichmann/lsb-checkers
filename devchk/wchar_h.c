/*
 * Test of wchar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "wchar.h"



int wchar_h()
{
int cnt=0;
CheckTypeSize(mbstate_t,8)
printf("%d tests in wchar.h\n",cnt);
return cnt;
}
