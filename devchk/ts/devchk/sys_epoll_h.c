/*
 * Test of sys/epoll.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if _LSB_DEFAULT_ARCH
#ifdef EPOLLRDHUP
	CompareConstant(EPOLLRDHUP,32,16858,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EPOLLRDHUP\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(union epoll_data,0, 32376, 1, , NULL, 0, NULL)
Msg("Missing member data for epoll_data on All\n");
CheckOffset(union epoll_data,ptr,0,1,78892)
CheckOffset(union epoll_data,fd,0,1,78893)
CheckOffset(union epoll_data,u32,0,1,78894)
CheckOffset(union epoll_data,u64,0,1,78895)
#endif

#if 1
CheckTypeSize(epoll_data_t,0, 32377, 1, 4.0, NULL, 32376, NULL)
#endif

#if 1
CheckTypeSize(struct epoll_event,0, 32378, 1, 4.0, NULL, 0, NULL)
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
