/*
 * Test of pty.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "pty.h"



#ifdef TET_TEST
void pty_h()
{
#else
int pty_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in pty.h\n");
#endif

#if __i386__
CheckTypeSize(struct winsize,8, 10301, 2)
CheckMemberSize(struct winsize,ws_col,2,2,34488)
CheckOffset(struct winsize,ws_col,2,2,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,2,34489)
CheckOffset(struct winsize,ws_xpixel,4,2,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,2,34490)
CheckOffset(struct winsize,ws_ypixel,6,2,34490)
#elif __ia64__
CheckTypeSize(struct winsize,8, 10301, 3)
CheckMemberSize(struct winsize,ws_col,2,3,34488)
CheckOffset(struct winsize,ws_col,2,3,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,3,34489)
CheckOffset(struct winsize,ws_xpixel,4,3,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,3,34490)
CheckOffset(struct winsize,ws_ypixel,6,3,34490)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct winsize,8, 10301, 6)
CheckMemberSize(struct winsize,ws_col,2,6,34488)
CheckOffset(struct winsize,ws_col,2,6,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,6,34489)
CheckOffset(struct winsize,ws_xpixel,4,6,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,6,34490)
CheckOffset(struct winsize,ws_ypixel,6,6,34490)
#elif __s390__ && !__s390x__
CheckTypeSize(struct winsize,8, 10301, 10)
CheckMemberSize(struct winsize,ws_col,2,10,34488)
CheckOffset(struct winsize,ws_col,2,10,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,10,34489)
CheckOffset(struct winsize,ws_xpixel,4,10,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,10,34490)
CheckOffset(struct winsize,ws_ypixel,6,10,34490)
#elif __powerpc64__
CheckTypeSize(struct winsize,8, 10301, 9)
CheckMemberSize(struct winsize,ws_col,2,9,34488)
CheckOffset(struct winsize,ws_col,2,9,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,9,34489)
CheckOffset(struct winsize,ws_xpixel,4,9,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,9,34490)
CheckOffset(struct winsize,ws_ypixel,6,9,34490)
#elif __s390x__
CheckTypeSize(struct winsize,8, 10301, 12)
CheckMemberSize(struct winsize,ws_col,2,12,34488)
CheckOffset(struct winsize,ws_col,2,12,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,12,34489)
CheckOffset(struct winsize,ws_xpixel,4,12,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,12,34490)
CheckOffset(struct winsize,ws_ypixel,6,12,34490)
#elif __x86_64__
CheckTypeSize(struct winsize,8, 10301, 11)
CheckMemberSize(struct winsize,ws_col,2,11,34488)
CheckOffset(struct winsize,ws_col,2,11,34488)
CheckMemberSize(struct winsize,ws_xpixel,2,11,34489)
CheckOffset(struct winsize,ws_xpixel,4,11,34489)
CheckMemberSize(struct winsize,ws_ypixel,2,11,34490)
CheckOffset(struct winsize,ws_ypixel,6,11,34490)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10301,0);
Msg("Find size of winsize (10301)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in pty.h\n",cnt);
return cnt;
#endif

}
