/*
 * Test of nss3/cmsreclist.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#ifndef LSBCC_MODE
#include "nss3/certt.h"
#include "nss3/keythi.h"
#endif
#include "nss3/cmsreclist.h"



#ifdef TET_TEST
void nss3_cmsreclist_h()
{
#else
int nss3_cmsreclist_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/cmsreclist.h\n");
#endif

printf("Checking data structures in nss3/cmsreclist.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _CMSRECLIST_H
Msg( "Error: Constant not found: _CMSRECLIST_H\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct NSSCMSRecipientStr,0, 34846, 1, , NULL, 0, NULL)
Msg("Missing member data for NSSCMSRecipientStr on All\n");
CheckOffset(struct NSSCMSRecipientStr,riIndex,0,1,86877)
CheckOffset(struct NSSCMSRecipientStr,subIndex,0,1,86878)
CheckOffset(struct NSSCMSRecipientStr,kind,0,1,86879)
CheckOffset(struct NSSCMSRecipientStr,id,0,1,86880)
CheckOffset(struct NSSCMSRecipientStr,cert,0,1,86881)
CheckOffset(struct NSSCMSRecipientStr,privkey,0,1,86882)
CheckOffset(struct NSSCMSRecipientStr,slot,0,1,86883)
#endif

#if 1
CheckTypeSize(NSSCMSRecipient,0, 34871, 1, 4.0, NULL, 34846, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/cmsreclist.h\n\n",pcnt,cnt);
return cnt;
#endif

}
