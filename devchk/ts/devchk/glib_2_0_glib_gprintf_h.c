/*
 * Test of glib-2.0/glib/gprintf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "glib-2.0/glib.h"
#if (GLIB_MAJOR_VERSION > 2 || (GLIB_MAJOR_VERSION == 2 && GLIB_MINOR_VERSION >= 14) )
#include "glib-2.0/glib/gutils.h"
#endif
#include "glib-2.0/glib/gprintf.h"



#ifdef TET_TEST
void glib_2_0_glib_gprintf_h()
{
#else
int glib_2_0_glib_gprintf_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/glib/gprintf.h\n");
#endif

printf("Checking data structures in glib-2.0/glib/gprintf.h\n");
extern gint g_sprintf_db(gchar *, const gchar *, ...);
CheckInterfacedef(g_sprintf,g_sprintf_db);
extern gint g_fprintf_db(FILE *, const gchar *, ...);
CheckInterfacedef(g_fprintf,g_fprintf_db);
extern gint g_vasprintf_db(gchar * *, const gchar *, va_list);
CheckInterfacedef(g_vasprintf,g_vasprintf_db);
extern gint g_vprintf_db(const gchar *, va_list);
CheckInterfacedef(g_vprintf,g_vprintf_db);
extern gint g_printf_db(const gchar *, ...);
CheckInterfacedef(g_printf,g_printf_db);
extern gint g_vfprintf_db(FILE *, const gchar *, va_list);
CheckInterfacedef(g_vfprintf,g_vfprintf_db);
extern gint g_vsnprintf_db(gchar *, gulong, const gchar *, va_list);
CheckInterfacedef(g_vsnprintf,g_vsnprintf_db);
extern gint g_vsprintf_db(gchar *, const gchar *, va_list);
CheckInterfacedef(g_vsprintf,g_vsprintf_db);
extern gint g_snprintf_db(gchar *, gulong, const gchar *, ...);
CheckInterfacedef(g_snprintf,g_snprintf_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/glib/gprintf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
