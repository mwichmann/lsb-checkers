/*
 * Test of sys/ioctl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/ioctl.h"



#ifdef TET_TEST
void sys_ioctl_h()
{
#else
int sys_ioctl_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/ioctl.h\n");
#endif

printf("Checking data structures in sys/ioctl.h\n");
#if __powerpc64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x40087468,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x40087468,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __ia64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __i386__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __s390x__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __x86_64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#else
Msg( "No definition for TIOCGWINSZ (4611, int) in db\n");
#ifdef TIOCGWINSZ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4611,%d);\n", architecture, TIOCGWINSZ);
#endif
#endif
#if __powerpc64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,1074030207,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,1074030207,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __ia64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __i386__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __s390x__
#ifdef FIONREAD
	CompareConstant(FIONREAD,21531,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#else
Msg( "No definition for FIONREAD (4619, int) in db\n");
#ifdef FIONREAD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4619,%d);\n", architecture, FIONREAD);
#endif
#endif
#if __powerpc64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __ia64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __i386__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __s390x__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __x86_64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#else
Msg( "No definition for TIOCNOTTY (4627, int) in db\n");
#ifdef TIOCNOTTY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4627,%d);\n", architecture, TIOCNOTTY);
#endif
#endif
#if __i386__
CheckTypeSize(struct winsize,8, 10301, 2);
CheckMemberSize(struct winsize,ws_col,2,2,34488);
CheckOffset(struct winsize,ws_col,2,2,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,2,34489);
CheckOffset(struct winsize,ws_xpixel,4,2,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,2,34490);
CheckOffset(struct winsize,ws_ypixel,6,2,34490);
#elif __ia64__
CheckTypeSize(struct winsize,8, 10301, 3);
CheckMemberSize(struct winsize,ws_col,2,3,34488);
CheckOffset(struct winsize,ws_col,2,3,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,3,34489);
CheckOffset(struct winsize,ws_xpixel,4,3,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,3,34490);
CheckOffset(struct winsize,ws_ypixel,6,3,34490);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct winsize,8, 10301, 6);
CheckMemberSize(struct winsize,ws_col,2,6,34488);
CheckOffset(struct winsize,ws_col,2,6,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,6,34489);
CheckOffset(struct winsize,ws_xpixel,4,6,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,6,34490);
CheckOffset(struct winsize,ws_ypixel,6,6,34490);
#elif __s390__ && !__s390x__
CheckTypeSize(struct winsize,8, 10301, 10);
CheckMemberSize(struct winsize,ws_col,2,10,34488);
CheckOffset(struct winsize,ws_col,2,10,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,10,34489);
CheckOffset(struct winsize,ws_xpixel,4,10,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,10,34490);
CheckOffset(struct winsize,ws_ypixel,6,10,34490);
#elif __powerpc64__
CheckTypeSize(struct winsize,8, 10301, 9);
CheckMemberSize(struct winsize,ws_col,2,9,34488);
CheckOffset(struct winsize,ws_col,2,9,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,9,34489);
CheckOffset(struct winsize,ws_xpixel,4,9,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,9,34490);
CheckOffset(struct winsize,ws_ypixel,6,9,34490);
#elif __s390x__
CheckTypeSize(struct winsize,8, 10301, 12);
CheckMemberSize(struct winsize,ws_col,2,12,34488);
CheckOffset(struct winsize,ws_col,2,12,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,12,34489);
CheckOffset(struct winsize,ws_xpixel,4,12,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,12,34490);
CheckOffset(struct winsize,ws_ypixel,6,12,34490);
#elif __x86_64__
CheckTypeSize(struct winsize,8, 10301, 11);
CheckMemberSize(struct winsize,ws_col,2,11,34488);
CheckOffset(struct winsize,ws_col,2,11,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,11,34489);
CheckOffset(struct winsize,ws_xpixel,4,11,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,11,34490);
CheckOffset(struct winsize,ws_ypixel,6,11,34490);
#elif 1
CheckTypeSize(struct winsize,0, 10301, 1);
CheckMemberSize(struct winsize,ws_row,2,1,34487);
CheckOffset(struct winsize,ws_row,0,1,34487);
CheckMemberSize(struct winsize,ws_col,2,1,34488);
CheckOffset(struct winsize,ws_col,2,1,34488);
CheckMemberSize(struct winsize,ws_xpixel,2,1,34489);
CheckOffset(struct winsize,ws_xpixel,4,1,34489);
CheckMemberSize(struct winsize,ws_ypixel,2,1,34490);
CheckOffset(struct winsize,ws_ypixel,6,1,34490);
#endif

extern int ioctl_db(int, unsigned long int, ...);
CheckInterfacedef(ioctl,ioctl_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/ioctl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
