/*
 * Test of sys/epoll.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/epoll.h"



#ifdef TET_TEST
void sys_epoll_h()
{
#else
int sys_epoll_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/epoll.h\n");
#endif

printf("Checking data structures in sys/epoll.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef EPOLLIN
	CompareConstant(EPOLLIN,1,15599,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLPRI
	CompareConstant(EPOLLPRI,2,15600,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLPRI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLOUT
	CompareConstant(EPOLLOUT,4,15601,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLRDNORM
	CompareConstant(EPOLLRDNORM,64,15602,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLRDNORM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLRDBAND
	CompareConstant(EPOLLRDBAND,128,15603,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLRDBAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLWRNORM
	CompareConstant(EPOLLWRNORM,256,15604,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLWRNORM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLWRBAND
	CompareConstant(EPOLLWRBAND,512,15605,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLWRBAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLMSG
	CompareConstant(EPOLLMSG,1024,15606,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLMSG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLERR
	CompareConstant(EPOLLERR,8,15607,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLHUP
	CompareConstant(EPOLLHUP,16,15608,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLHUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for EPOLLONESHOT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for EPOLLET */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLL_CTL_ADD
	CompareConstant(EPOLL_CTL_ADD,1,15611,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLL_CTL_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLL_CTL_DEL
	CompareConstant(EPOLL_CTL_DEL,2,15612,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLL_CTL_DEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EPOLL_CTL_MOD
	CompareConstant(EPOLL_CTL_MOD,3,15613,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLL_CTL_MOD\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(union epoll_data,0, 1000116, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for epoll_data on All\n");
CheckOffset(union epoll_data,ptr,0,1,78892)
CheckOffset(union epoll_data,fd,0,1,78893)
CheckOffset(union epoll_data,u32,0,1,78894)
CheckOffset(union epoll_data,u64,0,1,78895)
#endif

#if 1
CheckTypeSize(epoll_data_t,0, 1000117, 1, 4.0, NULL, 1000116, NULL)
#endif

#if 1
CheckTypeSize(struct epoll_event,0, 1000118, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for epoll_event on All\n");
CheckOffset(struct epoll_event,events,0,1,78896)
CheckOffset(struct epoll_event,data,0,1,78897)
#endif

extern int epoll_wait_db(int, struct epoll_event *, int, int);
CheckInterfacedef(epoll_wait,epoll_wait_db);
extern int epoll_ctl_db(int, int, int, struct epoll_event *);
CheckInterfacedef(epoll_ctl,epoll_ctl_db);
extern int epoll_create_db(int);
CheckInterfacedef(epoll_create,epoll_create_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/epoll.h\n\n",pcnt,cnt);
return cnt;
#endif

}
