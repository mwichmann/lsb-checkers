/*
 * Test of search.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "search.h"



int search_h()
{
int cnt=0;
CheckTypeSize(__action_fn_t,4)
CheckTypeSize(VISIT,4)
CheckTypeSize(ENTRY,8)
CheckTypeSize(struct entry,0)
CheckOffset(struct entry,key,4)
CheckOffset(struct entry,data,4)
CheckTypeSize(ACTION,4)
printf("%d tests in search.h\n",cnt);
return cnt;
}
