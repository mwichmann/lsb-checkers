/*
 * Test of sys/un.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/un.h"



#ifdef TET_TEST
void sys_un_h()
{
#else
int sys_un_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/un.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef UNIX_PATH_MAX
	CompareConstant(UNIX_PATH_MAX,108,4992,architecture)
#else
Msg( "Error: Constant not found: UNIX_PATH_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct sockaddr_un,110, 9152, 2)
CheckMemberSize(struct sockaddr_un,sun_path,108,2,34486)
CheckOffset(struct sockaddr_un,sun_path,2,2,34486)
#elif __ia64__
CheckTypeSize(struct sockaddr_un,110, 9152, 3)
CheckMemberSize(struct sockaddr_un,sun_path,108,3,34486)
CheckOffset(struct sockaddr_un,sun_path,2,3,34486)
#elif __s390__ && !__s390x__
CheckTypeSize(struct sockaddr_un,110, 9152, 10)
CheckMemberSize(struct sockaddr_un,sun_path,0,10,34486)
CheckOffset(struct sockaddr_un,sun_path,2,10,34486)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sockaddr_un,110, 9152, 6)
CheckMemberSize(struct sockaddr_un,sun_path,108,6,34486)
CheckOffset(struct sockaddr_un,sun_path,2,6,34486)
#elif __powerpc64__
CheckTypeSize(struct sockaddr_un,110, 9152, 9)
CheckMemberSize(struct sockaddr_un,sun_path,108,9,34486)
CheckOffset(struct sockaddr_un,sun_path,2,9,34486)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9152,0);
Msg("Find size of sockaddr_un (9152)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/un.h\n",cnt);
return cnt;
#endif

}
