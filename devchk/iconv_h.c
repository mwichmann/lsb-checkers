/*
 * Test of iconv.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "iconv.h"



int iconv_h()
{
int cnt=0;
CheckTypeSize(iconv_t,0)
printf("%d tests in iconv.h\n",cnt);
return cnt;
}
