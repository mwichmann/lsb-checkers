/*
 * Test of X11/Xauth.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "X11/Xauth.h"



#ifdef TET_TEST
void X11_Xauth_h()
{
#else
int X11_Xauth_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xauth.h\n");
#endif

printf("Checking data structures in X11/Xauth.h\n");
#if __i386__
CheckTypeSize(Xauth,32, 8961, 2)
#elif __ia64__
CheckTypeSize(Xauth,64, 8961, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Xauth,32, 8961, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(Xauth,32, 8961, 10)
#elif __powerpc64__
CheckTypeSize(Xauth,64, 8961, 9)
#elif __s390x__
CheckTypeSize(Xauth,64, 8961, 12)
#elif __x86_64__
CheckTypeSize(Xauth,64, 8961, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8961,0);
Msg("Find size of Xauth (8961)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xauth.h\n\n",pcnt,cnt);
return cnt;
#endif

}
