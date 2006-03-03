/*
 * Test of glib-2.0/glib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE

#include <glibconfig.h>

struct _GStringChunk { };
struct _GHashTable { };
struct _GKeyFile { };
struct _GDir { };
struct _GMainContext { };
struct _GMutex { };
struct _GCond { };
struct _GMemChunk { };
struct _GRelation { };
struct _GData { };
struct _GOptionContext { };
struct _GOptionGroup { };
struct _GAllocator { };
struct _GRand { };
struct _GMarkupParseContext { };
struct _GCache { };
struct _GTree { };
struct _GIConv { };
struct _GAsyncQueue { };
struct _GTimer { };
struct _GMainLoop { };
struct _GPrivate { };
struct _GPatternSpec { };
#include "glib-2.0/glib.h"



#ifdef TET_TEST
void glib_2_0_glib_h()
{
#else
int glib_2_0_glib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/glib.h\n");
#endif

printf("Checking data structures in glib-2.0/glib.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_EXTENSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_PURE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_MALLOC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_PRINTF(format_idx,arg_idx) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_SCANF(format_idx,arg_idx) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_FORMAT(arg_idx) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_NORETURN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_CONST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_UNUSED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_NO_INSTRUMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_DEPRECATED */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GNUC_FUNCTION
	CompareStringConstant(G_GNUC_FUNCTION,"")
#else
Msg( "Error: Constant not found: G_GNUC_FUNCTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GNUC_PRETTY_FUNCTION
	CompareStringConstant(G_GNUC_PRETTY_FUNCTION,"")
#else
Msg( "Error: Constant not found: G_GNUC_PRETTY_FUNCTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRINGIFY(macro_or_string) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRINGIFY_ARG(contents) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRLOC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRFUNC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MAX(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for MIN(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ABS(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CLAMP(x,low,high) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_N_ELEMENTS(arr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GPOINTER_TO_SIZE(p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GSIZE_TO_POINTER(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRUCT_OFFSET(struct_type,member) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRUCT_MEMBER_P(struct_p,struct_offset) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STRUCT_MEMBER(member_type,struct_p,struct_offset) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STMT_START */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STMT_END */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CONST_RETURN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LIKELY(expr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_UNLIKELY(expr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_HAVE_ALLOCA_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_HAVE_SYS_POLL_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MINFLOAT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXFLOAT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MINDOUBLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXDOUBLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MINSHORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXSHORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXUSHORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MININT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXINT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXUINT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MINLONG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXLONG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXULONG */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT16_MODIFIER
	CompareStringConstant(G_GINT16_MODIFIER,"h")
#else
Msg( "Error: Constant not found: G_GINT16_MODIFIER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT16_FORMAT
	CompareStringConstant(G_GINT16_FORMAT,"hi")
#else
Msg( "Error: Constant not found: G_GINT16_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GUINT16_FORMAT
	CompareStringConstant(G_GUINT16_FORMAT,"hu")
#else
Msg( "Error: Constant not found: G_GUINT16_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT32_MODIFIER
	CompareStringConstant(G_GINT32_MODIFIER,"")
#else
Msg( "Error: Constant not found: G_GINT32_MODIFIER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT32_FORMAT
	CompareStringConstant(G_GINT32_FORMAT,"i")
#else
Msg( "Error: Constant not found: G_GINT32_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GUINT32_FORMAT
	CompareStringConstant(G_GUINT32_FORMAT,"u")
#else
Msg( "Error: Constant not found: G_GUINT32_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GINT64
	CompareConstant(G_HAVE_GINT64,1,5838,architecture)
#else
Msg( "Error: Constant not found: G_HAVE_GINT64\n");
cnt++;
#endif

#endif

#if __powerpc64__
/* No test for G_GINT64_CONSTANT(val) */
#elif __powerpc__ && !__powerpc64__
/* No test for G_GINT64_CONSTANT(val) */
#elif __ia64__
/* No test for G_GINT64_CONSTANT(val) */
#elif __i386__
/* No test for G_GINT64_CONSTANT(val) */
#elif __s390x__
/* No test for G_GINT64_CONSTANT(val) */
#elif __x86_64__
/* No test for G_GINT64_CONSTANT(val) */
#elif __s390__ && !__s390x__
/* No test for G_GINT64_CONSTANT(val) */
#else
Msg( "No definition for G_GINT64_CONSTANT(val) (5839, Unknown) in db\n");
#ifdef G_GINT64_CONSTANT(val)
#endif
#endif
#if __powerpc64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"ll")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif __ia64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif __i386__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"ll")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif __s390x__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif __x86_64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"ll")
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#else
Msg( "No definition for G_GINT64_MODIFIER (5840, string) in db\n");
#ifdef G_GINT64_MODIFIER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5840,%s);\n", architecture, G_GINT64_MODIFIER);
#endif
#endif
#if __powerpc64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"lli")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif __ia64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif __i386__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"lli")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif __s390x__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"lli")
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#else
Msg( "No definition for G_GINT64_FORMAT (5841, string) in db\n");
#ifdef G_GINT64_FORMAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5841,%s);\n", architecture, G_GINT64_FORMAT);
#endif
#endif
#if __powerpc64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"llu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif __ia64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif __i386__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"llu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif __s390x__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"llu")
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#else
Msg( "No definition for G_GUINT64_FORMAT (5842, string) in db\n");
#ifdef G_GUINT64_FORMAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5842,%s);\n", architecture, G_GUINT64_FORMAT);
#endif
#endif
#if __powerpc64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,4,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif __ia64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif __i386__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,4,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif __s390x__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif __x86_64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,4,5843,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_SIZEOF_VOID_P (5843, int) in db\n");
#ifdef GLIB_SIZEOF_VOID_P
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5843,%d);\n", architecture, GLIB_SIZEOF_VOID_P);
#endif
#endif
#if __powerpc64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,4,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif __ia64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif __i386__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,4,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif __s390x__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif __x86_64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,4,5844,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_SIZEOF_LONG (5844, int) in db\n");
#ifdef GLIB_SIZEOF_LONG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5844,%d);\n", architecture, GLIB_SIZEOF_LONG);
#endif
#endif
#if __powerpc64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,4,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif __ia64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif __i386__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,4,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif __s390x__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif __x86_64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,4,5845,architecture)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_SIZEOF_SIZE_T (5845, int) in db\n");
#ifdef GLIB_SIZEOF_SIZE_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5845,%d);\n", architecture, GLIB_SIZEOF_SIZE_T);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"")
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"i")
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"u")
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#endif

#if __powerpc64__
/* No test for G_MAXSIZE */
#elif __powerpc__ && !__powerpc64__
/* No test for G_MAXSIZE */
#elif __ia64__
/* No test for G_MAXSIZE */
#elif __i386__
/* No test for G_MAXSIZE */
#elif __s390x__
/* No test for G_MAXSIZE */
#elif __x86_64__
/* No test for G_MAXSIZE */
#elif __s390__ && !__s390x__
/* No test for G_MAXSIZE */
#else
Msg( "No definition for G_MAXSIZE (5849, Unknown) in db\n");
#ifdef G_MAXSIZE
#endif
#endif
#if __powerpc64__
/* No test for GPOINTER_TO_INT(p) */
#elif __powerpc__ && !__powerpc64__
/* No test for GPOINTER_TO_INT(p) */
#elif __ia64__
/* No test for GPOINTER_TO_INT(p) */
#elif __i386__
/* No test for GPOINTER_TO_INT(p) */
#elif __s390x__
/* No test for GPOINTER_TO_INT(p) */
#elif __x86_64__
/* No test for GPOINTER_TO_INT(p) */
#elif __s390__ && !__s390x__
/* No test for GPOINTER_TO_INT(p) */
#else
Msg( "No definition for GPOINTER_TO_INT(p) (5850, Unknown) in db\n");
#ifdef GPOINTER_TO_INT(p)
#endif
#endif
#if __powerpc64__
/* No test for GPOINTER_TO_UINT(p) */
#elif __powerpc__ && !__powerpc64__
/* No test for GPOINTER_TO_UINT(p) */
#elif __ia64__
/* No test for GPOINTER_TO_UINT(p) */
#elif __i386__
/* No test for GPOINTER_TO_UINT(p) */
#elif __s390x__
/* No test for GPOINTER_TO_UINT(p) */
#elif __x86_64__
/* No test for GPOINTER_TO_UINT(p) */
#elif __s390__ && !__s390x__
/* No test for GPOINTER_TO_UINT(p) */
#else
Msg( "No definition for GPOINTER_TO_UINT(p) (5851, Unknown) in db\n");
#ifdef GPOINTER_TO_UINT(p)
#endif
#endif
#if __powerpc64__
/* No test for GINT_TO_POINTER(i) */
#elif __powerpc__ && !__powerpc64__
/* No test for GINT_TO_POINTER(i) */
#elif __ia64__
/* No test for GINT_TO_POINTER(i) */
#elif __i386__
/* No test for GINT_TO_POINTER(i) */
#elif __s390x__
/* No test for GINT_TO_POINTER(i) */
#elif __x86_64__
/* No test for GINT_TO_POINTER(i) */
#elif __s390__ && !__s390x__
/* No test for GINT_TO_POINTER(i) */
#else
Msg( "No definition for GINT_TO_POINTER(i) (5852, Unknown) in db\n");
#ifdef GINT_TO_POINTER(i)
#endif
#endif
#if __powerpc64__
/* No test for GUINT_TO_POINTER(u) */
#elif __powerpc__ && !__powerpc64__
/* No test for GUINT_TO_POINTER(u) */
#elif __ia64__
/* No test for GUINT_TO_POINTER(u) */
#elif __i386__
/* No test for GUINT_TO_POINTER(u) */
#elif __s390x__
/* No test for GUINT_TO_POINTER(u) */
#elif __x86_64__
/* No test for GUINT_TO_POINTER(u) */
#elif __s390__ && !__s390x__
/* No test for GUINT_TO_POINTER(u) */
#else
Msg( "No definition for GUINT_TO_POINTER(u) (5853, Unknown) in db\n");
#ifdef GUINT_TO_POINTER(u)
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for g_ATEXIT(proc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_memmove(d,s,n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLIB_MAJOR_VERSION
	CompareConstant(GLIB_MAJOR_VERSION,2,5856,architecture)
#else
Msg( "Error: Constant not found: GLIB_MAJOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLIB_MINOR_VERSION
	CompareConstant(GLIB_MINOR_VERSION,6,5857,architecture)
#else
Msg( "Error: Constant not found: GLIB_MINOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLIB_MICRO_VERSION
	CompareConstant(GLIB_MICRO_VERSION,6,5858,architecture)
#else
Msg( "Error: Constant not found: GLIB_MICRO_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OS_UNIX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VA_COPY */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_INLINE
	CompareConstant(G_HAVE_INLINE,1,5861,architecture)
#else
Msg( "Error: Constant not found: G_HAVE_INLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE___INLINE
	CompareConstant(G_HAVE___INLINE,1,5862,architecture)
#else
Msg( "Error: Constant not found: G_HAVE___INLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE___INLINE__
	CompareConstant(G_HAVE___INLINE__,1,5863,architecture)
#else
Msg( "Error: Constant not found: G_HAVE___INLINE__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CAN_INLINE
	CompareConstant(G_CAN_INLINE,1,5864,architecture)
#else
Msg( "Error: Constant not found: G_CAN_INLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_ISO_VARARGS
	CompareConstant(G_HAVE_ISO_VARARGS,1,5865,architecture)
#else
Msg( "Error: Constant not found: G_HAVE_ISO_VARARGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GNUC_VARARGS
	CompareConstant(G_HAVE_GNUC_VARARGS,1,5866,architecture)
#else
Msg( "Error: Constant not found: G_HAVE_GNUC_VARARGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GROWING_STACK
	CompareConstant(G_HAVE_GROWING_STACK,0,5867,architecture)
#else
Msg( "Error: Constant not found: G_HAVE_GROWING_STACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GNUC_VISIBILITY
	CompareConstant(G_HAVE_GNUC_VISIBILITY,1,5868,architecture)
#else
Msg( "Error: Constant not found: G_HAVE_GNUC_VISIBILITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_GNUC_INTERNAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_THREADS_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_THREADS_IMPL_POSIX */
#endif

#if __powerpc64__
/* No test for G_STATIC_MUTEX_INIT */
#elif __powerpc__ && !__powerpc64__
/* No test for G_STATIC_MUTEX_INIT */
#elif __ia64__
/* No test for G_STATIC_MUTEX_INIT */
#elif __i386__
/* No test for G_STATIC_MUTEX_INIT */
#elif __s390x__
/* No test for G_STATIC_MUTEX_INIT */
#elif __x86_64__
/* No test for G_STATIC_MUTEX_INIT */
#elif __s390__ && !__s390x__
/* No test for G_STATIC_MUTEX_INIT */
#else
Msg( "No definition for G_STATIC_MUTEX_INIT (5872, Unknown) in db\n");
#ifdef G_STATIC_MUTEX_INIT
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for g_static_mutex_get_mutex(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT16_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT16_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT32_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT32_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT64_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT64_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT64_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT64_TO_BE(val) */
#endif

#if __powerpc64__
/* No test for GLONG_TO_LE(val) */
#elif __powerpc__ && !__powerpc64__
/* No test for GLONG_TO_LE(val) */
#elif __ia64__
/* No test for GLONG_TO_LE(val) */
#elif __i386__
/* No test for GLONG_TO_LE(val) */
#elif __s390x__
/* No test for GLONG_TO_LE(val) */
#elif __x86_64__
/* No test for GLONG_TO_LE(val) */
#elif __s390__ && !__s390x__
/* No test for GLONG_TO_LE(val) */
#else
Msg( "No definition for GLONG_TO_LE(val) (5886, Unknown) in db\n");
#ifdef GLONG_TO_LE(val)
#endif
#endif
#if __powerpc64__
/* No test for GULONG_TO_LE(val) */
#elif __powerpc__ && !__powerpc64__
/* No test for GULONG_TO_LE(val) */
#elif __ia64__
/* No test for GULONG_TO_LE(val) */
#elif __i386__
/* No test for GULONG_TO_LE(val) */
#elif __s390x__
/* No test for GULONG_TO_LE(val) */
#elif __x86_64__
/* No test for GULONG_TO_LE(val) */
#elif __s390__ && !__s390x__
/* No test for GULONG_TO_LE(val) */
#else
Msg( "No definition for GULONG_TO_LE(val) (5887, Unknown) in db\n");
#ifdef GULONG_TO_LE(val)
#endif
#endif
#if __powerpc64__
/* No test for GLONG_TO_BE(val) */
#elif __powerpc__ && !__powerpc64__
/* No test for GLONG_TO_BE(val) */
#elif __ia64__
/* No test for GLONG_TO_BE(val) */
#elif __i386__
/* No test for GLONG_TO_BE(val) */
#elif __s390x__
/* No test for GLONG_TO_BE(val) */
#elif __x86_64__
/* No test for GLONG_TO_BE(val) */
#elif __s390__ && !__s390x__
/* No test for GLONG_TO_BE(val) */
#else
Msg( "No definition for GLONG_TO_BE(val) (5888, Unknown) in db\n");
#ifdef GLONG_TO_BE(val)
#endif
#endif
#if __powerpc64__
/* No test for GULONG_TO_BE(val) */
#elif __powerpc__ && !__powerpc64__
/* No test for GULONG_TO_BE(val) */
#elif __ia64__
/* No test for GULONG_TO_BE(val) */
#elif __i386__
/* No test for GULONG_TO_BE(val) */
#elif __s390x__
/* No test for GULONG_TO_BE(val) */
#elif __x86_64__
/* No test for GULONG_TO_BE(val) */
#elif __s390__ && !__s390x__
/* No test for GULONG_TO_BE(val) */
#else
Msg( "No definition for GULONG_TO_BE(val) (5889, Unknown) in db\n");
#ifdef GULONG_TO_BE(val)
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for GINT_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT_TO_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT_TO_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_BYTE_ORDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_SYSDEF_POLLIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_SYSDEF_POLLOUT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_SYSDEF_POLLPRI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_SYSDEF_POLLHUP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_SYSDEF_POLLERR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_SYSDEF_POLLNVAL */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_MODULE_SUFFIX
	CompareStringConstant(G_MODULE_SUFFIX,"so")
#else
Msg( "Error: Constant not found: G_MODULE_SUFFIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MININT8 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXINT8 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXUINT8 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MININT16 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXINT16 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXUINT16 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MININT32 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXINT32 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXUINT32 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MININT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXINT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MAXUINT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_E */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LN2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LN10 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PI_2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PI_4 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_SQRT2 */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_LITTLE_ENDIAN
	CompareConstant(G_LITTLE_ENDIAN,1234,5921,architecture)
#else
Msg( "Error: Constant not found: G_LITTLE_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_BIG_ENDIAN
	CompareConstant(G_BIG_ENDIAN,4321,5922,architecture)
#else
Msg( "Error: Constant not found: G_BIG_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PDP_ENDIAN
	CompareConstant(G_PDP_ENDIAN,3412,5923,architecture)
#else
Msg( "Error: Constant not found: G_PDP_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_SWAP_LE_BE_CONSTANT(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_SWAP_LE_BE_CONSTANT(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT64_SWAP_LE_BE_CONSTANT(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_SWAP_LE_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_SWAP_LE_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT64_SWAP_LE_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_SWAP_LE_PDP(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_SWAP_BE_PDP(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_SWAP_LE_PDP(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_SWAP_BE_PDP(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT16_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT16_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT16_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT32_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT32_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT32_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT64_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT64_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT64_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT64_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLONG_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GULONG_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLONG_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GULONG_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT_FROM_LE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GINT_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GUINT_FROM_BE(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ntohl(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ntohs(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_htonl(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_htons(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IEEE754_FLOAT_BIAS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IEEE754_DOUBLE_BIAS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOG_2_BASE_10 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_VAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for alloca(size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_alloca(size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_newa(struct_type,n_structs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_array_append_val(a,v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_array_prepend_val(a,v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_array_insert_val(a,i,v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_array_index(a,t,i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ptr_array_index(array,index_) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_atomic_int_get(atomic) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_atomic_pointer_get(atomic) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_atomic_int_inc(atomic) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_atomic_int_dec_and_test(atomic) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_THREAD_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MUTEX_DEBUG_MAGIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_static_mutex_get_mutex_impl_shortcut(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_THREAD_UF(op,arglist) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_THREAD_CF(op,fail,arg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_THREAD_ECF(op,fail,mutex,type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mutex_lock(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mutex_trylock(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mutex_unlock(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mutex_free(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cond_wait(cond,mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cond_timed_wait(cond,mutex,abs_time) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_thread_supported() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mutex_new() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cond_new() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cond_signal(cond) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cond_broadcast(cond) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cond_free(cond) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_private_new(destructor) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_private_get(private_key) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_private_set(private_key,value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_thread_yield() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_thread_create(func,data,joinable,error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_static_mutex_lock(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_static_mutex_trylock(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_static_mutex_unlock(mutex) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STATIC_PRIVATE_INIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STATIC_REC_MUTEX_INIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_STATIC_RW_LOCK_INIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ONCE_INIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_once(once,func,arg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOCK_NAME(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOCK_DEFINE_STATIC(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOCK_DEFINE(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOCK_EXTERN(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOCK(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_UNLOCK(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TRYLOCK(name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_BREAKPOINT() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MEM_ALIGN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_new(struct_type,n_structs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_new0(struct_type,n_structs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_renew(struct_type,mem,n_structs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_mem_chunk_create(type,pre_alloc,alloc_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_chunk_new(type,chunk) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_chunk_new0(type,chunk) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_chunk_free(mem,mem_chunk) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_ALLOC_ONLY
	CompareConstant(G_ALLOC_ONLY,1,6021,architecture)
#else
Msg( "Error: Constant not found: G_ALLOC_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_ALLOC_AND_FREE
	CompareConstant(G_ALLOC_AND_FREE,2,6022,architecture)
#else
Msg( "Error: Constant not found: G_ALLOC_AND_FREE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ALLOCATOR_LIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ALLOCATOR_SLIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ALLOCATOR_NODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_list_previous(list) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_list_next(list) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CONVERT_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_id_set_data(dl,q,d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_id_remove_data(dl,q) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_get_data(dl,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_set_data_full(dl,k,d,f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_remove_no_notify(dl,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_set_data(dl,k,d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_datalist_remove_data(dl,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_id_set_data(l,k,d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_id_remove_data(l,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_get_data(l,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_set_data_full(l,k,d,f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_remove_no_notify(l,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_set_data(l,k,d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_dataset_remove_data(l,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DATE_BAD_JULIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DATE_BAD_DAY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DATE_BAD_YEAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_weekday */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_month */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_year */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_day */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_julian */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_day_of_year */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_monday_week_of_year */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_sunday_week_of_year */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_days_in_month */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_monday_weeks_in_year */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_date_sunday_weeks_in_year */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_FILE_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK_FLAG_USER_SHIFT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK(hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK_FLAGS(hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK_ACTIVE(hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK_IN_CALL(hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK_IS_VALID(hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_HOOK_IS_UNLINKED(hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_hook_append(hook_list,hook) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_slist_next(slist) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_HIGH
	CompareConstant(G_PRIORITY_HIGH,-100,6067,architecture)
#else
Msg( "Error: Constant not found: G_PRIORITY_HIGH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_DEFAULT
	CompareConstant(G_PRIORITY_DEFAULT,0,6068,architecture)
#else
Msg( "Error: Constant not found: G_PRIORITY_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_HIGH_IDLE
	CompareConstant(G_PRIORITY_HIGH_IDLE,100,6069,architecture)
#else
Msg( "Error: Constant not found: G_PRIORITY_HIGH_IDLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_DEFAULT_IDLE
	CompareConstant(G_PRIORITY_DEFAULT_IDLE,200,6070,architecture)
#else
Msg( "Error: Constant not found: G_PRIORITY_DEFAULT_IDLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_LOW
	CompareConstant(G_PRIORITY_LOW,300,6071,architecture)
#else
Msg( "Error: Constant not found: G_PRIORITY_LOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_utf8_next_char(p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DIR_SEPARATOR */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_DIR_SEPARATOR_S
	CompareStringConstant(G_DIR_SEPARATOR_S,"/")
#else
Msg( "Error: Constant not found: G_DIR_SEPARATOR_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_DIR_SEPARATOR(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_SEARCHPATH_SEPARATOR */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_SEARCHPATH_SEPARATOR_S
	CompareStringConstant(G_SEARCHPATH_SEPARATOR_S,":")
#else
Msg( "Error: Constant not found: G_SEARCHPATH_SEPARATOR_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_INLINE_FUNC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATEXIT(proc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GLIB_CHECK_VERSION(major,minor,micro) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_WIN32_DLLMAIN_FOR_DLL_NAME(static,dll_name) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IO_CHANNEL_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_KEY_FILE_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_MARKUP_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOG_LEVEL_USER_SHIFT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOG_FATAL_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_LOG_DOMAIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_error(...) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_message(...) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_critical(...) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_warning(...) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_debug(...) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_assert(expr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_assert_not_reached() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_return_if_fail(expr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_return_val_if_fail(expr,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_return_if_reached() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_return_val_if_reached(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_NODE_IS_ROOT(node) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_NODE_IS_LEAF(node) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_append(parent,node) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_insert_data(parent,position,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_insert_data_before(parent,sibling,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_prepend_data(parent,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_append_data(parent,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_prev_sibling(node) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_next_sibling(node) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_node_first_child(node) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OPTION_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_OPTION_REMAINING
	CompareStringConstant(G_OPTION_REMAINING,"")
#else
Msg( "Error: Constant not found: G_OPTION_REMAINING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_rand_boolean(rand_) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_random_boolean() */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CSET_A_2_Z
	CompareStringConstant(G_CSET_A_2_Z,"ABCDEFGHIJKLMNOPQRSTUVWXYZ")
#else
Msg( "Error: Constant not found: G_CSET_A_2_Z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CSET_a_2_z
	CompareStringConstant(G_CSET_a_2_z,"abcdefghijklmnopqrstuvwxyz")
#else
Msg( "Error: Constant not found: G_CSET_a_2_z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CSET_DIGITS
	CompareStringConstant(G_CSET_DIGITS,"0123456789")
#else
Msg( "Error: Constant not found: G_CSET_DIGITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CSET_LATINC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CSET_LATINS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_SHELL_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_SPAWN_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isalnum(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isalpha(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_iscntrl(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isdigit(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isgraph(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_islower(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isprint(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_ispunct(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isspace(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isupper(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_ascii_isxdigit(c) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_STR_DELIMITERS
	CompareStringConstant(G_STR_DELIMITERS,"_-|> <.")
#else
Msg( "Error: Constant not found: G_STR_DELIMITERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ASCII_DTOSTR_BUF_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_strstrip(string) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_USEC_PER_SEC
	CompareConstant(G_USEC_PER_SEC,1000000,6134,architecture)
#else
Msg( "Error: Constant not found: G_USEC_PER_SEC\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif __ia64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif __s390x__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif __x86_64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#else
Msg( "No definition for G_VA_COPY_AS_ARRAY (9488, int) in db\n");
#ifdef G_VA_COPY_AS_ARRAY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,9488,%d);\n", architecture, G_VA_COPY_AS_ARRAY);
#endif
#endif
#if __powerpc64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,24,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif __ia64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif __i386__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,24,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif __s390x__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif __x86_64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,24,9489,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_LSB_PADDING_SIZE (9489, int) in db\n");
#ifdef GLIB_LSB_PADDING_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,9489,%d);\n", architecture, GLIB_LSB_PADDING_SIZE);
#endif
#endif
#if __powerpc64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,4,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif __ia64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif __i386__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,4,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif __s390x__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif __x86_64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,4,9490,architecture)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_LSB_DATA_SIZE (9490, int) in db\n");
#ifdef GLIB_LSB_DATA_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,9490,%d);\n", architecture, GLIB_LSB_DATA_SIZE);
#endif
#endif
#if __i386__
CheckTypeSize(guint16,2, 11396, 2)
#elif __x86_64__
CheckTypeSize(guint16,2, 11396, 11)
#elif __ia64__
CheckTypeSize(guint16,2, 11396, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint16,2, 11396, 6)
#elif __powerpc64__
CheckTypeSize(guint16,2, 11396, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guint16,2, 11396, 10)
#elif __s390x__
CheckTypeSize(guint16,2, 11396, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11396,0);
Msg("Find size of guint16 (11396)\n");
#endif

#if __i386__
CheckTypeSize(const guint16,2, 11397, 2)
#elif __x86_64__
CheckTypeSize(const guint16,2, 11397, 11)
#elif __ia64__
CheckTypeSize(const guint16,2, 11397, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const guint16,2, 11397, 6)
#elif __powerpc64__
CheckTypeSize(const guint16,2, 11397, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const guint16,2, 11397, 10)
#elif __s390x__
CheckTypeSize(const guint16,2, 11397, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11397,0);
Msg("Find size of const guint16 (11397)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11398,0);
Msg("Find size of const guint16 * (11398)\n");
#endif

#if __i386__
CheckTypeSize(const const guint16 *,4, 11399, 2)
#elif __x86_64__
CheckTypeSize(const const guint16 *,8, 11399, 11)
#elif __ia64__
CheckTypeSize(const const guint16 *,8, 11399, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const const guint16 *,4, 11399, 6)
#elif __powerpc64__
CheckTypeSize(const const guint16 *,8, 11399, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const const guint16 *,4, 11399, 10)
#elif __s390x__
CheckTypeSize(const const guint16 *,8, 11399, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11399,0);
Msg("Find size of const const guint16 * (11399)\n");
#endif

#if __i386__
CheckTypeSize(gint,4, 11400, 2)
#elif __x86_64__
CheckTypeSize(gint,4, 11400, 11)
#elif __ia64__
CheckTypeSize(gint,4, 11400, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gint,4, 11400, 6)
#elif __powerpc64__
CheckTypeSize(gint,4, 11400, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gint,4, 11400, 10)
#elif __s390x__
CheckTypeSize(gint,4, 11400, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11400,0);
Msg("Find size of gint (11400)\n");
#endif

#if __i386__
CheckTypeSize(gboolean,4, 11401, 2)
#elif __x86_64__
CheckTypeSize(gboolean,4, 11401, 11)
#elif __ia64__
CheckTypeSize(gboolean,4, 11401, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gboolean,4, 11401, 6)
#elif __powerpc64__
CheckTypeSize(gboolean,4, 11401, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gboolean,4, 11401, 10)
#elif __s390x__
CheckTypeSize(gboolean,4, 11401, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11401,0);
Msg("Find size of gboolean (11401)\n");
#endif

#if __i386__
CheckTypeSize(guint,4, 11402, 2)
#elif __x86_64__
CheckTypeSize(guint,4, 11402, 11)
#elif __ia64__
CheckTypeSize(guint,4, 11402, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint,4, 11402, 6)
#elif __powerpc64__
CheckTypeSize(guint,4, 11402, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guint,4, 11402, 10)
#elif __s390x__
CheckTypeSize(guint,4, 11402, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11402,0);
Msg("Find size of guint (11402)\n");
#endif

#if __i386__
CheckTypeSize(struct _GThread,16, 11403, 2)
CheckMemberSize(struct _GThread,data,4,2,41304)
CheckOffset(struct _GThread,data,4,2,41304)
CheckMemberSize(struct _GThread,joinable,4,2,41305)
CheckOffset(struct _GThread,joinable,8,2,41305)
CheckMemberSize(struct _GThread,priority,4,2,41310)
CheckOffset(struct _GThread,priority,12,2,41310)
#elif __x86_64__
CheckTypeSize(struct _GThread,24, 11403, 11)
CheckMemberSize(struct _GThread,data,8,11,41304)
CheckOffset(struct _GThread,data,8,11,41304)
CheckMemberSize(struct _GThread,joinable,4,11,41305)
CheckOffset(struct _GThread,joinable,16,11,41305)
CheckMemberSize(struct _GThread,priority,4,11,41310)
CheckOffset(struct _GThread,priority,20,11,41310)
#elif __ia64__
CheckTypeSize(struct _GThread,24, 11403, 3)
CheckMemberSize(struct _GThread,data,8,3,41304)
CheckOffset(struct _GThread,data,8,3,41304)
CheckMemberSize(struct _GThread,joinable,4,3,41305)
CheckOffset(struct _GThread,joinable,16,3,41305)
CheckMemberSize(struct _GThread,priority,4,3,41310)
CheckOffset(struct _GThread,priority,20,3,41310)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GThread,16, 11403, 6)
CheckMemberSize(struct _GThread,data,4,6,41304)
CheckOffset(struct _GThread,data,4,6,41304)
CheckMemberSize(struct _GThread,joinable,4,6,41305)
CheckOffset(struct _GThread,joinable,8,6,41305)
CheckMemberSize(struct _GThread,priority,4,6,41310)
CheckOffset(struct _GThread,priority,12,6,41310)
#elif __powerpc64__
CheckTypeSize(struct _GThread,24, 11403, 9)
CheckMemberSize(struct _GThread,data,8,9,41304)
CheckOffset(struct _GThread,data,8,9,41304)
CheckMemberSize(struct _GThread,joinable,4,9,41305)
CheckOffset(struct _GThread,joinable,16,9,41305)
CheckMemberSize(struct _GThread,priority,4,9,41310)
CheckOffset(struct _GThread,priority,20,9,41310)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GThread,16, 11403, 10)
CheckMemberSize(struct _GThread,data,4,10,41304)
CheckOffset(struct _GThread,data,4,10,41304)
CheckMemberSize(struct _GThread,joinable,4,10,41305)
CheckOffset(struct _GThread,joinable,8,10,41305)
CheckMemberSize(struct _GThread,priority,4,10,41310)
CheckOffset(struct _GThread,priority,12,10,41310)
#elif __s390x__
CheckTypeSize(struct _GThread,24, 11403, 12)
CheckMemberSize(struct _GThread,data,8,12,41304)
CheckOffset(struct _GThread,data,8,12,41304)
CheckMemberSize(struct _GThread,joinable,4,12,41305)
CheckOffset(struct _GThread,joinable,16,12,41305)
CheckMemberSize(struct _GThread,priority,4,12,41310)
CheckOffset(struct _GThread,priority,20,12,41310)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11403,0);
Msg("Find size of _GThread (11403)\n");
#endif

#if __i386__
CheckTypeSize(gpointer,4, 11404, 2)
#elif __x86_64__
CheckTypeSize(gpointer,8, 11404, 11)
#elif __ia64__
CheckTypeSize(gpointer,8, 11404, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gpointer,4, 11404, 6)
#elif __powerpc64__
CheckTypeSize(gpointer,8, 11404, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gpointer,4, 11404, 10)
#elif __s390x__
CheckTypeSize(gpointer,8, 11404, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11404,0);
Msg("Find size of gpointer (11404)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11405,0);
Msg("Find size of fptr_glib_6 (11405)\n");
#endif

#if __i386__
CheckTypeSize(GThreadFunc,4, 11406, 2)
#elif __x86_64__
CheckTypeSize(GThreadFunc,8, 11406, 11)
#elif __ia64__
CheckTypeSize(GThreadFunc,8, 11406, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadFunc,4, 11406, 6)
#elif __powerpc64__
CheckTypeSize(GThreadFunc,8, 11406, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadFunc,4, 11406, 10)
#elif __s390x__
CheckTypeSize(GThreadFunc,8, 11406, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11406,0);
Msg("Find size of GThreadFunc (11406)\n");
#endif

#if __i386__
CheckEnum("G_THREAD_PRIORITY_LOW",G_THREAD_PRIORITY_LOW,0);
CheckEnum("G_THREAD_PRIORITY_NORMAL",G_THREAD_PRIORITY_NORMAL,1);
CheckEnum("G_THREAD_PRIORITY_HIGH",G_THREAD_PRIORITY_HIGH,2);
CheckEnum("G_THREAD_PRIORITY_URGENT",G_THREAD_PRIORITY_URGENT,3);
#elif __x86_64__
CheckEnum("G_THREAD_PRIORITY_LOW",G_THREAD_PRIORITY_LOW,0);
CheckEnum("G_THREAD_PRIORITY_NORMAL",G_THREAD_PRIORITY_NORMAL,1);
CheckEnum("G_THREAD_PRIORITY_HIGH",G_THREAD_PRIORITY_HIGH,2);
CheckEnum("G_THREAD_PRIORITY_URGENT",G_THREAD_PRIORITY_URGENT,3);
#elif __ia64__
CheckEnum("G_THREAD_PRIORITY_LOW",G_THREAD_PRIORITY_LOW,0);
CheckEnum("G_THREAD_PRIORITY_NORMAL",G_THREAD_PRIORITY_NORMAL,1);
CheckEnum("G_THREAD_PRIORITY_HIGH",G_THREAD_PRIORITY_HIGH,2);
CheckEnum("G_THREAD_PRIORITY_URGENT",G_THREAD_PRIORITY_URGENT,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11407,0);
Msg("Find size of anon-glib-2.0/glib.h-72 (11407)\n");
#endif

#if __i386__
CheckTypeSize(GThreadPriority,4, 11408, 2)
#elif __x86_64__
CheckTypeSize(GThreadPriority,4, 11408, 11)
#elif __ia64__
CheckTypeSize(GThreadPriority,4, 11408, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadPriority,4, 11408, 6)
#elif __powerpc64__
CheckTypeSize(GThreadPriority,4, 11408, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadPriority,4, 11408, 10)
#elif __s390x__
CheckTypeSize(GThreadPriority,4, 11408, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11408,0);
Msg("Find size of GThreadPriority (11408)\n");
#endif

#if __i386__
CheckTypeSize(GThread,16, 11409, 2)
#elif __x86_64__
CheckTypeSize(GThread,24, 11409, 11)
#elif __ia64__
CheckTypeSize(GThread,24, 11409, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThread,16, 11409, 6)
#elif __powerpc64__
CheckTypeSize(GThread,24, 11409, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThread,16, 11409, 10)
#elif __s390x__
CheckTypeSize(GThread,24, 11409, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11409,0);
Msg("Find size of GThread (11409)\n");
#endif

#if __i386__
CheckTypeSize(GThread *,4, 11410, 2)
#elif __x86_64__
CheckTypeSize(GThread *,8, 11410, 11)
#elif __ia64__
CheckTypeSize(GThread *,8, 11410, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThread *,4, 11410, 6)
#elif __powerpc64__
CheckTypeSize(GThread *,8, 11410, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThread *,4, 11410, 10)
#elif __s390x__
CheckTypeSize(GThread *,8, 11410, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11410,0);
Msg("Find size of GThread * (11410)\n");
#endif

#if __i386__
CheckTypeSize(struct _GError,12, 11411, 2)
CheckMemberSize(struct _GError,code,4,2,41312)
CheckOffset(struct _GError,code,4,2,41312)
CheckMemberSize(struct _GError,message,4,2,41313)
CheckOffset(struct _GError,message,8,2,41313)
#elif __x86_64__
CheckTypeSize(struct _GError,16, 11411, 11)
CheckMemberSize(struct _GError,code,4,11,41312)
CheckOffset(struct _GError,code,4,11,41312)
CheckMemberSize(struct _GError,message,8,11,41313)
CheckOffset(struct _GError,message,8,11,41313)
#elif __ia64__
CheckTypeSize(struct _GError,16, 11411, 3)
CheckMemberSize(struct _GError,code,4,3,41312)
CheckOffset(struct _GError,code,4,3,41312)
CheckMemberSize(struct _GError,message,8,3,41313)
CheckOffset(struct _GError,message,8,3,41313)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GError,12, 11411, 6)
CheckMemberSize(struct _GError,code,4,6,41312)
CheckOffset(struct _GError,code,4,6,41312)
CheckMemberSize(struct _GError,message,4,6,41313)
CheckOffset(struct _GError,message,8,6,41313)
#elif __powerpc64__
CheckTypeSize(struct _GError,16, 11411, 9)
CheckMemberSize(struct _GError,code,4,9,41312)
CheckOffset(struct _GError,code,4,9,41312)
CheckMemberSize(struct _GError,message,8,9,41313)
CheckOffset(struct _GError,message,8,9,41313)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GError,12, 11411, 10)
CheckMemberSize(struct _GError,code,4,10,41312)
CheckOffset(struct _GError,code,4,10,41312)
CheckMemberSize(struct _GError,message,4,10,41313)
CheckOffset(struct _GError,message,8,10,41313)
#elif __s390x__
CheckTypeSize(struct _GError,16, 11411, 12)
CheckMemberSize(struct _GError,code,4,12,41312)
CheckOffset(struct _GError,code,4,12,41312)
CheckMemberSize(struct _GError,message,8,12,41313)
CheckOffset(struct _GError,message,8,12,41313)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11411,0);
Msg("Find size of _GError (11411)\n");
#endif

#if __i386__
CheckTypeSize(guint32,4, 11412, 2)
#elif __x86_64__
CheckTypeSize(guint32,4, 11412, 11)
#elif __ia64__
CheckTypeSize(guint32,4, 11412, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint32,4, 11412, 6)
#elif __powerpc64__
CheckTypeSize(guint32,4, 11412, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guint32,4, 11412, 10)
#elif __s390x__
CheckTypeSize(guint32,4, 11412, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11412,0);
Msg("Find size of guint32 (11412)\n");
#endif

#if __i386__
CheckTypeSize(GQuark,4, 11413, 2)
#elif __x86_64__
CheckTypeSize(GQuark,4, 11413, 11)
#elif __ia64__
CheckTypeSize(GQuark,4, 11413, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GQuark,4, 11413, 6)
#elif __powerpc64__
CheckTypeSize(GQuark,4, 11413, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GQuark,4, 11413, 10)
#elif __s390x__
CheckTypeSize(GQuark,4, 11413, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11413,0);
Msg("Find size of GQuark (11413)\n");
#endif

#if __i386__
CheckTypeSize(gchar,1, 11414, 2)
#elif __x86_64__
CheckTypeSize(gchar,1, 11414, 11)
#elif __ia64__
CheckTypeSize(gchar,1, 11414, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gchar,1, 11414, 6)
#elif __powerpc64__
CheckTypeSize(gchar,1, 11414, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gchar,1, 11414, 10)
#elif __s390x__
CheckTypeSize(gchar,1, 11414, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11414,0);
Msg("Find size of gchar (11414)\n");
#endif

#if __i386__
CheckTypeSize(gchar *,4, 11415, 2)
#elif __x86_64__
CheckTypeSize(gchar *,8, 11415, 11)
#elif __ia64__
CheckTypeSize(gchar *,8, 11415, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gchar *,4, 11415, 6)
#elif __powerpc64__
CheckTypeSize(gchar *,8, 11415, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gchar *,4, 11415, 10)
#elif __s390x__
CheckTypeSize(gchar *,8, 11415, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11415,0);
Msg("Find size of gchar * (11415)\n");
#endif

#if __i386__
CheckTypeSize(GError,12, 11416, 2)
#elif __x86_64__
CheckTypeSize(GError,16, 11416, 11)
#elif __ia64__
CheckTypeSize(GError,16, 11416, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GError,12, 11416, 6)
#elif __powerpc64__
CheckTypeSize(GError,16, 11416, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GError,12, 11416, 10)
#elif __s390x__
CheckTypeSize(GError,16, 11416, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11416,0);
Msg("Find size of GError (11416)\n");
#endif

#if __i386__
CheckTypeSize(GError *,4, 11417, 2)
#elif __x86_64__
CheckTypeSize(GError *,8, 11417, 11)
#elif __ia64__
CheckTypeSize(GError *,8, 11417, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GError *,4, 11417, 6)
#elif __powerpc64__
CheckTypeSize(GError *,8, 11417, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GError *,4, 11417, 10)
#elif __s390x__
CheckTypeSize(GError *,8, 11417, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11417,0);
Msg("Find size of GError * (11417)\n");
#endif

#if __i386__
CheckTypeSize(const GError,12, 11418, 2)
#elif __x86_64__
CheckTypeSize(const GError,16, 11418, 11)
#elif __ia64__
CheckTypeSize(const GError,16, 11418, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GError,12, 11418, 6)
#elif __powerpc64__
CheckTypeSize(const GError,16, 11418, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GError,12, 11418, 10)
#elif __s390x__
CheckTypeSize(const GError,16, 11418, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11418,0);
Msg("Find size of const GError (11418)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11419,0);
Msg("Find size of const GError * (11419)\n");
#endif

#if __i386__
CheckTypeSize(const gchar,1, 11420, 2)
#elif __x86_64__
CheckTypeSize(const gchar,1, 11420, 11)
#elif __ia64__
CheckTypeSize(const gchar,1, 11420, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const gchar,1, 11420, 6)
#elif __powerpc64__
CheckTypeSize(const gchar,1, 11420, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const gchar,1, 11420, 10)
#elif __s390x__
CheckTypeSize(const gchar,1, 11420, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11420,0);
Msg("Find size of const gchar (11420)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11421,0);
Msg("Find size of const gchar * (11421)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11422,0);
Msg("Find size of fptr_glib_92 (11422)\n");
#endif

#if __i386__
CheckTypeSize(GPrintFunc,4, 11423, 2)
#elif __x86_64__
CheckTypeSize(GPrintFunc,8, 11423, 11)
#elif __ia64__
CheckTypeSize(GPrintFunc,8, 11423, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPrintFunc,4, 11423, 6)
#elif __powerpc64__
CheckTypeSize(GPrintFunc,8, 11423, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPrintFunc,4, 11423, 10)
#elif __s390x__
CheckTypeSize(GPrintFunc,8, 11423, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11423,0);
Msg("Find size of GPrintFunc (11423)\n");
#endif

#if __i386__
CheckTypeSize(GMemChunk,0, 11425, 2)
#elif __x86_64__
CheckTypeSize(GMemChunk,0, 11425, 11)
#elif __ia64__
CheckTypeSize(GMemChunk,0, 11425, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11425,0);
Msg("Find size of GMemChunk (11425)\n");
#endif

#if __i386__
CheckTypeSize(GMemChunk *,4, 11426, 2)
#elif __x86_64__
CheckTypeSize(GMemChunk *,8, 11426, 11)
#elif __ia64__
CheckTypeSize(GMemChunk *,8, 11426, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMemChunk *,4, 11426, 6)
#elif __powerpc64__
CheckTypeSize(GMemChunk *,8, 11426, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMemChunk *,4, 11426, 10)
#elif __s390x__
CheckTypeSize(GMemChunk *,8, 11426, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11426,0);
Msg("Find size of GMemChunk * (11426)\n");
#endif

#if __i386__
CheckTypeSize(gulong,4, 11427, 2)
#elif __x86_64__
CheckTypeSize(gulong,8, 11427, 11)
#elif __ia64__
CheckTypeSize(gulong,8, 11427, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gulong,4, 11427, 6)
#elif __powerpc64__
CheckTypeSize(gulong,8, 11427, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gulong,4, 11427, 10)
#elif __s390x__
CheckTypeSize(gulong,8, 11427, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11427,0);
Msg("Find size of gulong (11427)\n");
#endif

#if __i386__
CheckTypeSize(struct _GList,12, 11428, 2)
CheckMemberSize(struct _GList,next,4,2,41316)
CheckOffset(struct _GList,next,4,2,41316)
CheckMemberSize(struct _GList,prev,4,2,41317)
CheckOffset(struct _GList,prev,8,2,41317)
#elif __x86_64__
CheckTypeSize(struct _GList,24, 11428, 11)
CheckMemberSize(struct _GList,next,8,11,41316)
CheckOffset(struct _GList,next,8,11,41316)
CheckMemberSize(struct _GList,prev,8,11,41317)
CheckOffset(struct _GList,prev,16,11,41317)
#elif __ia64__
CheckTypeSize(struct _GList,24, 11428, 3)
CheckMemberSize(struct _GList,next,8,3,41316)
CheckOffset(struct _GList,next,8,3,41316)
CheckMemberSize(struct _GList,prev,8,3,41317)
CheckOffset(struct _GList,prev,16,3,41317)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GList,12, 11428, 6)
CheckMemberSize(struct _GList,next,4,6,41316)
CheckOffset(struct _GList,next,4,6,41316)
CheckMemberSize(struct _GList,prev,4,6,41317)
CheckOffset(struct _GList,prev,8,6,41317)
#elif __powerpc64__
CheckTypeSize(struct _GList,24, 11428, 9)
CheckMemberSize(struct _GList,next,8,9,41316)
CheckOffset(struct _GList,next,8,9,41316)
CheckMemberSize(struct _GList,prev,8,9,41317)
CheckOffset(struct _GList,prev,16,9,41317)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GList,12, 11428, 10)
CheckMemberSize(struct _GList,next,4,10,41316)
CheckOffset(struct _GList,next,4,10,41316)
CheckMemberSize(struct _GList,prev,4,10,41317)
CheckOffset(struct _GList,prev,8,10,41317)
#elif __s390x__
CheckTypeSize(struct _GList,24, 11428, 12)
CheckMemberSize(struct _GList,next,8,12,41316)
CheckOffset(struct _GList,next,8,12,41316)
CheckMemberSize(struct _GList,prev,8,12,41317)
CheckOffset(struct _GList,prev,16,12,41317)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11428,0);
Msg("Find size of _GList (11428)\n");
#endif

#if __i386__
CheckTypeSize(GList,12, 11429, 2)
#elif __x86_64__
CheckTypeSize(GList,24, 11429, 11)
#elif __ia64__
CheckTypeSize(GList,24, 11429, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GList,12, 11429, 6)
#elif __powerpc64__
CheckTypeSize(GList,24, 11429, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GList,12, 11429, 10)
#elif __s390x__
CheckTypeSize(GList,24, 11429, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11429,0);
Msg("Find size of GList (11429)\n");
#endif

#if __i386__
CheckTypeSize(GList *,4, 11430, 2)
#elif __x86_64__
CheckTypeSize(GList *,8, 11430, 11)
#elif __ia64__
CheckTypeSize(GList *,8, 11430, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GList *,4, 11430, 6)
#elif __powerpc64__
CheckTypeSize(GList *,8, 11430, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GList *,4, 11430, 10)
#elif __s390x__
CheckTypeSize(GList *,8, 11430, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11430,0);
Msg("Find size of GList * (11430)\n");
#endif

#if __i386__
CheckTypeSize(GMainLoop,0, 11432, 2)
#elif __x86_64__
CheckTypeSize(GMainLoop,0, 11432, 11)
#elif __ia64__
CheckTypeSize(GMainLoop,0, 11432, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11432,0);
Msg("Find size of GMainLoop (11432)\n");
#endif

#if __i386__
CheckTypeSize(GMainLoop *,4, 11433, 2)
#elif __x86_64__
CheckTypeSize(GMainLoop *,8, 11433, 11)
#elif __ia64__
CheckTypeSize(GMainLoop *,8, 11433, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMainLoop *,4, 11433, 6)
#elif __powerpc64__
CheckTypeSize(GMainLoop *,8, 11433, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMainLoop *,4, 11433, 10)
#elif __s390x__
CheckTypeSize(GMainLoop *,8, 11433, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11433,0);
Msg("Find size of GMainLoop * (11433)\n");
#endif

#if __i386__
CheckTypeSize(struct _GHookList,28, 11434, 2)
CheckMemberSize(struct _GHookList,hooks,4,2,41330)
CheckOffset(struct _GHookList,hooks,8,2,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,4,2,41331)
CheckOffset(struct _GHookList,hook_memchunk,12,2,41331)
CheckMemberSize(struct _GHookList,finalize_hook,4,2,41334)
CheckOffset(struct _GHookList,finalize_hook,16,2,41334)
CheckMemberSize(struct _GHookList,dummy,8,2,41335)
CheckOffset(struct _GHookList,dummy,20,2,41335)
#elif __x86_64__
CheckTypeSize(struct _GHookList,56, 11434, 11)
CheckMemberSize(struct _GHookList,hooks,8,11,41330)
CheckOffset(struct _GHookList,hooks,16,11,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,8,11,41331)
CheckOffset(struct _GHookList,hook_memchunk,24,11,41331)
CheckMemberSize(struct _GHookList,finalize_hook,8,11,41334)
CheckOffset(struct _GHookList,finalize_hook,32,11,41334)
CheckMemberSize(struct _GHookList,dummy,16,11,41335)
CheckOffset(struct _GHookList,dummy,40,11,41335)
#elif __ia64__
CheckTypeSize(struct _GHookList,56, 11434, 3)
CheckMemberSize(struct _GHookList,hooks,8,3,41330)
CheckOffset(struct _GHookList,hooks,16,3,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,8,3,41331)
CheckOffset(struct _GHookList,hook_memchunk,24,3,41331)
CheckMemberSize(struct _GHookList,finalize_hook,8,3,41334)
CheckOffset(struct _GHookList,finalize_hook,32,3,41334)
CheckMemberSize(struct _GHookList,dummy,16,3,41335)
CheckOffset(struct _GHookList,dummy,40,3,41335)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GHookList,28, 11434, 6)
CheckMemberSize(struct _GHookList,hooks,4,6,41330)
CheckOffset(struct _GHookList,hooks,8,6,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,4,6,41331)
CheckOffset(struct _GHookList,hook_memchunk,12,6,41331)
CheckMemberSize(struct _GHookList,finalize_hook,4,6,41334)
CheckOffset(struct _GHookList,finalize_hook,16,6,41334)
CheckMemberSize(struct _GHookList,dummy,8,6,41335)
CheckOffset(struct _GHookList,dummy,20,6,41335)
#elif __powerpc64__
CheckTypeSize(struct _GHookList,56, 11434, 9)
CheckMemberSize(struct _GHookList,hooks,8,9,41330)
CheckOffset(struct _GHookList,hooks,16,9,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,8,9,41331)
CheckOffset(struct _GHookList,hook_memchunk,24,9,41331)
CheckMemberSize(struct _GHookList,finalize_hook,8,9,41334)
CheckOffset(struct _GHookList,finalize_hook,32,9,41334)
CheckMemberSize(struct _GHookList,dummy,16,9,41335)
CheckOffset(struct _GHookList,dummy,40,9,41335)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GHookList,28, 11434, 10)
CheckMemberSize(struct _GHookList,hooks,4,10,41330)
CheckOffset(struct _GHookList,hooks,8,10,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,4,10,41331)
CheckOffset(struct _GHookList,hook_memchunk,12,10,41331)
CheckMemberSize(struct _GHookList,finalize_hook,4,10,41334)
CheckOffset(struct _GHookList,finalize_hook,16,10,41334)
CheckMemberSize(struct _GHookList,dummy,8,10,41335)
CheckOffset(struct _GHookList,dummy,20,10,41335)
#elif __s390x__
CheckTypeSize(struct _GHookList,56, 11434, 12)
CheckMemberSize(struct _GHookList,hooks,8,12,41330)
CheckOffset(struct _GHookList,hooks,16,12,41330)
CheckMemberSize(struct _GHookList,hook_memchunk,8,12,41331)
CheckOffset(struct _GHookList,hook_memchunk,24,12,41331)
CheckMemberSize(struct _GHookList,finalize_hook,8,12,41334)
CheckOffset(struct _GHookList,finalize_hook,32,12,41334)
CheckMemberSize(struct _GHookList,dummy,16,12,41335)
CheckOffset(struct _GHookList,dummy,40,12,41335)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11434,0);
Msg("Find size of _GHookList (11434)\n");
#endif

#if __i386__
CheckTypeSize(struct _GHook,32, 11435, 2)
CheckMemberSize(struct _GHook,next,4,2,41322)
CheckOffset(struct _GHook,next,4,2,41322)
CheckMemberSize(struct _GHook,prev,4,2,41323)
CheckOffset(struct _GHook,prev,8,2,41323)
CheckMemberSize(struct _GHook,ref_count,4,2,41324)
CheckOffset(struct _GHook,ref_count,12,2,41324)
CheckMemberSize(struct _GHook,hook_id,4,2,41325)
CheckOffset(struct _GHook,hook_id,16,2,41325)
CheckMemberSize(struct _GHook,flags,4,2,41326)
CheckOffset(struct _GHook,flags,20,2,41326)
CheckMemberSize(struct _GHook,func,4,2,41327)
CheckOffset(struct _GHook,func,24,2,41327)
CheckMemberSize(struct _GHook,destroy,4,2,41329)
CheckOffset(struct _GHook,destroy,28,2,41329)
#elif __x86_64__
CheckTypeSize(struct _GHook,64, 11435, 11)
CheckMemberSize(struct _GHook,next,8,11,41322)
CheckOffset(struct _GHook,next,8,11,41322)
CheckMemberSize(struct _GHook,prev,8,11,41323)
CheckOffset(struct _GHook,prev,16,11,41323)
CheckMemberSize(struct _GHook,ref_count,4,11,41324)
CheckOffset(struct _GHook,ref_count,24,11,41324)
CheckMemberSize(struct _GHook,hook_id,8,11,41325)
CheckOffset(struct _GHook,hook_id,32,11,41325)
CheckMemberSize(struct _GHook,flags,4,11,41326)
CheckOffset(struct _GHook,flags,40,11,41326)
CheckMemberSize(struct _GHook,func,8,11,41327)
CheckOffset(struct _GHook,func,48,11,41327)
CheckMemberSize(struct _GHook,destroy,8,11,41329)
CheckOffset(struct _GHook,destroy,56,11,41329)
#elif __ia64__
CheckTypeSize(struct _GHook,64, 11435, 3)
CheckMemberSize(struct _GHook,next,8,3,41322)
CheckOffset(struct _GHook,next,8,3,41322)
CheckMemberSize(struct _GHook,prev,8,3,41323)
CheckOffset(struct _GHook,prev,16,3,41323)
CheckMemberSize(struct _GHook,ref_count,4,3,41324)
CheckOffset(struct _GHook,ref_count,24,3,41324)
CheckMemberSize(struct _GHook,hook_id,8,3,41325)
CheckOffset(struct _GHook,hook_id,32,3,41325)
CheckMemberSize(struct _GHook,flags,4,3,41326)
CheckOffset(struct _GHook,flags,40,3,41326)
CheckMemberSize(struct _GHook,func,8,3,41327)
CheckOffset(struct _GHook,func,48,3,41327)
CheckMemberSize(struct _GHook,destroy,8,3,41329)
CheckOffset(struct _GHook,destroy,56,3,41329)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GHook,32, 11435, 6)
CheckMemberSize(struct _GHook,next,4,6,41322)
CheckOffset(struct _GHook,next,4,6,41322)
CheckMemberSize(struct _GHook,prev,4,6,41323)
CheckOffset(struct _GHook,prev,8,6,41323)
CheckMemberSize(struct _GHook,ref_count,4,6,41324)
CheckOffset(struct _GHook,ref_count,12,6,41324)
CheckMemberSize(struct _GHook,hook_id,4,6,41325)
CheckOffset(struct _GHook,hook_id,16,6,41325)
CheckMemberSize(struct _GHook,flags,4,6,41326)
CheckOffset(struct _GHook,flags,20,6,41326)
CheckMemberSize(struct _GHook,func,4,6,41327)
CheckOffset(struct _GHook,func,24,6,41327)
CheckMemberSize(struct _GHook,destroy,4,6,41329)
CheckOffset(struct _GHook,destroy,28,6,41329)
#elif __powerpc64__
CheckTypeSize(struct _GHook,64, 11435, 9)
CheckMemberSize(struct _GHook,next,8,9,41322)
CheckOffset(struct _GHook,next,8,9,41322)
CheckMemberSize(struct _GHook,prev,8,9,41323)
CheckOffset(struct _GHook,prev,16,9,41323)
CheckMemberSize(struct _GHook,ref_count,4,9,41324)
CheckOffset(struct _GHook,ref_count,24,9,41324)
CheckMemberSize(struct _GHook,hook_id,8,9,41325)
CheckOffset(struct _GHook,hook_id,32,9,41325)
CheckMemberSize(struct _GHook,flags,4,9,41326)
CheckOffset(struct _GHook,flags,40,9,41326)
CheckMemberSize(struct _GHook,func,8,9,41327)
CheckOffset(struct _GHook,func,48,9,41327)
CheckMemberSize(struct _GHook,destroy,8,9,41329)
CheckOffset(struct _GHook,destroy,56,9,41329)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GHook,32, 11435, 10)
CheckMemberSize(struct _GHook,next,4,10,41322)
CheckOffset(struct _GHook,next,4,10,41322)
CheckMemberSize(struct _GHook,prev,4,10,41323)
CheckOffset(struct _GHook,prev,8,10,41323)
CheckMemberSize(struct _GHook,ref_count,4,10,41324)
CheckOffset(struct _GHook,ref_count,12,10,41324)
CheckMemberSize(struct _GHook,hook_id,4,10,41325)
CheckOffset(struct _GHook,hook_id,16,10,41325)
CheckMemberSize(struct _GHook,flags,4,10,41326)
CheckOffset(struct _GHook,flags,20,10,41326)
CheckMemberSize(struct _GHook,func,4,10,41327)
CheckOffset(struct _GHook,func,24,10,41327)
CheckMemberSize(struct _GHook,destroy,4,10,41329)
CheckOffset(struct _GHook,destroy,28,10,41329)
#elif __s390x__
CheckTypeSize(struct _GHook,64, 11435, 12)
CheckMemberSize(struct _GHook,next,8,12,41322)
CheckOffset(struct _GHook,next,8,12,41322)
CheckMemberSize(struct _GHook,prev,8,12,41323)
CheckOffset(struct _GHook,prev,16,12,41323)
CheckMemberSize(struct _GHook,ref_count,4,12,41324)
CheckOffset(struct _GHook,ref_count,24,12,41324)
CheckMemberSize(struct _GHook,hook_id,8,12,41325)
CheckOffset(struct _GHook,hook_id,32,12,41325)
CheckMemberSize(struct _GHook,flags,4,12,41326)
CheckOffset(struct _GHook,flags,40,12,41326)
CheckMemberSize(struct _GHook,func,8,12,41327)
CheckOffset(struct _GHook,func,48,12,41327)
CheckMemberSize(struct _GHook,destroy,8,12,41329)
CheckOffset(struct _GHook,destroy,56,12,41329)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11435,0);
Msg("Find size of _GHook (11435)\n");
#endif

#if __i386__
CheckTypeSize(GHook,32, 11436, 2)
#elif __x86_64__
CheckTypeSize(GHook,64, 11436, 11)
#elif __ia64__
CheckTypeSize(GHook,64, 11436, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHook,32, 11436, 6)
#elif __powerpc64__
CheckTypeSize(GHook,64, 11436, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHook,32, 11436, 10)
#elif __s390x__
CheckTypeSize(GHook,64, 11436, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11436,0);
Msg("Find size of GHook (11436)\n");
#endif

#if __i386__
CheckTypeSize(GHook *,4, 11437, 2)
#elif __x86_64__
CheckTypeSize(GHook *,8, 11437, 11)
#elif __ia64__
CheckTypeSize(GHook *,8, 11437, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHook *,4, 11437, 6)
#elif __powerpc64__
CheckTypeSize(GHook *,8, 11437, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHook *,4, 11437, 10)
#elif __s390x__
CheckTypeSize(GHook *,8, 11437, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11437,0);
Msg("Find size of GHook * (11437)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11438,0);
Msg("Find size of fptr_glib_390 (11438)\n");
#endif

#if __i386__
CheckTypeSize(GDestroyNotify,4, 11439, 2)
#elif __x86_64__
CheckTypeSize(GDestroyNotify,8, 11439, 11)
#elif __ia64__
CheckTypeSize(GDestroyNotify,8, 11439, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDestroyNotify,4, 11439, 6)
#elif __powerpc64__
CheckTypeSize(GDestroyNotify,8, 11439, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDestroyNotify,4, 11439, 10)
#elif __s390x__
CheckTypeSize(GDestroyNotify,8, 11439, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11439,0);
Msg("Find size of GDestroyNotify (11439)\n");
#endif

#if __i386__
CheckTypeSize(GHookList,28, 11440, 2)
#elif __x86_64__
CheckTypeSize(GHookList,56, 11440, 11)
#elif __ia64__
CheckTypeSize(GHookList,56, 11440, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookList,28, 11440, 6)
#elif __powerpc64__
CheckTypeSize(GHookList,56, 11440, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookList,28, 11440, 10)
#elif __s390x__
CheckTypeSize(GHookList,56, 11440, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11440,0);
Msg("Find size of GHookList (11440)\n");
#endif

#if __i386__
CheckTypeSize(GHookList *,4, 11441, 2)
#elif __x86_64__
CheckTypeSize(GHookList *,8, 11441, 11)
#elif __ia64__
CheckTypeSize(GHookList *,8, 11441, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookList *,4, 11441, 6)
#elif __powerpc64__
CheckTypeSize(GHookList *,8, 11441, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookList *,4, 11441, 10)
#elif __s390x__
CheckTypeSize(GHookList *,8, 11441, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11441,0);
Msg("Find size of GHookList * (11441)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11442,0);
Msg("Find size of fptr_glib_232 (11442)\n");
#endif

#if __i386__
CheckTypeSize(GHookFinalizeFunc,4, 11443, 2)
#elif __x86_64__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 11)
#elif __ia64__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookFinalizeFunc,4, 11443, 6)
#elif __powerpc64__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookFinalizeFunc,4, 11443, 10)
#elif __s390x__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11443,0);
Msg("Find size of GHookFinalizeFunc (11443)\n");
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11445,0);
Msg("Find size of const gchar * * (11445)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11446,0);
Msg("Find size of const gchar * * * (11446)\n");
#endif

#if __i386__
CheckTypeSize(struct _GQueue,12, 11447, 2)
CheckMemberSize(struct _GQueue,tail,4,2,41337)
CheckOffset(struct _GQueue,tail,4,2,41337)
CheckMemberSize(struct _GQueue,length,4,2,41338)
CheckOffset(struct _GQueue,length,8,2,41338)
#elif __x86_64__
CheckTypeSize(struct _GQueue,24, 11447, 11)
CheckMemberSize(struct _GQueue,tail,8,11,41337)
CheckOffset(struct _GQueue,tail,8,11,41337)
CheckMemberSize(struct _GQueue,length,4,11,41338)
CheckOffset(struct _GQueue,length,16,11,41338)
#elif __ia64__
CheckTypeSize(struct _GQueue,24, 11447, 3)
CheckMemberSize(struct _GQueue,tail,8,3,41337)
CheckOffset(struct _GQueue,tail,8,3,41337)
CheckMemberSize(struct _GQueue,length,4,3,41338)
CheckOffset(struct _GQueue,length,16,3,41338)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GQueue,12, 11447, 6)
CheckMemberSize(struct _GQueue,tail,4,6,41337)
CheckOffset(struct _GQueue,tail,4,6,41337)
CheckMemberSize(struct _GQueue,length,4,6,41338)
CheckOffset(struct _GQueue,length,8,6,41338)
#elif __powerpc64__
CheckTypeSize(struct _GQueue,24, 11447, 9)
CheckMemberSize(struct _GQueue,tail,8,9,41337)
CheckOffset(struct _GQueue,tail,8,9,41337)
CheckMemberSize(struct _GQueue,length,4,9,41338)
CheckOffset(struct _GQueue,length,16,9,41338)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GQueue,12, 11447, 10)
CheckMemberSize(struct _GQueue,tail,4,10,41337)
CheckOffset(struct _GQueue,tail,4,10,41337)
CheckMemberSize(struct _GQueue,length,4,10,41338)
CheckOffset(struct _GQueue,length,8,10,41338)
#elif __s390x__
CheckTypeSize(struct _GQueue,24, 11447, 12)
CheckMemberSize(struct _GQueue,tail,8,12,41337)
CheckOffset(struct _GQueue,tail,8,12,41337)
CheckMemberSize(struct _GQueue,length,4,12,41338)
CheckOffset(struct _GQueue,length,16,12,41338)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11447,0);
Msg("Find size of _GQueue (11447)\n");
#endif

#if __i386__
CheckTypeSize(GQueue,12, 11448, 2)
#elif __x86_64__
CheckTypeSize(GQueue,24, 11448, 11)
#elif __ia64__
CheckTypeSize(GQueue,24, 11448, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GQueue,12, 11448, 6)
#elif __powerpc64__
CheckTypeSize(GQueue,24, 11448, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GQueue,12, 11448, 10)
#elif __s390x__
CheckTypeSize(GQueue,24, 11448, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11448,0);
Msg("Find size of GQueue (11448)\n");
#endif

#if __i386__
CheckTypeSize(GQueue *,4, 11449, 2)
#elif __x86_64__
CheckTypeSize(GQueue *,8, 11449, 11)
#elif __ia64__
CheckTypeSize(GQueue *,8, 11449, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GQueue *,4, 11449, 6)
#elif __powerpc64__
CheckTypeSize(GQueue *,8, 11449, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GQueue *,4, 11449, 10)
#elif __s390x__
CheckTypeSize(GQueue *,8, 11449, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11449,0);
Msg("Find size of GQueue * (11449)\n");
#endif

#if __i386__
CheckTypeSize(struct _GSList,8, 11450, 2)
CheckMemberSize(struct _GSList,next,4,2,41340)
CheckOffset(struct _GSList,next,4,2,41340)
#elif __x86_64__
CheckTypeSize(struct _GSList,16, 11450, 11)
CheckMemberSize(struct _GSList,next,8,11,41340)
CheckOffset(struct _GSList,next,8,11,41340)
#elif __ia64__
CheckTypeSize(struct _GSList,16, 11450, 3)
CheckMemberSize(struct _GSList,next,8,3,41340)
CheckOffset(struct _GSList,next,8,3,41340)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GSList,8, 11450, 6)
CheckMemberSize(struct _GSList,next,4,6,41340)
CheckOffset(struct _GSList,next,4,6,41340)
#elif __powerpc64__
CheckTypeSize(struct _GSList,16, 11450, 9)
CheckMemberSize(struct _GSList,next,8,9,41340)
CheckOffset(struct _GSList,next,8,9,41340)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GSList,8, 11450, 10)
CheckMemberSize(struct _GSList,next,4,10,41340)
CheckOffset(struct _GSList,next,4,10,41340)
#elif __s390x__
CheckTypeSize(struct _GSList,16, 11450, 12)
CheckMemberSize(struct _GSList,next,8,12,41340)
CheckOffset(struct _GSList,next,8,12,41340)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11450,0);
Msg("Find size of _GSList (11450)\n");
#endif

#if __i386__
CheckTypeSize(GSList,8, 11451, 2)
#elif __x86_64__
CheckTypeSize(GSList,16, 11451, 11)
#elif __ia64__
CheckTypeSize(GSList,16, 11451, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSList,8, 11451, 6)
#elif __powerpc64__
CheckTypeSize(GSList,16, 11451, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSList,8, 11451, 10)
#elif __s390x__
CheckTypeSize(GSList,16, 11451, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11451,0);
Msg("Find size of GSList (11451)\n");
#endif

#if __i386__
CheckTypeSize(GSList *,4, 11452, 2)
#elif __x86_64__
CheckTypeSize(GSList *,8, 11452, 11)
#elif __ia64__
CheckTypeSize(GSList *,8, 11452, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSList *,4, 11452, 6)
#elif __powerpc64__
CheckTypeSize(GSList *,8, 11452, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSList *,4, 11452, 10)
#elif __s390x__
CheckTypeSize(GSList *,8, 11452, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11452,0);
Msg("Find size of GSList * (11452)\n");
#endif

#if __i386__
CheckTypeSize(struct _GString,12, 11453, 2)
CheckMemberSize(struct _GString,len,4,2,41342)
CheckOffset(struct _GString,len,4,2,41342)
CheckMemberSize(struct _GString,allocated_len,4,2,41343)
CheckOffset(struct _GString,allocated_len,8,2,41343)
#elif __x86_64__
CheckTypeSize(struct _GString,24, 11453, 11)
CheckMemberSize(struct _GString,len,8,11,41342)
CheckOffset(struct _GString,len,8,11,41342)
CheckMemberSize(struct _GString,allocated_len,8,11,41343)
CheckOffset(struct _GString,allocated_len,16,11,41343)
#elif __ia64__
CheckTypeSize(struct _GString,24, 11453, 3)
CheckMemberSize(struct _GString,len,8,3,41342)
CheckOffset(struct _GString,len,8,3,41342)
CheckMemberSize(struct _GString,allocated_len,8,3,41343)
CheckOffset(struct _GString,allocated_len,16,3,41343)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GString,12, 11453, 6)
CheckMemberSize(struct _GString,len,4,6,41342)
CheckOffset(struct _GString,len,4,6,41342)
CheckMemberSize(struct _GString,allocated_len,4,6,41343)
CheckOffset(struct _GString,allocated_len,8,6,41343)
#elif __powerpc64__
CheckTypeSize(struct _GString,24, 11453, 9)
CheckMemberSize(struct _GString,len,8,9,41342)
CheckOffset(struct _GString,len,8,9,41342)
CheckMemberSize(struct _GString,allocated_len,8,9,41343)
CheckOffset(struct _GString,allocated_len,16,9,41343)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GString,12, 11453, 10)
CheckMemberSize(struct _GString,len,4,10,41342)
CheckOffset(struct _GString,len,4,10,41342)
CheckMemberSize(struct _GString,allocated_len,4,10,41343)
CheckOffset(struct _GString,allocated_len,8,10,41343)
#elif __s390x__
CheckTypeSize(struct _GString,24, 11453, 12)
CheckMemberSize(struct _GString,len,8,12,41342)
CheckOffset(struct _GString,len,8,12,41342)
CheckMemberSize(struct _GString,allocated_len,8,12,41343)
CheckOffset(struct _GString,allocated_len,16,12,41343)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11453,0);
Msg("Find size of _GString (11453)\n");
#endif

#if __i386__
CheckTypeSize(gsize,4, 11454, 2)
#endif

#if __i386__
CheckTypeSize(GString,12, 11455, 2)
#elif __x86_64__
CheckTypeSize(GString,24, 11455, 11)
#elif __ia64__
CheckTypeSize(GString,24, 11455, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GString,12, 11455, 6)
#elif __powerpc64__
CheckTypeSize(GString,24, 11455, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GString,12, 11455, 10)
#elif __s390x__
CheckTypeSize(GString,24, 11455, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11455,0);
Msg("Find size of GString (11455)\n");
#endif

#if __i386__
CheckTypeSize(GString *,4, 11456, 2)
#elif __x86_64__
CheckTypeSize(GString *,8, 11456, 11)
#elif __ia64__
CheckTypeSize(GString *,8, 11456, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GString *,4, 11456, 6)
#elif __powerpc64__
CheckTypeSize(GString *,8, 11456, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GString *,4, 11456, 10)
#elif __s390x__
CheckTypeSize(GString *,8, 11456, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11456,0);
Msg("Find size of GString * (11456)\n");
#endif

#if __i386__
CheckTypeSize(struct _GPtrArray,8, 11457, 2)
CheckMemberSize(struct _GPtrArray,len,4,2,41345)
CheckOffset(struct _GPtrArray,len,4,2,41345)
#elif __x86_64__
CheckTypeSize(struct _GPtrArray,16, 11457, 11)
CheckMemberSize(struct _GPtrArray,len,4,11,41345)
CheckOffset(struct _GPtrArray,len,8,11,41345)
#elif __ia64__
CheckTypeSize(struct _GPtrArray,16, 11457, 3)
CheckMemberSize(struct _GPtrArray,len,4,3,41345)
CheckOffset(struct _GPtrArray,len,8,3,41345)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GPtrArray,8, 11457, 6)
CheckMemberSize(struct _GPtrArray,len,4,6,41345)
CheckOffset(struct _GPtrArray,len,4,6,41345)
#elif __powerpc64__
CheckTypeSize(struct _GPtrArray,16, 11457, 9)
CheckMemberSize(struct _GPtrArray,len,4,9,41345)
CheckOffset(struct _GPtrArray,len,8,9,41345)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GPtrArray,8, 11457, 10)
CheckMemberSize(struct _GPtrArray,len,4,10,41345)
CheckOffset(struct _GPtrArray,len,4,10,41345)
#elif __s390x__
CheckTypeSize(struct _GPtrArray,16, 11457, 12)
CheckMemberSize(struct _GPtrArray,len,4,12,41345)
CheckOffset(struct _GPtrArray,len,8,12,41345)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11457,0);
Msg("Find size of _GPtrArray (11457)\n");
#endif

#if __i386__
CheckTypeSize(gpointer *,4, 11458, 2)
#elif __x86_64__
CheckTypeSize(gpointer *,8, 11458, 11)
#elif __ia64__
CheckTypeSize(gpointer *,8, 11458, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gpointer *,4, 11458, 6)
#elif __powerpc64__
CheckTypeSize(gpointer *,8, 11458, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gpointer *,4, 11458, 10)
#elif __s390x__
CheckTypeSize(gpointer *,8, 11458, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11458,0);
Msg("Find size of gpointer * (11458)\n");
#endif

#if __i386__
CheckTypeSize(GPtrArray,8, 11459, 2)
#elif __x86_64__
CheckTypeSize(GPtrArray,16, 11459, 11)
#elif __ia64__
CheckTypeSize(GPtrArray,16, 11459, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPtrArray,8, 11459, 6)
#elif __powerpc64__
CheckTypeSize(GPtrArray,16, 11459, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPtrArray,8, 11459, 10)
#elif __s390x__
CheckTypeSize(GPtrArray,16, 11459, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11459,0);
Msg("Find size of GPtrArray (11459)\n");
#endif

#if __i386__
CheckTypeSize(GPtrArray *,4, 11460, 2)
#elif __x86_64__
CheckTypeSize(GPtrArray *,8, 11460, 11)
#elif __ia64__
CheckTypeSize(GPtrArray *,8, 11460, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPtrArray *,4, 11460, 6)
#elif __powerpc64__
CheckTypeSize(GPtrArray *,8, 11460, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPtrArray *,4, 11460, 10)
#elif __s390x__
CheckTypeSize(GPtrArray *,8, 11460, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11460,0);
Msg("Find size of GPtrArray * (11460)\n");
#endif

#if __i386__
CheckTypeSize(GRand,0, 11462, 2)
#elif __x86_64__
CheckTypeSize(GRand,0, 11462, 11)
#elif __ia64__
CheckTypeSize(GRand,0, 11462, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11462,0);
Msg("Find size of GRand (11462)\n");
#endif

#if __i386__
CheckTypeSize(GRand *,4, 11463, 2)
#elif __x86_64__
CheckTypeSize(GRand *,8, 11463, 11)
#elif __ia64__
CheckTypeSize(GRand *,8, 11463, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GRand *,4, 11463, 6)
#elif __powerpc64__
CheckTypeSize(GRand *,8, 11463, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GRand *,4, 11463, 10)
#elif __s390x__
CheckTypeSize(GRand *,8, 11463, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11463,0);
Msg("Find size of GRand * (11463)\n");
#endif

#if __i386__
CheckTypeSize(const guint32,4, 11464, 2)
#elif __x86_64__
CheckTypeSize(const guint32,4, 11464, 11)
#elif __ia64__
CheckTypeSize(const guint32,4, 11464, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const guint32,4, 11464, 6)
#elif __powerpc64__
CheckTypeSize(const guint32,4, 11464, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const guint32,4, 11464, 10)
#elif __s390x__
CheckTypeSize(const guint32,4, 11464, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11464,0);
Msg("Find size of const guint32 (11464)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11465,0);
Msg("Find size of const guint32 * (11465)\n");
#endif

#if __i386__
CheckTypeSize(GDir,0, 11467, 2)
#elif __x86_64__
CheckTypeSize(GDir,0, 11467, 11)
#elif __ia64__
CheckTypeSize(GDir,0, 11467, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11467,0);
Msg("Find size of GDir (11467)\n");
#endif

#if __i386__
CheckTypeSize(GDir *,4, 11468, 2)
#elif __x86_64__
CheckTypeSize(GDir *,8, 11468, 11)
#elif __ia64__
CheckTypeSize(GDir *,8, 11468, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDir *,4, 11468, 6)
#elif __powerpc64__
CheckTypeSize(GDir *,8, 11468, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDir *,4, 11468, 10)
#elif __s390x__
CheckTypeSize(GDir *,8, 11468, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11468,0);
Msg("Find size of GDir * (11468)\n");
#endif

#if __i386__
CheckTypeSize(const const gchar *,4, 11469, 2)
#elif __x86_64__
CheckTypeSize(const const gchar *,8, 11469, 11)
#elif __ia64__
CheckTypeSize(const const gchar *,8, 11469, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const const gchar *,4, 11469, 6)
#elif __powerpc64__
CheckTypeSize(const const gchar *,8, 11469, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const const gchar *,4, 11469, 10)
#elif __s390x__
CheckTypeSize(const const gchar *,8, 11469, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11469,0);
Msg("Find size of const const gchar * (11469)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11470,0);
Msg("Find size of const const gchar * * (11470)\n");
#endif

#if __i386__
CheckTypeSize(GRelation,0, 11472, 2)
#elif __x86_64__
CheckTypeSize(GRelation,0, 11472, 11)
#elif __ia64__
CheckTypeSize(GRelation,0, 11472, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11472,0);
Msg("Find size of GRelation (11472)\n");
#endif

#if __i386__
CheckTypeSize(GRelation *,4, 11473, 2)
#elif __x86_64__
CheckTypeSize(GRelation *,8, 11473, 11)
#elif __ia64__
CheckTypeSize(GRelation *,8, 11473, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GRelation *,4, 11473, 6)
#elif __powerpc64__
CheckTypeSize(GRelation *,8, 11473, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GRelation *,4, 11473, 10)
#elif __s390x__
CheckTypeSize(GRelation *,8, 11473, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11473,0);
Msg("Find size of GRelation * (11473)\n");
#endif

#if __i386__
CheckTypeSize(GOptionContext,0, 11475, 2)
#elif __x86_64__
CheckTypeSize(GOptionContext,0, 11475, 11)
#elif __ia64__
CheckTypeSize(GOptionContext,0, 11475, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11475,0);
Msg("Find size of GOptionContext (11475)\n");
#endif

#if __i386__
CheckTypeSize(GOptionContext *,4, 11476, 2)
#elif __x86_64__
CheckTypeSize(GOptionContext *,8, 11476, 11)
#elif __ia64__
CheckTypeSize(GOptionContext *,8, 11476, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionContext *,4, 11476, 6)
#elif __powerpc64__
CheckTypeSize(GOptionContext *,8, 11476, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionContext *,4, 11476, 10)
#elif __s390x__
CheckTypeSize(GOptionContext *,8, 11476, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11476,0);
Msg("Find size of GOptionContext * (11476)\n");
#endif

#if __i386__
CheckTypeSize(GKeyFile,0, 11478, 2)
#elif __x86_64__
CheckTypeSize(GKeyFile,0, 11478, 11)
#elif __ia64__
CheckTypeSize(GKeyFile,0, 11478, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11478,0);
Msg("Find size of GKeyFile (11478)\n");
#endif

#if __i386__
CheckTypeSize(GKeyFile *,4, 11479, 2)
#elif __x86_64__
CheckTypeSize(GKeyFile *,8, 11479, 11)
#elif __ia64__
CheckTypeSize(GKeyFile *,8, 11479, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GKeyFile *,4, 11479, 6)
#elif __powerpc64__
CheckTypeSize(GKeyFile *,8, 11479, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GKeyFile *,4, 11479, 10)
#elif __s390x__
CheckTypeSize(GKeyFile *,8, 11479, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11479,0);
Msg("Find size of GKeyFile * (11479)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11481,0);
Msg("Find size of GError * * (11481)\n");
#endif

#if __i386__
CheckTypeSize(GPatternSpec,0, 11483, 2)
#elif __x86_64__
CheckTypeSize(GPatternSpec,0, 11483, 11)
#elif __ia64__
CheckTypeSize(GPatternSpec,0, 11483, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11483,0);
Msg("Find size of GPatternSpec (11483)\n");
#endif

#if __i386__
CheckTypeSize(GPatternSpec *,4, 11484, 2)
#elif __x86_64__
CheckTypeSize(GPatternSpec *,8, 11484, 11)
#elif __ia64__
CheckTypeSize(GPatternSpec *,8, 11484, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPatternSpec *,4, 11484, 6)
#elif __powerpc64__
CheckTypeSize(GPatternSpec *,8, 11484, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPatternSpec *,4, 11484, 10)
#elif __s390x__
CheckTypeSize(GPatternSpec *,8, 11484, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11484,0);
Msg("Find size of GPatternSpec * (11484)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11485,0);
Msg("Find size of gchar * * (11485)\n");
#endif

#if __i386__
CheckTypeSize(gunichar,4, 11486, 2)
#elif __x86_64__
CheckTypeSize(gunichar,4, 11486, 11)
#elif __ia64__
CheckTypeSize(gunichar,4, 11486, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gunichar,4, 11486, 6)
#elif __powerpc64__
CheckTypeSize(gunichar,4, 11486, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gunichar,4, 11486, 10)
#elif __s390x__
CheckTypeSize(gunichar,4, 11486, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11486,0);
Msg("Find size of gunichar (11486)\n");
#endif

#if __i386__
CheckTypeSize(struct _GCompletion,20, 11487, 2)
CheckMemberSize(struct _GCompletion,func,4,2,41348)
CheckOffset(struct _GCompletion,func,4,2,41348)
CheckMemberSize(struct _GCompletion,prefix,4,2,41349)
CheckOffset(struct _GCompletion,prefix,8,2,41349)
CheckMemberSize(struct _GCompletion,cache,4,2,41350)
CheckOffset(struct _GCompletion,cache,12,2,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,4,2,41354)
CheckOffset(struct _GCompletion,strncmp_func,16,2,41354)
#elif __x86_64__
CheckTypeSize(struct _GCompletion,40, 11487, 11)
CheckMemberSize(struct _GCompletion,func,8,11,41348)
CheckOffset(struct _GCompletion,func,8,11,41348)
CheckMemberSize(struct _GCompletion,prefix,8,11,41349)
CheckOffset(struct _GCompletion,prefix,16,11,41349)
CheckMemberSize(struct _GCompletion,cache,8,11,41350)
CheckOffset(struct _GCompletion,cache,24,11,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,8,11,41354)
CheckOffset(struct _GCompletion,strncmp_func,32,11,41354)
#elif __ia64__
CheckTypeSize(struct _GCompletion,40, 11487, 3)
CheckMemberSize(struct _GCompletion,func,8,3,41348)
CheckOffset(struct _GCompletion,func,8,3,41348)
CheckMemberSize(struct _GCompletion,prefix,8,3,41349)
CheckOffset(struct _GCompletion,prefix,16,3,41349)
CheckMemberSize(struct _GCompletion,cache,8,3,41350)
CheckOffset(struct _GCompletion,cache,24,3,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,8,3,41354)
CheckOffset(struct _GCompletion,strncmp_func,32,3,41354)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GCompletion,20, 11487, 6)
CheckMemberSize(struct _GCompletion,func,4,6,41348)
CheckOffset(struct _GCompletion,func,4,6,41348)
CheckMemberSize(struct _GCompletion,prefix,4,6,41349)
CheckOffset(struct _GCompletion,prefix,8,6,41349)
CheckMemberSize(struct _GCompletion,cache,4,6,41350)
CheckOffset(struct _GCompletion,cache,12,6,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,4,6,41354)
CheckOffset(struct _GCompletion,strncmp_func,16,6,41354)
#elif __powerpc64__
CheckTypeSize(struct _GCompletion,40, 11487, 9)
CheckMemberSize(struct _GCompletion,func,8,9,41348)
CheckOffset(struct _GCompletion,func,8,9,41348)
CheckMemberSize(struct _GCompletion,prefix,8,9,41349)
CheckOffset(struct _GCompletion,prefix,16,9,41349)
CheckMemberSize(struct _GCompletion,cache,8,9,41350)
CheckOffset(struct _GCompletion,cache,24,9,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,8,9,41354)
CheckOffset(struct _GCompletion,strncmp_func,32,9,41354)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GCompletion,20, 11487, 10)
CheckMemberSize(struct _GCompletion,func,4,10,41348)
CheckOffset(struct _GCompletion,func,4,10,41348)
CheckMemberSize(struct _GCompletion,prefix,4,10,41349)
CheckOffset(struct _GCompletion,prefix,8,10,41349)
CheckMemberSize(struct _GCompletion,cache,4,10,41350)
CheckOffset(struct _GCompletion,cache,12,10,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,4,10,41354)
CheckOffset(struct _GCompletion,strncmp_func,16,10,41354)
#elif __s390x__
CheckTypeSize(struct _GCompletion,40, 11487, 12)
CheckMemberSize(struct _GCompletion,func,8,12,41348)
CheckOffset(struct _GCompletion,func,8,12,41348)
CheckMemberSize(struct _GCompletion,prefix,8,12,41349)
CheckOffset(struct _GCompletion,prefix,16,12,41349)
CheckMemberSize(struct _GCompletion,cache,8,12,41350)
CheckOffset(struct _GCompletion,cache,24,12,41350)
CheckMemberSize(struct _GCompletion,strncmp_func,8,12,41354)
CheckOffset(struct _GCompletion,strncmp_func,32,12,41354)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11487,0);
Msg("Find size of _GCompletion (11487)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11488,0);
Msg("Find size of fptr_glib_171 (11488)\n");
#endif

#if __i386__
CheckTypeSize(GCompletionFunc,4, 11489, 2)
#elif __x86_64__
CheckTypeSize(GCompletionFunc,8, 11489, 11)
#elif __ia64__
CheckTypeSize(GCompletionFunc,8, 11489, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCompletionFunc,4, 11489, 6)
#elif __powerpc64__
CheckTypeSize(GCompletionFunc,8, 11489, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCompletionFunc,4, 11489, 10)
#elif __s390x__
CheckTypeSize(GCompletionFunc,8, 11489, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11489,0);
Msg("Find size of GCompletionFunc (11489)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11490,0);
Msg("Find size of fptr_glib_268 (11490)\n");
#endif

#if __i386__
CheckTypeSize(GCompletionStrncmpFunc,4, 11491, 2)
#elif __x86_64__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 11)
#elif __ia64__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCompletionStrncmpFunc,4, 11491, 6)
#elif __powerpc64__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCompletionStrncmpFunc,4, 11491, 10)
#elif __s390x__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11491,0);
Msg("Find size of GCompletionStrncmpFunc (11491)\n");
#endif

#if __i386__
CheckTypeSize(GCompletion,20, 11492, 2)
#elif __x86_64__
CheckTypeSize(GCompletion,40, 11492, 11)
#elif __ia64__
CheckTypeSize(GCompletion,40, 11492, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCompletion,20, 11492, 6)
#elif __powerpc64__
CheckTypeSize(GCompletion,40, 11492, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCompletion,20, 11492, 10)
#elif __s390x__
CheckTypeSize(GCompletion,40, 11492, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11492,0);
Msg("Find size of GCompletion (11492)\n");
#endif

#if __i386__
CheckTypeSize(GCompletion *,4, 11493, 2)
#elif __x86_64__
CheckTypeSize(GCompletion *,8, 11493, 11)
#elif __ia64__
CheckTypeSize(GCompletion *,8, 11493, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCompletion *,4, 11493, 6)
#elif __powerpc64__
CheckTypeSize(GCompletion *,8, 11493, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCompletion *,4, 11493, 10)
#elif __s390x__
CheckTypeSize(GCompletion *,8, 11493, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11493,0);
Msg("Find size of GCompletion * (11493)\n");
#endif

#if __i386__
CheckTypeSize(GTimer,0, 11495, 2)
#elif __x86_64__
CheckTypeSize(GTimer,0, 11495, 11)
#elif __ia64__
CheckTypeSize(GTimer,0, 11495, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11495,0);
Msg("Find size of GTimer (11495)\n");
#endif

#if __i386__
CheckTypeSize(GTimer *,4, 11496, 2)
#elif __x86_64__
CheckTypeSize(GTimer *,8, 11496, 11)
#elif __ia64__
CheckTypeSize(GTimer *,8, 11496, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTimer *,4, 11496, 6)
#elif __powerpc64__
CheckTypeSize(GTimer *,8, 11496, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTimer *,4, 11496, 10)
#elif __s390x__
CheckTypeSize(GTimer *,8, 11496, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11496,0);
Msg("Find size of GTimer * (11496)\n");
#endif

#if __i386__
CheckTypeSize(GHashTable,0, 11498, 2)
#elif __x86_64__
CheckTypeSize(GHashTable,0, 11498, 11)
#elif __ia64__
CheckTypeSize(GHashTable,0, 11498, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11498,0);
Msg("Find size of GHashTable (11498)\n");
#endif

#if __i386__
CheckTypeSize(GHashTable *,4, 11499, 2)
#elif __x86_64__
CheckTypeSize(GHashTable *,8, 11499, 11)
#elif __ia64__
CheckTypeSize(GHashTable *,8, 11499, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHashTable *,4, 11499, 6)
#elif __powerpc64__
CheckTypeSize(GHashTable *,8, 11499, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHashTable *,4, 11499, 10)
#elif __s390x__
CheckTypeSize(GHashTable *,8, 11499, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11499,0);
Msg("Find size of GHashTable * (11499)\n");
#endif

#if __i386__
CheckTypeSize(gconstpointer,4, 11500, 2)
#elif __x86_64__
CheckTypeSize(gconstpointer,8, 11500, 11)
#elif __ia64__
CheckTypeSize(gconstpointer,8, 11500, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gconstpointer,4, 11500, 6)
#elif __powerpc64__
CheckTypeSize(gconstpointer,8, 11500, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gconstpointer,4, 11500, 10)
#elif __s390x__
CheckTypeSize(gconstpointer,8, 11500, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11500,0);
Msg("Find size of gconstpointer (11500)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11501,0);
Msg("Find size of fptr_glib_179 (11501)\n");
#endif

#if __i386__
CheckTypeSize(GHashFunc,4, 11502, 2)
#elif __x86_64__
CheckTypeSize(GHashFunc,8, 11502, 11)
#elif __ia64__
CheckTypeSize(GHashFunc,8, 11502, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHashFunc,4, 11502, 6)
#elif __powerpc64__
CheckTypeSize(GHashFunc,8, 11502, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHashFunc,4, 11502, 10)
#elif __s390x__
CheckTypeSize(GHashFunc,8, 11502, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11502,0);
Msg("Find size of GHashFunc (11502)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11503,0);
Msg("Find size of fptr_glib_344 (11503)\n");
#endif

#if __i386__
CheckTypeSize(GEqualFunc,4, 11504, 2)
#elif __x86_64__
CheckTypeSize(GEqualFunc,8, 11504, 11)
#elif __ia64__
CheckTypeSize(GEqualFunc,8, 11504, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GEqualFunc,4, 11504, 6)
#elif __powerpc64__
CheckTypeSize(GEqualFunc,8, 11504, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GEqualFunc,4, 11504, 10)
#elif __s390x__
CheckTypeSize(GEqualFunc,8, 11504, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11504,0);
Msg("Find size of GEqualFunc (11504)\n");
#endif

#if __i386__
CheckTypeSize(struct _GStaticRecMutex,40, 11505, 2)
CheckMemberSize(struct _GStaticRecMutex,depth,4,2,41365)
CheckOffset(struct _GStaticRecMutex,depth,28,2,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,2,41370)
CheckOffset(struct _GStaticRecMutex,owner,32,2,41370)
#elif __x86_64__
CheckTypeSize(struct _GStaticRecMutex,64, 11505, 11)
CheckMemberSize(struct _GStaticRecMutex,depth,4,11,41365)
CheckOffset(struct _GStaticRecMutex,depth,48,11,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,11,41370)
CheckOffset(struct _GStaticRecMutex,owner,56,11,41370)
#elif __ia64__
CheckTypeSize(struct _GStaticRecMutex,64, 11505, 3)
CheckMemberSize(struct _GStaticRecMutex,depth,4,3,41365)
CheckOffset(struct _GStaticRecMutex,depth,48,3,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,3,41370)
CheckOffset(struct _GStaticRecMutex,owner,56,3,41370)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GStaticRecMutex,48, 11505, 6)
CheckMemberSize(struct _GStaticRecMutex,depth,4,6,41365)
CheckOffset(struct _GStaticRecMutex,depth,32,6,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,6,41370)
CheckOffset(struct _GStaticRecMutex,owner,40,6,41370)
#elif __powerpc64__
CheckTypeSize(struct _GStaticRecMutex,64, 11505, 9)
CheckMemberSize(struct _GStaticRecMutex,depth,4,9,41365)
CheckOffset(struct _GStaticRecMutex,depth,48,9,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,9,41370)
CheckOffset(struct _GStaticRecMutex,owner,56,9,41370)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GStaticRecMutex,48, 11505, 10)
CheckMemberSize(struct _GStaticRecMutex,depth,4,10,41365)
CheckOffset(struct _GStaticRecMutex,depth,32,10,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,10,41370)
CheckOffset(struct _GStaticRecMutex,owner,40,10,41370)
#elif __s390x__
CheckTypeSize(struct _GStaticRecMutex,64, 11505, 12)
CheckMemberSize(struct _GStaticRecMutex,depth,4,12,41365)
CheckOffset(struct _GStaticRecMutex,depth,48,12,41365)
CheckMemberSize(struct _GStaticRecMutex,owner,8,12,41370)
CheckOffset(struct _GStaticRecMutex,owner,56,12,41370)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11505,0);
Msg("Find size of _GStaticRecMutex (11505)\n");
#endif

#if __i386__
CheckTypeSize(struct _GStaticMutex,28, 11506, 2)
CheckMemberSize(struct _GStaticMutex,static_mutex,24,2,41363)
CheckOffset(struct _GStaticMutex,static_mutex,4,2,41363)
#elif __x86_64__
CheckTypeSize(struct _GStaticMutex,48, 11506, 11)
CheckMemberSize(struct _GStaticMutex,static_mutex,40,11,41363)
CheckOffset(struct _GStaticMutex,static_mutex,8,11,41363)
#elif __ia64__
CheckTypeSize(struct _GStaticMutex,48, 11506, 3)
CheckMemberSize(struct _GStaticMutex,static_mutex,40,3,41363)
CheckOffset(struct _GStaticMutex,static_mutex,8,3,41363)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GStaticMutex,32, 11506, 6)
CheckMemberSize(struct _GStaticMutex,static_mutex,24,6,41363)
CheckOffset(struct _GStaticMutex,static_mutex,8,6,41363)
#elif __powerpc64__
CheckTypeSize(struct _GStaticMutex,48, 11506, 9)
CheckMemberSize(struct _GStaticMutex,static_mutex,40,9,41363)
CheckOffset(struct _GStaticMutex,static_mutex,8,9,41363)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GStaticMutex,32, 11506, 10)
CheckMemberSize(struct _GStaticMutex,static_mutex,24,10,41363)
CheckOffset(struct _GStaticMutex,static_mutex,8,10,41363)
#elif __s390x__
CheckTypeSize(struct _GStaticMutex,48, 11506, 12)
CheckMemberSize(struct _GStaticMutex,static_mutex,40,12,41363)
CheckOffset(struct _GStaticMutex,static_mutex,8,12,41363)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11506,0);
Msg("Find size of _GStaticMutex (11506)\n");
#endif

#if __i386__
CheckTypeSize(struct _GMutex *,4, 11508, 2)
#elif __x86_64__
CheckTypeSize(struct _GMutex *,8, 11508, 11)
#elif __ia64__
CheckTypeSize(struct _GMutex *,8, 11508, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GMutex *,4, 11508, 6)
#elif __powerpc64__
CheckTypeSize(struct _GMutex *,8, 11508, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GMutex *,4, 11508, 10)
#elif __s390x__
CheckTypeSize(struct _GMutex *,8, 11508, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11508,0);
Msg("Find size of _GMutex * (11508)\n");
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11510,0);
Msg("Find size of anon-glib-2.0/glib.h-71 (11510)\n");
#endif

#if __i386__
CheckTypeSize(GStaticMutex,28, 11511, 2)
#elif __x86_64__
CheckTypeSize(GStaticMutex,48, 11511, 11)
#elif __ia64__
CheckTypeSize(GStaticMutex,48, 11511, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticMutex,32, 11511, 6)
#elif __powerpc64__
CheckTypeSize(GStaticMutex,48, 11511, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticMutex,32, 11511, 10)
#elif __s390x__
CheckTypeSize(GStaticMutex,48, 11511, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11511,0);
Msg("Find size of GStaticMutex (11511)\n");
#endif

#if __i386__
CheckTypeSize(union _GSystemThread,8, 11512, 2)
Msg("Missing member data for _GSystemThread on IA32\n");
CheckOffset(union _GSystemThread,data,0,2,41366)
CheckOffset(union _GSystemThread,dummy_double,0,2,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,2,41368)
CheckOffset(union _GSystemThread,dummy_long,0,2,41369)
#elif __x86_64__
CheckTypeSize(union _GSystemThread,8, 11512, 11)
Msg("Missing member data for _GSystemThread on x86-64\n");
CheckOffset(union _GSystemThread,data,0,11,41366)
CheckOffset(union _GSystemThread,dummy_double,0,11,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,11,41368)
CheckOffset(union _GSystemThread,dummy_long,0,11,41369)
#elif __ia64__
CheckTypeSize(union _GSystemThread,8, 11512, 3)
Msg("Missing member data for _GSystemThread on IA64\n");
CheckOffset(union _GSystemThread,data,0,3,41366)
CheckOffset(union _GSystemThread,dummy_double,0,3,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,3,41368)
CheckOffset(union _GSystemThread,dummy_long,0,3,41369)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(union _GSystemThread,8, 11512, 6)
Msg("Missing member data for _GSystemThread on PPC32\n");
CheckOffset(union _GSystemThread,data,0,6,41366)
CheckOffset(union _GSystemThread,dummy_double,0,6,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,6,41368)
CheckOffset(union _GSystemThread,dummy_long,0,6,41369)
#elif __powerpc64__
CheckTypeSize(union _GSystemThread,8, 11512, 9)
Msg("Missing member data for _GSystemThread on PPC64\n");
CheckOffset(union _GSystemThread,data,0,9,41366)
CheckOffset(union _GSystemThread,dummy_double,0,9,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,9,41368)
CheckOffset(union _GSystemThread,dummy_long,0,9,41369)
#elif __s390__ && !__s390x__
CheckTypeSize(union _GSystemThread,8, 11512, 10)
Msg("Missing member data for _GSystemThread on S390\n");
CheckOffset(union _GSystemThread,data,0,10,41366)
CheckOffset(union _GSystemThread,dummy_double,0,10,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,10,41368)
CheckOffset(union _GSystemThread,dummy_long,0,10,41369)
#elif __s390x__
CheckTypeSize(union _GSystemThread,8, 11512, 12)
Msg("Missing member data for _GSystemThread on S390X\n");
CheckOffset(union _GSystemThread,data,0,12,41366)
CheckOffset(union _GSystemThread,dummy_double,0,12,41367)
CheckOffset(union _GSystemThread,dummy_pointer,0,12,41368)
CheckOffset(union _GSystemThread,dummy_long,0,12,41369)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11512,0);
Msg("Find size of _GSystemThread (11512)\n");
#endif

#if __i386__
CheckTypeSize(GSystemThread,8, 11513, 2)
#elif __x86_64__
CheckTypeSize(GSystemThread,8, 11513, 11)
#elif __ia64__
CheckTypeSize(GSystemThread,8, 11513, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSystemThread,8, 11513, 6)
#elif __powerpc64__
CheckTypeSize(GSystemThread,8, 11513, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSystemThread,8, 11513, 10)
#elif __s390x__
CheckTypeSize(GSystemThread,8, 11513, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11513,0);
Msg("Find size of GSystemThread (11513)\n");
#endif

#if __i386__
CheckTypeSize(GStaticRecMutex,40, 11514, 2)
#elif __x86_64__
CheckTypeSize(GStaticRecMutex,64, 11514, 11)
#elif __ia64__
CheckTypeSize(GStaticRecMutex,64, 11514, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticRecMutex,48, 11514, 6)
#elif __powerpc64__
CheckTypeSize(GStaticRecMutex,64, 11514, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticRecMutex,48, 11514, 10)
#elif __s390x__
CheckTypeSize(GStaticRecMutex,64, 11514, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11514,0);
Msg("Find size of GStaticRecMutex (11514)\n");
#endif

#if __i386__
CheckTypeSize(GStaticRecMutex *,4, 11515, 2)
#elif __x86_64__
CheckTypeSize(GStaticRecMutex *,8, 11515, 11)
#elif __ia64__
CheckTypeSize(GStaticRecMutex *,8, 11515, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticRecMutex *,4, 11515, 6)
#elif __powerpc64__
CheckTypeSize(GStaticRecMutex *,8, 11515, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticRecMutex *,4, 11515, 10)
#elif __s390x__
CheckTypeSize(GStaticRecMutex *,8, 11515, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11515,0);
Msg("Find size of GStaticRecMutex * (11515)\n");
#endif

#if __i386__
CheckTypeSize(gint *,4, 11516, 2)
#elif __x86_64__
CheckTypeSize(gint *,8, 11516, 11)
#elif __ia64__
CheckTypeSize(gint *,8, 11516, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gint *,4, 11516, 6)
#elif __powerpc64__
CheckTypeSize(gint *,8, 11516, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gint *,4, 11516, 10)
#elif __s390x__
CheckTypeSize(gint *,8, 11516, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11516,0);
Msg("Find size of gint * (11516)\n");
#endif

#if __i386__
CheckTypeSize(GMarkupParseContext,0, 11518, 2)
#elif __x86_64__
CheckTypeSize(GMarkupParseContext,0, 11518, 11)
#elif __ia64__
CheckTypeSize(GMarkupParseContext,0, 11518, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11518,0);
Msg("Find size of GMarkupParseContext (11518)\n");
#endif

#if __i386__
CheckTypeSize(GMarkupParseContext *,4, 11519, 2)
#elif __x86_64__
CheckTypeSize(GMarkupParseContext *,8, 11519, 11)
#elif __ia64__
CheckTypeSize(GMarkupParseContext *,8, 11519, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMarkupParseContext *,4, 11519, 6)
#elif __powerpc64__
CheckTypeSize(GMarkupParseContext *,8, 11519, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMarkupParseContext *,4, 11519, 10)
#elif __s390x__
CheckTypeSize(GMarkupParseContext *,8, 11519, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11519,0);
Msg("Find size of GMarkupParseContext * (11519)\n");
#endif

#if __i386__
CheckTypeSize(GData,0, 11522, 2)
#elif __x86_64__
CheckTypeSize(GData,0, 11522, 11)
#elif __ia64__
CheckTypeSize(GData,0, 11522, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11522,0);
Msg("Find size of GData (11522)\n");
#endif

#if __i386__
CheckTypeSize(GData *,4, 11523, 2)
#elif __x86_64__
CheckTypeSize(GData *,8, 11523, 11)
#elif __ia64__
CheckTypeSize(GData *,8, 11523, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GData *,4, 11523, 6)
#elif __powerpc64__
CheckTypeSize(GData *,8, 11523, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GData *,4, 11523, 10)
#elif __s390x__
CheckTypeSize(GData *,8, 11523, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11523,0);
Msg("Find size of GData * (11523)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11524,0);
Msg("Find size of GData * * (11524)\n");
#endif

#if __i386__
CheckEnum("G_IO_STATUS_ERROR",G_IO_STATUS_ERROR,0);
CheckEnum("G_IO_STATUS_NORMAL",G_IO_STATUS_NORMAL,1);
CheckEnum("G_IO_STATUS_EOF",G_IO_STATUS_EOF,2);
CheckEnum("G_IO_STATUS_AGAIN",G_IO_STATUS_AGAIN,3);
#elif __x86_64__
CheckEnum("G_IO_STATUS_ERROR",G_IO_STATUS_ERROR,0);
CheckEnum("G_IO_STATUS_NORMAL",G_IO_STATUS_NORMAL,1);
CheckEnum("G_IO_STATUS_EOF",G_IO_STATUS_EOF,2);
CheckEnum("G_IO_STATUS_AGAIN",G_IO_STATUS_AGAIN,3);
#elif __ia64__
CheckEnum("G_IO_STATUS_ERROR",G_IO_STATUS_ERROR,0);
CheckEnum("G_IO_STATUS_NORMAL",G_IO_STATUS_NORMAL,1);
CheckEnum("G_IO_STATUS_EOF",G_IO_STATUS_EOF,2);
CheckEnum("G_IO_STATUS_AGAIN",G_IO_STATUS_AGAIN,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11525,0);
Msg("Find size of anon-glib-2.0/glib.h-23 (11525)\n");
#endif

#if __i386__
CheckTypeSize(GIOStatus,4, 11526, 2)
#elif __x86_64__
CheckTypeSize(GIOStatus,4, 11526, 11)
#elif __ia64__
CheckTypeSize(GIOStatus,4, 11526, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOStatus,4, 11526, 6)
#elif __powerpc64__
CheckTypeSize(GIOStatus,4, 11526, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOStatus,4, 11526, 10)
#elif __s390x__
CheckTypeSize(GIOStatus,4, 11526, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11526,0);
Msg("Find size of GIOStatus (11526)\n");
#endif

#if __i386__
CheckTypeSize(struct _GIOChannel,60, 11527, 2)
CheckMemberSize(struct _GIOChannel,funcs,4,2,41458)
CheckOffset(struct _GIOChannel,funcs,4,2,41458)
CheckMemberSize(struct _GIOChannel,encoding,4,2,41459)
CheckOffset(struct _GIOChannel,encoding,8,2,41459)
CheckMemberSize(struct _GIOChannel,read_cd,4,2,41460)
CheckOffset(struct _GIOChannel,read_cd,12,2,41460)
CheckMemberSize(struct _GIOChannel,write_cd,4,2,41461)
CheckOffset(struct _GIOChannel,write_cd,16,2,41461)
CheckMemberSize(struct _GIOChannel,line_term,4,2,41462)
CheckOffset(struct _GIOChannel,line_term,20,2,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,2,41463)
CheckOffset(struct _GIOChannel,line_term_len,24,2,41463)
CheckMemberSize(struct _GIOChannel,buf_size,4,2,41464)
CheckOffset(struct _GIOChannel,buf_size,28,2,41464)
CheckMemberSize(struct _GIOChannel,read_buf,4,2,41465)
CheckOffset(struct _GIOChannel,read_buf,32,2,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,4,2,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,36,2,41466)
CheckMemberSize(struct _GIOChannel,write_buf,4,2,41467)
CheckOffset(struct _GIOChannel,write_buf,40,2,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,2,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,44,2,41468)
CheckMemberSize(struct _GIOChannel,reserved1,4,2,41475)
CheckOffset(struct _GIOChannel,reserved1,52,2,41475)
CheckMemberSize(struct _GIOChannel,reserved2,4,2,41476)
CheckOffset(struct _GIOChannel,reserved2,56,2,41476)
#elif __x86_64__
CheckTypeSize(struct _GIOChannel,112, 11527, 11)
CheckMemberSize(struct _GIOChannel,funcs,8,11,41458)
CheckOffset(struct _GIOChannel,funcs,8,11,41458)
CheckMemberSize(struct _GIOChannel,encoding,8,11,41459)
CheckOffset(struct _GIOChannel,encoding,16,11,41459)
CheckMemberSize(struct _GIOChannel,read_cd,8,11,41460)
CheckOffset(struct _GIOChannel,read_cd,24,11,41460)
CheckMemberSize(struct _GIOChannel,write_cd,8,11,41461)
CheckOffset(struct _GIOChannel,write_cd,32,11,41461)
CheckMemberSize(struct _GIOChannel,line_term,8,11,41462)
CheckOffset(struct _GIOChannel,line_term,40,11,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,11,41463)
CheckOffset(struct _GIOChannel,line_term_len,48,11,41463)
CheckMemberSize(struct _GIOChannel,buf_size,8,11,41464)
CheckOffset(struct _GIOChannel,buf_size,56,11,41464)
CheckMemberSize(struct _GIOChannel,read_buf,8,11,41465)
CheckOffset(struct _GIOChannel,read_buf,64,11,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,8,11,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,72,11,41466)
CheckMemberSize(struct _GIOChannel,write_buf,8,11,41467)
CheckOffset(struct _GIOChannel,write_buf,80,11,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,11,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,88,11,41468)
CheckMemberSize(struct _GIOChannel,reserved1,8,11,41475)
CheckOffset(struct _GIOChannel,reserved1,96,11,41475)
CheckMemberSize(struct _GIOChannel,reserved2,8,11,41476)
CheckOffset(struct _GIOChannel,reserved2,104,11,41476)
#elif __ia64__
CheckTypeSize(struct _GIOChannel,112, 11527, 3)
CheckMemberSize(struct _GIOChannel,funcs,8,3,41458)
CheckOffset(struct _GIOChannel,funcs,8,3,41458)
CheckMemberSize(struct _GIOChannel,encoding,8,3,41459)
CheckOffset(struct _GIOChannel,encoding,16,3,41459)
CheckMemberSize(struct _GIOChannel,read_cd,8,3,41460)
CheckOffset(struct _GIOChannel,read_cd,24,3,41460)
CheckMemberSize(struct _GIOChannel,write_cd,8,3,41461)
CheckOffset(struct _GIOChannel,write_cd,32,3,41461)
CheckMemberSize(struct _GIOChannel,line_term,8,3,41462)
CheckOffset(struct _GIOChannel,line_term,40,3,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,3,41463)
CheckOffset(struct _GIOChannel,line_term_len,48,3,41463)
CheckMemberSize(struct _GIOChannel,buf_size,8,3,41464)
CheckOffset(struct _GIOChannel,buf_size,56,3,41464)
CheckMemberSize(struct _GIOChannel,read_buf,8,3,41465)
CheckOffset(struct _GIOChannel,read_buf,64,3,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,8,3,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,72,3,41466)
CheckMemberSize(struct _GIOChannel,write_buf,8,3,41467)
CheckOffset(struct _GIOChannel,write_buf,80,3,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,3,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,88,3,41468)
CheckMemberSize(struct _GIOChannel,reserved1,8,3,41475)
CheckOffset(struct _GIOChannel,reserved1,96,3,41475)
CheckMemberSize(struct _GIOChannel,reserved2,8,3,41476)
CheckOffset(struct _GIOChannel,reserved2,104,3,41476)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GIOChannel,60, 11527, 6)
CheckMemberSize(struct _GIOChannel,funcs,4,6,41458)
CheckOffset(struct _GIOChannel,funcs,4,6,41458)
CheckMemberSize(struct _GIOChannel,encoding,4,6,41459)
CheckOffset(struct _GIOChannel,encoding,8,6,41459)
CheckMemberSize(struct _GIOChannel,read_cd,4,6,41460)
CheckOffset(struct _GIOChannel,read_cd,12,6,41460)
CheckMemberSize(struct _GIOChannel,write_cd,4,6,41461)
CheckOffset(struct _GIOChannel,write_cd,16,6,41461)
CheckMemberSize(struct _GIOChannel,line_term,4,6,41462)
CheckOffset(struct _GIOChannel,line_term,20,6,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,6,41463)
CheckOffset(struct _GIOChannel,line_term_len,24,6,41463)
CheckMemberSize(struct _GIOChannel,buf_size,4,6,41464)
CheckOffset(struct _GIOChannel,buf_size,28,6,41464)
CheckMemberSize(struct _GIOChannel,read_buf,4,6,41465)
CheckOffset(struct _GIOChannel,read_buf,32,6,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,4,6,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,36,6,41466)
CheckMemberSize(struct _GIOChannel,write_buf,4,6,41467)
CheckOffset(struct _GIOChannel,write_buf,40,6,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,6,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,44,6,41468)
CheckMemberSize(struct _GIOChannel,reserved1,4,6,41475)
CheckOffset(struct _GIOChannel,reserved1,52,6,41475)
CheckMemberSize(struct _GIOChannel,reserved2,4,6,41476)
CheckOffset(struct _GIOChannel,reserved2,56,6,41476)
#elif __powerpc64__
CheckTypeSize(struct _GIOChannel,112, 11527, 9)
CheckMemberSize(struct _GIOChannel,funcs,8,9,41458)
CheckOffset(struct _GIOChannel,funcs,8,9,41458)
CheckMemberSize(struct _GIOChannel,encoding,8,9,41459)
CheckOffset(struct _GIOChannel,encoding,16,9,41459)
CheckMemberSize(struct _GIOChannel,read_cd,8,9,41460)
CheckOffset(struct _GIOChannel,read_cd,24,9,41460)
CheckMemberSize(struct _GIOChannel,write_cd,8,9,41461)
CheckOffset(struct _GIOChannel,write_cd,32,9,41461)
CheckMemberSize(struct _GIOChannel,line_term,8,9,41462)
CheckOffset(struct _GIOChannel,line_term,40,9,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,9,41463)
CheckOffset(struct _GIOChannel,line_term_len,48,9,41463)
CheckMemberSize(struct _GIOChannel,buf_size,8,9,41464)
CheckOffset(struct _GIOChannel,buf_size,56,9,41464)
CheckMemberSize(struct _GIOChannel,read_buf,8,9,41465)
CheckOffset(struct _GIOChannel,read_buf,64,9,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,8,9,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,72,9,41466)
CheckMemberSize(struct _GIOChannel,write_buf,8,9,41467)
CheckOffset(struct _GIOChannel,write_buf,80,9,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,9,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,88,9,41468)
CheckMemberSize(struct _GIOChannel,reserved1,8,9,41475)
CheckOffset(struct _GIOChannel,reserved1,96,9,41475)
CheckMemberSize(struct _GIOChannel,reserved2,8,9,41476)
CheckOffset(struct _GIOChannel,reserved2,104,9,41476)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GIOChannel,60, 11527, 10)
CheckMemberSize(struct _GIOChannel,funcs,4,10,41458)
CheckOffset(struct _GIOChannel,funcs,4,10,41458)
CheckMemberSize(struct _GIOChannel,encoding,4,10,41459)
CheckOffset(struct _GIOChannel,encoding,8,10,41459)
CheckMemberSize(struct _GIOChannel,read_cd,4,10,41460)
CheckOffset(struct _GIOChannel,read_cd,12,10,41460)
CheckMemberSize(struct _GIOChannel,write_cd,4,10,41461)
CheckOffset(struct _GIOChannel,write_cd,16,10,41461)
CheckMemberSize(struct _GIOChannel,line_term,4,10,41462)
CheckOffset(struct _GIOChannel,line_term,20,10,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,10,41463)
CheckOffset(struct _GIOChannel,line_term_len,24,10,41463)
CheckMemberSize(struct _GIOChannel,buf_size,4,10,41464)
CheckOffset(struct _GIOChannel,buf_size,28,10,41464)
CheckMemberSize(struct _GIOChannel,read_buf,4,10,41465)
CheckOffset(struct _GIOChannel,read_buf,32,10,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,4,10,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,36,10,41466)
CheckMemberSize(struct _GIOChannel,write_buf,4,10,41467)
CheckOffset(struct _GIOChannel,write_buf,40,10,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,10,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,44,10,41468)
CheckMemberSize(struct _GIOChannel,reserved1,4,10,41475)
CheckOffset(struct _GIOChannel,reserved1,52,10,41475)
CheckMemberSize(struct _GIOChannel,reserved2,4,10,41476)
CheckOffset(struct _GIOChannel,reserved2,56,10,41476)
#elif __s390x__
CheckTypeSize(struct _GIOChannel,112, 11527, 12)
CheckMemberSize(struct _GIOChannel,funcs,8,12,41458)
CheckOffset(struct _GIOChannel,funcs,8,12,41458)
CheckMemberSize(struct _GIOChannel,encoding,8,12,41459)
CheckOffset(struct _GIOChannel,encoding,16,12,41459)
CheckMemberSize(struct _GIOChannel,read_cd,8,12,41460)
CheckOffset(struct _GIOChannel,read_cd,24,12,41460)
CheckMemberSize(struct _GIOChannel,write_cd,8,12,41461)
CheckOffset(struct _GIOChannel,write_cd,32,12,41461)
CheckMemberSize(struct _GIOChannel,line_term,8,12,41462)
CheckOffset(struct _GIOChannel,line_term,40,12,41462)
CheckMemberSize(struct _GIOChannel,line_term_len,4,12,41463)
CheckOffset(struct _GIOChannel,line_term_len,48,12,41463)
CheckMemberSize(struct _GIOChannel,buf_size,8,12,41464)
CheckOffset(struct _GIOChannel,buf_size,56,12,41464)
CheckMemberSize(struct _GIOChannel,read_buf,8,12,41465)
CheckOffset(struct _GIOChannel,read_buf,64,12,41465)
CheckMemberSize(struct _GIOChannel,encoded_read_buf,8,12,41466)
CheckOffset(struct _GIOChannel,encoded_read_buf,72,12,41466)
CheckMemberSize(struct _GIOChannel,write_buf,8,12,41467)
CheckOffset(struct _GIOChannel,write_buf,80,12,41467)
CheckMemberSize(struct _GIOChannel,partial_write_buf,6,12,41468)
CheckOffset(struct _GIOChannel,partial_write_buf,88,12,41468)
CheckMemberSize(struct _GIOChannel,reserved1,8,12,41475)
CheckOffset(struct _GIOChannel,reserved1,96,12,41475)
CheckMemberSize(struct _GIOChannel,reserved2,8,12,41476)
CheckOffset(struct _GIOChannel,reserved2,104,12,41476)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11527,0);
Msg("Find size of _GIOChannel (11527)\n");
#endif

#if __i386__
CheckTypeSize(struct _GIOFuncs,32, 11528, 2)
CheckMemberSize(struct _GIOFuncs,io_write,4,2,41387)
CheckOffset(struct _GIOFuncs,io_write,4,2,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,4,2,41395)
CheckOffset(struct _GIOFuncs,io_seek,8,2,41395)
CheckMemberSize(struct _GIOFuncs,io_close,4,2,41398)
CheckOffset(struct _GIOFuncs,io_close,12,2,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,4,2,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,16,2,41441)
CheckMemberSize(struct _GIOFuncs,io_free,4,2,41443)
CheckOffset(struct _GIOFuncs,io_free,20,2,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,4,2,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,24,2,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,4,2,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,28,2,41457)
#elif __x86_64__
CheckTypeSize(struct _GIOFuncs,64, 11528, 11)
CheckMemberSize(struct _GIOFuncs,io_write,8,11,41387)
CheckOffset(struct _GIOFuncs,io_write,8,11,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,8,11,41395)
CheckOffset(struct _GIOFuncs,io_seek,16,11,41395)
CheckMemberSize(struct _GIOFuncs,io_close,8,11,41398)
CheckOffset(struct _GIOFuncs,io_close,24,11,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,8,11,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,32,11,41441)
CheckMemberSize(struct _GIOFuncs,io_free,8,11,41443)
CheckOffset(struct _GIOFuncs,io_free,40,11,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,8,11,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,48,11,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,8,11,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,56,11,41457)
#elif __ia64__
CheckTypeSize(struct _GIOFuncs,64, 11528, 3)
CheckMemberSize(struct _GIOFuncs,io_write,8,3,41387)
CheckOffset(struct _GIOFuncs,io_write,8,3,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,8,3,41395)
CheckOffset(struct _GIOFuncs,io_seek,16,3,41395)
CheckMemberSize(struct _GIOFuncs,io_close,8,3,41398)
CheckOffset(struct _GIOFuncs,io_close,24,3,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,8,3,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,32,3,41441)
CheckMemberSize(struct _GIOFuncs,io_free,8,3,41443)
CheckOffset(struct _GIOFuncs,io_free,40,3,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,8,3,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,48,3,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,8,3,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,56,3,41457)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GIOFuncs,32, 11528, 6)
CheckMemberSize(struct _GIOFuncs,io_write,4,6,41387)
CheckOffset(struct _GIOFuncs,io_write,4,6,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,4,6,41395)
CheckOffset(struct _GIOFuncs,io_seek,8,6,41395)
CheckMemberSize(struct _GIOFuncs,io_close,4,6,41398)
CheckOffset(struct _GIOFuncs,io_close,12,6,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,4,6,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,16,6,41441)
CheckMemberSize(struct _GIOFuncs,io_free,4,6,41443)
CheckOffset(struct _GIOFuncs,io_free,20,6,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,4,6,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,24,6,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,4,6,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,28,6,41457)
#elif __powerpc64__
CheckTypeSize(struct _GIOFuncs,64, 11528, 9)
CheckMemberSize(struct _GIOFuncs,io_write,8,9,41387)
CheckOffset(struct _GIOFuncs,io_write,8,9,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,8,9,41395)
CheckOffset(struct _GIOFuncs,io_seek,16,9,41395)
CheckMemberSize(struct _GIOFuncs,io_close,8,9,41398)
CheckOffset(struct _GIOFuncs,io_close,24,9,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,8,9,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,32,9,41441)
CheckMemberSize(struct _GIOFuncs,io_free,8,9,41443)
CheckOffset(struct _GIOFuncs,io_free,40,9,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,8,9,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,48,9,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,8,9,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,56,9,41457)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GIOFuncs,32, 11528, 10)
CheckMemberSize(struct _GIOFuncs,io_write,4,10,41387)
CheckOffset(struct _GIOFuncs,io_write,4,10,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,4,10,41395)
CheckOffset(struct _GIOFuncs,io_seek,8,10,41395)
CheckMemberSize(struct _GIOFuncs,io_close,4,10,41398)
CheckOffset(struct _GIOFuncs,io_close,12,10,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,4,10,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,16,10,41441)
CheckMemberSize(struct _GIOFuncs,io_free,4,10,41443)
CheckOffset(struct _GIOFuncs,io_free,20,10,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,4,10,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,24,10,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,4,10,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,28,10,41457)
#elif __s390x__
CheckTypeSize(struct _GIOFuncs,64, 11528, 12)
CheckMemberSize(struct _GIOFuncs,io_write,8,12,41387)
CheckOffset(struct _GIOFuncs,io_write,8,12,41387)
CheckMemberSize(struct _GIOFuncs,io_seek,8,12,41395)
CheckOffset(struct _GIOFuncs,io_seek,16,12,41395)
CheckMemberSize(struct _GIOFuncs,io_close,8,12,41398)
CheckOffset(struct _GIOFuncs,io_close,24,12,41398)
CheckMemberSize(struct _GIOFuncs,io_create_watch,8,12,41441)
CheckOffset(struct _GIOFuncs,io_create_watch,32,12,41441)
CheckMemberSize(struct _GIOFuncs,io_free,8,12,41443)
CheckOffset(struct _GIOFuncs,io_free,40,12,41443)
CheckMemberSize(struct _GIOFuncs,io_set_flags,8,12,41455)
CheckOffset(struct _GIOFuncs,io_set_flags,48,12,41455)
CheckMemberSize(struct _GIOFuncs,io_get_flags,8,12,41457)
CheckOffset(struct _GIOFuncs,io_get_flags,56,12,41457)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11528,0);
Msg("Find size of _GIOFuncs (11528)\n");
#endif

#if __i386__
CheckTypeSize(GIOChannel,60, 11529, 2)
#elif __x86_64__
CheckTypeSize(GIOChannel,112, 11529, 11)
#elif __ia64__
CheckTypeSize(GIOChannel,112, 11529, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOChannel,60, 11529, 6)
#elif __powerpc64__
CheckTypeSize(GIOChannel,112, 11529, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOChannel,60, 11529, 10)
#elif __s390x__
CheckTypeSize(GIOChannel,112, 11529, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11529,0);
Msg("Find size of GIOChannel (11529)\n");
#endif

#if __i386__
CheckTypeSize(GIOChannel *,4, 11530, 2)
#elif __x86_64__
CheckTypeSize(GIOChannel *,8, 11530, 11)
#elif __ia64__
CheckTypeSize(GIOChannel *,8, 11530, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOChannel *,4, 11530, 6)
#elif __powerpc64__
CheckTypeSize(GIOChannel *,8, 11530, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOChannel *,4, 11530, 10)
#elif __s390x__
CheckTypeSize(GIOChannel *,8, 11530, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11530,0);
Msg("Find size of GIOChannel * (11530)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11531,0);
Msg("Find size of fptr_glib_129 (11531)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11532,0);
Msg("Find size of fptr_glib_158 (11532)\n");
#endif

#if __i386__
CheckEnum("G_SEEK_CUR",G_SEEK_CUR,0);
CheckEnum("G_SEEK_SET",G_SEEK_SET,1);
CheckEnum("G_SEEK_END",G_SEEK_END,2);
#elif __x86_64__
CheckEnum("G_SEEK_CUR",G_SEEK_CUR,0);
CheckEnum("G_SEEK_SET",G_SEEK_SET,1);
CheckEnum("G_SEEK_END",G_SEEK_END,2);
#elif __ia64__
CheckEnum("G_SEEK_CUR",G_SEEK_CUR,0);
CheckEnum("G_SEEK_SET",G_SEEK_SET,1);
CheckEnum("G_SEEK_END",G_SEEK_END,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11534,0);
Msg("Find size of anon-glib-2.0/glib.h-24 (11534)\n");
#endif

#if __i386__
CheckTypeSize(GSeekType,4, 11535, 2)
#elif __x86_64__
CheckTypeSize(GSeekType,4, 11535, 11)
#elif __ia64__
CheckTypeSize(GSeekType,4, 11535, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSeekType,4, 11535, 6)
#elif __powerpc64__
CheckTypeSize(GSeekType,4, 11535, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSeekType,4, 11535, 10)
#elif __s390x__
CheckTypeSize(GSeekType,4, 11535, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11535,0);
Msg("Find size of GSeekType (11535)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11536,0);
Msg("Find size of fptr_glib_174 (11536)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11537,0);
Msg("Find size of fptr_glib_322 (11537)\n");
#endif

#if __i386__
CheckTypeSize(struct _GSource,52, 11538, 2)
CheckMemberSize(struct _GSource,callback_funcs,4,2,41408)
CheckOffset(struct _GSource,callback_funcs,4,2,41408)
CheckMemberSize(struct _GSource,source_funcs,4,2,41422)
CheckOffset(struct _GSource,source_funcs,8,2,41422)
CheckMemberSize(struct _GSource,ref_count,4,2,41423)
CheckOffset(struct _GSource,ref_count,12,2,41423)
CheckMemberSize(struct _GSource,context,4,2,41424)
CheckOffset(struct _GSource,context,16,2,41424)
CheckMemberSize(struct _GSource,priority,4,2,41425)
CheckOffset(struct _GSource,priority,20,2,41425)
CheckMemberSize(struct _GSource,flags,4,2,41426)
CheckOffset(struct _GSource,flags,24,2,41426)
CheckMemberSize(struct _GSource,source_id,4,2,41427)
CheckOffset(struct _GSource,source_id,28,2,41427)
CheckMemberSize(struct _GSource,poll_fds,4,2,41428)
CheckOffset(struct _GSource,poll_fds,32,2,41428)
CheckMemberSize(struct _GSource,prev,4,2,41429)
CheckOffset(struct _GSource,prev,36,2,41429)
CheckMemberSize(struct _GSource,next,4,2,41430)
CheckOffset(struct _GSource,next,40,2,41430)
CheckMemberSize(struct _GSource,reserved1,4,2,41431)
CheckOffset(struct _GSource,reserved1,44,2,41431)
CheckMemberSize(struct _GSource,reserved2,4,2,41432)
CheckOffset(struct _GSource,reserved2,48,2,41432)
#elif __x86_64__
CheckTypeSize(struct _GSource,96, 11538, 11)
CheckMemberSize(struct _GSource,callback_funcs,8,11,41408)
CheckOffset(struct _GSource,callback_funcs,8,11,41408)
CheckMemberSize(struct _GSource,source_funcs,8,11,41422)
CheckOffset(struct _GSource,source_funcs,16,11,41422)
CheckMemberSize(struct _GSource,ref_count,4,11,41423)
CheckOffset(struct _GSource,ref_count,24,11,41423)
CheckMemberSize(struct _GSource,context,8,11,41424)
CheckOffset(struct _GSource,context,32,11,41424)
CheckMemberSize(struct _GSource,priority,4,11,41425)
CheckOffset(struct _GSource,priority,40,11,41425)
CheckMemberSize(struct _GSource,flags,4,11,41426)
CheckOffset(struct _GSource,flags,44,11,41426)
CheckMemberSize(struct _GSource,source_id,4,11,41427)
CheckOffset(struct _GSource,source_id,48,11,41427)
CheckMemberSize(struct _GSource,poll_fds,8,11,41428)
CheckOffset(struct _GSource,poll_fds,56,11,41428)
CheckMemberSize(struct _GSource,prev,8,11,41429)
CheckOffset(struct _GSource,prev,64,11,41429)
CheckMemberSize(struct _GSource,next,8,11,41430)
CheckOffset(struct _GSource,next,72,11,41430)
CheckMemberSize(struct _GSource,reserved1,8,11,41431)
CheckOffset(struct _GSource,reserved1,80,11,41431)
CheckMemberSize(struct _GSource,reserved2,8,11,41432)
CheckOffset(struct _GSource,reserved2,88,11,41432)
#elif __ia64__
CheckTypeSize(struct _GSource,96, 11538, 3)
CheckMemberSize(struct _GSource,callback_funcs,8,3,41408)
CheckOffset(struct _GSource,callback_funcs,8,3,41408)
CheckMemberSize(struct _GSource,source_funcs,8,3,41422)
CheckOffset(struct _GSource,source_funcs,16,3,41422)
CheckMemberSize(struct _GSource,ref_count,4,3,41423)
CheckOffset(struct _GSource,ref_count,24,3,41423)
CheckMemberSize(struct _GSource,context,8,3,41424)
CheckOffset(struct _GSource,context,32,3,41424)
CheckMemberSize(struct _GSource,priority,4,3,41425)
CheckOffset(struct _GSource,priority,40,3,41425)
CheckMemberSize(struct _GSource,flags,4,3,41426)
CheckOffset(struct _GSource,flags,44,3,41426)
CheckMemberSize(struct _GSource,source_id,4,3,41427)
CheckOffset(struct _GSource,source_id,48,3,41427)
CheckMemberSize(struct _GSource,poll_fds,8,3,41428)
CheckOffset(struct _GSource,poll_fds,56,3,41428)
CheckMemberSize(struct _GSource,prev,8,3,41429)
CheckOffset(struct _GSource,prev,64,3,41429)
CheckMemberSize(struct _GSource,next,8,3,41430)
CheckOffset(struct _GSource,next,72,3,41430)
CheckMemberSize(struct _GSource,reserved1,8,3,41431)
CheckOffset(struct _GSource,reserved1,80,3,41431)
CheckMemberSize(struct _GSource,reserved2,8,3,41432)
CheckOffset(struct _GSource,reserved2,88,3,41432)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GSource,52, 11538, 6)
CheckMemberSize(struct _GSource,callback_funcs,4,6,41408)
CheckOffset(struct _GSource,callback_funcs,4,6,41408)
CheckMemberSize(struct _GSource,source_funcs,4,6,41422)
CheckOffset(struct _GSource,source_funcs,8,6,41422)
CheckMemberSize(struct _GSource,ref_count,4,6,41423)
CheckOffset(struct _GSource,ref_count,12,6,41423)
CheckMemberSize(struct _GSource,context,4,6,41424)
CheckOffset(struct _GSource,context,16,6,41424)
CheckMemberSize(struct _GSource,priority,4,6,41425)
CheckOffset(struct _GSource,priority,20,6,41425)
CheckMemberSize(struct _GSource,flags,4,6,41426)
CheckOffset(struct _GSource,flags,24,6,41426)
CheckMemberSize(struct _GSource,source_id,4,6,41427)
CheckOffset(struct _GSource,source_id,28,6,41427)
CheckMemberSize(struct _GSource,poll_fds,4,6,41428)
CheckOffset(struct _GSource,poll_fds,32,6,41428)
CheckMemberSize(struct _GSource,prev,4,6,41429)
CheckOffset(struct _GSource,prev,36,6,41429)
CheckMemberSize(struct _GSource,next,4,6,41430)
CheckOffset(struct _GSource,next,40,6,41430)
CheckMemberSize(struct _GSource,reserved1,4,6,41431)
CheckOffset(struct _GSource,reserved1,44,6,41431)
CheckMemberSize(struct _GSource,reserved2,4,6,41432)
CheckOffset(struct _GSource,reserved2,48,6,41432)
#elif __powerpc64__
CheckTypeSize(struct _GSource,96, 11538, 9)
CheckMemberSize(struct _GSource,callback_funcs,8,9,41408)
CheckOffset(struct _GSource,callback_funcs,8,9,41408)
CheckMemberSize(struct _GSource,source_funcs,8,9,41422)
CheckOffset(struct _GSource,source_funcs,16,9,41422)
CheckMemberSize(struct _GSource,ref_count,4,9,41423)
CheckOffset(struct _GSource,ref_count,24,9,41423)
CheckMemberSize(struct _GSource,context,8,9,41424)
CheckOffset(struct _GSource,context,32,9,41424)
CheckMemberSize(struct _GSource,priority,4,9,41425)
CheckOffset(struct _GSource,priority,40,9,41425)
CheckMemberSize(struct _GSource,flags,4,9,41426)
CheckOffset(struct _GSource,flags,44,9,41426)
CheckMemberSize(struct _GSource,source_id,4,9,41427)
CheckOffset(struct _GSource,source_id,48,9,41427)
CheckMemberSize(struct _GSource,poll_fds,8,9,41428)
CheckOffset(struct _GSource,poll_fds,56,9,41428)
CheckMemberSize(struct _GSource,prev,8,9,41429)
CheckOffset(struct _GSource,prev,64,9,41429)
CheckMemberSize(struct _GSource,next,8,9,41430)
CheckOffset(struct _GSource,next,72,9,41430)
CheckMemberSize(struct _GSource,reserved1,8,9,41431)
CheckOffset(struct _GSource,reserved1,80,9,41431)
CheckMemberSize(struct _GSource,reserved2,8,9,41432)
CheckOffset(struct _GSource,reserved2,88,9,41432)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GSource,52, 11538, 10)
CheckMemberSize(struct _GSource,callback_funcs,4,10,41408)
CheckOffset(struct _GSource,callback_funcs,4,10,41408)
CheckMemberSize(struct _GSource,source_funcs,4,10,41422)
CheckOffset(struct _GSource,source_funcs,8,10,41422)
CheckMemberSize(struct _GSource,ref_count,4,10,41423)
CheckOffset(struct _GSource,ref_count,12,10,41423)
CheckMemberSize(struct _GSource,context,4,10,41424)
CheckOffset(struct _GSource,context,16,10,41424)
CheckMemberSize(struct _GSource,priority,4,10,41425)
CheckOffset(struct _GSource,priority,20,10,41425)
CheckMemberSize(struct _GSource,flags,4,10,41426)
CheckOffset(struct _GSource,flags,24,10,41426)
CheckMemberSize(struct _GSource,source_id,4,10,41427)
CheckOffset(struct _GSource,source_id,28,10,41427)
CheckMemberSize(struct _GSource,poll_fds,4,10,41428)
CheckOffset(struct _GSource,poll_fds,32,10,41428)
CheckMemberSize(struct _GSource,prev,4,10,41429)
CheckOffset(struct _GSource,prev,36,10,41429)
CheckMemberSize(struct _GSource,next,4,10,41430)
CheckOffset(struct _GSource,next,40,10,41430)
CheckMemberSize(struct _GSource,reserved1,4,10,41431)
CheckOffset(struct _GSource,reserved1,44,10,41431)
CheckMemberSize(struct _GSource,reserved2,4,10,41432)
CheckOffset(struct _GSource,reserved2,48,10,41432)
#elif __s390x__
CheckTypeSize(struct _GSource,96, 11538, 12)
CheckMemberSize(struct _GSource,callback_funcs,8,12,41408)
CheckOffset(struct _GSource,callback_funcs,8,12,41408)
CheckMemberSize(struct _GSource,source_funcs,8,12,41422)
CheckOffset(struct _GSource,source_funcs,16,12,41422)
CheckMemberSize(struct _GSource,ref_count,4,12,41423)
CheckOffset(struct _GSource,ref_count,24,12,41423)
CheckMemberSize(struct _GSource,context,8,12,41424)
CheckOffset(struct _GSource,context,32,12,41424)
CheckMemberSize(struct _GSource,priority,4,12,41425)
CheckOffset(struct _GSource,priority,40,12,41425)
CheckMemberSize(struct _GSource,flags,4,12,41426)
CheckOffset(struct _GSource,flags,44,12,41426)
CheckMemberSize(struct _GSource,source_id,4,12,41427)
CheckOffset(struct _GSource,source_id,48,12,41427)
CheckMemberSize(struct _GSource,poll_fds,8,12,41428)
CheckOffset(struct _GSource,poll_fds,56,12,41428)
CheckMemberSize(struct _GSource,prev,8,12,41429)
CheckOffset(struct _GSource,prev,64,12,41429)
CheckMemberSize(struct _GSource,next,8,12,41430)
CheckOffset(struct _GSource,next,72,12,41430)
CheckMemberSize(struct _GSource,reserved1,8,12,41431)
CheckOffset(struct _GSource,reserved1,80,12,41431)
CheckMemberSize(struct _GSource,reserved2,8,12,41432)
CheckOffset(struct _GSource,reserved2,88,12,41432)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11538,0);
Msg("Find size of _GSource (11538)\n");
#endif

#if __i386__
CheckTypeSize(struct _GSourceCallbackFuncs,12, 11539, 2)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,4,2,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,4,2,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,4,2,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,8,2,41407)
#elif __x86_64__
CheckTypeSize(struct _GSourceCallbackFuncs,24, 11539, 11)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,8,11,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,8,11,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,8,11,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,16,11,41407)
#elif __ia64__
CheckTypeSize(struct _GSourceCallbackFuncs,24, 11539, 3)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,8,3,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,8,3,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,8,3,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,16,3,41407)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GSourceCallbackFuncs,12, 11539, 6)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,4,6,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,4,6,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,4,6,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,8,6,41407)
#elif __powerpc64__
CheckTypeSize(struct _GSourceCallbackFuncs,24, 11539, 9)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,8,9,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,8,9,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,8,9,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,16,9,41407)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GSourceCallbackFuncs,12, 11539, 10)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,4,10,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,4,10,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,4,10,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,8,10,41407)
#elif __s390x__
CheckTypeSize(struct _GSourceCallbackFuncs,24, 11539, 12)
CheckMemberSize(struct _GSourceCallbackFuncs,unref,8,12,41401)
CheckOffset(struct _GSourceCallbackFuncs,unref,8,12,41401)
CheckMemberSize(struct _GSourceCallbackFuncs,get,8,12,41407)
CheckOffset(struct _GSourceCallbackFuncs,get,16,12,41407)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11539,0);
Msg("Find size of _GSourceCallbackFuncs (11539)\n");
#endif

#if __i386__
CheckTypeSize(GSource,52, 11540, 2)
#elif __x86_64__
CheckTypeSize(GSource,96, 11540, 11)
#elif __ia64__
CheckTypeSize(GSource,96, 11540, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSource,52, 11540, 6)
#elif __powerpc64__
CheckTypeSize(GSource,96, 11540, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSource,52, 11540, 10)
#elif __s390x__
CheckTypeSize(GSource,96, 11540, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11540,0);
Msg("Find size of GSource (11540)\n");
#endif

#if __i386__
CheckTypeSize(GSource *,4, 11541, 2)
#elif __x86_64__
CheckTypeSize(GSource *,8, 11541, 11)
#elif __ia64__
CheckTypeSize(GSource *,8, 11541, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSource *,4, 11541, 6)
#elif __powerpc64__
CheckTypeSize(GSource *,8, 11541, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSource *,4, 11541, 10)
#elif __s390x__
CheckTypeSize(GSource *,8, 11541, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11541,0);
Msg("Find size of GSource * (11541)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11542,0);
Msg("Find size of fptr_glib_260 (11542)\n");
#endif

#if __i386__
CheckTypeSize(GSourceFunc,4, 11543, 2)
#elif __x86_64__
CheckTypeSize(GSourceFunc,8, 11543, 11)
#elif __ia64__
CheckTypeSize(GSourceFunc,8, 11543, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceFunc,4, 11543, 6)
#elif __powerpc64__
CheckTypeSize(GSourceFunc,8, 11543, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceFunc,4, 11543, 10)
#elif __s390x__
CheckTypeSize(GSourceFunc,8, 11543, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11543,0);
Msg("Find size of GSourceFunc (11543)\n");
#endif

#if __i386__
CheckTypeSize(GSourceFunc *,4, 11544, 2)
#elif __x86_64__
CheckTypeSize(GSourceFunc *,8, 11544, 11)
#elif __ia64__
CheckTypeSize(GSourceFunc *,8, 11544, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceFunc *,4, 11544, 6)
#elif __powerpc64__
CheckTypeSize(GSourceFunc *,8, 11544, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceFunc *,4, 11544, 10)
#elif __s390x__
CheckTypeSize(GSourceFunc *,8, 11544, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11544,0);
Msg("Find size of GSourceFunc * (11544)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11545,0);
Msg("Find size of fptr_glib_408 (11545)\n");
#endif

#if __i386__
CheckTypeSize(GSourceCallbackFuncs,12, 11546, 2)
#elif __x86_64__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 11)
#elif __ia64__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceCallbackFuncs,12, 11546, 6)
#elif __powerpc64__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceCallbackFuncs,12, 11546, 10)
#elif __s390x__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11546,0);
Msg("Find size of GSourceCallbackFuncs (11546)\n");
#endif

#if __i386__
CheckTypeSize(GSourceCallbackFuncs *,4, 11547, 2)
#elif __x86_64__
CheckTypeSize(GSourceCallbackFuncs *,8, 11547, 11)
#elif __ia64__
CheckTypeSize(GSourceCallbackFuncs *,8, 11547, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceCallbackFuncs *,4, 11547, 6)
#elif __powerpc64__
CheckTypeSize(GSourceCallbackFuncs *,8, 11547, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceCallbackFuncs *,4, 11547, 10)
#elif __s390x__
CheckTypeSize(GSourceCallbackFuncs *,8, 11547, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11547,0);
Msg("Find size of GSourceCallbackFuncs * (11547)\n");
#endif

#if __i386__
CheckTypeSize(struct _GSourceFuncs,24, 11548, 2)
CheckMemberSize(struct _GSourceFuncs,check,4,2,41413)
CheckOffset(struct _GSourceFuncs,check,4,2,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,4,2,41417)
CheckOffset(struct _GSourceFuncs,dispatch,8,2,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,4,2,41419)
CheckOffset(struct _GSourceFuncs,finalize,12,2,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,4,2,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,16,2,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,4,2,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,20,2,41421)
#elif __x86_64__
CheckTypeSize(struct _GSourceFuncs,48, 11548, 11)
CheckMemberSize(struct _GSourceFuncs,check,8,11,41413)
CheckOffset(struct _GSourceFuncs,check,8,11,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,8,11,41417)
CheckOffset(struct _GSourceFuncs,dispatch,16,11,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,8,11,41419)
CheckOffset(struct _GSourceFuncs,finalize,24,11,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,8,11,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,32,11,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,8,11,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,40,11,41421)
#elif __ia64__
CheckTypeSize(struct _GSourceFuncs,48, 11548, 3)
CheckMemberSize(struct _GSourceFuncs,check,8,3,41413)
CheckOffset(struct _GSourceFuncs,check,8,3,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,8,3,41417)
CheckOffset(struct _GSourceFuncs,dispatch,16,3,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,8,3,41419)
CheckOffset(struct _GSourceFuncs,finalize,24,3,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,8,3,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,32,3,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,8,3,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,40,3,41421)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GSourceFuncs,24, 11548, 6)
CheckMemberSize(struct _GSourceFuncs,check,4,6,41413)
CheckOffset(struct _GSourceFuncs,check,4,6,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,4,6,41417)
CheckOffset(struct _GSourceFuncs,dispatch,8,6,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,4,6,41419)
CheckOffset(struct _GSourceFuncs,finalize,12,6,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,4,6,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,16,6,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,4,6,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,20,6,41421)
#elif __powerpc64__
CheckTypeSize(struct _GSourceFuncs,48, 11548, 9)
CheckMemberSize(struct _GSourceFuncs,check,8,9,41413)
CheckOffset(struct _GSourceFuncs,check,8,9,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,8,9,41417)
CheckOffset(struct _GSourceFuncs,dispatch,16,9,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,8,9,41419)
CheckOffset(struct _GSourceFuncs,finalize,24,9,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,8,9,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,32,9,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,8,9,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,40,9,41421)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GSourceFuncs,24, 11548, 10)
CheckMemberSize(struct _GSourceFuncs,check,4,10,41413)
CheckOffset(struct _GSourceFuncs,check,4,10,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,4,10,41417)
CheckOffset(struct _GSourceFuncs,dispatch,8,10,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,4,10,41419)
CheckOffset(struct _GSourceFuncs,finalize,12,10,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,4,10,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,16,10,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,4,10,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,20,10,41421)
#elif __s390x__
CheckTypeSize(struct _GSourceFuncs,48, 11548, 12)
CheckMemberSize(struct _GSourceFuncs,check,8,12,41413)
CheckOffset(struct _GSourceFuncs,check,8,12,41413)
CheckMemberSize(struct _GSourceFuncs,dispatch,8,12,41417)
CheckOffset(struct _GSourceFuncs,dispatch,16,12,41417)
CheckMemberSize(struct _GSourceFuncs,finalize,8,12,41419)
CheckOffset(struct _GSourceFuncs,finalize,24,12,41419)
CheckMemberSize(struct _GSourceFuncs,closure_callback,8,12,41420)
CheckOffset(struct _GSourceFuncs,closure_callback,32,12,41420)
CheckMemberSize(struct _GSourceFuncs,closure_marshal,8,12,41421)
CheckOffset(struct _GSourceFuncs,closure_marshal,40,12,41421)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11548,0);
Msg("Find size of _GSourceFuncs (11548)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11549,0);
Msg("Find size of fptr_glib_164 (11549)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11550,0);
Msg("Find size of fptr_glib_52 (11550)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11551,0);
Msg("Find size of fptr_glib_25 (11551)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11552,0);
Msg("Find size of fptr_glib_418 (11552)\n");
#endif

#if __i386__
CheckTypeSize(GSourceDummyMarshal,4, 11553, 2)
#elif __x86_64__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 11)
#elif __ia64__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceDummyMarshal,4, 11553, 6)
#elif __powerpc64__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceDummyMarshal,4, 11553, 10)
#elif __s390x__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11553,0);
Msg("Find size of GSourceDummyMarshal (11553)\n");
#endif

#if __i386__
CheckTypeSize(GSourceFuncs,24, 11554, 2)
#elif __x86_64__
CheckTypeSize(GSourceFuncs,48, 11554, 11)
#elif __ia64__
CheckTypeSize(GSourceFuncs,48, 11554, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceFuncs,24, 11554, 6)
#elif __powerpc64__
CheckTypeSize(GSourceFuncs,48, 11554, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceFuncs,24, 11554, 10)
#elif __s390x__
CheckTypeSize(GSourceFuncs,48, 11554, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11554,0);
Msg("Find size of GSourceFuncs (11554)\n");
#endif

#if __i386__
CheckTypeSize(GSourceFuncs *,4, 11555, 2)
#elif __x86_64__
CheckTypeSize(GSourceFuncs *,8, 11555, 11)
#elif __ia64__
CheckTypeSize(GSourceFuncs *,8, 11555, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSourceFuncs *,4, 11555, 6)
#elif __powerpc64__
CheckTypeSize(GSourceFuncs *,8, 11555, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSourceFuncs *,4, 11555, 10)
#elif __s390x__
CheckTypeSize(GSourceFuncs *,8, 11555, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11555,0);
Msg("Find size of GSourceFuncs * (11555)\n");
#endif

#if __i386__
CheckTypeSize(GMainContext,0, 11557, 2)
#elif __x86_64__
CheckTypeSize(GMainContext,0, 11557, 11)
#elif __ia64__
CheckTypeSize(GMainContext,0, 11557, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11557,0);
Msg("Find size of GMainContext (11557)\n");
#endif

#if __i386__
CheckTypeSize(GMainContext *,4, 11558, 2)
#elif __x86_64__
CheckTypeSize(GMainContext *,8, 11558, 11)
#elif __ia64__
CheckTypeSize(GMainContext *,8, 11558, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMainContext *,4, 11558, 6)
#elif __powerpc64__
CheckTypeSize(GMainContext *,8, 11558, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMainContext *,4, 11558, 10)
#elif __s390x__
CheckTypeSize(GMainContext *,8, 11558, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11558,0);
Msg("Find size of GMainContext * (11558)\n");
#endif

#if __i386__
CheckEnum("G_IO_IN",G_IO_IN,1);
CheckEnum("G_IO_OUT",G_IO_OUT,4);
CheckEnum("G_IO_PRI",G_IO_PRI,2);
CheckEnum("G_IO_ERR",G_IO_ERR,8);
CheckEnum("G_IO_HUP",G_IO_HUP,16);
CheckEnum("G_IO_NVAL",G_IO_NVAL,32);
#elif __x86_64__
CheckEnum("G_IO_IN",G_IO_IN,1);
CheckEnum("G_IO_OUT",G_IO_OUT,4);
CheckEnum("G_IO_PRI",G_IO_PRI,2);
CheckEnum("G_IO_ERR",G_IO_ERR,8);
CheckEnum("G_IO_HUP",G_IO_HUP,16);
CheckEnum("G_IO_NVAL",G_IO_NVAL,32);
#elif __ia64__
CheckEnum("G_IO_IN",G_IO_IN,1);
CheckEnum("G_IO_OUT",G_IO_OUT,4);
CheckEnum("G_IO_PRI",G_IO_PRI,2);
CheckEnum("G_IO_ERR",G_IO_ERR,8);
CheckEnum("G_IO_HUP",G_IO_HUP,16);
CheckEnum("G_IO_NVAL",G_IO_NVAL,32);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11559,0);
Msg("Find size of anon-glib-2.0/glib.h-25 (11559)\n");
#endif

#if __i386__
CheckTypeSize(GIOCondition,4, 11560, 2)
#elif __x86_64__
CheckTypeSize(GIOCondition,4, 11560, 11)
#elif __ia64__
CheckTypeSize(GIOCondition,4, 11560, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOCondition,4, 11560, 6)
#elif __powerpc64__
CheckTypeSize(GIOCondition,4, 11560, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOCondition,4, 11560, 10)
#elif __s390x__
CheckTypeSize(GIOCondition,4, 11560, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11560,0);
Msg("Find size of GIOCondition (11560)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11561,0);
Msg("Find size of fptr_glib_18 (11561)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11562,0);
Msg("Find size of fptr_glib_423 (11562)\n");
#endif

#if __i386__
CheckEnum("G_IO_FLAG_APPEND",G_IO_FLAG_APPEND,1);
CheckEnum("G_IO_FLAG_NONBLOCK",G_IO_FLAG_NONBLOCK,2);
CheckEnum("G_IO_FLAG_IS_READABLE",G_IO_FLAG_IS_READABLE,4);
CheckEnum("G_IO_FLAG_IS_WRITEABLE",G_IO_FLAG_IS_WRITEABLE,8);
CheckEnum("G_IO_FLAG_IS_SEEKABLE",G_IO_FLAG_IS_SEEKABLE,16);
CheckEnum("G_IO_FLAG_MASK",G_IO_FLAG_MASK,31);
CheckEnum("G_IO_FLAG_GET_MASK",G_IO_FLAG_GET_MASK,31);
CheckEnum("G_IO_FLAG_SET_MASK",G_IO_FLAG_SET_MASK,3);
#elif __x86_64__
CheckEnum("G_IO_FLAG_APPEND",G_IO_FLAG_APPEND,1);
CheckEnum("G_IO_FLAG_NONBLOCK",G_IO_FLAG_NONBLOCK,2);
CheckEnum("G_IO_FLAG_IS_READABLE",G_IO_FLAG_IS_READABLE,4);
CheckEnum("G_IO_FLAG_IS_WRITEABLE",G_IO_FLAG_IS_WRITEABLE,8);
CheckEnum("G_IO_FLAG_IS_SEEKABLE",G_IO_FLAG_IS_SEEKABLE,16);
CheckEnum("G_IO_FLAG_MASK",G_IO_FLAG_MASK,31);
CheckEnum("G_IO_FLAG_GET_MASK",G_IO_FLAG_GET_MASK,31);
CheckEnum("G_IO_FLAG_SET_MASK",G_IO_FLAG_SET_MASK,3);
#elif __ia64__
CheckEnum("G_IO_FLAG_APPEND",G_IO_FLAG_APPEND,1);
CheckEnum("G_IO_FLAG_NONBLOCK",G_IO_FLAG_NONBLOCK,2);
CheckEnum("G_IO_FLAG_IS_READABLE",G_IO_FLAG_IS_READABLE,4);
CheckEnum("G_IO_FLAG_IS_WRITEABLE",G_IO_FLAG_IS_WRITEABLE,8);
CheckEnum("G_IO_FLAG_IS_SEEKABLE",G_IO_FLAG_IS_SEEKABLE,16);
CheckEnum("G_IO_FLAG_MASK",G_IO_FLAG_MASK,31);
CheckEnum("G_IO_FLAG_GET_MASK",G_IO_FLAG_GET_MASK,31);
CheckEnum("G_IO_FLAG_SET_MASK",G_IO_FLAG_SET_MASK,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11563,0);
Msg("Find size of anon-glib-2.0/glib.h-26 (11563)\n");
#endif

#if __i386__
CheckTypeSize(GIOFlags,4, 11564, 2)
#elif __x86_64__
CheckTypeSize(GIOFlags,4, 11564, 11)
#elif __ia64__
CheckTypeSize(GIOFlags,4, 11564, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOFlags,4, 11564, 6)
#elif __powerpc64__
CheckTypeSize(GIOFlags,4, 11564, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOFlags,4, 11564, 10)
#elif __s390x__
CheckTypeSize(GIOFlags,4, 11564, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11564,0);
Msg("Find size of GIOFlags (11564)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11565,0);
Msg("Find size of fptr_glib_47 (11565)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11566,0);
Msg("Find size of fptr_glib_298 (11566)\n");
#endif

#if __i386__
CheckTypeSize(GIOFuncs,32, 11567, 2)
#elif __x86_64__
CheckTypeSize(GIOFuncs,64, 11567, 11)
#elif __ia64__
CheckTypeSize(GIOFuncs,64, 11567, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOFuncs,32, 11567, 6)
#elif __powerpc64__
CheckTypeSize(GIOFuncs,64, 11567, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOFuncs,32, 11567, 10)
#elif __s390x__
CheckTypeSize(GIOFuncs,64, 11567, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11567,0);
Msg("Find size of GIOFuncs (11567)\n");
#endif

#if __i386__
CheckTypeSize(GIOFuncs *,4, 11568, 2)
#elif __x86_64__
CheckTypeSize(GIOFuncs *,8, 11568, 11)
#elif __ia64__
CheckTypeSize(GIOFuncs *,8, 11568, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOFuncs *,4, 11568, 6)
#elif __powerpc64__
CheckTypeSize(GIOFuncs *,8, 11568, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOFuncs *,4, 11568, 10)
#elif __s390x__
CheckTypeSize(GIOFuncs *,8, 11568, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11568,0);
Msg("Find size of GIOFuncs * (11568)\n");
#endif

#if __i386__
CheckTypeSize(struct _GIConv *,4, 11570, 2)
#elif __x86_64__
CheckTypeSize(struct _GIConv *,8, 11570, 11)
#elif __ia64__
CheckTypeSize(struct _GIConv *,8, 11570, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GIConv *,4, 11570, 6)
#elif __powerpc64__
CheckTypeSize(struct _GIConv *,8, 11570, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GIConv *,4, 11570, 10)
#elif __s390x__
CheckTypeSize(struct _GIConv *,8, 11570, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11570,0);
Msg("Find size of _GIConv * (11570)\n");
#endif

#if __i386__
CheckTypeSize(GIConv,4, 11571, 2)
#elif __x86_64__
CheckTypeSize(GIConv,8, 11571, 11)
#elif __ia64__
CheckTypeSize(GIConv,8, 11571, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIConv,4, 11571, 6)
#elif __powerpc64__
CheckTypeSize(GIConv,8, 11571, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIConv,4, 11571, 10)
#elif __s390x__
CheckTypeSize(GIConv,8, 11571, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11571,0);
Msg("Find size of GIConv (11571)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GOptionGroup,0, 11574, 2)
#elif __x86_64__
CheckTypeSize(GOptionGroup,0, 11574, 11)
#elif __ia64__
CheckTypeSize(GOptionGroup,0, 11574, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11574,0);
Msg("Find size of GOptionGroup (11574)\n");
#endif

#if __i386__
CheckTypeSize(GOptionGroup *,4, 11575, 2)
#elif __x86_64__
CheckTypeSize(GOptionGroup *,8, 11575, 11)
#elif __ia64__
CheckTypeSize(GOptionGroup *,8, 11575, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionGroup *,4, 11575, 6)
#elif __powerpc64__
CheckTypeSize(GOptionGroup *,8, 11575, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionGroup *,4, 11575, 10)
#elif __s390x__
CheckTypeSize(GOptionGroup *,8, 11575, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11575,0);
Msg("Find size of GOptionGroup * (11575)\n");
#endif

#if __i386__
CheckEnum("G_SPAWN_LEAVE_DESCRIPTORS_OPEN",G_SPAWN_LEAVE_DESCRIPTORS_OPEN,1);
CheckEnum("G_SPAWN_DO_NOT_REAP_CHILD",G_SPAWN_DO_NOT_REAP_CHILD,2);
CheckEnum("G_SPAWN_SEARCH_PATH",G_SPAWN_SEARCH_PATH,4);
CheckEnum("G_SPAWN_STDOUT_TO_DEV_NULL",G_SPAWN_STDOUT_TO_DEV_NULL,8);
CheckEnum("G_SPAWN_STDERR_TO_DEV_NULL",G_SPAWN_STDERR_TO_DEV_NULL,16);
CheckEnum("G_SPAWN_CHILD_INHERITS_STDIN",G_SPAWN_CHILD_INHERITS_STDIN,32);
CheckEnum("G_SPAWN_FILE_AND_ARGV_ZERO",G_SPAWN_FILE_AND_ARGV_ZERO,64);
#elif __x86_64__
CheckEnum("G_SPAWN_LEAVE_DESCRIPTORS_OPEN",G_SPAWN_LEAVE_DESCRIPTORS_OPEN,1);
CheckEnum("G_SPAWN_DO_NOT_REAP_CHILD",G_SPAWN_DO_NOT_REAP_CHILD,2);
CheckEnum("G_SPAWN_SEARCH_PATH",G_SPAWN_SEARCH_PATH,4);
CheckEnum("G_SPAWN_STDOUT_TO_DEV_NULL",G_SPAWN_STDOUT_TO_DEV_NULL,8);
CheckEnum("G_SPAWN_STDERR_TO_DEV_NULL",G_SPAWN_STDERR_TO_DEV_NULL,16);
CheckEnum("G_SPAWN_CHILD_INHERITS_STDIN",G_SPAWN_CHILD_INHERITS_STDIN,32);
CheckEnum("G_SPAWN_FILE_AND_ARGV_ZERO",G_SPAWN_FILE_AND_ARGV_ZERO,64);
#elif __ia64__
CheckEnum("G_SPAWN_LEAVE_DESCRIPTORS_OPEN",G_SPAWN_LEAVE_DESCRIPTORS_OPEN,1);
CheckEnum("G_SPAWN_DO_NOT_REAP_CHILD",G_SPAWN_DO_NOT_REAP_CHILD,2);
CheckEnum("G_SPAWN_SEARCH_PATH",G_SPAWN_SEARCH_PATH,4);
CheckEnum("G_SPAWN_STDOUT_TO_DEV_NULL",G_SPAWN_STDOUT_TO_DEV_NULL,8);
CheckEnum("G_SPAWN_STDERR_TO_DEV_NULL",G_SPAWN_STDERR_TO_DEV_NULL,16);
CheckEnum("G_SPAWN_CHILD_INHERITS_STDIN",G_SPAWN_CHILD_INHERITS_STDIN,32);
CheckEnum("G_SPAWN_FILE_AND_ARGV_ZERO",G_SPAWN_FILE_AND_ARGV_ZERO,64);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11576,0);
Msg("Find size of anon-glib-2.0/glib.h-96 (11576)\n");
#endif

#if __i386__
CheckTypeSize(GSpawnFlags,4, 11577, 2)
#elif __x86_64__
CheckTypeSize(GSpawnFlags,4, 11577, 11)
#elif __ia64__
CheckTypeSize(GSpawnFlags,4, 11577, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSpawnFlags,4, 11577, 6)
#elif __powerpc64__
CheckTypeSize(GSpawnFlags,4, 11577, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSpawnFlags,4, 11577, 10)
#elif __s390x__
CheckTypeSize(GSpawnFlags,4, 11577, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11577,0);
Msg("Find size of GSpawnFlags (11577)\n");
#endif

#if __i386__
CheckTypeSize(GSpawnChildSetupFunc,4, 11578, 2)
#elif __x86_64__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 11)
#elif __ia64__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSpawnChildSetupFunc,4, 11578, 6)
#elif __powerpc64__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSpawnChildSetupFunc,4, 11578, 10)
#elif __s390x__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11578,0);
Msg("Find size of GSpawnChildSetupFunc (11578)\n");
#endif

#if __i386__
CheckTypeSize(GPid,4, 11579, 2)
#elif __x86_64__
CheckTypeSize(GPid,4, 11579, 11)
#elif __ia64__
CheckTypeSize(GPid,4, 11579, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPid,4, 11579, 6)
#elif __powerpc64__
CheckTypeSize(GPid,4, 11579, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPid,4, 11579, 10)
#elif __s390x__
CheckTypeSize(GPid,4, 11579, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11579,0);
Msg("Find size of GPid (11579)\n");
#endif

#if __i386__
CheckTypeSize(GPid *,4, 11580, 2)
#elif __x86_64__
CheckTypeSize(GPid *,8, 11580, 11)
#elif __ia64__
CheckTypeSize(GPid *,8, 11580, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPid *,4, 11580, 6)
#elif __powerpc64__
CheckTypeSize(GPid *,8, 11580, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPid *,4, 11580, 10)
#elif __s390x__
CheckTypeSize(GPid *,8, 11580, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11580,0);
Msg("Find size of GPid * (11580)\n");
#endif

#if __i386__
CheckTypeSize(struct _GThreadPool,12, 11581, 2)
CheckMemberSize(struct _GThreadPool,user_data,4,2,41487)
CheckOffset(struct _GThreadPool,user_data,4,2,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,2,41488)
CheckOffset(struct _GThreadPool,exclusive,8,2,41488)
#elif __x86_64__
CheckTypeSize(struct _GThreadPool,24, 11581, 11)
CheckMemberSize(struct _GThreadPool,user_data,8,11,41487)
CheckOffset(struct _GThreadPool,user_data,8,11,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,11,41488)
CheckOffset(struct _GThreadPool,exclusive,16,11,41488)
#elif __ia64__
CheckTypeSize(struct _GThreadPool,24, 11581, 3)
CheckMemberSize(struct _GThreadPool,user_data,8,3,41487)
CheckOffset(struct _GThreadPool,user_data,8,3,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,3,41488)
CheckOffset(struct _GThreadPool,exclusive,16,3,41488)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GThreadPool,12, 11581, 6)
CheckMemberSize(struct _GThreadPool,user_data,4,6,41487)
CheckOffset(struct _GThreadPool,user_data,4,6,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,6,41488)
CheckOffset(struct _GThreadPool,exclusive,8,6,41488)
#elif __powerpc64__
CheckTypeSize(struct _GThreadPool,24, 11581, 9)
CheckMemberSize(struct _GThreadPool,user_data,8,9,41487)
CheckOffset(struct _GThreadPool,user_data,8,9,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,9,41488)
CheckOffset(struct _GThreadPool,exclusive,16,9,41488)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GThreadPool,12, 11581, 10)
CheckMemberSize(struct _GThreadPool,user_data,4,10,41487)
CheckOffset(struct _GThreadPool,user_data,4,10,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,10,41488)
CheckOffset(struct _GThreadPool,exclusive,8,10,41488)
#elif __s390x__
CheckTypeSize(struct _GThreadPool,24, 11581, 12)
CheckMemberSize(struct _GThreadPool,user_data,8,12,41487)
CheckOffset(struct _GThreadPool,user_data,8,12,41487)
CheckMemberSize(struct _GThreadPool,exclusive,4,12,41488)
CheckOffset(struct _GThreadPool,exclusive,16,12,41488)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11581,0);
Msg("Find size of _GThreadPool (11581)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11582,0);
Msg("Find size of fptr_glib_288 (11582)\n");
#endif

#if __i386__
CheckTypeSize(GFunc,4, 11583, 2)
#elif __x86_64__
CheckTypeSize(GFunc,8, 11583, 11)
#elif __ia64__
CheckTypeSize(GFunc,8, 11583, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFunc,4, 11583, 6)
#elif __powerpc64__
CheckTypeSize(GFunc,8, 11583, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFunc,4, 11583, 10)
#elif __s390x__
CheckTypeSize(GFunc,8, 11583, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11583,0);
Msg("Find size of GFunc (11583)\n");
#endif

#if __i386__
CheckTypeSize(GThreadPool,12, 11584, 2)
#elif __x86_64__
CheckTypeSize(GThreadPool,24, 11584, 11)
#elif __ia64__
CheckTypeSize(GThreadPool,24, 11584, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadPool,12, 11584, 6)
#elif __powerpc64__
CheckTypeSize(GThreadPool,24, 11584, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadPool,12, 11584, 10)
#elif __s390x__
CheckTypeSize(GThreadPool,24, 11584, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11584,0);
Msg("Find size of GThreadPool (11584)\n");
#endif

#if __i386__
CheckTypeSize(GThreadPool *,4, 11585, 2)
#elif __x86_64__
CheckTypeSize(GThreadPool *,8, 11585, 11)
#elif __ia64__
CheckTypeSize(GThreadPool *,8, 11585, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadPool *,4, 11585, 6)
#elif __powerpc64__
CheckTypeSize(GThreadPool *,8, 11585, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadPool *,4, 11585, 10)
#elif __s390x__
CheckTypeSize(GThreadPool *,8, 11585, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11585,0);
Msg("Find size of GThreadPool * (11585)\n");
#endif

#if __i386__
CheckTypeSize(struct _GDate,8, 11586, 2)
Msg("Missing member data for _GDate on IA32\n");
#elif __x86_64__
CheckTypeSize(struct _GDate,8, 11586, 11)
Msg("Missing member data for _GDate on x86-64\n");
#elif __ia64__
CheckTypeSize(struct _GDate,8, 11586, 3)
Msg("Missing member data for _GDate on IA64\n");
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GDate,8, 11586, 6)
Msg("Missing member data for _GDate on PPC32\n");
#elif __powerpc64__
CheckTypeSize(struct _GDate,8, 11586, 9)
Msg("Missing member data for _GDate on PPC64\n");
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GDate,8, 11586, 10)
Msg("Missing member data for _GDate on S390\n");
#elif __s390x__
CheckTypeSize(struct _GDate,8, 11586, 12)
Msg("Missing member data for _GDate on S390X\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11586,0);
Msg("Find size of _GDate (11586)\n");
#endif

#if __i386__
CheckTypeSize(GDate,8, 11587, 2)
#elif __x86_64__
CheckTypeSize(GDate,8, 11587, 11)
#elif __ia64__
CheckTypeSize(GDate,8, 11587, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDate,8, 11587, 6)
#elif __powerpc64__
CheckTypeSize(GDate,8, 11587, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDate,8, 11587, 10)
#elif __s390x__
CheckTypeSize(GDate,8, 11587, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11587,0);
Msg("Find size of GDate (11587)\n");
#endif

#if __i386__
CheckTypeSize(GDate *,4, 11588, 2)
#elif __x86_64__
CheckTypeSize(GDate *,8, 11588, 11)
#elif __ia64__
CheckTypeSize(GDate *,8, 11588, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDate *,4, 11588, 6)
#elif __powerpc64__
CheckTypeSize(GDate *,8, 11588, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDate *,4, 11588, 10)
#elif __s390x__
CheckTypeSize(GDate *,8, 11588, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11588,0);
Msg("Find size of GDate * (11588)\n");
#endif

#if __i386__
CheckEnum("G_DATE_BAD_MONTH",G_DATE_BAD_MONTH,0);
CheckEnum("G_DATE_JANUARY",G_DATE_JANUARY,1);
CheckEnum("G_DATE_FEBRUARY",G_DATE_FEBRUARY,2);
CheckEnum("G_DATE_MARCH",G_DATE_MARCH,3);
CheckEnum("G_DATE_APRIL",G_DATE_APRIL,4);
CheckEnum("G_DATE_MAY",G_DATE_MAY,5);
CheckEnum("G_DATE_JUNE",G_DATE_JUNE,6);
CheckEnum("G_DATE_JULY",G_DATE_JULY,7);
CheckEnum("G_DATE_AUGUST",G_DATE_AUGUST,8);
CheckEnum("G_DATE_SEPTEMBER",G_DATE_SEPTEMBER,9);
CheckEnum("G_DATE_OCTOBER",G_DATE_OCTOBER,10);
CheckEnum("G_DATE_NOVEMBER",G_DATE_NOVEMBER,11);
CheckEnum("G_DATE_DECEMBER",G_DATE_DECEMBER,12);
#elif __x86_64__
CheckEnum("G_DATE_BAD_MONTH",G_DATE_BAD_MONTH,0);
CheckEnum("G_DATE_JANUARY",G_DATE_JANUARY,1);
CheckEnum("G_DATE_FEBRUARY",G_DATE_FEBRUARY,2);
CheckEnum("G_DATE_MARCH",G_DATE_MARCH,3);
CheckEnum("G_DATE_APRIL",G_DATE_APRIL,4);
CheckEnum("G_DATE_MAY",G_DATE_MAY,5);
CheckEnum("G_DATE_JUNE",G_DATE_JUNE,6);
CheckEnum("G_DATE_JULY",G_DATE_JULY,7);
CheckEnum("G_DATE_AUGUST",G_DATE_AUGUST,8);
CheckEnum("G_DATE_SEPTEMBER",G_DATE_SEPTEMBER,9);
CheckEnum("G_DATE_OCTOBER",G_DATE_OCTOBER,10);
CheckEnum("G_DATE_NOVEMBER",G_DATE_NOVEMBER,11);
CheckEnum("G_DATE_DECEMBER",G_DATE_DECEMBER,12);
#elif __ia64__
CheckEnum("G_DATE_BAD_MONTH",G_DATE_BAD_MONTH,0);
CheckEnum("G_DATE_JANUARY",G_DATE_JANUARY,1);
CheckEnum("G_DATE_FEBRUARY",G_DATE_FEBRUARY,2);
CheckEnum("G_DATE_MARCH",G_DATE_MARCH,3);
CheckEnum("G_DATE_APRIL",G_DATE_APRIL,4);
CheckEnum("G_DATE_MAY",G_DATE_MAY,5);
CheckEnum("G_DATE_JUNE",G_DATE_JUNE,6);
CheckEnum("G_DATE_JULY",G_DATE_JULY,7);
CheckEnum("G_DATE_AUGUST",G_DATE_AUGUST,8);
CheckEnum("G_DATE_SEPTEMBER",G_DATE_SEPTEMBER,9);
CheckEnum("G_DATE_OCTOBER",G_DATE_OCTOBER,10);
CheckEnum("G_DATE_NOVEMBER",G_DATE_NOVEMBER,11);
CheckEnum("G_DATE_DECEMBER",G_DATE_DECEMBER,12);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11589,0);
Msg("Find size of anon-glib-2.0/glib.h-15 (11589)\n");
#endif

#if __i386__
CheckTypeSize(GDateMonth,4, 11590, 2)
#elif __x86_64__
CheckTypeSize(GDateMonth,4, 11590, 11)
#elif __ia64__
CheckTypeSize(GDateMonth,4, 11590, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDateMonth,4, 11590, 6)
#elif __powerpc64__
CheckTypeSize(GDateMonth,4, 11590, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDateMonth,4, 11590, 10)
#elif __s390x__
CheckTypeSize(GDateMonth,4, 11590, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11590,0);
Msg("Find size of GDateMonth (11590)\n");
#endif

#if __i386__
CheckTypeSize(GAsyncQueue,0, 11592, 2)
#elif __x86_64__
CheckTypeSize(GAsyncQueue,0, 11592, 11)
#elif __ia64__
CheckTypeSize(GAsyncQueue,0, 11592, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11592,0);
Msg("Find size of GAsyncQueue (11592)\n");
#endif

#if __i386__
CheckTypeSize(GAsyncQueue *,4, 11593, 2)
#elif __x86_64__
CheckTypeSize(GAsyncQueue *,8, 11593, 11)
#elif __ia64__
CheckTypeSize(GAsyncQueue *,8, 11593, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GAsyncQueue *,4, 11593, 6)
#elif __powerpc64__
CheckTypeSize(GAsyncQueue *,8, 11593, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GAsyncQueue *,4, 11593, 10)
#elif __s390x__
CheckTypeSize(GAsyncQueue *,8, 11593, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11593,0);
Msg("Find size of GAsyncQueue * (11593)\n");
#endif

#if __i386__
CheckTypeSize(struct _GPollFD,8, 11594, 2)
CheckMemberSize(struct _GPollFD,events,2,2,41509)
CheckOffset(struct _GPollFD,events,4,2,41509)
CheckMemberSize(struct _GPollFD,revents,2,2,41510)
CheckOffset(struct _GPollFD,revents,6,2,41510)
#elif __x86_64__
CheckTypeSize(struct _GPollFD,8, 11594, 11)
CheckMemberSize(struct _GPollFD,events,2,11,41509)
CheckOffset(struct _GPollFD,events,4,11,41509)
CheckMemberSize(struct _GPollFD,revents,2,11,41510)
CheckOffset(struct _GPollFD,revents,6,11,41510)
#elif __ia64__
CheckTypeSize(struct _GPollFD,8, 11594, 3)
CheckMemberSize(struct _GPollFD,events,2,3,41509)
CheckOffset(struct _GPollFD,events,4,3,41509)
CheckMemberSize(struct _GPollFD,revents,2,3,41510)
CheckOffset(struct _GPollFD,revents,6,3,41510)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GPollFD,8, 11594, 6)
CheckMemberSize(struct _GPollFD,events,2,6,41509)
CheckOffset(struct _GPollFD,events,4,6,41509)
CheckMemberSize(struct _GPollFD,revents,2,6,41510)
CheckOffset(struct _GPollFD,revents,6,6,41510)
#elif __powerpc64__
CheckTypeSize(struct _GPollFD,8, 11594, 9)
CheckMemberSize(struct _GPollFD,events,2,9,41509)
CheckOffset(struct _GPollFD,events,4,9,41509)
CheckMemberSize(struct _GPollFD,revents,2,9,41510)
CheckOffset(struct _GPollFD,revents,6,9,41510)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GPollFD,8, 11594, 10)
CheckMemberSize(struct _GPollFD,events,2,10,41509)
CheckOffset(struct _GPollFD,events,4,10,41509)
CheckMemberSize(struct _GPollFD,revents,2,10,41510)
CheckOffset(struct _GPollFD,revents,6,10,41510)
#elif __s390x__
CheckTypeSize(struct _GPollFD,8, 11594, 12)
CheckMemberSize(struct _GPollFD,events,2,12,41509)
CheckOffset(struct _GPollFD,events,4,12,41509)
CheckMemberSize(struct _GPollFD,revents,2,12,41510)
CheckOffset(struct _GPollFD,revents,6,12,41510)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11594,0);
Msg("Find size of _GPollFD (11594)\n");
#endif

#if __i386__
CheckTypeSize(gushort,2, 11595, 2)
#elif __x86_64__
CheckTypeSize(gushort,2, 11595, 11)
#elif __ia64__
CheckTypeSize(gushort,2, 11595, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gushort,2, 11595, 6)
#elif __powerpc64__
CheckTypeSize(gushort,2, 11595, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gushort,2, 11595, 10)
#elif __s390x__
CheckTypeSize(gushort,2, 11595, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11595,0);
Msg("Find size of gushort (11595)\n");
#endif

#if __i386__
CheckTypeSize(GPollFD,8, 11596, 2)
#elif __x86_64__
CheckTypeSize(GPollFD,8, 11596, 11)
#elif __ia64__
CheckTypeSize(GPollFD,8, 11596, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPollFD,8, 11596, 6)
#elif __powerpc64__
CheckTypeSize(GPollFD,8, 11596, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPollFD,8, 11596, 10)
#elif __s390x__
CheckTypeSize(GPollFD,8, 11596, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11596,0);
Msg("Find size of GPollFD (11596)\n");
#endif

#if __i386__
CheckTypeSize(GPollFD *,4, 11597, 2)
#elif __x86_64__
CheckTypeSize(GPollFD *,8, 11597, 11)
#elif __ia64__
CheckTypeSize(GPollFD *,8, 11597, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPollFD *,4, 11597, 6)
#elif __powerpc64__
CheckTypeSize(GPollFD *,8, 11597, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPollFD *,4, 11597, 10)
#elif __s390x__
CheckTypeSize(GPollFD *,8, 11597, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11597,0);
Msg("Find size of GPollFD * (11597)\n");
#endif

#if __i386__
CheckTypeSize(gdouble,8, 11598, 2)
#elif __x86_64__
CheckTypeSize(gdouble,8, 11598, 11)
#elif __ia64__
CheckTypeSize(gdouble,8, 11598, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gdouble,8, 11598, 6)
#elif __powerpc64__
CheckTypeSize(gdouble,8, 11598, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gdouble,8, 11598, 10)
#elif __s390x__
CheckTypeSize(gdouble,8, 11598, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11598,0);
Msg("Find size of gdouble (11598)\n");
#endif

#if __i386__
CheckTypeSize(GTree,0, 11600, 2)
#elif __x86_64__
CheckTypeSize(GTree,0, 11600, 11)
#elif __ia64__
CheckTypeSize(GTree,0, 11600, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11600,0);
Msg("Find size of GTree (11600)\n");
#endif

#if __i386__
CheckTypeSize(GTree *,4, 11601, 2)
#elif __x86_64__
CheckTypeSize(GTree *,8, 11601, 11)
#elif __ia64__
CheckTypeSize(GTree *,8, 11601, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTree *,4, 11601, 6)
#elif __powerpc64__
CheckTypeSize(GTree *,8, 11601, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTree *,4, 11601, 10)
#elif __s390x__
CheckTypeSize(GTree *,8, 11601, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11601,0);
Msg("Find size of GTree * (11601)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11602,0);
Msg("Find size of fptr_glib_384 (11602)\n");
#endif

#if __i386__
CheckTypeSize(GCompareDataFunc,4, 11603, 2)
#elif __x86_64__
CheckTypeSize(GCompareDataFunc,8, 11603, 11)
#elif __ia64__
CheckTypeSize(GCompareDataFunc,8, 11603, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCompareDataFunc,4, 11603, 6)
#elif __powerpc64__
CheckTypeSize(GCompareDataFunc,8, 11603, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCompareDataFunc,4, 11603, 10)
#elif __s390x__
CheckTypeSize(GCompareDataFunc,8, 11603, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11603,0);
Msg("Find size of GCompareDataFunc (11603)\n");
#endif

#if __i386__
CheckTypeSize(guint8,1, 11604, 2)
#elif __x86_64__
CheckTypeSize(guint8,1, 11604, 11)
#elif __ia64__
CheckTypeSize(guint8,1, 11604, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint8,1, 11604, 6)
#elif __powerpc64__
CheckTypeSize(guint8,1, 11604, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guint8,1, 11604, 10)
#elif __s390x__
CheckTypeSize(guint8,1, 11604, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11604,0);
Msg("Find size of guint8 (11604)\n");
#endif

#if __i386__
CheckTypeSize(GDateYear,2, 11605, 2)
#elif __x86_64__
CheckTypeSize(GDateYear,2, 11605, 11)
#elif __ia64__
CheckTypeSize(GDateYear,2, 11605, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDateYear,2, 11605, 6)
#elif __powerpc64__
CheckTypeSize(GDateYear,2, 11605, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDateYear,2, 11605, 10)
#elif __s390x__
CheckTypeSize(GDateYear,2, 11605, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11605,0);
Msg("Find size of GDateYear (11605)\n");
#endif

#if __i386__
CheckTypeSize(GCache,0, 11607, 2)
#elif __x86_64__
CheckTypeSize(GCache,0, 11607, 11)
#elif __ia64__
CheckTypeSize(GCache,0, 11607, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11607,0);
Msg("Find size of GCache (11607)\n");
#endif

#if __i386__
CheckTypeSize(GCache *,4, 11608, 2)
#elif __x86_64__
CheckTypeSize(GCache *,8, 11608, 11)
#elif __ia64__
CheckTypeSize(GCache *,8, 11608, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCache *,4, 11608, 6)
#elif __powerpc64__
CheckTypeSize(GCache *,8, 11608, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCache *,4, 11608, 10)
#elif __s390x__
CheckTypeSize(GCache *,8, 11608, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11608,0);
Msg("Find size of GCache * (11608)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11609,0);
Msg("Find size of fptr_glib_7 (11609)\n");
#endif

#if __i386__
CheckTypeSize(GHFunc,4, 11610, 2)
#elif __x86_64__
CheckTypeSize(GHFunc,8, 11610, 11)
#elif __ia64__
CheckTypeSize(GHFunc,8, 11610, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHFunc,4, 11610, 6)
#elif __powerpc64__
CheckTypeSize(GHFunc,8, 11610, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHFunc,4, 11610, 10)
#elif __s390x__
CheckTypeSize(GHFunc,8, 11610, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11610,0);
Msg("Find size of GHFunc (11610)\n");
#endif

#if __i386__
CheckTypeSize(const GDate,8, 11611, 2)
#elif __x86_64__
CheckTypeSize(const GDate,8, 11611, 11)
#elif __ia64__
CheckTypeSize(const GDate,8, 11611, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GDate,8, 11611, 6)
#elif __powerpc64__
CheckTypeSize(const GDate,8, 11611, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GDate,8, 11611, 10)
#elif __s390x__
CheckTypeSize(const GDate,8, 11611, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11611,0);
Msg("Find size of const GDate (11611)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11612,0);
Msg("Find size of const GDate * (11612)\n");
#endif

#if __i386__
CheckTypeSize(struct _GScanner,92, 11613, 2)
CheckMemberSize(struct _GScanner,max_parse_errors,4,2,41518)
CheckOffset(struct _GScanner,max_parse_errors,4,2,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,2,41519)
CheckOffset(struct _GScanner,parse_errors,8,2,41519)
CheckMemberSize(struct _GScanner,input_name,4,2,41520)
CheckOffset(struct _GScanner,input_name,12,2,41520)
CheckMemberSize(struct _GScanner,qdata,4,2,41521)
CheckOffset(struct _GScanner,qdata,16,2,41521)
CheckMemberSize(struct _GScanner,config,4,2,41549)
CheckOffset(struct _GScanner,config,20,2,41549)
CheckMemberSize(struct _GScanner,token,4,2,41574)
CheckOffset(struct _GScanner,token,24,2,41574)
CheckMemberSize(struct _GScanner,value,8,2,41587)
CheckOffset(struct _GScanner,value,28,2,41587)
CheckMemberSize(struct _GScanner,line,4,2,41588)
CheckOffset(struct _GScanner,line,36,2,41588)
CheckMemberSize(struct _GScanner,position,4,2,41589)
CheckOffset(struct _GScanner,position,40,2,41589)
CheckMemberSize(struct _GScanner,next_token,4,2,41590)
CheckOffset(struct _GScanner,next_token,44,2,41590)
CheckMemberSize(struct _GScanner,next_value,8,2,41591)
CheckOffset(struct _GScanner,next_value,48,2,41591)
CheckMemberSize(struct _GScanner,next_line,4,2,41592)
CheckOffset(struct _GScanner,next_line,56,2,41592)
CheckMemberSize(struct _GScanner,next_position,4,2,41593)
CheckOffset(struct _GScanner,next_position,60,2,41593)
CheckMemberSize(struct _GScanner,symbol_table,4,2,41594)
CheckOffset(struct _GScanner,symbol_table,64,2,41594)
CheckMemberSize(struct _GScanner,input_fd,4,2,41595)
CheckOffset(struct _GScanner,input_fd,68,2,41595)
CheckMemberSize(struct _GScanner,text,4,2,41596)
CheckOffset(struct _GScanner,text,72,2,41596)
CheckMemberSize(struct _GScanner,text_end,4,2,41597)
CheckOffset(struct _GScanner,text_end,76,2,41597)
CheckMemberSize(struct _GScanner,buffer,4,2,41598)
CheckOffset(struct _GScanner,buffer,80,2,41598)
CheckMemberSize(struct _GScanner,scope_id,4,2,41599)
CheckOffset(struct _GScanner,scope_id,84,2,41599)
CheckMemberSize(struct _GScanner,msg_handler,4,2,41603)
CheckOffset(struct _GScanner,msg_handler,88,2,41603)
#elif __x86_64__
CheckTypeSize(struct _GScanner,144, 11613, 11)
CheckMemberSize(struct _GScanner,max_parse_errors,4,11,41518)
CheckOffset(struct _GScanner,max_parse_errors,8,11,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,11,41519)
CheckOffset(struct _GScanner,parse_errors,12,11,41519)
CheckMemberSize(struct _GScanner,input_name,8,11,41520)
CheckOffset(struct _GScanner,input_name,16,11,41520)
CheckMemberSize(struct _GScanner,qdata,8,11,41521)
CheckOffset(struct _GScanner,qdata,24,11,41521)
CheckMemberSize(struct _GScanner,config,8,11,41549)
CheckOffset(struct _GScanner,config,32,11,41549)
CheckMemberSize(struct _GScanner,token,4,11,41574)
CheckOffset(struct _GScanner,token,40,11,41574)
CheckMemberSize(struct _GScanner,value,8,11,41587)
CheckOffset(struct _GScanner,value,48,11,41587)
CheckMemberSize(struct _GScanner,line,4,11,41588)
CheckOffset(struct _GScanner,line,56,11,41588)
CheckMemberSize(struct _GScanner,position,4,11,41589)
CheckOffset(struct _GScanner,position,60,11,41589)
CheckMemberSize(struct _GScanner,next_token,4,11,41590)
CheckOffset(struct _GScanner,next_token,64,11,41590)
CheckMemberSize(struct _GScanner,next_value,8,11,41591)
CheckOffset(struct _GScanner,next_value,72,11,41591)
CheckMemberSize(struct _GScanner,next_line,4,11,41592)
CheckOffset(struct _GScanner,next_line,80,11,41592)
CheckMemberSize(struct _GScanner,next_position,4,11,41593)
CheckOffset(struct _GScanner,next_position,84,11,41593)
CheckMemberSize(struct _GScanner,symbol_table,8,11,41594)
CheckOffset(struct _GScanner,symbol_table,88,11,41594)
CheckMemberSize(struct _GScanner,input_fd,4,11,41595)
CheckOffset(struct _GScanner,input_fd,96,11,41595)
CheckMemberSize(struct _GScanner,text,8,11,41596)
CheckOffset(struct _GScanner,text,104,11,41596)
CheckMemberSize(struct _GScanner,text_end,8,11,41597)
CheckOffset(struct _GScanner,text_end,112,11,41597)
CheckMemberSize(struct _GScanner,buffer,8,11,41598)
CheckOffset(struct _GScanner,buffer,120,11,41598)
CheckMemberSize(struct _GScanner,scope_id,4,11,41599)
CheckOffset(struct _GScanner,scope_id,128,11,41599)
CheckMemberSize(struct _GScanner,msg_handler,8,11,41603)
CheckOffset(struct _GScanner,msg_handler,136,11,41603)
#elif __ia64__
CheckTypeSize(struct _GScanner,144, 11613, 3)
CheckMemberSize(struct _GScanner,max_parse_errors,4,3,41518)
CheckOffset(struct _GScanner,max_parse_errors,8,3,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,3,41519)
CheckOffset(struct _GScanner,parse_errors,12,3,41519)
CheckMemberSize(struct _GScanner,input_name,8,3,41520)
CheckOffset(struct _GScanner,input_name,16,3,41520)
CheckMemberSize(struct _GScanner,qdata,8,3,41521)
CheckOffset(struct _GScanner,qdata,24,3,41521)
CheckMemberSize(struct _GScanner,config,8,3,41549)
CheckOffset(struct _GScanner,config,32,3,41549)
CheckMemberSize(struct _GScanner,token,4,3,41574)
CheckOffset(struct _GScanner,token,40,3,41574)
CheckMemberSize(struct _GScanner,value,8,3,41587)
CheckOffset(struct _GScanner,value,48,3,41587)
CheckMemberSize(struct _GScanner,line,4,3,41588)
CheckOffset(struct _GScanner,line,56,3,41588)
CheckMemberSize(struct _GScanner,position,4,3,41589)
CheckOffset(struct _GScanner,position,60,3,41589)
CheckMemberSize(struct _GScanner,next_token,4,3,41590)
CheckOffset(struct _GScanner,next_token,64,3,41590)
CheckMemberSize(struct _GScanner,next_value,8,3,41591)
CheckOffset(struct _GScanner,next_value,72,3,41591)
CheckMemberSize(struct _GScanner,next_line,4,3,41592)
CheckOffset(struct _GScanner,next_line,80,3,41592)
CheckMemberSize(struct _GScanner,next_position,4,3,41593)
CheckOffset(struct _GScanner,next_position,84,3,41593)
CheckMemberSize(struct _GScanner,symbol_table,8,3,41594)
CheckOffset(struct _GScanner,symbol_table,88,3,41594)
CheckMemberSize(struct _GScanner,input_fd,4,3,41595)
CheckOffset(struct _GScanner,input_fd,96,3,41595)
CheckMemberSize(struct _GScanner,text,8,3,41596)
CheckOffset(struct _GScanner,text,104,3,41596)
CheckMemberSize(struct _GScanner,text_end,8,3,41597)
CheckOffset(struct _GScanner,text_end,112,3,41597)
CheckMemberSize(struct _GScanner,buffer,8,3,41598)
CheckOffset(struct _GScanner,buffer,120,3,41598)
CheckMemberSize(struct _GScanner,scope_id,4,3,41599)
CheckOffset(struct _GScanner,scope_id,128,3,41599)
CheckMemberSize(struct _GScanner,msg_handler,8,3,41603)
CheckOffset(struct _GScanner,msg_handler,136,3,41603)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GScanner,104, 11613, 6)
CheckMemberSize(struct _GScanner,max_parse_errors,4,6,41518)
CheckOffset(struct _GScanner,max_parse_errors,4,6,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,6,41519)
CheckOffset(struct _GScanner,parse_errors,8,6,41519)
CheckMemberSize(struct _GScanner,input_name,4,6,41520)
CheckOffset(struct _GScanner,input_name,12,6,41520)
CheckMemberSize(struct _GScanner,qdata,4,6,41521)
CheckOffset(struct _GScanner,qdata,16,6,41521)
CheckMemberSize(struct _GScanner,config,4,6,41549)
CheckOffset(struct _GScanner,config,20,6,41549)
CheckMemberSize(struct _GScanner,token,4,6,41574)
CheckOffset(struct _GScanner,token,24,6,41574)
CheckMemberSize(struct _GScanner,value,8,6,41587)
CheckOffset(struct _GScanner,value,32,6,41587)
CheckMemberSize(struct _GScanner,line,4,6,41588)
CheckOffset(struct _GScanner,line,40,6,41588)
CheckMemberSize(struct _GScanner,position,4,6,41589)
CheckOffset(struct _GScanner,position,44,6,41589)
CheckMemberSize(struct _GScanner,next_token,4,6,41590)
CheckOffset(struct _GScanner,next_token,48,6,41590)
CheckMemberSize(struct _GScanner,next_value,8,6,41591)
CheckOffset(struct _GScanner,next_value,56,6,41591)
CheckMemberSize(struct _GScanner,next_line,4,6,41592)
CheckOffset(struct _GScanner,next_line,64,6,41592)
CheckMemberSize(struct _GScanner,next_position,4,6,41593)
CheckOffset(struct _GScanner,next_position,68,6,41593)
CheckMemberSize(struct _GScanner,symbol_table,4,6,41594)
CheckOffset(struct _GScanner,symbol_table,72,6,41594)
CheckMemberSize(struct _GScanner,input_fd,4,6,41595)
CheckOffset(struct _GScanner,input_fd,76,6,41595)
CheckMemberSize(struct _GScanner,text,4,6,41596)
CheckOffset(struct _GScanner,text,80,6,41596)
CheckMemberSize(struct _GScanner,text_end,4,6,41597)
CheckOffset(struct _GScanner,text_end,84,6,41597)
CheckMemberSize(struct _GScanner,buffer,4,6,41598)
CheckOffset(struct _GScanner,buffer,88,6,41598)
CheckMemberSize(struct _GScanner,scope_id,4,6,41599)
CheckOffset(struct _GScanner,scope_id,92,6,41599)
CheckMemberSize(struct _GScanner,msg_handler,4,6,41603)
CheckOffset(struct _GScanner,msg_handler,96,6,41603)
#elif __powerpc64__
CheckTypeSize(struct _GScanner,144, 11613, 9)
CheckMemberSize(struct _GScanner,max_parse_errors,4,9,41518)
CheckOffset(struct _GScanner,max_parse_errors,8,9,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,9,41519)
CheckOffset(struct _GScanner,parse_errors,12,9,41519)
CheckMemberSize(struct _GScanner,input_name,8,9,41520)
CheckOffset(struct _GScanner,input_name,16,9,41520)
CheckMemberSize(struct _GScanner,qdata,8,9,41521)
CheckOffset(struct _GScanner,qdata,24,9,41521)
CheckMemberSize(struct _GScanner,config,8,9,41549)
CheckOffset(struct _GScanner,config,32,9,41549)
CheckMemberSize(struct _GScanner,token,4,9,41574)
CheckOffset(struct _GScanner,token,40,9,41574)
CheckMemberSize(struct _GScanner,value,8,9,41587)
CheckOffset(struct _GScanner,value,48,9,41587)
CheckMemberSize(struct _GScanner,line,4,9,41588)
CheckOffset(struct _GScanner,line,56,9,41588)
CheckMemberSize(struct _GScanner,position,4,9,41589)
CheckOffset(struct _GScanner,position,60,9,41589)
CheckMemberSize(struct _GScanner,next_token,4,9,41590)
CheckOffset(struct _GScanner,next_token,64,9,41590)
CheckMemberSize(struct _GScanner,next_value,8,9,41591)
CheckOffset(struct _GScanner,next_value,72,9,41591)
CheckMemberSize(struct _GScanner,next_line,4,9,41592)
CheckOffset(struct _GScanner,next_line,80,9,41592)
CheckMemberSize(struct _GScanner,next_position,4,9,41593)
CheckOffset(struct _GScanner,next_position,84,9,41593)
CheckMemberSize(struct _GScanner,symbol_table,8,9,41594)
CheckOffset(struct _GScanner,symbol_table,88,9,41594)
CheckMemberSize(struct _GScanner,input_fd,4,9,41595)
CheckOffset(struct _GScanner,input_fd,96,9,41595)
CheckMemberSize(struct _GScanner,text,8,9,41596)
CheckOffset(struct _GScanner,text,104,9,41596)
CheckMemberSize(struct _GScanner,text_end,8,9,41597)
CheckOffset(struct _GScanner,text_end,112,9,41597)
CheckMemberSize(struct _GScanner,buffer,8,9,41598)
CheckOffset(struct _GScanner,buffer,120,9,41598)
CheckMemberSize(struct _GScanner,scope_id,4,9,41599)
CheckOffset(struct _GScanner,scope_id,128,9,41599)
CheckMemberSize(struct _GScanner,msg_handler,8,9,41603)
CheckOffset(struct _GScanner,msg_handler,136,9,41603)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GScanner,104, 11613, 10)
CheckMemberSize(struct _GScanner,max_parse_errors,4,10,41518)
CheckOffset(struct _GScanner,max_parse_errors,4,10,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,10,41519)
CheckOffset(struct _GScanner,parse_errors,8,10,41519)
CheckMemberSize(struct _GScanner,input_name,4,10,41520)
CheckOffset(struct _GScanner,input_name,12,10,41520)
CheckMemberSize(struct _GScanner,qdata,4,10,41521)
CheckOffset(struct _GScanner,qdata,16,10,41521)
CheckMemberSize(struct _GScanner,config,4,10,41549)
CheckOffset(struct _GScanner,config,20,10,41549)
CheckMemberSize(struct _GScanner,token,4,10,41574)
CheckOffset(struct _GScanner,token,24,10,41574)
CheckMemberSize(struct _GScanner,value,8,10,41587)
CheckOffset(struct _GScanner,value,32,10,41587)
CheckMemberSize(struct _GScanner,line,4,10,41588)
CheckOffset(struct _GScanner,line,40,10,41588)
CheckMemberSize(struct _GScanner,position,4,10,41589)
CheckOffset(struct _GScanner,position,44,10,41589)
CheckMemberSize(struct _GScanner,next_token,4,10,41590)
CheckOffset(struct _GScanner,next_token,48,10,41590)
CheckMemberSize(struct _GScanner,next_value,8,10,41591)
CheckOffset(struct _GScanner,next_value,56,10,41591)
CheckMemberSize(struct _GScanner,next_line,4,10,41592)
CheckOffset(struct _GScanner,next_line,64,10,41592)
CheckMemberSize(struct _GScanner,next_position,4,10,41593)
CheckOffset(struct _GScanner,next_position,68,10,41593)
CheckMemberSize(struct _GScanner,symbol_table,4,10,41594)
CheckOffset(struct _GScanner,symbol_table,72,10,41594)
CheckMemberSize(struct _GScanner,input_fd,4,10,41595)
CheckOffset(struct _GScanner,input_fd,76,10,41595)
CheckMemberSize(struct _GScanner,text,4,10,41596)
CheckOffset(struct _GScanner,text,80,10,41596)
CheckMemberSize(struct _GScanner,text_end,4,10,41597)
CheckOffset(struct _GScanner,text_end,84,10,41597)
CheckMemberSize(struct _GScanner,buffer,4,10,41598)
CheckOffset(struct _GScanner,buffer,88,10,41598)
CheckMemberSize(struct _GScanner,scope_id,4,10,41599)
CheckOffset(struct _GScanner,scope_id,92,10,41599)
CheckMemberSize(struct _GScanner,msg_handler,4,10,41603)
CheckOffset(struct _GScanner,msg_handler,96,10,41603)
#elif __s390x__
CheckTypeSize(struct _GScanner,144, 11613, 12)
CheckMemberSize(struct _GScanner,max_parse_errors,4,12,41518)
CheckOffset(struct _GScanner,max_parse_errors,8,12,41518)
CheckMemberSize(struct _GScanner,parse_errors,4,12,41519)
CheckOffset(struct _GScanner,parse_errors,12,12,41519)
CheckMemberSize(struct _GScanner,input_name,8,12,41520)
CheckOffset(struct _GScanner,input_name,16,12,41520)
CheckMemberSize(struct _GScanner,qdata,8,12,41521)
CheckOffset(struct _GScanner,qdata,24,12,41521)
CheckMemberSize(struct _GScanner,config,8,12,41549)
CheckOffset(struct _GScanner,config,32,12,41549)
CheckMemberSize(struct _GScanner,token,4,12,41574)
CheckOffset(struct _GScanner,token,40,12,41574)
CheckMemberSize(struct _GScanner,value,8,12,41587)
CheckOffset(struct _GScanner,value,48,12,41587)
CheckMemberSize(struct _GScanner,line,4,12,41588)
CheckOffset(struct _GScanner,line,56,12,41588)
CheckMemberSize(struct _GScanner,position,4,12,41589)
CheckOffset(struct _GScanner,position,60,12,41589)
CheckMemberSize(struct _GScanner,next_token,4,12,41590)
CheckOffset(struct _GScanner,next_token,64,12,41590)
CheckMemberSize(struct _GScanner,next_value,8,12,41591)
CheckOffset(struct _GScanner,next_value,72,12,41591)
CheckMemberSize(struct _GScanner,next_line,4,12,41592)
CheckOffset(struct _GScanner,next_line,80,12,41592)
CheckMemberSize(struct _GScanner,next_position,4,12,41593)
CheckOffset(struct _GScanner,next_position,84,12,41593)
CheckMemberSize(struct _GScanner,symbol_table,8,12,41594)
CheckOffset(struct _GScanner,symbol_table,88,12,41594)
CheckMemberSize(struct _GScanner,input_fd,4,12,41595)
CheckOffset(struct _GScanner,input_fd,96,12,41595)
CheckMemberSize(struct _GScanner,text,8,12,41596)
CheckOffset(struct _GScanner,text,104,12,41596)
CheckMemberSize(struct _GScanner,text_end,8,12,41597)
CheckOffset(struct _GScanner,text_end,112,12,41597)
CheckMemberSize(struct _GScanner,buffer,8,12,41598)
CheckOffset(struct _GScanner,buffer,120,12,41598)
CheckMemberSize(struct _GScanner,scope_id,4,12,41599)
CheckOffset(struct _GScanner,scope_id,128,12,41599)
CheckMemberSize(struct _GScanner,msg_handler,8,12,41603)
CheckOffset(struct _GScanner,msg_handler,136,12,41603)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11613,0);
Msg("Find size of _GScanner (11613)\n");
#endif

#if __i386__
CheckTypeSize(struct _GScannerConfig,24, 11614, 2)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,4,2,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,4,2,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,4,2,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,8,2,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,4,2,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,12,2,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,2,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,20,2,41548)
#elif __x86_64__
CheckTypeSize(struct _GScannerConfig,40, 11614, 11)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,8,11,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,8,11,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,8,11,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,16,11,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,8,11,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,24,11,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,11,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,36,11,41548)
#elif __ia64__
CheckTypeSize(struct _GScannerConfig,40, 11614, 3)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,8,3,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,8,3,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,8,3,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,16,3,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,8,3,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,24,3,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,3,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,36,3,41548)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GScannerConfig,24, 11614, 6)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,4,6,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,4,6,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,4,6,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,8,6,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,4,6,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,12,6,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,6,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,20,6,41548)
#elif __powerpc64__
CheckTypeSize(struct _GScannerConfig,40, 11614, 9)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,8,9,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,8,9,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,8,9,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,16,9,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,8,9,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,24,9,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,9,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,36,9,41548)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GScannerConfig,24, 11614, 10)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,4,10,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,4,10,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,4,10,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,8,10,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,4,10,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,12,10,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,10,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,20,10,41548)
#elif __s390x__
CheckTypeSize(struct _GScannerConfig,40, 11614, 12)
CheckMemberSize(struct _GScannerConfig,cset_identifier_first,8,12,41523)
CheckOffset(struct _GScannerConfig,cset_identifier_first,8,12,41523)
CheckMemberSize(struct _GScannerConfig,cset_identifier_nth,8,12,41524)
CheckOffset(struct _GScannerConfig,cset_identifier_nth,16,12,41524)
CheckMemberSize(struct _GScannerConfig,cpair_comment_single,8,12,41525)
CheckOffset(struct _GScannerConfig,cpair_comment_single,24,12,41525)
CheckMemberSize(struct _GScannerConfig,padding_dummy,4,12,41548)
CheckOffset(struct _GScannerConfig,padding_dummy,36,12,41548)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11614,0);
Msg("Find size of _GScannerConfig (11614)\n");
#endif

#if __i386__
CheckTypeSize(GScannerConfig,24, 11615, 2)
#elif __x86_64__
CheckTypeSize(GScannerConfig,40, 11615, 11)
#elif __ia64__
CheckTypeSize(GScannerConfig,40, 11615, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GScannerConfig,24, 11615, 6)
#elif __powerpc64__
CheckTypeSize(GScannerConfig,40, 11615, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GScannerConfig,24, 11615, 10)
#elif __s390x__
CheckTypeSize(GScannerConfig,40, 11615, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11615,0);
Msg("Find size of GScannerConfig (11615)\n");
#endif

#if __i386__
CheckTypeSize(GScannerConfig *,4, 11616, 2)
#elif __x86_64__
CheckTypeSize(GScannerConfig *,8, 11616, 11)
#elif __ia64__
CheckTypeSize(GScannerConfig *,8, 11616, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GScannerConfig *,4, 11616, 6)
#elif __powerpc64__
CheckTypeSize(GScannerConfig *,8, 11616, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GScannerConfig *,4, 11616, 10)
#elif __s390x__
CheckTypeSize(GScannerConfig *,8, 11616, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11616,0);
Msg("Find size of GScannerConfig * (11616)\n");
#endif

#if __i386__
CheckEnum("G_TOKEN_EOF",G_TOKEN_EOF,0);
CheckEnum("G_TOKEN_LEFT_PAREN",G_TOKEN_LEFT_PAREN,40);
CheckEnum("G_TOKEN_RIGHT_PAREN",G_TOKEN_RIGHT_PAREN,41);
CheckEnum("G_TOKEN_LEFT_CURLY",G_TOKEN_LEFT_CURLY,123);
CheckEnum("G_TOKEN_RIGHT_CURLY",G_TOKEN_RIGHT_CURLY,125);
CheckEnum("G_TOKEN_LEFT_BRACE",G_TOKEN_LEFT_BRACE,91);
CheckEnum("G_TOKEN_RIGHT_BRACE",G_TOKEN_RIGHT_BRACE,93);
CheckEnum("G_TOKEN_EQUAL_SIGN",G_TOKEN_EQUAL_SIGN,61);
CheckEnum("G_TOKEN_COMMA",G_TOKEN_COMMA,44);
CheckEnum("G_TOKEN_NONE",G_TOKEN_NONE,256);
CheckEnum("G_TOKEN_ERROR",G_TOKEN_ERROR,257);
CheckEnum("G_TOKEN_CHAR",G_TOKEN_CHAR,258);
CheckEnum("G_TOKEN_BINARY",G_TOKEN_BINARY,259);
CheckEnum("G_TOKEN_OCTAL",G_TOKEN_OCTAL,260);
CheckEnum("G_TOKEN_INT",G_TOKEN_INT,261);
CheckEnum("G_TOKEN_HEX",G_TOKEN_HEX,262);
CheckEnum("G_TOKEN_FLOAT",G_TOKEN_FLOAT,263);
CheckEnum("G_TOKEN_STRING",G_TOKEN_STRING,264);
CheckEnum("G_TOKEN_SYMBOL",G_TOKEN_SYMBOL,265);
CheckEnum("G_TOKEN_IDENTIFIER",G_TOKEN_IDENTIFIER,266);
CheckEnum("G_TOKEN_IDENTIFIER_NULL",G_TOKEN_IDENTIFIER_NULL,267);
CheckEnum("G_TOKEN_COMMENT_SINGLE",G_TOKEN_COMMENT_SINGLE,268);
CheckEnum("G_TOKEN_COMMENT_MULTI",G_TOKEN_COMMENT_MULTI,269);
CheckEnum("G_TOKEN_LAST",G_TOKEN_LAST,270);
#elif __x86_64__
CheckEnum("G_TOKEN_EOF",G_TOKEN_EOF,0);
CheckEnum("G_TOKEN_LEFT_PAREN",G_TOKEN_LEFT_PAREN,40);
CheckEnum("G_TOKEN_RIGHT_PAREN",G_TOKEN_RIGHT_PAREN,41);
CheckEnum("G_TOKEN_LEFT_CURLY",G_TOKEN_LEFT_CURLY,123);
CheckEnum("G_TOKEN_RIGHT_CURLY",G_TOKEN_RIGHT_CURLY,125);
CheckEnum("G_TOKEN_LEFT_BRACE",G_TOKEN_LEFT_BRACE,91);
CheckEnum("G_TOKEN_RIGHT_BRACE",G_TOKEN_RIGHT_BRACE,93);
CheckEnum("G_TOKEN_EQUAL_SIGN",G_TOKEN_EQUAL_SIGN,61);
CheckEnum("G_TOKEN_COMMA",G_TOKEN_COMMA,44);
CheckEnum("G_TOKEN_NONE",G_TOKEN_NONE,256);
CheckEnum("G_TOKEN_ERROR",G_TOKEN_ERROR,257);
CheckEnum("G_TOKEN_CHAR",G_TOKEN_CHAR,258);
CheckEnum("G_TOKEN_BINARY",G_TOKEN_BINARY,259);
CheckEnum("G_TOKEN_OCTAL",G_TOKEN_OCTAL,260);
CheckEnum("G_TOKEN_INT",G_TOKEN_INT,261);
CheckEnum("G_TOKEN_HEX",G_TOKEN_HEX,262);
CheckEnum("G_TOKEN_FLOAT",G_TOKEN_FLOAT,263);
CheckEnum("G_TOKEN_STRING",G_TOKEN_STRING,264);
CheckEnum("G_TOKEN_SYMBOL",G_TOKEN_SYMBOL,265);
CheckEnum("G_TOKEN_IDENTIFIER",G_TOKEN_IDENTIFIER,266);
CheckEnum("G_TOKEN_IDENTIFIER_NULL",G_TOKEN_IDENTIFIER_NULL,267);
CheckEnum("G_TOKEN_COMMENT_SINGLE",G_TOKEN_COMMENT_SINGLE,268);
CheckEnum("G_TOKEN_COMMENT_MULTI",G_TOKEN_COMMENT_MULTI,269);
CheckEnum("G_TOKEN_LAST",G_TOKEN_LAST,270);
#elif __ia64__
CheckEnum("G_TOKEN_EOF",G_TOKEN_EOF,0);
CheckEnum("G_TOKEN_LEFT_PAREN",G_TOKEN_LEFT_PAREN,40);
CheckEnum("G_TOKEN_RIGHT_PAREN",G_TOKEN_RIGHT_PAREN,41);
CheckEnum("G_TOKEN_LEFT_CURLY",G_TOKEN_LEFT_CURLY,123);
CheckEnum("G_TOKEN_RIGHT_CURLY",G_TOKEN_RIGHT_CURLY,125);
CheckEnum("G_TOKEN_LEFT_BRACE",G_TOKEN_LEFT_BRACE,91);
CheckEnum("G_TOKEN_RIGHT_BRACE",G_TOKEN_RIGHT_BRACE,93);
CheckEnum("G_TOKEN_EQUAL_SIGN",G_TOKEN_EQUAL_SIGN,61);
CheckEnum("G_TOKEN_COMMA",G_TOKEN_COMMA,44);
CheckEnum("G_TOKEN_NONE",G_TOKEN_NONE,256);
CheckEnum("G_TOKEN_ERROR",G_TOKEN_ERROR,257);
CheckEnum("G_TOKEN_CHAR",G_TOKEN_CHAR,258);
CheckEnum("G_TOKEN_BINARY",G_TOKEN_BINARY,259);
CheckEnum("G_TOKEN_OCTAL",G_TOKEN_OCTAL,260);
CheckEnum("G_TOKEN_INT",G_TOKEN_INT,261);
CheckEnum("G_TOKEN_HEX",G_TOKEN_HEX,262);
CheckEnum("G_TOKEN_FLOAT",G_TOKEN_FLOAT,263);
CheckEnum("G_TOKEN_STRING",G_TOKEN_STRING,264);
CheckEnum("G_TOKEN_SYMBOL",G_TOKEN_SYMBOL,265);
CheckEnum("G_TOKEN_IDENTIFIER",G_TOKEN_IDENTIFIER,266);
CheckEnum("G_TOKEN_IDENTIFIER_NULL",G_TOKEN_IDENTIFIER_NULL,267);
CheckEnum("G_TOKEN_COMMENT_SINGLE",G_TOKEN_COMMENT_SINGLE,268);
CheckEnum("G_TOKEN_COMMENT_MULTI",G_TOKEN_COMMENT_MULTI,269);
CheckEnum("G_TOKEN_LAST",G_TOKEN_LAST,270);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11617,0);
Msg("Find size of anon-glib-2.0/glib.h-66 (11617)\n");
#endif

#if __i386__
CheckTypeSize(GTokenType,4, 11618, 2)
#elif __x86_64__
CheckTypeSize(GTokenType,4, 11618, 11)
#elif __ia64__
CheckTypeSize(GTokenType,4, 11618, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTokenType,4, 11618, 6)
#elif __powerpc64__
CheckTypeSize(GTokenType,4, 11618, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTokenType,4, 11618, 10)
#elif __s390x__
CheckTypeSize(GTokenType,4, 11618, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11618,0);
Msg("Find size of GTokenType (11618)\n");
#endif

#if __i386__
CheckTypeSize(union _GTokenValue,8, 11619, 2)
Msg("Missing member data for _GTokenValue on IA32\n");
CheckOffset(union _GTokenValue,v_symbol,0,2,41575)
CheckOffset(union _GTokenValue,v_identifier,0,2,41576)
CheckOffset(union _GTokenValue,v_binary,0,2,41577)
CheckOffset(union _GTokenValue,v_octal,0,2,41578)
CheckOffset(union _GTokenValue,v_int,0,2,41579)
CheckOffset(union _GTokenValue,v_int64,0,2,41580)
CheckOffset(union _GTokenValue,v_float,0,2,41581)
CheckOffset(union _GTokenValue,v_hex,0,2,41582)
CheckOffset(union _GTokenValue,v_string,0,2,41583)
CheckOffset(union _GTokenValue,v_comment,0,2,41584)
CheckOffset(union _GTokenValue,v_char,0,2,41585)
CheckOffset(union _GTokenValue,v_error,0,2,41586)
#elif __x86_64__
CheckTypeSize(union _GTokenValue,8, 11619, 11)
Msg("Missing member data for _GTokenValue on x86-64\n");
CheckOffset(union _GTokenValue,v_symbol,0,11,41575)
CheckOffset(union _GTokenValue,v_identifier,0,11,41576)
CheckOffset(union _GTokenValue,v_binary,0,11,41577)
CheckOffset(union _GTokenValue,v_octal,0,11,41578)
CheckOffset(union _GTokenValue,v_int,0,11,41579)
CheckOffset(union _GTokenValue,v_int64,0,11,41580)
CheckOffset(union _GTokenValue,v_float,0,11,41581)
CheckOffset(union _GTokenValue,v_hex,0,11,41582)
CheckOffset(union _GTokenValue,v_string,0,11,41583)
CheckOffset(union _GTokenValue,v_comment,0,11,41584)
CheckOffset(union _GTokenValue,v_char,0,11,41585)
CheckOffset(union _GTokenValue,v_error,0,11,41586)
#elif __ia64__
CheckTypeSize(union _GTokenValue,8, 11619, 3)
Msg("Missing member data for _GTokenValue on IA64\n");
CheckOffset(union _GTokenValue,v_symbol,0,3,41575)
CheckOffset(union _GTokenValue,v_identifier,0,3,41576)
CheckOffset(union _GTokenValue,v_binary,0,3,41577)
CheckOffset(union _GTokenValue,v_octal,0,3,41578)
CheckOffset(union _GTokenValue,v_int,0,3,41579)
CheckOffset(union _GTokenValue,v_int64,0,3,41580)
CheckOffset(union _GTokenValue,v_float,0,3,41581)
CheckOffset(union _GTokenValue,v_hex,0,3,41582)
CheckOffset(union _GTokenValue,v_string,0,3,41583)
CheckOffset(union _GTokenValue,v_comment,0,3,41584)
CheckOffset(union _GTokenValue,v_char,0,3,41585)
CheckOffset(union _GTokenValue,v_error,0,3,41586)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(union _GTokenValue,8, 11619, 6)
Msg("Missing member data for _GTokenValue on PPC32\n");
CheckOffset(union _GTokenValue,v_symbol,0,6,41575)
CheckOffset(union _GTokenValue,v_identifier,0,6,41576)
CheckOffset(union _GTokenValue,v_binary,0,6,41577)
CheckOffset(union _GTokenValue,v_octal,0,6,41578)
CheckOffset(union _GTokenValue,v_int,0,6,41579)
CheckOffset(union _GTokenValue,v_int64,0,6,41580)
CheckOffset(union _GTokenValue,v_float,0,6,41581)
CheckOffset(union _GTokenValue,v_hex,0,6,41582)
CheckOffset(union _GTokenValue,v_string,0,6,41583)
CheckOffset(union _GTokenValue,v_comment,0,6,41584)
CheckOffset(union _GTokenValue,v_char,0,6,41585)
CheckOffset(union _GTokenValue,v_error,0,6,41586)
#elif __powerpc64__
CheckTypeSize(union _GTokenValue,8, 11619, 9)
Msg("Missing member data for _GTokenValue on PPC64\n");
CheckOffset(union _GTokenValue,v_symbol,0,9,41575)
CheckOffset(union _GTokenValue,v_identifier,0,9,41576)
CheckOffset(union _GTokenValue,v_binary,0,9,41577)
CheckOffset(union _GTokenValue,v_octal,0,9,41578)
CheckOffset(union _GTokenValue,v_int,0,9,41579)
CheckOffset(union _GTokenValue,v_int64,0,9,41580)
CheckOffset(union _GTokenValue,v_float,0,9,41581)
CheckOffset(union _GTokenValue,v_hex,0,9,41582)
CheckOffset(union _GTokenValue,v_string,0,9,41583)
CheckOffset(union _GTokenValue,v_comment,0,9,41584)
CheckOffset(union _GTokenValue,v_char,0,9,41585)
CheckOffset(union _GTokenValue,v_error,0,9,41586)
#elif __s390__ && !__s390x__
CheckTypeSize(union _GTokenValue,8, 11619, 10)
Msg("Missing member data for _GTokenValue on S390\n");
CheckOffset(union _GTokenValue,v_symbol,0,10,41575)
CheckOffset(union _GTokenValue,v_identifier,0,10,41576)
CheckOffset(union _GTokenValue,v_binary,0,10,41577)
CheckOffset(union _GTokenValue,v_octal,0,10,41578)
CheckOffset(union _GTokenValue,v_int,0,10,41579)
CheckOffset(union _GTokenValue,v_int64,0,10,41580)
CheckOffset(union _GTokenValue,v_float,0,10,41581)
CheckOffset(union _GTokenValue,v_hex,0,10,41582)
CheckOffset(union _GTokenValue,v_string,0,10,41583)
CheckOffset(union _GTokenValue,v_comment,0,10,41584)
CheckOffset(union _GTokenValue,v_char,0,10,41585)
CheckOffset(union _GTokenValue,v_error,0,10,41586)
#elif __s390x__
CheckTypeSize(union _GTokenValue,8, 11619, 12)
Msg("Missing member data for _GTokenValue on S390X\n");
CheckOffset(union _GTokenValue,v_symbol,0,12,41575)
CheckOffset(union _GTokenValue,v_identifier,0,12,41576)
CheckOffset(union _GTokenValue,v_binary,0,12,41577)
CheckOffset(union _GTokenValue,v_octal,0,12,41578)
CheckOffset(union _GTokenValue,v_int,0,12,41579)
CheckOffset(union _GTokenValue,v_int64,0,12,41580)
CheckOffset(union _GTokenValue,v_float,0,12,41581)
CheckOffset(union _GTokenValue,v_hex,0,12,41582)
CheckOffset(union _GTokenValue,v_string,0,12,41583)
CheckOffset(union _GTokenValue,v_comment,0,12,41584)
CheckOffset(union _GTokenValue,v_char,0,12,41585)
CheckOffset(union _GTokenValue,v_error,0,12,41586)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11619,0);
Msg("Find size of _GTokenValue (11619)\n");
#endif

#if __i386__
CheckTypeSize(guchar,1, 11622, 2)
#elif __x86_64__
CheckTypeSize(guchar,1, 11622, 11)
#elif __ia64__
CheckTypeSize(guchar,1, 11622, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guchar,1, 11622, 6)
#elif __powerpc64__
CheckTypeSize(guchar,1, 11622, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guchar,1, 11622, 10)
#elif __s390x__
CheckTypeSize(guchar,1, 11622, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11622,0);
Msg("Find size of guchar (11622)\n");
#endif

#if __i386__
CheckTypeSize(GTokenValue,8, 11623, 2)
#elif __x86_64__
CheckTypeSize(GTokenValue,8, 11623, 11)
#elif __ia64__
CheckTypeSize(GTokenValue,8, 11623, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTokenValue,8, 11623, 6)
#elif __powerpc64__
CheckTypeSize(GTokenValue,8, 11623, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTokenValue,8, 11623, 10)
#elif __s390x__
CheckTypeSize(GTokenValue,8, 11623, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11623,0);
Msg("Find size of GTokenValue (11623)\n");
#endif

#if __i386__
CheckTypeSize(GScanner,92, 11624, 2)
#elif __x86_64__
CheckTypeSize(GScanner,144, 11624, 11)
#elif __ia64__
CheckTypeSize(GScanner,144, 11624, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GScanner,104, 11624, 6)
#elif __powerpc64__
CheckTypeSize(GScanner,144, 11624, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GScanner,104, 11624, 10)
#elif __s390x__
CheckTypeSize(GScanner,144, 11624, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11624,0);
Msg("Find size of GScanner (11624)\n");
#endif

#if __i386__
CheckTypeSize(GScanner *,4, 11625, 2)
#elif __x86_64__
CheckTypeSize(GScanner *,8, 11625, 11)
#elif __ia64__
CheckTypeSize(GScanner *,8, 11625, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GScanner *,4, 11625, 6)
#elif __powerpc64__
CheckTypeSize(GScanner *,8, 11625, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GScanner *,4, 11625, 10)
#elif __s390x__
CheckTypeSize(GScanner *,8, 11625, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11625,0);
Msg("Find size of GScanner * (11625)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11626,0);
Msg("Find size of fptr_glib_80 (11626)\n");
#endif

#if __i386__
CheckTypeSize(GScannerMsgFunc,4, 11627, 2)
#elif __x86_64__
CheckTypeSize(GScannerMsgFunc,8, 11627, 11)
#elif __ia64__
CheckTypeSize(GScannerMsgFunc,8, 11627, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GScannerMsgFunc,4, 11627, 6)
#elif __powerpc64__
CheckTypeSize(GScannerMsgFunc,8, 11627, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GScannerMsgFunc,4, 11627, 10)
#elif __s390x__
CheckTypeSize(GScannerMsgFunc,8, 11627, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11627,0);
Msg("Find size of GScannerMsgFunc (11627)\n");
#endif

#if __i386__
CheckTypeSize(struct _GByteArray,8, 11628, 2)
CheckMemberSize(struct _GByteArray,len,4,2,41605)
CheckOffset(struct _GByteArray,len,4,2,41605)
#elif __x86_64__
CheckTypeSize(struct _GByteArray,16, 11628, 11)
CheckMemberSize(struct _GByteArray,len,4,11,41605)
CheckOffset(struct _GByteArray,len,8,11,41605)
#elif __ia64__
CheckTypeSize(struct _GByteArray,16, 11628, 3)
CheckMemberSize(struct _GByteArray,len,4,3,41605)
CheckOffset(struct _GByteArray,len,8,3,41605)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GByteArray,8, 11628, 6)
CheckMemberSize(struct _GByteArray,len,4,6,41605)
CheckOffset(struct _GByteArray,len,4,6,41605)
#elif __powerpc64__
CheckTypeSize(struct _GByteArray,16, 11628, 9)
CheckMemberSize(struct _GByteArray,len,4,9,41605)
CheckOffset(struct _GByteArray,len,8,9,41605)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GByteArray,8, 11628, 10)
CheckMemberSize(struct _GByteArray,len,4,10,41605)
CheckOffset(struct _GByteArray,len,4,10,41605)
#elif __s390x__
CheckTypeSize(struct _GByteArray,16, 11628, 12)
CheckMemberSize(struct _GByteArray,len,4,12,41605)
CheckOffset(struct _GByteArray,len,8,12,41605)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11628,0);
Msg("Find size of _GByteArray (11628)\n");
#endif

#if __i386__
CheckTypeSize(guint8 *,4, 11629, 2)
#elif __x86_64__
CheckTypeSize(guint8 *,8, 11629, 11)
#elif __ia64__
CheckTypeSize(guint8 *,8, 11629, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint8 *,4, 11629, 6)
#elif __powerpc64__
CheckTypeSize(guint8 *,8, 11629, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guint8 *,4, 11629, 10)
#elif __s390x__
CheckTypeSize(guint8 *,8, 11629, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11629,0);
Msg("Find size of guint8 * (11629)\n");
#endif

#if __i386__
CheckTypeSize(GByteArray,8, 11630, 2)
#elif __x86_64__
CheckTypeSize(GByteArray,16, 11630, 11)
#elif __ia64__
CheckTypeSize(GByteArray,16, 11630, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GByteArray,8, 11630, 6)
#elif __powerpc64__
CheckTypeSize(GByteArray,16, 11630, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GByteArray,8, 11630, 10)
#elif __s390x__
CheckTypeSize(GByteArray,16, 11630, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11630,0);
Msg("Find size of GByteArray (11630)\n");
#endif

#if __i386__
CheckTypeSize(GByteArray *,4, 11631, 2)
#elif __x86_64__
CheckTypeSize(GByteArray *,8, 11631, 11)
#elif __ia64__
CheckTypeSize(GByteArray *,8, 11631, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GByteArray *,4, 11631, 6)
#elif __powerpc64__
CheckTypeSize(GByteArray *,8, 11631, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GByteArray *,4, 11631, 10)
#elif __s390x__
CheckTypeSize(GByteArray *,8, 11631, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11631,0);
Msg("Find size of GByteArray * (11631)\n");
#endif

#if __i386__
CheckEnum("G_KEY_FILE_NONE",G_KEY_FILE_NONE,0);
CheckEnum("G_KEY_FILE_KEEP_COMMENTS",G_KEY_FILE_KEEP_COMMENTS,1);
CheckEnum("G_KEY_FILE_KEEP_TRANSLATIONS",G_KEY_FILE_KEEP_TRANSLATIONS,2);
#elif __x86_64__
CheckEnum("G_KEY_FILE_NONE",G_KEY_FILE_NONE,0);
CheckEnum("G_KEY_FILE_KEEP_COMMENTS",G_KEY_FILE_KEEP_COMMENTS,1);
CheckEnum("G_KEY_FILE_KEEP_TRANSLATIONS",G_KEY_FILE_KEEP_TRANSLATIONS,2);
#elif __ia64__
CheckEnum("G_KEY_FILE_NONE",G_KEY_FILE_NONE,0);
CheckEnum("G_KEY_FILE_KEEP_COMMENTS",G_KEY_FILE_KEEP_COMMENTS,1);
CheckEnum("G_KEY_FILE_KEEP_TRANSLATIONS",G_KEY_FILE_KEEP_TRANSLATIONS,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11632,0);
Msg("Find size of anon-glib-2.0/glib.h-27 (11632)\n");
#endif

#if __i386__
CheckTypeSize(GKeyFileFlags,4, 11633, 2)
#elif __x86_64__
CheckTypeSize(GKeyFileFlags,4, 11633, 11)
#elif __ia64__
CheckTypeSize(GKeyFileFlags,4, 11633, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GKeyFileFlags,4, 11633, 6)
#elif __powerpc64__
CheckTypeSize(GKeyFileFlags,4, 11633, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GKeyFileFlags,4, 11633, 10)
#elif __s390x__
CheckTypeSize(GKeyFileFlags,4, 11633, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11633,0);
Msg("Find size of GKeyFileFlags (11633)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTrashStack,4, 11634, 2)
Msg("Missing member data for _GTrashStack on IA32\n");
CheckOffset(struct _GTrashStack,next,0,2,41609)
#elif __x86_64__
CheckTypeSize(struct _GTrashStack,8, 11634, 11)
Msg("Missing member data for _GTrashStack on x86-64\n");
CheckOffset(struct _GTrashStack,next,0,11,41609)
#elif __ia64__
CheckTypeSize(struct _GTrashStack,8, 11634, 3)
Msg("Missing member data for _GTrashStack on IA64\n");
CheckOffset(struct _GTrashStack,next,0,3,41609)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTrashStack,4, 11634, 6)
Msg("Missing member data for _GTrashStack on PPC32\n");
CheckOffset(struct _GTrashStack,next,0,6,41609)
#elif __powerpc64__
CheckTypeSize(struct _GTrashStack,8, 11634, 9)
Msg("Missing member data for _GTrashStack on PPC64\n");
CheckOffset(struct _GTrashStack,next,0,9,41609)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTrashStack,4, 11634, 10)
Msg("Missing member data for _GTrashStack on S390\n");
CheckOffset(struct _GTrashStack,next,0,10,41609)
#elif __s390x__
CheckTypeSize(struct _GTrashStack,8, 11634, 12)
Msg("Missing member data for _GTrashStack on S390X\n");
CheckOffset(struct _GTrashStack,next,0,12,41609)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11634,0);
Msg("Find size of _GTrashStack (11634)\n");
#endif

#if __i386__
CheckTypeSize(GTrashStack,4, 11635, 2)
#elif __x86_64__
CheckTypeSize(GTrashStack,8, 11635, 11)
#elif __ia64__
CheckTypeSize(GTrashStack,8, 11635, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTrashStack,4, 11635, 6)
#elif __powerpc64__
CheckTypeSize(GTrashStack,8, 11635, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTrashStack,4, 11635, 10)
#elif __s390x__
CheckTypeSize(GTrashStack,8, 11635, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11635,0);
Msg("Find size of GTrashStack (11635)\n");
#endif

#if __i386__
CheckTypeSize(GTrashStack *,4, 11636, 2)
#elif __x86_64__
CheckTypeSize(GTrashStack *,8, 11636, 11)
#elif __ia64__
CheckTypeSize(GTrashStack *,8, 11636, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTrashStack *,4, 11636, 6)
#elif __powerpc64__
CheckTypeSize(GTrashStack *,8, 11636, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTrashStack *,4, 11636, 10)
#elif __s390x__
CheckTypeSize(GTrashStack *,8, 11636, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11636,0);
Msg("Find size of GTrashStack * (11636)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11637,0);
Msg("Find size of GTrashStack * * (11637)\n");
#endif

#if __i386__
CheckTypeSize(gunichar2,2, 11638, 2)
#elif __x86_64__
CheckTypeSize(gunichar2,2, 11638, 11)
#elif __ia64__
CheckTypeSize(gunichar2,2, 11638, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gunichar2,2, 11638, 6)
#elif __powerpc64__
CheckTypeSize(gunichar2,2, 11638, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gunichar2,2, 11638, 10)
#elif __s390x__
CheckTypeSize(gunichar2,2, 11638, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11638,0);
Msg("Find size of gunichar2 (11638)\n");
#endif

#if __i386__
CheckTypeSize(gunichar2 *,4, 11639, 2)
#elif __x86_64__
CheckTypeSize(gunichar2 *,8, 11639, 11)
#elif __ia64__
CheckTypeSize(gunichar2 *,8, 11639, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gunichar2 *,4, 11639, 6)
#elif __powerpc64__
CheckTypeSize(gunichar2 *,8, 11639, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gunichar2 *,4, 11639, 10)
#elif __s390x__
CheckTypeSize(gunichar2 *,8, 11639, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11639,0);
Msg("Find size of gunichar2 * (11639)\n");
#endif

#if __i386__
CheckTypeSize(const gunichar,4, 11640, 2)
#elif __x86_64__
CheckTypeSize(const gunichar,4, 11640, 11)
#elif __ia64__
CheckTypeSize(const gunichar,4, 11640, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const gunichar,4, 11640, 6)
#elif __powerpc64__
CheckTypeSize(const gunichar,4, 11640, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const gunichar,4, 11640, 10)
#elif __s390x__
CheckTypeSize(const gunichar,4, 11640, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11640,0);
Msg("Find size of const gunichar (11640)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11641,0);
Msg("Find size of const gunichar * (11641)\n");
#endif

#if __i386__
CheckTypeSize(glong,4, 11642, 2)
#elif __x86_64__
CheckTypeSize(glong,8, 11642, 11)
#elif __ia64__
CheckTypeSize(glong,8, 11642, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(glong,4, 11642, 6)
#elif __powerpc64__
CheckTypeSize(glong,8, 11642, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(glong,4, 11642, 10)
#elif __s390x__
CheckTypeSize(glong,8, 11642, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11642,0);
Msg("Find size of glong (11642)\n");
#endif

#if __i386__
CheckTypeSize(glong *,4, 11643, 2)
#elif __x86_64__
CheckTypeSize(glong *,8, 11643, 11)
#elif __ia64__
CheckTypeSize(glong *,8, 11643, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(glong *,4, 11643, 6)
#elif __powerpc64__
CheckTypeSize(glong *,8, 11643, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(glong *,4, 11643, 10)
#elif __s390x__
CheckTypeSize(glong *,8, 11643, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11643,0);
Msg("Find size of glong * (11643)\n");
#endif

#if __i386__
CheckTypeSize(struct _GArray,8, 11644, 2)
CheckMemberSize(struct _GArray,len,4,2,41611)
CheckOffset(struct _GArray,len,4,2,41611)
#elif __x86_64__
CheckTypeSize(struct _GArray,16, 11644, 11)
CheckMemberSize(struct _GArray,len,4,11,41611)
CheckOffset(struct _GArray,len,8,11,41611)
#elif __ia64__
CheckTypeSize(struct _GArray,16, 11644, 3)
CheckMemberSize(struct _GArray,len,4,3,41611)
CheckOffset(struct _GArray,len,8,3,41611)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GArray,8, 11644, 6)
CheckMemberSize(struct _GArray,len,4,6,41611)
CheckOffset(struct _GArray,len,4,6,41611)
#elif __powerpc64__
CheckTypeSize(struct _GArray,16, 11644, 9)
CheckMemberSize(struct _GArray,len,4,9,41611)
CheckOffset(struct _GArray,len,8,9,41611)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GArray,8, 11644, 10)
CheckMemberSize(struct _GArray,len,4,10,41611)
CheckOffset(struct _GArray,len,4,10,41611)
#elif __s390x__
CheckTypeSize(struct _GArray,16, 11644, 12)
CheckMemberSize(struct _GArray,len,4,12,41611)
CheckOffset(struct _GArray,len,8,12,41611)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11644,0);
Msg("Find size of _GArray (11644)\n");
#endif

#if __i386__
CheckTypeSize(GArray,8, 11645, 2)
#elif __x86_64__
CheckTypeSize(GArray,16, 11645, 11)
#elif __ia64__
CheckTypeSize(GArray,16, 11645, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GArray,8, 11645, 6)
#elif __powerpc64__
CheckTypeSize(GArray,16, 11645, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GArray,8, 11645, 10)
#elif __s390x__
CheckTypeSize(GArray,16, 11645, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11645,0);
Msg("Find size of GArray (11645)\n");
#endif

#if __i386__
CheckTypeSize(GArray *,4, 11646, 2)
#elif __x86_64__
CheckTypeSize(GArray *,8, 11646, 11)
#elif __ia64__
CheckTypeSize(GArray *,8, 11646, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GArray *,4, 11646, 6)
#elif __powerpc64__
CheckTypeSize(GArray *,8, 11646, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GArray *,4, 11646, 10)
#elif __s390x__
CheckTypeSize(GArray *,8, 11646, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11646,0);
Msg("Find size of GArray * (11646)\n");
#endif

#if __i386__
CheckTypeSize(struct _GNode,20, 11647, 2)
CheckMemberSize(struct _GNode,next,4,2,41613)
CheckOffset(struct _GNode,next,4,2,41613)
CheckMemberSize(struct _GNode,prev,4,2,41614)
CheckOffset(struct _GNode,prev,8,2,41614)
CheckMemberSize(struct _GNode,parent,4,2,41615)
CheckOffset(struct _GNode,parent,12,2,41615)
CheckMemberSize(struct _GNode,children,4,2,41616)
CheckOffset(struct _GNode,children,16,2,41616)
#elif __x86_64__
CheckTypeSize(struct _GNode,40, 11647, 11)
CheckMemberSize(struct _GNode,next,8,11,41613)
CheckOffset(struct _GNode,next,8,11,41613)
CheckMemberSize(struct _GNode,prev,8,11,41614)
CheckOffset(struct _GNode,prev,16,11,41614)
CheckMemberSize(struct _GNode,parent,8,11,41615)
CheckOffset(struct _GNode,parent,24,11,41615)
CheckMemberSize(struct _GNode,children,8,11,41616)
CheckOffset(struct _GNode,children,32,11,41616)
#elif __ia64__
CheckTypeSize(struct _GNode,40, 11647, 3)
CheckMemberSize(struct _GNode,next,8,3,41613)
CheckOffset(struct _GNode,next,8,3,41613)
CheckMemberSize(struct _GNode,prev,8,3,41614)
CheckOffset(struct _GNode,prev,16,3,41614)
CheckMemberSize(struct _GNode,parent,8,3,41615)
CheckOffset(struct _GNode,parent,24,3,41615)
CheckMemberSize(struct _GNode,children,8,3,41616)
CheckOffset(struct _GNode,children,32,3,41616)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GNode,20, 11647, 6)
CheckMemberSize(struct _GNode,next,4,6,41613)
CheckOffset(struct _GNode,next,4,6,41613)
CheckMemberSize(struct _GNode,prev,4,6,41614)
CheckOffset(struct _GNode,prev,8,6,41614)
CheckMemberSize(struct _GNode,parent,4,6,41615)
CheckOffset(struct _GNode,parent,12,6,41615)
CheckMemberSize(struct _GNode,children,4,6,41616)
CheckOffset(struct _GNode,children,16,6,41616)
#elif __powerpc64__
CheckTypeSize(struct _GNode,40, 11647, 9)
CheckMemberSize(struct _GNode,next,8,9,41613)
CheckOffset(struct _GNode,next,8,9,41613)
CheckMemberSize(struct _GNode,prev,8,9,41614)
CheckOffset(struct _GNode,prev,16,9,41614)
CheckMemberSize(struct _GNode,parent,8,9,41615)
CheckOffset(struct _GNode,parent,24,9,41615)
CheckMemberSize(struct _GNode,children,8,9,41616)
CheckOffset(struct _GNode,children,32,9,41616)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GNode,20, 11647, 10)
CheckMemberSize(struct _GNode,next,4,10,41613)
CheckOffset(struct _GNode,next,4,10,41613)
CheckMemberSize(struct _GNode,prev,4,10,41614)
CheckOffset(struct _GNode,prev,8,10,41614)
CheckMemberSize(struct _GNode,parent,4,10,41615)
CheckOffset(struct _GNode,parent,12,10,41615)
CheckMemberSize(struct _GNode,children,4,10,41616)
CheckOffset(struct _GNode,children,16,10,41616)
#elif __s390x__
CheckTypeSize(struct _GNode,40, 11647, 12)
CheckMemberSize(struct _GNode,next,8,12,41613)
CheckOffset(struct _GNode,next,8,12,41613)
CheckMemberSize(struct _GNode,prev,8,12,41614)
CheckOffset(struct _GNode,prev,16,12,41614)
CheckMemberSize(struct _GNode,parent,8,12,41615)
CheckOffset(struct _GNode,parent,24,12,41615)
CheckMemberSize(struct _GNode,children,8,12,41616)
CheckOffset(struct _GNode,children,32,12,41616)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11647,0);
Msg("Find size of _GNode (11647)\n");
#endif

#if __i386__
CheckTypeSize(GNode,20, 11648, 2)
#elif __x86_64__
CheckTypeSize(GNode,40, 11648, 11)
#elif __ia64__
CheckTypeSize(GNode,40, 11648, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GNode,20, 11648, 6)
#elif __powerpc64__
CheckTypeSize(GNode,40, 11648, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GNode,20, 11648, 10)
#elif __s390x__
CheckTypeSize(GNode,40, 11648, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11648,0);
Msg("Find size of GNode (11648)\n");
#endif

#if __i386__
CheckTypeSize(GNode *,4, 11649, 2)
#elif __x86_64__
CheckTypeSize(GNode *,8, 11649, 11)
#elif __ia64__
CheckTypeSize(GNode *,8, 11649, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GNode *,4, 11649, 6)
#elif __powerpc64__
CheckTypeSize(GNode *,8, 11649, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GNode *,4, 11649, 10)
#elif __s390x__
CheckTypeSize(GNode *,8, 11649, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11649,0);
Msg("Find size of GNode * (11649)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11650,0);
Msg("Find size of fptr_glib_177 (11650)\n");
#endif

#if __i386__
CheckTypeSize(GHRFunc,4, 11651, 2)
#elif __x86_64__
CheckTypeSize(GHRFunc,8, 11651, 11)
#elif __ia64__
CheckTypeSize(GHRFunc,8, 11651, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHRFunc,4, 11651, 6)
#elif __powerpc64__
CheckTypeSize(GHRFunc,8, 11651, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHRFunc,4, 11651, 10)
#elif __s390x__
CheckTypeSize(GHRFunc,8, 11651, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11651,0);
Msg("Find size of GHRFunc (11651)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11652,0);
Msg("Find size of fptr_glib_136 (11652)\n");
#endif

#if __i386__
CheckTypeSize(GCompareFunc,4, 11653, 2)
#elif __x86_64__
CheckTypeSize(GCompareFunc,8, 11653, 11)
#elif __ia64__
CheckTypeSize(GCompareFunc,8, 11653, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCompareFunc,4, 11653, 6)
#elif __powerpc64__
CheckTypeSize(GCompareFunc,8, 11653, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCompareFunc,4, 11653, 10)
#elif __s390x__
CheckTypeSize(GCompareFunc,8, 11653, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11653,0);
Msg("Find size of GCompareFunc (11653)\n");
#endif

#if __i386__
CheckTypeSize(gint32,4, 11654, 2)
#elif __x86_64__
CheckTypeSize(gint32,4, 11654, 11)
#elif __ia64__
CheckTypeSize(gint32,4, 11654, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gint32,4, 11654, 6)
#elif __powerpc64__
CheckTypeSize(gint32,4, 11654, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gint32,4, 11654, 10)
#elif __s390x__
CheckTypeSize(gint32,4, 11654, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11654,0);
Msg("Find size of gint32 (11654)\n");
#endif

#if __i386__
CheckTypeSize(GTime,4, 11655, 2)
#elif __x86_64__
CheckTypeSize(GTime,4, 11655, 11)
#elif __ia64__
CheckTypeSize(GTime,4, 11655, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTime,4, 11655, 6)
#elif __powerpc64__
CheckTypeSize(GTime,4, 11655, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTime,4, 11655, 10)
#elif __s390x__
CheckTypeSize(GTime,4, 11655, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11655,0);
Msg("Find size of GTime (11655)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11656,0);
Msg("Find size of fptr_glib_272 (11656)\n");
#endif

#if __i386__
CheckTypeSize(GPollFunc,4, 11657, 2)
#elif __x86_64__
CheckTypeSize(GPollFunc,8, 11657, 11)
#elif __ia64__
CheckTypeSize(GPollFunc,8, 11657, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPollFunc,4, 11657, 6)
#elif __powerpc64__
CheckTypeSize(GPollFunc,8, 11657, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPollFunc,4, 11657, 10)
#elif __s390x__
CheckTypeSize(GPollFunc,8, 11657, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11657,0);
Msg("Find size of GPollFunc (11657)\n");
#endif

#if __i386__
CheckTypeSize(gulong *,4, 11658, 2)
#elif __x86_64__
CheckTypeSize(gulong *,8, 11658, 11)
#elif __ia64__
CheckTypeSize(gulong *,8, 11658, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gulong *,4, 11658, 6)
#elif __powerpc64__
CheckTypeSize(gulong *,8, 11658, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gulong *,4, 11658, 10)
#elif __s390x__
CheckTypeSize(gulong *,8, 11658, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11658,0);
Msg("Find size of gulong * (11658)\n");
#endif

#if __i386__
CheckTypeSize(GDateDay,1, 11659, 2)
#elif __x86_64__
CheckTypeSize(GDateDay,1, 11659, 11)
#elif __ia64__
CheckTypeSize(GDateDay,1, 11659, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDateDay,1, 11659, 6)
#elif __powerpc64__
CheckTypeSize(GDateDay,1, 11659, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDateDay,1, 11659, 10)
#elif __s390x__
CheckTypeSize(GDateDay,1, 11659, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11659,0);
Msg("Find size of GDateDay (11659)\n");
#endif

#if __i386__
CheckEnum("G_UNICODE_BREAK_MANDATORY",G_UNICODE_BREAK_MANDATORY,0);
CheckEnum("G_UNICODE_BREAK_CARRIAGE_RETURN",G_UNICODE_BREAK_CARRIAGE_RETURN,1);
CheckEnum("G_UNICODE_BREAK_LINE_FEED",G_UNICODE_BREAK_LINE_FEED,2);
CheckEnum("G_UNICODE_BREAK_COMBINING_MARK",G_UNICODE_BREAK_COMBINING_MARK,3);
CheckEnum("G_UNICODE_BREAK_SURROGATE",G_UNICODE_BREAK_SURROGATE,4);
CheckEnum("G_UNICODE_BREAK_ZERO_WIDTH_SPACE",G_UNICODE_BREAK_ZERO_WIDTH_SPACE,5);
CheckEnum("G_UNICODE_BREAK_INSEPARABLE",G_UNICODE_BREAK_INSEPARABLE,6);
CheckEnum("G_UNICODE_BREAK_NON_BREAKING_GLUE",G_UNICODE_BREAK_NON_BREAKING_GLUE,7);
CheckEnum("G_UNICODE_BREAK_CONTINGENT",G_UNICODE_BREAK_CONTINGENT,8);
CheckEnum("G_UNICODE_BREAK_SPACE",G_UNICODE_BREAK_SPACE,9);
CheckEnum("G_UNICODE_BREAK_AFTER",G_UNICODE_BREAK_AFTER,10);
CheckEnum("G_UNICODE_BREAK_BEFORE",G_UNICODE_BREAK_BEFORE,11);
CheckEnum("G_UNICODE_BREAK_BEFORE_AND_AFTER",G_UNICODE_BREAK_BEFORE_AND_AFTER,12);
CheckEnum("G_UNICODE_BREAK_HYPHEN",G_UNICODE_BREAK_HYPHEN,13);
CheckEnum("G_UNICODE_BREAK_NON_STARTER",G_UNICODE_BREAK_NON_STARTER,14);
CheckEnum("G_UNICODE_BREAK_OPEN_PUNCTUATION",G_UNICODE_BREAK_OPEN_PUNCTUATION,15);
CheckEnum("G_UNICODE_BREAK_CLOSE_PUNCTUATION",G_UNICODE_BREAK_CLOSE_PUNCTUATION,16);
CheckEnum("G_UNICODE_BREAK_QUOTATION",G_UNICODE_BREAK_QUOTATION,17);
CheckEnum("G_UNICODE_BREAK_EXCLAMATION",G_UNICODE_BREAK_EXCLAMATION,18);
CheckEnum("G_UNICODE_BREAK_IDEOGRAPHIC",G_UNICODE_BREAK_IDEOGRAPHIC,19);
CheckEnum("G_UNICODE_BREAK_NUMERIC",G_UNICODE_BREAK_NUMERIC,20);
CheckEnum("G_UNICODE_BREAK_INFIX_SEPARATOR",G_UNICODE_BREAK_INFIX_SEPARATOR,21);
CheckEnum("G_UNICODE_BREAK_SYMBOL",G_UNICODE_BREAK_SYMBOL,22);
CheckEnum("G_UNICODE_BREAK_ALPHABETIC",G_UNICODE_BREAK_ALPHABETIC,23);
CheckEnum("G_UNICODE_BREAK_PREFIX",G_UNICODE_BREAK_PREFIX,24);
CheckEnum("G_UNICODE_BREAK_POSTFIX",G_UNICODE_BREAK_POSTFIX,25);
CheckEnum("G_UNICODE_BREAK_COMPLEX_CONTEXT",G_UNICODE_BREAK_COMPLEX_CONTEXT,26);
CheckEnum("G_UNICODE_BREAK_AMBIGUOUS",G_UNICODE_BREAK_AMBIGUOUS,27);
CheckEnum("G_UNICODE_BREAK_UNKNOWN",G_UNICODE_BREAK_UNKNOWN,28);
CheckEnum("G_UNICODE_BREAK_NEXT_LINE",G_UNICODE_BREAK_NEXT_LINE,29);
CheckEnum("G_UNICODE_BREAK_WORD_JOINER",G_UNICODE_BREAK_WORD_JOINER,30);
#elif __x86_64__
CheckEnum("G_UNICODE_BREAK_MANDATORY",G_UNICODE_BREAK_MANDATORY,0);
CheckEnum("G_UNICODE_BREAK_CARRIAGE_RETURN",G_UNICODE_BREAK_CARRIAGE_RETURN,1);
CheckEnum("G_UNICODE_BREAK_LINE_FEED",G_UNICODE_BREAK_LINE_FEED,2);
CheckEnum("G_UNICODE_BREAK_COMBINING_MARK",G_UNICODE_BREAK_COMBINING_MARK,3);
CheckEnum("G_UNICODE_BREAK_SURROGATE",G_UNICODE_BREAK_SURROGATE,4);
CheckEnum("G_UNICODE_BREAK_ZERO_WIDTH_SPACE",G_UNICODE_BREAK_ZERO_WIDTH_SPACE,5);
CheckEnum("G_UNICODE_BREAK_INSEPARABLE",G_UNICODE_BREAK_INSEPARABLE,6);
CheckEnum("G_UNICODE_BREAK_NON_BREAKING_GLUE",G_UNICODE_BREAK_NON_BREAKING_GLUE,7);
CheckEnum("G_UNICODE_BREAK_CONTINGENT",G_UNICODE_BREAK_CONTINGENT,8);
CheckEnum("G_UNICODE_BREAK_SPACE",G_UNICODE_BREAK_SPACE,9);
CheckEnum("G_UNICODE_BREAK_AFTER",G_UNICODE_BREAK_AFTER,10);
CheckEnum("G_UNICODE_BREAK_BEFORE",G_UNICODE_BREAK_BEFORE,11);
CheckEnum("G_UNICODE_BREAK_BEFORE_AND_AFTER",G_UNICODE_BREAK_BEFORE_AND_AFTER,12);
CheckEnum("G_UNICODE_BREAK_HYPHEN",G_UNICODE_BREAK_HYPHEN,13);
CheckEnum("G_UNICODE_BREAK_NON_STARTER",G_UNICODE_BREAK_NON_STARTER,14);
CheckEnum("G_UNICODE_BREAK_OPEN_PUNCTUATION",G_UNICODE_BREAK_OPEN_PUNCTUATION,15);
CheckEnum("G_UNICODE_BREAK_CLOSE_PUNCTUATION",G_UNICODE_BREAK_CLOSE_PUNCTUATION,16);
CheckEnum("G_UNICODE_BREAK_QUOTATION",G_UNICODE_BREAK_QUOTATION,17);
CheckEnum("G_UNICODE_BREAK_EXCLAMATION",G_UNICODE_BREAK_EXCLAMATION,18);
CheckEnum("G_UNICODE_BREAK_IDEOGRAPHIC",G_UNICODE_BREAK_IDEOGRAPHIC,19);
CheckEnum("G_UNICODE_BREAK_NUMERIC",G_UNICODE_BREAK_NUMERIC,20);
CheckEnum("G_UNICODE_BREAK_INFIX_SEPARATOR",G_UNICODE_BREAK_INFIX_SEPARATOR,21);
CheckEnum("G_UNICODE_BREAK_SYMBOL",G_UNICODE_BREAK_SYMBOL,22);
CheckEnum("G_UNICODE_BREAK_ALPHABETIC",G_UNICODE_BREAK_ALPHABETIC,23);
CheckEnum("G_UNICODE_BREAK_PREFIX",G_UNICODE_BREAK_PREFIX,24);
CheckEnum("G_UNICODE_BREAK_POSTFIX",G_UNICODE_BREAK_POSTFIX,25);
CheckEnum("G_UNICODE_BREAK_COMPLEX_CONTEXT",G_UNICODE_BREAK_COMPLEX_CONTEXT,26);
CheckEnum("G_UNICODE_BREAK_AMBIGUOUS",G_UNICODE_BREAK_AMBIGUOUS,27);
CheckEnum("G_UNICODE_BREAK_UNKNOWN",G_UNICODE_BREAK_UNKNOWN,28);
CheckEnum("G_UNICODE_BREAK_NEXT_LINE",G_UNICODE_BREAK_NEXT_LINE,29);
CheckEnum("G_UNICODE_BREAK_WORD_JOINER",G_UNICODE_BREAK_WORD_JOINER,30);
#elif __ia64__
CheckEnum("G_UNICODE_BREAK_MANDATORY",G_UNICODE_BREAK_MANDATORY,0);
CheckEnum("G_UNICODE_BREAK_CARRIAGE_RETURN",G_UNICODE_BREAK_CARRIAGE_RETURN,1);
CheckEnum("G_UNICODE_BREAK_LINE_FEED",G_UNICODE_BREAK_LINE_FEED,2);
CheckEnum("G_UNICODE_BREAK_COMBINING_MARK",G_UNICODE_BREAK_COMBINING_MARK,3);
CheckEnum("G_UNICODE_BREAK_SURROGATE",G_UNICODE_BREAK_SURROGATE,4);
CheckEnum("G_UNICODE_BREAK_ZERO_WIDTH_SPACE",G_UNICODE_BREAK_ZERO_WIDTH_SPACE,5);
CheckEnum("G_UNICODE_BREAK_INSEPARABLE",G_UNICODE_BREAK_INSEPARABLE,6);
CheckEnum("G_UNICODE_BREAK_NON_BREAKING_GLUE",G_UNICODE_BREAK_NON_BREAKING_GLUE,7);
CheckEnum("G_UNICODE_BREAK_CONTINGENT",G_UNICODE_BREAK_CONTINGENT,8);
CheckEnum("G_UNICODE_BREAK_SPACE",G_UNICODE_BREAK_SPACE,9);
CheckEnum("G_UNICODE_BREAK_AFTER",G_UNICODE_BREAK_AFTER,10);
CheckEnum("G_UNICODE_BREAK_BEFORE",G_UNICODE_BREAK_BEFORE,11);
CheckEnum("G_UNICODE_BREAK_BEFORE_AND_AFTER",G_UNICODE_BREAK_BEFORE_AND_AFTER,12);
CheckEnum("G_UNICODE_BREAK_HYPHEN",G_UNICODE_BREAK_HYPHEN,13);
CheckEnum("G_UNICODE_BREAK_NON_STARTER",G_UNICODE_BREAK_NON_STARTER,14);
CheckEnum("G_UNICODE_BREAK_OPEN_PUNCTUATION",G_UNICODE_BREAK_OPEN_PUNCTUATION,15);
CheckEnum("G_UNICODE_BREAK_CLOSE_PUNCTUATION",G_UNICODE_BREAK_CLOSE_PUNCTUATION,16);
CheckEnum("G_UNICODE_BREAK_QUOTATION",G_UNICODE_BREAK_QUOTATION,17);
CheckEnum("G_UNICODE_BREAK_EXCLAMATION",G_UNICODE_BREAK_EXCLAMATION,18);
CheckEnum("G_UNICODE_BREAK_IDEOGRAPHIC",G_UNICODE_BREAK_IDEOGRAPHIC,19);
CheckEnum("G_UNICODE_BREAK_NUMERIC",G_UNICODE_BREAK_NUMERIC,20);
CheckEnum("G_UNICODE_BREAK_INFIX_SEPARATOR",G_UNICODE_BREAK_INFIX_SEPARATOR,21);
CheckEnum("G_UNICODE_BREAK_SYMBOL",G_UNICODE_BREAK_SYMBOL,22);
CheckEnum("G_UNICODE_BREAK_ALPHABETIC",G_UNICODE_BREAK_ALPHABETIC,23);
CheckEnum("G_UNICODE_BREAK_PREFIX",G_UNICODE_BREAK_PREFIX,24);
CheckEnum("G_UNICODE_BREAK_POSTFIX",G_UNICODE_BREAK_POSTFIX,25);
CheckEnum("G_UNICODE_BREAK_COMPLEX_CONTEXT",G_UNICODE_BREAK_COMPLEX_CONTEXT,26);
CheckEnum("G_UNICODE_BREAK_AMBIGUOUS",G_UNICODE_BREAK_AMBIGUOUS,27);
CheckEnum("G_UNICODE_BREAK_UNKNOWN",G_UNICODE_BREAK_UNKNOWN,28);
CheckEnum("G_UNICODE_BREAK_NEXT_LINE",G_UNICODE_BREAK_NEXT_LINE,29);
CheckEnum("G_UNICODE_BREAK_WORD_JOINER",G_UNICODE_BREAK_WORD_JOINER,30);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11660,0);
Msg("Find size of anon-glib-2.0/glib.h-85 (11660)\n");
#endif

#if __i386__
CheckTypeSize(GUnicodeBreakType,4, 11661, 2)
#elif __x86_64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 11)
#elif __ia64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 6)
#elif __powerpc64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GUnicodeBreakType,4, 11661, 10)
#elif __s390x__
CheckTypeSize(GUnicodeBreakType,4, 11661, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11661,0);
Msg("Find size of GUnicodeBreakType (11661)\n");
#endif

#if __i386__
CheckTypeSize(GStringChunk,0, 11663, 2)
#elif __x86_64__
CheckTypeSize(GStringChunk,0, 11663, 11)
#elif __ia64__
CheckTypeSize(GStringChunk,0, 11663, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11663,0);
Msg("Find size of GStringChunk (11663)\n");
#endif

#if __i386__
CheckTypeSize(GStringChunk *,4, 11664, 2)
#elif __x86_64__
CheckTypeSize(GStringChunk *,8, 11664, 11)
#elif __ia64__
CheckTypeSize(GStringChunk *,8, 11664, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStringChunk *,4, 11664, 6)
#elif __powerpc64__
CheckTypeSize(GStringChunk *,8, 11664, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStringChunk *,4, 11664, 10)
#elif __s390x__
CheckTypeSize(GStringChunk *,8, 11664, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11664,0);
Msg("Find size of GStringChunk * (11664)\n");
#endif

#if __i386__
CheckTypeSize(struct _GStaticRWLock,52, 11665, 2)
CheckMemberSize(struct _GStaticRWLock,read_cond,4,2,41657)
CheckOffset(struct _GStaticRWLock,read_cond,28,2,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,4,2,41658)
CheckOffset(struct _GStaticRWLock,write_cond,32,2,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,2,41659)
CheckOffset(struct _GStaticRWLock,read_counter,36,2,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,2,41660)
CheckOffset(struct _GStaticRWLock,have_writer,40,2,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,2,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,44,2,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,2,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,48,2,41662)
#elif __x86_64__
CheckTypeSize(struct _GStaticRWLock,80, 11665, 11)
CheckMemberSize(struct _GStaticRWLock,read_cond,8,11,41657)
CheckOffset(struct _GStaticRWLock,read_cond,48,11,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,8,11,41658)
CheckOffset(struct _GStaticRWLock,write_cond,56,11,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,11,41659)
CheckOffset(struct _GStaticRWLock,read_counter,64,11,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,11,41660)
CheckOffset(struct _GStaticRWLock,have_writer,68,11,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,11,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,72,11,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,11,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,76,11,41662)
#elif __ia64__
CheckTypeSize(struct _GStaticRWLock,80, 11665, 3)
CheckMemberSize(struct _GStaticRWLock,read_cond,8,3,41657)
CheckOffset(struct _GStaticRWLock,read_cond,48,3,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,8,3,41658)
CheckOffset(struct _GStaticRWLock,write_cond,56,3,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,3,41659)
CheckOffset(struct _GStaticRWLock,read_counter,64,3,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,3,41660)
CheckOffset(struct _GStaticRWLock,have_writer,68,3,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,3,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,72,3,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,3,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,76,3,41662)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GStaticRWLock,56, 11665, 6)
CheckMemberSize(struct _GStaticRWLock,read_cond,4,6,41657)
CheckOffset(struct _GStaticRWLock,read_cond,32,6,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,4,6,41658)
CheckOffset(struct _GStaticRWLock,write_cond,36,6,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,6,41659)
CheckOffset(struct _GStaticRWLock,read_counter,40,6,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,6,41660)
CheckOffset(struct _GStaticRWLock,have_writer,44,6,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,6,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,48,6,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,6,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,52,6,41662)
#elif __powerpc64__
CheckTypeSize(struct _GStaticRWLock,80, 11665, 9)
CheckMemberSize(struct _GStaticRWLock,read_cond,8,9,41657)
CheckOffset(struct _GStaticRWLock,read_cond,48,9,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,8,9,41658)
CheckOffset(struct _GStaticRWLock,write_cond,56,9,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,9,41659)
CheckOffset(struct _GStaticRWLock,read_counter,64,9,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,9,41660)
CheckOffset(struct _GStaticRWLock,have_writer,68,9,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,9,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,72,9,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,9,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,76,9,41662)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GStaticRWLock,56, 11665, 10)
CheckMemberSize(struct _GStaticRWLock,read_cond,4,10,41657)
CheckOffset(struct _GStaticRWLock,read_cond,32,10,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,4,10,41658)
CheckOffset(struct _GStaticRWLock,write_cond,36,10,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,10,41659)
CheckOffset(struct _GStaticRWLock,read_counter,40,10,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,10,41660)
CheckOffset(struct _GStaticRWLock,have_writer,44,10,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,10,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,48,10,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,10,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,52,10,41662)
#elif __s390x__
CheckTypeSize(struct _GStaticRWLock,80, 11665, 12)
CheckMemberSize(struct _GStaticRWLock,read_cond,8,12,41657)
CheckOffset(struct _GStaticRWLock,read_cond,48,12,41657)
CheckMemberSize(struct _GStaticRWLock,write_cond,8,12,41658)
CheckOffset(struct _GStaticRWLock,write_cond,56,12,41658)
CheckMemberSize(struct _GStaticRWLock,read_counter,4,12,41659)
CheckOffset(struct _GStaticRWLock,read_counter,64,12,41659)
CheckMemberSize(struct _GStaticRWLock,have_writer,4,12,41660)
CheckOffset(struct _GStaticRWLock,have_writer,68,12,41660)
CheckMemberSize(struct _GStaticRWLock,want_to_read,4,12,41661)
CheckOffset(struct _GStaticRWLock,want_to_read,72,12,41661)
CheckMemberSize(struct _GStaticRWLock,want_to_write,4,12,41662)
CheckOffset(struct _GStaticRWLock,want_to_write,76,12,41662)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11665,0);
Msg("Find size of _GStaticRWLock (11665)\n");
#endif

#if __i386__
CheckTypeSize(GCond,0, 11667, 2)
#elif __x86_64__
CheckTypeSize(GCond,0, 11667, 11)
#elif __ia64__
CheckTypeSize(GCond,0, 11667, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11667,0);
Msg("Find size of GCond (11667)\n");
#endif

#if __i386__
CheckTypeSize(GCond *,4, 11668, 2)
#elif __x86_64__
CheckTypeSize(GCond *,8, 11668, 11)
#elif __ia64__
CheckTypeSize(GCond *,8, 11668, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCond *,4, 11668, 6)
#elif __powerpc64__
CheckTypeSize(GCond *,8, 11668, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCond *,4, 11668, 10)
#elif __s390x__
CheckTypeSize(GCond *,8, 11668, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11668,0);
Msg("Find size of GCond * (11668)\n");
#endif

#if __i386__
CheckTypeSize(GStaticRWLock,52, 11669, 2)
#elif __x86_64__
CheckTypeSize(GStaticRWLock,80, 11669, 11)
#elif __ia64__
CheckTypeSize(GStaticRWLock,80, 11669, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticRWLock,56, 11669, 6)
#elif __powerpc64__
CheckTypeSize(GStaticRWLock,80, 11669, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticRWLock,56, 11669, 10)
#elif __s390x__
CheckTypeSize(GStaticRWLock,80, 11669, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11669,0);
Msg("Find size of GStaticRWLock (11669)\n");
#endif

#if __i386__
CheckTypeSize(GStaticRWLock *,4, 11670, 2)
#elif __x86_64__
CheckTypeSize(GStaticRWLock *,8, 11670, 11)
#elif __ia64__
CheckTypeSize(GStaticRWLock *,8, 11670, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticRWLock *,4, 11670, 6)
#elif __powerpc64__
CheckTypeSize(GStaticRWLock *,8, 11670, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticRWLock *,4, 11670, 10)
#elif __s390x__
CheckTypeSize(GStaticRWLock *,8, 11670, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11670,0);
Msg("Find size of GStaticRWLock * (11670)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11671,0);
Msg("Find size of fptr_glib_14 (11671)\n");
#endif

#if __i386__
CheckTypeSize(GChildWatchFunc,4, 11672, 2)
#elif __x86_64__
CheckTypeSize(GChildWatchFunc,8, 11672, 11)
#elif __ia64__
CheckTypeSize(GChildWatchFunc,8, 11672, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GChildWatchFunc,4, 11672, 6)
#elif __powerpc64__
CheckTypeSize(GChildWatchFunc,8, 11672, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GChildWatchFunc,4, 11672, 10)
#elif __s390x__
CheckTypeSize(GChildWatchFunc,8, 11672, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11672,0);
Msg("Find size of GChildWatchFunc (11672)\n");
#endif

#if __i386__
CheckTypeSize(gunichar *,4, 11673, 2)
#elif __x86_64__
CheckTypeSize(gunichar *,8, 11673, 11)
#elif __ia64__
CheckTypeSize(gunichar *,8, 11673, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gunichar *,4, 11673, 6)
#elif __powerpc64__
CheckTypeSize(gunichar *,8, 11673, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gunichar *,4, 11673, 10)
#elif __s390x__
CheckTypeSize(gunichar *,8, 11673, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11673,0);
Msg("Find size of gunichar * (11673)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTimeVal,8, 11674, 2)
CheckMemberSize(struct _GTimeVal,tv_usec,4,2,41667)
CheckOffset(struct _GTimeVal,tv_usec,4,2,41667)
#elif __x86_64__
CheckTypeSize(struct _GTimeVal,16, 11674, 11)
CheckMemberSize(struct _GTimeVal,tv_usec,8,11,41667)
CheckOffset(struct _GTimeVal,tv_usec,8,11,41667)
#elif __ia64__
CheckTypeSize(struct _GTimeVal,16, 11674, 3)
CheckMemberSize(struct _GTimeVal,tv_usec,8,3,41667)
CheckOffset(struct _GTimeVal,tv_usec,8,3,41667)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTimeVal,8, 11674, 6)
CheckMemberSize(struct _GTimeVal,tv_usec,4,6,41667)
CheckOffset(struct _GTimeVal,tv_usec,4,6,41667)
#elif __powerpc64__
CheckTypeSize(struct _GTimeVal,16, 11674, 9)
CheckMemberSize(struct _GTimeVal,tv_usec,8,9,41667)
CheckOffset(struct _GTimeVal,tv_usec,8,9,41667)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTimeVal,8, 11674, 10)
CheckMemberSize(struct _GTimeVal,tv_usec,4,10,41667)
CheckOffset(struct _GTimeVal,tv_usec,4,10,41667)
#elif __s390x__
CheckTypeSize(struct _GTimeVal,16, 11674, 12)
CheckMemberSize(struct _GTimeVal,tv_usec,8,12,41667)
CheckOffset(struct _GTimeVal,tv_usec,8,12,41667)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11674,0);
Msg("Find size of _GTimeVal (11674)\n");
#endif

#if __i386__
CheckTypeSize(GTimeVal,8, 11675, 2)
#elif __x86_64__
CheckTypeSize(GTimeVal,16, 11675, 11)
#elif __ia64__
CheckTypeSize(GTimeVal,16, 11675, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTimeVal,8, 11675, 6)
#elif __powerpc64__
CheckTypeSize(GTimeVal,16, 11675, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTimeVal,8, 11675, 10)
#elif __s390x__
CheckTypeSize(GTimeVal,16, 11675, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11675,0);
Msg("Find size of GTimeVal (11675)\n");
#endif

#if __i386__
CheckTypeSize(GTimeVal *,4, 11676, 2)
#elif __x86_64__
CheckTypeSize(GTimeVal *,8, 11676, 11)
#elif __ia64__
CheckTypeSize(GTimeVal *,8, 11676, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTimeVal *,4, 11676, 6)
#elif __powerpc64__
CheckTypeSize(GTimeVal *,8, 11676, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTimeVal *,4, 11676, 10)
#elif __s390x__
CheckTypeSize(GTimeVal *,8, 11676, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11676,0);
Msg("Find size of GTimeVal * (11676)\n");
#endif

#if __i386__
CheckEnum("G_LOG_FLAG_RECURSION",G_LOG_FLAG_RECURSION,1);
CheckEnum("G_LOG_FLAG_FATAL",G_LOG_FLAG_FATAL,2);
CheckEnum("G_LOG_LEVEL_ERROR",G_LOG_LEVEL_ERROR,4);
CheckEnum("G_LOG_LEVEL_CRITICAL",G_LOG_LEVEL_CRITICAL,8);
CheckEnum("G_LOG_LEVEL_WARNING",G_LOG_LEVEL_WARNING,16);
CheckEnum("G_LOG_LEVEL_MESSAGE",G_LOG_LEVEL_MESSAGE,32);
CheckEnum("G_LOG_LEVEL_INFO",G_LOG_LEVEL_INFO,64);
CheckEnum("G_LOG_LEVEL_DEBUG",G_LOG_LEVEL_DEBUG,128);
CheckEnum("G_LOG_LEVEL_MASK",G_LOG_LEVEL_MASK,-4);
#elif __x86_64__
CheckEnum("G_LOG_FLAG_RECURSION",G_LOG_FLAG_RECURSION,1);
CheckEnum("G_LOG_FLAG_FATAL",G_LOG_FLAG_FATAL,2);
CheckEnum("G_LOG_LEVEL_ERROR",G_LOG_LEVEL_ERROR,4);
CheckEnum("G_LOG_LEVEL_CRITICAL",G_LOG_LEVEL_CRITICAL,8);
CheckEnum("G_LOG_LEVEL_WARNING",G_LOG_LEVEL_WARNING,16);
CheckEnum("G_LOG_LEVEL_MESSAGE",G_LOG_LEVEL_MESSAGE,32);
CheckEnum("G_LOG_LEVEL_INFO",G_LOG_LEVEL_INFO,64);
CheckEnum("G_LOG_LEVEL_DEBUG",G_LOG_LEVEL_DEBUG,128);
CheckEnum("G_LOG_LEVEL_MASK",G_LOG_LEVEL_MASK,-4);
#elif __ia64__
CheckEnum("G_LOG_FLAG_RECURSION",G_LOG_FLAG_RECURSION,1);
CheckEnum("G_LOG_FLAG_FATAL",G_LOG_FLAG_FATAL,2);
CheckEnum("G_LOG_LEVEL_ERROR",G_LOG_LEVEL_ERROR,4);
CheckEnum("G_LOG_LEVEL_CRITICAL",G_LOG_LEVEL_CRITICAL,8);
CheckEnum("G_LOG_LEVEL_WARNING",G_LOG_LEVEL_WARNING,16);
CheckEnum("G_LOG_LEVEL_MESSAGE",G_LOG_LEVEL_MESSAGE,32);
CheckEnum("G_LOG_LEVEL_INFO",G_LOG_LEVEL_INFO,64);
CheckEnum("G_LOG_LEVEL_DEBUG",G_LOG_LEVEL_DEBUG,128);
CheckEnum("G_LOG_LEVEL_MASK",G_LOG_LEVEL_MASK,-4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11677,0);
Msg("Find size of anon-glib-2.0/glib.h-49 (11677)\n");
#endif

#if __i386__
CheckTypeSize(GLogLevelFlags,4, 11678, 2)
#elif __x86_64__
CheckTypeSize(GLogLevelFlags,4, 11678, 11)
#elif __ia64__
CheckTypeSize(GLogLevelFlags,4, 11678, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLogLevelFlags,4, 11678, 6)
#elif __powerpc64__
CheckTypeSize(GLogLevelFlags,4, 11678, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GLogLevelFlags,4, 11678, 10)
#elif __s390x__
CheckTypeSize(GLogLevelFlags,4, 11678, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11678,0);
Msg("Find size of GLogLevelFlags (11678)\n");
#endif

#if __i386__
CheckTypeSize(const guint,4, 11679, 2)
#elif __x86_64__
CheckTypeSize(const guint,4, 11679, 11)
#elif __ia64__
CheckTypeSize(const guint,4, 11679, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const guint,4, 11679, 6)
#elif __powerpc64__
CheckTypeSize(const guint,4, 11679, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const guint,4, 11679, 10)
#elif __s390x__
CheckTypeSize(const guint,4, 11679, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11679,0);
Msg("Find size of const guint (11679)\n");
#endif

#if __i386__
CheckEnum("G_DATE_BAD_WEEKDAY",G_DATE_BAD_WEEKDAY,0);
CheckEnum("G_DATE_MONDAY",G_DATE_MONDAY,1);
CheckEnum("G_DATE_TUESDAY",G_DATE_TUESDAY,2);
CheckEnum("G_DATE_WEDNESDAY",G_DATE_WEDNESDAY,3);
CheckEnum("G_DATE_THURSDAY",G_DATE_THURSDAY,4);
CheckEnum("G_DATE_FRIDAY",G_DATE_FRIDAY,5);
CheckEnum("G_DATE_SATURDAY",G_DATE_SATURDAY,6);
CheckEnum("G_DATE_SUNDAY",G_DATE_SUNDAY,7);
#elif __x86_64__
CheckEnum("G_DATE_BAD_WEEKDAY",G_DATE_BAD_WEEKDAY,0);
CheckEnum("G_DATE_MONDAY",G_DATE_MONDAY,1);
CheckEnum("G_DATE_TUESDAY",G_DATE_TUESDAY,2);
CheckEnum("G_DATE_WEDNESDAY",G_DATE_WEDNESDAY,3);
CheckEnum("G_DATE_THURSDAY",G_DATE_THURSDAY,4);
CheckEnum("G_DATE_FRIDAY",G_DATE_FRIDAY,5);
CheckEnum("G_DATE_SATURDAY",G_DATE_SATURDAY,6);
CheckEnum("G_DATE_SUNDAY",G_DATE_SUNDAY,7);
#elif __ia64__
CheckEnum("G_DATE_BAD_WEEKDAY",G_DATE_BAD_WEEKDAY,0);
CheckEnum("G_DATE_MONDAY",G_DATE_MONDAY,1);
CheckEnum("G_DATE_TUESDAY",G_DATE_TUESDAY,2);
CheckEnum("G_DATE_WEDNESDAY",G_DATE_WEDNESDAY,3);
CheckEnum("G_DATE_THURSDAY",G_DATE_THURSDAY,4);
CheckEnum("G_DATE_FRIDAY",G_DATE_FRIDAY,5);
CheckEnum("G_DATE_SATURDAY",G_DATE_SATURDAY,6);
CheckEnum("G_DATE_SUNDAY",G_DATE_SUNDAY,7);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11680,0);
Msg("Find size of anon-glib-2.0/glib.h-14 (11680)\n");
#endif

#if __i386__
CheckTypeSize(GDateWeekday,4, 11681, 2)
#elif __x86_64__
CheckTypeSize(GDateWeekday,4, 11681, 11)
#elif __ia64__
CheckTypeSize(GDateWeekday,4, 11681, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDateWeekday,4, 11681, 6)
#elif __powerpc64__
CheckTypeSize(GDateWeekday,4, 11681, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDateWeekday,4, 11681, 10)
#elif __s390x__
CheckTypeSize(GDateWeekday,4, 11681, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11681,0);
Msg("Find size of GDateWeekday (11681)\n");
#endif

#if __i386__
CheckEnum("G_IN_ORDER",G_IN_ORDER,0);
CheckEnum("G_PRE_ORDER",G_PRE_ORDER,1);
CheckEnum("G_POST_ORDER",G_POST_ORDER,2);
CheckEnum("G_LEVEL_ORDER",G_LEVEL_ORDER,3);
#elif __x86_64__
CheckEnum("G_IN_ORDER",G_IN_ORDER,0);
CheckEnum("G_PRE_ORDER",G_PRE_ORDER,1);
CheckEnum("G_POST_ORDER",G_POST_ORDER,2);
CheckEnum("G_LEVEL_ORDER",G_LEVEL_ORDER,3);
#elif __ia64__
CheckEnum("G_IN_ORDER",G_IN_ORDER,0);
CheckEnum("G_PRE_ORDER",G_PRE_ORDER,1);
CheckEnum("G_POST_ORDER",G_POST_ORDER,2);
CheckEnum("G_LEVEL_ORDER",G_LEVEL_ORDER,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11682,0);
Msg("Find size of anon-glib-2.0/glib.h-53 (11682)\n");
#endif

#if __i386__
CheckTypeSize(GTraverseType,4, 11683, 2)
#elif __x86_64__
CheckTypeSize(GTraverseType,4, 11683, 11)
#elif __ia64__
CheckTypeSize(GTraverseType,4, 11683, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTraverseType,4, 11683, 6)
#elif __powerpc64__
CheckTypeSize(GTraverseType,4, 11683, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTraverseType,4, 11683, 10)
#elif __s390x__
CheckTypeSize(GTraverseType,4, 11683, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11683,0);
Msg("Find size of GTraverseType (11683)\n");
#endif

#if __i386__
CheckEnum("G_TRAVERSE_LEAVES",G_TRAVERSE_LEAVES,1);
CheckEnum("G_TRAVERSE_NON_LEAVES",G_TRAVERSE_NON_LEAVES,2);
CheckEnum("G_TRAVERSE_ALL",G_TRAVERSE_ALL,3);
CheckEnum("G_TRAVERSE_MASK",G_TRAVERSE_MASK,3);
CheckEnum("G_TRAVERSE_LEAFS",G_TRAVERSE_LEAFS,1);
CheckEnum("G_TRAVERSE_NON_LEAFS",G_TRAVERSE_NON_LEAFS,2);
#elif __x86_64__
CheckEnum("G_TRAVERSE_LEAVES",G_TRAVERSE_LEAVES,1);
CheckEnum("G_TRAVERSE_NON_LEAVES",G_TRAVERSE_NON_LEAVES,2);
CheckEnum("G_TRAVERSE_ALL",G_TRAVERSE_ALL,3);
CheckEnum("G_TRAVERSE_MASK",G_TRAVERSE_MASK,3);
CheckEnum("G_TRAVERSE_LEAFS",G_TRAVERSE_LEAFS,1);
CheckEnum("G_TRAVERSE_NON_LEAFS",G_TRAVERSE_NON_LEAFS,2);
#elif __ia64__
CheckEnum("G_TRAVERSE_LEAVES",G_TRAVERSE_LEAVES,1);
CheckEnum("G_TRAVERSE_NON_LEAVES",G_TRAVERSE_NON_LEAVES,2);
CheckEnum("G_TRAVERSE_ALL",G_TRAVERSE_ALL,3);
CheckEnum("G_TRAVERSE_MASK",G_TRAVERSE_MASK,3);
CheckEnum("G_TRAVERSE_LEAFS",G_TRAVERSE_LEAFS,1);
CheckEnum("G_TRAVERSE_NON_LEAFS",G_TRAVERSE_NON_LEAFS,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11684,0);
Msg("Find size of anon-glib-2.0/glib.h-52 (11684)\n");
#endif

#if __i386__
CheckTypeSize(GTraverseFlags,4, 11685, 2)
#elif __x86_64__
CheckTypeSize(GTraverseFlags,4, 11685, 11)
#elif __ia64__
CheckTypeSize(GTraverseFlags,4, 11685, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTraverseFlags,4, 11685, 6)
#elif __powerpc64__
CheckTypeSize(GTraverseFlags,4, 11685, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTraverseFlags,4, 11685, 10)
#elif __s390x__
CheckTypeSize(GTraverseFlags,4, 11685, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11685,0);
Msg("Find size of GTraverseFlags (11685)\n");
#endif

#if __i386__
CheckTypeSize(struct _GMarkupParser,20, 11686, 2)
CheckMemberSize(struct _GMarkupParser,end_element,4,2,41706)
CheckOffset(struct _GMarkupParser,end_element,4,2,41706)
CheckMemberSize(struct _GMarkupParser,text,4,2,41712)
CheckOffset(struct _GMarkupParser,text,8,2,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,4,2,41713)
CheckOffset(struct _GMarkupParser,passthrough,12,2,41713)
CheckMemberSize(struct _GMarkupParser,error,4,2,41717)
CheckOffset(struct _GMarkupParser,error,16,2,41717)
#elif __x86_64__
CheckTypeSize(struct _GMarkupParser,40, 11686, 11)
CheckMemberSize(struct _GMarkupParser,end_element,8,11,41706)
CheckOffset(struct _GMarkupParser,end_element,8,11,41706)
CheckMemberSize(struct _GMarkupParser,text,8,11,41712)
CheckOffset(struct _GMarkupParser,text,16,11,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,8,11,41713)
CheckOffset(struct _GMarkupParser,passthrough,24,11,41713)
CheckMemberSize(struct _GMarkupParser,error,8,11,41717)
CheckOffset(struct _GMarkupParser,error,32,11,41717)
#elif __ia64__
CheckTypeSize(struct _GMarkupParser,40, 11686, 3)
CheckMemberSize(struct _GMarkupParser,end_element,8,3,41706)
CheckOffset(struct _GMarkupParser,end_element,8,3,41706)
CheckMemberSize(struct _GMarkupParser,text,8,3,41712)
CheckOffset(struct _GMarkupParser,text,16,3,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,8,3,41713)
CheckOffset(struct _GMarkupParser,passthrough,24,3,41713)
CheckMemberSize(struct _GMarkupParser,error,8,3,41717)
CheckOffset(struct _GMarkupParser,error,32,3,41717)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GMarkupParser,20, 11686, 6)
CheckMemberSize(struct _GMarkupParser,end_element,4,6,41706)
CheckOffset(struct _GMarkupParser,end_element,4,6,41706)
CheckMemberSize(struct _GMarkupParser,text,4,6,41712)
CheckOffset(struct _GMarkupParser,text,8,6,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,4,6,41713)
CheckOffset(struct _GMarkupParser,passthrough,12,6,41713)
CheckMemberSize(struct _GMarkupParser,error,4,6,41717)
CheckOffset(struct _GMarkupParser,error,16,6,41717)
#elif __powerpc64__
CheckTypeSize(struct _GMarkupParser,40, 11686, 9)
CheckMemberSize(struct _GMarkupParser,end_element,8,9,41706)
CheckOffset(struct _GMarkupParser,end_element,8,9,41706)
CheckMemberSize(struct _GMarkupParser,text,8,9,41712)
CheckOffset(struct _GMarkupParser,text,16,9,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,8,9,41713)
CheckOffset(struct _GMarkupParser,passthrough,24,9,41713)
CheckMemberSize(struct _GMarkupParser,error,8,9,41717)
CheckOffset(struct _GMarkupParser,error,32,9,41717)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GMarkupParser,20, 11686, 10)
CheckMemberSize(struct _GMarkupParser,end_element,4,10,41706)
CheckOffset(struct _GMarkupParser,end_element,4,10,41706)
CheckMemberSize(struct _GMarkupParser,text,4,10,41712)
CheckOffset(struct _GMarkupParser,text,8,10,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,4,10,41713)
CheckOffset(struct _GMarkupParser,passthrough,12,10,41713)
CheckMemberSize(struct _GMarkupParser,error,4,10,41717)
CheckOffset(struct _GMarkupParser,error,16,10,41717)
#elif __s390x__
CheckTypeSize(struct _GMarkupParser,40, 11686, 12)
CheckMemberSize(struct _GMarkupParser,end_element,8,12,41706)
CheckOffset(struct _GMarkupParser,end_element,8,12,41706)
CheckMemberSize(struct _GMarkupParser,text,8,12,41712)
CheckOffset(struct _GMarkupParser,text,16,12,41712)
CheckMemberSize(struct _GMarkupParser,passthrough,8,12,41713)
CheckOffset(struct _GMarkupParser,passthrough,24,12,41713)
CheckMemberSize(struct _GMarkupParser,error,8,12,41717)
CheckOffset(struct _GMarkupParser,error,32,12,41717)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11686,0);
Msg("Find size of _GMarkupParser (11686)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11687,0);
Msg("Find size of fptr_glib_46 (11687)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11688,0);
Msg("Find size of fptr_glib_22 (11688)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11689,0);
Msg("Find size of fptr_glib_118 (11689)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11690,0);
Msg("Find size of fptr_glib_77 (11690)\n");
#endif

#if __i386__
CheckTypeSize(GMarkupParser,20, 11691, 2)
#elif __x86_64__
CheckTypeSize(GMarkupParser,40, 11691, 11)
#elif __ia64__
CheckTypeSize(GMarkupParser,40, 11691, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMarkupParser,20, 11691, 6)
#elif __powerpc64__
CheckTypeSize(GMarkupParser,40, 11691, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMarkupParser,20, 11691, 10)
#elif __s390x__
CheckTypeSize(GMarkupParser,40, 11691, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11691,0);
Msg("Find size of GMarkupParser (11691)\n");
#endif

#if __i386__
CheckTypeSize(const GMarkupParser,20, 11692, 2)
#elif __x86_64__
CheckTypeSize(const GMarkupParser,40, 11692, 11)
#elif __ia64__
CheckTypeSize(const GMarkupParser,40, 11692, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GMarkupParser,20, 11692, 6)
#elif __powerpc64__
CheckTypeSize(const GMarkupParser,40, 11692, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GMarkupParser,20, 11692, 10)
#elif __s390x__
CheckTypeSize(const GMarkupParser,40, 11692, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11692,0);
Msg("Find size of const GMarkupParser (11692)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11693,0);
Msg("Find size of const GMarkupParser * (11693)\n");
#endif

#if __i386__
CheckEnum("G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG",G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG,1);
#elif __x86_64__
CheckEnum("G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG",G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG,1);
#elif __ia64__
CheckEnum("G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG",G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG,1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11694,0);
Msg("Find size of anon-glib-2.0/glib.h-42 (11694)\n");
#endif

#if __i386__
CheckTypeSize(GMarkupParseFlags,4, 11695, 2)
#elif __x86_64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 11)
#elif __ia64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 6)
#elif __powerpc64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMarkupParseFlags,4, 11695, 10)
#elif __s390x__
CheckTypeSize(GMarkupParseFlags,4, 11695, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11695,0);
Msg("Find size of GMarkupParseFlags (11695)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11696,0);
Msg("Find size of fptr_glib_222 (11696)\n");
#endif

#if __i386__
CheckTypeSize(GHookCheckMarshaller,4, 11697, 2)
#elif __x86_64__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 11)
#elif __ia64__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookCheckMarshaller,4, 11697, 6)
#elif __powerpc64__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookCheckMarshaller,4, 11697, 10)
#elif __s390x__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11697,0);
Msg("Find size of GHookCheckMarshaller (11697)\n");
#endif

#if __i386__
CheckTypeSize(GStaticMutex *,4, 11698, 2)
#elif __x86_64__
CheckTypeSize(GStaticMutex *,8, 11698, 11)
#elif __ia64__
CheckTypeSize(GStaticMutex *,8, 11698, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticMutex *,4, 11698, 6)
#elif __powerpc64__
CheckTypeSize(GStaticMutex *,8, 11698, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticMutex *,4, 11698, 10)
#elif __s390x__
CheckTypeSize(GStaticMutex *,8, 11698, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11698,0);
Msg("Find size of GStaticMutex * (11698)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11699,0);
Msg("Find size of fptr_glib_419 (11699)\n");
#endif

#if __i386__
CheckTypeSize(GNodeTraverseFunc,4, 11700, 2)
#elif __x86_64__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 11)
#elif __ia64__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GNodeTraverseFunc,4, 11700, 6)
#elif __powerpc64__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GNodeTraverseFunc,4, 11700, 10)
#elif __s390x__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11700,0);
Msg("Find size of GNodeTraverseFunc (11700)\n");
#endif

#if __i386__
CheckEnum("G_NORMALIZE_DEFAULT",G_NORMALIZE_DEFAULT,0);
CheckEnum("G_NORMALIZE_NFD",G_NORMALIZE_NFD,0);
CheckEnum("G_NORMALIZE_DEFAULT_COMPOSE",G_NORMALIZE_DEFAULT_COMPOSE,1);
CheckEnum("G_NORMALIZE_NFC",G_NORMALIZE_NFC,1);
CheckEnum("G_NORMALIZE_ALL",G_NORMALIZE_ALL,2);
CheckEnum("G_NORMALIZE_NFKD",G_NORMALIZE_NFKD,2);
CheckEnum("G_NORMALIZE_ALL_COMPOSE",G_NORMALIZE_ALL_COMPOSE,3);
CheckEnum("G_NORMALIZE_NFKC",G_NORMALIZE_NFKC,3);
#elif __x86_64__
CheckEnum("G_NORMALIZE_DEFAULT",G_NORMALIZE_DEFAULT,0);
CheckEnum("G_NORMALIZE_NFD",G_NORMALIZE_NFD,0);
CheckEnum("G_NORMALIZE_DEFAULT_COMPOSE",G_NORMALIZE_DEFAULT_COMPOSE,1);
CheckEnum("G_NORMALIZE_NFC",G_NORMALIZE_NFC,1);
CheckEnum("G_NORMALIZE_ALL",G_NORMALIZE_ALL,2);
CheckEnum("G_NORMALIZE_NFKD",G_NORMALIZE_NFKD,2);
CheckEnum("G_NORMALIZE_ALL_COMPOSE",G_NORMALIZE_ALL_COMPOSE,3);
CheckEnum("G_NORMALIZE_NFKC",G_NORMALIZE_NFKC,3);
#elif __ia64__
CheckEnum("G_NORMALIZE_DEFAULT",G_NORMALIZE_DEFAULT,0);
CheckEnum("G_NORMALIZE_NFD",G_NORMALIZE_NFD,0);
CheckEnum("G_NORMALIZE_DEFAULT_COMPOSE",G_NORMALIZE_DEFAULT_COMPOSE,1);
CheckEnum("G_NORMALIZE_NFC",G_NORMALIZE_NFC,1);
CheckEnum("G_NORMALIZE_ALL",G_NORMALIZE_ALL,2);
CheckEnum("G_NORMALIZE_NFKD",G_NORMALIZE_NFKD,2);
CheckEnum("G_NORMALIZE_ALL_COMPOSE",G_NORMALIZE_ALL_COMPOSE,3);
CheckEnum("G_NORMALIZE_NFKC",G_NORMALIZE_NFKC,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11701,0);
Msg("Find size of anon-glib-2.0/glib.h-86 (11701)\n");
#endif

#if __i386__
CheckTypeSize(GNormalizeMode,4, 11702, 2)
#elif __x86_64__
CheckTypeSize(GNormalizeMode,4, 11702, 11)
#elif __ia64__
CheckTypeSize(GNormalizeMode,4, 11702, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GNormalizeMode,4, 11702, 6)
#elif __powerpc64__
CheckTypeSize(GNormalizeMode,4, 11702, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GNormalizeMode,4, 11702, 10)
#elif __s390x__
CheckTypeSize(GNormalizeMode,4, 11702, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11702,0);
Msg("Find size of GNormalizeMode (11702)\n");
#endif

#if __i386__
CheckTypeSize(GMutex,0, 11703, 2)
#elif __x86_64__
CheckTypeSize(GMutex,0, 11703, 11)
#elif __ia64__
CheckTypeSize(GMutex,0, 11703, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11703,0);
Msg("Find size of GMutex (11703)\n");
#endif

#if __i386__
CheckTypeSize(GMutex *,4, 11704, 2)
#elif __x86_64__
CheckTypeSize(GMutex *,8, 11704, 11)
#elif __ia64__
CheckTypeSize(GMutex *,8, 11704, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMutex *,4, 11704, 6)
#elif __powerpc64__
CheckTypeSize(GMutex *,8, 11704, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMutex *,4, 11704, 10)
#elif __s390x__
CheckTypeSize(GMutex *,8, 11704, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11704,0);
Msg("Find size of GMutex * (11704)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11705,0);
Msg("Find size of GMutex * * (11705)\n");
#endif

#if __i386__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 2)
Msg("Missing member data for _GStaticPrivate on IA32\n");
CheckOffset(struct _GStaticPrivate,index,0,2,41731)
#elif __x86_64__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 11)
Msg("Missing member data for _GStaticPrivate on x86-64\n");
CheckOffset(struct _GStaticPrivate,index,0,11,41731)
#elif __ia64__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 3)
Msg("Missing member data for _GStaticPrivate on IA64\n");
CheckOffset(struct _GStaticPrivate,index,0,3,41731)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 6)
Msg("Missing member data for _GStaticPrivate on PPC32\n");
CheckOffset(struct _GStaticPrivate,index,0,6,41731)
#elif __powerpc64__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 9)
Msg("Missing member data for _GStaticPrivate on PPC64\n");
CheckOffset(struct _GStaticPrivate,index,0,9,41731)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 10)
Msg("Missing member data for _GStaticPrivate on S390\n");
CheckOffset(struct _GStaticPrivate,index,0,10,41731)
#elif __s390x__
CheckTypeSize(struct _GStaticPrivate,4, 11706, 12)
Msg("Missing member data for _GStaticPrivate on S390X\n");
CheckOffset(struct _GStaticPrivate,index,0,12,41731)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11706,0);
Msg("Find size of _GStaticPrivate (11706)\n");
#endif

#if __i386__
CheckTypeSize(GStaticPrivate,4, 11707, 2)
#elif __x86_64__
CheckTypeSize(GStaticPrivate,4, 11707, 11)
#elif __ia64__
CheckTypeSize(GStaticPrivate,4, 11707, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticPrivate,4, 11707, 6)
#elif __powerpc64__
CheckTypeSize(GStaticPrivate,4, 11707, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticPrivate,4, 11707, 10)
#elif __s390x__
CheckTypeSize(GStaticPrivate,4, 11707, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11707,0);
Msg("Find size of GStaticPrivate (11707)\n");
#endif

#if __i386__
CheckTypeSize(GStaticPrivate *,4, 11708, 2)
#elif __x86_64__
CheckTypeSize(GStaticPrivate *,8, 11708, 11)
#elif __ia64__
CheckTypeSize(GStaticPrivate *,8, 11708, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStaticPrivate *,4, 11708, 6)
#elif __powerpc64__
CheckTypeSize(GStaticPrivate *,8, 11708, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStaticPrivate *,4, 11708, 10)
#elif __s390x__
CheckTypeSize(GStaticPrivate *,8, 11708, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11708,0);
Msg("Find size of GStaticPrivate * (11708)\n");
#endif

#if __i386__
CheckEnum("G_FILE_ERROR_EXIST",G_FILE_ERROR_EXIST,0);
CheckEnum("G_FILE_ERROR_ISDIR",G_FILE_ERROR_ISDIR,1);
CheckEnum("G_FILE_ERROR_ACCES",G_FILE_ERROR_ACCES,2);
CheckEnum("G_FILE_ERROR_NAMETOOLONG",G_FILE_ERROR_NAMETOOLONG,3);
CheckEnum("G_FILE_ERROR_NOENT",G_FILE_ERROR_NOENT,4);
CheckEnum("G_FILE_ERROR_NOTDIR",G_FILE_ERROR_NOTDIR,5);
CheckEnum("G_FILE_ERROR_NXIO",G_FILE_ERROR_NXIO,6);
CheckEnum("G_FILE_ERROR_NODEV",G_FILE_ERROR_NODEV,7);
CheckEnum("G_FILE_ERROR_ROFS",G_FILE_ERROR_ROFS,8);
CheckEnum("G_FILE_ERROR_TXTBSY",G_FILE_ERROR_TXTBSY,9);
CheckEnum("G_FILE_ERROR_FAULT",G_FILE_ERROR_FAULT,10);
CheckEnum("G_FILE_ERROR_LOOP",G_FILE_ERROR_LOOP,11);
CheckEnum("G_FILE_ERROR_NOSPC",G_FILE_ERROR_NOSPC,12);
CheckEnum("G_FILE_ERROR_NOMEM",G_FILE_ERROR_NOMEM,13);
CheckEnum("G_FILE_ERROR_MFILE",G_FILE_ERROR_MFILE,14);
CheckEnum("G_FILE_ERROR_NFILE",G_FILE_ERROR_NFILE,15);
CheckEnum("G_FILE_ERROR_BADF",G_FILE_ERROR_BADF,16);
CheckEnum("G_FILE_ERROR_INVAL",G_FILE_ERROR_INVAL,17);
CheckEnum("G_FILE_ERROR_PIPE",G_FILE_ERROR_PIPE,18);
CheckEnum("G_FILE_ERROR_AGAIN",G_FILE_ERROR_AGAIN,19);
CheckEnum("G_FILE_ERROR_INTR",G_FILE_ERROR_INTR,20);
CheckEnum("G_FILE_ERROR_IO",G_FILE_ERROR_IO,21);
CheckEnum("G_FILE_ERROR_PERM",G_FILE_ERROR_PERM,22);
CheckEnum("G_FILE_ERROR_NOSYS",G_FILE_ERROR_NOSYS,23);
CheckEnum("G_FILE_ERROR_FAILED",G_FILE_ERROR_FAILED,24);
#elif __x86_64__
CheckEnum("G_FILE_ERROR_EXIST",G_FILE_ERROR_EXIST,0);
CheckEnum("G_FILE_ERROR_ISDIR",G_FILE_ERROR_ISDIR,1);
CheckEnum("G_FILE_ERROR_ACCES",G_FILE_ERROR_ACCES,2);
CheckEnum("G_FILE_ERROR_NAMETOOLONG",G_FILE_ERROR_NAMETOOLONG,3);
CheckEnum("G_FILE_ERROR_NOENT",G_FILE_ERROR_NOENT,4);
CheckEnum("G_FILE_ERROR_NOTDIR",G_FILE_ERROR_NOTDIR,5);
CheckEnum("G_FILE_ERROR_NXIO",G_FILE_ERROR_NXIO,6);
CheckEnum("G_FILE_ERROR_NODEV",G_FILE_ERROR_NODEV,7);
CheckEnum("G_FILE_ERROR_ROFS",G_FILE_ERROR_ROFS,8);
CheckEnum("G_FILE_ERROR_TXTBSY",G_FILE_ERROR_TXTBSY,9);
CheckEnum("G_FILE_ERROR_FAULT",G_FILE_ERROR_FAULT,10);
CheckEnum("G_FILE_ERROR_LOOP",G_FILE_ERROR_LOOP,11);
CheckEnum("G_FILE_ERROR_NOSPC",G_FILE_ERROR_NOSPC,12);
CheckEnum("G_FILE_ERROR_NOMEM",G_FILE_ERROR_NOMEM,13);
CheckEnum("G_FILE_ERROR_MFILE",G_FILE_ERROR_MFILE,14);
CheckEnum("G_FILE_ERROR_NFILE",G_FILE_ERROR_NFILE,15);
CheckEnum("G_FILE_ERROR_BADF",G_FILE_ERROR_BADF,16);
CheckEnum("G_FILE_ERROR_INVAL",G_FILE_ERROR_INVAL,17);
CheckEnum("G_FILE_ERROR_PIPE",G_FILE_ERROR_PIPE,18);
CheckEnum("G_FILE_ERROR_AGAIN",G_FILE_ERROR_AGAIN,19);
CheckEnum("G_FILE_ERROR_INTR",G_FILE_ERROR_INTR,20);
CheckEnum("G_FILE_ERROR_IO",G_FILE_ERROR_IO,21);
CheckEnum("G_FILE_ERROR_PERM",G_FILE_ERROR_PERM,22);
CheckEnum("G_FILE_ERROR_NOSYS",G_FILE_ERROR_NOSYS,23);
CheckEnum("G_FILE_ERROR_FAILED",G_FILE_ERROR_FAILED,24);
#elif __ia64__
CheckEnum("G_FILE_ERROR_EXIST",G_FILE_ERROR_EXIST,0);
CheckEnum("G_FILE_ERROR_ISDIR",G_FILE_ERROR_ISDIR,1);
CheckEnum("G_FILE_ERROR_ACCES",G_FILE_ERROR_ACCES,2);
CheckEnum("G_FILE_ERROR_NAMETOOLONG",G_FILE_ERROR_NAMETOOLONG,3);
CheckEnum("G_FILE_ERROR_NOENT",G_FILE_ERROR_NOENT,4);
CheckEnum("G_FILE_ERROR_NOTDIR",G_FILE_ERROR_NOTDIR,5);
CheckEnum("G_FILE_ERROR_NXIO",G_FILE_ERROR_NXIO,6);
CheckEnum("G_FILE_ERROR_NODEV",G_FILE_ERROR_NODEV,7);
CheckEnum("G_FILE_ERROR_ROFS",G_FILE_ERROR_ROFS,8);
CheckEnum("G_FILE_ERROR_TXTBSY",G_FILE_ERROR_TXTBSY,9);
CheckEnum("G_FILE_ERROR_FAULT",G_FILE_ERROR_FAULT,10);
CheckEnum("G_FILE_ERROR_LOOP",G_FILE_ERROR_LOOP,11);
CheckEnum("G_FILE_ERROR_NOSPC",G_FILE_ERROR_NOSPC,12);
CheckEnum("G_FILE_ERROR_NOMEM",G_FILE_ERROR_NOMEM,13);
CheckEnum("G_FILE_ERROR_MFILE",G_FILE_ERROR_MFILE,14);
CheckEnum("G_FILE_ERROR_NFILE",G_FILE_ERROR_NFILE,15);
CheckEnum("G_FILE_ERROR_BADF",G_FILE_ERROR_BADF,16);
CheckEnum("G_FILE_ERROR_INVAL",G_FILE_ERROR_INVAL,17);
CheckEnum("G_FILE_ERROR_PIPE",G_FILE_ERROR_PIPE,18);
CheckEnum("G_FILE_ERROR_AGAIN",G_FILE_ERROR_AGAIN,19);
CheckEnum("G_FILE_ERROR_INTR",G_FILE_ERROR_INTR,20);
CheckEnum("G_FILE_ERROR_IO",G_FILE_ERROR_IO,21);
CheckEnum("G_FILE_ERROR_PERM",G_FILE_ERROR_PERM,22);
CheckEnum("G_FILE_ERROR_NOSYS",G_FILE_ERROR_NOSYS,23);
CheckEnum("G_FILE_ERROR_FAILED",G_FILE_ERROR_FAILED,24);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11709,0);
Msg("Find size of anon-glib-2.0/glib.h-17 (11709)\n");
#endif

#if __i386__
CheckTypeSize(GFileError,4, 11710, 2)
#elif __x86_64__
CheckTypeSize(GFileError,4, 11710, 11)
#elif __ia64__
CheckTypeSize(GFileError,4, 11710, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFileError,4, 11710, 6)
#elif __powerpc64__
CheckTypeSize(GFileError,4, 11710, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFileError,4, 11710, 10)
#elif __s390x__
CheckTypeSize(GFileError,4, 11710, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11710,0);
Msg("Find size of GFileError (11710)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11711,0);
Msg("Find size of fptr_glib_97 (11711)\n");
#endif

#if __i386__
CheckTypeSize(GDataForeachFunc,4, 11712, 2)
#elif __x86_64__
CheckTypeSize(GDataForeachFunc,8, 11712, 11)
#elif __ia64__
CheckTypeSize(GDataForeachFunc,8, 11712, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDataForeachFunc,4, 11712, 6)
#elif __powerpc64__
CheckTypeSize(GDataForeachFunc,8, 11712, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDataForeachFunc,4, 11712, 10)
#elif __s390x__
CheckTypeSize(GDataForeachFunc,8, 11712, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11712,0);
Msg("Find size of GDataForeachFunc (11712)\n");
#endif

#if __i386__
CheckTypeSize(struct _GMemVTable,24, 11713, 2)
CheckMemberSize(struct _GMemVTable,realloc,4,2,41764)
CheckOffset(struct _GMemVTable,realloc,4,2,41764)
CheckMemberSize(struct _GMemVTable,free,4,2,41765)
CheckOffset(struct _GMemVTable,free,8,2,41765)
CheckMemberSize(struct _GMemVTable,calloc,4,2,41768)
CheckOffset(struct _GMemVTable,calloc,12,2,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,4,2,41769)
CheckOffset(struct _GMemVTable,try_malloc,16,2,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,4,2,41770)
CheckOffset(struct _GMemVTable,try_realloc,20,2,41770)
#elif __x86_64__
CheckTypeSize(struct _GMemVTable,48, 11713, 11)
CheckMemberSize(struct _GMemVTable,realloc,8,11,41764)
CheckOffset(struct _GMemVTable,realloc,8,11,41764)
CheckMemberSize(struct _GMemVTable,free,8,11,41765)
CheckOffset(struct _GMemVTable,free,16,11,41765)
CheckMemberSize(struct _GMemVTable,calloc,8,11,41768)
CheckOffset(struct _GMemVTable,calloc,24,11,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,8,11,41769)
CheckOffset(struct _GMemVTable,try_malloc,32,11,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,8,11,41770)
CheckOffset(struct _GMemVTable,try_realloc,40,11,41770)
#elif __ia64__
CheckTypeSize(struct _GMemVTable,48, 11713, 3)
CheckMemberSize(struct _GMemVTable,realloc,8,3,41764)
CheckOffset(struct _GMemVTable,realloc,8,3,41764)
CheckMemberSize(struct _GMemVTable,free,8,3,41765)
CheckOffset(struct _GMemVTable,free,16,3,41765)
CheckMemberSize(struct _GMemVTable,calloc,8,3,41768)
CheckOffset(struct _GMemVTable,calloc,24,3,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,8,3,41769)
CheckOffset(struct _GMemVTable,try_malloc,32,3,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,8,3,41770)
CheckOffset(struct _GMemVTable,try_realloc,40,3,41770)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GMemVTable,24, 11713, 6)
CheckMemberSize(struct _GMemVTable,realloc,4,6,41764)
CheckOffset(struct _GMemVTable,realloc,4,6,41764)
CheckMemberSize(struct _GMemVTable,free,4,6,41765)
CheckOffset(struct _GMemVTable,free,8,6,41765)
CheckMemberSize(struct _GMemVTable,calloc,4,6,41768)
CheckOffset(struct _GMemVTable,calloc,12,6,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,4,6,41769)
CheckOffset(struct _GMemVTable,try_malloc,16,6,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,4,6,41770)
CheckOffset(struct _GMemVTable,try_realloc,20,6,41770)
#elif __powerpc64__
CheckTypeSize(struct _GMemVTable,48, 11713, 9)
CheckMemberSize(struct _GMemVTable,realloc,8,9,41764)
CheckOffset(struct _GMemVTable,realloc,8,9,41764)
CheckMemberSize(struct _GMemVTable,free,8,9,41765)
CheckOffset(struct _GMemVTable,free,16,9,41765)
CheckMemberSize(struct _GMemVTable,calloc,8,9,41768)
CheckOffset(struct _GMemVTable,calloc,24,9,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,8,9,41769)
CheckOffset(struct _GMemVTable,try_malloc,32,9,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,8,9,41770)
CheckOffset(struct _GMemVTable,try_realloc,40,9,41770)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GMemVTable,24, 11713, 10)
CheckMemberSize(struct _GMemVTable,realloc,4,10,41764)
CheckOffset(struct _GMemVTable,realloc,4,10,41764)
CheckMemberSize(struct _GMemVTable,free,4,10,41765)
CheckOffset(struct _GMemVTable,free,8,10,41765)
CheckMemberSize(struct _GMemVTable,calloc,4,10,41768)
CheckOffset(struct _GMemVTable,calloc,12,10,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,4,10,41769)
CheckOffset(struct _GMemVTable,try_malloc,16,10,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,4,10,41770)
CheckOffset(struct _GMemVTable,try_realloc,20,10,41770)
#elif __s390x__
CheckTypeSize(struct _GMemVTable,48, 11713, 12)
CheckMemberSize(struct _GMemVTable,realloc,8,12,41764)
CheckOffset(struct _GMemVTable,realloc,8,12,41764)
CheckMemberSize(struct _GMemVTable,free,8,12,41765)
CheckOffset(struct _GMemVTable,free,16,12,41765)
CheckMemberSize(struct _GMemVTable,calloc,8,12,41768)
CheckOffset(struct _GMemVTable,calloc,24,12,41768)
CheckMemberSize(struct _GMemVTable,try_malloc,8,12,41769)
CheckOffset(struct _GMemVTable,try_malloc,32,12,41769)
CheckMemberSize(struct _GMemVTable,try_realloc,8,12,41770)
CheckOffset(struct _GMemVTable,try_realloc,40,12,41770)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11713,0);
Msg("Find size of _GMemVTable (11713)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11714,0);
Msg("Find size of fptr_glib_389 (11714)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11715,0);
Msg("Find size of fptr_glib_249 (11715)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11716,0);
Msg("Find size of fptr_glib_425 (11716)\n");
#endif

#if __i386__
CheckTypeSize(GMemVTable,24, 11717, 2)
#elif __x86_64__
CheckTypeSize(GMemVTable,48, 11717, 11)
#elif __ia64__
CheckTypeSize(GMemVTable,48, 11717, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMemVTable,24, 11717, 6)
#elif __powerpc64__
CheckTypeSize(GMemVTable,48, 11717, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMemVTable,24, 11717, 10)
#elif __s390x__
CheckTypeSize(GMemVTable,48, 11717, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11717,0);
Msg("Find size of GMemVTable (11717)\n");
#endif

#if __i386__
CheckTypeSize(GMemVTable *,4, 11718, 2)
#elif __x86_64__
CheckTypeSize(GMemVTable *,8, 11718, 11)
#elif __ia64__
CheckTypeSize(GMemVTable *,8, 11718, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMemVTable *,4, 11718, 6)
#elif __powerpc64__
CheckTypeSize(GMemVTable *,8, 11718, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMemVTable *,4, 11718, 10)
#elif __s390x__
CheckTypeSize(GMemVTable *,8, 11718, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11718,0);
Msg("Find size of GMemVTable * (11718)\n");
#endif

#if __i386__
CheckTypeSize(struct _GOptionEntry,28, 11719, 2)
CheckMemberSize(struct _GOptionEntry,short_name,1,2,41772)
CheckOffset(struct _GOptionEntry,short_name,4,2,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,2,41773)
CheckOffset(struct _GOptionEntry,flags,8,2,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,2,41781)
CheckOffset(struct _GOptionEntry,arg,12,2,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,4,2,41782)
CheckOffset(struct _GOptionEntry,arg_data,16,2,41782)
CheckMemberSize(struct _GOptionEntry,description,4,2,41783)
CheckOffset(struct _GOptionEntry,description,20,2,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,4,2,41784)
CheckOffset(struct _GOptionEntry,arg_description,24,2,41784)
#elif __x86_64__
CheckTypeSize(struct _GOptionEntry,48, 11719, 11)
CheckMemberSize(struct _GOptionEntry,short_name,1,11,41772)
CheckOffset(struct _GOptionEntry,short_name,8,11,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,11,41773)
CheckOffset(struct _GOptionEntry,flags,12,11,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,11,41781)
CheckOffset(struct _GOptionEntry,arg,16,11,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,8,11,41782)
CheckOffset(struct _GOptionEntry,arg_data,24,11,41782)
CheckMemberSize(struct _GOptionEntry,description,8,11,41783)
CheckOffset(struct _GOptionEntry,description,32,11,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,8,11,41784)
CheckOffset(struct _GOptionEntry,arg_description,40,11,41784)
#elif __ia64__
CheckTypeSize(struct _GOptionEntry,48, 11719, 3)
CheckMemberSize(struct _GOptionEntry,short_name,1,3,41772)
CheckOffset(struct _GOptionEntry,short_name,8,3,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,3,41773)
CheckOffset(struct _GOptionEntry,flags,12,3,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,3,41781)
CheckOffset(struct _GOptionEntry,arg,16,3,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,8,3,41782)
CheckOffset(struct _GOptionEntry,arg_data,24,3,41782)
CheckMemberSize(struct _GOptionEntry,description,8,3,41783)
CheckOffset(struct _GOptionEntry,description,32,3,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,8,3,41784)
CheckOffset(struct _GOptionEntry,arg_description,40,3,41784)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GOptionEntry,28, 11719, 6)
CheckMemberSize(struct _GOptionEntry,short_name,1,6,41772)
CheckOffset(struct _GOptionEntry,short_name,4,6,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,6,41773)
CheckOffset(struct _GOptionEntry,flags,8,6,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,6,41781)
CheckOffset(struct _GOptionEntry,arg,12,6,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,4,6,41782)
CheckOffset(struct _GOptionEntry,arg_data,16,6,41782)
CheckMemberSize(struct _GOptionEntry,description,4,6,41783)
CheckOffset(struct _GOptionEntry,description,20,6,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,4,6,41784)
CheckOffset(struct _GOptionEntry,arg_description,24,6,41784)
#elif __powerpc64__
CheckTypeSize(struct _GOptionEntry,48, 11719, 9)
CheckMemberSize(struct _GOptionEntry,short_name,1,9,41772)
CheckOffset(struct _GOptionEntry,short_name,8,9,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,9,41773)
CheckOffset(struct _GOptionEntry,flags,12,9,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,9,41781)
CheckOffset(struct _GOptionEntry,arg,16,9,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,8,9,41782)
CheckOffset(struct _GOptionEntry,arg_data,24,9,41782)
CheckMemberSize(struct _GOptionEntry,description,8,9,41783)
CheckOffset(struct _GOptionEntry,description,32,9,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,8,9,41784)
CheckOffset(struct _GOptionEntry,arg_description,40,9,41784)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GOptionEntry,28, 11719, 10)
CheckMemberSize(struct _GOptionEntry,short_name,1,10,41772)
CheckOffset(struct _GOptionEntry,short_name,4,10,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,10,41773)
CheckOffset(struct _GOptionEntry,flags,8,10,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,10,41781)
CheckOffset(struct _GOptionEntry,arg,12,10,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,4,10,41782)
CheckOffset(struct _GOptionEntry,arg_data,16,10,41782)
CheckMemberSize(struct _GOptionEntry,description,4,10,41783)
CheckOffset(struct _GOptionEntry,description,20,10,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,4,10,41784)
CheckOffset(struct _GOptionEntry,arg_description,24,10,41784)
#elif __s390x__
CheckTypeSize(struct _GOptionEntry,48, 11719, 12)
CheckMemberSize(struct _GOptionEntry,short_name,1,12,41772)
CheckOffset(struct _GOptionEntry,short_name,8,12,41772)
CheckMemberSize(struct _GOptionEntry,flags,4,12,41773)
CheckOffset(struct _GOptionEntry,flags,12,12,41773)
CheckMemberSize(struct _GOptionEntry,arg,4,12,41781)
CheckOffset(struct _GOptionEntry,arg,16,12,41781)
CheckMemberSize(struct _GOptionEntry,arg_data,8,12,41782)
CheckOffset(struct _GOptionEntry,arg_data,24,12,41782)
CheckMemberSize(struct _GOptionEntry,description,8,12,41783)
CheckOffset(struct _GOptionEntry,description,32,12,41783)
CheckMemberSize(struct _GOptionEntry,arg_description,8,12,41784)
CheckOffset(struct _GOptionEntry,arg_description,40,12,41784)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11719,0);
Msg("Find size of _GOptionEntry (11719)\n");
#endif

#if __i386__
CheckEnum("G_OPTION_ARG_NONE",G_OPTION_ARG_NONE,0);
CheckEnum("G_OPTION_ARG_STRING",G_OPTION_ARG_STRING,1);
CheckEnum("G_OPTION_ARG_INT",G_OPTION_ARG_INT,2);
CheckEnum("G_OPTION_ARG_CALLBACK",G_OPTION_ARG_CALLBACK,3);
CheckEnum("G_OPTION_ARG_FILENAME",G_OPTION_ARG_FILENAME,4);
CheckEnum("G_OPTION_ARG_STRING_ARRAY",G_OPTION_ARG_STRING_ARRAY,5);
CheckEnum("G_OPTION_ARG_FILENAME_ARRAY",G_OPTION_ARG_FILENAME_ARRAY,6);
#elif __x86_64__
CheckEnum("G_OPTION_ARG_NONE",G_OPTION_ARG_NONE,0);
CheckEnum("G_OPTION_ARG_STRING",G_OPTION_ARG_STRING,1);
CheckEnum("G_OPTION_ARG_INT",G_OPTION_ARG_INT,2);
CheckEnum("G_OPTION_ARG_CALLBACK",G_OPTION_ARG_CALLBACK,3);
CheckEnum("G_OPTION_ARG_FILENAME",G_OPTION_ARG_FILENAME,4);
CheckEnum("G_OPTION_ARG_STRING_ARRAY",G_OPTION_ARG_STRING_ARRAY,5);
CheckEnum("G_OPTION_ARG_FILENAME_ARRAY",G_OPTION_ARG_FILENAME_ARRAY,6);
#elif __ia64__
CheckEnum("G_OPTION_ARG_NONE",G_OPTION_ARG_NONE,0);
CheckEnum("G_OPTION_ARG_STRING",G_OPTION_ARG_STRING,1);
CheckEnum("G_OPTION_ARG_INT",G_OPTION_ARG_INT,2);
CheckEnum("G_OPTION_ARG_CALLBACK",G_OPTION_ARG_CALLBACK,3);
CheckEnum("G_OPTION_ARG_FILENAME",G_OPTION_ARG_FILENAME,4);
CheckEnum("G_OPTION_ARG_STRING_ARRAY",G_OPTION_ARG_STRING_ARRAY,5);
CheckEnum("G_OPTION_ARG_FILENAME_ARRAY",G_OPTION_ARG_FILENAME_ARRAY,6);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11720,0);
Msg("Find size of anon-glib-2.0/glib.h-54 (11720)\n");
#endif

#if __i386__
CheckTypeSize(GOptionArg,4, 11721, 2)
#elif __x86_64__
CheckTypeSize(GOptionArg,4, 11721, 11)
#elif __ia64__
CheckTypeSize(GOptionArg,4, 11721, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionArg,4, 11721, 6)
#elif __powerpc64__
CheckTypeSize(GOptionArg,4, 11721, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionArg,4, 11721, 10)
#elif __s390x__
CheckTypeSize(GOptionArg,4, 11721, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11721,0);
Msg("Find size of GOptionArg (11721)\n");
#endif

#if __i386__
CheckTypeSize(GOptionEntry,28, 11722, 2)
#elif __x86_64__
CheckTypeSize(GOptionEntry,48, 11722, 11)
#elif __ia64__
CheckTypeSize(GOptionEntry,48, 11722, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionEntry,28, 11722, 6)
#elif __powerpc64__
CheckTypeSize(GOptionEntry,48, 11722, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionEntry,28, 11722, 10)
#elif __s390x__
CheckTypeSize(GOptionEntry,48, 11722, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11722,0);
Msg("Find size of GOptionEntry (11722)\n");
#endif

#if __i386__
CheckTypeSize(const GOptionEntry,28, 11723, 2)
#elif __x86_64__
CheckTypeSize(const GOptionEntry,48, 11723, 11)
#elif __ia64__
CheckTypeSize(const GOptionEntry,48, 11723, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GOptionEntry,28, 11723, 6)
#elif __powerpc64__
CheckTypeSize(const GOptionEntry,48, 11723, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GOptionEntry,28, 11723, 10)
#elif __s390x__
CheckTypeSize(const GOptionEntry,48, 11723, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11723,0);
Msg("Find size of const GOptionEntry (11723)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11724,0);
Msg("Find size of const GOptionEntry * (11724)\n");
#endif

#if __i386__
CheckEnum("G_UNICODE_CONTROL",G_UNICODE_CONTROL,0);
CheckEnum("G_UNICODE_FORMAT",G_UNICODE_FORMAT,1);
CheckEnum("G_UNICODE_UNASSIGNED",G_UNICODE_UNASSIGNED,2);
CheckEnum("G_UNICODE_PRIVATE_USE",G_UNICODE_PRIVATE_USE,3);
CheckEnum("G_UNICODE_SURROGATE",G_UNICODE_SURROGATE,4);
CheckEnum("G_UNICODE_LOWERCASE_LETTER",G_UNICODE_LOWERCASE_LETTER,5);
CheckEnum("G_UNICODE_MODIFIER_LETTER",G_UNICODE_MODIFIER_LETTER,6);
CheckEnum("G_UNICODE_OTHER_LETTER",G_UNICODE_OTHER_LETTER,7);
CheckEnum("G_UNICODE_TITLECASE_LETTER",G_UNICODE_TITLECASE_LETTER,8);
CheckEnum("G_UNICODE_UPPERCASE_LETTER",G_UNICODE_UPPERCASE_LETTER,9);
CheckEnum("G_UNICODE_COMBINING_MARK",G_UNICODE_COMBINING_MARK,10);
CheckEnum("G_UNICODE_ENCLOSING_MARK",G_UNICODE_ENCLOSING_MARK,11);
CheckEnum("G_UNICODE_NON_SPACING_MARK",G_UNICODE_NON_SPACING_MARK,12);
CheckEnum("G_UNICODE_DECIMAL_NUMBER",G_UNICODE_DECIMAL_NUMBER,13);
CheckEnum("G_UNICODE_LETTER_NUMBER",G_UNICODE_LETTER_NUMBER,14);
CheckEnum("G_UNICODE_OTHER_NUMBER",G_UNICODE_OTHER_NUMBER,15);
CheckEnum("G_UNICODE_CONNECT_PUNCTUATION",G_UNICODE_CONNECT_PUNCTUATION,16);
CheckEnum("G_UNICODE_DASH_PUNCTUATION",G_UNICODE_DASH_PUNCTUATION,17);
CheckEnum("G_UNICODE_CLOSE_PUNCTUATION",G_UNICODE_CLOSE_PUNCTUATION,18);
CheckEnum("G_UNICODE_FINAL_PUNCTUATION",G_UNICODE_FINAL_PUNCTUATION,19);
CheckEnum("G_UNICODE_INITIAL_PUNCTUATION",G_UNICODE_INITIAL_PUNCTUATION,20);
CheckEnum("G_UNICODE_OTHER_PUNCTUATION",G_UNICODE_OTHER_PUNCTUATION,21);
CheckEnum("G_UNICODE_OPEN_PUNCTUATION",G_UNICODE_OPEN_PUNCTUATION,22);
CheckEnum("G_UNICODE_CURRENCY_SYMBOL",G_UNICODE_CURRENCY_SYMBOL,23);
CheckEnum("G_UNICODE_MODIFIER_SYMBOL",G_UNICODE_MODIFIER_SYMBOL,24);
CheckEnum("G_UNICODE_MATH_SYMBOL",G_UNICODE_MATH_SYMBOL,25);
CheckEnum("G_UNICODE_OTHER_SYMBOL",G_UNICODE_OTHER_SYMBOL,26);
CheckEnum("G_UNICODE_LINE_SEPARATOR",G_UNICODE_LINE_SEPARATOR,27);
CheckEnum("G_UNICODE_PARAGRAPH_SEPARATOR",G_UNICODE_PARAGRAPH_SEPARATOR,28);
CheckEnum("G_UNICODE_SPACE_SEPARATOR",G_UNICODE_SPACE_SEPARATOR,29);
#elif __x86_64__
CheckEnum("G_UNICODE_CONTROL",G_UNICODE_CONTROL,0);
CheckEnum("G_UNICODE_FORMAT",G_UNICODE_FORMAT,1);
CheckEnum("G_UNICODE_UNASSIGNED",G_UNICODE_UNASSIGNED,2);
CheckEnum("G_UNICODE_PRIVATE_USE",G_UNICODE_PRIVATE_USE,3);
CheckEnum("G_UNICODE_SURROGATE",G_UNICODE_SURROGATE,4);
CheckEnum("G_UNICODE_LOWERCASE_LETTER",G_UNICODE_LOWERCASE_LETTER,5);
CheckEnum("G_UNICODE_MODIFIER_LETTER",G_UNICODE_MODIFIER_LETTER,6);
CheckEnum("G_UNICODE_OTHER_LETTER",G_UNICODE_OTHER_LETTER,7);
CheckEnum("G_UNICODE_TITLECASE_LETTER",G_UNICODE_TITLECASE_LETTER,8);
CheckEnum("G_UNICODE_UPPERCASE_LETTER",G_UNICODE_UPPERCASE_LETTER,9);
CheckEnum("G_UNICODE_COMBINING_MARK",G_UNICODE_COMBINING_MARK,10);
CheckEnum("G_UNICODE_ENCLOSING_MARK",G_UNICODE_ENCLOSING_MARK,11);
CheckEnum("G_UNICODE_NON_SPACING_MARK",G_UNICODE_NON_SPACING_MARK,12);
CheckEnum("G_UNICODE_DECIMAL_NUMBER",G_UNICODE_DECIMAL_NUMBER,13);
CheckEnum("G_UNICODE_LETTER_NUMBER",G_UNICODE_LETTER_NUMBER,14);
CheckEnum("G_UNICODE_OTHER_NUMBER",G_UNICODE_OTHER_NUMBER,15);
CheckEnum("G_UNICODE_CONNECT_PUNCTUATION",G_UNICODE_CONNECT_PUNCTUATION,16);
CheckEnum("G_UNICODE_DASH_PUNCTUATION",G_UNICODE_DASH_PUNCTUATION,17);
CheckEnum("G_UNICODE_CLOSE_PUNCTUATION",G_UNICODE_CLOSE_PUNCTUATION,18);
CheckEnum("G_UNICODE_FINAL_PUNCTUATION",G_UNICODE_FINAL_PUNCTUATION,19);
CheckEnum("G_UNICODE_INITIAL_PUNCTUATION",G_UNICODE_INITIAL_PUNCTUATION,20);
CheckEnum("G_UNICODE_OTHER_PUNCTUATION",G_UNICODE_OTHER_PUNCTUATION,21);
CheckEnum("G_UNICODE_OPEN_PUNCTUATION",G_UNICODE_OPEN_PUNCTUATION,22);
CheckEnum("G_UNICODE_CURRENCY_SYMBOL",G_UNICODE_CURRENCY_SYMBOL,23);
CheckEnum("G_UNICODE_MODIFIER_SYMBOL",G_UNICODE_MODIFIER_SYMBOL,24);
CheckEnum("G_UNICODE_MATH_SYMBOL",G_UNICODE_MATH_SYMBOL,25);
CheckEnum("G_UNICODE_OTHER_SYMBOL",G_UNICODE_OTHER_SYMBOL,26);
CheckEnum("G_UNICODE_LINE_SEPARATOR",G_UNICODE_LINE_SEPARATOR,27);
CheckEnum("G_UNICODE_PARAGRAPH_SEPARATOR",G_UNICODE_PARAGRAPH_SEPARATOR,28);
CheckEnum("G_UNICODE_SPACE_SEPARATOR",G_UNICODE_SPACE_SEPARATOR,29);
#elif __ia64__
CheckEnum("G_UNICODE_CONTROL",G_UNICODE_CONTROL,0);
CheckEnum("G_UNICODE_FORMAT",G_UNICODE_FORMAT,1);
CheckEnum("G_UNICODE_UNASSIGNED",G_UNICODE_UNASSIGNED,2);
CheckEnum("G_UNICODE_PRIVATE_USE",G_UNICODE_PRIVATE_USE,3);
CheckEnum("G_UNICODE_SURROGATE",G_UNICODE_SURROGATE,4);
CheckEnum("G_UNICODE_LOWERCASE_LETTER",G_UNICODE_LOWERCASE_LETTER,5);
CheckEnum("G_UNICODE_MODIFIER_LETTER",G_UNICODE_MODIFIER_LETTER,6);
CheckEnum("G_UNICODE_OTHER_LETTER",G_UNICODE_OTHER_LETTER,7);
CheckEnum("G_UNICODE_TITLECASE_LETTER",G_UNICODE_TITLECASE_LETTER,8);
CheckEnum("G_UNICODE_UPPERCASE_LETTER",G_UNICODE_UPPERCASE_LETTER,9);
CheckEnum("G_UNICODE_COMBINING_MARK",G_UNICODE_COMBINING_MARK,10);
CheckEnum("G_UNICODE_ENCLOSING_MARK",G_UNICODE_ENCLOSING_MARK,11);
CheckEnum("G_UNICODE_NON_SPACING_MARK",G_UNICODE_NON_SPACING_MARK,12);
CheckEnum("G_UNICODE_DECIMAL_NUMBER",G_UNICODE_DECIMAL_NUMBER,13);
CheckEnum("G_UNICODE_LETTER_NUMBER",G_UNICODE_LETTER_NUMBER,14);
CheckEnum("G_UNICODE_OTHER_NUMBER",G_UNICODE_OTHER_NUMBER,15);
CheckEnum("G_UNICODE_CONNECT_PUNCTUATION",G_UNICODE_CONNECT_PUNCTUATION,16);
CheckEnum("G_UNICODE_DASH_PUNCTUATION",G_UNICODE_DASH_PUNCTUATION,17);
CheckEnum("G_UNICODE_CLOSE_PUNCTUATION",G_UNICODE_CLOSE_PUNCTUATION,18);
CheckEnum("G_UNICODE_FINAL_PUNCTUATION",G_UNICODE_FINAL_PUNCTUATION,19);
CheckEnum("G_UNICODE_INITIAL_PUNCTUATION",G_UNICODE_INITIAL_PUNCTUATION,20);
CheckEnum("G_UNICODE_OTHER_PUNCTUATION",G_UNICODE_OTHER_PUNCTUATION,21);
CheckEnum("G_UNICODE_OPEN_PUNCTUATION",G_UNICODE_OPEN_PUNCTUATION,22);
CheckEnum("G_UNICODE_CURRENCY_SYMBOL",G_UNICODE_CURRENCY_SYMBOL,23);
CheckEnum("G_UNICODE_MODIFIER_SYMBOL",G_UNICODE_MODIFIER_SYMBOL,24);
CheckEnum("G_UNICODE_MATH_SYMBOL",G_UNICODE_MATH_SYMBOL,25);
CheckEnum("G_UNICODE_OTHER_SYMBOL",G_UNICODE_OTHER_SYMBOL,26);
CheckEnum("G_UNICODE_LINE_SEPARATOR",G_UNICODE_LINE_SEPARATOR,27);
CheckEnum("G_UNICODE_PARAGRAPH_SEPARATOR",G_UNICODE_PARAGRAPH_SEPARATOR,28);
CheckEnum("G_UNICODE_SPACE_SEPARATOR",G_UNICODE_SPACE_SEPARATOR,29);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11725,0);
Msg("Find size of anon-glib-2.0/glib.h-79 (11725)\n");
#endif

#if __i386__
CheckTypeSize(GUnicodeType,4, 11726, 2)
#elif __x86_64__
CheckTypeSize(GUnicodeType,4, 11726, 11)
#elif __ia64__
CheckTypeSize(GUnicodeType,4, 11726, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GUnicodeType,4, 11726, 6)
#elif __powerpc64__
CheckTypeSize(GUnicodeType,4, 11726, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GUnicodeType,4, 11726, 10)
#elif __s390x__
CheckTypeSize(GUnicodeType,4, 11726, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11726,0);
Msg("Find size of GUnicodeType (11726)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11727,0);
Msg("Find size of fptr_glib_204 (11727)\n");
#endif

#if __i386__
CheckTypeSize(GLogFunc,4, 11728, 2)
#elif __x86_64__
CheckTypeSize(GLogFunc,8, 11728, 11)
#elif __ia64__
CheckTypeSize(GLogFunc,8, 11728, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GLogFunc,4, 11728, 6)
#elif __powerpc64__
CheckTypeSize(GLogFunc,8, 11728, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GLogFunc,4, 11728, 10)
#elif __s390x__
CheckTypeSize(GLogFunc,8, 11728, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11728,0);
Msg("Find size of GLogFunc (11728)\n");
#endif

#if __i386__
CheckTypeSize(GAllocator,0, 11730, 2)
#elif __x86_64__
CheckTypeSize(GAllocator,0, 11730, 11)
#elif __ia64__
CheckTypeSize(GAllocator,0, 11730, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11730,0);
Msg("Find size of GAllocator (11730)\n");
#endif

#if __i386__
CheckTypeSize(GAllocator *,4, 11731, 2)
#elif __x86_64__
CheckTypeSize(GAllocator *,8, 11731, 11)
#elif __ia64__
CheckTypeSize(GAllocator *,8, 11731, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GAllocator *,4, 11731, 6)
#elif __powerpc64__
CheckTypeSize(GAllocator *,8, 11731, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GAllocator *,4, 11731, 10)
#elif __s390x__
CheckTypeSize(GAllocator *,8, 11731, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11731,0);
Msg("Find size of GAllocator * (11731)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11732,0);
Msg("Find size of fptr_glib_62 (11732)\n");
#endif

#if __i386__
CheckTypeSize(GTranslateFunc,4, 11733, 2)
#elif __x86_64__
CheckTypeSize(GTranslateFunc,8, 11733, 11)
#elif __ia64__
CheckTypeSize(GTranslateFunc,8, 11733, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTranslateFunc,4, 11733, 6)
#elif __powerpc64__
CheckTypeSize(GTranslateFunc,8, 11733, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTranslateFunc,4, 11733, 10)
#elif __s390x__
CheckTypeSize(GTranslateFunc,8, 11733, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11733,0);
Msg("Find size of GTranslateFunc (11733)\n");
#endif

#if __i386__
CheckTypeSize(const gunichar2,2, 11734, 2)
#elif __x86_64__
CheckTypeSize(const gunichar2,2, 11734, 11)
#elif __ia64__
CheckTypeSize(const gunichar2,2, 11734, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const gunichar2,2, 11734, 6)
#elif __powerpc64__
CheckTypeSize(const gunichar2,2, 11734, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const gunichar2,2, 11734, 10)
#elif __s390x__
CheckTypeSize(const gunichar2,2, 11734, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11734,0);
Msg("Find size of const gunichar2 (11734)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11735,0);
Msg("Find size of const gunichar2 * (11735)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11736,0);
Msg("Find size of fptr_glib_2 (11736)\n");
#endif

#if __i386__
CheckTypeSize(GOptionParseFunc,4, 11737, 2)
#elif __x86_64__
CheckTypeSize(GOptionParseFunc,8, 11737, 11)
#elif __ia64__
CheckTypeSize(GOptionParseFunc,8, 11737, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionParseFunc,4, 11737, 6)
#elif __powerpc64__
CheckTypeSize(GOptionParseFunc,8, 11737, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionParseFunc,4, 11737, 10)
#elif __s390x__
CheckTypeSize(GOptionParseFunc,8, 11737, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11737,0);
Msg("Find size of GOptionParseFunc (11737)\n");
#endif

#if __i386__
CheckTypeSize(GVoidFunc,4, 11738, 2)
#elif __x86_64__
CheckTypeSize(GVoidFunc,8, 11738, 11)
#elif __ia64__
CheckTypeSize(GVoidFunc,8, 11738, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GVoidFunc,4, 11738, 6)
#elif __powerpc64__
CheckTypeSize(GVoidFunc,8, 11738, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GVoidFunc,4, 11738, 10)
#elif __s390x__
CheckTypeSize(GVoidFunc,8, 11738, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11738,0);
Msg("Find size of GVoidFunc (11738)\n");
#endif

#if __i386__
CheckTypeSize(GHookFindFunc,4, 11739, 2)
#elif __x86_64__
CheckTypeSize(GHookFindFunc,8, 11739, 11)
#elif __ia64__
CheckTypeSize(GHookFindFunc,8, 11739, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookFindFunc,4, 11739, 6)
#elif __powerpc64__
CheckTypeSize(GHookFindFunc,8, 11739, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookFindFunc,4, 11739, 10)
#elif __s390x__
CheckTypeSize(GHookFindFunc,8, 11739, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11739,0);
Msg("Find size of GHookFindFunc (11739)\n");
#endif

#if __i386__
CheckTypeSize(const GString,12, 11740, 2)
#elif __x86_64__
CheckTypeSize(const GString,24, 11740, 11)
#elif __ia64__
CheckTypeSize(const GString,24, 11740, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GString,12, 11740, 6)
#elif __powerpc64__
CheckTypeSize(const GString,24, 11740, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GString,12, 11740, 10)
#elif __s390x__
CheckTypeSize(const GString,24, 11740, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11740,0);
Msg("Find size of const GString (11740)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11741,0);
Msg("Find size of const GString * (11741)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTuples,4, 11742, 2)
Msg("Missing member data for _GTuples on IA32\n");
CheckOffset(struct _GTuples,len,0,2,41825)
#elif __x86_64__
CheckTypeSize(struct _GTuples,4, 11742, 11)
Msg("Missing member data for _GTuples on x86-64\n");
CheckOffset(struct _GTuples,len,0,11,41825)
#elif __ia64__
CheckTypeSize(struct _GTuples,4, 11742, 3)
Msg("Missing member data for _GTuples on IA64\n");
CheckOffset(struct _GTuples,len,0,3,41825)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTuples,4, 11742, 6)
Msg("Missing member data for _GTuples on PPC32\n");
CheckOffset(struct _GTuples,len,0,6,41825)
#elif __powerpc64__
CheckTypeSize(struct _GTuples,4, 11742, 9)
Msg("Missing member data for _GTuples on PPC64\n");
CheckOffset(struct _GTuples,len,0,9,41825)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTuples,4, 11742, 10)
Msg("Missing member data for _GTuples on S390\n");
CheckOffset(struct _GTuples,len,0,10,41825)
#elif __s390x__
CheckTypeSize(struct _GTuples,4, 11742, 12)
Msg("Missing member data for _GTuples on S390X\n");
CheckOffset(struct _GTuples,len,0,12,41825)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11742,0);
Msg("Find size of _GTuples (11742)\n");
#endif

#if __i386__
CheckTypeSize(GTuples,4, 11743, 2)
#elif __x86_64__
CheckTypeSize(GTuples,4, 11743, 11)
#elif __ia64__
CheckTypeSize(GTuples,4, 11743, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTuples,4, 11743, 6)
#elif __powerpc64__
CheckTypeSize(GTuples,4, 11743, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTuples,4, 11743, 10)
#elif __s390x__
CheckTypeSize(GTuples,4, 11743, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11743,0);
Msg("Find size of GTuples (11743)\n");
#endif

#if __i386__
CheckTypeSize(GTuples *,4, 11744, 2)
#elif __x86_64__
CheckTypeSize(GTuples *,8, 11744, 11)
#elif __ia64__
CheckTypeSize(GTuples *,8, 11744, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTuples *,4, 11744, 6)
#elif __powerpc64__
CheckTypeSize(GTuples *,8, 11744, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTuples *,4, 11744, 10)
#elif __s390x__
CheckTypeSize(GTuples *,8, 11744, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11744,0);
Msg("Find size of GTuples * (11744)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11745,0);
Msg("Find size of fptr_glib_126 (11745)\n");
#endif

#if __i386__
CheckTypeSize(GCopyFunc,4, 11746, 2)
#elif __x86_64__
CheckTypeSize(GCopyFunc,8, 11746, 11)
#elif __ia64__
CheckTypeSize(GCopyFunc,8, 11746, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCopyFunc,4, 11746, 6)
#elif __powerpc64__
CheckTypeSize(GCopyFunc,8, 11746, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCopyFunc,4, 11746, 10)
#elif __s390x__
CheckTypeSize(GCopyFunc,8, 11746, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11746,0);
Msg("Find size of GCopyFunc (11746)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11747,0);
Msg("Find size of fptr_glib_0 (11747)\n");
#endif

#if __i386__
CheckTypeSize(GOptionErrorFunc,4, 11748, 2)
#elif __x86_64__
CheckTypeSize(GOptionErrorFunc,8, 11748, 11)
#elif __ia64__
CheckTypeSize(GOptionErrorFunc,8, 11748, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionErrorFunc,4, 11748, 6)
#elif __powerpc64__
CheckTypeSize(GOptionErrorFunc,8, 11748, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionErrorFunc,4, 11748, 10)
#elif __s390x__
CheckTypeSize(GOptionErrorFunc,8, 11748, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11748,0);
Msg("Find size of GOptionErrorFunc (11748)\n");
#endif

#if __i386__
CheckTypeSize(GCacheNewFunc,4, 11749, 2)
#elif __x86_64__
CheckTypeSize(GCacheNewFunc,8, 11749, 11)
#elif __ia64__
CheckTypeSize(GCacheNewFunc,8, 11749, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCacheNewFunc,4, 11749, 6)
#elif __powerpc64__
CheckTypeSize(GCacheNewFunc,8, 11749, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCacheNewFunc,4, 11749, 10)
#elif __s390x__
CheckTypeSize(GCacheNewFunc,8, 11749, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11749,0);
Msg("Find size of GCacheNewFunc (11749)\n");
#endif

#if __i386__
CheckTypeSize(GCacheDestroyFunc,4, 11750, 2)
#elif __x86_64__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 11)
#elif __ia64__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCacheDestroyFunc,4, 11750, 6)
#elif __powerpc64__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCacheDestroyFunc,4, 11750, 10)
#elif __s390x__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11750,0);
Msg("Find size of GCacheDestroyFunc (11750)\n");
#endif

#if __i386__
CheckTypeSize(GCacheDupFunc,4, 11751, 2)
#elif __x86_64__
CheckTypeSize(GCacheDupFunc,8, 11751, 11)
#elif __ia64__
CheckTypeSize(GCacheDupFunc,8, 11751, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCacheDupFunc,4, 11751, 6)
#elif __powerpc64__
CheckTypeSize(GCacheDupFunc,8, 11751, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCacheDupFunc,4, 11751, 10)
#elif __s390x__
CheckTypeSize(GCacheDupFunc,8, 11751, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11751,0);
Msg("Find size of GCacheDupFunc (11751)\n");
#endif

#if __i386__
CheckEnum("G_FILE_TEST_IS_REGULAR",G_FILE_TEST_IS_REGULAR,1);
CheckEnum("G_FILE_TEST_IS_SYMLINK",G_FILE_TEST_IS_SYMLINK,2);
CheckEnum("G_FILE_TEST_IS_DIR",G_FILE_TEST_IS_DIR,4);
CheckEnum("G_FILE_TEST_IS_EXECUTABLE",G_FILE_TEST_IS_EXECUTABLE,8);
CheckEnum("G_FILE_TEST_EXISTS",G_FILE_TEST_EXISTS,16);
#elif __x86_64__
CheckEnum("G_FILE_TEST_IS_REGULAR",G_FILE_TEST_IS_REGULAR,1);
CheckEnum("G_FILE_TEST_IS_SYMLINK",G_FILE_TEST_IS_SYMLINK,2);
CheckEnum("G_FILE_TEST_IS_DIR",G_FILE_TEST_IS_DIR,4);
CheckEnum("G_FILE_TEST_IS_EXECUTABLE",G_FILE_TEST_IS_EXECUTABLE,8);
CheckEnum("G_FILE_TEST_EXISTS",G_FILE_TEST_EXISTS,16);
#elif __ia64__
CheckEnum("G_FILE_TEST_IS_REGULAR",G_FILE_TEST_IS_REGULAR,1);
CheckEnum("G_FILE_TEST_IS_SYMLINK",G_FILE_TEST_IS_SYMLINK,2);
CheckEnum("G_FILE_TEST_IS_DIR",G_FILE_TEST_IS_DIR,4);
CheckEnum("G_FILE_TEST_IS_EXECUTABLE",G_FILE_TEST_IS_EXECUTABLE,8);
CheckEnum("G_FILE_TEST_EXISTS",G_FILE_TEST_EXISTS,16);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11752,0);
Msg("Find size of anon-glib-2.0/glib.h-18 (11752)\n");
#endif

#if __i386__
CheckTypeSize(GFileTest,4, 11753, 2)
#elif __x86_64__
CheckTypeSize(GFileTest,4, 11753, 11)
#elif __ia64__
CheckTypeSize(GFileTest,4, 11753, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFileTest,4, 11753, 6)
#elif __powerpc64__
CheckTypeSize(GFileTest,4, 11753, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFileTest,4, 11753, 10)
#elif __s390x__
CheckTypeSize(GFileTest,4, 11753, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11753,0);
Msg("Find size of GFileTest (11753)\n");
#endif

#if __i386__
CheckTypeSize(struct _GOnce,8, 11754, 2)
CheckMemberSize(struct _GOnce,retval,4,2,41841)
CheckOffset(struct _GOnce,retval,4,2,41841)
#elif __x86_64__
CheckTypeSize(struct _GOnce,16, 11754, 11)
CheckMemberSize(struct _GOnce,retval,8,11,41841)
CheckOffset(struct _GOnce,retval,8,11,41841)
#elif __ia64__
CheckTypeSize(struct _GOnce,16, 11754, 3)
CheckMemberSize(struct _GOnce,retval,8,3,41841)
CheckOffset(struct _GOnce,retval,8,3,41841)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GOnce,8, 11754, 6)
CheckMemberSize(struct _GOnce,retval,4,6,41841)
CheckOffset(struct _GOnce,retval,4,6,41841)
#elif __powerpc64__
CheckTypeSize(struct _GOnce,16, 11754, 9)
CheckMemberSize(struct _GOnce,retval,8,9,41841)
CheckOffset(struct _GOnce,retval,8,9,41841)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GOnce,8, 11754, 10)
CheckMemberSize(struct _GOnce,retval,4,10,41841)
CheckOffset(struct _GOnce,retval,4,10,41841)
#elif __s390x__
CheckTypeSize(struct _GOnce,16, 11754, 12)
CheckMemberSize(struct _GOnce,retval,8,12,41841)
CheckOffset(struct _GOnce,retval,8,12,41841)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11754,0);
Msg("Find size of _GOnce (11754)\n");
#endif

#if __i386__
CheckEnum("G_ONCE_STATUS_NOTCALLED",G_ONCE_STATUS_NOTCALLED,0);
CheckEnum("G_ONCE_STATUS_PROGRESS",G_ONCE_STATUS_PROGRESS,1);
CheckEnum("G_ONCE_STATUS_READY",G_ONCE_STATUS_READY,2);
#elif __x86_64__
CheckEnum("G_ONCE_STATUS_NOTCALLED",G_ONCE_STATUS_NOTCALLED,0);
CheckEnum("G_ONCE_STATUS_PROGRESS",G_ONCE_STATUS_PROGRESS,1);
CheckEnum("G_ONCE_STATUS_READY",G_ONCE_STATUS_READY,2);
#elif __ia64__
CheckEnum("G_ONCE_STATUS_NOTCALLED",G_ONCE_STATUS_NOTCALLED,0);
CheckEnum("G_ONCE_STATUS_PROGRESS",G_ONCE_STATUS_PROGRESS,1);
CheckEnum("G_ONCE_STATUS_READY",G_ONCE_STATUS_READY,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11755,0);
Msg("Find size of anon-glib-2.0/glib.h-73 (11755)\n");
#endif

#if __i386__
CheckTypeSize(GOnceStatus,4, 11756, 2)
#elif __x86_64__
CheckTypeSize(GOnceStatus,4, 11756, 11)
#elif __ia64__
CheckTypeSize(GOnceStatus,4, 11756, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOnceStatus,4, 11756, 6)
#elif __powerpc64__
CheckTypeSize(GOnceStatus,4, 11756, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOnceStatus,4, 11756, 10)
#elif __s390x__
CheckTypeSize(GOnceStatus,4, 11756, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11756,0);
Msg("Find size of GOnceStatus (11756)\n");
#endif

#if __i386__
CheckTypeSize(volatile GOnceStatus,4, 11757, 2)
#elif __x86_64__
CheckTypeSize(volatile GOnceStatus,4, 11757, 11)
#elif __ia64__
CheckTypeSize(volatile GOnceStatus,4, 11757, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(volatile GOnceStatus,4, 11757, 6)
#elif __powerpc64__
CheckTypeSize(volatile GOnceStatus,4, 11757, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(volatile GOnceStatus,4, 11757, 10)
#elif __s390x__
CheckTypeSize(volatile GOnceStatus,4, 11757, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11757,0);
Msg("Find size of volatile GOnceStatus (11757)\n");
#endif

#if __i386__
CheckTypeSize(volatile gpointer,4, 11758, 2)
#elif __x86_64__
CheckTypeSize(volatile gpointer,8, 11758, 11)
#elif __ia64__
CheckTypeSize(volatile gpointer,8, 11758, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(volatile gpointer,4, 11758, 6)
#elif __powerpc64__
CheckTypeSize(volatile gpointer,8, 11758, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(volatile gpointer,4, 11758, 10)
#elif __s390x__
CheckTypeSize(volatile gpointer,8, 11758, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11758,0);
Msg("Find size of volatile gpointer (11758)\n");
#endif

#if __i386__
CheckTypeSize(GOnce,8, 11759, 2)
#elif __x86_64__
CheckTypeSize(GOnce,16, 11759, 11)
#elif __ia64__
CheckTypeSize(GOnce,16, 11759, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOnce,8, 11759, 6)
#elif __powerpc64__
CheckTypeSize(GOnce,16, 11759, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOnce,8, 11759, 10)
#elif __s390x__
CheckTypeSize(GOnce,16, 11759, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11759,0);
Msg("Find size of GOnce (11759)\n");
#endif

#if __i386__
CheckTypeSize(GOnce *,4, 11760, 2)
#elif __x86_64__
CheckTypeSize(GOnce *,8, 11760, 11)
#elif __ia64__
CheckTypeSize(GOnce *,8, 11760, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOnce *,4, 11760, 6)
#elif __powerpc64__
CheckTypeSize(GOnce *,8, 11760, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOnce *,4, 11760, 10)
#elif __s390x__
CheckTypeSize(GOnce *,8, 11760, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11760,0);
Msg("Find size of GOnce * (11760)\n");
#endif

#if __i386__
CheckTypeSize(const GScannerConfig,24, 11761, 2)
#elif __x86_64__
CheckTypeSize(const GScannerConfig,40, 11761, 11)
#elif __ia64__
CheckTypeSize(const GScannerConfig,40, 11761, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GScannerConfig,24, 11761, 6)
#elif __powerpc64__
CheckTypeSize(const GScannerConfig,40, 11761, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GScannerConfig,24, 11761, 10)
#elif __s390x__
CheckTypeSize(const GScannerConfig,40, 11761, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11761,0);
Msg("Find size of const GScannerConfig (11761)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11762,0);
Msg("Find size of const GScannerConfig * (11762)\n");
#endif

#if __i386__
CheckTypeSize(gboolean *,4, 11763, 2)
#elif __x86_64__
CheckTypeSize(gboolean *,8, 11763, 11)
#elif __ia64__
CheckTypeSize(gboolean *,8, 11763, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gboolean *,4, 11763, 6)
#elif __powerpc64__
CheckTypeSize(gboolean *,8, 11763, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gboolean *,4, 11763, 10)
#elif __s390x__
CheckTypeSize(gboolean *,8, 11763, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11763,0);
Msg("Find size of gboolean * (11763)\n");
#endif

#if __i386__
CheckTypeSize(const guint8,1, 11764, 2)
#elif __x86_64__
CheckTypeSize(const guint8,1, 11764, 11)
#elif __ia64__
CheckTypeSize(const guint8,1, 11764, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const guint8,1, 11764, 6)
#elif __powerpc64__
CheckTypeSize(const guint8,1, 11764, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const guint8,1, 11764, 10)
#elif __s390x__
CheckTypeSize(const guint8,1, 11764, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11764,0);
Msg("Find size of const guint8 (11764)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11765,0);
Msg("Find size of const guint8 * (11765)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11766,0);
Msg("Find size of gchar * * * (11766)\n");
#endif

#if __i386__
CheckTypeSize(GTraverseFunc,4, 11767, 2)
#elif __x86_64__
CheckTypeSize(GTraverseFunc,8, 11767, 11)
#elif __ia64__
CheckTypeSize(GTraverseFunc,8, 11767, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTraverseFunc,4, 11767, 6)
#elif __powerpc64__
CheckTypeSize(GTraverseFunc,8, 11767, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTraverseFunc,4, 11767, 10)
#elif __s390x__
CheckTypeSize(GTraverseFunc,8, 11767, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11767,0);
Msg("Find size of GTraverseFunc (11767)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11768,0);
Msg("Find size of fptr_glib_302 (11768)\n");
#endif

#if __i386__
CheckTypeSize(GHookCompareFunc,4, 11769, 2)
#elif __x86_64__
CheckTypeSize(GHookCompareFunc,8, 11769, 11)
#elif __ia64__
CheckTypeSize(GHookCompareFunc,8, 11769, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookCompareFunc,4, 11769, 6)
#elif __powerpc64__
CheckTypeSize(GHookCompareFunc,8, 11769, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookCompareFunc,4, 11769, 10)
#elif __s390x__
CheckTypeSize(GHookCompareFunc,8, 11769, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11769,0);
Msg("Find size of GHookCompareFunc (11769)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11770,0);
Msg("Find size of fptr_glib_244 (11770)\n");
#endif

#if __i386__
CheckTypeSize(GNodeForeachFunc,4, 11771, 2)
#elif __x86_64__
CheckTypeSize(GNodeForeachFunc,8, 11771, 11)
#elif __ia64__
CheckTypeSize(GNodeForeachFunc,8, 11771, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GNodeForeachFunc,4, 11771, 6)
#elif __powerpc64__
CheckTypeSize(GNodeForeachFunc,8, 11771, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GNodeForeachFunc,4, 11771, 10)
#elif __s390x__
CheckTypeSize(GNodeForeachFunc,8, 11771, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11771,0);
Msg("Find size of GNodeForeachFunc (11771)\n");
#endif

#if __i386__
CheckTypeSize(struct _GDebugKey,8, 11772, 2)
CheckMemberSize(struct _GDebugKey,value,4,2,41847)
CheckOffset(struct _GDebugKey,value,4,2,41847)
#elif __x86_64__
CheckTypeSize(struct _GDebugKey,16, 11772, 11)
CheckMemberSize(struct _GDebugKey,value,4,11,41847)
CheckOffset(struct _GDebugKey,value,8,11,41847)
#elif __ia64__
CheckTypeSize(struct _GDebugKey,16, 11772, 3)
CheckMemberSize(struct _GDebugKey,value,4,3,41847)
CheckOffset(struct _GDebugKey,value,8,3,41847)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GDebugKey,8, 11772, 6)
CheckMemberSize(struct _GDebugKey,value,4,6,41847)
CheckOffset(struct _GDebugKey,value,4,6,41847)
#elif __powerpc64__
CheckTypeSize(struct _GDebugKey,16, 11772, 9)
CheckMemberSize(struct _GDebugKey,value,4,9,41847)
CheckOffset(struct _GDebugKey,value,8,9,41847)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GDebugKey,8, 11772, 10)
CheckMemberSize(struct _GDebugKey,value,4,10,41847)
CheckOffset(struct _GDebugKey,value,4,10,41847)
#elif __s390x__
CheckTypeSize(struct _GDebugKey,16, 11772, 12)
CheckMemberSize(struct _GDebugKey,value,4,12,41847)
CheckOffset(struct _GDebugKey,value,8,12,41847)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11772,0);
Msg("Find size of _GDebugKey (11772)\n");
#endif

#if __i386__
CheckTypeSize(GDebugKey,8, 11773, 2)
#elif __x86_64__
CheckTypeSize(GDebugKey,16, 11773, 11)
#elif __ia64__
CheckTypeSize(GDebugKey,16, 11773, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDebugKey,8, 11773, 6)
#elif __powerpc64__
CheckTypeSize(GDebugKey,16, 11773, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDebugKey,8, 11773, 10)
#elif __s390x__
CheckTypeSize(GDebugKey,16, 11773, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11773,0);
Msg("Find size of GDebugKey (11773)\n");
#endif

#if __i386__
CheckTypeSize(const GDebugKey,8, 11774, 2)
#elif __x86_64__
CheckTypeSize(const GDebugKey,16, 11774, 11)
#elif __ia64__
CheckTypeSize(const GDebugKey,16, 11774, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GDebugKey,8, 11774, 6)
#elif __powerpc64__
CheckTypeSize(const GDebugKey,16, 11774, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GDebugKey,8, 11774, 10)
#elif __s390x__
CheckTypeSize(const GDebugKey,16, 11774, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11774,0);
Msg("Find size of const GDebugKey (11774)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11775,0);
Msg("Find size of const GDebugKey * (11775)\n");
#endif

#if __i386__
CheckTypeSize(struct _GThreadFunctions,84, 11776, 2)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,4,2,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,4,2,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,4,2,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,8,2,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,4,2,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,12,2,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,4,2,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,16,2,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,4,2,41855)
CheckOffset(struct _GThreadFunctions,cond_new,20,2,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,4,2,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,24,2,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,4,2,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,28,2,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,4,2,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,32,2,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,4,2,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,36,2,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,4,2,41866)
CheckOffset(struct _GThreadFunctions,cond_free,40,2,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,4,2,41868)
CheckOffset(struct _GThreadFunctions,private_new,44,2,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,4,2,41870)
CheckOffset(struct _GThreadFunctions,private_get,48,2,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,4,2,41873)
CheckOffset(struct _GThreadFunctions,private_set,52,2,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,4,2,41882)
CheckOffset(struct _GThreadFunctions,thread_create,56,2,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,4,2,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,60,2,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,4,2,41884)
CheckOffset(struct _GThreadFunctions,thread_join,64,2,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,4,2,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,68,2,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,4,2,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,72,2,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,4,2,41889)
CheckOffset(struct _GThreadFunctions,thread_self,76,2,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,4,2,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,80,2,41892)
#elif __x86_64__
CheckTypeSize(struct _GThreadFunctions,168, 11776, 11)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,8,11,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,8,11,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,8,11,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,16,11,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,8,11,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,24,11,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,8,11,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,32,11,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,8,11,41855)
CheckOffset(struct _GThreadFunctions,cond_new,40,11,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,8,11,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,48,11,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,8,11,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,56,11,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,8,11,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,64,11,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,8,11,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,72,11,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,8,11,41866)
CheckOffset(struct _GThreadFunctions,cond_free,80,11,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,8,11,41868)
CheckOffset(struct _GThreadFunctions,private_new,88,11,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,8,11,41870)
CheckOffset(struct _GThreadFunctions,private_get,96,11,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,8,11,41873)
CheckOffset(struct _GThreadFunctions,private_set,104,11,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,8,11,41882)
CheckOffset(struct _GThreadFunctions,thread_create,112,11,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,8,11,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,120,11,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,8,11,41884)
CheckOffset(struct _GThreadFunctions,thread_join,128,11,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,8,11,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,136,11,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,8,11,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,144,11,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,8,11,41889)
CheckOffset(struct _GThreadFunctions,thread_self,152,11,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,8,11,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,160,11,41892)
#elif __ia64__
CheckTypeSize(struct _GThreadFunctions,168, 11776, 3)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,8,3,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,8,3,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,8,3,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,16,3,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,8,3,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,24,3,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,8,3,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,32,3,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,8,3,41855)
CheckOffset(struct _GThreadFunctions,cond_new,40,3,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,8,3,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,48,3,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,8,3,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,56,3,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,8,3,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,64,3,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,8,3,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,72,3,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,8,3,41866)
CheckOffset(struct _GThreadFunctions,cond_free,80,3,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,8,3,41868)
CheckOffset(struct _GThreadFunctions,private_new,88,3,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,8,3,41870)
CheckOffset(struct _GThreadFunctions,private_get,96,3,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,8,3,41873)
CheckOffset(struct _GThreadFunctions,private_set,104,3,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,8,3,41882)
CheckOffset(struct _GThreadFunctions,thread_create,112,3,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,8,3,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,120,3,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,8,3,41884)
CheckOffset(struct _GThreadFunctions,thread_join,128,3,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,8,3,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,136,3,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,8,3,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,144,3,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,8,3,41889)
CheckOffset(struct _GThreadFunctions,thread_self,152,3,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,8,3,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,160,3,41892)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GThreadFunctions,84, 11776, 6)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,4,6,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,4,6,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,4,6,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,8,6,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,4,6,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,12,6,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,4,6,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,16,6,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,4,6,41855)
CheckOffset(struct _GThreadFunctions,cond_new,20,6,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,4,6,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,24,6,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,4,6,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,28,6,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,4,6,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,32,6,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,4,6,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,36,6,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,4,6,41866)
CheckOffset(struct _GThreadFunctions,cond_free,40,6,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,4,6,41868)
CheckOffset(struct _GThreadFunctions,private_new,44,6,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,4,6,41870)
CheckOffset(struct _GThreadFunctions,private_get,48,6,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,4,6,41873)
CheckOffset(struct _GThreadFunctions,private_set,52,6,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,4,6,41882)
CheckOffset(struct _GThreadFunctions,thread_create,56,6,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,4,6,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,60,6,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,4,6,41884)
CheckOffset(struct _GThreadFunctions,thread_join,64,6,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,4,6,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,68,6,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,4,6,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,72,6,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,4,6,41889)
CheckOffset(struct _GThreadFunctions,thread_self,76,6,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,4,6,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,80,6,41892)
#elif __powerpc64__
CheckTypeSize(struct _GThreadFunctions,168, 11776, 9)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,8,9,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,8,9,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,8,9,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,16,9,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,8,9,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,24,9,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,8,9,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,32,9,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,8,9,41855)
CheckOffset(struct _GThreadFunctions,cond_new,40,9,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,8,9,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,48,9,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,8,9,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,56,9,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,8,9,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,64,9,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,8,9,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,72,9,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,8,9,41866)
CheckOffset(struct _GThreadFunctions,cond_free,80,9,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,8,9,41868)
CheckOffset(struct _GThreadFunctions,private_new,88,9,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,8,9,41870)
CheckOffset(struct _GThreadFunctions,private_get,96,9,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,8,9,41873)
CheckOffset(struct _GThreadFunctions,private_set,104,9,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,8,9,41882)
CheckOffset(struct _GThreadFunctions,thread_create,112,9,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,8,9,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,120,9,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,8,9,41884)
CheckOffset(struct _GThreadFunctions,thread_join,128,9,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,8,9,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,136,9,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,8,9,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,144,9,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,8,9,41889)
CheckOffset(struct _GThreadFunctions,thread_self,152,9,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,8,9,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,160,9,41892)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GThreadFunctions,84, 11776, 10)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,4,10,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,4,10,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,4,10,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,8,10,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,4,10,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,12,10,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,4,10,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,16,10,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,4,10,41855)
CheckOffset(struct _GThreadFunctions,cond_new,20,10,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,4,10,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,24,10,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,4,10,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,28,10,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,4,10,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,32,10,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,4,10,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,36,10,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,4,10,41866)
CheckOffset(struct _GThreadFunctions,cond_free,40,10,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,4,10,41868)
CheckOffset(struct _GThreadFunctions,private_new,44,10,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,4,10,41870)
CheckOffset(struct _GThreadFunctions,private_get,48,10,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,4,10,41873)
CheckOffset(struct _GThreadFunctions,private_set,52,10,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,4,10,41882)
CheckOffset(struct _GThreadFunctions,thread_create,56,10,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,4,10,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,60,10,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,4,10,41884)
CheckOffset(struct _GThreadFunctions,thread_join,64,10,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,4,10,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,68,10,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,4,10,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,72,10,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,4,10,41889)
CheckOffset(struct _GThreadFunctions,thread_self,76,10,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,4,10,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,80,10,41892)
#elif __s390x__
CheckTypeSize(struct _GThreadFunctions,168, 11776, 12)
CheckMemberSize(struct _GThreadFunctions,mutex_lock,8,12,41850)
CheckOffset(struct _GThreadFunctions,mutex_lock,8,12,41850)
CheckMemberSize(struct _GThreadFunctions,mutex_trylock,8,12,41852)
CheckOffset(struct _GThreadFunctions,mutex_trylock,16,12,41852)
CheckMemberSize(struct _GThreadFunctions,mutex_unlock,8,12,41853)
CheckOffset(struct _GThreadFunctions,mutex_unlock,24,12,41853)
CheckMemberSize(struct _GThreadFunctions,mutex_free,8,12,41854)
CheckOffset(struct _GThreadFunctions,mutex_free,32,12,41854)
CheckMemberSize(struct _GThreadFunctions,cond_new,8,12,41855)
CheckOffset(struct _GThreadFunctions,cond_new,40,12,41855)
CheckMemberSize(struct _GThreadFunctions,cond_signal,8,12,41857)
CheckOffset(struct _GThreadFunctions,cond_signal,48,12,41857)
CheckMemberSize(struct _GThreadFunctions,cond_broadcast,8,12,41858)
CheckOffset(struct _GThreadFunctions,cond_broadcast,56,12,41858)
CheckMemberSize(struct _GThreadFunctions,cond_wait,8,12,41861)
CheckOffset(struct _GThreadFunctions,cond_wait,64,12,41861)
CheckMemberSize(struct _GThreadFunctions,cond_timed_wait,8,12,41865)
CheckOffset(struct _GThreadFunctions,cond_timed_wait,72,12,41865)
CheckMemberSize(struct _GThreadFunctions,cond_free,8,12,41866)
CheckOffset(struct _GThreadFunctions,cond_free,80,12,41866)
CheckMemberSize(struct _GThreadFunctions,private_new,8,12,41868)
CheckOffset(struct _GThreadFunctions,private_new,88,12,41868)
CheckMemberSize(struct _GThreadFunctions,private_get,8,12,41870)
CheckOffset(struct _GThreadFunctions,private_get,96,12,41870)
CheckMemberSize(struct _GThreadFunctions,private_set,8,12,41873)
CheckOffset(struct _GThreadFunctions,private_set,104,12,41873)
CheckMemberSize(struct _GThreadFunctions,thread_create,8,12,41882)
CheckOffset(struct _GThreadFunctions,thread_create,112,12,41882)
CheckMemberSize(struct _GThreadFunctions,thread_yield,8,12,41883)
CheckOffset(struct _GThreadFunctions,thread_yield,120,12,41883)
CheckMemberSize(struct _GThreadFunctions,thread_join,8,12,41884)
CheckOffset(struct _GThreadFunctions,thread_join,128,12,41884)
CheckMemberSize(struct _GThreadFunctions,thread_exit,8,12,41885)
CheckOffset(struct _GThreadFunctions,thread_exit,136,12,41885)
CheckMemberSize(struct _GThreadFunctions,thread_set_priority,8,12,41888)
CheckOffset(struct _GThreadFunctions,thread_set_priority,144,12,41888)
CheckMemberSize(struct _GThreadFunctions,thread_self,8,12,41889)
CheckOffset(struct _GThreadFunctions,thread_self,152,12,41889)
CheckMemberSize(struct _GThreadFunctions,thread_equal,8,12,41892)
CheckOffset(struct _GThreadFunctions,thread_equal,160,12,41892)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11776,0);
Msg("Find size of _GThreadFunctions (11776)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11777,0);
Msg("Find size of fptr_glib_287 (11777)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11778,0);
Msg("Find size of fptr_glib_284 (11778)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11779,0);
Msg("Find size of fptr_glib_194 (11779)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11780,0);
Msg("Find size of fptr_glib_93 (11780)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11781,0);
Msg("Find size of fptr_glib_364 (11781)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11782,0);
Msg("Find size of fptr_glib_353 (11782)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11783,0);
Msg("Find size of fptr_glib_214 (11783)\n");
#endif

#if __i386__
CheckTypeSize(GPrivate,0, 11785, 2)
#elif __x86_64__
CheckTypeSize(GPrivate,0, 11785, 11)
#elif __ia64__
CheckTypeSize(GPrivate,0, 11785, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11785,0);
Msg("Find size of GPrivate (11785)\n");
#endif

#if __i386__
CheckTypeSize(GPrivate *,4, 11786, 2)
#elif __x86_64__
CheckTypeSize(GPrivate *,8, 11786, 11)
#elif __ia64__
CheckTypeSize(GPrivate *,8, 11786, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GPrivate *,4, 11786, 6)
#elif __powerpc64__
CheckTypeSize(GPrivate *,8, 11786, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GPrivate *,4, 11786, 10)
#elif __s390x__
CheckTypeSize(GPrivate *,8, 11786, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11786,0);
Msg("Find size of GPrivate * (11786)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11787,0);
Msg("Find size of fptr_glib_304 (11787)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11788,0);
Msg("Find size of fptr_glib_293 (11788)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11789,0);
Msg("Find size of fptr_glib_26 (11789)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11790,0);
Msg("Find size of fptr_glib_94 (11790)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11791,0);
Msg("Find size of fptr_glib_73 (11791)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11792,0);
Msg("Find size of fptr_glib_245 (11792)\n");
#endif

#if __i386__
CheckTypeSize(GThreadFunctions,84, 11793, 2)
#elif __x86_64__
CheckTypeSize(GThreadFunctions,168, 11793, 11)
#elif __ia64__
CheckTypeSize(GThreadFunctions,168, 11793, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadFunctions,84, 11793, 6)
#elif __powerpc64__
CheckTypeSize(GThreadFunctions,168, 11793, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadFunctions,84, 11793, 10)
#elif __s390x__
CheckTypeSize(GThreadFunctions,168, 11793, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11793,0);
Msg("Find size of GThreadFunctions (11793)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11794,0);
Msg("Find size of fptr_glib_11 (11794)\n");
#endif

#if __i386__
CheckTypeSize(GHookMarshaller,4, 11795, 2)
#elif __x86_64__
CheckTypeSize(GHookMarshaller,8, 11795, 11)
#elif __ia64__
CheckTypeSize(GHookMarshaller,8, 11795, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookMarshaller,4, 11795, 6)
#elif __powerpc64__
CheckTypeSize(GHookMarshaller,8, 11795, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookMarshaller,4, 11795, 10)
#elif __s390x__
CheckTypeSize(GHookMarshaller,8, 11795, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11795,0);
Msg("Find size of GHookMarshaller (11795)\n");
#endif

#if __i386__
CheckEnum("G_IO_CHANNEL_ERROR_FBIG",G_IO_CHANNEL_ERROR_FBIG,0);
CheckEnum("G_IO_CHANNEL_ERROR_INVAL",G_IO_CHANNEL_ERROR_INVAL,1);
CheckEnum("G_IO_CHANNEL_ERROR_IO",G_IO_CHANNEL_ERROR_IO,2);
CheckEnum("G_IO_CHANNEL_ERROR_ISDIR",G_IO_CHANNEL_ERROR_ISDIR,3);
CheckEnum("G_IO_CHANNEL_ERROR_NOSPC",G_IO_CHANNEL_ERROR_NOSPC,4);
CheckEnum("G_IO_CHANNEL_ERROR_NXIO",G_IO_CHANNEL_ERROR_NXIO,5);
CheckEnum("G_IO_CHANNEL_ERROR_OVERFLOW",G_IO_CHANNEL_ERROR_OVERFLOW,6);
CheckEnum("G_IO_CHANNEL_ERROR_PIPE",G_IO_CHANNEL_ERROR_PIPE,7);
CheckEnum("G_IO_CHANNEL_ERROR_FAILED",G_IO_CHANNEL_ERROR_FAILED,8);
#elif __x86_64__
CheckEnum("G_IO_CHANNEL_ERROR_FBIG",G_IO_CHANNEL_ERROR_FBIG,0);
CheckEnum("G_IO_CHANNEL_ERROR_INVAL",G_IO_CHANNEL_ERROR_INVAL,1);
CheckEnum("G_IO_CHANNEL_ERROR_IO",G_IO_CHANNEL_ERROR_IO,2);
CheckEnum("G_IO_CHANNEL_ERROR_ISDIR",G_IO_CHANNEL_ERROR_ISDIR,3);
CheckEnum("G_IO_CHANNEL_ERROR_NOSPC",G_IO_CHANNEL_ERROR_NOSPC,4);
CheckEnum("G_IO_CHANNEL_ERROR_NXIO",G_IO_CHANNEL_ERROR_NXIO,5);
CheckEnum("G_IO_CHANNEL_ERROR_OVERFLOW",G_IO_CHANNEL_ERROR_OVERFLOW,6);
CheckEnum("G_IO_CHANNEL_ERROR_PIPE",G_IO_CHANNEL_ERROR_PIPE,7);
CheckEnum("G_IO_CHANNEL_ERROR_FAILED",G_IO_CHANNEL_ERROR_FAILED,8);
#elif __ia64__
CheckEnum("G_IO_CHANNEL_ERROR_FBIG",G_IO_CHANNEL_ERROR_FBIG,0);
CheckEnum("G_IO_CHANNEL_ERROR_INVAL",G_IO_CHANNEL_ERROR_INVAL,1);
CheckEnum("G_IO_CHANNEL_ERROR_IO",G_IO_CHANNEL_ERROR_IO,2);
CheckEnum("G_IO_CHANNEL_ERROR_ISDIR",G_IO_CHANNEL_ERROR_ISDIR,3);
CheckEnum("G_IO_CHANNEL_ERROR_NOSPC",G_IO_CHANNEL_ERROR_NOSPC,4);
CheckEnum("G_IO_CHANNEL_ERROR_NXIO",G_IO_CHANNEL_ERROR_NXIO,5);
CheckEnum("G_IO_CHANNEL_ERROR_OVERFLOW",G_IO_CHANNEL_ERROR_OVERFLOW,6);
CheckEnum("G_IO_CHANNEL_ERROR_PIPE",G_IO_CHANNEL_ERROR_PIPE,7);
CheckEnum("G_IO_CHANNEL_ERROR_FAILED",G_IO_CHANNEL_ERROR_FAILED,8);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11796,0);
Msg("Find size of anon-glib-2.0/glib.h-22 (11796)\n");
#endif

#if __i386__
CheckTypeSize(GIOChannelError,4, 11797, 2)
#elif __x86_64__
CheckTypeSize(GIOChannelError,4, 11797, 11)
#elif __ia64__
CheckTypeSize(GIOChannelError,4, 11797, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOChannelError,4, 11797, 6)
#elif __powerpc64__
CheckTypeSize(GIOChannelError,4, 11797, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOChannelError,4, 11797, 10)
#elif __s390x__
CheckTypeSize(GIOChannelError,4, 11797, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11797,0);
Msg("Find size of GIOChannelError (11797)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11798,0);
Msg("Find size of fptr_glib_416 (11798)\n");
#endif

#if __i386__
CheckTypeSize(GIOFunc,4, 11799, 2)
#elif __x86_64__
CheckTypeSize(GIOFunc,8, 11799, 11)
#elif __ia64__
CheckTypeSize(GIOFunc,8, 11799, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOFunc,4, 11799, 6)
#elif __powerpc64__
CheckTypeSize(GIOFunc,8, 11799, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOFunc,4, 11799, 10)
#elif __s390x__
CheckTypeSize(GIOFunc,8, 11799, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11799,0);
Msg("Find size of GIOFunc (11799)\n");
#endif

#if __i386__
CheckTypeSize(GFreeFunc,4, 11800, 2)
#elif __x86_64__
CheckTypeSize(GFreeFunc,8, 11800, 11)
#elif __ia64__
CheckTypeSize(GFreeFunc,8, 11800, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFreeFunc,4, 11800, 6)
#elif __powerpc64__
CheckTypeSize(GFreeFunc,8, 11800, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFreeFunc,4, 11800, 10)
#elif __s390x__
CheckTypeSize(GFreeFunc,8, 11800, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11800,0);
Msg("Find size of GFreeFunc (11800)\n");
#endif

#if __i386__
CheckTypeSize(GHookCheckFunc,4, 11801, 2)
#elif __x86_64__
CheckTypeSize(GHookCheckFunc,8, 11801, 11)
#elif __ia64__
CheckTypeSize(GHookCheckFunc,8, 11801, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookCheckFunc,4, 11801, 6)
#elif __powerpc64__
CheckTypeSize(GHookCheckFunc,8, 11801, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookCheckFunc,4, 11801, 10)
#elif __s390x__
CheckTypeSize(GHookCheckFunc,8, 11801, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11801,0);
Msg("Find size of GHookCheckFunc (11801)\n");
#endif

#if __i386__
CheckTypeSize(GHookFunc,4, 11802, 2)
#elif __x86_64__
CheckTypeSize(GHookFunc,8, 11802, 11)
#elif __ia64__
CheckTypeSize(GHookFunc,8, 11802, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookFunc,4, 11802, 6)
#elif __powerpc64__
CheckTypeSize(GHookFunc,8, 11802, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookFunc,4, 11802, 10)
#elif __s390x__
CheckTypeSize(GHookFunc,8, 11802, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11802,0);
Msg("Find size of GHookFunc (11802)\n");
#endif

#if __i386__
CheckTypeSize(gint16,2, 11803, 2)
#elif __x86_64__
CheckTypeSize(gint16,2, 11803, 11)
#elif __ia64__
CheckTypeSize(gint16,2, 11803, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gint16,2, 11803, 6)
#elif __powerpc64__
CheckTypeSize(gint16,2, 11803, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gint16,2, 11803, 10)
#elif __s390x__
CheckTypeSize(gint16,2, 11803, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11803,0);
Msg("Find size of gint16 (11803)\n");
#endif

#if __i386__
CheckEnum("G_DATE_DAY",G_DATE_DAY,0);
CheckEnum("G_DATE_MONTH",G_DATE_MONTH,1);
CheckEnum("G_DATE_YEAR",G_DATE_YEAR,2);
#elif __x86_64__
CheckEnum("G_DATE_DAY",G_DATE_DAY,0);
CheckEnum("G_DATE_MONTH",G_DATE_MONTH,1);
CheckEnum("G_DATE_YEAR",G_DATE_YEAR,2);
#elif __ia64__
CheckEnum("G_DATE_DAY",G_DATE_DAY,0);
CheckEnum("G_DATE_MONTH",G_DATE_MONTH,1);
CheckEnum("G_DATE_YEAR",G_DATE_YEAR,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11804,0);
Msg("Find size of anon-glib-2.0/glib.h-13 (11804)\n");
#endif

#if __i386__
CheckTypeSize(GDateDMY,4, 11805, 2)
#elif __x86_64__
CheckTypeSize(GDateDMY,4, 11805, 11)
#elif __ia64__
CheckTypeSize(GDateDMY,4, 11805, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GDateDMY,4, 11805, 6)
#elif __powerpc64__
CheckTypeSize(GDateDMY,4, 11805, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GDateDMY,4, 11805, 10)
#elif __s390x__
CheckTypeSize(GDateDMY,4, 11805, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11805,0);
Msg("Find size of GDateDMY (11805)\n");
#endif

#if __i386__
CheckTypeSize(gint8,1, 11806, 2)
#elif __x86_64__
CheckTypeSize(gint8,1, 11806, 11)
#elif __ia64__
CheckTypeSize(gint8,1, 11806, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gint8,1, 11806, 6)
#elif __powerpc64__
CheckTypeSize(gint8,1, 11806, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gint8,1, 11806, 10)
#elif __s390x__
CheckTypeSize(gint8,1, 11806, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11806,0);
Msg("Find size of gint8 (11806)\n");
#endif

#if __i386__
CheckEnum("G_MARKUP_ERROR_BAD_UTF8",G_MARKUP_ERROR_BAD_UTF8,0);
CheckEnum("G_MARKUP_ERROR_EMPTY",G_MARKUP_ERROR_EMPTY,1);
CheckEnum("G_MARKUP_ERROR_PARSE",G_MARKUP_ERROR_PARSE,2);
CheckEnum("G_MARKUP_ERROR_UNKNOWN_ELEMENT",G_MARKUP_ERROR_UNKNOWN_ELEMENT,3);
CheckEnum("G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE",G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,4);
CheckEnum("G_MARKUP_ERROR_INVALID_CONTENT",G_MARKUP_ERROR_INVALID_CONTENT,5);
#elif __x86_64__
CheckEnum("G_MARKUP_ERROR_BAD_UTF8",G_MARKUP_ERROR_BAD_UTF8,0);
CheckEnum("G_MARKUP_ERROR_EMPTY",G_MARKUP_ERROR_EMPTY,1);
CheckEnum("G_MARKUP_ERROR_PARSE",G_MARKUP_ERROR_PARSE,2);
CheckEnum("G_MARKUP_ERROR_UNKNOWN_ELEMENT",G_MARKUP_ERROR_UNKNOWN_ELEMENT,3);
CheckEnum("G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE",G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,4);
CheckEnum("G_MARKUP_ERROR_INVALID_CONTENT",G_MARKUP_ERROR_INVALID_CONTENT,5);
#elif __ia64__
CheckEnum("G_MARKUP_ERROR_BAD_UTF8",G_MARKUP_ERROR_BAD_UTF8,0);
CheckEnum("G_MARKUP_ERROR_EMPTY",G_MARKUP_ERROR_EMPTY,1);
CheckEnum("G_MARKUP_ERROR_PARSE",G_MARKUP_ERROR_PARSE,2);
CheckEnum("G_MARKUP_ERROR_UNKNOWN_ELEMENT",G_MARKUP_ERROR_UNKNOWN_ELEMENT,3);
CheckEnum("G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE",G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,4);
CheckEnum("G_MARKUP_ERROR_INVALID_CONTENT",G_MARKUP_ERROR_INVALID_CONTENT,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11807,0);
Msg("Find size of anon-glib-2.0/glib.h-41 (11807)\n");
#endif

#if __i386__
CheckTypeSize(GMarkupError,4, 11808, 2)
#elif __x86_64__
CheckTypeSize(GMarkupError,4, 11808, 11)
#elif __ia64__
CheckTypeSize(GMarkupError,4, 11808, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GMarkupError,4, 11808, 6)
#elif __powerpc64__
CheckTypeSize(GMarkupError,4, 11808, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GMarkupError,4, 11808, 10)
#elif __s390x__
CheckTypeSize(GMarkupError,4, 11808, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11808,0);
Msg("Find size of GMarkupError (11808)\n");
#endif

#if __i386__
CheckEnum("G_IO_ERROR_NONE",G_IO_ERROR_NONE,0);
CheckEnum("G_IO_ERROR_AGAIN",G_IO_ERROR_AGAIN,1);
CheckEnum("G_IO_ERROR_INVAL",G_IO_ERROR_INVAL,2);
CheckEnum("G_IO_ERROR_UNKNOWN",G_IO_ERROR_UNKNOWN,3);
#elif __x86_64__
CheckEnum("G_IO_ERROR_NONE",G_IO_ERROR_NONE,0);
CheckEnum("G_IO_ERROR_AGAIN",G_IO_ERROR_AGAIN,1);
CheckEnum("G_IO_ERROR_INVAL",G_IO_ERROR_INVAL,2);
CheckEnum("G_IO_ERROR_UNKNOWN",G_IO_ERROR_UNKNOWN,3);
#elif __ia64__
CheckEnum("G_IO_ERROR_NONE",G_IO_ERROR_NONE,0);
CheckEnum("G_IO_ERROR_AGAIN",G_IO_ERROR_AGAIN,1);
CheckEnum("G_IO_ERROR_INVAL",G_IO_ERROR_INVAL,2);
CheckEnum("G_IO_ERROR_UNKNOWN",G_IO_ERROR_UNKNOWN,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11809,0);
Msg("Find size of anon-glib-2.0/glib.h-21 (11809)\n");
#endif

#if __i386__
CheckTypeSize(GIOError,4, 11810, 2)
#elif __x86_64__
CheckTypeSize(GIOError,4, 11810, 11)
#elif __ia64__
CheckTypeSize(GIOError,4, 11810, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GIOError,4, 11810, 6)
#elif __powerpc64__
CheckTypeSize(GIOError,4, 11810, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GIOError,4, 11810, 10)
#elif __s390x__
CheckTypeSize(GIOError,4, 11810, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11810,0);
Msg("Find size of GIOError (11810)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11811,0);
Msg("Find size of fptr_anonymous-glib.h.types-0 (11811)\n");
#endif

#if __i386__
CheckTypeSize(GOptionArgFunc,4, 11812, 2)
#elif __ia64__
CheckTypeSize(GOptionArgFunc,8, 11812, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionArgFunc,4, 11812, 6)
#elif __powerpc64__
CheckTypeSize(GOptionArgFunc,8, 11812, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionArgFunc,4, 11812, 10)
#elif __s390x__
CheckTypeSize(GOptionArgFunc,8, 11812, 12)
#elif __x86_64__
CheckTypeSize(GOptionArgFunc,8, 11812, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11812,0);
Msg("Find size of GOptionArgFunc (11812)\n");
#endif

#if __i386__
CheckEnum("G_OPTION_FLAG_HIDDEN",G_OPTION_FLAG_HIDDEN,1 << 0);
CheckEnum("G_OPTION_FLAG_IN_MAIN",G_OPTION_FLAG_IN_MAIN,1 << 1);
CheckEnum("G_OPTION_FLAG_REVERSE",G_OPTION_FLAG_REVERSE,1 << 2);
#elif __x86_64__
CheckEnum("G_OPTION_FLAG_HIDDEN",G_OPTION_FLAG_HIDDEN,1 << 0);
CheckEnum("G_OPTION_FLAG_IN_MAIN",G_OPTION_FLAG_IN_MAIN,1 << 1);
CheckEnum("G_OPTION_FLAG_REVERSE",G_OPTION_FLAG_REVERSE,1 << 2);
#elif __ia64__
CheckEnum("G_OPTION_FLAG_HIDDEN",G_OPTION_FLAG_HIDDEN,1 << 0);
CheckEnum("G_OPTION_FLAG_IN_MAIN",G_OPTION_FLAG_IN_MAIN,1 << 1);
CheckEnum("G_OPTION_FLAG_REVERSE",G_OPTION_FLAG_REVERSE,1 << 2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11813,0);
Msg("Find size of anonymous-glib.h.types-2 (11813)\n");
#endif

#if __i386__
CheckTypeSize(GOptionFlags,4, 11814, 2)
#elif __x86_64__
CheckTypeSize(GOptionFlags,4, 11814, 11)
#elif __ia64__
CheckTypeSize(GOptionFlags,4, 11814, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionFlags,4, 11814, 6)
#elif __powerpc64__
CheckTypeSize(GOptionFlags,4, 11814, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionFlags,4, 11814, 10)
#elif __s390x__
CheckTypeSize(GOptionFlags,4, 11814, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11814,0);
Msg("Find size of GOptionFlags (11814)\n");
#endif

#if __i386__
CheckEnum("G_CONVERT_ERROR_NO_CONVERSION",G_CONVERT_ERROR_NO_CONVERSION,0);
CheckEnum("G_CONVERT_ERROR_ILLEGAL_SEQUENCE",G_CONVERT_ERROR_ILLEGAL_SEQUENCE,(0) + 1);
CheckEnum("G_CONVERT_ERROR_FAILED",G_CONVERT_ERROR_FAILED,((0) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_PARTIAL_INPUT",G_CONVERT_ERROR_PARTIAL_INPUT,(((0) + 1) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_BAD_URI",G_CONVERT_ERROR_BAD_URI,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_NOT_ABSOLUTE_PATH",G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("G_CONVERT_ERROR_NO_CONVERSION",G_CONVERT_ERROR_NO_CONVERSION,0);
CheckEnum("G_CONVERT_ERROR_ILLEGAL_SEQUENCE",G_CONVERT_ERROR_ILLEGAL_SEQUENCE,(0) + 1);
CheckEnum("G_CONVERT_ERROR_FAILED",G_CONVERT_ERROR_FAILED,((0) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_PARTIAL_INPUT",G_CONVERT_ERROR_PARTIAL_INPUT,(((0) + 1) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_BAD_URI",G_CONVERT_ERROR_BAD_URI,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_NOT_ABSOLUTE_PATH",G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("G_CONVERT_ERROR_NO_CONVERSION",G_CONVERT_ERROR_NO_CONVERSION,0);
CheckEnum("G_CONVERT_ERROR_ILLEGAL_SEQUENCE",G_CONVERT_ERROR_ILLEGAL_SEQUENCE,(0) + 1);
CheckEnum("G_CONVERT_ERROR_FAILED",G_CONVERT_ERROR_FAILED,((0) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_PARTIAL_INPUT",G_CONVERT_ERROR_PARTIAL_INPUT,(((0) + 1) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_BAD_URI",G_CONVERT_ERROR_BAD_URI,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_CONVERT_ERROR_NOT_ABSOLUTE_PATH",G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,(((((0) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11815,0);
Msg("Find size of anonymous-glib.h.types-5 (11815)\n");
#endif

#if __i386__
CheckTypeSize(GConvertError,4, 11816, 2)
#elif __x86_64__
CheckTypeSize(GConvertError,4, 11816, 11)
#elif __ia64__
CheckTypeSize(GConvertError,4, 11816, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GConvertError,4, 11816, 6)
#elif __powerpc64__
CheckTypeSize(GConvertError,4, 11816, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GConvertError,4, 11816, 10)
#elif __s390x__
CheckTypeSize(GConvertError,4, 11816, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11816,0);
Msg("Find size of GConvertError (11816)\n");
#endif

#if __i386__
CheckEnum("G_ERR_UNKNOWN",G_ERR_UNKNOWN,0);
CheckEnum("G_ERR_UNEXP_EOF",G_ERR_UNEXP_EOF,(0) + 1);
CheckEnum("G_ERR_UNEXP_EOF_IN_STRING",G_ERR_UNEXP_EOF_IN_STRING,((0) + 1) + 1);
CheckEnum("G_ERR_UNEXP_EOF_IN_COMMENT",G_ERR_UNEXP_EOF_IN_COMMENT,(((0) + 1) + 1) + 1);
CheckEnum("G_ERR_NON_DIGIT_IN_CONST",G_ERR_NON_DIGIT_IN_CONST,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_DIGIT_RADIX",G_ERR_DIGIT_RADIX,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_FLOAT_RADIX",G_ERR_FLOAT_RADIX,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_FLOAT_MALFORMED",G_ERR_FLOAT_MALFORMED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("G_ERR_UNKNOWN",G_ERR_UNKNOWN,0);
CheckEnum("G_ERR_UNEXP_EOF",G_ERR_UNEXP_EOF,(0) + 1);
CheckEnum("G_ERR_UNEXP_EOF_IN_STRING",G_ERR_UNEXP_EOF_IN_STRING,((0) + 1) + 1);
CheckEnum("G_ERR_UNEXP_EOF_IN_COMMENT",G_ERR_UNEXP_EOF_IN_COMMENT,(((0) + 1) + 1) + 1);
CheckEnum("G_ERR_NON_DIGIT_IN_CONST",G_ERR_NON_DIGIT_IN_CONST,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_DIGIT_RADIX",G_ERR_DIGIT_RADIX,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_FLOAT_RADIX",G_ERR_FLOAT_RADIX,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_FLOAT_MALFORMED",G_ERR_FLOAT_MALFORMED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("G_ERR_UNKNOWN",G_ERR_UNKNOWN,0);
CheckEnum("G_ERR_UNEXP_EOF",G_ERR_UNEXP_EOF,(0) + 1);
CheckEnum("G_ERR_UNEXP_EOF_IN_STRING",G_ERR_UNEXP_EOF_IN_STRING,((0) + 1) + 1);
CheckEnum("G_ERR_UNEXP_EOF_IN_COMMENT",G_ERR_UNEXP_EOF_IN_COMMENT,(((0) + 1) + 1) + 1);
CheckEnum("G_ERR_NON_DIGIT_IN_CONST",G_ERR_NON_DIGIT_IN_CONST,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_DIGIT_RADIX",G_ERR_DIGIT_RADIX,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_FLOAT_RADIX",G_ERR_FLOAT_RADIX,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_ERR_FLOAT_MALFORMED",G_ERR_FLOAT_MALFORMED,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11817,0);
Msg("Find size of anonymous-glib.h.types-7 (11817)\n");
#endif

#if __i386__
CheckTypeSize(GErrorType,4, 11818, 2)
#elif __x86_64__
CheckTypeSize(GErrorType,4, 11818, 11)
#elif __ia64__
CheckTypeSize(GErrorType,4, 11818, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GErrorType,4, 11818, 6)
#elif __powerpc64__
CheckTypeSize(GErrorType,4, 11818, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GErrorType,4, 11818, 10)
#elif __s390x__
CheckTypeSize(GErrorType,4, 11818, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11818,0);
Msg("Find size of GErrorType (11818)\n");
#endif

#if __i386__
CheckEnum("G_KEY_FILE_ERROR_UNKNOWN_ENCODING",G_KEY_FILE_ERROR_UNKNOWN_ENCODING,0);
CheckEnum("G_KEY_FILE_ERROR_PARSE",G_KEY_FILE_ERROR_PARSE,(0) + 1);
CheckEnum("G_KEY_FILE_ERROR_NOT_FOUND",G_KEY_FILE_ERROR_NOT_FOUND,((0) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_KEY_NOT_FOUND",G_KEY_FILE_ERROR_KEY_NOT_FOUND,(((0) + 1) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_GROUP_NOT_FOUND",G_KEY_FILE_ERROR_GROUP_NOT_FOUND,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_INVALID_VALUE",G_KEY_FILE_ERROR_INVALID_VALUE,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("G_KEY_FILE_ERROR_UNKNOWN_ENCODING",G_KEY_FILE_ERROR_UNKNOWN_ENCODING,0);
CheckEnum("G_KEY_FILE_ERROR_PARSE",G_KEY_FILE_ERROR_PARSE,(0) + 1);
CheckEnum("G_KEY_FILE_ERROR_NOT_FOUND",G_KEY_FILE_ERROR_NOT_FOUND,((0) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_KEY_NOT_FOUND",G_KEY_FILE_ERROR_KEY_NOT_FOUND,(((0) + 1) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_GROUP_NOT_FOUND",G_KEY_FILE_ERROR_GROUP_NOT_FOUND,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_INVALID_VALUE",G_KEY_FILE_ERROR_INVALID_VALUE,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("G_KEY_FILE_ERROR_UNKNOWN_ENCODING",G_KEY_FILE_ERROR_UNKNOWN_ENCODING,0);
CheckEnum("G_KEY_FILE_ERROR_PARSE",G_KEY_FILE_ERROR_PARSE,(0) + 1);
CheckEnum("G_KEY_FILE_ERROR_NOT_FOUND",G_KEY_FILE_ERROR_NOT_FOUND,((0) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_KEY_NOT_FOUND",G_KEY_FILE_ERROR_KEY_NOT_FOUND,(((0) + 1) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_GROUP_NOT_FOUND",G_KEY_FILE_ERROR_GROUP_NOT_FOUND,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_KEY_FILE_ERROR_INVALID_VALUE",G_KEY_FILE_ERROR_INVALID_VALUE,(((((0) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11819,0);
Msg("Find size of anonymous-glib.h.types-9 (11819)\n");
#endif

#if __i386__
CheckTypeSize(GKeyFileError,4, 11820, 2)
#elif __x86_64__
CheckTypeSize(GKeyFileError,4, 11820, 11)
#elif __ia64__
CheckTypeSize(GKeyFileError,4, 11820, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GKeyFileError,4, 11820, 6)
#elif __powerpc64__
CheckTypeSize(GKeyFileError,4, 11820, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GKeyFileError,4, 11820, 10)
#elif __s390x__
CheckTypeSize(GKeyFileError,4, 11820, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11820,0);
Msg("Find size of GKeyFileError (11820)\n");
#endif

#if __i386__
CheckEnum("G_SPAWN_ERROR_FORK",G_SPAWN_ERROR_FORK,0);
CheckEnum("G_SPAWN_ERROR_READ",G_SPAWN_ERROR_READ,(0) + 1);
CheckEnum("G_SPAWN_ERROR_CHDIR",G_SPAWN_ERROR_CHDIR,((0) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_ACCES",G_SPAWN_ERROR_ACCES,(((0) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_PERM",G_SPAWN_ERROR_PERM,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_2BIG",G_SPAWN_ERROR_2BIG,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOEXEC",G_SPAWN_ERROR_NOEXEC,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NAMETOOLONG",G_SPAWN_ERROR_NAMETOOLONG,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOENT",G_SPAWN_ERROR_NOENT,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOMEM",G_SPAWN_ERROR_NOMEM,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOTDIR",G_SPAWN_ERROR_NOTDIR,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_LOOP",G_SPAWN_ERROR_LOOP,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_TXTBUSY",G_SPAWN_ERROR_TXTBUSY,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_IO",G_SPAWN_ERROR_IO,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NFILE",G_SPAWN_ERROR_NFILE,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_MFILE",G_SPAWN_ERROR_MFILE,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_INVAL",G_SPAWN_ERROR_INVAL,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_ISDIR",G_SPAWN_ERROR_ISDIR,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_LIBBAD",G_SPAWN_ERROR_LIBBAD,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_FAILED",G_SPAWN_ERROR_FAILED,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("G_SPAWN_ERROR_FORK",G_SPAWN_ERROR_FORK,0);
CheckEnum("G_SPAWN_ERROR_READ",G_SPAWN_ERROR_READ,(0) + 1);
CheckEnum("G_SPAWN_ERROR_CHDIR",G_SPAWN_ERROR_CHDIR,((0) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_ACCES",G_SPAWN_ERROR_ACCES,(((0) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_PERM",G_SPAWN_ERROR_PERM,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_2BIG",G_SPAWN_ERROR_2BIG,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOEXEC",G_SPAWN_ERROR_NOEXEC,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NAMETOOLONG",G_SPAWN_ERROR_NAMETOOLONG,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOENT",G_SPAWN_ERROR_NOENT,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOMEM",G_SPAWN_ERROR_NOMEM,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOTDIR",G_SPAWN_ERROR_NOTDIR,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_LOOP",G_SPAWN_ERROR_LOOP,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_TXTBUSY",G_SPAWN_ERROR_TXTBUSY,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_IO",G_SPAWN_ERROR_IO,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NFILE",G_SPAWN_ERROR_NFILE,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_MFILE",G_SPAWN_ERROR_MFILE,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_INVAL",G_SPAWN_ERROR_INVAL,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_ISDIR",G_SPAWN_ERROR_ISDIR,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_LIBBAD",G_SPAWN_ERROR_LIBBAD,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_FAILED",G_SPAWN_ERROR_FAILED,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("G_SPAWN_ERROR_FORK",G_SPAWN_ERROR_FORK,0);
CheckEnum("G_SPAWN_ERROR_READ",G_SPAWN_ERROR_READ,(0) + 1);
CheckEnum("G_SPAWN_ERROR_CHDIR",G_SPAWN_ERROR_CHDIR,((0) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_ACCES",G_SPAWN_ERROR_ACCES,(((0) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_PERM",G_SPAWN_ERROR_PERM,((((0) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_2BIG",G_SPAWN_ERROR_2BIG,(((((0) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOEXEC",G_SPAWN_ERROR_NOEXEC,((((((0) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NAMETOOLONG",G_SPAWN_ERROR_NAMETOOLONG,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOENT",G_SPAWN_ERROR_NOENT,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOMEM",G_SPAWN_ERROR_NOMEM,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NOTDIR",G_SPAWN_ERROR_NOTDIR,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_LOOP",G_SPAWN_ERROR_LOOP,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_TXTBUSY",G_SPAWN_ERROR_TXTBUSY,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_IO",G_SPAWN_ERROR_IO,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_NFILE",G_SPAWN_ERROR_NFILE,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_MFILE",G_SPAWN_ERROR_MFILE,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_INVAL",G_SPAWN_ERROR_INVAL,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_ISDIR",G_SPAWN_ERROR_ISDIR,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_LIBBAD",G_SPAWN_ERROR_LIBBAD,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
CheckEnum("G_SPAWN_ERROR_FAILED",G_SPAWN_ERROR_FAILED,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11821,0);
Msg("Find size of anonymous-glib.h.types-11 (11821)\n");
#endif

#if __i386__
CheckTypeSize(GSpawnError,4, 11822, 2)
#elif __x86_64__
CheckTypeSize(GSpawnError,4, 11822, 11)
#elif __ia64__
CheckTypeSize(GSpawnError,4, 11822, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSpawnError,4, 11822, 6)
#elif __powerpc64__
CheckTypeSize(GSpawnError,4, 11822, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSpawnError,4, 11822, 10)
#elif __s390x__
CheckTypeSize(GSpawnError,4, 11822, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11822,0);
Msg("Find size of GSpawnError (11822)\n");
#endif

#if __i386__
CheckEnum("G_HOOK_FLAG_ACTIVE",G_HOOK_FLAG_ACTIVE,1 << 0);
CheckEnum("G_HOOK_FLAG_IN_CALL",G_HOOK_FLAG_IN_CALL,1 << 1);
CheckEnum("G_HOOK_FLAG_MASK",G_HOOK_FLAG_MASK,0x0f);
#elif __x86_64__
CheckEnum("G_HOOK_FLAG_ACTIVE",G_HOOK_FLAG_ACTIVE,1 << 0);
CheckEnum("G_HOOK_FLAG_IN_CALL",G_HOOK_FLAG_IN_CALL,1 << 1);
CheckEnum("G_HOOK_FLAG_MASK",G_HOOK_FLAG_MASK,0x0f);
#elif __ia64__
CheckEnum("G_HOOK_FLAG_ACTIVE",G_HOOK_FLAG_ACTIVE,1 << 0);
CheckEnum("G_HOOK_FLAG_IN_CALL",G_HOOK_FLAG_IN_CALL,1 << 1);
CheckEnum("G_HOOK_FLAG_MASK",G_HOOK_FLAG_MASK,0x0f);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11823,0);
Msg("Find size of anonymous-glib.h.types-13 (11823)\n");
#endif

#if __i386__
CheckTypeSize(GHookFlagMask,4, 11824, 2)
#elif __x86_64__
CheckTypeSize(GHookFlagMask,4, 11824, 11)
#elif __ia64__
CheckTypeSize(GHookFlagMask,4, 11824, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GHookFlagMask,4, 11824, 6)
#elif __powerpc64__
CheckTypeSize(GHookFlagMask,4, 11824, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GHookFlagMask,4, 11824, 10)
#elif __s390x__
CheckTypeSize(GHookFlagMask,4, 11824, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11824,0);
Msg("Find size of GHookFlagMask (11824)\n");
#endif

#if __i386__
CheckEnum("G_THREAD_ERROR_AGAIN",G_THREAD_ERROR_AGAIN,0);
#elif __x86_64__
CheckEnum("G_THREAD_ERROR_AGAIN",G_THREAD_ERROR_AGAIN,0);
#elif __ia64__
CheckEnum("G_THREAD_ERROR_AGAIN",G_THREAD_ERROR_AGAIN,0);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11825,0);
Msg("Find size of anonymous-glib.h.types-15 (11825)\n");
#endif

#if __i386__
CheckTypeSize(GThreadError,4, 11826, 2)
#elif __x86_64__
CheckTypeSize(GThreadError,4, 11826, 11)
#elif __ia64__
CheckTypeSize(GThreadError,4, 11826, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadError,4, 11826, 6)
#elif __powerpc64__
CheckTypeSize(GThreadError,4, 11826, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadError,4, 11826, 10)
#elif __s390x__
CheckTypeSize(GThreadError,4, 11826, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11826,0);
Msg("Find size of GThreadError (11826)\n");
#endif

#if __i386__
CheckEnum("G_OPTION_ERROR_UNKNOWN_OPTION",G_OPTION_ERROR_UNKNOWN_OPTION,0);
CheckEnum("G_OPTION_ERROR_BAD_VALUE",G_OPTION_ERROR_BAD_VALUE,(0) + 1);
CheckEnum("G_OPTION_ERROR_FAILED",G_OPTION_ERROR_FAILED,((0) + 1) + 1);
#elif __x86_64__
CheckEnum("G_OPTION_ERROR_UNKNOWN_OPTION",G_OPTION_ERROR_UNKNOWN_OPTION,0);
CheckEnum("G_OPTION_ERROR_BAD_VALUE",G_OPTION_ERROR_BAD_VALUE,(0) + 1);
CheckEnum("G_OPTION_ERROR_FAILED",G_OPTION_ERROR_FAILED,((0) + 1) + 1);
#elif __ia64__
CheckEnum("G_OPTION_ERROR_UNKNOWN_OPTION",G_OPTION_ERROR_UNKNOWN_OPTION,0);
CheckEnum("G_OPTION_ERROR_BAD_VALUE",G_OPTION_ERROR_BAD_VALUE,(0) + 1);
CheckEnum("G_OPTION_ERROR_FAILED",G_OPTION_ERROR_FAILED,((0) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11827,0);
Msg("Find size of anonymous-glib.h.types-17 (11827)\n");
#endif

#if __i386__
CheckTypeSize(GOptionError,4, 11828, 2)
#elif __x86_64__
CheckTypeSize(GOptionError,4, 11828, 11)
#elif __ia64__
CheckTypeSize(GOptionError,4, 11828, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GOptionError,4, 11828, 6)
#elif __powerpc64__
CheckTypeSize(GOptionError,4, 11828, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GOptionError,4, 11828, 10)
#elif __s390x__
CheckTypeSize(GOptionError,4, 11828, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11828,0);
Msg("Find size of GOptionError (11828)\n");
#endif

#if __i386__
CheckEnum("G_ASCII_ALNUM",G_ASCII_ALNUM,1 << 0);
CheckEnum("G_ASCII_ALPHA",G_ASCII_ALPHA,1 << 1);
CheckEnum("G_ASCII_CNTRL",G_ASCII_CNTRL,1 << 2);
CheckEnum("G_ASCII_DIGIT",G_ASCII_DIGIT,1 << 3);
CheckEnum("G_ASCII_GRAPH",G_ASCII_GRAPH,1 << 4);
CheckEnum("G_ASCII_LOWER",G_ASCII_LOWER,1 << 5);
CheckEnum("G_ASCII_PRINT",G_ASCII_PRINT,1 << 6);
CheckEnum("G_ASCII_PUNCT",G_ASCII_PUNCT,1 << 7);
CheckEnum("G_ASCII_SPACE",G_ASCII_SPACE,1 << 8);
CheckEnum("G_ASCII_UPPER",G_ASCII_UPPER,1 << 9);
CheckEnum("G_ASCII_XDIGIT",G_ASCII_XDIGIT,1 << 10);
#elif __x86_64__
CheckEnum("G_ASCII_ALNUM",G_ASCII_ALNUM,1 << 0);
CheckEnum("G_ASCII_ALPHA",G_ASCII_ALPHA,1 << 1);
CheckEnum("G_ASCII_CNTRL",G_ASCII_CNTRL,1 << 2);
CheckEnum("G_ASCII_DIGIT",G_ASCII_DIGIT,1 << 3);
CheckEnum("G_ASCII_GRAPH",G_ASCII_GRAPH,1 << 4);
CheckEnum("G_ASCII_LOWER",G_ASCII_LOWER,1 << 5);
CheckEnum("G_ASCII_PRINT",G_ASCII_PRINT,1 << 6);
CheckEnum("G_ASCII_PUNCT",G_ASCII_PUNCT,1 << 7);
CheckEnum("G_ASCII_SPACE",G_ASCII_SPACE,1 << 8);
CheckEnum("G_ASCII_UPPER",G_ASCII_UPPER,1 << 9);
CheckEnum("G_ASCII_XDIGIT",G_ASCII_XDIGIT,1 << 10);
#elif __ia64__
CheckEnum("G_ASCII_ALNUM",G_ASCII_ALNUM,1 << 0);
CheckEnum("G_ASCII_ALPHA",G_ASCII_ALPHA,1 << 1);
CheckEnum("G_ASCII_CNTRL",G_ASCII_CNTRL,1 << 2);
CheckEnum("G_ASCII_DIGIT",G_ASCII_DIGIT,1 << 3);
CheckEnum("G_ASCII_GRAPH",G_ASCII_GRAPH,1 << 4);
CheckEnum("G_ASCII_LOWER",G_ASCII_LOWER,1 << 5);
CheckEnum("G_ASCII_PRINT",G_ASCII_PRINT,1 << 6);
CheckEnum("G_ASCII_PUNCT",G_ASCII_PUNCT,1 << 7);
CheckEnum("G_ASCII_SPACE",G_ASCII_SPACE,1 << 8);
CheckEnum("G_ASCII_UPPER",G_ASCII_UPPER,1 << 9);
CheckEnum("G_ASCII_XDIGIT",G_ASCII_XDIGIT,1 << 10);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11829,0);
Msg("Find size of anonymous-glib.h.types-19 (11829)\n");
#endif

#if __i386__
CheckTypeSize(GAsciiType,4, 11830, 2)
#elif __x86_64__
CheckTypeSize(GAsciiType,4, 11830, 11)
#elif __ia64__
CheckTypeSize(GAsciiType,4, 11830, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GAsciiType,4, 11830, 6)
#elif __powerpc64__
CheckTypeSize(GAsciiType,4, 11830, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GAsciiType,4, 11830, 10)
#elif __s390x__
CheckTypeSize(GAsciiType,4, 11830, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11830,0);
Msg("Find size of GAsciiType (11830)\n");
#endif

#if __i386__
CheckEnum("G_SHELL_ERROR_BAD_QUOTING",G_SHELL_ERROR_BAD_QUOTING,0);
CheckEnum("G_SHELL_ERROR_EMPTY_STRING",G_SHELL_ERROR_EMPTY_STRING,(0) + 1);
CheckEnum("G_SHELL_ERROR_FAILED",G_SHELL_ERROR_FAILED,((0) + 1) + 1);
#elif __x86_64__
CheckEnum("G_SHELL_ERROR_BAD_QUOTING",G_SHELL_ERROR_BAD_QUOTING,0);
CheckEnum("G_SHELL_ERROR_EMPTY_STRING",G_SHELL_ERROR_EMPTY_STRING,(0) + 1);
CheckEnum("G_SHELL_ERROR_FAILED",G_SHELL_ERROR_FAILED,((0) + 1) + 1);
#elif __ia64__
CheckEnum("G_SHELL_ERROR_BAD_QUOTING",G_SHELL_ERROR_BAD_QUOTING,0);
CheckEnum("G_SHELL_ERROR_EMPTY_STRING",G_SHELL_ERROR_EMPTY_STRING,(0) + 1);
CheckEnum("G_SHELL_ERROR_FAILED",G_SHELL_ERROR_FAILED,((0) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11831,0);
Msg("Find size of anonymous-glib.h.types-21 (11831)\n");
#endif

#if __i386__
CheckTypeSize(GShellError,4, 11832, 2)
#elif __x86_64__
CheckTypeSize(GShellError,4, 11832, 11)
#elif __ia64__
CheckTypeSize(GShellError,4, 11832, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GShellError,4, 11832, 6)
#elif __powerpc64__
CheckTypeSize(GShellError,4, 11832, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GShellError,4, 11832, 10)
#elif __s390x__
CheckTypeSize(GShellError,4, 11832, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11832,0);
Msg("Find size of GShellError (11832)\n");
#endif

#if __i386__
CheckTypeSize(GThreadFunctions *,4, 12074, 2)
#elif __x86_64__
CheckTypeSize(GThreadFunctions *,8, 12074, 11)
#elif __ia64__
CheckTypeSize(GThreadFunctions *,8, 12074, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GThreadFunctions *,4, 12074, 6)
#elif __powerpc64__
CheckTypeSize(GThreadFunctions *,8, 12074, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GThreadFunctions *,4, 12074, 10)
#elif __s390x__
CheckTypeSize(GThreadFunctions *,8, 12074, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12074,0);
Msg("Find size of GThreadFunctions * (12074)\n");
#endif

#if __i386__
CheckTypeSize(gsize *,4, 11480, 2)
#elif __x86_64__
CheckTypeSize(gsize *,8, 11480, 11)
#elif __ia64__
CheckTypeSize(gsize *,8, 11480, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gsize *,4, 11480, 6)
#elif __powerpc64__
CheckTypeSize(gsize *,8, 11480, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gsize *,4, 11480, 10)
#elif __s390x__
CheckTypeSize(gsize *,8, 11480, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11480,0);
Msg("Find size of gsize * (11480)\n");
#endif

#if __i386__
CheckTypeSize(gssize,4, 11520, 2)
#endif

#if __i386__
CheckTypeSize(gint64,8, 11533, 2)
#endif

#if __i386__
CheckTypeSize(guint64,8, 11621, 2)
#endif

#if __ia64__
CheckTypeSize(gint64,8, 16221, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(gint64,8, 16222, 6)
#endif

#if __powerpc64__
CheckTypeSize(gint64,8, 16223, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(gint64,8, 16224, 10)
#endif

#if __x86_64__
CheckTypeSize(gint64,8, 16225, 11)
#endif

#if __s390x__
CheckTypeSize(gint64,8, 16226, 12)
#endif

#if __ia64__
CheckTypeSize(guint64,8, 16227, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(guint64,8, 16228, 6)
#endif

#if __powerpc64__
CheckTypeSize(guint64,8, 16229, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(guint64,8, 16230, 10)
#endif

#if __x86_64__
CheckTypeSize(guint64,8, 16231, 11)
#endif

#if __s390x__
CheckTypeSize(guint64,8, 16232, 12)
#endif

#if __ia64__
CheckTypeSize(gssize,8, 16233, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(gssize,4, 16234, 6)
#endif

#if __powerpc64__
CheckTypeSize(gssize,8, 16235, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(gssize,4, 16236, 10)
#endif

#if __x86_64__
CheckTypeSize(gssize,8, 16237, 11)
#endif

#if __s390x__
CheckTypeSize(gssize,8, 16238, 12)
#endif

#if __ia64__
CheckTypeSize(gsize,8, 16239, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(gsize,4, 16240, 6)
#endif

#if __powerpc64__
CheckTypeSize(gsize,8, 16241, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(gsize,4, 16242, 10)
#endif

#if __x86_64__
CheckTypeSize(gsize,8, 16243, 11)
#endif

#if __s390x__
CheckTypeSize(gsize,8, 16244, 12)
#endif

extern gboolean g_source_remove_db(guint);
CheckInterfacedef(g_source_remove,g_source_remove_db);
extern void g_thread_set_priority_db(GThread *, GThreadPriority);
CheckInterfacedef(g_thread_set_priority,g_thread_set_priority_db);
extern GError * g_error_copy_db(const GError *);
CheckInterfacedef(g_error_copy,g_error_copy_db);
extern gchar * g_utf8_prev_char_db(const gchar *);
CheckInterfacedef(g_utf8_prev_char,g_utf8_prev_char_db);
extern void g_node_pop_allocator_db(void);
CheckInterfacedef(g_node_pop_allocator,g_node_pop_allocator_db);
extern GPrintFunc g_set_printerr_handler_db(GPrintFunc);
CheckInterfacedef(g_set_printerr_handler,g_set_printerr_handler_db);
extern GMemChunk * g_mem_chunk_new_db(const gchar *, gint, gulong, gint);
CheckInterfacedef(g_mem_chunk_new,g_mem_chunk_new_db);
extern void g_on_error_stack_trace_db(const gchar *);
CheckInterfacedef(g_on_error_stack_trace,g_on_error_stack_trace_db);
extern void g_mem_chunk_print_db(GMemChunk *);
CheckInterfacedef(g_mem_chunk_print,g_mem_chunk_print_db);
extern guint g_list_length_db(GList *);
CheckInterfacedef(g_list_length,g_list_length_db);
extern void g_main_loop_quit_db(GMainLoop *);
CheckInterfacedef(g_main_loop_quit,g_main_loop_quit_db);
extern void g_hook_insert_before_db(GHookList *, GHook *, GHook *);
CheckInterfacedef(g_hook_insert_before,g_hook_insert_before_db);
extern gboolean g_get_filename_charsets_db(const gchar * * *);
CheckInterfacedef(g_get_filename_charsets,g_get_filename_charsets_db);
extern GList * g_queue_pop_nth_link_db(GQueue *, guint);
CheckInterfacedef(g_queue_pop_nth_link,g_queue_pop_nth_link_db);
extern GSList * g_slist_copy_db(GSList *);
CheckInterfacedef(g_slist_copy,g_slist_copy_db);
extern gint g_mkstemp_db(gchar *);
CheckInterfacedef(g_mkstemp,g_mkstemp_db);
extern GError * g_error_new_db(GQuark, gint, const gchar *, ...);
CheckInterfacedef(g_error_new,g_error_new_db);
extern GString * g_string_set_size_db(GString *, gsize);
CheckInterfacedef(g_string_set_size,g_string_set_size_db);
extern gchar * g_get_prgname_db(void);
CheckInterfacedef(g_get_prgname,g_get_prgname_db);
extern gpointer g_ptr_array_remove_index_fast_db(GPtrArray *, guint);
CheckInterfacedef(g_ptr_array_remove_index_fast,g_ptr_array_remove_index_fast_db);
extern GRand * g_rand_new_with_seed_array_db(const guint32 *, guint);
CheckInterfacedef(g_rand_new_with_seed_array,g_rand_new_with_seed_array_db);
extern void g_dir_close_db(GDir *);
CheckInterfacedef(g_dir_close,g_dir_close_db);
extern const gchar *const  * g_get_system_config_dirs_db(void);
CheckInterfacedef(g_get_system_config_dirs,g_get_system_config_dirs_db);
extern void g_relation_insert_db(GRelation *, ...);
CheckInterfacedef(g_relation_insert,g_relation_insert_db);
extern void g_option_context_free_db(GOptionContext *);
CheckInterfacedef(g_option_context_free,g_option_context_free_db);
extern gchar * g_strcanon_db(gchar *, const gchar *, gchar);
CheckInterfacedef(g_strcanon,g_strcanon_db);
extern guint g_slist_length_db(GSList *);
CheckInterfacedef(g_slist_length,g_slist_length_db);
extern gchar * g_key_file_to_data_db(GKeyFile *, gsize *, GError * *);
CheckInterfacedef(g_key_file_to_data,g_key_file_to_data_db);
extern GPatternSpec * g_pattern_spec_new_db(const gchar *);
CheckInterfacedef(g_pattern_spec_new,g_pattern_spec_new_db);
extern gchar * * g_strdupv_db(gchar * *);
CheckInterfacedef(g_strdupv,g_strdupv_db);
extern gboolean g_unichar_isupper_db(gunichar);
CheckInterfacedef(g_unichar_isupper,g_unichar_isupper_db);
extern void g_completion_free_db(GCompletion *);
CheckInterfacedef(g_completion_free,g_completion_free_db);
extern void g_timer_reset_db(GTimer *);
CheckInterfacedef(g_timer_reset,g_timer_reset_db);
extern GHashTable * g_hash_table_new_full_db(GHashFunc, GEqualFunc, GDestroyNotify, GDestroyNotify);
CheckInterfacedef(g_hash_table_new_full,g_hash_table_new_full_db);
extern void g_static_rec_mutex_init_db(GStaticRecMutex *);
CheckInterfacedef(g_static_rec_mutex_init,g_static_rec_mutex_init_db);
extern gint g_atomic_int_exchange_and_add_db(gint *, gint);
CheckInterfacedef(g_atomic_int_exchange_and_add,g_atomic_int_exchange_and_add_db);
extern gchar * g_strjoin_db(const gchar *, ...);
CheckInterfacedef(g_strjoin,g_strjoin_db);
extern GSList * g_slist_last_db(GSList *);
CheckInterfacedef(g_slist_last,g_slist_last_db);
extern void g_key_file_set_string_db(GKeyFile *, const gchar *, const gchar *, const gchar *);
CheckInterfacedef(g_key_file_set_string,g_key_file_set_string_db);
extern GPtrArray * g_ptr_array_new_db(void);
CheckInterfacedef(g_ptr_array_new,g_ptr_array_new_db);
extern gboolean g_markup_parse_context_end_parse_db(GMarkupParseContext *, GError * *);
CheckInterfacedef(g_markup_parse_context_end_parse,g_markup_parse_context_end_parse_db);
extern gboolean g_key_file_get_boolean_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_get_boolean,g_key_file_get_boolean_db);
extern gchar * g_strrstr_len_db(const gchar *, gssize, const gchar *);
CheckInterfacedef(g_strrstr_len,g_strrstr_len_db);
extern gint g_hook_compare_ids_db(GHook *, GHook *);
CheckInterfacedef(g_hook_compare_ids,g_hook_compare_ids_db);
extern gchar * g_utf8_strup_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_strup,g_utf8_strup_db);
extern gchar * g_build_filename_db(const gchar *, ...);
CheckInterfacedef(g_build_filename,g_build_filename_db);
extern void g_datalist_init_db(GData * *);
CheckInterfacedef(g_datalist_init,g_datalist_init_db);
extern GIOStatus g_io_channel_set_flags_db(GIOChannel *, GIOFlags, GError * *);
CheckInterfacedef(g_io_channel_set_flags,g_io_channel_set_flags_db);
extern void g_option_group_free_db(GOptionGroup *);
CheckInterfacedef(g_option_group_free,g_option_group_free_db);
extern void g_completion_clear_items_db(GCompletion *);
CheckInterfacedef(g_completion_clear_items,g_completion_clear_items_db);
extern gboolean g_hash_table_steal_db(GHashTable *, gconstpointer);
CheckInterfacedef(g_hash_table_steal,g_hash_table_steal_db);
extern gboolean g_spawn_async_with_pipes_db(const gchar *, gchar * *, gchar * *, GSpawnFlags, GSpawnChildSetupFunc, gpointer, GPid *, gint *, gint *, gint *, GError * *);
CheckInterfacedef(g_spawn_async_with_pipes,g_spawn_async_with_pipes_db);
extern void g_clear_error_db(GError * *);
CheckInterfacedef(g_clear_error,g_clear_error_db);
extern gpointer g_queue_pop_head_db(GQueue *);
CheckInterfacedef(g_queue_pop_head,g_queue_pop_head_db);
extern GThreadPool * g_thread_pool_new_db(GFunc, gpointer, gint, gboolean, GError * *);
CheckInterfacedef(g_thread_pool_new,g_thread_pool_new_db);
extern void g_static_rec_mutex_lock_db(GStaticRecMutex *);
CheckInterfacedef(g_static_rec_mutex_lock,g_static_rec_mutex_lock_db);
extern guint g_thread_pool_get_num_threads_db(GThreadPool *);
CheckInterfacedef(g_thread_pool_get_num_threads,g_thread_pool_get_num_threads_db);
extern void g_date_set_month_db(GDate *, GDateMonth);
CheckInterfacedef(g_date_set_month,g_date_set_month_db);
extern gchar * g_filename_to_uri_db(const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_filename_to_uri,g_filename_to_uri_db);
extern gboolean g_date_valid_julian_db(guint32);
CheckInterfacedef(g_date_valid_julian,g_date_valid_julian_db);
extern GQuark g_option_error_quark_db(void);
CheckInterfacedef(g_option_error_quark,g_option_error_quark_db);
extern gchar * * g_key_file_get_keys_db(GKeyFile *, const gchar *, gsize *, GError * *);
CheckInterfacedef(g_key_file_get_keys,g_key_file_get_keys_db);
extern gchar g_ascii_tolower_db(gchar);
CheckInterfacedef(g_ascii_tolower,g_ascii_tolower_db);
extern GMainLoop * g_main_loop_new_db(GMainContext *, gboolean);
CheckInterfacedef(g_main_loop_new,g_main_loop_new_db);
extern gint g_relation_count_db(GRelation *, gconstpointer, gint);
CheckInterfacedef(g_relation_count,g_relation_count_db);
extern void g_ptr_array_add_db(GPtrArray *, gpointer);
CheckInterfacedef(g_ptr_array_add,g_ptr_array_add_db);
extern void g_async_queue_unlock_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_unlock,g_async_queue_unlock_db);
extern gboolean g_pattern_match_string_db(GPatternSpec *, const gchar *);
CheckInterfacedef(g_pattern_match_string,g_pattern_match_string_db);
extern void g_key_file_free_db(GKeyFile *);
CheckInterfacedef(g_key_file_free,g_key_file_free_db);
extern GMainContext * g_main_context_default_db(void);
CheckInterfacedef(g_main_context_default,g_main_context_default_db);
extern GIOStatus g_io_channel_read_line_string_db(GIOChannel *, GString *, gsize *, GError * *);
CheckInterfacedef(g_io_channel_read_line_string,g_io_channel_read_line_string_db);
extern GSource * g_source_ref_db(GSource *);
CheckInterfacedef(g_source_ref,g_source_ref_db);
extern gint g_slist_index_db(GSList *, gconstpointer);
CheckInterfacedef(g_slist_index,g_slist_index_db);
extern GSList * g_slist_find_db(GSList *, gconstpointer);
CheckInterfacedef(g_slist_find,g_slist_find_db);
extern gboolean g_main_context_prepare_db(GMainContext *, gint *);
CheckInterfacedef(g_main_context_prepare,g_main_context_prepare_db);
extern char * g_markup_vprintf_escaped_db(const char *, va_list);
CheckInterfacedef(g_markup_vprintf_escaped,g_markup_vprintf_escaped_db);
extern void g_ptr_array_set_size_db(GPtrArray *, gint);
CheckInterfacedef(g_ptr_array_set_size,g_ptr_array_set_size_db);
extern void g_set_application_name_db(const gchar *);
CheckInterfacedef(g_set_application_name,g_set_application_name_db);
extern gint g_main_context_query_db(GMainContext *, gint, gint *, GPollFD *, gint);
CheckInterfacedef(g_main_context_query,g_main_context_query_db);
extern void g_rand_set_seed_db(GRand *, guint32);
CheckInterfacedef(g_rand_set_seed,g_rand_set_seed_db);
extern GList * g_list_last_db(GList *);
CheckInterfacedef(g_list_last,g_list_last_db);
extern gchar * g_ascii_dtostr_db(gchar *, gint, gdouble);
CheckInterfacedef(g_ascii_dtostr,g_ascii_dtostr_db);
extern gboolean g_main_loop_is_running_db(GMainLoop *);
CheckInterfacedef(g_main_loop_is_running,g_main_loop_is_running_db);
extern void g_pattern_spec_free_db(GPatternSpec *);
CheckInterfacedef(g_pattern_spec_free,g_pattern_spec_free_db);
extern GTree * g_tree_new_full_db(GCompareDataFunc, gpointer, GDestroyNotify, GDestroyNotify);
CheckInterfacedef(g_tree_new_full,g_tree_new_full_db);
extern guint8 g_date_get_monday_weeks_in_year_db(GDateYear);
CheckInterfacedef(g_date_get_monday_weeks_in_year,g_date_get_monday_weeks_in_year_db);
extern guint g_idle_add_db(GSourceFunc, gpointer);
CheckInterfacedef(g_idle_add,g_idle_add_db);
extern void g_main_context_release_db(GMainContext *);
CheckInterfacedef(g_main_context_release,g_main_context_release_db);
extern int g_main_depth_db(void);
CheckInterfacedef(g_main_depth,g_main_depth_db);
extern void g_cache_key_foreach_db(GCache *, GHFunc, gpointer);
CheckInterfacedef(g_cache_key_foreach,g_cache_key_foreach_db);
extern void g_static_rec_mutex_free_db(GStaticRecMutex *);
CheckInterfacedef(g_static_rec_mutex_free,g_static_rec_mutex_free_db);
extern guint g_date_get_monday_week_of_year_db(const GDate *);
CheckInterfacedef(g_date_get_monday_week_of_year,g_date_get_monday_week_of_year_db);
extern const gchar * g_io_channel_get_line_term_db(GIOChannel *, gint *);
CheckInterfacedef(g_io_channel_get_line_term,g_io_channel_get_line_term_db);
extern guint g_scanner_set_scope_db(GScanner *, guint);
CheckInterfacedef(g_scanner_set_scope,g_scanner_set_scope_db);
extern gchar * g_string_free_db(GString *, gboolean);
CheckInterfacedef(g_string_free,g_string_free_db);
extern void g_source_set_priority_db(GSource *, gint);
CheckInterfacedef(g_source_set_priority,g_source_set_priority_db);
extern void g_async_queue_unref_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_unref,g_async_queue_unref_db);
extern void g_hook_prepend_db(GHookList *, GHook *);
CheckInterfacedef(g_hook_prepend,g_hook_prepend_db);
extern gpointer g_queue_peek_head_db(GQueue *);
CheckInterfacedef(g_queue_peek_head,g_queue_peek_head_db);
extern void g_byte_array_sort_with_data_db(GByteArray *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_byte_array_sort_with_data,g_byte_array_sort_with_data_db);
extern gboolean g_key_file_load_from_data_dirs_db(GKeyFile *, const gchar *, gchar * *, GKeyFileFlags, GError * *);
CheckInterfacedef(g_key_file_load_from_data_dirs,g_key_file_load_from_data_dirs_db);
extern guint g_trash_stack_height_db(GTrashStack * *);
CheckInterfacedef(g_trash_stack_height,g_trash_stack_height_db);
extern void g_markup_parse_context_free_db(GMarkupParseContext *);
CheckInterfacedef(g_markup_parse_context_free,g_markup_parse_context_free_db);
extern GString * g_string_append_len_db(GString *, const gchar *, gssize);
CheckInterfacedef(g_string_append_len,g_string_append_len_db);
extern const gchar * g_getenv_db(const gchar *);
CheckInterfacedef(g_getenv,g_getenv_db);
extern gint * g_key_file_get_integer_list_db(GKeyFile *, const gchar *, const gchar *, gsize *, GError * *);
CheckInterfacedef(g_key_file_get_integer_list,g_key_file_get_integer_list_db);
extern gunichar2 * g_ucs4_to_utf16_db(const gunichar *, glong, glong *, glong *, GError * *);
CheckInterfacedef(g_ucs4_to_utf16,g_ucs4_to_utf16_db);
extern GList * g_list_remove_db(GList *, gconstpointer);
CheckInterfacedef(g_list_remove,g_list_remove_db);
extern gboolean g_hook_destroy_db(GHookList *, gulong);
CheckInterfacedef(g_hook_destroy,g_hook_destroy_db);
extern GRand * g_rand_copy_db(GRand *);
CheckInterfacedef(g_rand_copy,g_rand_copy_db);
extern GString * g_string_ascii_up_db(GString *);
CheckInterfacedef(g_string_ascii_up,g_string_ascii_up_db);
extern const gchar * g_io_channel_get_encoding_db(GIOChannel *);
CheckInterfacedef(g_io_channel_get_encoding,g_io_channel_get_encoding_db);
extern void g_random_set_seed_db(guint32);
CheckInterfacedef(g_random_set_seed,g_random_set_seed_db);
extern GOptionGroup * g_option_context_get_main_group_db(GOptionContext *);
CheckInterfacedef(g_option_context_get_main_group,g_option_context_get_main_group_db);
extern guint g_idle_add_full_db(gint, GSourceFunc, gpointer, GDestroyNotify);
CheckInterfacedef(g_idle_add_full,g_idle_add_full_db);
extern GArray * g_array_append_vals_db(GArray *, gconstpointer, guint);
CheckInterfacedef(g_array_append_vals,g_array_append_vals_db);
extern GHook * g_hook_next_valid_db(GHookList *, GHook *, gboolean);
CheckInterfacedef(g_hook_next_valid,g_hook_next_valid_db);
extern gchar * g_path_get_basename_db(const gchar *);
CheckInterfacedef(g_path_get_basename,g_path_get_basename_db);
extern gchar * g_key_file_get_value_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_get_value,g_key_file_get_value_db);
extern void g_slist_pop_allocator_db(void);
CheckInterfacedef(g_slist_pop_allocator,g_slist_pop_allocator_db);
extern void g_node_unlink_db(GNode *);
CheckInterfacedef(g_node_unlink,g_node_unlink_db);
extern gpointer g_hash_table_find_db(GHashTable *, GHRFunc, gpointer);
CheckInterfacedef(g_hash_table_find,g_hash_table_find_db);
extern GList * g_list_sort_db(GList *, GCompareFunc);
CheckInterfacedef(g_list_sort,g_list_sort_db);
extern void g_date_set_time_db(GDate *, GTime);
CheckInterfacedef(g_date_set_time,g_date_set_time_db);
extern GPollFunc g_main_context_get_poll_func_db(GMainContext *);
CheckInterfacedef(g_main_context_get_poll_func,g_main_context_get_poll_func_db);
extern gchar * g_strndup_db(const gchar *, gsize);
CheckInterfacedef(g_strndup,g_strndup_db);
extern GSList * g_slist_remove_db(GSList *, gconstpointer);
CheckInterfacedef(g_slist_remove,g_slist_remove_db);
extern void g_date_order_db(GDate *, GDate *);
CheckInterfacedef(g_date_order,g_date_order_db);
extern gdouble g_timer_elapsed_db(GTimer *, gulong *);
CheckInterfacedef(g_timer_elapsed,g_timer_elapsed_db);
extern gchar * g_strchug_db(gchar *);
CheckInterfacedef(g_strchug,g_strchug_db);
extern GQuark g_io_channel_error_quark_db(void);
CheckInterfacedef(g_io_channel_error_quark,g_io_channel_error_quark_db);
extern void g_cache_remove_db(GCache *, gconstpointer);
CheckInterfacedef(g_cache_remove,g_cache_remove_db);
extern GArray * g_array_remove_index_fast_db(GArray *, guint);
CheckInterfacedef(g_array_remove_index_fast,g_array_remove_index_fast_db);
extern GAsyncQueue * g_async_queue_ref_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_ref,g_async_queue_ref_db);
extern GQuark g_key_file_error_quark_db(void);
CheckInterfacedef(g_key_file_error_quark,g_key_file_error_quark_db);
extern gboolean g_atomic_pointer_compare_and_exchange_db(gpointer *, gpointer, gpointer);
CheckInterfacedef(g_atomic_pointer_compare_and_exchange,g_atomic_pointer_compare_and_exchange_db);
extern gboolean g_date_valid_dmy_db(GDateDay, GDateMonth, GDateYear);
CheckInterfacedef(g_date_valid_dmy,g_date_valid_dmy_db);
extern gpointer g_mem_chunk_alloc0_db(GMemChunk *);
CheckInterfacedef(g_mem_chunk_alloc0,g_mem_chunk_alloc0_db);
extern gint g_async_queue_length_unlocked_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_length_unlocked,g_async_queue_length_unlocked_db);
extern GUnicodeBreakType g_unichar_break_type_db(gunichar);
CheckInterfacedef(g_unichar_break_type,g_unichar_break_type_db);
extern gboolean g_date_valid_year_db(GDateYear);
CheckInterfacedef(g_date_valid_year,g_date_valid_year_db);
extern void g_thread_pool_set_max_unused_threads_db(gint);
CheckInterfacedef(g_thread_pool_set_max_unused_threads,g_thread_pool_set_max_unused_threads_db);
extern GArray * g_array_remove_index_db(GArray *, guint);
CheckInterfacedef(g_array_remove_index,g_array_remove_index_db);
extern void g_key_file_remove_group_db(GKeyFile *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_remove_group,g_key_file_remove_group_db);
extern gchar * g_key_file_get_comment_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_get_comment,g_key_file_get_comment_db);
extern gboolean g_io_channel_get_buffered_db(GIOChannel *);
CheckInterfacedef(g_io_channel_get_buffered,g_io_channel_get_buffered_db);
extern GList * g_list_delete_link_db(GList *, GList *);
CheckInterfacedef(g_list_delete_link,g_list_delete_link_db);
extern GList * g_completion_complete_db(GCompletion *, const gchar *, gchar * *);
CheckInterfacedef(g_completion_complete,g_completion_complete_db);
extern gboolean g_unichar_isdigit_db(gunichar);
CheckInterfacedef(g_unichar_isdigit,g_unichar_isdigit_db);
extern void g_date_subtract_years_db(GDate *, guint);
CheckInterfacedef(g_date_subtract_years,g_date_subtract_years_db);
extern gchar * g_utf8_strchr_db(const char *, gssize, gunichar);
CheckInterfacedef(g_utf8_strchr,g_utf8_strchr_db);
extern void g_queue_push_head_db(GQueue *, gpointer);
CheckInterfacedef(g_queue_push_head,g_queue_push_head_db);
extern guint g_queue_get_length_db(GQueue *);
CheckInterfacedef(g_queue_get_length,g_queue_get_length_db);
extern gchar * g_string_chunk_insert_const_db(GStringChunk *, const gchar *);
CheckInterfacedef(g_string_chunk_insert_const,g_string_chunk_insert_const_db);
extern void g_static_rw_lock_init_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_init,g_static_rw_lock_init_db);
extern guint g_bit_storage_db(gulong);
CheckInterfacedef(g_bit_storage,g_bit_storage_db);
extern GSList * g_slist_sort_db(GSList *, GCompareFunc);
CheckInterfacedef(g_slist_sort,g_slist_sort_db);
extern gint g_relation_delete_db(GRelation *, gconstpointer, gint);
CheckInterfacedef(g_relation_delete,g_relation_delete_db);
extern GIOStatus g_io_channel_write_chars_db(GIOChannel *, const gchar *, gssize, gsize *, GError * *);
CheckInterfacedef(g_io_channel_write_chars,g_io_channel_write_chars_db);
extern GList * g_list_find_db(GList *, gconstpointer);
CheckInterfacedef(g_list_find,g_list_find_db);
extern gpointer g_queue_peek_tail_db(GQueue *);
CheckInterfacedef(g_queue_peek_tail,g_queue_peek_tail_db);
extern GIOStatus g_io_channel_write_unichar_db(GIOChannel *, gunichar, GError * *);
CheckInterfacedef(g_io_channel_write_unichar,g_io_channel_write_unichar_db);
extern void g_hook_list_clear_db(GHookList *);
CheckInterfacedef(g_hook_list_clear,g_hook_list_clear_db);
extern guint g_child_watch_add_db(GPid, GChildWatchFunc, gpointer);
CheckInterfacedef(g_child_watch_add,g_child_watch_add_db);
extern void g_hook_list_init_db(GHookList *, guint);
CheckInterfacedef(g_hook_list_init,g_hook_list_init_db);
extern gpointer g_realloc_db(gpointer, gulong);
CheckInterfacedef(g_realloc,g_realloc_db);
extern void g_queue_push_nth_db(GQueue *, gpointer, gint);
CheckInterfacedef(g_queue_push_nth,g_queue_push_nth_db);
extern gpointer g_trash_stack_peek_db(GTrashStack * *);
CheckInterfacedef(g_trash_stack_peek,g_trash_stack_peek_db);
extern const gchar * g_get_application_name_db(void);
CheckInterfacedef(g_get_application_name,g_get_application_name_db);
extern gint g_main_context_check_db(GMainContext *, gint, GPollFD *, gint);
CheckInterfacedef(g_main_context_check,g_main_context_check_db);
extern gunichar * g_unicode_canonical_decomposition_db(gunichar, gsize *);
CheckInterfacedef(g_unicode_canonical_decomposition,g_unicode_canonical_decomposition_db);
extern gpointer g_async_queue_timed_pop_unlocked_db(GAsyncQueue *, GTimeVal *);
CheckInterfacedef(g_async_queue_timed_pop_unlocked,g_async_queue_timed_pop_unlocked_db);
extern gboolean g_option_context_get_help_enabled_db(GOptionContext *);
CheckInterfacedef(g_option_context_get_help_enabled,g_option_context_get_help_enabled_db);
extern void g_log_default_handler_db(const gchar *, GLogLevelFlags, const gchar *, gpointer);
CheckInterfacedef(g_log_default_handler,g_log_default_handler_db);
extern gpointer g_async_queue_try_pop_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_try_pop,g_async_queue_try_pop_db);
extern void g_option_group_set_translation_domain_db(GOptionGroup *, const gchar *);
CheckInterfacedef(g_option_group_set_translation_domain,g_option_group_set_translation_domain_db);
extern void g_source_destroy_db(GSource *);
CheckInterfacedef(g_source_destroy,g_source_destroy_db);
extern gchar * g_filename_to_utf8_db(const gchar *, gssize, gsize *, gsize *, GError * *);
CheckInterfacedef(g_filename_to_utf8,g_filename_to_utf8_db);
extern gboolean g_key_file_load_from_data_db(GKeyFile *, const gchar *, gsize, GKeyFileFlags, GError * *);
CheckInterfacedef(g_key_file_load_from_data,g_key_file_load_from_data_db);
extern GKeyFile * g_key_file_new_db(void);
CheckInterfacedef(g_key_file_new,g_key_file_new_db);
extern GDateYear g_date_get_year_db(const GDate *);
CheckInterfacedef(g_date_get_year,g_date_get_year_db);
extern const gchar * g_get_user_config_dir_db(void);
CheckInterfacedef(g_get_user_config_dir,g_get_user_config_dir_db);
extern gint g_slist_position_db(GSList *, GSList *);
CheckInterfacedef(g_slist_position,g_slist_position_db);
extern GSList * g_slist_delete_link_db(GSList *, GSList *);
CheckInterfacedef(g_slist_delete_link,g_slist_delete_link_db);
extern GDateWeekday g_date_get_weekday_db(const GDate *);
CheckInterfacedef(g_date_get_weekday,g_date_get_weekday_db);
extern gchar * g_convert_with_iconv_db(const gchar *, gssize, GIConv, gsize *, gsize *, GError * *);
CheckInterfacedef(g_convert_with_iconv,g_convert_with_iconv_db);
extern GNode * g_node_insert_db(GNode *, gint, GNode *);
CheckInterfacedef(g_node_insert,g_node_insert_db);
extern void g_source_set_callback_db(GSource *, GSourceFunc, gpointer, GDestroyNotify);
CheckInterfacedef(g_source_set_callback,g_source_set_callback_db);
extern void g_source_add_poll_db(GSource *, GPollFD *);
CheckInterfacedef(g_source_add_poll,g_source_add_poll_db);
extern void g_slist_free_1_db(GSList *);
CheckInterfacedef(g_slist_free_1,g_slist_free_1_db);
extern GByteArray * g_byte_array_remove_index_fast_db(GByteArray *, guint);
CheckInterfacedef(g_byte_array_remove_index_fast,g_byte_array_remove_index_fast_db);
extern GHook * g_hook_find_data_db(GHookList *, gboolean, gpointer);
CheckInterfacedef(g_hook_find_data,g_hook_find_data_db);
extern void g_ptr_array_foreach_db(GPtrArray *, GFunc, gpointer);
CheckInterfacedef(g_ptr_array_foreach,g_ptr_array_foreach_db);
extern void g_scanner_scope_add_symbol_db(GScanner *, guint, const gchar *, gpointer);
CheckInterfacedef(g_scanner_scope_add_symbol,g_scanner_scope_add_symbol_db);
extern GMainContext * g_main_context_ref_db(GMainContext *);
CheckInterfacedef(g_main_context_ref,g_main_context_ref_db);
extern void g_hook_list_invoke_db(GHookList *, gboolean);
CheckInterfacedef(g_hook_list_invoke,g_hook_list_invoke_db);
extern gint g_source_get_priority_db(GSource *);
CheckInterfacedef(g_source_get_priority,g_source_get_priority_db);
extern void g_list_free_1_db(GList *);
CheckInterfacedef(g_list_free_1,g_list_free_1_db);
extern gint g_key_file_get_integer_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_get_integer,g_key_file_get_integer_db);
extern GSList * g_slist_nth_db(GSList *, guint);
CheckInterfacedef(g_slist_nth,g_slist_nth_db);
extern gchar * g_shell_unquote_db(const gchar *, GError * *);
CheckInterfacedef(g_shell_unquote,g_shell_unquote_db);
extern void g_option_context_add_group_db(GOptionContext *, GOptionGroup *);
CheckInterfacedef(g_option_context_add_group,g_option_context_add_group_db);
extern gboolean g_unichar_isprint_db(gunichar);
CheckInterfacedef(g_unichar_isprint,g_unichar_isprint_db);
extern GList * g_list_copy_db(GList *);
CheckInterfacedef(g_list_copy,g_list_copy_db);
extern void g_cache_value_foreach_db(GCache *, GHFunc, gpointer);
CheckInterfacedef(g_cache_value_foreach,g_cache_value_foreach_db);
extern void g_key_file_set_comment_db(GKeyFile *, const gchar *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_set_comment,g_key_file_set_comment_db);
extern gint g_ascii_digit_value_db(gchar);
CheckInterfacedef(g_ascii_digit_value,g_ascii_digit_value_db);
extern void g_main_context_dispatch_db(GMainContext *);
CheckInterfacedef(g_main_context_dispatch,g_main_context_dispatch_db);
extern GIOChannel * g_io_channel_new_file_db(const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_io_channel_new_file,g_io_channel_new_file_db);
extern gint g_unichar_digit_value_db(gunichar);
CheckInterfacedef(g_unichar_digit_value,g_unichar_digit_value_db);
extern void g_source_set_can_recurse_db(GSource *, gboolean);
CheckInterfacedef(g_source_set_can_recurse,g_source_set_can_recurse_db);
extern void g_main_loop_unref_db(GMainLoop *);
CheckInterfacedef(g_main_loop_unref,g_main_loop_unref_db);
extern GNode * g_node_first_sibling_db(GNode *);
CheckInterfacedef(g_node_first_sibling,g_node_first_sibling_db);
extern gint g_date_days_between_db(const GDate *, const GDate *);
CheckInterfacedef(g_date_days_between,g_date_days_between_db);
extern void g_mem_chunk_free_db(GMemChunk *, gpointer);
CheckInterfacedef(g_mem_chunk_free,g_mem_chunk_free_db);
extern gchar * g_markup_escape_text_db(const gchar *, gssize);
CheckInterfacedef(g_markup_escape_text,g_markup_escape_text_db);
extern gunichar g_unichar_tolower_db(gunichar);
CheckInterfacedef(g_unichar_tolower,g_unichar_tolower_db);
extern void g_queue_push_nth_link_db(GQueue *, gint, GList *);
CheckInterfacedef(g_queue_push_nth_link,g_queue_push_nth_link_db);
extern char * g_markup_printf_escaped_db(const char *, ...);
CheckInterfacedef(g_markup_printf_escaped,g_markup_printf_escaped_db);
extern void g_hook_unref_db(GHookList *, GHook *);
CheckInterfacedef(g_hook_unref,g_hook_unref_db);
extern GNode * g_node_find_db(GNode *, GTraverseType, GTraverseFlags, gpointer);
CheckInterfacedef(g_node_find,g_node_find_db);
extern gchar * g_ascii_formatd_db(gchar *, gint, const gchar *, gdouble);
CheckInterfacedef(g_ascii_formatd,g_ascii_formatd_db);
extern gpointer g_scanner_scope_lookup_symbol_db(GScanner *, guint, const gchar *);
CheckInterfacedef(g_scanner_scope_lookup_symbol,g_scanner_scope_lookup_symbol_db);
extern gpointer g_dataset_id_remove_no_notify_db(gconstpointer, GQuark);
CheckInterfacedef(g_dataset_id_remove_no_notify,g_dataset_id_remove_no_notify_db);
extern GQueue * g_queue_new_db(void);
CheckInterfacedef(g_queue_new,g_queue_new_db);
extern GQuark g_markup_error_quark_db(void);
CheckInterfacedef(g_markup_error_quark,g_markup_error_quark_db);
extern void g_option_context_set_ignore_unknown_options_db(GOptionContext *, gboolean);
CheckInterfacedef(g_option_context_set_ignore_unknown_options,g_option_context_set_ignore_unknown_options_db);
extern void g_completion_remove_items_db(GCompletion *, GList *);
CheckInterfacedef(g_completion_remove_items,g_completion_remove_items_db);
extern void g_datalist_id_set_data_full_db(GData * *, GQuark, gpointer, GDestroyNotify);
CheckInterfacedef(g_datalist_id_set_data_full,g_datalist_id_set_data_full_db);
extern void g_trash_stack_push_db(GTrashStack * *, gpointer);
CheckInterfacedef(g_trash_stack_push,g_trash_stack_push_db);
extern void g_async_queue_lock_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_lock,g_async_queue_lock_db);
extern void g_ptr_array_sort_db(GPtrArray *, GCompareFunc);
CheckInterfacedef(g_ptr_array_sort,g_ptr_array_sort_db);
extern void g_queue_free_db(GQueue *);
CheckInterfacedef(g_queue_free,g_queue_free_db);
extern void g_array_sort_with_data_db(GArray *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_array_sort_with_data,g_array_sort_with_data_db);
extern gboolean g_relation_exists_db(GRelation *, ...);
CheckInterfacedef(g_relation_exists,g_relation_exists_db);
extern gboolean g_utf8_validate_db(const char *, gssize, const gchar * *);
CheckInterfacedef(g_utf8_validate,g_utf8_validate_db);
extern void g_static_rw_lock_writer_unlock_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_writer_unlock,g_static_rw_lock_writer_unlock_db);
extern GByteArray * g_byte_array_remove_index_db(GByteArray *, guint);
CheckInterfacedef(g_byte_array_remove_index,g_byte_array_remove_index_db);
extern guint g_hash_table_foreach_remove_db(GHashTable *, GHRFunc, gpointer);
CheckInterfacedef(g_hash_table_foreach_remove,g_hash_table_foreach_remove_db);
extern GString * g_string_insert_unichar_db(GString *, gssize, gunichar);
CheckInterfacedef(g_string_insert_unichar,g_string_insert_unichar_db);
extern GSList * g_slist_prepend_db(GSList *, gpointer);
CheckInterfacedef(g_slist_prepend,g_slist_prepend_db);
extern GList * g_list_first_db(GList *);
CheckInterfacedef(g_list_first,g_list_first_db);
extern GMarkupParseContext * g_markup_parse_context_new_db(const GMarkupParser *, GMarkupParseFlags, gpointer, GDestroyNotify);
CheckInterfacedef(g_markup_parse_context_new,g_markup_parse_context_new_db);
extern void g_io_channel_init_db(GIOChannel *);
CheckInterfacedef(g_io_channel_init,g_io_channel_init_db);
extern GQuark g_convert_error_quark_db(void);
CheckInterfacedef(g_convert_error_quark,g_convert_error_quark_db);
extern GNode * g_node_get_root_db(GNode *);
CheckInterfacedef(g_node_get_root,g_node_get_root_db);
extern gchar * g_filename_display_name_db(const gchar *);
CheckInterfacedef(g_filename_display_name,g_filename_display_name_db);
extern gint g_io_channel_unix_get_fd_db(GIOChannel *);
CheckInterfacedef(g_io_channel_unix_get_fd,g_io_channel_unix_get_fd_db);
extern gboolean g_int_equal_db(gconstpointer, gconstpointer);
CheckInterfacedef(g_int_equal,g_int_equal_db);
extern void g_hook_list_marshal_check_db(GHookList *, gboolean, GHookCheckMarshaller, gpointer);
CheckInterfacedef(g_hook_list_marshal_check,g_hook_list_marshal_check_db);
extern void g_static_mutex_init_db(GStaticMutex *);
CheckInterfacedef(g_static_mutex_init,g_static_mutex_init_db);
extern GString * g_string_prepend_unichar_db(GString *, gunichar);
CheckInterfacedef(g_string_prepend_unichar,g_string_prepend_unichar_db);
extern GList * g_queue_find_custom_db(GQueue *, gconstpointer, GCompareFunc);
CheckInterfacedef(g_queue_find_custom,g_queue_find_custom_db);
extern void g_key_file_set_string_list_db(GKeyFile *, const gchar *, const gchar *, const gchar *const  *, gsize);
CheckInterfacedef(g_key_file_set_string_list,g_key_file_set_string_list_db);
extern guint32 g_date_get_julian_db(const GDate *);
CheckInterfacedef(g_date_get_julian,g_date_get_julian_db);
extern gpointer g_dataset_id_get_data_db(gconstpointer, GQuark);
CheckInterfacedef(g_dataset_id_get_data,g_dataset_id_get_data_db);
extern gboolean g_date_valid_day_db(GDateDay);
CheckInterfacedef(g_date_valid_day,g_date_valid_day_db);
extern GHook * g_hook_first_valid_db(GHookList *, gboolean);
CheckInterfacedef(g_hook_first_valid,g_hook_first_valid_db);
extern GIOStatus g_io_channel_read_to_end_db(GIOChannel *, gchar * *, gsize *, GError * *);
CheckInterfacedef(g_io_channel_read_to_end,g_io_channel_read_to_end_db);
extern void g_scanner_destroy_db(GScanner *);
CheckInterfacedef(g_scanner_destroy,g_scanner_destroy_db);
extern GString * g_string_insert_c_db(GString *, gssize, gchar);
CheckInterfacedef(g_string_insert_c,g_string_insert_c_db);
extern void g_queue_push_head_link_db(GQueue *, GList *);
CheckInterfacedef(g_queue_push_head_link,g_queue_push_head_link_db);
extern GIOChannel * g_io_channel_ref_db(GIOChannel *);
CheckInterfacedef(g_io_channel_ref,g_io_channel_ref_db);
extern gpointer g_try_realloc_db(gpointer, gulong);
CheckInterfacedef(g_try_realloc,g_try_realloc_db);
extern GRelation * g_relation_new_db(gint);
CheckInterfacedef(g_relation_new,g_relation_new_db);
extern GNode * g_node_nth_child_db(GNode *, guint);
CheckInterfacedef(g_node_nth_child,g_node_nth_child_db);
extern GByteArray * g_byte_array_sized_new_db(guint);
CheckInterfacedef(g_byte_array_sized_new,g_byte_array_sized_new_db);
extern void g_queue_push_tail_db(GQueue *, gpointer);
CheckInterfacedef(g_queue_push_tail,g_queue_push_tail_db);
extern gboolean g_unichar_validate_db(gunichar);
CheckInterfacedef(g_unichar_validate,g_unichar_validate_db);
extern GSource * g_idle_source_new_db(void);
CheckInterfacedef(g_idle_source_new,g_idle_source_new_db);
extern gchar * * g_key_file_get_groups_db(GKeyFile *, gsize *);
CheckInterfacedef(g_key_file_get_groups,g_key_file_get_groups_db);
extern void g_scanner_sync_file_offset_db(GScanner *);
CheckInterfacedef(g_scanner_sync_file_offset,g_scanner_sync_file_offset_db);
extern GLogLevelFlags g_log_set_always_fatal_db(GLogLevelFlags);
CheckInterfacedef(g_log_set_always_fatal,g_log_set_always_fatal_db);
extern gpointer * g_ptr_array_free_db(GPtrArray *, gboolean);
CheckInterfacedef(g_ptr_array_free,g_ptr_array_free_db);
extern gint g_utf8_collate_db(const gchar *, const gchar *);
CheckInterfacedef(g_utf8_collate,g_utf8_collate_db);
extern GPrintFunc g_set_print_handler_db(GPrintFunc);
CheckInterfacedef(g_set_print_handler,g_set_print_handler_db);
extern void g_hook_list_invoke_check_db(GHookList *, gboolean);
CheckInterfacedef(g_hook_list_invoke_check,g_hook_list_invoke_check_db);
extern gchar * g_utf8_offset_to_pointer_db(const gchar *, glong);
CheckInterfacedef(g_utf8_offset_to_pointer,g_utf8_offset_to_pointer_db);
extern void g_scanner_input_file_db(GScanner *, gint);
CheckInterfacedef(g_scanner_input_file,g_scanner_input_file_db);
extern gboolean g_source_get_can_recurse_db(GSource *);
CheckInterfacedef(g_source_get_can_recurse,g_source_get_can_recurse_db);
extern GHook * g_hook_find_func_data_db(GHookList *, gboolean, gpointer, gpointer);
CheckInterfacedef(g_hook_find_func_data,g_hook_find_func_data_db);
extern void g_logv_db(const gchar *, GLogLevelFlags, const gchar *, va_list);
CheckInterfacedef(g_logv,g_logv_db);
extern gboolean g_error_matches_db(const GError *, GQuark, gint);
CheckInterfacedef(g_error_matches,g_error_matches_db);
extern gpointer g_async_queue_pop_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_pop,g_async_queue_pop_db);
extern gchar * * g_uri_list_extract_uris_db(const gchar *);
CheckInterfacedef(g_uri_list_extract_uris,g_uri_list_extract_uris_db);
extern gboolean g_static_rw_lock_writer_trylock_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_writer_trylock,g_static_rw_lock_writer_trylock_db);
extern void g_date_add_months_db(GDate *, guint);
CheckInterfacedef(g_date_add_months,g_date_add_months_db);
extern void g_date_add_days_db(GDate *, guint);
CheckInterfacedef(g_date_add_days,g_date_add_days_db);
extern gchar * * g_strsplit_db(const gchar *, const gchar *, gint);
CheckInterfacedef(g_strsplit,g_strsplit_db);
extern GSList * g_slist_remove_all_db(GSList *, gconstpointer);
CheckInterfacedef(g_slist_remove_all,g_slist_remove_all_db);
extern gdouble g_random_double_db(void);
CheckInterfacedef(g_random_double,g_random_double_db);
extern gdouble g_strtod_db(const gchar *, gchar * *);
CheckInterfacedef(g_strtod,g_strtod_db);
extern void g_queue_sort_db(GQueue *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_queue_sort,g_queue_sort_db);
extern gboolean g_str_has_suffix_db(const gchar *, const gchar *);
CheckInterfacedef(g_str_has_suffix,g_str_has_suffix_db);
extern GList * g_queue_pop_head_link_db(GQueue *);
CheckInterfacedef(g_queue_pop_head_link,g_queue_pop_head_link_db);
extern gint32 g_rand_int_range_db(GRand *, gint32, gint32);
CheckInterfacedef(g_rand_int_range,g_rand_int_range_db);
extern gint g_unichar_to_utf8_db(gunichar, gchar *);
CheckInterfacedef(g_unichar_to_utf8,g_unichar_to_utf8_db);
extern gchar * g_strnfill_db(gsize, gchar);
CheckInterfacedef(g_strnfill,g_strnfill_db);
extern void g_relation_print_db(GRelation *);
CheckInterfacedef(g_relation_print,g_relation_print_db);
extern void g_key_file_set_integer_list_db(GKeyFile *, const gchar *, const gchar *, gint *, gsize);
CheckInterfacedef(g_key_file_set_integer_list,g_key_file_set_integer_list_db);
extern GSource * g_main_context_find_source_by_funcs_user_data_db(GMainContext *, GSourceFuncs *, gpointer);
CheckInterfacedef(g_main_context_find_source_by_funcs_user_data,g_main_context_find_source_by_funcs_user_data_db);
extern GDate * g_date_new_julian_db(guint32);
CheckInterfacedef(g_date_new_julian,g_date_new_julian_db);
extern void g_node_traverse_db(GNode *, GTraverseType, GTraverseFlags, gint, GNodeTraverseFunc, gpointer);
CheckInterfacedef(g_node_traverse,g_node_traverse_db);
extern gchar * g_key_file_get_start_group_db(GKeyFile *);
CheckInterfacedef(g_key_file_get_start_group,g_key_file_get_start_group_db);
extern void g_key_file_set_locale_string_db(GKeyFile *, const gchar *, const gchar *, const gchar *, const gchar *);
CheckInterfacedef(g_key_file_set_locale_string,g_key_file_set_locale_string_db);
extern GHashTable * g_hash_table_new_db(GHashFunc, GEqualFunc);
CheckInterfacedef(g_hash_table_new,g_hash_table_new_db);
extern const gchar * g_dir_read_name_db(GDir *);
CheckInterfacedef(g_dir_read_name,g_dir_read_name_db);
extern gboolean g_hash_table_remove_db(GHashTable *, gconstpointer);
CheckInterfacedef(g_hash_table_remove,g_hash_table_remove_db);
extern gchar * g_utf8_strdown_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_strdown,g_utf8_strdown_db);
extern GIOCondition g_io_channel_get_buffer_condition_db(GIOChannel *);
CheckInterfacedef(g_io_channel_get_buffer_condition,g_io_channel_get_buffer_condition_db);
extern GSource * g_child_watch_source_new_db(GPid);
CheckInterfacedef(g_child_watch_source_new,g_child_watch_source_new_db);
extern void g_static_rec_mutex_unlock_db(GStaticRecMutex *);
CheckInterfacedef(g_static_rec_mutex_unlock,g_static_rec_mutex_unlock_db);
extern glong g_utf8_strlen_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_strlen,g_utf8_strlen_db);
extern GSList * g_slist_insert_db(GSList *, gpointer, gint);
CheckInterfacedef(g_slist_insert,g_slist_insert_db);
extern GNode * g_node_prepend_db(GNode *, GNode *);
CheckInterfacedef(g_node_prepend,g_node_prepend_db);
extern void g_propagate_error_db(GError * *, GError *);
CheckInterfacedef(g_propagate_error,g_propagate_error_db);
extern GTokenType g_scanner_peek_next_token_db(GScanner *);
CheckInterfacedef(g_scanner_peek_next_token,g_scanner_peek_next_token_db);
extern GArray * g_array_set_size_db(GArray *, guint);
CheckInterfacedef(g_array_set_size,g_array_set_size_db);
extern GString * g_string_erase_db(GString *, gssize, gssize);
CheckInterfacedef(g_string_erase,g_string_erase_db);
extern gchar * g_strcompress_db(const gchar *);
CheckInterfacedef(g_strcompress,g_strcompress_db);
extern gint g_async_queue_length_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_length,g_async_queue_length_db);
extern gboolean g_unichar_isdefined_db(gunichar);
CheckInterfacedef(g_unichar_isdefined,g_unichar_isdefined_db);
extern GString * g_string_prepend_db(GString *, const gchar *);
CheckInterfacedef(g_string_prepend,g_string_prepend_db);
extern guint32 g_rand_int_db(GRand *);
CheckInterfacedef(g_rand_int,g_rand_int_db);
extern void g_set_error_db(GError * *, GQuark, gint, const gchar *, ...);
CheckInterfacedef(g_set_error,g_set_error_db);
extern gboolean g_markup_parse_context_parse_db(GMarkupParseContext *, const gchar *, gssize, GError * *);
CheckInterfacedef(g_markup_parse_context_parse,g_markup_parse_context_parse_db);
extern gboolean g_main_context_pending_db(GMainContext *);
CheckInterfacedef(g_main_context_pending,g_main_context_pending_db);
extern gint g_tree_nnodes_db(GTree *);
CheckInterfacedef(g_tree_nnodes,g_tree_nnodes_db);
extern gpointer g_datalist_id_get_data_db(GData * *, GQuark);
CheckInterfacedef(g_datalist_id_get_data,g_datalist_id_get_data_db);
extern void g_ptr_array_sort_with_data_db(GPtrArray *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_ptr_array_sort_with_data,g_ptr_array_sort_with_data_db);
extern void g_queue_unlink_db(GQueue *, GList *);
CheckInterfacedef(g_queue_unlink,g_queue_unlink_db);
extern guint g_source_get_id_db(GSource *);
CheckInterfacedef(g_source_get_id,g_source_get_id_db);
extern void g_thread_pool_set_max_threads_db(GThreadPool *, gint, GError * *);
CheckInterfacedef(g_thread_pool_set_max_threads,g_thread_pool_set_max_threads_db);
extern gchar * g_utf8_normalize_db(const gchar *, gssize, GNormalizeMode);
CheckInterfacedef(g_utf8_normalize,g_utf8_normalize_db);
extern GTree * g_tree_new_with_data_db(GCompareDataFunc, gpointer);
CheckInterfacedef(g_tree_new_with_data,g_tree_new_with_data_db);
extern gchar * g_path_get_dirname_db(const gchar *);
CheckInterfacedef(g_path_get_dirname,g_path_get_dirname_db);
extern gint g_thread_pool_get_max_threads_db(GThreadPool *);
CheckInterfacedef(g_thread_pool_get_max_threads,g_thread_pool_get_max_threads_db);
extern GArray * g_array_sized_new_db(gboolean, gboolean, guint, guint);
CheckInterfacedef(g_array_sized_new,g_array_sized_new_db);
extern gboolean g_unichar_islower_db(gunichar);
CheckInterfacedef(g_unichar_islower,g_unichar_islower_db);
extern GString * g_string_assign_db(GString *, const gchar *);
CheckInterfacedef(g_string_assign,g_string_assign_db);
extern gchar * g_strstr_len_db(const gchar *, gssize, const gchar *);
CheckInterfacedef(g_strstr_len,g_strstr_len_db);
extern GArray * g_array_prepend_vals_db(GArray *, gconstpointer, guint);
CheckInterfacedef(g_array_prepend_vals,g_array_prepend_vals_db);
extern gdouble g_rand_double_range_db(GRand *, gdouble, gdouble);
CheckInterfacedef(g_rand_double_range,g_rand_double_range_db);
extern void g_key_file_set_list_separator_db(GKeyFile *, gchar);
CheckInterfacedef(g_key_file_set_list_separator,g_key_file_set_list_separator_db);
extern gboolean g_atomic_int_compare_and_exchange_db(gint *, gint, gint);
CheckInterfacedef(g_atomic_int_compare_and_exchange,g_atomic_int_compare_and_exchange_db);
extern void g_mem_profile_db(void);
CheckInterfacedef(g_mem_profile,g_mem_profile_db);
extern void g_io_channel_set_buffered_db(GIOChannel *, gboolean);
CheckInterfacedef(g_io_channel_set_buffered,g_io_channel_set_buffered_db);
extern GMutex * g_static_mutex_get_mutex_impl_db(GMutex * *);
CheckInterfacedef(g_static_mutex_get_mutex_impl,g_static_mutex_get_mutex_impl_db);
extern GList * g_list_remove_all_db(GList *, gconstpointer);
CheckInterfacedef(g_list_remove_all,g_list_remove_all_db);
extern void g_static_private_set_db(GStaticPrivate *, gpointer, GDestroyNotify);
CheckInterfacedef(g_static_private_set,g_static_private_set_db);
extern void g_timer_start_db(GTimer *);
CheckInterfacedef(g_timer_start,g_timer_start_db);
extern void g_array_sort_db(GArray *, GCompareFunc);
CheckInterfacedef(g_array_sort,g_array_sort_db);
extern gchar * g_build_path_db(const gchar *, const gchar *, ...);
CheckInterfacedef(g_build_path,g_build_path_db);
extern gchar * g_key_file_get_string_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_get_string,g_key_file_get_string_db);
extern void g_return_if_fail_warning_db(const char *, const char *, const char *);
CheckInterfacedef(g_return_if_fail_warning,g_return_if_fail_warning_db);
extern GAsyncQueue * g_async_queue_new_db(void);
CheckInterfacedef(g_async_queue_new,g_async_queue_new_db);
extern GTokenType g_scanner_get_next_token_db(GScanner *);
CheckInterfacedef(g_scanner_get_next_token,g_scanner_get_next_token_db);
extern gchar * g_strescape_db(const gchar *, const gchar *);
CheckInterfacedef(g_strescape,g_strescape_db);
extern void g_tree_remove_db(GTree *, gconstpointer);
CheckInterfacedef(g_tree_remove,g_tree_remove_db);
extern GFileError g_file_error_from_errno_db(gint);
CheckInterfacedef(g_file_error_from_errno,g_file_error_from_errno_db);
extern GByteArray * g_byte_array_set_size_db(GByteArray *, guint);
CheckInterfacedef(g_byte_array_set_size,g_byte_array_set_size_db);
extern GSList * g_slist_insert_before_db(GSList *, GSList *, gpointer);
CheckInterfacedef(g_slist_insert_before,g_slist_insert_before_db);
extern void g_main_context_unref_db(GMainContext *);
CheckInterfacedef(g_main_context_unref,g_main_context_unref_db);
extern void g_on_error_query_db(const gchar *);
CheckInterfacedef(g_on_error_query,g_on_error_query_db);
extern gchar * g_find_program_in_path_db(const gchar *);
CheckInterfacedef(g_find_program_in_path,g_find_program_in_path_db);
extern GNode * g_node_insert_before_db(GNode *, GNode *, GNode *);
CheckInterfacedef(g_node_insert_before,g_node_insert_before_db);
extern void g_key_file_set_boolean_db(GKeyFile *, const gchar *, const gchar *, gboolean);
CheckInterfacedef(g_key_file_set_boolean,g_key_file_set_boolean_db);
extern void g_key_file_remove_key_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_remove_key,g_key_file_remove_key_db);
extern void g_dataset_foreach_db(gconstpointer, GDataForeachFunc, gpointer);
CheckInterfacedef(g_dataset_foreach,g_dataset_foreach_db);
extern const gchar * g_get_user_data_dir_db(void);
CheckInterfacedef(g_get_user_data_dir,g_get_user_data_dir_db);
extern void g_date_subtract_months_db(GDate *, guint);
CheckInterfacedef(g_date_subtract_months,g_date_subtract_months_db);
extern gboolean g_unichar_iscntrl_db(gunichar);
CheckInterfacedef(g_unichar_iscntrl,g_unichar_iscntrl_db);
extern guint g_timeout_add_full_db(gint, guint, GSourceFunc, gpointer, GDestroyNotify);
CheckInterfacedef(g_timeout_add_full,g_timeout_add_full_db);
extern GIOStatus g_io_channel_read_chars_db(GIOChannel *, gchar *, gsize, gsize *, GError * *);
CheckInterfacedef(g_io_channel_read_chars,g_io_channel_read_chars_db);
extern gint g_bit_nth_msf_db(gulong, gint);
CheckInterfacedef(g_bit_nth_msf,g_bit_nth_msf_db);
extern void g_tree_steal_db(GTree *, gconstpointer);
CheckInterfacedef(g_tree_steal,g_tree_steal_db);
extern gboolean g_date_valid_db(const GDate *);
CheckInterfacedef(g_date_valid,g_date_valid_db);
extern void g_io_channel_set_close_on_unref_db(GIOChannel *, gboolean);
CheckInterfacedef(g_io_channel_set_close_on_unref,g_io_channel_set_close_on_unref_db);
extern void g_tree_replace_db(GTree *, gpointer, gpointer);
CheckInterfacedef(g_tree_replace,g_tree_replace_db);
extern void g_async_queue_push_unlocked_db(GAsyncQueue *, gpointer);
CheckInterfacedef(g_async_queue_push_unlocked,g_async_queue_push_unlocked_db);
extern GNode * g_node_new_db(gpointer);
CheckInterfacedef(g_node_new,g_node_new_db);
extern void g_mem_set_vtable_db(GMemVTable *);
CheckInterfacedef(g_mem_set_vtable,g_mem_set_vtable_db);
extern void g_option_context_add_main_entries_db(GOptionContext *, const GOptionEntry *, const gchar *);
CheckInterfacedef(g_option_context_add_main_entries,g_option_context_add_main_entries_db);
extern void g_hash_table_foreach_db(GHashTable *, GHFunc, gpointer);
CheckInterfacedef(g_hash_table_foreach,g_hash_table_foreach_db);
extern GUnicodeType g_unichar_type_db(gunichar);
CheckInterfacedef(g_unichar_type,g_unichar_type_db);
extern GPtrArray * g_ptr_array_sized_new_db(guint);
CheckInterfacedef(g_ptr_array_sized_new,g_ptr_array_sized_new_db);
extern GList * g_list_insert_sorted_db(GList *, gpointer, GCompareFunc);
CheckInterfacedef(g_list_insert_sorted,g_list_insert_sorted_db);
extern GLogFunc g_log_set_default_handler_db(GLogFunc, gpointer);
CheckInterfacedef(g_log_set_default_handler,g_log_set_default_handler_db);
extern gsize g_date_strftime_db(gchar *, gsize, const gchar *, const GDate *);
CheckInterfacedef(g_date_strftime,g_date_strftime_db);
extern gboolean g_option_context_get_ignore_unknown_options_db(GOptionContext *);
CheckInterfacedef(g_option_context_get_ignore_unknown_options,g_option_context_get_ignore_unknown_options_db);
extern gpointer g_static_private_get_db(GStaticPrivate *);
CheckInterfacedef(g_static_private_get,g_static_private_get_db);
extern void g_completion_add_items_db(GCompletion *, GList *);
CheckInterfacedef(g_completion_add_items,g_completion_add_items_db);
extern gchar * g_stpcpy_db(gchar *, const gchar *);
CheckInterfacedef(g_stpcpy,g_stpcpy_db);
extern gchar * g_utf8_find_prev_char_db(const char *, const char *);
CheckInterfacedef(g_utf8_find_prev_char,g_utf8_find_prev_char_db);
extern GOptionContext * g_option_context_new_db(const gchar *);
CheckInterfacedef(g_option_context_new,g_option_context_new_db);
extern gchar * g_locale_to_utf8_db(const gchar *, gssize, gsize *, gsize *, GError * *);
CheckInterfacedef(g_locale_to_utf8,g_locale_to_utf8_db);
extern gint g_ascii_strncasecmp_db(const gchar *, const gchar *, gsize);
CheckInterfacedef(g_ascii_strncasecmp,g_ascii_strncasecmp_db);
extern void g_slist_push_allocator_db(GAllocator *);
CheckInterfacedef(g_slist_push_allocator,g_slist_push_allocator_db);
extern gboolean g_main_context_acquire_db(GMainContext *);
CheckInterfacedef(g_main_context_acquire,g_main_context_acquire_db);
extern guint g_thread_pool_get_num_unused_threads_db(void);
CheckInterfacedef(g_thread_pool_get_num_unused_threads,g_thread_pool_get_num_unused_threads_db);
extern void g_thread_pool_free_db(GThreadPool *, gboolean, gboolean);
CheckInterfacedef(g_thread_pool_free,g_thread_pool_free_db);
extern guint g_date_get_sunday_week_of_year_db(const GDate *);
CheckInterfacedef(g_date_get_sunday_week_of_year,g_date_get_sunday_week_of_year_db);
extern gdouble g_rand_double_db(GRand *);
CheckInterfacedef(g_rand_double,g_rand_double_db);
extern gint g_ascii_strcasecmp_db(const gchar *, const gchar *);
CheckInterfacedef(g_ascii_strcasecmp,g_ascii_strcasecmp_db);
extern void g_string_printf_db(GString *, const gchar *, ...);
CheckInterfacedef(g_string_printf,g_string_printf_db);
extern GQuark g_quark_from_string_db(const gchar *);
CheckInterfacedef(g_quark_from_string,g_quark_from_string_db);
extern void g_hash_table_replace_db(GHashTable *, gpointer, gpointer);
CheckInterfacedef(g_hash_table_replace,g_hash_table_replace_db);
extern const gchar * g_strip_context_db(const gchar *, const gchar *);
CheckInterfacedef(g_strip_context,g_strip_context_db);
extern const gchar * g_strerror_db(gint);
CheckInterfacedef(g_strerror,g_strerror_db);
extern void g_mem_chunk_clean_db(GMemChunk *);
CheckInterfacedef(g_mem_chunk_clean,g_mem_chunk_clean_db);
extern GString * g_string_prepend_len_db(GString *, const gchar *, gssize);
CheckInterfacedef(g_string_prepend_len,g_string_prepend_len_db);
extern GArray * g_array_remove_range_db(GArray *, guint, guint);
CheckInterfacedef(g_array_remove_range,g_array_remove_range_db);
extern void g_queue_remove_all_db(GQueue *, gconstpointer);
CheckInterfacedef(g_queue_remove_all,g_queue_remove_all_db);
extern gint g_file_open_tmp_db(const gchar *, gchar * *, GError * *);
CheckInterfacedef(g_file_open_tmp,g_file_open_tmp_db);
extern const gchar * g_get_user_name_db(void);
CheckInterfacedef(g_get_user_name,g_get_user_name_db);
extern void g_timer_continue_db(GTimer *);
CheckInterfacedef(g_timer_continue,g_timer_continue_db);
extern void g_main_context_set_poll_func_db(GMainContext *, GPollFunc);
CheckInterfacedef(g_main_context_set_poll_func,g_main_context_set_poll_func_db);
extern void g_timer_destroy_db(GTimer *);
CheckInterfacedef(g_timer_destroy,g_timer_destroy_db);
extern void g_main_context_add_poll_db(GMainContext *, GPollFD *, gint);
CheckInterfacedef(g_main_context_add_poll,g_main_context_add_poll_db);
extern GSList * g_slist_alloc_db(void);
CheckInterfacedef(g_slist_alloc,g_slist_alloc_db);
extern GSList * g_slist_reverse_db(GSList *);
CheckInterfacedef(g_slist_reverse,g_slist_reverse_db);
extern GList * g_list_concat_db(GList *, GList *);
CheckInterfacedef(g_list_concat,g_list_concat_db);
extern gunichar g_utf8_get_char_db(const gchar *);
CheckInterfacedef(g_utf8_get_char,g_utf8_get_char_db);
extern gchar * g_shell_quote_db(const gchar *);
CheckInterfacedef(g_shell_quote,g_shell_quote_db);
extern void g_get_current_time_db(GTimeVal *);
CheckInterfacedef(g_get_current_time,g_get_current_time_db);
extern void g_option_group_set_translate_func_db(GOptionGroup *, GTranslateFunc, gpointer, GDestroyNotify);
CheckInterfacedef(g_option_group_set_translate_func,g_option_group_set_translate_func_db);
extern gunichar g_unichar_totitle_db(gunichar);
CheckInterfacedef(g_unichar_totitle,g_unichar_totitle_db);
extern gboolean g_spawn_async_db(const gchar *, gchar * *, gchar * *, GSpawnFlags, GSpawnChildSetupFunc, gpointer, GPid *, GError * *);
CheckInterfacedef(g_spawn_async,g_spawn_async_db);
extern gchar * g_utf16_to_utf8_db(const gunichar2 *, glong, glong *, glong *, GError * *);
CheckInterfacedef(g_utf16_to_utf8,g_utf16_to_utf8_db);
extern void g_queue_insert_before_db(GQueue *, GList *, gpointer);
CheckInterfacedef(g_queue_insert_before,g_queue_insert_before_db);
extern GSource * g_main_context_find_source_by_id_db(GMainContext *, guint);
CheckInterfacedef(g_main_context_find_source_by_id,g_main_context_find_source_by_id_db);
extern void g_mem_chunk_destroy_db(GMemChunk *);
CheckInterfacedef(g_mem_chunk_destroy,g_mem_chunk_destroy_db);
extern void g_thread_exit_db(gpointer);
CheckInterfacedef(g_thread_exit,g_thread_exit_db);
extern void g_option_group_set_parse_hooks_db(GOptionGroup *, GOptionParseFunc, GOptionParseFunc);
CheckInterfacedef(g_option_group_set_parse_hooks,g_option_group_set_parse_hooks_db);
extern GSList * g_slist_insert_sorted_db(GSList *, gpointer, GCompareFunc);
CheckInterfacedef(g_slist_insert_sorted,g_slist_insert_sorted_db);
extern void g_source_set_callback_indirect_db(GSource *, gpointer, GSourceCallbackFuncs *);
CheckInterfacedef(g_source_set_callback_indirect,g_source_set_callback_indirect_db);
extern GSList * g_slist_sort_with_data_db(GSList *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_slist_sort_with_data,g_slist_sort_with_data_db);
extern void g_node_reverse_children_db(GNode *);
CheckInterfacedef(g_node_reverse_children,g_node_reverse_children_db);
extern gpointer g_queue_peek_nth_db(GQueue *, guint);
CheckInterfacedef(g_queue_peek_nth,g_queue_peek_nth_db);
extern void g_list_free_db(GList *);
CheckInterfacedef(g_list_free,g_list_free_db);
extern GList * g_list_nth_prev_db(GList *, guint);
CheckInterfacedef(g_list_nth_prev,g_list_nth_prev_db);
extern void g_strfreev_db(gchar * *);
CheckInterfacedef(g_strfreev,g_strfreev_db);
extern gboolean g_ptr_array_remove_db(GPtrArray *, gpointer);
CheckInterfacedef(g_ptr_array_remove,g_ptr_array_remove_db);
extern glong g_utf8_pointer_to_offset_db(const gchar *, const gchar *);
CheckInterfacedef(g_utf8_pointer_to_offset,g_utf8_pointer_to_offset_db);
extern gpointer g_tree_lookup_db(GTree *, gconstpointer);
CheckInterfacedef(g_tree_lookup,g_tree_lookup_db);
extern gchar * g_strdup_printf_db(const gchar *, ...);
CheckInterfacedef(g_strdup_printf,g_strdup_printf_db);
extern gboolean g_source_remove_by_user_data_db(gpointer);
CheckInterfacedef(g_source_remove_by_user_data,g_source_remove_by_user_data_db);
extern gunichar2 * g_utf8_to_utf16_db(const gchar *, glong, glong *, glong *, GError * *);
CheckInterfacedef(g_utf8_to_utf16,g_utf8_to_utf16_db);
extern gunichar * g_utf8_to_ucs4_db(const gchar *, glong, glong *, glong *, GError * *);
CheckInterfacedef(g_utf8_to_ucs4,g_utf8_to_ucs4_db);
extern void g_date_set_day_db(GDate *, GDateDay);
CheckInterfacedef(g_date_set_day,g_date_set_day_db);
extern gsize g_io_channel_get_buffer_size_db(GIOChannel *);
CheckInterfacedef(g_io_channel_get_buffer_size,g_io_channel_get_buffer_size_db);
extern void g_hash_table_insert_db(GHashTable *, gpointer, gpointer);
CheckInterfacedef(g_hash_table_insert,g_hash_table_insert_db);
extern guint g_spaced_primes_closest_db(guint);
CheckInterfacedef(g_spaced_primes_closest,g_spaced_primes_closest_db);
extern void g_option_group_add_entries_db(GOptionGroup *, const GOptionEntry *);
CheckInterfacedef(g_option_group_add_entries,g_option_group_add_entries_db);
extern gboolean g_key_file_load_from_file_db(GKeyFile *, const gchar *, GKeyFileFlags, GError * *);
CheckInterfacedef(g_key_file_load_from_file,g_key_file_load_from_file_db);
extern gint32 g_random_int_range_db(gint32, gint32);
CheckInterfacedef(g_random_int_range,g_random_int_range_db);
extern gpointer g_hash_table_lookup_db(GHashTable *, gconstpointer);
CheckInterfacedef(g_hash_table_lookup,g_hash_table_lookup_db);
extern void g_relation_index_db(GRelation *, gint, GHashFunc, GEqualFunc);
CheckInterfacedef(g_relation_index,g_relation_index_db);
extern GByteArray * g_byte_array_remove_range_db(GByteArray *, guint, guint);
CheckInterfacedef(g_byte_array_remove_range,g_byte_array_remove_range_db);
extern gchar * g_filename_from_utf8_db(const gchar *, gssize, gsize *, gsize *, GError * *);
CheckInterfacedef(g_filename_from_utf8,g_filename_from_utf8_db);
extern GQuark g_thread_error_quark_db(void);
CheckInterfacedef(g_thread_error_quark,g_thread_error_quark_db);
extern void g_hook_destroy_link_db(GHookList *, GHook *);
CheckInterfacedef(g_hook_destroy_link,g_hook_destroy_link_db);
extern gdouble g_random_double_range_db(gdouble, gdouble);
CheckInterfacedef(g_random_double_range,g_random_double_range_db);
extern gchar * g_filename_from_uri_db(const gchar *, gchar * *, GError * *);
CheckInterfacedef(g_filename_from_uri,g_filename_from_uri_db);
extern gboolean g_tree_lookup_extended_db(GTree *, gconstpointer, gpointer *, gpointer *);
CheckInterfacedef(g_tree_lookup_extended,g_tree_lookup_extended_db);
extern gboolean g_unichar_iswide_db(gunichar);
CheckInterfacedef(g_unichar_iswide,g_unichar_iswide_db);
extern gboolean g_unichar_isxdigit_db(gunichar);
CheckInterfacedef(g_unichar_isxdigit,g_unichar_isxdigit_db);
extern void g_queue_push_tail_link_db(GQueue *, GList *);
CheckInterfacedef(g_queue_push_tail_link,g_queue_push_tail_link_db);
extern void g_spawn_close_pid_db(GPid);
CheckInterfacedef(g_spawn_close_pid,g_spawn_close_pid_db);
extern GRand * g_rand_new_db(void);
CheckInterfacedef(g_rand_new,g_rand_new_db);
extern void g_date_set_julian_db(GDate *, guint32);
CheckInterfacedef(g_date_set_julian,g_date_set_julian_db);
extern GNode * g_node_insert_after_db(GNode *, GNode *, GNode *);
CheckInterfacedef(g_node_insert_after,g_node_insert_after_db);
extern void g_static_rec_mutex_lock_full_db(GStaticRecMutex *, guint);
CheckInterfacedef(g_static_rec_mutex_lock_full,g_static_rec_mutex_lock_full_db);
extern GString * g_string_append_unichar_db(GString *, gunichar);
CheckInterfacedef(g_string_append_unichar,g_string_append_unichar_db);
extern GStringChunk * g_string_chunk_new_db(gsize);
CheckInterfacedef(g_string_chunk_new,g_string_chunk_new_db);
extern void g_atexit_db(GVoidFunc);
CheckInterfacedef(g_atexit,g_atexit_db);
extern void g_scanner_scope_remove_symbol_db(GScanner *, guint, const gchar *);
CheckInterfacedef(g_scanner_scope_remove_symbol,g_scanner_scope_remove_symbol_db);
extern void g_main_context_remove_poll_db(GMainContext *, GPollFD *);
CheckInterfacedef(g_main_context_remove_poll,g_main_context_remove_poll_db);
extern gchar * g_locale_from_utf8_db(const gchar *, gssize, gsize *, gsize *, GError * *);
CheckInterfacedef(g_locale_from_utf8,g_locale_from_utf8_db);
extern GMainContext * g_source_get_context_db(GSource *);
CheckInterfacedef(g_source_get_context,g_source_get_context_db);
extern gint g_thread_pool_get_max_unused_threads_db(void);
CheckInterfacedef(g_thread_pool_get_max_unused_threads,g_thread_pool_get_max_unused_threads_db);
extern gboolean g_unichar_isspace_db(gunichar);
CheckInterfacedef(g_unichar_isspace,g_unichar_isspace_db);
extern GList * g_list_alloc_db(void);
CheckInterfacedef(g_list_alloc,g_list_alloc_db);
extern gpointer g_queue_pop_tail_db(GQueue *);
CheckInterfacedef(g_queue_pop_tail,g_queue_pop_tail_db);
extern gpointer g_thread_join_db(GThread *);
CheckInterfacedef(g_thread_join,g_thread_join_db);
extern GSList * g_slist_append_db(GSList *, gpointer);
CheckInterfacedef(g_slist_append,g_slist_append_db);
extern GNode * g_node_copy_db(GNode *);
CheckInterfacedef(g_node_copy,g_node_copy_db);
extern void g_time_val_add_db(GTimeVal *, glong);
CheckInterfacedef(g_time_val_add,g_time_val_add_db);
extern gboolean g_pattern_match_db(GPatternSpec *, guint, const gchar *, const gchar *);
CheckInterfacedef(g_pattern_match,g_pattern_match_db);
extern void g_source_remove_poll_db(GSource *, GPollFD *);
CheckInterfacedef(g_source_remove_poll,g_source_remove_poll_db);
extern gsize g_printf_string_upper_bound_db(const gchar *, va_list);
CheckInterfacedef(g_printf_string_upper_bound,g_printf_string_upper_bound_db);
extern GCompletion * g_completion_new_db(GCompletionFunc);
CheckInterfacedef(g_completion_new,g_completion_new_db);
extern gboolean g_date_is_last_of_month_db(const GDate *);
CheckInterfacedef(g_date_is_last_of_month,g_date_is_last_of_month_db);
extern GHook * g_hook_find_db(GHookList *, gboolean, GHookFindFunc, gpointer);
CheckInterfacedef(g_hook_find,g_hook_find_db);
extern gboolean g_static_rec_mutex_trylock_db(GStaticRecMutex *);
CheckInterfacedef(g_static_rec_mutex_trylock,g_static_rec_mutex_trylock_db);
extern GError * g_error_new_literal_db(GQuark, gint, const gchar *);
CheckInterfacedef(g_error_new_literal,g_error_new_literal_db);
extern void g_date_set_dmy_db(GDate *, GDateDay, GDateMonth, GDateYear);
CheckInterfacedef(g_date_set_dmy,g_date_set_dmy_db);
extern guint g_node_max_height_db(GNode *);
CheckInterfacedef(g_node_max_height,g_node_max_height_db);
extern gboolean g_unichar_isgraph_db(gunichar);
CheckInterfacedef(g_unichar_isgraph,g_unichar_isgraph_db);
extern gint g_list_position_db(GList *, GList *);
CheckInterfacedef(g_list_position,g_list_position_db);
extern gboolean g_pattern_match_simple_db(const gchar *, const gchar *);
CheckInterfacedef(g_pattern_match_simple,g_pattern_match_simple_db);
extern const gchar * g_get_real_name_db(void);
CheckInterfacedef(g_get_real_name,g_get_real_name_db);
extern void g_string_append_printf_db(GString *, const gchar *, ...);
CheckInterfacedef(g_string_append_printf,g_string_append_printf_db);
extern void g_static_private_init_db(GStaticPrivate *);
CheckInterfacedef(g_static_private_init,g_static_private_init_db);
extern gunichar * g_utf16_to_ucs4_db(const gunichar2 *, glong, glong *, glong *, GError * *);
CheckInterfacedef(g_utf16_to_ucs4,g_utf16_to_ucs4_db);
extern void g_rand_free_db(GRand *);
CheckInterfacedef(g_rand_free,g_rand_free_db);
extern GList * g_queue_peek_tail_link_db(GQueue *);
CheckInterfacedef(g_queue_peek_tail_link,g_queue_peek_tail_link_db);
extern gchar * g_convert_with_fallback_db(const gchar *, gssize, const gchar *, const gchar *, gchar *, gsize *, gsize *, GError * *);
CheckInterfacedef(g_convert_with_fallback,g_convert_with_fallback_db);
extern GSource * g_timeout_source_new_db(guint);
CheckInterfacedef(g_timeout_source_new,g_timeout_source_new_db);
extern guint g_child_watch_add_full_db(gint, GPid, GChildWatchFunc, gpointer, GDestroyNotify);
CheckInterfacedef(g_child_watch_add_full,g_child_watch_add_full_db);
extern void g_node_push_allocator_db(GAllocator *);
CheckInterfacedef(g_node_push_allocator,g_node_push_allocator_db);
extern void g_queue_foreach_db(GQueue *, GFunc, gpointer);
CheckInterfacedef(g_queue_foreach,g_queue_foreach_db);
extern gchar * g_strdup_db(const gchar *);
CheckInterfacedef(g_strdup,g_strdup_db);
extern gint g_queue_index_db(GQueue *, gconstpointer);
CheckInterfacedef(g_queue_index,g_queue_index_db);
extern gpointer g_datalist_id_remove_no_notify_db(GData * *, GQuark);
CheckInterfacedef(g_datalist_id_remove_no_notify,g_datalist_id_remove_no_notify_db);
extern guint8 * g_byte_array_free_db(GByteArray *, gboolean);
CheckInterfacedef(g_byte_array_free,g_byte_array_free_db);
extern void g_date_clamp_db(GDate *, const GDate *, const GDate *);
CheckInterfacedef(g_date_clamp,g_date_clamp_db);
extern void g_list_push_allocator_db(GAllocator *);
CheckInterfacedef(g_list_push_allocator,g_list_push_allocator_db);
extern void g_queue_insert_after_db(GQueue *, GList *, gpointer);
CheckInterfacedef(g_queue_insert_after,g_queue_insert_after_db);
extern gpointer g_try_malloc_db(gulong);
CheckInterfacedef(g_try_malloc,g_try_malloc_db);
extern GIOFlags g_io_channel_get_flags_db(GIOChannel *);
CheckInterfacedef(g_io_channel_get_flags,g_io_channel_get_flags_db);
extern gchar * g_filename_display_basename_db(const gchar *);
CheckInterfacedef(g_filename_display_basename,g_filename_display_basename_db);
extern GList * g_list_append_db(GList *, gpointer);
CheckInterfacedef(g_list_append,g_list_append_db);
extern gchar * g_utf8_strncpy_db(gchar *, const gchar *, gsize);
CheckInterfacedef(g_utf8_strncpy,g_utf8_strncpy_db);
extern gchar * * g_key_file_get_string_list_db(GKeyFile *, const gchar *, const gchar *, gsize *, GError * *);
CheckInterfacedef(g_key_file_get_string_list,g_key_file_get_string_list_db);
extern guint g_log_set_handler_db(const gchar *, GLogLevelFlags, GLogFunc, gpointer);
CheckInterfacedef(g_log_set_handler,g_log_set_handler_db);
extern gboolean g_queue_is_empty_db(GQueue *);
CheckInterfacedef(g_queue_is_empty,g_queue_is_empty_db);
extern GList * g_queue_peek_nth_link_db(GQueue *, guint);
CheckInterfacedef(g_queue_peek_nth_link,g_queue_peek_nth_link_db);
extern void g_list_foreach_db(GList *, GFunc, gpointer);
CheckInterfacedef(g_list_foreach,g_list_foreach_db);
extern gint g_ascii_xdigit_value_db(gchar);
CheckInterfacedef(g_ascii_xdigit_value,g_ascii_xdigit_value_db);
extern GQuark g_shell_error_quark_db(void);
CheckInterfacedef(g_shell_error_quark,g_shell_error_quark_db);
extern gpointer g_ptr_array_remove_index_db(GPtrArray *, guint);
CheckInterfacedef(g_ptr_array_remove_index,g_ptr_array_remove_index_db);
extern GList * g_list_insert_db(GList *, gpointer, gint);
CheckInterfacedef(g_list_insert,g_list_insert_db);
extern void g_log_db(const gchar *, GLogLevelFlags, const gchar *, ...);
CheckInterfacedef(g_log,g_log_db);
extern gchar * g_utf8_strrchr_db(const char *, gssize, gunichar);
CheckInterfacedef(g_utf8_strrchr,g_utf8_strrchr_db);
extern guint g_string_hash_db(const GString *);
CheckInterfacedef(g_string_hash,g_string_hash_db);
extern gchar * * g_key_file_get_locale_string_list_db(GKeyFile *, const gchar *, const gchar *, const gchar *, gsize *, GError * *);
CheckInterfacedef(g_key_file_get_locale_string_list,g_key_file_get_locale_string_list_db);
extern void g_queue_insert_sorted_db(GQueue *, gpointer, GCompareDataFunc, gpointer);
CheckInterfacedef(g_queue_insert_sorted,g_queue_insert_sorted_db);
extern void g_hook_free_db(GHookList *, GHook *);
CheckInterfacedef(g_hook_free,g_hook_free_db);
extern gpointer g_tree_search_db(GTree *, GCompareFunc, gconstpointer);
CheckInterfacedef(g_tree_search,g_tree_search_db);
extern void g_scanner_scope_foreach_symbol_db(GScanner *, guint, GHFunc, gpointer);
CheckInterfacedef(g_scanner_scope_foreach_symbol,g_scanner_scope_foreach_symbol_db);
extern GDir * g_dir_open_db(const gchar *, guint, GError * *);
CheckInterfacedef(g_dir_open,g_dir_open_db);
extern gchar * g_utf8_casefold_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_casefold,g_utf8_casefold_db);
extern void g_rand_set_seed_array_db(GRand *, const guint32 *, guint);
CheckInterfacedef(g_rand_set_seed_array,g_rand_set_seed_array_db);
extern void g_date_to_struct_tm_db(const GDate *, struct tm *);
CheckInterfacedef(g_date_to_struct_tm,g_date_to_struct_tm_db);
extern gboolean g_key_file_has_group_db(GKeyFile *, const gchar *);
CheckInterfacedef(g_key_file_has_group,g_key_file_has_group_db);
extern GList * g_list_remove_link_db(GList *, GList *);
CheckInterfacedef(g_list_remove_link,g_list_remove_link_db);
extern gboolean g_date_valid_month_db(GDateMonth);
CheckInterfacedef(g_date_valid_month,g_date_valid_month_db);
extern gboolean g_spawn_command_line_sync_db(const gchar *, gchar * *, gchar * *, gint *, GError * *);
CheckInterfacedef(g_spawn_command_line_sync,g_spawn_command_line_sync_db);
extern gpointer g_slist_nth_data_db(GSList *, guint);
CheckInterfacedef(g_slist_nth_data,g_slist_nth_data_db);
extern gchar * g_convert_db(const gchar *, gssize, const gchar *, const gchar *, gsize *, gsize *, GError * *);
CheckInterfacedef(g_convert,g_convert_db);
extern void g_io_channel_unref_db(GIOChannel *);
CheckInterfacedef(g_io_channel_unref,g_io_channel_unref_db);
extern void g_markup_parse_context_get_position_db(GMarkupParseContext *, gint *, gint *);
CheckInterfacedef(g_markup_parse_context_get_position,g_markup_parse_context_get_position_db);
extern void g_datalist_foreach_db(GData * *, GDataForeachFunc, gpointer);
CheckInterfacedef(g_datalist_foreach,g_datalist_foreach_db);
extern void g_tuples_destroy_db(GTuples *);
CheckInterfacedef(g_tuples_destroy,g_tuples_destroy_db);
extern guint g_strv_length_db(gchar * *);
CheckInterfacedef(g_strv_length,g_strv_length_db);
extern gunichar g_unichar_toupper_db(gunichar);
CheckInterfacedef(g_unichar_toupper,g_unichar_toupper_db);
extern void g_tree_insert_db(GTree *, gpointer, gpointer);
CheckInterfacedef(g_tree_insert,g_tree_insert_db);
extern GNode * g_node_copy_deep_db(GNode *, GCopyFunc, gpointer);
CheckInterfacedef(g_node_copy_deep,g_node_copy_deep_db);
extern gint g_node_child_position_db(GNode *, GNode *);
CheckInterfacedef(g_node_child_position,g_node_child_position_db);
extern void g_list_pop_allocator_db(void);
CheckInterfacedef(g_list_pop_allocator,g_list_pop_allocator_db);
extern gboolean g_mem_is_system_malloc_db(void);
CheckInterfacedef(g_mem_is_system_malloc,g_mem_is_system_malloc_db);
extern const gchar * g_get_home_dir_db(void);
CheckInterfacedef(g_get_home_dir,g_get_home_dir_db);
extern void g_async_queue_push_db(GAsyncQueue *, gpointer);
CheckInterfacedef(g_async_queue_push,g_async_queue_push_db);
extern gboolean g_key_file_has_key_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_has_key,g_key_file_has_key_db);
extern gboolean g_file_get_contents_db(const gchar *, gchar * *, gsize *, GError * *);
CheckInterfacedef(g_file_get_contents,g_file_get_contents_db);
extern gboolean g_path_is_absolute_db(const gchar *);
CheckInterfacedef(g_path_is_absolute,g_path_is_absolute_db);
extern void g_printerr_db(const gchar *, ...);
CheckInterfacedef(g_printerr,g_printerr_db);
extern void g_completion_set_compare_db(GCompletion *, GCompletionStrncmpFunc);
CheckInterfacedef(g_completion_set_compare,g_completion_set_compare_db);
extern guint g_timeout_add_db(guint32, GSourceFunc, gpointer);
CheckInterfacedef(g_timeout_add,g_timeout_add_db);
extern void g_slist_foreach_db(GSList *, GFunc, gpointer);
CheckInterfacedef(g_slist_foreach,g_slist_foreach_db);
extern GArray * g_array_insert_vals_db(GArray *, guint, gconstpointer, guint);
CheckInterfacedef(g_array_insert_vals,g_array_insert_vals_db);
extern gchar * g_utf8_collate_key_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_collate_key,g_utf8_collate_key_db);
extern void g_static_rw_lock_reader_lock_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_reader_lock,g_static_rw_lock_reader_lock_db);
extern void g_mem_chunk_info_db(void);
CheckInterfacedef(g_mem_chunk_info,g_mem_chunk_info_db);
extern gchar * g_utf8_strreverse_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_strreverse,g_utf8_strreverse_db);
extern GByteArray * g_byte_array_new_db(void);
CheckInterfacedef(g_byte_array_new,g_byte_array_new_db);
extern gboolean g_setenv_db(const gchar *, const gchar *, gboolean);
CheckInterfacedef(g_setenv,g_setenv_db);
extern gchar * g_get_current_dir_db(void);
CheckInterfacedef(g_get_current_dir,g_get_current_dir_db);
extern GTree * g_tree_new_db(GCompareFunc);
CheckInterfacedef(g_tree_new,g_tree_new_db);
extern gboolean g_unichar_isalpha_db(gunichar);
CheckInterfacedef(g_unichar_isalpha,g_unichar_isalpha_db);
extern gsize g_strlcat_db(gchar *, const gchar *, gsize);
CheckInterfacedef(g_strlcat,g_strlcat_db);
extern gboolean g_main_context_iteration_db(GMainContext *, gboolean);
CheckInterfacedef(g_main_context_iteration,g_main_context_iteration_db);
extern GHook * g_hook_ref_db(GHookList *, GHook *);
CheckInterfacedef(g_hook_ref,g_hook_ref_db);
extern GNode * g_node_find_child_db(GNode *, GTraverseFlags, gpointer);
CheckInterfacedef(g_node_find_child,g_node_find_child_db);
extern void g_option_group_set_error_hook_db(GOptionGroup *, GOptionErrorFunc);
CheckInterfacedef(g_option_group_set_error_hook,g_option_group_set_error_hook_db);
extern gint g_bit_nth_lsf_db(gulong, gint);
CheckInterfacedef(g_bit_nth_lsf,g_bit_nth_lsf_db);
extern gpointer g_async_queue_try_pop_unlocked_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_try_pop_unlocked,g_async_queue_try_pop_unlocked_db);
extern GCache * g_cache_new_db(GCacheNewFunc, GCacheDestroyFunc, GCacheDupFunc, GCacheDestroyFunc, GHashFunc, GHashFunc, GEqualFunc);
CheckInterfacedef(g_cache_new,g_cache_new_db);
extern void g_print_db(const gchar *, ...);
CheckInterfacedef(g_print,g_print_db);
extern gint g_unichar_xdigit_value_db(gunichar);
CheckInterfacedef(g_unichar_xdigit_value,g_unichar_xdigit_value_db);
extern GTimer * g_timer_new_db(void);
CheckInterfacedef(g_timer_new,g_timer_new_db);
extern gchar * g_string_chunk_insert_db(GStringChunk *, const gchar *);
CheckInterfacedef(g_string_chunk_insert,g_string_chunk_insert_db);
extern gchar * g_file_read_link_db(const gchar *, GError * *);
CheckInterfacedef(g_file_read_link,g_file_read_link_db);
extern void g_assert_warning_db(const char *, const char *, const int, const char *, const char *);
CheckInterfacedef(g_assert_warning,g_assert_warning_db);
extern guint g_str_hash_db(gconstpointer);
CheckInterfacedef(g_str_hash,g_str_hash_db);
extern void g_key_file_set_locale_string_list_db(GKeyFile *, const gchar *, const gchar *, const gchar *, const gchar *const  *, gsize);
CheckInterfacedef(g_key_file_set_locale_string_list,g_key_file_set_locale_string_list_db);
extern GString * g_string_sized_new_db(gsize);
CheckInterfacedef(g_string_sized_new,g_string_sized_new_db);
extern void g_hash_table_destroy_db(GHashTable *);
CheckInterfacedef(g_hash_table_destroy,g_hash_table_destroy_db);
extern void g_static_mutex_free_db(GStaticMutex *);
CheckInterfacedef(g_static_mutex_free,g_static_mutex_free_db);
extern gchar * g_ascii_strup_db(const gchar *, gssize);
CheckInterfacedef(g_ascii_strup,g_ascii_strup_db);
extern gchar g_ascii_toupper_db(gchar);
CheckInterfacedef(g_ascii_toupper,g_ascii_toupper_db);
extern guint g_date_get_iso8601_week_of_year_db(const GDate *);
CheckInterfacedef(g_date_get_iso8601_week_of_year,g_date_get_iso8601_week_of_year_db);
extern void g_slist_free_db(GSList *);
CheckInterfacedef(g_slist_free,g_slist_free_db);
extern gboolean g_string_equal_db(const GString *, const GString *);
CheckInterfacedef(g_string_equal,g_string_equal_db);
extern guint g_scanner_cur_line_db(GScanner *);
CheckInterfacedef(g_scanner_cur_line,g_scanner_cur_line_db);
extern gint g_date_compare_db(const GDate *, const GDate *);
CheckInterfacedef(g_date_compare,g_date_compare_db);
extern GString * g_string_insert_len_db(GString *, gssize, const gchar *, gssize);
CheckInterfacedef(g_string_insert_len,g_string_insert_len_db);
extern gchar * g_strdelimit_db(gchar *, const gchar *, gchar);
CheckInterfacedef(g_strdelimit,g_strdelimit_db);
extern guint g_node_n_children_db(GNode *);
CheckInterfacedef(g_node_n_children,g_node_n_children_db);
extern GNode * g_node_last_sibling_db(GNode *);
CheckInterfacedef(g_node_last_sibling,g_node_last_sibling_db);
extern const gchar *const  * g_get_language_names_db(void);
CheckInterfacedef(g_get_language_names,g_get_language_names_db);
extern GHook * g_hook_alloc_db(GHookList *);
CheckInterfacedef(g_hook_alloc,g_hook_alloc_db);
extern GDateMonth g_date_get_month_db(const GDate *);
CheckInterfacedef(g_date_get_month,g_date_get_month_db);
extern gboolean g_date_is_leap_year_db(GDateYear);
CheckInterfacedef(g_date_is_leap_year,g_date_is_leap_year_db);
extern gpointer g_queue_pop_nth_db(GQueue *, guint);
CheckInterfacedef(g_queue_pop_nth,g_queue_pop_nth_db);
extern gchar * g_strreverse_db(gchar *);
CheckInterfacedef(g_strreverse,g_strreverse_db);
extern guint g_hash_table_size_db(GHashTable *);
CheckInterfacedef(g_hash_table_size,g_hash_table_size_db);
extern gpointer g_mem_chunk_alloc_db(GMemChunk *);
CheckInterfacedef(g_mem_chunk_alloc,g_mem_chunk_alloc_db);
extern GList * g_queue_peek_head_link_db(GQueue *);
CheckInterfacedef(g_queue_peek_head_link,g_queue_peek_head_link_db);
extern GList * g_queue_find_db(GQueue *, gconstpointer);
CheckInterfacedef(g_queue_find,g_queue_find_db);
extern void g_dataset_id_set_data_full_db(gconstpointer, GQuark, gpointer, GDestroyNotify);
CheckInterfacedef(g_dataset_id_set_data_full,g_dataset_id_set_data_full_db);
extern void g_unsetenv_db(const gchar *);
CheckInterfacedef(g_unsetenv,g_unsetenv_db);
extern guint64 g_ascii_strtoull_db(const gchar *, gchar * *, guint);
CheckInterfacedef(g_ascii_strtoull,g_ascii_strtoull_db);
extern gboolean g_spawn_command_line_async_db(const gchar *, GError * *);
CheckInterfacedef(g_spawn_command_line_async,g_spawn_command_line_async_db);
extern GHook * g_hook_find_func_db(GHookList *, gboolean, gpointer);
CheckInterfacedef(g_hook_find_func,g_hook_find_func_db);
extern gchar * g_array_free_db(GArray *, gboolean);
CheckInterfacedef(g_array_free,g_array_free_db);
extern gpointer g_malloc0_db(gulong);
CheckInterfacedef(g_malloc0,g_malloc0_db);
extern gint g_node_child_index_db(GNode *, gpointer);
CheckInterfacedef(g_node_child_index,g_node_child_index_db);
extern GIOStatus g_io_channel_shutdown_db(GIOChannel *, gboolean, GError * *);
CheckInterfacedef(g_io_channel_shutdown,g_io_channel_shutdown_db);
extern GQuark g_quark_try_string_db(const gchar *);
CheckInterfacedef(g_quark_try_string,g_quark_try_string_db);
extern GIOStatus g_io_channel_set_encoding_db(GIOChannel *, const gchar *, GError * *);
CheckInterfacedef(g_io_channel_set_encoding,g_io_channel_set_encoding_db);
extern gboolean g_scanner_eof_db(GScanner *);
CheckInterfacedef(g_scanner_eof,g_scanner_eof_db);
extern void g_cache_destroy_db(GCache *);
CheckInterfacedef(g_cache_destroy,g_cache_destroy_db);
extern gboolean g_spawn_sync_db(const gchar *, gchar * *, gchar * *, GSpawnFlags, GSpawnChildSetupFunc, gpointer, gchar * *, gchar * *, gint *, GError * *);
CheckInterfacedef(g_spawn_sync,g_spawn_sync_db);
extern gboolean g_static_rw_lock_reader_trylock_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_reader_trylock,g_static_rw_lock_reader_trylock_db);
extern void g_byte_array_sort_db(GByteArray *, GCompareFunc);
CheckInterfacedef(g_byte_array_sort,g_byte_array_sort_db);
extern void g_atomic_int_add_db(gint *, gint);
CheckInterfacedef(g_atomic_int_add,g_atomic_int_add_db);
extern gpointer g_async_queue_timed_pop_db(GAsyncQueue *, GTimeVal *);
CheckInterfacedef(g_async_queue_timed_pop,g_async_queue_timed_pop_db);
extern GHook * g_hook_get_db(GHookList *, gulong);
CheckInterfacedef(g_hook_get,g_hook_get_db);
extern void g_option_context_set_help_enabled_db(GOptionContext *, gboolean);
CheckInterfacedef(g_option_context_set_help_enabled,g_option_context_set_help_enabled_db);
extern guint g_static_rec_mutex_unlock_full_db(GStaticRecMutex *);
CheckInterfacedef(g_static_rec_mutex_unlock_full,g_static_rec_mutex_unlock_full_db);
extern gboolean g_hash_table_lookup_extended_db(GHashTable *, gconstpointer, gpointer *, gpointer *);
CheckInterfacedef(g_hash_table_lookup_extended,g_hash_table_lookup_extended_db);
extern void g_date_add_years_db(GDate *, guint);
CheckInterfacedef(g_date_add_years,g_date_add_years_db);
extern void g_static_private_free_db(GStaticPrivate *);
CheckInterfacedef(g_static_private_free,g_static_private_free_db);
extern const gchar * g_quark_to_string_db(GQuark);
CheckInterfacedef(g_quark_to_string,g_quark_to_string_db);
extern GList * g_list_prepend_db(GList *, gpointer);
CheckInterfacedef(g_list_prepend,g_list_prepend_db);
extern gchar * g_utf8_find_next_char_db(const gchar *, const gchar *);
CheckInterfacedef(g_utf8_find_next_char,g_utf8_find_next_char_db);
extern void g_static_rw_lock_writer_lock_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_writer_lock,g_static_rw_lock_writer_lock_db);
extern GIOStatus g_io_channel_read_line_db(GIOChannel *, gchar * *, gsize *, gsize *, GError * *);
CheckInterfacedef(g_io_channel_read_line,g_io_channel_read_line_db);
extern void g_thread_pool_stop_unused_threads_db(void);
CheckInterfacedef(g_thread_pool_stop_unused_threads,g_thread_pool_stop_unused_threads_db);
extern const gchar *const  * g_get_system_data_dirs_db(void);
CheckInterfacedef(g_get_system_data_dirs,g_get_system_data_dirs_db);
extern GLogLevelFlags g_log_set_fatal_mask_db(const gchar *, GLogLevelFlags);
CheckInterfacedef(g_log_set_fatal_mask,g_log_set_fatal_mask_db);
extern GMainContext * g_main_loop_get_context_db(GMainLoop *);
CheckInterfacedef(g_main_loop_get_context,g_main_loop_get_context_db);
extern gpointer g_malloc_db(gulong);
CheckInterfacedef(g_malloc,g_malloc_db);
extern GIOStatus g_io_channel_flush_db(GIOChannel *, GError * *);
CheckInterfacedef(g_io_channel_flush,g_io_channel_flush_db);
extern gboolean g_file_test_db(const gchar *, GFileTest);
CheckInterfacedef(g_file_test,g_file_test_db);
extern void g_key_file_set_integer_db(GKeyFile *, const gchar *, const gchar *, gint);
CheckInterfacedef(g_key_file_set_integer,g_key_file_set_integer_db);
extern void g_date_set_year_db(GDate *, GDateYear);
CheckInterfacedef(g_date_set_year,g_date_set_year_db);
extern gpointer g_once_impl_db(GOnce *, GThreadFunc, gpointer);
CheckInterfacedef(g_once_impl,g_once_impl_db);
extern void g_usleep_db(gulong);
CheckInterfacedef(g_usleep,g_usleep_db);
extern void g_thread_pool_push_db(GThreadPool *, gpointer, GError * *);
CheckInterfacedef(g_thread_pool_push,g_thread_pool_push_db);
extern void g_key_file_remove_comment_db(GKeyFile *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_remove_comment,g_key_file_remove_comment_db);
extern GTuples * g_relation_select_db(GRelation *, gconstpointer, gint);
CheckInterfacedef(g_relation_select,g_relation_select_db);
extern gboolean g_unichar_istitle_db(gunichar);
CheckInterfacedef(g_unichar_istitle,g_unichar_istitle_db);
extern gchar * g_strrstr_db(const gchar *, const gchar *);
CheckInterfacedef(g_strrstr,g_strrstr_db);
extern GQuark g_spawn_error_quark_db(void);
CheckInterfacedef(g_spawn_error_quark,g_spawn_error_quark_db);
extern GTokenType g_scanner_cur_token_db(GScanner *);
CheckInterfacedef(g_scanner_cur_token,g_scanner_cur_token_db);
extern void g_date_free_db(GDate *);
CheckInterfacedef(g_date_free,g_date_free_db);
extern gboolean g_io_channel_get_close_on_unref_db(GIOChannel *);
CheckInterfacedef(g_io_channel_get_close_on_unref,g_io_channel_get_close_on_unref_db);
extern GScanner * g_scanner_new_db(const GScannerConfig *);
CheckInterfacedef(g_scanner_new,g_scanner_new_db);
extern guint g_node_n_nodes_db(GNode *, GTraverseFlags);
CheckInterfacedef(g_node_n_nodes,g_node_n_nodes_db);
extern gint g_tree_height_db(GTree *);
CheckInterfacedef(g_tree_height,g_tree_height_db);
extern gboolean g_str_has_prefix_db(const gchar *, const gchar *);
CheckInterfacedef(g_str_has_prefix,g_str_has_prefix_db);
extern gunichar g_utf8_get_char_validated_db(const gchar *, gssize);
CheckInterfacedef(g_utf8_get_char_validated,g_utf8_get_char_validated_db);
extern void g_scanner_unexp_token_db(GScanner *, GTokenType, const gchar *, const gchar *, const gchar *, const gchar *, gint);
CheckInterfacedef(g_scanner_unexp_token,g_scanner_unexp_token_db);
extern GString * g_string_prepend_c_db(GString *, gchar);
CheckInterfacedef(g_string_prepend_c,g_string_prepend_c_db);
extern void g_relation_destroy_db(GRelation *);
CheckInterfacedef(g_relation_destroy,g_relation_destroy_db);
extern guint g_hash_table_foreach_steal_db(GHashTable *, GHRFunc, gpointer);
CheckInterfacedef(g_hash_table_foreach_steal,g_hash_table_foreach_steal_db);
extern void g_free_db(gpointer);
CheckInterfacedef(g_free,g_free_db);
extern guint g_int_hash_db(gconstpointer);
CheckInterfacedef(g_int_hash,g_int_hash_db);
extern void g_source_get_current_time_db(GSource *, GTimeVal *);
CheckInterfacedef(g_source_get_current_time,g_source_get_current_time_db);
extern GList * g_queue_pop_tail_link_db(GQueue *);
CheckInterfacedef(g_queue_pop_tail_link,g_queue_pop_tail_link_db);
extern GString * g_string_new_db(const gchar *);
CheckInterfacedef(g_string_new,g_string_new_db);
extern void g_key_file_set_boolean_list_db(GKeyFile *, const gchar *, const gchar *, gboolean *, gsize);
CheckInterfacedef(g_key_file_set_boolean_list,g_key_file_set_boolean_list_db);
extern GString * g_string_append_db(GString *, const gchar *);
CheckInterfacedef(g_string_append,g_string_append_db);
extern GByteArray * g_byte_array_append_db(GByteArray *, const guint8 *, guint);
CheckInterfacedef(g_byte_array_append,g_byte_array_append_db);
extern void g_key_file_set_value_db(GKeyFile *, const gchar *, const gchar *, const gchar *);
CheckInterfacedef(g_key_file_set_value,g_key_file_set_value_db);
extern gboolean g_pattern_spec_equal_db(GPatternSpec *, GPatternSpec *);
CheckInterfacedef(g_pattern_spec_equal,g_pattern_spec_equal_db);
extern GMainContext * g_main_context_new_db(void);
CheckInterfacedef(g_main_context_new,g_main_context_new_db);
extern gboolean g_unichar_ispunct_db(gunichar);
CheckInterfacedef(g_unichar_ispunct,g_unichar_ispunct_db);
extern guint8 g_date_get_sunday_weeks_in_year_db(GDateYear);
CheckInterfacedef(g_date_get_sunday_weeks_in_year,g_date_get_sunday_weeks_in_year_db);
extern void g_date_subtract_days_db(GDate *, guint);
CheckInterfacedef(g_date_subtract_days,g_date_subtract_days_db);
extern gboolean g_date_valid_weekday_db(GDateWeekday);
CheckInterfacedef(g_date_valid_weekday,g_date_valid_weekday_db);
extern gchar * * g_strsplit_set_db(const gchar *, const gchar *, gint);
CheckInterfacedef(g_strsplit_set,g_strsplit_set_db);
extern void g_dataset_destroy_db(gconstpointer);
CheckInterfacedef(g_dataset_destroy,g_dataset_destroy_db);
extern gpointer g_async_queue_pop_unlocked_db(GAsyncQueue *);
CheckInterfacedef(g_async_queue_pop_unlocked,g_async_queue_pop_unlocked_db);
extern guint g_scanner_cur_position_db(GScanner *);
CheckInterfacedef(g_scanner_cur_position,g_scanner_cur_position_db);
extern guint g_date_get_day_of_year_db(const GDate *);
CheckInterfacedef(g_date_get_day_of_year,g_date_get_day_of_year_db);
extern GList * g_list_find_custom_db(GList *, gconstpointer, GCompareFunc);
CheckInterfacedef(g_list_find_custom,g_list_find_custom_db);
extern void g_source_unref_db(GSource *);
CheckInterfacedef(g_source_unref,g_source_unref_db);
extern GSList * g_slist_remove_link_db(GSList *, GSList *);
CheckInterfacedef(g_slist_remove_link,g_slist_remove_link_db);
extern GDateDay g_date_get_day_db(const GDate *);
CheckInterfacedef(g_date_get_day,g_date_get_day_db);
extern gboolean g_option_context_parse_db(GOptionContext *, gint *, gchar * * *, GError * *);
CheckInterfacedef(g_option_context_parse,g_option_context_parse_db);
extern void g_tree_foreach_db(GTree *, GTraverseFunc, gpointer);
CheckInterfacedef(g_tree_foreach,g_tree_foreach_db);
extern void g_string_chunk_free_db(GStringChunk *);
CheckInterfacedef(g_string_chunk_free,g_string_chunk_free_db);
extern gchar * g_strjoinv_db(const gchar *, gchar * *);
CheckInterfacedef(g_strjoinv,g_strjoinv_db);
extern GString * g_string_append_c_db(GString *, gchar);
CheckInterfacedef(g_string_append_c,g_string_append_c_db);
extern GString * g_string_truncate_db(GString *, gsize);
CheckInterfacedef(g_string_truncate,g_string_truncate_db);
extern const gchar * g_get_tmp_dir_db(void);
CheckInterfacedef(g_get_tmp_dir,g_get_tmp_dir_db);
extern void g_scanner_input_text_db(GScanner *, const gchar *, guint);
CheckInterfacedef(g_scanner_input_text,g_scanner_input_text_db);
extern gpointer g_list_nth_data_db(GList *, guint);
CheckInterfacedef(g_list_nth_data,g_list_nth_data_db);
extern GNode * g_node_last_child_db(GNode *);
CheckInterfacedef(g_node_last_child,g_node_last_child_db);
extern gboolean g_node_is_ancestor_db(GNode *, GNode *);
CheckInterfacedef(g_node_is_ancestor,g_node_is_ancestor_db);
extern GString * g_string_ascii_down_db(GString *);
CheckInterfacedef(g_string_ascii_down,g_string_ascii_down_db);
extern void g_blow_chunks_db(void);
CheckInterfacedef(g_blow_chunks,g_blow_chunks_db);
extern gboolean g_unichar_get_mirror_char_db(gunichar, gunichar *);
CheckInterfacedef(g_unichar_get_mirror_char,g_unichar_get_mirror_char_db);
extern GOptionGroup * g_option_group_new_db(const gchar *, const gchar *, const gchar *, gpointer, GDestroyNotify);
CheckInterfacedef(g_option_group_new,g_option_group_new_db);
extern const gchar * g_get_user_cache_dir_db(void);
CheckInterfacedef(g_get_user_cache_dir,g_get_user_cache_dir_db);
extern gboolean * g_key_file_get_boolean_list_db(GKeyFile *, const gchar *, const gchar *, gsize *, GError * *);
CheckInterfacedef(g_key_file_get_boolean_list,g_key_file_get_boolean_list_db);
extern void g_scanner_warn_db(GScanner *, const gchar *, ...);
CheckInterfacedef(g_scanner_warn,g_scanner_warn_db);
extern void g_queue_delete_link_db(GQueue *, GList *);
CheckInterfacedef(g_queue_delete_link,g_queue_delete_link_db);
extern guint g_direct_hash_db(gconstpointer);
CheckInterfacedef(g_direct_hash,g_direct_hash_db);
extern GSList * g_slist_find_custom_db(GSList *, gconstpointer, GCompareFunc);
CheckInterfacedef(g_slist_find_custom,g_slist_find_custom_db);
extern GTokenValue g_scanner_cur_value_db(GScanner *);
CheckInterfacedef(g_scanner_cur_value,g_scanner_cur_value_db);
extern guint8 g_date_get_days_in_month_db(GDateMonth, GDateYear);
CheckInterfacedef(g_date_get_days_in_month,g_date_get_days_in_month_db);
extern gboolean g_get_charset_db(const char * *);
CheckInterfacedef(g_get_charset,g_get_charset_db);
extern gboolean g_unichar_isalnum_db(gunichar);
CheckInterfacedef(g_unichar_isalnum,g_unichar_isalnum_db);
extern GList * g_list_reverse_db(GList *);
CheckInterfacedef(g_list_reverse,g_list_reverse_db);
extern void g_hook_insert_sorted_db(GHookList *, GHook *, GHookCompareFunc);
CheckInterfacedef(g_hook_insert_sorted,g_hook_insert_sorted_db);
extern guint g_source_attach_db(GSource *, GMainContext *);
CheckInterfacedef(g_source_attach,g_source_attach_db);
extern gchar * g_strconcat_db(const gchar *, ...);
CheckInterfacedef(g_strconcat,g_strconcat_db);
extern void g_nullify_pointer_db(gpointer *);
CheckInterfacedef(g_nullify_pointer,g_nullify_pointer_db);
extern void g_ptr_array_remove_range_db(GPtrArray *, guint, guint);
CheckInterfacedef(g_ptr_array_remove_range,g_ptr_array_remove_range_db);
extern void g_static_rw_lock_free_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_free,g_static_rw_lock_free_db);
extern GString * g_string_new_len_db(const gchar *, gssize);
CheckInterfacedef(g_string_new_len,g_string_new_len_db);
extern GList * g_list_insert_before_db(GList *, GList *, gpointer);
CheckInterfacedef(g_list_insert_before,g_list_insert_before_db);
extern void g_date_set_parse_db(GDate *, const gchar *);
CheckInterfacedef(g_date_set_parse,g_date_set_parse_db);
extern void g_log_remove_handler_db(const gchar *, guint);
CheckInterfacedef(g_log_remove_handler,g_log_remove_handler_db);
extern gboolean g_str_equal_db(gconstpointer, gconstpointer);
CheckInterfacedef(g_str_equal,g_str_equal_db);
extern GMainLoop * g_main_loop_ref_db(GMainLoop *);
CheckInterfacedef(g_main_loop_ref,g_main_loop_ref_db);
extern gchar * g_ucs4_to_utf8_db(const gunichar *, glong, glong *, glong *, GError * *);
CheckInterfacedef(g_ucs4_to_utf8,g_ucs4_to_utf8_db);
extern gpointer g_memdup_db(gconstpointer, guint);
CheckInterfacedef(g_memdup,g_memdup_db);
extern GAllocator * g_allocator_new_db(const gchar *, guint);
CheckInterfacedef(g_allocator_new,g_allocator_new_db);
extern GList * g_completion_complete_utf8_db(GCompletion *, const gchar *, gchar * *);
CheckInterfacedef(g_completion_complete_utf8,g_completion_complete_utf8_db);
extern void g_main_loop_run_db(GMainLoop *);
CheckInterfacedef(g_main_loop_run,g_main_loop_run_db);
extern void g_scanner_error_db(GScanner *, const gchar *, ...);
CheckInterfacedef(g_scanner_error,g_scanner_error_db);
extern void g_mem_chunk_reset_db(GMemChunk *);
CheckInterfacedef(g_mem_chunk_reset,g_mem_chunk_reset_db);
extern GThread * g_thread_create_full_db(GThreadFunc, gpointer, gulong, gboolean, gboolean, GThreadPriority, GError * *);
CheckInterfacedef(g_thread_create_full,g_thread_create_full_db);
extern gboolean g_date_is_first_of_month_db(const GDate *);
CheckInterfacedef(g_date_is_first_of_month,g_date_is_first_of_month_db);
extern gunichar * g_utf8_to_ucs4_fast_db(const gchar *, glong, glong *);
CheckInterfacedef(g_utf8_to_ucs4_fast,g_utf8_to_ucs4_fast_db);
extern void g_queue_reverse_db(GQueue *);
CheckInterfacedef(g_queue_reverse,g_queue_reverse_db);
extern void g_node_children_foreach_db(GNode *, GTraverseFlags, GNodeForeachFunc, gpointer);
CheckInterfacedef(g_node_children_foreach,g_node_children_foreach_db);
extern void g_timer_stop_db(GTimer *);
CheckInterfacedef(g_timer_stop,g_timer_stop_db);
extern gboolean g_main_context_wait_db(GMainContext *, GCond *, GMutex *);
CheckInterfacedef(g_main_context_wait,g_main_context_wait_db);
extern void g_set_prgname_db(const gchar *);
CheckInterfacedef(g_set_prgname,g_set_prgname_db);
extern void g_allocator_free_db(GAllocator *);
CheckInterfacedef(g_allocator_free,g_allocator_free_db);
extern const gchar * g_markup_parse_context_get_element_db(GMarkupParseContext *);
CheckInterfacedef(g_markup_parse_context_get_element,g_markup_parse_context_get_element_db);
extern guint g_parse_debug_string_db(const gchar *, const GDebugKey *, guint);
CheckInterfacedef(g_parse_debug_string,g_parse_debug_string_db);
extern void g_error_free_db(GError *);
CheckInterfacedef(g_error_free,g_error_free_db);
extern gchar * g_string_chunk_insert_len_db(GStringChunk *, const gchar *, gssize);
CheckInterfacedef(g_string_chunk_insert_len,g_string_chunk_insert_len_db);
extern GArray * g_array_new_db(gboolean, gboolean, guint);
CheckInterfacedef(g_array_new,g_array_new_db);
extern GDate * g_date_new_dmy_db(GDateDay, GDateMonth, GDateYear);
CheckInterfacedef(g_date_new_dmy,g_date_new_dmy_db);
extern void g_qsort_with_data_db(gconstpointer, gint, gsize, GCompareDataFunc, gpointer);
CheckInterfacedef(g_qsort_with_data,g_qsort_with_data_db);
extern gboolean g_shell_parse_argv_db(const gchar *, gint *, gchar * * *, GError * *);
CheckInterfacedef(g_shell_parse_argv,g_shell_parse_argv_db);
extern gchar * g_strchomp_db(gchar *);
CheckInterfacedef(g_strchomp,g_strchomp_db);
extern guint32 g_random_int_db(void);
CheckInterfacedef(g_random_int,g_random_int_db);
extern void g_option_context_set_main_group_db(GOptionContext *, GOptionGroup *);
CheckInterfacedef(g_option_context_set_main_group,g_option_context_set_main_group_db);
extern void g_date_clear_db(GDate *, guint);
CheckInterfacedef(g_date_clear,g_date_clear_db);
extern GIOStatus g_io_channel_read_unichar_db(GIOChannel *, gunichar *, GError * *);
CheckInterfacedef(g_io_channel_read_unichar,g_io_channel_read_unichar_db);
extern GList * g_list_nth_db(GList *, guint);
CheckInterfacedef(g_list_nth,g_list_nth_db);
extern void g_node_destroy_db(GNode *);
CheckInterfacedef(g_node_destroy,g_node_destroy_db);
extern const gchar * glib_check_version_db(guint, guint, guint);
CheckInterfacedef(glib_check_version,glib_check_version_db);
extern GThread * g_thread_self_db(void);
CheckInterfacedef(g_thread_self,g_thread_self_db);
extern GList * g_list_sort_with_data_db(GList *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_list_sort_with_data,g_list_sort_with_data_db);
extern void g_io_channel_set_line_term_db(GIOChannel *, const gchar *, gint);
CheckInterfacedef(g_io_channel_set_line_term,g_io_channel_set_line_term_db);
extern GIOChannel * g_io_channel_unix_new_db(gint);
CheckInterfacedef(g_io_channel_unix_new,g_io_channel_unix_new_db);
extern GString * g_string_insert_db(GString *, gssize, const gchar *);
CheckInterfacedef(g_string_insert,g_string_insert_db);
extern gpointer g_trash_stack_pop_db(GTrashStack * *);
CheckInterfacedef(g_trash_stack_pop,g_trash_stack_pop_db);
extern void g_hook_list_marshal_db(GHookList *, gboolean, GHookMarshaller, gpointer);
CheckInterfacedef(g_hook_list_marshal,g_hook_list_marshal_db);
extern size_t g_iconv_db(GIConv, gchar * *, gsize *, gchar * *, gsize *);
CheckInterfacedef(g_iconv,g_iconv_db);
extern void g_queue_remove_db(GQueue *, gconstpointer);
CheckInterfacedef(g_queue_remove,g_queue_remove_db);
extern const gchar * g_path_skip_root_db(const gchar *);
CheckInterfacedef(g_path_skip_root,g_path_skip_root_db);
extern gint g_queue_link_index_db(GQueue *, GList *);
CheckInterfacedef(g_queue_link_index,g_queue_link_index_db);
extern gpointer g_tuples_index_db(GTuples *, gint, gint);
CheckInterfacedef(g_tuples_index,g_tuples_index_db);
extern GIOChannelError g_io_channel_error_from_errno_db(gint);
CheckInterfacedef(g_io_channel_error_from_errno,g_io_channel_error_from_errno_db);
extern void g_main_context_wakeup_db(GMainContext *);
CheckInterfacedef(g_main_context_wakeup,g_main_context_wakeup_db);
extern gboolean g_direct_equal_db(gconstpointer, gconstpointer);
CheckInterfacedef(g_direct_equal,g_direct_equal_db);
extern GSource * g_source_new_db(GSourceFuncs *, guint);
CheckInterfacedef(g_source_new,g_source_new_db);
extern gboolean g_idle_remove_by_data_db(gpointer);
CheckInterfacedef(g_idle_remove_by_data,g_idle_remove_by_data_db);
extern void g_io_channel_set_buffer_size_db(GIOChannel *, gsize);
CheckInterfacedef(g_io_channel_set_buffer_size,g_io_channel_set_buffer_size_db);
extern guint g_io_add_watch_full_db(GIOChannel *, gint, GIOCondition, GIOFunc, gpointer, GDestroyNotify);
CheckInterfacedef(g_io_add_watch_full,g_io_add_watch_full_db);
extern void g_dir_rewind_db(GDir *);
CheckInterfacedef(g_dir_rewind,g_dir_rewind_db);
extern gint g_iconv_close_db(GIConv);
CheckInterfacedef(g_iconv_close,g_iconv_close_db);
extern gchar * g_ascii_strdown_db(const gchar *, gssize);
CheckInterfacedef(g_ascii_strdown,g_ascii_strdown_db);
extern gchar * g_key_file_get_locale_string_db(GKeyFile *, const gchar *, const gchar *, const gchar *, GError * *);
CheckInterfacedef(g_key_file_get_locale_string,g_key_file_get_locale_string_db);
extern GQueue * g_queue_copy_db(GQueue *);
CheckInterfacedef(g_queue_copy,g_queue_copy_db);
extern guint g_node_depth_db(GNode *);
CheckInterfacedef(g_node_depth,g_node_depth_db);
extern const gchar * g_strsignal_db(gint);
CheckInterfacedef(g_strsignal,g_strsignal_db);
extern GSList * g_slist_concat_db(GSList *, GSList *);
CheckInterfacedef(g_slist_concat,g_slist_concat_db);
extern gboolean g_source_remove_by_funcs_user_data_db(GSourceFuncs *, gpointer);
CheckInterfacedef(g_source_remove_by_funcs_user_data,g_source_remove_by_funcs_user_data_db);
extern GSource * g_io_create_watch_db(GIOChannel *, GIOCondition);
CheckInterfacedef(g_io_create_watch,g_io_create_watch_db);
extern gpointer g_cache_insert_db(GCache *, gpointer);
CheckInterfacedef(g_cache_insert,g_cache_insert_db);
extern gpointer g_scanner_lookup_symbol_db(GScanner *, const gchar *);
CheckInterfacedef(g_scanner_lookup_symbol,g_scanner_lookup_symbol_db);
extern GIOStatus g_io_channel_seek_position_db(GIOChannel *, gint64, GSeekType, GError * *);
CheckInterfacedef(g_io_channel_seek_position,g_io_channel_seek_position_db);
extern guint g_io_add_watch_db(GIOChannel *, GIOCondition, GIOFunc, gpointer);
CheckInterfacedef(g_io_add_watch,g_io_add_watch_db);
extern GSource * g_main_context_find_source_by_user_data_db(GMainContext *, gpointer);
CheckInterfacedef(g_main_context_find_source_by_user_data,g_main_context_find_source_by_user_data_db);
extern GIConv g_iconv_open_db(const gchar *, const gchar *);
CheckInterfacedef(g_iconv_open,g_iconv_open_db);
extern gchar * g_strdup_vprintf_db(const gchar *, va_list);
CheckInterfacedef(g_strdup_vprintf,g_strdup_vprintf_db);
extern void g_datalist_clear_db(GData * *);
CheckInterfacedef(g_datalist_clear,g_datalist_clear_db);
extern void g_static_rw_lock_reader_unlock_db(GStaticRWLock *);
CheckInterfacedef(g_static_rw_lock_reader_unlock,g_static_rw_lock_reader_unlock_db);
extern gsize g_strlcpy_db(gchar *, const gchar *, gsize);
CheckInterfacedef(g_strlcpy,g_strlcpy_db);
extern GRand * g_rand_new_with_seed_db(guint32);
CheckInterfacedef(g_rand_new_with_seed,g_rand_new_with_seed_db);
extern guint g_thread_pool_unprocessed_db(GThreadPool *);
CheckInterfacedef(g_thread_pool_unprocessed,g_thread_pool_unprocessed_db);
extern GQuark g_file_error_quark_db(void);
CheckInterfacedef(g_file_error_quark,g_file_error_quark_db);
extern gdouble g_ascii_strtod_db(const gchar *, gchar * *);
CheckInterfacedef(g_ascii_strtod,g_ascii_strtod_db);
extern GByteArray * g_byte_array_prepend_db(GByteArray *, const guint8 *, guint);
CheckInterfacedef(g_byte_array_prepend,g_byte_array_prepend_db);
extern GQuark g_quark_from_static_string_db(const gchar *);
CheckInterfacedef(g_quark_from_static_string,g_quark_from_static_string_db);
extern void g_unicode_canonical_ordering_db(gunichar *, gsize);
CheckInterfacedef(g_unicode_canonical_ordering,g_unicode_canonical_ordering_db);
extern gboolean g_ptr_array_remove_fast_db(GPtrArray *, gpointer);
CheckInterfacedef(g_ptr_array_remove_fast,g_ptr_array_remove_fast_db);
extern gint g_list_index_db(GList *, gconstpointer);
CheckInterfacedef(g_list_index,g_list_index_db);
extern void g_tree_destroy_db(GTree *);
CheckInterfacedef(g_tree_destroy,g_tree_destroy_db);
extern GDate * g_date_new_db(void);
CheckInterfacedef(g_date_new,g_date_new_db);
extern void g_thread_init_with_errorcheck_mutexes_db(GThreadFunctions *);
CheckInterfacedef(g_thread_init_with_errorcheck_mutexes,g_thread_init_with_errorcheck_mutexes_db);
extern void g_thread_init_db(GThreadFunctions *);
CheckInterfacedef(g_thread_init,g_thread_init_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/glib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
