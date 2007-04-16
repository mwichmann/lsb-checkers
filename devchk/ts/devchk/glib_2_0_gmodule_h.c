/*
 * Test of glib-2.0/gmodule.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
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

#if __i386__
CheckTypeSize(GModule,0, 12066, 2);
#elif __x86_64__
CheckTypeSize(GModule,0, 12066, 11);
#elif __ia64__
CheckTypeSize(GModule,0, 12066, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModule,0, 12066, 6);
#elif __powerpc64__
CheckTypeSize(GModule,0, 12066, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(GModule,0, 12066, 10);
#elif __s390x__
CheckTypeSize(GModule,0, 12066, 12);
#elif 1
CheckTypeSize(GModule,0, 12066, 1);
#endif

#if __i386__
CheckTypeSize(GModule *,4, 12067, 2);
#elif __x86_64__
CheckTypeSize(GModule *,8, 12067, 11);
#elif __ia64__
CheckTypeSize(GModule *,8, 12067, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModule *,4, 12067, 6);
#elif __powerpc64__
CheckTypeSize(GModule *,8, 12067, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(GModule *,4, 12067, 10);
#elif __s390x__
CheckTypeSize(GModule *,8, 12067, 12);
#elif 1
CheckTypeSize(GModule *,0, 12067, 1);
#endif

#if __i386__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif __x86_64__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif __ia64__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif __powerpc__ && !__powerpc64__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif __powerpc64__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif __s390__ && !__s390x__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif __s390x__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#elif 1
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1,42316);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2,42317);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3,42318);
#endif

#if __i386__
CheckTypeSize(GModuleFlags,4, 12069, 2);
#elif __x86_64__
CheckTypeSize(GModuleFlags,4, 12069, 11);
#elif __ia64__
CheckTypeSize(GModuleFlags,4, 12069, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModuleFlags,4, 12069, 6);
#elif __powerpc64__
CheckTypeSize(GModuleFlags,4, 12069, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(GModuleFlags,4, 12069, 10);
#elif __s390x__
CheckTypeSize(GModuleFlags,4, 12069, 12);
#elif 1
CheckTypeSize(GModuleFlags,0, 12069, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(GModuleUnload,4, 12071, 2);
#elif __x86_64__
CheckTypeSize(GModuleUnload,8, 12071, 11);
#elif __ia64__
CheckTypeSize(GModuleUnload,8, 12071, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModuleUnload,4, 12071, 6);
#elif __powerpc64__
CheckTypeSize(GModuleUnload,8, 12071, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(GModuleUnload,4, 12071, 10);
#elif __s390x__
CheckTypeSize(GModuleUnload,8, 12071, 12);
#elif 1
CheckTypeSize(GModuleUnload,0, 12071, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(GModuleCheckInit,4, 12073, 2);
#elif __x86_64__
CheckTypeSize(GModuleCheckInit,8, 12073, 11);
#elif __ia64__
CheckTypeSize(GModuleCheckInit,8, 12073, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModuleCheckInit,4, 12073, 6);
#elif __powerpc64__
CheckTypeSize(GModuleCheckInit,8, 12073, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(GModuleCheckInit,4, 12073, 10);
#elif __s390x__
CheckTypeSize(GModuleCheckInit,8, 12073, 12);
#elif 1
CheckTypeSize(GModuleCheckInit,0, 12073, 1);
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
