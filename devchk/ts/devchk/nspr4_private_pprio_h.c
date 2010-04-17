/*
 * Test of nspr4/private/pprio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "nspr4/prinit.h"
#if !defined LSBCC_MODE && (PR_VMAJOR < 4 || (PR_VMAJOR == 4 && PR_VMINOR < 7))
#include "nspr4/prio.h"
typedef PRInt32 PROsfd;
#endif
#include "nspr4/private/pprio.h"



#ifdef TET_TEST
void nspr4_private_pprio_h()
{
#else
int nspr4_private_pprio_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/private/pprio.h\n");
#endif

printf("Checking data structures in nspr4/private/pprio.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef pprio_h___
Msg( "Error: Constant not found: pprio_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PROsfd,0, 37066, 1, 4.0, NULL, 32528, NULL)
#endif

extern PRFileDesc * PR_ImportTCPSocket_db(PROsfd);
CheckInterfacedef(PR_ImportTCPSocket,PR_ImportTCPSocket_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/private/pprio.h\n\n",pcnt,cnt);
return cnt;
#endif

}
