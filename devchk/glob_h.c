/*
 * Test of glob.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "glob.h"



int glob_h()
{
int cnt=0;
CheckTypeSize(glob_t,36)
printf("%d tests in glob.h\n",cnt);
return cnt;
}
