/*
 * Test of sys/utsname.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/utsname.h"



int sys_utsname_h()
{
int cnt=0;
CheckTypeSize(struct utsname,0)
CheckOffset(struct utsname,sysname,0)
CheckOffset(struct utsname,nodename,65)
CheckOffset(struct utsname,release,130)
CheckOffset(struct utsname,version,195)
CheckOffset(struct utsname,machine,260)
CheckOffset(struct utsname,__domainname,325)
printf("%d tests in sys/utsname.h\n",cnt);
return cnt;
}
