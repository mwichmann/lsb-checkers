/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "regex.h"



int regex_h()
{
int cnt=0;
CheckTypeSize(regoff_t,4)
CheckTypeSize(regex_t,32)
CheckTypeSize(reg_syntax_t,4)
CheckTypeSize(regmatch_t,8)
printf("%d tests in regex.h\n",cnt);
return cnt;
}
