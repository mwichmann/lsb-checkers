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
CheckTypeSize(GModule,0, 12066, 2)
#elif __x86_64__
CheckTypeSize(GModule,0, 12066, 11)
#elif __ia64__
CheckTypeSize(GModule,0, 12066, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12066,0);
Msg("Find size of GModule (12066)\n");
#endif

#if __i386__
CheckTypeSize(GModule *,4, 12067, 2)
#elif __x86_64__
CheckTypeSize(GModule *,8, 12067, 11)
#elif __ia64__
CheckTypeSize(GModule *,8, 12067, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModule *,4, 12067, 6)
#elif __powerpc64__
CheckTypeSize(GModule *,8, 12067, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GModule *,4, 12067, 10)
#elif __s390x__
CheckTypeSize(GModule *,8, 12067, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12067,0);
Msg("Find size of GModule * (12067)\n");
#endif

#if __i386__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3);
#elif __x86_64__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3);
#elif __ia64__
CheckEnum("G_MODULE_BIND_LAZY",G_MODULE_BIND_LAZY,1);
CheckEnum("G_MODULE_BIND_LOCAL",G_MODULE_BIND_LOCAL,2);
CheckEnum("G_MODULE_BIND_MASK",G_MODULE_BIND_MASK,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12068,0);
Msg("Find size of anon-glib-2.0/gmodule.h-2 (12068)\n");
#endif

#if __i386__
CheckTypeSize(GModuleFlags,4, 12069, 2)
#elif __x86_64__
CheckTypeSize(GModuleFlags,4, 12069, 11)
#elif __ia64__
CheckTypeSize(GModuleFlags,4, 12069, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModuleFlags,4, 12069, 6)
#elif __powerpc64__
CheckTypeSize(GModuleFlags,4, 12069, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GModuleFlags,4, 12069, 10)
#elif __s390x__
CheckTypeSize(GModuleFlags,4, 12069, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12069,0);
Msg("Find size of GModuleFlags (12069)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12070,0);
Msg("Find size of fptr_gmodule_1 (12070)\n");
#endif

#if __i386__
CheckTypeSize(GModuleUnload,4, 12071, 2)
#elif __x86_64__
CheckTypeSize(GModuleUnload,8, 12071, 11)
#elif __ia64__
CheckTypeSize(GModuleUnload,8, 12071, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModuleUnload,4, 12071, 6)
#elif __powerpc64__
CheckTypeSize(GModuleUnload,8, 12071, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GModuleUnload,4, 12071, 10)
#elif __s390x__
CheckTypeSize(GModuleUnload,8, 12071, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12071,0);
Msg("Find size of GModuleUnload (12071)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12072,0);
Msg("Find size of fptr_gmodule_2 (12072)\n");
#endif

#if __i386__
CheckTypeSize(GModuleCheckInit,4, 12073, 2)
#elif __x86_64__
CheckTypeSize(GModuleCheckInit,8, 12073, 11)
#elif __ia64__
CheckTypeSize(GModuleCheckInit,8, 12073, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GModuleCheckInit,4, 12073, 6)
#elif __powerpc64__
CheckTypeSize(GModuleCheckInit,8, 12073, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GModuleCheckInit,4, 12073, 10)
#elif __s390x__
CheckTypeSize(GModuleCheckInit,8, 12073, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12073,0);
Msg("Find size of GModuleCheckInit (12073)\n");
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
