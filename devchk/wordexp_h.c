/*
 * Test of wordexp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "wordexp.h"



int wordexp_h()
{
int cnt=0;
CheckTypeSize(wordexp_t,12)
printf("%d tests in wordexp.h\n",cnt);
return cnt;
}
