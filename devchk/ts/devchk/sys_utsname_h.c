/*
 * Test of sys/utsname.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/utsname.h"



#ifdef TET_TEST
void sys_utsname_h()
{
#else
int sys_utsname_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/utsname.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct utsname,390, 7013, 2)
CheckOffset(struct utsname,nodename,65,2,30178)
CheckOffset(struct utsname,release,130,2,30179)
CheckOffset(struct utsname,version,195,2,30180)
CheckOffset(struct utsname,machine,260,2,30181)
CheckOffset(struct utsname,domainname,325,2,34411)
#elif __ia64__
CheckTypeSize(struct utsname,390, 7013, 3)
CheckOffset(struct utsname,nodename,65,3,30178)
CheckOffset(struct utsname,release,130,3,30179)
CheckOffset(struct utsname,version,195,3,30180)
CheckOffset(struct utsname,machine,260,3,30181)
CheckOffset(struct utsname,domainname,325,3,34411)
#elif __powerpc__
CheckTypeSize(struct utsname,390, 7013, 6)
Msg("Missing member data for utsname on PPC32\n");
CheckOffset(struct utsname,sysname,0,6,30177)
CheckOffset(struct utsname,nodename,0,6,30178)
CheckOffset(struct utsname,release,0,6,30179)
CheckOffset(struct utsname,version,0,6,30180)
CheckOffset(struct utsname,machine,0,6,30181)
CheckOffset(struct utsname,domainname,0,6,34411)
#elif __s390__
CheckTypeSize(struct utsname,390, 7013, 10)
CheckOffset(struct utsname,nodename,65,10,30178)
CheckOffset(struct utsname,release,130,10,30179)
CheckOffset(struct utsname,version,195,10,30180)
CheckOffset(struct utsname,machine,260,10,30181)
CheckOffset(struct utsname,domainname,325,10,34411)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7013,0);
Msg("Find size of utsname (7013)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/utsname.h\n",cnt);
return cnt;
#endif

}
