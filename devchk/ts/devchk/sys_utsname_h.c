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

#if __i386__
CheckTypeSize(struct utsname,390, 7013, 2)
CheckMemberSize(struct utsname,nodename,65,2,30178)
CheckOffset(struct utsname,nodename,65,2,30178)
CheckMemberSize(struct utsname,release,65,2,30179)
CheckOffset(struct utsname,release,130,2,30179)
CheckMemberSize(struct utsname,version,65,2,30180)
CheckOffset(struct utsname,version,195,2,30180)
CheckMemberSize(struct utsname,machine,65,2,30181)
CheckOffset(struct utsname,machine,260,2,30181)
CheckMemberSize(struct utsname,domainname,65,2,34411)
CheckOffset(struct utsname,domainname,325,2,34411)
#elif __ia64__
CheckTypeSize(struct utsname,390, 7013, 3)
CheckMemberSize(struct utsname,nodename,65,3,30178)
CheckOffset(struct utsname,nodename,65,3,30178)
CheckMemberSize(struct utsname,release,65,3,30179)
CheckOffset(struct utsname,release,130,3,30179)
CheckMemberSize(struct utsname,version,65,3,30180)
CheckOffset(struct utsname,version,195,3,30180)
CheckMemberSize(struct utsname,machine,65,3,30181)
CheckOffset(struct utsname,machine,260,3,30181)
CheckMemberSize(struct utsname,domainname,65,3,34411)
CheckOffset(struct utsname,domainname,325,3,34411)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct utsname,390, 7013, 6)
CheckMemberSize(struct utsname,nodename,0,6,30178)
CheckOffset(struct utsname,nodename,65,6,30178)
CheckMemberSize(struct utsname,release,0,6,30179)
CheckOffset(struct utsname,release,130,6,30179)
CheckMemberSize(struct utsname,version,0,6,30180)
CheckOffset(struct utsname,version,195,6,30180)
CheckMemberSize(struct utsname,machine,0,6,30181)
CheckOffset(struct utsname,machine,260,6,30181)
CheckMemberSize(struct utsname,domainname,0,6,34411)
CheckOffset(struct utsname,domainname,325,6,34411)
#elif __s390__
CheckTypeSize(struct utsname,390, 7013, 10)
CheckMemberSize(struct utsname,nodename,0,10,30178)
CheckOffset(struct utsname,nodename,65,10,30178)
CheckMemberSize(struct utsname,release,0,10,30179)
CheckOffset(struct utsname,release,130,10,30179)
CheckMemberSize(struct utsname,version,0,10,30180)
CheckOffset(struct utsname,version,195,10,30180)
CheckMemberSize(struct utsname,machine,0,10,30181)
CheckOffset(struct utsname,machine,260,10,30181)
CheckMemberSize(struct utsname,domainname,0,10,34411)
CheckOffset(struct utsname,domainname,325,10,34411)
#elif __powerpc64__
CheckTypeSize(struct utsname,390, 7013, 9)
CheckMemberSize(struct utsname,nodename,0,9,30178)
CheckOffset(struct utsname,nodename,65,9,30178)
CheckMemberSize(struct utsname,release,0,9,30179)
CheckOffset(struct utsname,release,130,9,30179)
CheckMemberSize(struct utsname,version,0,9,30180)
CheckOffset(struct utsname,version,195,9,30180)
CheckMemberSize(struct utsname,machine,0,9,30181)
CheckOffset(struct utsname,machine,260,9,30181)
CheckMemberSize(struct utsname,domainname,0,9,34411)
CheckOffset(struct utsname,domainname,325,9,34411)
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
