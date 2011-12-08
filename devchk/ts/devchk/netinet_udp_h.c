/*
 * Test of netinet/udp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "netinet/udp.h"



#ifdef TET_TEST
void netinet_udp_h()
{
#else
int netinet_udp_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in netinet/udp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SOL_UDP
	CompareConstant(SOL_UDP,17,3332,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOL_UDP\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct udphdr,0, 37079, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for udphdr on All\n");
CheckOffset(struct udphdr,source,0,1,217201)
CheckOffset(struct udphdr,dest,0,1,217202)
CheckOffset(struct udphdr,len,0,1,217203)
CheckOffset(struct udphdr,check,0,1,217204)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in netinet/udp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
