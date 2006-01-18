/*
 * Test of glib-2.0/gobject/gvaluecollector.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if __i386__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,'i');
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,'l');
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,'q');
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,'d');
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,'p');
#elif __x86_64__
CheckEnum("G_VALUE_COLLECT_INT",G_VALUE_COLLECT_INT,'i');
CheckEnum("G_VALUE_COLLECT_LONG",G_VALUE_COLLECT_LONG,'l');
CheckEnum("G_VALUE_COLLECT_INT64",G_VALUE_COLLECT_INT64,'q');
CheckEnum("G_VALUE_COLLECT_DOUBLE",G_VALUE_COLLECT_DOUBLE,'d');
CheckEnum("G_VALUE_COLLECT_POINTER",G_VALUE_COLLECT_POINTER,'p');
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12064,0);
Msg("Find size of anonymous-gvaluecollector.h.types-0 (12064)\n");
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
