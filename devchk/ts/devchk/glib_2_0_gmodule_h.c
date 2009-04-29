/*
 * Test of glib-2.0/gmodule.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE

struct _GModule {
};

#include "glib-2.0/gmodule.h"



#ifdef TET_TEST
void glib_2_0_gmodule_h()
{
#else
int glib_2_0_gmodule_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/gmodule.h\n");
#endif

printf("Checking data structures in glib-2.0/gmodule.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for G_MODULE_IMPORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MODULE_EXPORT */
#endif

#if defined __s390x__
CheckTypeSize(GModuleFlags,4, 12069, 12, 3.1, NULL, 12068, NULL)
#elif defined __x86_64__
CheckTypeSize(GModuleFlags,4, 12069, 11, 3.1, NULL, 12068, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GModuleFlags,4, 12069, 10, 3.1, NULL, 12068, NULL)
#elif defined __powerpc64__
CheckTypeSize(GModuleFlags,4, 12069, 9, 3.1, NULL, 12068, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GModuleFlags,4, 12069, 6, 3.1, NULL, 12068, NULL)
#elif defined __ia64__
CheckTypeSize(GModuleFlags,4, 12069, 3, 3.1, NULL, 12068, NULL)
#elif defined __i386__
CheckTypeSize(GModuleFlags,4, 12069, 2, 3.1, NULL, 12068, NULL)
#else
Msg("Find size of GModuleFlags (12069)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12068,NULL);\n",architecture,12069,0);
#endif

#if defined __s390x__
CheckTypeSize(GModuleUnload,8, 12071, 12, 3.1, NULL, 12070, NULL)
#elif defined __x86_64__
CheckTypeSize(GModuleUnload,8, 12071, 11, 3.1, NULL, 12070, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GModuleUnload,4, 12071, 10, 3.1, NULL, 12070, NULL)
#elif defined __powerpc64__
CheckTypeSize(GModuleUnload,8, 12071, 9, 3.1, NULL, 12070, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GModuleUnload,4, 12071, 6, 3.1, NULL, 12070, NULL)
#elif defined __ia64__
CheckTypeSize(GModuleUnload,8, 12071, 3, 3.1, NULL, 12070, NULL)
#elif defined __i386__
CheckTypeSize(GModuleUnload,4, 12071, 2, 3.1, NULL, 12070, NULL)
#else
Msg("Find size of GModuleUnload (12071)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12070,NULL);\n",architecture,12071,0);
#endif

#if defined __s390x__
CheckTypeSize(GModuleCheckInit,8, 12073, 12, 3.1, NULL, 12072, NULL)
#elif defined __x86_64__
CheckTypeSize(GModuleCheckInit,8, 12073, 11, 3.1, NULL, 12072, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GModuleCheckInit,4, 12073, 10, 3.1, NULL, 12072, NULL)
#elif defined __powerpc64__
CheckTypeSize(GModuleCheckInit,8, 12073, 9, 3.1, NULL, 12072, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GModuleCheckInit,4, 12073, 6, 3.1, NULL, 12072, NULL)
#elif defined __ia64__
CheckTypeSize(GModuleCheckInit,8, 12073, 3, 3.1, NULL, 12072, NULL)
#elif defined __i386__
CheckTypeSize(GModuleCheckInit,4, 12073, 2, 3.1, NULL, 12072, NULL)
#else
Msg("Find size of GModuleCheckInit (12073)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12072, NULL);\n",architecture,12073,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __ia64__
/* IA64 */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __i386__
/* IA32 */
typedef void (*GModuleUnload_db)(GModule *);
CheckFunctionTypedef(GModuleUnload,GModuleUnload_db);
#elif defined __s390x__
/* S390X */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#elif defined __x86_64__
/* x86-64 */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#elif defined __powerpc64__
/* PPC64 */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#elif defined __ia64__
/* IA64 */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#elif defined __i386__
/* IA32 */
typedef const gchar * (*GModuleCheckInit_db)(GModule *);
CheckFunctionTypedef(GModuleCheckInit,GModuleCheckInit_db);
#endif

extern void g_module_make_resident_db(GModule *);
CheckInterfacedef(g_module_make_resident,g_module_make_resident_db);
extern gchar * g_module_build_path_db(const gchar *, const gchar *);
CheckInterfacedef(g_module_build_path,g_module_build_path_db);
extern gboolean g_module_close_db(GModule *);
CheckInterfacedef(g_module_close,g_module_close_db);
extern GModule * g_module_open_db(const gchar *, GModuleFlags);
CheckInterfacedef(g_module_open,g_module_open_db);
extern gboolean g_module_symbol_db(GModule *, const gchar *, gpointer *);
CheckInterfacedef(g_module_symbol,g_module_symbol_db);
extern const gchar * g_module_error_db(void);
CheckInterfacedef(g_module_error,g_module_error_db);
extern const gchar * g_module_name_db(GModule *);
CheckInterfacedef(g_module_name,g_module_name_db);
extern gboolean g_module_supported_db(void);
CheckInterfacedef(g_module_supported,g_module_supported_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/gmodule.h\n\n",pcnt,cnt);
return cnt;
#endif

}
