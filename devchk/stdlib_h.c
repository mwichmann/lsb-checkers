/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdlib.h"



int stdlib_h()
{
int cnt=0;
CheckTypeSize(div_t,0)
CheckTypeSize(ldiv_t,0)
CheckTypeSize(__compar_fn_t,0)
printf("%d tests in stdlib.h\n",cnt);
return cnt;
}
