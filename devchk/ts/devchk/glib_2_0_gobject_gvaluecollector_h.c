/*
 * Test of glib-2.0/gobject/gvaluecollector.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "glib-2.0/gobject/gvaluecollector.h"



#ifdef TET_TEST
void glib_2_0_gobject_gvaluecollector_h()
{
#else
int glib_2_0_gobject_gvaluecollector_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/gobject/gvaluecollector.h\n");
#endif

printf("Checking data structures in glib-2.0/gobject/gvaluecollector.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_COLLECT(value,var_args,flags,__error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_LCOPY(value,var_args,flags,__error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_COLLECT_FORMAT_MAX_LENGTH */
#endif

#if defined __s390x__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#elif defined __x86_64__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#elif defined __s390__ && !defined __s390x__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#elif defined __powerpc64__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#elif defined __ia64__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#elif defined __i386__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,0,42311)
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,(0) + 1,42312)
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,((0) + 1) + 1,42313)
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,(((0) + 1) + 1) + 1,42314)
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,((((0) + 1) + 1) + 1) + 1,42315)
#else
Msg("Find size of anonymous-gvaluecollector.h.types-0 (12064)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,0, NULL);\n",architecture,12064,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/gobject/gvaluecollector.h\n\n",pcnt,cnt);
return cnt;
#endif

}
