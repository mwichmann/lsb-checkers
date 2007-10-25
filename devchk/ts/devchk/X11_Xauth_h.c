/*
 * Test of X11/Xauth.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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
#if defined __i386__
CheckTypeSize(Xauth,32, 8961, 2, 1.2, NULL, 9290, NULL)
#elif defined __ia64__
CheckTypeSize(Xauth,64, 8961, 3, 1.3, NULL, 9290, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Xauth,32, 8961, 6, 1.2, NULL, 9290, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Xauth,32, 8961, 10, 1.3, NULL, 9290, NULL)
#elif defined __powerpc64__
CheckTypeSize(Xauth,64, 8961, 9, 2.0, NULL, 9290, NULL)
#elif defined __s390x__
CheckTypeSize(Xauth,64, 8961, 12, 1.3, NULL, 9290, NULL)
#elif defined __x86_64__
CheckTypeSize(Xauth,64, 8961, 11, 2.0, NULL, 9290, NULL)
#else
Msg("Find size of Xauth (8961)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9290, NULL);\n",architecture,8961,0);
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
