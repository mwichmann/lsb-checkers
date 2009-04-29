/*
 * Test of nss3/secport.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/secport.h"



#ifdef TET_TEST
void nss3_secport_h()
{
#else
int nss3_secport_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/secport.h\n");
#endif

printf("Checking data structures in nss3/secport.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _SECPORT_H_
Msg( "Error: Constant not found: _SECPORT_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PORTCharConversionWSwapFunc,0, 35018, 1, 4.0, NULL, 32624, NULL)
#endif

#if 1
CheckTypeSize(PORTCharConversionFunc,0, 35020, 1, 4.0, NULL, 34141, NULL)
#endif

#if 1
/* All */
typedef PRBool (*PORTCharConversionWSwapFunc_db)(PRBool, unsigned char *, unsigned int, unsigned char *, unsigned int, unsigned int *, PRBool);
CheckFunctionTypedef(PORTCharConversionWSwapFunc,PORTCharConversionWSwapFunc_db);
#endif

#if 1
/* All */
typedef PRBool (*PORTCharConversionFunc_db)(PRBool, unsigned char *, unsigned int, unsigned char *, unsigned int, unsigned int *);
CheckFunctionTypedef(PORTCharConversionFunc,PORTCharConversionFunc_db);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secport.h\n\n",pcnt,cnt);
return cnt;
#endif

}
