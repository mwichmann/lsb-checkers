/*
 * Test of dirent.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
struct __dirstream {
	};
#include "dirent.h"



#ifdef TET_TEST
void dirent_h()
{
#else
int dirent_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in dirent.h\n");
#endif

#ifdef __ia64__
CheckTypeSize(DIR,0, 10175, 3)
#elif __i386__
CheckTypeSize(DIR,0, 10175, 2)
#elif __powerpc__
CheckTypeSize(DIR,0, 10175, 6)
#elif __s390__
CheckTypeSize(DIR,0, 10175, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10175,0);
Msg("Find size of DIR (10175)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct dirent,268, 10178, 2)
CheckOffset(struct dirent,d_ino,0,2,34177)
CheckOffset(struct dirent,d_off,4,2,34178)
CheckOffset(struct dirent,d_reclen,8,2,34179)
#elif __ia64__
CheckTypeSize(struct dirent,280, 10178, 3)
#elif __powerpc__
CheckTypeSize(struct dirent,268, 10178, 6)
#elif __s390__
CheckTypeSize(struct dirent,268, 10178, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10178,0);
Msg("Find size of dirent (10178)\n");
#endif

#ifdef __ia64__
CheckTypeSize(struct dirent64,280, 10179, 3)
#elif __i386__
CheckTypeSize(struct dirent64,276, 10179, 2)
#elif __powerpc__
CheckTypeSize(struct dirent64,280, 10179, 6)
#elif __s390__
CheckTypeSize(struct dirent64,280, 10179, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10179,0);
Msg("Find size of dirent64 (10179)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in dirent.h\n",cnt);
return cnt;
#endif

}
