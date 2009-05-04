/*
 * Test of endian.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "endian.h"



#ifdef TET_TEST
void endian_h()
{
#else
int endian_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in endian.h\n");
#endif

printf("Checking data structures in endian.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef __LITTLE_ENDIAN
	CompareConstant(__LITTLE_ENDIAN,1234,4383,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __LITTLE_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __BIG_ENDIAN
	CompareConstant(__BIG_ENDIAN,4321,4384,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __BIG_ENDIAN\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__BIG_ENDIAN,4386,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__BIG_ENDIAN,4386,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__LITTLE_ENDIAN,4386,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__LITTLE_ENDIAN,4386,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__BIG_ENDIAN,4386,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__LITTLE_ENDIAN,4386,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __BYTE_ORDER
	CompareConstant(__BYTE_ORDER,__BIG_ENDIAN,4386,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __BYTE_ORDER\n");
cnt++;
#endif

#else
Msg( "No definition for __BYTE_ORDER (4386, int) in db for this architecture\n");
#ifdef __BYTE_ORDER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4386,%d,'""1.3""',NULL);\n", architecture, __BYTE_ORDER);
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for LITTLE_ENDIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BIG_ENDIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BYTE_ORDER */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in endian.h\n\n",pcnt,cnt);
return cnt;
#endif

}
