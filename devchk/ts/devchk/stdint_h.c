/*
 * Test of stdint.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "stdint.h"



#ifdef TET_TEST
void stdint_h()
{
#else
int stdint_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in stdint.h\n");
#endif

printf("Checking data structures in stdint.h\n");
#if defined __powerpc64__
/* No test for __INT64_C(c) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for __INT64_C(c) */
#elif defined __ia64__
/* No test for __INT64_C(c) */
#elif defined __i386__
/* No test for __INT64_C(c) */
#elif defined __s390x__
/* No test for __INT64_C(c) */
#elif defined __x86_64__
/* No test for __INT64_C(c) */
#elif defined __s390__ && !defined __s390x__
/* No test for __INT64_C(c) */
#else
Msg( "No definition for __INT64_C(c) (10674, macro) in db for this architecture\n");
#ifdef __INT64_C(c)
#endif
#endif
#if defined __powerpc64__
/* No test for __UINT64_C(c) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for __UINT64_C(c) */
#elif defined __ia64__
/* No test for __UINT64_C(c) */
#elif defined __i386__
/* No test for __UINT64_C(c) */
#elif defined __s390x__
/* No test for __UINT64_C(c) */
#elif defined __x86_64__
/* No test for __UINT64_C(c) */
#elif defined __s390__ && !defined __s390x__
/* No test for __UINT64_C(c) */
#else
Msg( "No definition for __UINT64_C(c) (10675, macro) in db for this architecture\n");
#ifdef __UINT64_C(c)
#endif
#endif
#if defined __powerpc64__
/* No test for INT64_C(c) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for INT64_C(c) */
#elif defined __ia64__
/* No test for INT64_C(c) */
#elif defined __i386__
/* No test for INT64_C(c) */
#elif defined __s390x__
/* No test for INT64_C(c) */
#elif defined __x86_64__
/* No test for INT64_C(c) */
#elif defined __s390__ && !defined __s390x__
/* No test for INT64_C(c) */
#else
Msg( "No definition for INT64_C(c) (10676, macro) in db for this architecture\n");
#ifdef INT64_C(c)
#endif
#endif
#if defined __powerpc64__
/* No test for UINT64_C(c) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for UINT64_C(c) */
#elif defined __ia64__
/* No test for UINT64_C(c) */
#elif defined __i386__
/* No test for UINT64_C(c) */
#elif defined __s390x__
/* No test for UINT64_C(c) */
#elif defined __x86_64__
/* No test for UINT64_C(c) */
#elif defined __s390__ && !defined __s390x__
/* No test for UINT64_C(c) */
#else
Msg( "No definition for UINT64_C(c) (10677, macro) in db for this architecture\n");
#ifdef UINT64_C(c)
#endif
#endif
#if defined __powerpc64__
/* No test for INTMAX_C(c) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for INTMAX_C(c) */
#elif defined __ia64__
/* No test for INTMAX_C(c) */
#elif defined __i386__
/* No test for INTMAX_C(c) */
#elif defined __s390x__
/* No test for INTMAX_C(c) */
#elif defined __x86_64__
/* No test for INTMAX_C(c) */
#elif defined __s390__ && !defined __s390x__
/* No test for INTMAX_C(c) */
#else
Msg( "No definition for INTMAX_C(c) (10678, macro) in db for this architecture\n");
#ifdef INTMAX_C(c)
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for INT8_C(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for INT16_C(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for INT32_C(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for UINT8_C(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for UINT16_C(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for UINT32_C(c) */
#endif

#if defined __powerpc64__
/* No test for UINTMAX_C(c) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for UINTMAX_C(c) */
#elif defined __ia64__
/* No test for UINTMAX_C(c) */
#elif defined __i386__
/* No test for UINTMAX_C(c) */
#elif defined __s390x__
/* No test for UINTMAX_C(c) */
#elif defined __x86_64__
/* No test for UINTMAX_C(c) */
#elif defined __s390__ && !defined __s390x__
/* No test for UINTMAX_C(c) */
#else
Msg( "No definition for UINTMAX_C(c) (10685, macro) in db for this architecture\n");
#ifdef UINTMAX_C(c)
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef INT8_MAX
	CompareConstant(INT8_MAX,(127),10686,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT8_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT8_MIN
	CompareConstant(INT8_MIN,(-128),10687,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT8_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT16_MAX
	CompareConstant(INT16_MAX,(32767),10688,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT16_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT16_MIN
	CompareConstant(INT16_MIN,(-32767-1),10689,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT16_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT32_MAX
	CompareConstant(INT32_MAX,(2147483647),10690,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT32_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT32_MIN
	CompareConstant(INT32_MIN,(-2147483647-1),10691,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT32_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT64_MAX
	CompareConstant(INT64_MAX,(__INT64_C(9223372036854775807)),10692,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT64_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT64_MIN
	CompareConstant(INT64_MIN,(-__INT64_C(9223372036854775807)-1),10693,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT64_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_FAST8_MAX
	CompareConstant(INT_FAST8_MAX,(127),10694,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST8_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_FAST8_MIN
	CompareConstant(INT_FAST8_MIN,(-128),10695,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST8_MIN\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(9223372036854775807L),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(2147483647),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(9223372036854775807L),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(2147483647),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(9223372036854775807L),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(9223372036854775807L),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef INT_FAST16_MAX
	CompareConstant(INT_FAST16_MAX,(2147483647),10696,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for INT_FAST16_MAX (10696, int) in db for this architecture\n");
#ifdef INT_FAST16_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10696,%d,'""3.2""',NULL);\n", architecture, INT_FAST16_MAX);
#endif
#endif
#if defined __powerpc64__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-9223372036854775807L-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-2147483647-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-9223372036854775807L-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-2147483647-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-9223372036854775807L-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-9223372036854775807L-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef INT_FAST16_MIN
	CompareConstant(INT_FAST16_MIN,(-2147483647-1),10697,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST16_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for INT_FAST16_MIN (10697, int) in db for this architecture\n");
#ifdef INT_FAST16_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10697,%d,'""3.2""',NULL);\n", architecture, INT_FAST16_MIN);
#endif
#endif
#if defined __powerpc64__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(9223372036854775807L),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(2147483647),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(9223372036854775807L),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(2147483647),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(9223372036854775807L),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(9223372036854775807L),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef INT_FAST32_MAX
	CompareConstant(INT_FAST32_MAX,(2147483647),10698,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for INT_FAST32_MAX (10698, int) in db for this architecture\n");
#ifdef INT_FAST32_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10698,%d,'""3.2""',NULL);\n", architecture, INT_FAST32_MAX);
#endif
#endif
#if defined __powerpc64__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-9223372036854775807L-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-2147483647-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-9223372036854775807L-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-2147483647-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-9223372036854775807L-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-9223372036854775807L-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef INT_FAST32_MIN
	CompareConstant(INT_FAST32_MIN,(-2147483647-1),10699,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST32_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for INT_FAST32_MIN (10699, int) in db for this architecture\n");
#ifdef INT_FAST32_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10699,%d,'""3.2""',NULL);\n", architecture, INT_FAST32_MIN);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef INT_FAST64_MAX
	CompareConstant(INT_FAST64_MAX,(__INT64_C(9223372036854775807)),10700,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST64_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_FAST64_MIN
	CompareConstant(INT_FAST64_MIN,(-__INT64_C(9223372036854775807)-1),10701,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_FAST64_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST8_MAX
	CompareConstant(INT_LEAST8_MAX,(127),10702,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST8_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST8_MIN
	CompareConstant(INT_LEAST8_MIN,(-128),10703,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST8_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST16_MAX
	CompareConstant(INT_LEAST16_MAX,(32767),10704,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST16_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST16_MIN
	CompareConstant(INT_LEAST16_MIN,(-32767-1),10705,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST16_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST32_MAX
	CompareConstant(INT_LEAST32_MAX,(2147483647),10706,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST32_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST32_MIN
	CompareConstant(INT_LEAST32_MIN,(-2147483647-1),10707,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST32_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST64_MAX
	CompareConstant(INT_LEAST64_MAX,(__INT64_C(9223372036854775807)),10708,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST64_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_LEAST64_MIN
	CompareConstant(INT_LEAST64_MIN,(-__INT64_C(9223372036854775807)-1),10709,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INT_LEAST64_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INTMAX_MAX
	CompareConstant(INTMAX_MAX,(__INT64_C(9223372036854775807)),10710,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTMAX_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INTMAX_MIN
	CompareConstant(INTMAX_MIN,(-__INT64_C(9223372036854775807)-1),10711,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTMAX_MIN\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(9223372036854775807L),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(2147483647),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(9223372036854775807L),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(2147483647),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(9223372036854775807L),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(9223372036854775807L),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef INTPTR_MAX
	CompareConstant(INTPTR_MAX,(2147483647),10712,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for INTPTR_MAX (10712, int) in db for this architecture\n");
#ifdef INTPTR_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10712,%d,'""3.2""',NULL);\n", architecture, INTPTR_MAX);
#endif
#endif
#if defined __powerpc64__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-9223372036854775807L-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-2147483647-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-9223372036854775807L-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-2147483647-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-9223372036854775807L-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-9223372036854775807L-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef INTPTR_MIN
	CompareConstant(INTPTR_MIN,(-2147483647-1),10713,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: INTPTR_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for INTPTR_MIN (10713, int) in db for this architecture\n");
#ifdef INTPTR_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10713,%d,'""3.2""',NULL);\n", architecture, INTPTR_MIN);
#endif
#endif
#if defined __powerpc64__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(9223372036854775807L),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(2147483647),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(9223372036854775807L),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(2147483647),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(9223372036854775807L),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(9223372036854775807L),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef PTRDIFF_MAX
	CompareConstant(PTRDIFF_MAX,(2147483647),10714,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for PTRDIFF_MAX (10714, int) in db for this architecture\n");
#ifdef PTRDIFF_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10714,%d,'""3.2""',NULL);\n", architecture, PTRDIFF_MAX);
#endif
#endif
#if defined __powerpc64__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-9223372036854775807L-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-2147483647-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-9223372036854775807L-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-2147483647-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-9223372036854775807L-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-9223372036854775807L-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef PTRDIFF_MIN
	CompareConstant(PTRDIFF_MIN,(-2147483647-1),10715,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PTRDIFF_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for PTRDIFF_MIN (10715, int) in db for this architecture\n");
#ifdef PTRDIFF_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10715,%d,'""3.2""',NULL);\n", architecture, PTRDIFF_MIN);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SIG_ATOMIC_MAX
	CompareConstant(SIG_ATOMIC_MAX,(2147483647),10716,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIG_ATOMIC_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_ATOMIC_MIN
	CompareConstant(SIG_ATOMIC_MIN,(-2147483647-1),10717,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIG_ATOMIC_MIN\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(18446744073709551615UL),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(4294967295U),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(18446744073709551615UL),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(4294967295U),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(18446744073709551615UL),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(18446744073709551615UL),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SIZE_MAX
	CompareConstant(SIZE_MAX,(4294967295U),10718,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SIZE_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for SIZE_MAX (10718, int) in db for this architecture\n");
#ifdef SIZE_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10718,%d,'""3.2""',NULL);\n", architecture, SIZE_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef UINT8_MAX
	CompareConstant(UINT8_MAX,(255),10719,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT8_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT16_MAX
	CompareConstant(UINT16_MAX,(65535),10720,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT16_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT32_MAX
	CompareConstant(UINT32_MAX,(4294967295U),10721,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT32_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT64_MAX
	CompareConstant(UINT64_MAX,(__UINT64_C(18446744073709551615)),10722,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT64_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_FAST8_MAX
	CompareConstant(UINT_FAST8_MAX,(255),10723,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST8_MAX\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(18446744073709551615UL),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(4294967295U),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(18446744073709551615UL),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(4294967295U),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(18446744073709551615UL),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(18446744073709551615UL),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef UINT_FAST16_MAX
	CompareConstant(UINT_FAST16_MAX,(4294967295U),10724,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST16_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for UINT_FAST16_MAX (10724, int) in db for this architecture\n");
#ifdef UINT_FAST16_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10724,%d,'""3.2""',NULL);\n", architecture, UINT_FAST16_MAX);
#endif
#endif
#if defined __powerpc64__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(18446744073709551615UL),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(4294967295U),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(18446744073709551615UL),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(4294967295U),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(18446744073709551615UL),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(18446744073709551615UL),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef UINT_FAST32_MAX
	CompareConstant(UINT_FAST32_MAX,(4294967295U),10725,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST32_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for UINT_FAST32_MAX (10725, int) in db for this architecture\n");
#ifdef UINT_FAST32_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10725,%d,'""3.2""',NULL);\n", architecture, UINT_FAST32_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef UINT_FAST64_MAX
	CompareConstant(UINT_FAST64_MAX,(__UINT64_C(18446744073709551615)),10726,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_FAST64_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_LEAST8_MAX
	CompareConstant(UINT_LEAST8_MAX,(255),10727,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_LEAST8_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_LEAST16_MAX
	CompareConstant(UINT_LEAST16_MAX,(65535),10728,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_LEAST16_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_LEAST32_MAX
	CompareConstant(UINT_LEAST32_MAX,(4294967295U),10729,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_LEAST32_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_LEAST64_MAX
	CompareConstant(UINT_LEAST64_MAX,(__UINT64_C(18446744073709551615)),10730,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINT_LEAST64_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINTMAX_MAX
	CompareConstant(UINTMAX_MAX,(__UINT64_C(18446744073709551615)),10731,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTMAX_MAX\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(18446744073709551615UL),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(4294967295U),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(18446744073709551615UL),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(4294967295U),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(18446744073709551615UL),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(18446744073709551615UL),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef UINTPTR_MAX
	CompareConstant(UINTPTR_MAX,(4294967295U),10732,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: UINTPTR_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for UINTPTR_MAX (10732, int) in db for this architecture\n");
#ifdef UINTPTR_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10732,%d,'""3.2""',NULL);\n", architecture, UINTPTR_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef WINT_MAX
	CompareConstant(WINT_MAX,(4294967295u),10733,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: WINT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WINT_MIN
	CompareConstant(WINT_MIN,(0u),10734,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: WINT_MIN\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(int8_t,1, 6995, 12, 1.3, NULL, 10505, NULL)
#elif defined __x86_64__
CheckTypeSize(int8_t,1, 6995, 11, 2.0, NULL, 10505, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int8_t,1, 6995, 10, 1.3, NULL, 10505, NULL)
#elif defined __powerpc64__
CheckTypeSize(int8_t,1, 6995, 9, 2.0, NULL, 10505, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int8_t,1, 6995, 6, 1.2, NULL, 10505, NULL)
#elif defined __ia64__
CheckTypeSize(int8_t,1, 6995, 3, 1.3, NULL, 10505, NULL)
#elif defined __i386__
CheckTypeSize(int8_t,1, 6995, 2, 1.2, NULL, 10505, NULL)
#else
Msg("Find size of int8_t (6995)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10505,NULL);\n",architecture,6995,0);
#endif

#if defined __s390x__
CheckTypeSize(int16_t,2, 6996, 12, 1.3, NULL, 4, NULL)
#elif defined __x86_64__
CheckTypeSize(int16_t,2, 6996, 11, 2.0, NULL, 4, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int16_t,2, 6996, 10, 1.3, NULL, 4, NULL)
#elif defined __powerpc64__
CheckTypeSize(int16_t,2, 6996, 9, 2.0, NULL, 4, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int16_t,2, 6996, 6, 1.2, NULL, 4, NULL)
#elif defined __ia64__
CheckTypeSize(int16_t,2, 6996, 3, 1.3, NULL, 4, NULL)
#elif defined __i386__
CheckTypeSize(int16_t,2, 6996, 2, 1.2, NULL, 4, NULL)
#else
Msg("Find size of int16_t (6996)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,4,NULL);\n",architecture,6996,0);
#endif

#if defined __s390x__
CheckTypeSize(int32_t,4, 6997, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(int32_t,4, 6997, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int32_t,4, 6997, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(int32_t,4, 6997, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int32_t,4, 6997, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(int32_t,4, 6997, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(int32_t,4, 6997, 2, 1.0, NULL, 6, NULL)
#else
Msg("Find size of int32_t (6997)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,6,NULL);\n",architecture,6997,0);
#endif

#if defined __s390x__
CheckTypeSize(int64_t,8, 6998, 12, 2.0, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(int64_t,8, 6998, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int64_t,8, 6998, 10, 2.0, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(int64_t,8, 6998, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int64_t,8, 6998, 6, 2.0, NULL, 10, NULL)
#elif defined __ia64__
CheckTypeSize(int64_t,8, 6998, 3, 2.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(int64_t,8, 6998, 2, 2.0, NULL, 10, NULL)
#endif

#if defined __s390x__
CheckTypeSize(intmax_t,8, 9016, 12, 2.0, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(intmax_t,8, 9016, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(intmax_t,8, 9016, 10, 2.0, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(intmax_t,8, 9016, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(intmax_t,8, 9016, 6, 2.0, NULL, 10, NULL)
#elif defined __ia64__
CheckTypeSize(intmax_t,8, 9016, 3, 2.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(intmax_t,8, 9016, 2, 2.0, NULL, 10, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uintmax_t,8, 9017, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uintmax_t,8, 9017, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uintmax_t,8, 9017, 10, 2.0, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 6, 2.0, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(uintmax_t,8, 9017, 3, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uintmax_t,8, 9017, 2, 2.0, NULL, 11, NULL)
#endif

#if defined __s390x__
CheckTypeSize(intptr_t,8, 9196, 12, 2.0, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(intptr_t,8, 9196, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(intptr_t,4, 9196, 10, 2.0, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(intptr_t,8, 9196, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(intptr_t,4, 9196, 6, 2.0, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(intptr_t,8, 9196, 3, 2.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(intptr_t,4, 9196, 2, 2.0, NULL, 6, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uint8_t,1, 9270, 12, 1.3, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(uint8_t,1, 9270, 11, 2.0, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint8_t,1, 9270, 10, 1.3, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint8_t,1, 9270, 9, 2.0, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint8_t,1, 9270, 6, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(uint8_t,1, 9270, 3, 1.3, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(uint8_t,1, 9270, 2, 1.2, NULL, 3, NULL)
#else
Msg("Find size of uint8_t (9270)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,9270,0);
#endif

#if defined __s390x__
CheckTypeSize(uint16_t,2, 9271, 12, 1.3, NULL, 5, NULL)
#elif defined __x86_64__
CheckTypeSize(uint16_t,2, 9271, 11, 2.0, NULL, 5, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint16_t,2, 9271, 10, 1.3, NULL, 5, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint16_t,2, 9271, 9, 2.0, NULL, 5, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint16_t,2, 9271, 6, 1.2, NULL, 5, NULL)
#elif defined __ia64__
CheckTypeSize(uint16_t,2, 9271, 3, 1.3, NULL, 5, NULL)
#elif defined __i386__
CheckTypeSize(uint16_t,2, 9271, 2, 1.2, NULL, 5, NULL)
#else
Msg("Find size of uint16_t (9271)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,5,NULL);\n",architecture,9271,0);
#endif

#if defined __s390x__
CheckTypeSize(uint32_t,4, 9272, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(uint32_t,4, 9272, 11, 2.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint32_t,4, 9272, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint32_t,4, 9272, 9, 2.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint32_t,4, 9272, 6, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(uint32_t,4, 9272, 3, 1.3, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(uint32_t,4, 9272, 2, 1.2, NULL, 7, NULL)
#else
Msg("Find size of uint32_t (9272)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7,NULL);\n",architecture,9272,0);
#endif

#if defined __s390x__
CheckTypeSize(uintptr_t,8, 9308, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uintptr_t,8, 9308, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uintptr_t,4, 9308, 10, 2.0, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(uintptr_t,8, 9308, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uintptr_t,4, 9308, 6, 2.0, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(uintptr_t,8, 9308, 3, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uintptr_t,4, 9308, 2, 2.0, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uint64_t,8, 10176, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uint64_t,8, 10176, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint64_t,8, 10176, 10, 2.0, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint64_t,8, 10176, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint64_t,8, 10176, 6, 2.0, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(uint64_t,8, 10176, 3, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uint64_t,8, 10176, 2, 2.0, NULL, 11, NULL)
#endif

#if 1
CheckTypeSize(int_least8_t,1, 16608, 1, 3.2, NULL, 10505, NULL)
#endif

#if 1
CheckTypeSize(int_least16_t,2, 16609, 1, 3.2, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(int_least32_t,4, 16610, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(uint_least8_t,1, 16611, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(uint_least16_t,2, 16612, 1, 3.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(uint_least32_t,4, 16613, 1, 3.2, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(int_fast8_t,1, 16614, 1, 3.2, NULL, 10505, NULL)
#endif

#if 1
CheckTypeSize(uint_fast8_t,1, 16615, 1, 3.2, NULL, 3, NULL)
#endif

#if defined __s390x__
CheckTypeSize(int_least64_t,8, 16616, 12, 3.2, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(int_least64_t,8, 16616, 11, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int_least64_t,8, 16616, 10, 3.2, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(int_least64_t,8, 16616, 9, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int_least64_t,8, 16616, 6, 3.2, NULL, 10, NULL)
#elif defined __ia64__
CheckTypeSize(int_least64_t,8, 16616, 3, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(int_least64_t,8, 16616, 2, 3.2, NULL, 10, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uint_least64_t,8, 16617, 12, 3.2, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uint_least64_t,8, 16617, 11, 3.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint_least64_t,8, 16617, 10, 3.2, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint_least64_t,8, 16617, 9, 3.2, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint_least64_t,8, 16617, 6, 3.2, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(uint_least64_t,8, 16617, 3, 3.2, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uint_least64_t,8, 16617, 2, 3.2, NULL, 11, NULL)
#endif

#if defined __s390x__
CheckTypeSize(int_fast16_t,8, 16618, 12, 3.2, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(int_fast16_t,8, 16618, 11, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int_fast16_t,4, 16618, 10, 3.2, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(int_fast16_t,8, 16618, 9, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int_fast16_t,4, 16618, 6, 3.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(int_fast16_t,8, 16618, 3, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(int_fast16_t,4, 16618, 2, 3.2, NULL, 6, NULL)
#endif

#if defined __s390x__
CheckTypeSize(int_fast32_t,8, 16619, 12, 3.2, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(int_fast32_t,8, 16619, 11, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int_fast32_t,4, 16619, 10, 3.2, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(int_fast32_t,8, 16619, 9, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int_fast32_t,4, 16619, 6, 3.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(int_fast32_t,8, 16619, 3, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(int_fast32_t,4, 16619, 2, 3.2, NULL, 6, NULL)
#endif

#if defined __s390x__
CheckTypeSize(int_fast64_t,8, 16620, 12, 3.2, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(int_fast64_t,8, 16620, 11, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int_fast64_t,8, 16620, 10, 3.2, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(int_fast64_t,8, 16620, 9, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int_fast64_t,8, 16620, 6, 3.2, NULL, 10, NULL)
#elif defined __ia64__
CheckTypeSize(int_fast64_t,8, 16620, 3, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(int_fast64_t,8, 16620, 2, 3.2, NULL, 10, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uint_fast16_t,8, 16621, 12, 3.2, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uint_fast16_t,8, 16621, 11, 3.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint_fast16_t,4, 16621, 10, 3.2, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint_fast16_t,8, 16621, 9, 3.2, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint_fast16_t,4, 16621, 6, 3.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(uint_fast16_t,8, 16621, 3, 3.2, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uint_fast16_t,4, 16621, 2, 3.2, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uint_fast32_t,8, 16622, 12, 3.2, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uint_fast32_t,8, 16622, 11, 3.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint_fast32_t,4, 16622, 10, 3.2, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint_fast32_t,8, 16622, 9, 3.2, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint_fast32_t,4, 16622, 6, 3.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(uint_fast32_t,8, 16622, 3, 3.2, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uint_fast32_t,4, 16622, 2, 3.2, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(uint_fast64_t,8, 16623, 12, 3.2, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(uint_fast64_t,8, 16623, 11, 3.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(uint_fast64_t,8, 16623, 10, 3.2, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(uint_fast64_t,8, 16623, 9, 3.2, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(uint_fast64_t,8, 16623, 6, 3.2, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(uint_fast64_t,8, 16623, 3, 3.2, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(uint_fast64_t,8, 16623, 2, 3.2, NULL, 11, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in stdint.h\n\n",pcnt,cnt);
return cnt;
#endif

}
