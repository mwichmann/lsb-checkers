/*
 * Test of nspr4/prerror.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prerror.h"



#ifdef TET_TEST
void nspr4_prerror_h()
{
#else
int nspr4_prerror_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/prerror.h\n");
#endif

printf("Checking data structures in nspr4/prerror.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef prerror_h___
Msg( "Error: Constant not found: prerror_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PRErrorCode,0, 34694, 1, 4.0, NULL, 32528, NULL)
#endif

extern PRErrorCode PR_GetError_db(void);
CheckInterfacedef(PR_GetError,PR_GetError_db);
extern void PR_SetError_db(PRErrorCode, PRInt32);
CheckInterfacedef(PR_SetError,PR_SetError_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prerror.h\n\n",pcnt,cnt);
return cnt;
#endif

}
