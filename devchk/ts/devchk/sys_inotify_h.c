/*
 * Test of sys/inotify.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/inotify.h"



#ifdef TET_TEST
void sys_inotify_h()
{
#else
int sys_inotify_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/inotify.h\n");
#endif

printf("Checking data structures in sys/inotify.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IN_ACCESS
	CompareConstant(IN_ACCESS,0x00000001,15538,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_ACCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_MODIFY
	CompareConstant(IN_MODIFY,0x00000002,15539,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_MODIFY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_ATTRIB
	CompareConstant(IN_ATTRIB,0x00000004,15540,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_ATTRIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_CLOSE_WRITE
	CompareConstant(IN_CLOSE_WRITE,0x00000008,15541,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_CLOSE_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_CLOSE_NOWRITE
	CompareConstant(IN_CLOSE_NOWRITE,0x00000010,15542,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_CLOSE_NOWRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN_CLOSE */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_OPEN
	CompareConstant(IN_OPEN,0x00000020,15544,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_OPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_MOVED_FROM
	CompareConstant(IN_MOVED_FROM,0x00000040,15545,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_MOVED_FROM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_MOVED_TO
	CompareConstant(IN_MOVED_TO,0x00000080,15546,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_MOVED_TO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN_MOVE */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_CREATE
	CompareConstant(IN_CREATE,0x00000100,15548,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_CREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_DELETE
	CompareConstant(IN_DELETE,0x00000200,15549,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_DELETE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_DELETE_SELF
	CompareConstant(IN_DELETE_SELF,0x00000400,15550,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_DELETE_SELF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_MOVE_SELF
	CompareConstant(IN_MOVE_SELF,0x00000800,15551,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_MOVE_SELF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_UNMOUNT
	CompareConstant(IN_UNMOUNT,0x00002000,15552,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_UNMOUNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_Q_OVERFLOW
	CompareConstant(IN_Q_OVERFLOW,0x00004000,15553,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_Q_OVERFLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_IGNORED
	CompareConstant(IN_IGNORED,0x00008000,15554,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_IGNORED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_ISDIR
	CompareConstant(IN_ISDIR,0x40000000,15558,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_ISDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IN_ONESHOT
	CompareConstant(IN_ONESHOT,0x80000000,15559,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IN_ONESHOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN_ALL_EVENTS */
#endif

#if 1
CheckTypeSize(struct inotify_event,0, 1000067, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for inotify_event on All\n");
CheckOffset(struct inotify_event,wd,0,1,78759)
CheckOffset(struct inotify_event,mask,0,1,78760)
CheckOffset(struct inotify_event,cookie,0,1,78761)
CheckOffset(struct inotify_event,len,0,1,78762)
/*XXX CheckOffset(struct inotify_event,name,0,1,78763) */
#endif

extern int inotify_add_watch_db(int, const char *, uint32_t);
CheckInterfacedef(inotify_add_watch,inotify_add_watch_db);
extern int inotify_init_db(void);
CheckInterfacedef(inotify_init,inotify_init_db);
extern int inotify_rm_watch_db(int, uint32_t);
CheckInterfacedef(inotify_rm_watch,inotify_rm_watch_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/inotify.h\n\n",pcnt,cnt);
return cnt;
#endif

}
