/*
 * Test of netinet/igmp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "netinet/igmp.h"



#ifdef TET_TEST
void netinet_igmp_h()
{
#else
int netinet_igmp_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in netinet/igmp.h\n");
#endif

printf("Checking data structures in netinet/igmp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IGMP_MINLEN
	CompareConstant(IGMP_MINLEN,8,19861,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_MINLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_MEMBERSHIP_QUERY
	CompareConstant(IGMP_MEMBERSHIP_QUERY,0x11,19862,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_MEMBERSHIP_QUERY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_V1_MEMBERSHIP_REPORT
	CompareConstant(IGMP_V1_MEMBERSHIP_REPORT,0x12,19863,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_V1_MEMBERSHIP_REPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_V2_MEMBERSHIP_REPORT
	CompareConstant(IGMP_V2_MEMBERSHIP_REPORT,0x16,19864,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_V2_MEMBERSHIP_REPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_V2_LEAVE_GROUP
	CompareConstant(IGMP_V2_LEAVE_GROUP,0x17,19865,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_V2_LEAVE_GROUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_DVMRP
	CompareConstant(IGMP_DVMRP,0x13,19866,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_DVMRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_PIM
	CompareConstant(IGMP_PIM,0x14,19867,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_PIM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_TRACE
	CompareConstant(IGMP_TRACE,0x15,19868,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_TRACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_MTRACE_RESP
	CompareConstant(IGMP_MTRACE_RESP,0x1e,19869,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_MTRACE_RESP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_MTRACE
	CompareConstant(IGMP_MTRACE,0x1f,19870,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_MTRACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_MAX_HOST_REPORT_DELAY
	CompareConstant(IGMP_MAX_HOST_REPORT_DELAY,10,19871,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_MAX_HOST_REPORT_DELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_TIMER_SCALE
	CompareConstant(IGMP_TIMER_SCALE,10,19872,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_TIMER_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_DELAYING_MEMBER
	CompareConstant(IGMP_DELAYING_MEMBER,1,19873,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_DELAYING_MEMBER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_IDLE_MEMBER
	CompareConstant(IGMP_IDLE_MEMBER,2,19874,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_IDLE_MEMBER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_LAZY_MEMBER
	CompareConstant(IGMP_LAZY_MEMBER,3,19875,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_LAZY_MEMBER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_SLEEPING_MEMBER
	CompareConstant(IGMP_SLEEPING_MEMBER,4,19876,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_SLEEPING_MEMBER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_AWAKENING_MEMBER
	CompareConstant(IGMP_AWAKENING_MEMBER,5,19877,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_AWAKENING_MEMBER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_v1_ROUTER
	CompareConstant(IGMP_v1_ROUTER,1,19878,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_v1_ROUTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_v2_ROUTER
	CompareConstant(IGMP_v2_ROUTER,2,19879,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_v2_ROUTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_HOST_MEMBERSHIP_QUERY
	CompareConstant(IGMP_HOST_MEMBERSHIP_QUERY,IGMP_MEMBERSHIP_QUERY,19880,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_HOST_MEMBERSHIP_QUERY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_HOST_MEMBERSHIP_REPORT
	CompareConstant(IGMP_HOST_MEMBERSHIP_REPORT,IGMP_V1_MEMBERSHIP_REPORT,19881,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_HOST_MEMBERSHIP_REPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_HOST_NEW_MEMBERSHIP_REPORT
	CompareConstant(IGMP_HOST_NEW_MEMBERSHIP_REPORT,IGMP_V2_MEMBERSHIP_REPORT,19882,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_HOST_NEW_MEMBERSHIP_REPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IGMP_HOST_LEAVE_MESSAGE
	CompareConstant(IGMP_HOST_LEAVE_MESSAGE,IGMP_V2_LEAVE_GROUP,19883,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IGMP_HOST_LEAVE_MESSAGE\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct igmp,0, 39811, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for igmp on All\n");
CheckOffset(struct igmp,igmp_type,0,1,219090)
CheckOffset(struct igmp,igmp_code,0,1,219091)
CheckOffset(struct igmp,igmp_cksum,0,1,219092)
CheckOffset(struct igmp,igmp_group,0,1,219093)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/igmp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
