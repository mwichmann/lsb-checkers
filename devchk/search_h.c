/*
 * Test of search.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "search.h"



int search_h()
{
int cnt=0;
CheckTypeSize(ACTION,0)
CheckTypeSize(ENTRY,0)
CheckTypeSize(__action_fn_t,0)
printf("%d tests in search.h\n",cnt);
return cnt;
}
