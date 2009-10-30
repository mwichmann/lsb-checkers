/*
 * Test of jerror.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "jerror.h"



#ifdef TET_TEST
void jerror_h()
{
#else
int jerror_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in jerror.h\n");
#endif

printf("Checking data structures in jerror.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for JMESSAGE(code,string) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for JERROR_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ERREXIT(cinfo,code) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ERREXIT1(cinfo,code,p1) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ERREXIT2(cinfo,code,p1,p2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ERREXIT3(cinfo,code,p1,p2,p3) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ERREXIT4(cinfo,code,p1,p2,p3,p4) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ERREXITS(cinfo,code,str) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MAKESTMT(stuff) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WARNMS(cinfo,code) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WARNMS1(cinfo,code,p1) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WARNMS2(cinfo,code,p1,p2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS(cinfo,lvl,code) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS1(cinfo,lvl,code,p1) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS2(cinfo,lvl,code,p1,p2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS3(cinfo,lvl,code,p1,p2,p3) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS4(cinfo,lvl,code,p1,p2,p3,p4) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS5(cinfo,lvl,code,p1,p2,p3,p4,p5) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMS8(cinfo,lvl,code,p1,p2,p3,p4,p5,p6,p7,p8) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TRACEMSS(cinfo,lvl,code,str) */
#endif

#if 1
CheckTypeSize(J_MESSAGE_CODE,0, 39830, 1, 4.0, NULL, 39829, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in jerror.h\n\n",pcnt,cnt);
return cnt;
#endif

}
