/*
 * Test of grp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "grp.h"



int grp_h()
{
int cnt=0;
CheckTypeSize(struct group,0)
CheckOffset(struct group,gr_name,0)
CheckOffset(struct group,gr_passwd,4)
CheckOffset(struct group,gr_gid,8)
CheckOffset(struct group,gr_mem,12)
printf("%d tests in grp.h\n",cnt);
return cnt;
}
