/*
 * Test of netinet/in_systm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "netinet/in_systm.h"



#ifdef TET_TEST
void netinet_in_systm_h()
{
#else
int netinet_in_systm_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in netinet/in_systm.h\n");
#endif

printf("Checking data structures in netinet/in_systm.h\n");
#if 1
CheckTypeSize(n_short,0, 39812, 1, 4.0, NULL, 7000, NULL)
#endif

#if 1
CheckTypeSize(n_long,0, 39813, 1, 4.0, NULL, 7001, NULL)
#endif

#if 1
CheckTypeSize(n_time,0, 39814, 1, 4.0, NULL, 7001, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/in_systm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
