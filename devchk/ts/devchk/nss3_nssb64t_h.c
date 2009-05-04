/*
 * Test of nss3/nssb64t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/nssb64t.h"



#ifdef TET_TEST
void nss3_nssb64t_h()
{
#else
int nss3_nssb64t_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/nssb64t.h\n");
#endif

printf("Checking data structures in nss3/nssb64t.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _NSSB64T_H_
Msg( "Error: Constant not found: _NSSB64T_H_\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/nssb64t.h\n\n",pcnt,cnt);
return cnt;
#endif

}
