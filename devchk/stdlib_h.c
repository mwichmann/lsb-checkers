/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdlib.h"



int stdlib_h()
{
int cnt=0;
CheckTypeSize(lldiv_t,16,)
CheckTypeSize(ldiv_t,8,)
CheckTypeSize(__compar_fn_t,4,)
CheckTypeSize(div_t,8,)
printf("%d tests in stdlib.h\n",cnt);
return cnt;
}
