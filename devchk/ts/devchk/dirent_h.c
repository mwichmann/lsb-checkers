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

#if __ia64__
CheckTypeSize(DIR,0, 10175, 3)
#elif __i386__
CheckTypeSize(DIR,0, 10175, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(DIR,0, 10175, 6)
#elif __s390__
CheckTypeSize(DIR,0, 10175, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10175,0);
Msg("Find size of DIR (10175)\n");
#endif

#if __i386__
CheckTypeSize(struct dirent,268, 10178, 2)
CheckOffset(struct dirent,d_ino,0,2,34177)
CheckOffset(struct dirent,d_off,4,2,34178)
CheckOffset(struct dirent,d_reclen,8,2,34179)
#elif __ia64__
CheckTypeSize(struct dirent,280, 10178, 3)
CheckOffset(struct dirent,d_off,8,3,34178)
CheckOffset(struct dirent,d_reclen,16,3,34179)
CheckOffset(struct dirent,d_type,18,3,34410)
CheckOffset(struct dirent,d_name,19,3,34180)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct dirent,268, 10178, 6)
Msg("Missing member data for dirent on PPC32\n");
CheckOffset(struct dirent,d_ino,0,6,34177)
CheckOffset(struct dirent,d_off,0,6,34178)
CheckOffset(struct dirent,d_reclen,0,6,34179)
CheckOffset(struct dirent,d_type,0,6,34410)
CheckOffset(struct dirent,d_name,0,6,34180)
#elif __s390__
CheckTypeSize(struct dirent,268, 10178, 10)
CheckOffset(struct dirent,d_off,4,10,34178)
CheckOffset(struct dirent,d_reclen,8,10,34179)
CheckOffset(struct dirent,d_type,10,10,34410)
CheckOffset(struct dirent,d_name,11,10,34180)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10178,0);
Msg("Find size of dirent (10178)\n");
#endif

#if __ia64__
CheckTypeSize(struct dirent64,280, 10179, 3)
CheckOffset(struct dirent64,d_ino,0,3,34181)
CheckOffset(struct dirent64,d_off,8,3,34182)
CheckOffset(struct dirent64,d_reclen,16,3,34183)
CheckOffset(struct dirent64,d_type,18,3,34184)
CheckOffset(struct dirent64,d_name,19,3,34185)
#elif __i386__
CheckTypeSize(struct dirent64,276, 10179, 2)
CheckOffset(struct dirent64,d_ino,0,2,34181)
CheckOffset(struct dirent64,d_off,8,2,34182)
CheckOffset(struct dirent64,d_reclen,16,2,34183)
CheckOffset(struct dirent64,d_type,18,2,34184)
CheckOffset(struct dirent64,d_name,19,2,34185)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct dirent64,280, 10179, 6)
CheckOffset(struct dirent64,d_ino,0,6,34181)
CheckOffset(struct dirent64,d_off,8,6,34182)
CheckOffset(struct dirent64,d_reclen,16,6,34183)
CheckOffset(struct dirent64,d_type,18,6,34184)
CheckOffset(struct dirent64,d_name,19,6,34185)
#elif __s390__
CheckTypeSize(struct dirent64,280, 10179, 10)
CheckOffset(struct dirent64,d_ino,0,10,34181)
CheckOffset(struct dirent64,d_off,8,10,34182)
CheckOffset(struct dirent64,d_reclen,16,10,34183)
CheckOffset(struct dirent64,d_type,18,10,34184)
CheckOffset(struct dirent64,d_name,19,10,34185)
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
