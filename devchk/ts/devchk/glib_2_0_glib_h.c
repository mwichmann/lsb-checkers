/*
 * Test of glib-2.0/glib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE

#ifndef LSBCC_MODE
#include <glibconfig.h>
#endif

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
/* No test for glib-2.0/glib.h depends on limits.h */
#endif

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
	CompareStringConstant(G_GNUC_FUNCTION,"",5796,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GNUC_FUNCTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GNUC_PRETTY_FUNCTION
	CompareStringConstant(G_GNUC_PRETTY_FUNCTION,"",5797,architecture,3.1,NULL)
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
	CompareStringConstant(G_GINT16_MODIFIER,"h",5832,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT16_MODIFIER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT16_FORMAT
	CompareStringConstant(G_GINT16_FORMAT,"hi",5833,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT16_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GUINT16_FORMAT
	CompareStringConstant(G_GUINT16_FORMAT,"hu",5834,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT16_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT32_MODIFIER
	CompareStringConstant(G_GINT32_MODIFIER,"",5835,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT32_MODIFIER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GINT32_FORMAT
	CompareStringConstant(G_GINT32_FORMAT,"i",5836,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT32_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_GUINT32_FORMAT
	CompareStringConstant(G_GUINT32_FORMAT,"u",5837,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT32_FORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GINT64
	CompareConstant(G_HAVE_GINT64,1,5838,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE_GINT64\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
/* No test for G_GINT64_CONSTANT(val) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for G_GINT64_CONSTANT(val) */
#elif defined __ia64__
/* No test for G_GINT64_CONSTANT(val) */
#elif defined __i386__
/* No test for G_GINT64_CONSTANT(val) */
#elif defined __s390x__
/* No test for G_GINT64_CONSTANT(val) */
#elif defined __x86_64__
/* No test for G_GINT64_CONSTANT(val) */
#elif defined __s390__ && !defined __s390x__
/* No test for G_GINT64_CONSTANT(val) */
#else
Msg( "No definition for G_GINT64_CONSTANT(val) (5839, Unknown) in db\n");
#ifdef G_GINT64_CONSTANT(val)
#endif
#endif
#if defined __powerpc64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"ll",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif defined __i386__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"ll",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"l",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_GINT64_MODIFIER
	CompareStringConstant(G_GINT64_MODIFIER,"ll",5840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_MODIFIER\n");
cnt++;
#endif

#else
Msg( "No definition for G_GINT64_MODIFIER (5840, string) in db\n");
#ifdef G_GINT64_MODIFIER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5840,%s,'""3.1""',NULL);\n", architecture, G_GINT64_MODIFIER);
#endif
#endif
#if defined __powerpc64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"lli",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"lli",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"li",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_GINT64_FORMAT
	CompareStringConstant(G_GINT64_FORMAT,"lli",5841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GINT64_FORMAT\n");
cnt++;
#endif

#else
Msg( "No definition for G_GINT64_FORMAT (5841, string) in db\n");
#ifdef G_GINT64_FORMAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5841,%s,'""3.1""',NULL);\n", architecture, G_GINT64_FORMAT);
#endif
#endif
#if defined __powerpc64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"llu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"llu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"lu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_GUINT64_FORMAT
	CompareStringConstant(G_GUINT64_FORMAT,"llu",5842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GUINT64_FORMAT\n");
cnt++;
#endif

#else
Msg( "No definition for G_GUINT64_FORMAT (5842, string) in db\n");
#ifdef G_GUINT64_FORMAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5842,%s,'""3.1""',NULL);\n", architecture, G_GUINT64_FORMAT);
#endif
#endif
#if defined __powerpc64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,4,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif defined __i386__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,4,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,8,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef GLIB_SIZEOF_VOID_P
	CompareConstant(GLIB_SIZEOF_VOID_P,4,5843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_VOID_P\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_SIZEOF_VOID_P (5843, int) in db\n");
#ifdef GLIB_SIZEOF_VOID_P
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5843,%d,'""3.1""',NULL);\n", architecture, GLIB_SIZEOF_VOID_P);
#endif
#endif
#if defined __powerpc64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,4,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif defined __i386__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,4,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,8,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef GLIB_SIZEOF_LONG
	CompareConstant(GLIB_SIZEOF_LONG,4,5844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_LONG\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_SIZEOF_LONG (5844, int) in db\n");
#ifdef GLIB_SIZEOF_LONG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5844,%d,'""3.1""',NULL);\n", architecture, GLIB_SIZEOF_LONG);
#endif
#endif
#if defined __powerpc64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,4,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif defined __i386__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,4,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,8,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef GLIB_SIZEOF_SIZE_T
	CompareConstant(GLIB_SIZEOF_SIZE_T,4,5845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_SIZEOF_SIZE_T\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_SIZEOF_SIZE_T (5845, int) in db\n");
#ifdef GLIB_SIZEOF_SIZE_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5845,%d,'""3.1""',NULL);\n", architecture, GLIB_SIZEOF_SIZE_T);
#endif
#endif
#if defined __powerpc64__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"l",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"l",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#elif defined __i386__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"l",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"l",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_GSIZE_MODIFIER
	CompareStringConstant(G_GSIZE_MODIFIER,"",5846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_MODIFIER\n");
cnt++;
#endif

#else
Msg( "No definition for G_GSIZE_MODIFIER (5846, string) in db\n");
#ifdef G_GSIZE_MODIFIER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5846,%s,'""3.1""',NULL);\n", architecture, G_GSIZE_MODIFIER);
#endif
#endif
#if defined __powerpc64__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"li",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"i",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"li",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"i",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"li",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"li",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_GSSIZE_FORMAT
	CompareStringConstant(G_GSSIZE_FORMAT,"i",5847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSSIZE_FORMAT\n");
cnt++;
#endif

#else
Msg( "No definition for G_GSSIZE_FORMAT (5847, string) in db\n");
#ifdef G_GSSIZE_FORMAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5847,%s,'""3.1""',NULL);\n", architecture, G_GSSIZE_FORMAT);
#endif
#endif
#if defined __powerpc64__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"lu",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"u",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"lu",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"u",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"lu",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"lu",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_GSIZE_FORMAT
	CompareStringConstant(G_GSIZE_FORMAT,"u",5848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_GSIZE_FORMAT\n");
cnt++;
#endif

#else
Msg( "No definition for G_GSIZE_FORMAT (5848, string) in db\n");
#ifdef G_GSIZE_FORMAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5848,%s,'""3.1""',NULL);\n", architecture, G_GSIZE_FORMAT);
#endif
#endif
#if defined __powerpc64__
/* No test for G_MAXSIZE */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for G_MAXSIZE */
#elif defined __ia64__
/* No test for G_MAXSIZE */
#elif defined __i386__
/* No test for G_MAXSIZE */
#elif defined __s390x__
/* No test for G_MAXSIZE */
#elif defined __x86_64__
/* No test for G_MAXSIZE */
#elif defined __s390__ && !defined __s390x__
/* No test for G_MAXSIZE */
#else
Msg( "No definition for G_MAXSIZE (5849, Unknown) in db\n");
#ifdef G_MAXSIZE
#endif
#endif
#if defined __powerpc64__
/* No test for GPOINTER_TO_INT(p) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GPOINTER_TO_INT(p) */
#elif defined __ia64__
/* No test for GPOINTER_TO_INT(p) */
#elif defined __i386__
/* No test for GPOINTER_TO_INT(p) */
#elif defined __s390x__
/* No test for GPOINTER_TO_INT(p) */
#elif defined __x86_64__
/* No test for GPOINTER_TO_INT(p) */
#elif defined __s390__ && !defined __s390x__
/* No test for GPOINTER_TO_INT(p) */
#else
Msg( "No definition for GPOINTER_TO_INT(p) (5850, Unknown) in db\n");
#ifdef GPOINTER_TO_INT(p)
#endif
#endif
#if defined __powerpc64__
/* No test for GPOINTER_TO_UINT(p) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GPOINTER_TO_UINT(p) */
#elif defined __ia64__
/* No test for GPOINTER_TO_UINT(p) */
#elif defined __i386__
/* No test for GPOINTER_TO_UINT(p) */
#elif defined __s390x__
/* No test for GPOINTER_TO_UINT(p) */
#elif defined __x86_64__
/* No test for GPOINTER_TO_UINT(p) */
#elif defined __s390__ && !defined __s390x__
/* No test for GPOINTER_TO_UINT(p) */
#else
Msg( "No definition for GPOINTER_TO_UINT(p) (5851, Unknown) in db\n");
#ifdef GPOINTER_TO_UINT(p)
#endif
#endif
#if defined __powerpc64__
/* No test for GINT_TO_POINTER(i) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GINT_TO_POINTER(i) */
#elif defined __ia64__
/* No test for GINT_TO_POINTER(i) */
#elif defined __i386__
/* No test for GINT_TO_POINTER(i) */
#elif defined __s390x__
/* No test for GINT_TO_POINTER(i) */
#elif defined __x86_64__
/* No test for GINT_TO_POINTER(i) */
#elif defined __s390__ && !defined __s390x__
/* No test for GINT_TO_POINTER(i) */
#else
Msg( "No definition for GINT_TO_POINTER(i) (5852, Unknown) in db\n");
#ifdef GINT_TO_POINTER(i)
#endif
#endif
#if defined __powerpc64__
/* No test for GUINT_TO_POINTER(u) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GUINT_TO_POINTER(u) */
#elif defined __ia64__
/* No test for GUINT_TO_POINTER(u) */
#elif defined __i386__
/* No test for GUINT_TO_POINTER(u) */
#elif defined __s390x__
/* No test for GUINT_TO_POINTER(u) */
#elif defined __x86_64__
/* No test for GUINT_TO_POINTER(u) */
#elif defined __s390__ && !defined __s390x__
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
	CompareConstant(GLIB_MAJOR_VERSION,2,5856,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_MAJOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLIB_MINOR_VERSION
	CompareConstant(GLIB_MINOR_VERSION,6,5857,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_MINOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GLIB_MICRO_VERSION
	CompareConstant(GLIB_MICRO_VERSION,6,5858,architecture,3.1,NULL)
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
	CompareConstant(G_HAVE_INLINE,1,5861,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE_INLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE___INLINE
	CompareConstant(G_HAVE___INLINE,1,5862,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE___INLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE___INLINE__
	CompareConstant(G_HAVE___INLINE__,1,5863,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE___INLINE__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CAN_INLINE
	CompareConstant(G_CAN_INLINE,1,5864,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_CAN_INLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_ISO_VARARGS
	CompareConstant(G_HAVE_ISO_VARARGS,1,5865,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE_ISO_VARARGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GNUC_VARARGS
	CompareConstant(G_HAVE_GNUC_VARARGS,1,5866,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE_GNUC_VARARGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GROWING_STACK
	CompareConstant(G_HAVE_GROWING_STACK,0,5867,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_HAVE_GROWING_STACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_HAVE_GNUC_VISIBILITY
	CompareConstant(G_HAVE_GNUC_VISIBILITY,1,5868,architecture,3.1,NULL)
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

#if defined __powerpc64__
/* No test for G_STATIC_MUTEX_INIT */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for G_STATIC_MUTEX_INIT */
#elif defined __ia64__
/* No test for G_STATIC_MUTEX_INIT */
#elif defined __i386__
/* No test for G_STATIC_MUTEX_INIT */
#elif defined __s390x__
/* No test for G_STATIC_MUTEX_INIT */
#elif defined __x86_64__
/* No test for G_STATIC_MUTEX_INIT */
#elif defined __s390__ && !defined __s390x__
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

#if defined __powerpc64__
/* No test for GLONG_TO_LE(val) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GLONG_TO_LE(val) */
#elif defined __ia64__
/* No test for GLONG_TO_LE(val) */
#elif defined __i386__
/* No test for GLONG_TO_LE(val) */
#elif defined __s390x__
/* No test for GLONG_TO_LE(val) */
#elif defined __x86_64__
/* No test for GLONG_TO_LE(val) */
#elif defined __s390__ && !defined __s390x__
/* No test for GLONG_TO_LE(val) */
#else
Msg( "No definition for GLONG_TO_LE(val) (5886, Unknown) in db\n");
#ifdef GLONG_TO_LE(val)
#endif
#endif
#if defined __powerpc64__
/* No test for GULONG_TO_LE(val) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GULONG_TO_LE(val) */
#elif defined __ia64__
/* No test for GULONG_TO_LE(val) */
#elif defined __i386__
/* No test for GULONG_TO_LE(val) */
#elif defined __s390x__
/* No test for GULONG_TO_LE(val) */
#elif defined __x86_64__
/* No test for GULONG_TO_LE(val) */
#elif defined __s390__ && !defined __s390x__
/* No test for GULONG_TO_LE(val) */
#else
Msg( "No definition for GULONG_TO_LE(val) (5887, Unknown) in db\n");
#ifdef GULONG_TO_LE(val)
#endif
#endif
#if defined __powerpc64__
/* No test for GLONG_TO_BE(val) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GLONG_TO_BE(val) */
#elif defined __ia64__
/* No test for GLONG_TO_BE(val) */
#elif defined __i386__
/* No test for GLONG_TO_BE(val) */
#elif defined __s390x__
/* No test for GLONG_TO_BE(val) */
#elif defined __x86_64__
/* No test for GLONG_TO_BE(val) */
#elif defined __s390__ && !defined __s390x__
/* No test for GLONG_TO_BE(val) */
#else
Msg( "No definition for GLONG_TO_BE(val) (5888, Unknown) in db\n");
#ifdef GLONG_TO_BE(val)
#endif
#endif
#if defined __powerpc64__
/* No test for GULONG_TO_BE(val) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for GULONG_TO_BE(val) */
#elif defined __ia64__
/* No test for GULONG_TO_BE(val) */
#elif defined __i386__
/* No test for GULONG_TO_BE(val) */
#elif defined __s390x__
/* No test for GULONG_TO_BE(val) */
#elif defined __x86_64__
/* No test for GULONG_TO_BE(val) */
#elif defined __s390__ && !defined __s390x__
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

#if defined __powerpc64__
/* No test for G_BYTE_ORDER */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for G_BYTE_ORDER */
#elif defined __ia64__
/* No test for G_BYTE_ORDER */
#elif defined __i386__
/* No test for G_BYTE_ORDER */
#elif defined __s390x__
/* No test for G_BYTE_ORDER */
#elif defined __x86_64__
/* No test for G_BYTE_ORDER */
#elif defined __s390__ && !defined __s390x__
/* No test for G_BYTE_ORDER */
#else
Msg( "No definition for G_BYTE_ORDER (5894, Unknown) in db\n");
#ifdef G_BYTE_ORDER
#endif
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
	CompareStringConstant(G_MODULE_SUFFIX,"so",5901,architecture,3.1,NULL)
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
	CompareConstant(G_LITTLE_ENDIAN,1234,5921,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_LITTLE_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_BIG_ENDIAN
	CompareConstant(G_BIG_ENDIAN,4321,5922,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_BIG_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PDP_ENDIAN
	CompareConstant(G_PDP_ENDIAN,3412,5923,architecture,3.1,NULL)
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
	CompareConstant(G_ALLOC_ONLY,1,6021,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_ALLOC_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_ALLOC_AND_FREE
	CompareConstant(G_ALLOC_AND_FREE,2,6022,architecture,3.1,NULL)
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
	CompareConstant(G_PRIORITY_HIGH,-100,6067,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_PRIORITY_HIGH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_DEFAULT
	CompareConstant(G_PRIORITY_DEFAULT,0,6068,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_PRIORITY_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_HIGH_IDLE
	CompareConstant(G_PRIORITY_HIGH_IDLE,100,6069,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_PRIORITY_HIGH_IDLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_DEFAULT_IDLE
	CompareConstant(G_PRIORITY_DEFAULT_IDLE,200,6070,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_PRIORITY_DEFAULT_IDLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_PRIORITY_LOW
	CompareConstant(G_PRIORITY_LOW,300,6071,architecture,3.1,NULL)
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
	CompareStringConstant(G_DIR_SEPARATOR_S,"/",6074,architecture,3.1,NULL)
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
	CompareStringConstant(G_SEARCHPATH_SEPARATOR_S,":",6077,architecture,3.1,NULL)
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
	CompareStringConstant(G_OPTION_REMAINING,"",6110,architecture,3.1,NULL)
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
	CompareStringConstant(G_CSET_A_2_Z,"ABCDEFGHIJKLMNOPQRSTUVWXYZ",6113,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_CSET_A_2_Z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CSET_a_2_z
	CompareStringConstant(G_CSET_a_2_z,"abcdefghijklmnopqrstuvwxyz",6114,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_CSET_a_2_z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_CSET_DIGITS
	CompareStringConstant(G_CSET_DIGITS,"0123456789",6115,architecture,3.1,NULL)
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
	CompareStringConstant(G_STR_DELIMITERS,"_-|> <.",6131,architecture,3.1,NULL)
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
	CompareConstant(G_USEC_PER_SEC,1000000,6134,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_USEC_PER_SEC\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef G_VA_COPY_AS_ARRAY
	CompareConstant(G_VA_COPY_AS_ARRAY,1,9488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_VA_COPY_AS_ARRAY\n");
cnt++;
#endif

#else
Msg( "No definition for G_VA_COPY_AS_ARRAY (9488, int) in db\n");
#ifdef G_VA_COPY_AS_ARRAY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,9488,%d,'""3.1""',NULL);\n", architecture, G_VA_COPY_AS_ARRAY);
#endif
#endif
#if defined __powerpc64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,24,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,24,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,40,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef GLIB_LSB_PADDING_SIZE
	CompareConstant(GLIB_LSB_PADDING_SIZE,24,9489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_PADDING_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_LSB_PADDING_SIZE (9489, int) in db\n");
#ifdef GLIB_LSB_PADDING_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,9489,%d,'""3.1""',NULL);\n", architecture, GLIB_LSB_PADDING_SIZE);
#endif
#endif
#if defined __powerpc64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,4,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,4,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,8,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef GLIB_LSB_DATA_SIZE
	CompareConstant(GLIB_LSB_DATA_SIZE,4,9490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GLIB_LSB_DATA_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for GLIB_LSB_DATA_SIZE (9490, int) in db\n");
#ifdef GLIB_LSB_DATA_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,9490,%d,'""3.1""',NULL);\n", architecture, GLIB_LSB_DATA_SIZE);
#endif
#endif
#if defined __i386__
CheckTypeSize(guint16,2, 11396, 2, 3.1, NULL, 11209, NULL)
#elif defined __x86_64__
CheckTypeSize(guint16,2, 11396, 11, 3.1, NULL, 11209, NULL)
#elif defined __ia64__
CheckTypeSize(guint16,2, 11396, 3, 3.1, NULL, 11209, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(guint16,2, 11396, 6, 3.1, NULL, 11209, NULL)
#elif defined __powerpc64__
CheckTypeSize(guint16,2, 11396, 9, 3.1, NULL, 11209, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(guint16,2, 11396, 10, 3.1, NULL, 11209, NULL)
#elif defined __s390x__
CheckTypeSize(guint16,2, 11396, 12, 3.1, NULL, 11209, NULL)
#else
Msg("Find size of guint16 (11396)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11209,NULL);\n",architecture,11396,0);
#endif

#if defined __i386__
CheckTypeSize(gint,4, 11400, 2, 3.1, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(gint,4, 11400, 11, 3.1, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(gint,4, 11400, 3, 3.1, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gint,4, 11400, 6, 3.1, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(gint,4, 11400, 9, 3.1, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gint,4, 11400, 10, 3.1, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(gint,4, 11400, 12, 3.1, NULL, 6, NULL)
#else
Msg("Find size of gint (11400)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,6,NULL);\n",architecture,11400,0);
#endif

#if defined __i386__
CheckTypeSize(gboolean,4, 11401, 2, 3.1, NULL, 11400, NULL)
#elif defined __x86_64__
CheckTypeSize(gboolean,4, 11401, 11, 3.1, NULL, 11400, NULL)
#elif defined __ia64__
CheckTypeSize(gboolean,4, 11401, 3, 3.1, NULL, 11400, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gboolean,4, 11401, 6, 3.1, NULL, 11400, NULL)
#elif defined __powerpc64__
CheckTypeSize(gboolean,4, 11401, 9, 3.1, NULL, 11400, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gboolean,4, 11401, 10, 3.1, NULL, 11400, NULL)
#elif defined __s390x__
CheckTypeSize(gboolean,4, 11401, 12, 3.1, NULL, 11400, NULL)
#else
Msg("Find size of gboolean (11401)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11400,NULL);\n",architecture,11401,0);
#endif

#if defined __i386__
CheckTypeSize(guint,4, 11402, 2, 3.1, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(guint,4, 11402, 11, 3.1, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(guint,4, 11402, 3, 3.1, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(guint,4, 11402, 6, 3.1, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(guint,4, 11402, 9, 3.1, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(guint,4, 11402, 10, 3.1, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(guint,4, 11402, 12, 3.1, NULL, 7, NULL)
#else
Msg("Find size of guint (11402)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,7,NULL);\n",architecture,11402,0);
#endif

#if defined __i386__
CheckTypeSize(gpointer,4, 11404, 2, 3.1, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(gpointer,8, 11404, 11, 3.1, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(gpointer,8, 11404, 3, 3.1, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gpointer,4, 11404, 6, 3.1, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(gpointer,8, 11404, 9, 3.1, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gpointer,4, 11404, 10, 3.1, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(gpointer,8, 11404, 12, 3.1, NULL, 40, NULL)
#else
Msg("Find size of gpointer (11404)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,40,NULL);\n",architecture,11404,0);
#endif

#if defined __i386__
CheckTypeSize(GThreadFunc,4, 11406, 2, 3.1, NULL, 11405, NULL)
#elif defined __x86_64__
CheckTypeSize(GThreadFunc,8, 11406, 11, 3.1, NULL, 11405, NULL)
#elif defined __ia64__
CheckTypeSize(GThreadFunc,8, 11406, 3, 3.1, NULL, 11405, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GThreadFunc,4, 11406, 6, 3.1, NULL, 11405, NULL)
#elif defined __powerpc64__
CheckTypeSize(GThreadFunc,8, 11406, 9, 3.1, NULL, 11405, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GThreadFunc,4, 11406, 10, 3.1, NULL, 11405, NULL)
#elif defined __s390x__
CheckTypeSize(GThreadFunc,8, 11406, 12, 3.1, NULL, 11405, NULL)
#else
Msg("Find size of GThreadFunc (11406)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11405,NULL);\n",architecture,11406,0);
#endif

#if defined __i386__
CheckTypeSize(GThreadPriority,4, 11408, 2, 3.1, NULL, 11407, NULL)
#elif defined __x86_64__
CheckTypeSize(GThreadPriority,4, 11408, 11, 3.1, NULL, 11407, NULL)
#elif defined __ia64__
CheckTypeSize(GThreadPriority,4, 11408, 3, 3.1, NULL, 11407, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GThreadPriority,4, 11408, 6, 3.1, NULL, 11407, NULL)
#elif defined __powerpc64__
CheckTypeSize(GThreadPriority,4, 11408, 9, 3.1, NULL, 11407, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GThreadPriority,4, 11408, 10, 3.1, NULL, 11407, NULL)
#elif defined __s390x__
CheckTypeSize(GThreadPriority,4, 11408, 12, 3.1, NULL, 11407, NULL)
#else
Msg("Find size of GThreadPriority (11408)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11407,NULL);\n",architecture,11408,0);
#endif

#if defined __i386__
CheckTypeSize(GThread,16, 11409, 2, 3.1, NULL, 11403, NULL)
#elif defined __x86_64__
CheckTypeSize(GThread,24, 11409, 11, 3.1, NULL, 11403, NULL)
#elif defined __ia64__
CheckTypeSize(GThread,24, 11409, 3, 3.1, NULL, 11403, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GThread,16, 11409, 6, 3.1, NULL, 11403, NULL)
#elif defined __powerpc64__
CheckTypeSize(GThread,24, 11409, 9, 3.1, NULL, 11403, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GThread,16, 11409, 10, 3.1, NULL, 11403, NULL)
#elif defined __s390x__
CheckTypeSize(GThread,24, 11409, 12, 3.1, NULL, 11403, NULL)
#else
Msg("Find size of GThread (11409)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11403,NULL);\n",architecture,11409,0);
#endif

#if defined __i386__
CheckTypeSize(guint32,4, 11412, 2, 3.1, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(guint32,4, 11412, 11, 3.1, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(guint32,4, 11412, 3, 3.1, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(guint32,4, 11412, 6, 3.1, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(guint32,4, 11412, 9, 3.1, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(guint32,4, 11412, 10, 3.1, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(guint32,4, 11412, 12, 3.1, NULL, 7, NULL)
#else
Msg("Find size of guint32 (11412)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,7,NULL);\n",architecture,11412,0);
#endif

#if defined __i386__
CheckTypeSize(GQuark,4, 11413, 2, 3.1, NULL, 11412, NULL)
#elif defined __x86_64__
CheckTypeSize(GQuark,4, 11413, 11, 3.1, NULL, 11412, NULL)
#elif defined __ia64__
CheckTypeSize(GQuark,4, 11413, 3, 3.1, NULL, 11412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GQuark,4, 11413, 6, 3.1, NULL, 11412, NULL)
#elif defined __powerpc64__
CheckTypeSize(GQuark,4, 11413, 9, 3.1, NULL, 11412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GQuark,4, 11413, 10, 3.1, NULL, 11412, NULL)
#elif defined __s390x__
CheckTypeSize(GQuark,4, 11413, 12, 3.1, NULL, 11412, NULL)
#else
Msg("Find size of GQuark (11413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11412,NULL);\n",architecture,11413,0);
#endif

#if defined __i386__
CheckTypeSize(gchar,1, 11414, 2, 3.1, NULL, 2, NULL)
#elif defined __x86_64__
CheckTypeSize(gchar,1, 11414, 11, 3.1, NULL, 2, NULL)
#elif defined __ia64__
CheckTypeSize(gchar,1, 11414, 3, 3.1, NULL, 2, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gchar,1, 11414, 6, 3.1, NULL, 2, NULL)
#elif defined __powerpc64__
CheckTypeSize(gchar,1, 11414, 9, 3.1, NULL, 2, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gchar,1, 11414, 10, 3.1, NULL, 2, NULL)
#elif defined __s390x__
CheckTypeSize(gchar,1, 11414, 12, 3.1, NULL, 2, NULL)
#else
Msg("Find size of gchar (11414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,2,NULL);\n",architecture,11414,0);
#endif

#if defined __i386__
CheckTypeSize(GError,12, 11416, 2, 3.1, NULL, 11411, NULL)
#elif defined __x86_64__
CheckTypeSize(GError,16, 11416, 11, 3.1, NULL, 11411, NULL)
#elif defined __ia64__
CheckTypeSize(GError,16, 11416, 3, 3.1, NULL, 11411, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GError,12, 11416, 6, 3.1, NULL, 11411, NULL)
#elif defined __powerpc64__
CheckTypeSize(GError,16, 11416, 9, 3.1, NULL, 11411, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GError,12, 11416, 10, 3.1, NULL, 11411, NULL)
#elif defined __s390x__
CheckTypeSize(GError,16, 11416, 12, 3.1, NULL, 11411, NULL)
#else
Msg("Find size of GError (11416)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11411,NULL);\n",architecture,11416,0);
#endif

#if defined __i386__
CheckTypeSize(GPrintFunc,4, 11423, 2, 3.1, NULL, 11422, NULL)
#elif defined __x86_64__
CheckTypeSize(GPrintFunc,8, 11423, 11, 3.1, NULL, 11422, NULL)
#elif defined __ia64__
CheckTypeSize(GPrintFunc,8, 11423, 3, 3.1, NULL, 11422, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GPrintFunc,4, 11423, 6, 3.1, NULL, 11422, NULL)
#elif defined __powerpc64__
CheckTypeSize(GPrintFunc,8, 11423, 9, 3.1, NULL, 11422, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GPrintFunc,4, 11423, 10, 3.1, NULL, 11422, NULL)
#elif defined __s390x__
CheckTypeSize(GPrintFunc,8, 11423, 12, 3.1, NULL, 11422, NULL)
#else
Msg("Find size of GPrintFunc (11423)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11422,NULL);\n",architecture,11423,0);
#endif

#if defined __i386__
CheckTypeSize(gulong,4, 11427, 2, 3.1, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(gulong,8, 11427, 11, 3.1, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(gulong,8, 11427, 3, 3.1, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gulong,4, 11427, 6, 3.1, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(gulong,8, 11427, 9, 3.1, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gulong,4, 11427, 10, 3.1, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(gulong,8, 11427, 12, 3.1, NULL, 11186, NULL)
#else
Msg("Find size of gulong (11427)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11186,NULL);\n",architecture,11427,0);
#endif

#if defined __i386__
CheckTypeSize(GList,12, 11429, 2, 3.1, NULL, 11428, NULL)
#elif defined __x86_64__
CheckTypeSize(GList,24, 11429, 11, 3.1, NULL, 11428, NULL)
#elif defined __ia64__
CheckTypeSize(GList,24, 11429, 3, 3.1, NULL, 11428, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GList,12, 11429, 6, 3.1, NULL, 11428, NULL)
#elif defined __powerpc64__
CheckTypeSize(GList,24, 11429, 9, 3.1, NULL, 11428, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GList,12, 11429, 10, 3.1, NULL, 11428, NULL)
#elif defined __s390x__
CheckTypeSize(GList,24, 11429, 12, 3.1, NULL, 11428, NULL)
#else
Msg("Find size of GList (11429)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11428,NULL);\n",architecture,11429,0);
#endif

#if defined __i386__
CheckTypeSize(GHook,32, 11436, 2, 3.1, NULL, 11435, NULL)
#elif defined __x86_64__
CheckTypeSize(GHook,64, 11436, 11, 3.1, NULL, 11435, NULL)
#elif defined __ia64__
CheckTypeSize(GHook,64, 11436, 3, 3.1, NULL, 11435, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHook,32, 11436, 6, 3.1, NULL, 11435, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHook,64, 11436, 9, 3.1, NULL, 11435, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHook,32, 11436, 10, 3.1, NULL, 11435, NULL)
#elif defined __s390x__
CheckTypeSize(GHook,64, 11436, 12, 3.1, NULL, 11435, NULL)
#else
Msg("Find size of GHook (11436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11435,NULL);\n",architecture,11436,0);
#endif

#if defined __i386__
CheckTypeSize(GDestroyNotify,4, 11439, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GDestroyNotify,8, 11439, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GDestroyNotify,8, 11439, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDestroyNotify,4, 11439, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDestroyNotify,8, 11439, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDestroyNotify,4, 11439, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GDestroyNotify,8, 11439, 12, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GDestroyNotify (11439)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11439,0);
#endif

#if defined __i386__
CheckTypeSize(GHookList,28, 11440, 2, 3.1, NULL, 11434, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookList,56, 11440, 11, 3.1, NULL, 11434, NULL)
#elif defined __ia64__
CheckTypeSize(GHookList,56, 11440, 3, 3.1, NULL, 11434, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookList,28, 11440, 6, 3.1, NULL, 11434, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookList,56, 11440, 9, 3.1, NULL, 11434, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookList,28, 11440, 10, 3.1, NULL, 11434, NULL)
#elif defined __s390x__
CheckTypeSize(GHookList,56, 11440, 12, 3.1, NULL, 11434, NULL)
#else
Msg("Find size of GHookList (11440)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11434,NULL);\n",architecture,11440,0);
#endif

#if defined __i386__
CheckTypeSize(GHookFinalizeFunc,4, 11443, 2, 3.1, NULL, 11442, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 11, 3.1, NULL, 11442, NULL)
#elif defined __ia64__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 3, 3.1, NULL, 11442, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookFinalizeFunc,4, 11443, 6, 3.1, NULL, 11442, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 9, 3.1, NULL, 11442, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookFinalizeFunc,4, 11443, 10, 3.1, NULL, 11442, NULL)
#elif defined __s390x__
CheckTypeSize(GHookFinalizeFunc,8, 11443, 12, 3.1, NULL, 11442, NULL)
#else
Msg("Find size of GHookFinalizeFunc (11443)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11442,NULL);\n",architecture,11443,0);
#endif

#if defined __i386__
CheckTypeSize(GQueue,12, 11448, 2, 3.1, NULL, 11447, NULL)
#elif defined __x86_64__
CheckTypeSize(GQueue,24, 11448, 11, 3.1, NULL, 11447, NULL)
#elif defined __ia64__
CheckTypeSize(GQueue,24, 11448, 3, 3.1, NULL, 11447, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GQueue,12, 11448, 6, 3.1, NULL, 11447, NULL)
#elif defined __powerpc64__
CheckTypeSize(GQueue,24, 11448, 9, 3.1, NULL, 11447, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GQueue,12, 11448, 10, 3.1, NULL, 11447, NULL)
#elif defined __s390x__
CheckTypeSize(GQueue,24, 11448, 12, 3.1, NULL, 11447, NULL)
#else
Msg("Find size of GQueue (11448)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11447,NULL);\n",architecture,11448,0);
#endif

#if defined __i386__
CheckTypeSize(GSList,8, 11451, 2, 3.1, NULL, 11450, NULL)
#elif defined __x86_64__
CheckTypeSize(GSList,16, 11451, 11, 3.1, NULL, 11450, NULL)
#elif defined __ia64__
CheckTypeSize(GSList,16, 11451, 3, 3.1, NULL, 11450, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSList,8, 11451, 6, 3.1, NULL, 11450, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSList,16, 11451, 9, 3.1, NULL, 11450, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSList,8, 11451, 10, 3.1, NULL, 11450, NULL)
#elif defined __s390x__
CheckTypeSize(GSList,16, 11451, 12, 3.1, NULL, 11450, NULL)
#else
Msg("Find size of GSList (11451)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11450,NULL);\n",architecture,11451,0);
#endif

#if defined __i386__
CheckTypeSize(gsize,4, 11454, 2, 3.1, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(gsize,8, 11454, 3, 3.1, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(gsize,8, 11454, 11, 3.1, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gsize,4, 11454, 6, 3.1, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(gsize,8, 11454, 9, 3.1, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gsize,4, 11454, 10, 3.1, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(gsize,8, 11454, 12, 3.1, NULL, 9, NULL)
#endif

#if defined __i386__
CheckTypeSize(GString,12, 11455, 2, 3.1, NULL, 11453, NULL)
#elif defined __x86_64__
CheckTypeSize(GString,24, 11455, 11, 3.1, NULL, 11453, NULL)
#elif defined __ia64__
CheckTypeSize(GString,24, 11455, 3, 3.1, NULL, 11453, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GString,12, 11455, 6, 3.1, NULL, 11453, NULL)
#elif defined __powerpc64__
CheckTypeSize(GString,24, 11455, 9, 3.1, NULL, 11453, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GString,12, 11455, 10, 3.1, NULL, 11453, NULL)
#elif defined __s390x__
CheckTypeSize(GString,24, 11455, 12, 3.1, NULL, 11453, NULL)
#else
Msg("Find size of GString (11455)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11453,NULL);\n",architecture,11455,0);
#endif

#if defined __i386__
CheckTypeSize(GPtrArray,8, 11459, 2, 3.1, NULL, 11457, NULL)
#elif defined __x86_64__
CheckTypeSize(GPtrArray,16, 11459, 11, 3.1, NULL, 11457, NULL)
#elif defined __ia64__
CheckTypeSize(GPtrArray,16, 11459, 3, 3.1, NULL, 11457, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GPtrArray,8, 11459, 6, 3.1, NULL, 11457, NULL)
#elif defined __powerpc64__
CheckTypeSize(GPtrArray,16, 11459, 9, 3.1, NULL, 11457, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GPtrArray,8, 11459, 10, 3.1, NULL, 11457, NULL)
#elif defined __s390x__
CheckTypeSize(GPtrArray,16, 11459, 12, 3.1, NULL, 11457, NULL)
#else
Msg("Find size of GPtrArray (11459)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11457,NULL);\n",architecture,11459,0);
#endif

#if defined __i386__
CheckTypeSize(gunichar,4, 11486, 2, 3.1, NULL, 11412, NULL)
#elif defined __x86_64__
CheckTypeSize(gunichar,4, 11486, 11, 3.1, NULL, 11412, NULL)
#elif defined __ia64__
CheckTypeSize(gunichar,4, 11486, 3, 3.1, NULL, 11412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gunichar,4, 11486, 6, 3.1, NULL, 11412, NULL)
#elif defined __powerpc64__
CheckTypeSize(gunichar,4, 11486, 9, 3.1, NULL, 11412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gunichar,4, 11486, 10, 3.1, NULL, 11412, NULL)
#elif defined __s390x__
CheckTypeSize(gunichar,4, 11486, 12, 3.1, NULL, 11412, NULL)
#else
Msg("Find size of gunichar (11486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11412,NULL);\n",architecture,11486,0);
#endif

#if defined __i386__
CheckTypeSize(GCompletionFunc,4, 11489, 2, 3.1, NULL, 11488, NULL)
#elif defined __x86_64__
CheckTypeSize(GCompletionFunc,8, 11489, 11, 3.1, NULL, 11488, NULL)
#elif defined __ia64__
CheckTypeSize(GCompletionFunc,8, 11489, 3, 3.1, NULL, 11488, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCompletionFunc,4, 11489, 6, 3.1, NULL, 11488, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCompletionFunc,8, 11489, 9, 3.1, NULL, 11488, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCompletionFunc,4, 11489, 10, 3.1, NULL, 11488, NULL)
#elif defined __s390x__
CheckTypeSize(GCompletionFunc,8, 11489, 12, 3.1, NULL, 11488, NULL)
#else
Msg("Find size of GCompletionFunc (11489)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11488,NULL);\n",architecture,11489,0);
#endif

#if defined __i386__
CheckTypeSize(GCompletionStrncmpFunc,4, 11491, 2, 3.1, NULL, 11490, NULL)
#elif defined __x86_64__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 11, 3.1, NULL, 11490, NULL)
#elif defined __ia64__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 3, 3.1, NULL, 11490, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCompletionStrncmpFunc,4, 11491, 6, 3.1, NULL, 11490, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 9, 3.1, NULL, 11490, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCompletionStrncmpFunc,4, 11491, 10, 3.1, NULL, 11490, NULL)
#elif defined __s390x__
CheckTypeSize(GCompletionStrncmpFunc,8, 11491, 12, 3.1, NULL, 11490, NULL)
#else
Msg("Find size of GCompletionStrncmpFunc (11491)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11490,NULL);\n",architecture,11491,0);
#endif

#if defined __i386__
CheckTypeSize(GCompletion,20, 11492, 2, 3.1, NULL, 11487, NULL)
#elif defined __x86_64__
CheckTypeSize(GCompletion,40, 11492, 11, 3.1, NULL, 11487, NULL)
#elif defined __ia64__
CheckTypeSize(GCompletion,40, 11492, 3, 3.1, NULL, 11487, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCompletion,20, 11492, 6, 3.1, NULL, 11487, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCompletion,40, 11492, 9, 3.1, NULL, 11487, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCompletion,20, 11492, 10, 3.1, NULL, 11487, NULL)
#elif defined __s390x__
CheckTypeSize(GCompletion,40, 11492, 12, 3.1, NULL, 11487, NULL)
#else
Msg("Find size of GCompletion (11492)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11487,NULL);\n",architecture,11492,0);
#endif

#if defined __i386__
CheckTypeSize(gconstpointer,4, 11500, 2, 3.1, NULL, 10308, NULL)
#elif defined __x86_64__
CheckTypeSize(gconstpointer,8, 11500, 11, 3.1, NULL, 10308, NULL)
#elif defined __ia64__
CheckTypeSize(gconstpointer,8, 11500, 3, 3.1, NULL, 10308, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gconstpointer,4, 11500, 6, 3.1, NULL, 10308, NULL)
#elif defined __powerpc64__
CheckTypeSize(gconstpointer,8, 11500, 9, 3.1, NULL, 10308, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gconstpointer,4, 11500, 10, 3.1, NULL, 10308, NULL)
#elif defined __s390x__
CheckTypeSize(gconstpointer,8, 11500, 12, 3.1, NULL, 10308, NULL)
#else
Msg("Find size of gconstpointer (11500)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10308,NULL);\n",architecture,11500,0);
#endif

#if defined __i386__
CheckTypeSize(GHashFunc,4, 11502, 2, 3.1, NULL, 11501, NULL)
#elif defined __x86_64__
CheckTypeSize(GHashFunc,8, 11502, 11, 3.1, NULL, 11501, NULL)
#elif defined __ia64__
CheckTypeSize(GHashFunc,8, 11502, 3, 3.1, NULL, 11501, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHashFunc,4, 11502, 6, 3.1, NULL, 11501, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHashFunc,8, 11502, 9, 3.1, NULL, 11501, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHashFunc,4, 11502, 10, 3.1, NULL, 11501, NULL)
#elif defined __s390x__
CheckTypeSize(GHashFunc,8, 11502, 12, 3.1, NULL, 11501, NULL)
#else
Msg("Find size of GHashFunc (11502)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11501,NULL);\n",architecture,11502,0);
#endif

#if defined __i386__
CheckTypeSize(GEqualFunc,4, 11504, 2, 3.1, NULL, 11503, NULL)
#elif defined __x86_64__
CheckTypeSize(GEqualFunc,8, 11504, 11, 3.1, NULL, 11503, NULL)
#elif defined __ia64__
CheckTypeSize(GEqualFunc,8, 11504, 3, 3.1, NULL, 11503, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GEqualFunc,4, 11504, 6, 3.1, NULL, 11503, NULL)
#elif defined __powerpc64__
CheckTypeSize(GEqualFunc,8, 11504, 9, 3.1, NULL, 11503, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GEqualFunc,4, 11504, 10, 3.1, NULL, 11503, NULL)
#elif defined __s390x__
CheckTypeSize(GEqualFunc,8, 11504, 12, 3.1, NULL, 11503, NULL)
#else
Msg("Find size of GEqualFunc (11504)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11503,NULL);\n",architecture,11504,0);
#endif

#if defined __i386__
CheckTypeSize(GStaticMutex,28, 11511, 2, 3.1, NULL, 11506, NULL)
#elif defined __x86_64__
CheckTypeSize(GStaticMutex,48, 11511, 11, 3.1, NULL, 11506, NULL)
#elif defined __ia64__
CheckTypeSize(GStaticMutex,48, 11511, 3, 3.1, NULL, 11506, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GStaticMutex,32, 11511, 6, 3.1, NULL, 11506, NULL)
#elif defined __powerpc64__
CheckTypeSize(GStaticMutex,48, 11511, 9, 3.1, NULL, 11506, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GStaticMutex,32, 11511, 10, 3.1, NULL, 11506, NULL)
#elif defined __s390x__
CheckTypeSize(GStaticMutex,48, 11511, 12, 3.1, NULL, 11506, NULL)
#else
Msg("Find size of GStaticMutex (11511)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11506,NULL);\n",architecture,11511,0);
#endif

#if defined __i386__
CheckTypeSize(GSystemThread,8, 11513, 2, 3.1, NULL, 11512, NULL)
#elif defined __x86_64__
CheckTypeSize(GSystemThread,8, 11513, 11, 3.1, NULL, 11512, NULL)
#elif defined __ia64__
CheckTypeSize(GSystemThread,8, 11513, 3, 3.1, NULL, 11512, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSystemThread,8, 11513, 6, 3.1, NULL, 11512, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSystemThread,8, 11513, 9, 3.1, NULL, 11512, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSystemThread,8, 11513, 10, 3.1, NULL, 11512, NULL)
#elif defined __s390x__
CheckTypeSize(GSystemThread,8, 11513, 12, 3.1, NULL, 11512, NULL)
#else
Msg("Find size of GSystemThread (11513)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11512,NULL);\n",architecture,11513,0);
#endif

#if defined __i386__
CheckTypeSize(GStaticRecMutex,40, 11514, 2, 3.1, NULL, 11505, NULL)
#elif defined __x86_64__
CheckTypeSize(GStaticRecMutex,64, 11514, 11, 3.1, NULL, 11505, NULL)
#elif defined __ia64__
CheckTypeSize(GStaticRecMutex,64, 11514, 3, 3.1, NULL, 11505, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GStaticRecMutex,48, 11514, 6, 3.1, NULL, 11505, NULL)
#elif defined __powerpc64__
CheckTypeSize(GStaticRecMutex,64, 11514, 9, 3.1, NULL, 11505, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GStaticRecMutex,48, 11514, 10, 3.1, NULL, 11505, NULL)
#elif defined __s390x__
CheckTypeSize(GStaticRecMutex,64, 11514, 12, 3.1, NULL, 11505, NULL)
#else
Msg("Find size of GStaticRecMutex (11514)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11505,NULL);\n",architecture,11514,0);
#endif

#if defined __i386__
CheckTypeSize(GIOStatus,4, 11526, 2, 3.1, NULL, 11525, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOStatus,4, 11526, 11, 3.1, NULL, 11525, NULL)
#elif defined __ia64__
CheckTypeSize(GIOStatus,4, 11526, 3, 3.1, NULL, 11525, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOStatus,4, 11526, 6, 3.1, NULL, 11525, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOStatus,4, 11526, 9, 3.1, NULL, 11525, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOStatus,4, 11526, 10, 3.1, NULL, 11525, NULL)
#elif defined __s390x__
CheckTypeSize(GIOStatus,4, 11526, 12, 3.1, NULL, 11525, NULL)
#else
Msg("Find size of GIOStatus (11526)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11525,NULL);\n",architecture,11526,0);
#endif

#if defined __i386__
CheckTypeSize(GIOChannel,60, 11529, 2, 3.1, NULL, 11527, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOChannel,112, 11529, 11, 3.1, NULL, 11527, NULL)
#elif defined __ia64__
CheckTypeSize(GIOChannel,112, 11529, 3, 3.1, NULL, 11527, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOChannel,60, 11529, 6, 3.1, NULL, 11527, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOChannel,112, 11529, 9, 3.1, NULL, 11527, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOChannel,60, 11529, 10, 3.1, NULL, 11527, NULL)
#elif defined __s390x__
CheckTypeSize(GIOChannel,112, 11529, 12, 3.1, NULL, 11527, NULL)
#else
Msg("Find size of GIOChannel (11529)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11527,NULL);\n",architecture,11529,0);
#endif

#if defined __i386__
CheckTypeSize(GSeekType,4, 11535, 2, 3.1, NULL, 11534, NULL)
#elif defined __x86_64__
CheckTypeSize(GSeekType,4, 11535, 11, 3.1, NULL, 11534, NULL)
#elif defined __ia64__
CheckTypeSize(GSeekType,4, 11535, 3, 3.1, NULL, 11534, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSeekType,4, 11535, 6, 3.1, NULL, 11534, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSeekType,4, 11535, 9, 3.1, NULL, 11534, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSeekType,4, 11535, 10, 3.1, NULL, 11534, NULL)
#elif defined __s390x__
CheckTypeSize(GSeekType,4, 11535, 12, 3.1, NULL, 11534, NULL)
#else
Msg("Find size of GSeekType (11535)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11534,NULL);\n",architecture,11535,0);
#endif

#if defined __i386__
CheckTypeSize(GSource,52, 11540, 2, 3.1, NULL, 11538, NULL)
#elif defined __x86_64__
CheckTypeSize(GSource,96, 11540, 11, 3.1, NULL, 11538, NULL)
#elif defined __ia64__
CheckTypeSize(GSource,96, 11540, 3, 3.1, NULL, 11538, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSource,52, 11540, 6, 3.1, NULL, 11538, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSource,96, 11540, 9, 3.1, NULL, 11538, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSource,52, 11540, 10, 3.1, NULL, 11538, NULL)
#elif defined __s390x__
CheckTypeSize(GSource,96, 11540, 12, 3.1, NULL, 11538, NULL)
#else
Msg("Find size of GSource (11540)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11538,NULL);\n",architecture,11540,0);
#endif

#if defined __i386__
CheckTypeSize(GSourceFunc,4, 11543, 2, 3.1, NULL, 11542, NULL)
#elif defined __x86_64__
CheckTypeSize(GSourceFunc,8, 11543, 11, 3.1, NULL, 11542, NULL)
#elif defined __ia64__
CheckTypeSize(GSourceFunc,8, 11543, 3, 3.1, NULL, 11542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSourceFunc,4, 11543, 6, 3.1, NULL, 11542, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSourceFunc,8, 11543, 9, 3.1, NULL, 11542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSourceFunc,4, 11543, 10, 3.1, NULL, 11542, NULL)
#elif defined __s390x__
CheckTypeSize(GSourceFunc,8, 11543, 12, 3.1, NULL, 11542, NULL)
#else
Msg("Find size of GSourceFunc (11543)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11542,NULL);\n",architecture,11543,0);
#endif

#if defined __i386__
CheckTypeSize(GSourceCallbackFuncs,12, 11546, 2, 3.1, NULL, 11539, NULL)
#elif defined __x86_64__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 11, 3.1, NULL, 11539, NULL)
#elif defined __ia64__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 3, 3.1, NULL, 11539, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSourceCallbackFuncs,12, 11546, 6, 3.1, NULL, 11539, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 9, 3.1, NULL, 11539, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSourceCallbackFuncs,12, 11546, 10, 3.1, NULL, 11539, NULL)
#elif defined __s390x__
CheckTypeSize(GSourceCallbackFuncs,24, 11546, 12, 3.1, NULL, 11539, NULL)
#else
Msg("Find size of GSourceCallbackFuncs (11546)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11539,NULL);\n",architecture,11546,0);
#endif

#if defined __i386__
CheckTypeSize(GSourceDummyMarshal,4, 11553, 2, 3.1, NULL, 10318, NULL)
#elif defined __x86_64__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 11, 3.1, NULL, 10318, NULL)
#elif defined __ia64__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 3, 3.1, NULL, 10318, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSourceDummyMarshal,4, 11553, 6, 3.1, NULL, 10318, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 9, 3.1, NULL, 10318, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSourceDummyMarshal,4, 11553, 10, 3.1, NULL, 10318, NULL)
#elif defined __s390x__
CheckTypeSize(GSourceDummyMarshal,8, 11553, 12, 3.1, NULL, 10318, NULL)
#else
Msg("Find size of GSourceDummyMarshal (11553)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10318,NULL);\n",architecture,11553,0);
#endif

#if defined __i386__
CheckTypeSize(GSourceFuncs,24, 11554, 2, 3.1, NULL, 11548, NULL)
#elif defined __x86_64__
CheckTypeSize(GSourceFuncs,48, 11554, 11, 3.1, NULL, 11548, NULL)
#elif defined __ia64__
CheckTypeSize(GSourceFuncs,48, 11554, 3, 3.1, NULL, 11548, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSourceFuncs,24, 11554, 6, 3.1, NULL, 11548, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSourceFuncs,48, 11554, 9, 3.1, NULL, 11548, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSourceFuncs,24, 11554, 10, 3.1, NULL, 11548, NULL)
#elif defined __s390x__
CheckTypeSize(GSourceFuncs,48, 11554, 12, 3.1, NULL, 11548, NULL)
#else
Msg("Find size of GSourceFuncs (11554)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11548,NULL);\n",architecture,11554,0);
#endif

#if defined __i386__
CheckTypeSize(GIOCondition,4, 11560, 2, 3.1, NULL, 11559, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOCondition,4, 11560, 11, 3.1, NULL, 11559, NULL)
#elif defined __ia64__
CheckTypeSize(GIOCondition,4, 11560, 3, 3.1, NULL, 11559, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOCondition,4, 11560, 6, 3.1, NULL, 11559, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOCondition,4, 11560, 9, 3.1, NULL, 11559, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOCondition,4, 11560, 10, 3.1, NULL, 11559, NULL)
#elif defined __s390x__
CheckTypeSize(GIOCondition,4, 11560, 12, 3.1, NULL, 11559, NULL)
#else
Msg("Find size of GIOCondition (11560)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11559,NULL);\n",architecture,11560,0);
#endif

#if defined __i386__
CheckTypeSize(GIOFlags,4, 11564, 2, 3.1, NULL, 11563, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOFlags,4, 11564, 11, 3.1, NULL, 11563, NULL)
#elif defined __ia64__
CheckTypeSize(GIOFlags,4, 11564, 3, 3.1, NULL, 11563, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOFlags,4, 11564, 6, 3.1, NULL, 11563, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOFlags,4, 11564, 9, 3.1, NULL, 11563, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOFlags,4, 11564, 10, 3.1, NULL, 11563, NULL)
#elif defined __s390x__
CheckTypeSize(GIOFlags,4, 11564, 12, 3.1, NULL, 11563, NULL)
#else
Msg("Find size of GIOFlags (11564)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11563,NULL);\n",architecture,11564,0);
#endif

#if defined __i386__
CheckTypeSize(GIOFuncs,32, 11567, 2, 3.1, NULL, 11528, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOFuncs,64, 11567, 11, 3.1, NULL, 11528, NULL)
#elif defined __ia64__
CheckTypeSize(GIOFuncs,64, 11567, 3, 3.1, NULL, 11528, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOFuncs,32, 11567, 6, 3.1, NULL, 11528, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOFuncs,64, 11567, 9, 3.1, NULL, 11528, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOFuncs,32, 11567, 10, 3.1, NULL, 11528, NULL)
#elif defined __s390x__
CheckTypeSize(GIOFuncs,64, 11567, 12, 3.1, NULL, 11528, NULL)
#else
Msg("Find size of GIOFuncs (11567)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11528,NULL);\n",architecture,11567,0);
#endif

#if defined __i386__
CheckTypeSize(GIConv,4, 11571, 2, 3.1, NULL, 11570, NULL)
#elif defined __x86_64__
CheckTypeSize(GIConv,8, 11571, 11, 3.1, NULL, 11570, NULL)
#elif defined __ia64__
CheckTypeSize(GIConv,8, 11571, 3, 3.1, NULL, 11570, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIConv,4, 11571, 6, 3.1, NULL, 11570, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIConv,8, 11571, 9, 3.1, NULL, 11570, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIConv,4, 11571, 10, 3.1, NULL, 11570, NULL)
#elif defined __s390x__
CheckTypeSize(GIConv,8, 11571, 12, 3.1, NULL, 11570, NULL)
#else
Msg("Find size of GIConv (11571)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11570,NULL);\n",architecture,11571,0);
#endif

#if defined __i386__
CheckTypeSize(GSpawnFlags,4, 11577, 2, 3.1, NULL, 11576, NULL)
#elif defined __x86_64__
CheckTypeSize(GSpawnFlags,4, 11577, 11, 3.1, NULL, 11576, NULL)
#elif defined __ia64__
CheckTypeSize(GSpawnFlags,4, 11577, 3, 3.1, NULL, 11576, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSpawnFlags,4, 11577, 6, 3.1, NULL, 11576, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSpawnFlags,4, 11577, 9, 3.1, NULL, 11576, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSpawnFlags,4, 11577, 10, 3.1, NULL, 11576, NULL)
#elif defined __s390x__
CheckTypeSize(GSpawnFlags,4, 11577, 12, 3.1, NULL, 11576, NULL)
#else
Msg("Find size of GSpawnFlags (11577)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11576,NULL);\n",architecture,11577,0);
#endif

#if defined __i386__
CheckTypeSize(GSpawnChildSetupFunc,4, 11578, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSpawnChildSetupFunc,4, 11578, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSpawnChildSetupFunc,4, 11578, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GSpawnChildSetupFunc,8, 11578, 12, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GSpawnChildSetupFunc (11578)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11578,0);
#endif

#if defined __i386__
CheckTypeSize(GPid,4, 11579, 2, 3.1, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(GPid,4, 11579, 11, 3.1, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(GPid,4, 11579, 3, 3.1, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GPid,4, 11579, 6, 3.1, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(GPid,4, 11579, 9, 3.1, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GPid,4, 11579, 10, 3.1, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(GPid,4, 11579, 12, 3.1, NULL, 6, NULL)
#else
Msg("Find size of GPid (11579)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,6,NULL);\n",architecture,11579,0);
#endif

#if defined __i386__
CheckTypeSize(GFunc,4, 11583, 2, 3.1, NULL, 11582, NULL)
#elif defined __x86_64__
CheckTypeSize(GFunc,8, 11583, 11, 3.1, NULL, 11582, NULL)
#elif defined __ia64__
CheckTypeSize(GFunc,8, 11583, 3, 3.1, NULL, 11582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GFunc,4, 11583, 6, 3.1, NULL, 11582, NULL)
#elif defined __powerpc64__
CheckTypeSize(GFunc,8, 11583, 9, 3.1, NULL, 11582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GFunc,4, 11583, 10, 3.1, NULL, 11582, NULL)
#elif defined __s390x__
CheckTypeSize(GFunc,8, 11583, 12, 3.1, NULL, 11582, NULL)
#else
Msg("Find size of GFunc (11583)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11582,NULL);\n",architecture,11583,0);
#endif

#if defined __i386__
CheckTypeSize(GThreadPool,12, 11584, 2, 3.1, NULL, 11581, NULL)
#elif defined __x86_64__
CheckTypeSize(GThreadPool,24, 11584, 11, 3.1, NULL, 11581, NULL)
#elif defined __ia64__
CheckTypeSize(GThreadPool,24, 11584, 3, 3.1, NULL, 11581, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GThreadPool,12, 11584, 6, 3.1, NULL, 11581, NULL)
#elif defined __powerpc64__
CheckTypeSize(GThreadPool,24, 11584, 9, 3.1, NULL, 11581, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GThreadPool,12, 11584, 10, 3.1, NULL, 11581, NULL)
#elif defined __s390x__
CheckTypeSize(GThreadPool,24, 11584, 12, 3.1, NULL, 11581, NULL)
#else
Msg("Find size of GThreadPool (11584)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11581,NULL);\n",architecture,11584,0);
#endif

#if defined __i386__
CheckTypeSize(GDate,8, 11587, 2, 3.1, NULL, 11586, NULL)
#elif defined __x86_64__
CheckTypeSize(GDate,8, 11587, 11, 3.1, NULL, 11586, NULL)
#elif defined __ia64__
CheckTypeSize(GDate,8, 11587, 3, 3.1, NULL, 11586, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDate,8, 11587, 6, 3.1, NULL, 11586, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDate,8, 11587, 9, 3.1, NULL, 11586, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDate,8, 11587, 10, 3.1, NULL, 11586, NULL)
#elif defined __s390x__
CheckTypeSize(GDate,8, 11587, 12, 3.1, NULL, 11586, NULL)
#else
Msg("Find size of GDate (11587)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11586,NULL);\n",architecture,11587,0);
#endif

#if defined __i386__
CheckTypeSize(GDateMonth,4, 11590, 2, 3.1, NULL, 11589, NULL)
#elif defined __x86_64__
CheckTypeSize(GDateMonth,4, 11590, 11, 3.1, NULL, 11589, NULL)
#elif defined __ia64__
CheckTypeSize(GDateMonth,4, 11590, 3, 3.1, NULL, 11589, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDateMonth,4, 11590, 6, 3.1, NULL, 11589, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDateMonth,4, 11590, 9, 3.1, NULL, 11589, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDateMonth,4, 11590, 10, 3.1, NULL, 11589, NULL)
#elif defined __s390x__
CheckTypeSize(GDateMonth,4, 11590, 12, 3.1, NULL, 11589, NULL)
#else
Msg("Find size of GDateMonth (11590)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11589,NULL);\n",architecture,11590,0);
#endif

#if defined __i386__
CheckTypeSize(gushort,2, 11595, 2, 3.1, NULL, 11209, NULL)
#elif defined __x86_64__
CheckTypeSize(gushort,2, 11595, 11, 3.1, NULL, 11209, NULL)
#elif defined __ia64__
CheckTypeSize(gushort,2, 11595, 3, 3.1, NULL, 11209, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gushort,2, 11595, 6, 3.1, NULL, 11209, NULL)
#elif defined __powerpc64__
CheckTypeSize(gushort,2, 11595, 9, 3.1, NULL, 11209, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gushort,2, 11595, 10, 3.1, NULL, 11209, NULL)
#elif defined __s390x__
CheckTypeSize(gushort,2, 11595, 12, 3.1, NULL, 11209, NULL)
#else
Msg("Find size of gushort (11595)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11209,NULL);\n",architecture,11595,0);
#endif

#if defined __i386__
CheckTypeSize(GPollFD,8, 11596, 2, 3.1, NULL, 11594, NULL)
#elif defined __x86_64__
CheckTypeSize(GPollFD,8, 11596, 11, 3.1, NULL, 11594, NULL)
#elif defined __ia64__
CheckTypeSize(GPollFD,8, 11596, 3, 3.1, NULL, 11594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GPollFD,8, 11596, 6, 3.1, NULL, 11594, NULL)
#elif defined __powerpc64__
CheckTypeSize(GPollFD,8, 11596, 9, 3.1, NULL, 11594, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GPollFD,8, 11596, 10, 3.1, NULL, 11594, NULL)
#elif defined __s390x__
CheckTypeSize(GPollFD,8, 11596, 12, 3.1, NULL, 11594, NULL)
#else
Msg("Find size of GPollFD (11596)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11594,NULL);\n",architecture,11596,0);
#endif

#if defined __i386__
CheckTypeSize(gdouble,8, 11598, 2, 3.1, NULL, 13, NULL)
#elif defined __x86_64__
CheckTypeSize(gdouble,8, 11598, 11, 3.1, NULL, 13, NULL)
#elif defined __ia64__
CheckTypeSize(gdouble,8, 11598, 3, 3.1, NULL, 13, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gdouble,8, 11598, 6, 3.1, NULL, 13, NULL)
#elif defined __powerpc64__
CheckTypeSize(gdouble,8, 11598, 9, 3.1, NULL, 13, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gdouble,8, 11598, 10, 3.1, NULL, 13, NULL)
#elif defined __s390x__
CheckTypeSize(gdouble,8, 11598, 12, 3.1, NULL, 13, NULL)
#else
Msg("Find size of gdouble (11598)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13,NULL);\n",architecture,11598,0);
#endif

#if defined __i386__
CheckTypeSize(GCompareDataFunc,4, 11603, 2, 3.1, NULL, 11602, NULL)
#elif defined __x86_64__
CheckTypeSize(GCompareDataFunc,8, 11603, 11, 3.1, NULL, 11602, NULL)
#elif defined __ia64__
CheckTypeSize(GCompareDataFunc,8, 11603, 3, 3.1, NULL, 11602, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCompareDataFunc,4, 11603, 6, 3.1, NULL, 11602, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCompareDataFunc,8, 11603, 9, 3.1, NULL, 11602, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCompareDataFunc,4, 11603, 10, 3.1, NULL, 11602, NULL)
#elif defined __s390x__
CheckTypeSize(GCompareDataFunc,8, 11603, 12, 3.1, NULL, 11602, NULL)
#else
Msg("Find size of GCompareDataFunc (11603)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11602,NULL);\n",architecture,11603,0);
#endif

#if defined __i386__
CheckTypeSize(guint8,1, 11604, 2, 3.1, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(guint8,1, 11604, 11, 3.1, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(guint8,1, 11604, 3, 3.1, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(guint8,1, 11604, 6, 3.1, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(guint8,1, 11604, 9, 3.1, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(guint8,1, 11604, 10, 3.1, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(guint8,1, 11604, 12, 3.1, NULL, 3, NULL)
#else
Msg("Find size of guint8 (11604)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,3,NULL);\n",architecture,11604,0);
#endif

#if defined __i386__
CheckTypeSize(GDateYear,2, 11605, 2, 3.1, NULL, 11396, NULL)
#elif defined __x86_64__
CheckTypeSize(GDateYear,2, 11605, 11, 3.1, NULL, 11396, NULL)
#elif defined __ia64__
CheckTypeSize(GDateYear,2, 11605, 3, 3.1, NULL, 11396, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDateYear,2, 11605, 6, 3.1, NULL, 11396, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDateYear,2, 11605, 9, 3.1, NULL, 11396, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDateYear,2, 11605, 10, 3.1, NULL, 11396, NULL)
#elif defined __s390x__
CheckTypeSize(GDateYear,2, 11605, 12, 3.1, NULL, 11396, NULL)
#else
Msg("Find size of GDateYear (11605)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11396,NULL);\n",architecture,11605,0);
#endif

#if defined __i386__
CheckTypeSize(GHFunc,4, 11610, 2, 3.1, NULL, 11609, NULL)
#elif defined __x86_64__
CheckTypeSize(GHFunc,8, 11610, 11, 3.1, NULL, 11609, NULL)
#elif defined __ia64__
CheckTypeSize(GHFunc,8, 11610, 3, 3.1, NULL, 11609, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHFunc,4, 11610, 6, 3.1, NULL, 11609, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHFunc,8, 11610, 9, 3.1, NULL, 11609, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHFunc,4, 11610, 10, 3.1, NULL, 11609, NULL)
#elif defined __s390x__
CheckTypeSize(GHFunc,8, 11610, 12, 3.1, NULL, 11609, NULL)
#else
Msg("Find size of GHFunc (11610)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11609,NULL);\n",architecture,11610,0);
#endif

#if defined __i386__
CheckTypeSize(GScannerConfig,24, 11615, 2, 3.1, NULL, 11614, NULL)
#elif defined __x86_64__
CheckTypeSize(GScannerConfig,40, 11615, 11, 3.1, NULL, 11614, NULL)
#elif defined __ia64__
CheckTypeSize(GScannerConfig,40, 11615, 3, 3.1, NULL, 11614, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GScannerConfig,24, 11615, 6, 3.1, NULL, 11614, NULL)
#elif defined __powerpc64__
CheckTypeSize(GScannerConfig,40, 11615, 9, 3.1, NULL, 11614, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GScannerConfig,24, 11615, 10, 3.1, NULL, 11614, NULL)
#elif defined __s390x__
CheckTypeSize(GScannerConfig,40, 11615, 12, 3.1, NULL, 11614, NULL)
#else
Msg("Find size of GScannerConfig (11615)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11614,NULL);\n",architecture,11615,0);
#endif

#if defined __i386__
CheckTypeSize(GTokenType,4, 11618, 2, 3.1, NULL, 11617, NULL)
#elif defined __x86_64__
CheckTypeSize(GTokenType,4, 11618, 11, 3.1, NULL, 11617, NULL)
#elif defined __ia64__
CheckTypeSize(GTokenType,4, 11618, 3, 3.1, NULL, 11617, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTokenType,4, 11618, 6, 3.1, NULL, 11617, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTokenType,4, 11618, 9, 3.1, NULL, 11617, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTokenType,4, 11618, 10, 3.1, NULL, 11617, NULL)
#elif defined __s390x__
CheckTypeSize(GTokenType,4, 11618, 12, 3.1, NULL, 11617, NULL)
#else
Msg("Find size of GTokenType (11618)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11617,NULL);\n",architecture,11618,0);
#endif

#if defined __i386__
CheckTypeSize(guchar,1, 11622, 2, 3.1, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(guchar,1, 11622, 11, 3.1, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(guchar,1, 11622, 3, 3.1, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(guchar,1, 11622, 6, 3.1, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(guchar,1, 11622, 9, 3.1, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(guchar,1, 11622, 10, 3.1, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(guchar,1, 11622, 12, 3.1, NULL, 3, NULL)
#else
Msg("Find size of guchar (11622)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,3,NULL);\n",architecture,11622,0);
#endif

#if defined __i386__
CheckTypeSize(GTokenValue,8, 11623, 2, 3.1, NULL, 11619, NULL)
#elif defined __x86_64__
CheckTypeSize(GTokenValue,8, 11623, 11, 3.1, NULL, 11619, NULL)
#elif defined __ia64__
CheckTypeSize(GTokenValue,8, 11623, 3, 3.1, NULL, 11619, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTokenValue,8, 11623, 6, 3.1, NULL, 11619, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTokenValue,8, 11623, 9, 3.1, NULL, 11619, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTokenValue,8, 11623, 10, 3.1, NULL, 11619, NULL)
#elif defined __s390x__
CheckTypeSize(GTokenValue,8, 11623, 12, 3.1, NULL, 11619, NULL)
#else
Msg("Find size of GTokenValue (11623)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11619,NULL);\n",architecture,11623,0);
#endif

#if defined __i386__
CheckTypeSize(GScanner,92, 11624, 2, 3.1, NULL, 11613, NULL)
#elif defined __x86_64__
CheckTypeSize(GScanner,144, 11624, 11, 3.1, NULL, 11613, NULL)
#elif defined __ia64__
CheckTypeSize(GScanner,144, 11624, 3, 3.1, NULL, 11613, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GScanner,104, 11624, 6, 3.1, NULL, 11613, NULL)
#elif defined __powerpc64__
CheckTypeSize(GScanner,144, 11624, 9, 3.1, NULL, 11613, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GScanner,104, 11624, 10, 3.1, NULL, 11613, NULL)
#elif defined __s390x__
CheckTypeSize(GScanner,144, 11624, 12, 3.1, NULL, 11613, NULL)
#else
Msg("Find size of GScanner (11624)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11613,NULL);\n",architecture,11624,0);
#endif

#if defined __i386__
CheckTypeSize(GScannerMsgFunc,4, 11627, 2, 3.1, NULL, 11626, NULL)
#elif defined __x86_64__
CheckTypeSize(GScannerMsgFunc,8, 11627, 11, 3.1, NULL, 11626, NULL)
#elif defined __ia64__
CheckTypeSize(GScannerMsgFunc,8, 11627, 3, 3.1, NULL, 11626, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GScannerMsgFunc,4, 11627, 6, 3.1, NULL, 11626, NULL)
#elif defined __powerpc64__
CheckTypeSize(GScannerMsgFunc,8, 11627, 9, 3.1, NULL, 11626, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GScannerMsgFunc,4, 11627, 10, 3.1, NULL, 11626, NULL)
#elif defined __s390x__
CheckTypeSize(GScannerMsgFunc,8, 11627, 12, 3.1, NULL, 11626, NULL)
#else
Msg("Find size of GScannerMsgFunc (11627)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11626,NULL);\n",architecture,11627,0);
#endif

#if defined __i386__
CheckTypeSize(GByteArray,8, 11630, 2, 3.1, NULL, 11628, NULL)
#elif defined __x86_64__
CheckTypeSize(GByteArray,16, 11630, 11, 3.1, NULL, 11628, NULL)
#elif defined __ia64__
CheckTypeSize(GByteArray,16, 11630, 3, 3.1, NULL, 11628, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GByteArray,8, 11630, 6, 3.1, NULL, 11628, NULL)
#elif defined __powerpc64__
CheckTypeSize(GByteArray,16, 11630, 9, 3.1, NULL, 11628, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GByteArray,8, 11630, 10, 3.1, NULL, 11628, NULL)
#elif defined __s390x__
CheckTypeSize(GByteArray,16, 11630, 12, 3.1, NULL, 11628, NULL)
#else
Msg("Find size of GByteArray (11630)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11628,NULL);\n",architecture,11630,0);
#endif

#if defined __i386__
CheckTypeSize(GKeyFileFlags,4, 11633, 2, 3.1, NULL, 11632, NULL)
#elif defined __x86_64__
CheckTypeSize(GKeyFileFlags,4, 11633, 11, 3.1, NULL, 11632, NULL)
#elif defined __ia64__
CheckTypeSize(GKeyFileFlags,4, 11633, 3, 3.1, NULL, 11632, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GKeyFileFlags,4, 11633, 6, 3.1, NULL, 11632, NULL)
#elif defined __powerpc64__
CheckTypeSize(GKeyFileFlags,4, 11633, 9, 3.1, NULL, 11632, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GKeyFileFlags,4, 11633, 10, 3.1, NULL, 11632, NULL)
#elif defined __s390x__
CheckTypeSize(GKeyFileFlags,4, 11633, 12, 3.1, NULL, 11632, NULL)
#else
Msg("Find size of GKeyFileFlags (11633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11632,NULL);\n",architecture,11633,0);
#endif

#if defined __i386__
CheckTypeSize(GTrashStack,4, 11635, 2, 3.1, NULL, 11634, NULL)
#elif defined __x86_64__
CheckTypeSize(GTrashStack,8, 11635, 11, 3.1, NULL, 11634, NULL)
#elif defined __ia64__
CheckTypeSize(GTrashStack,8, 11635, 3, 3.1, NULL, 11634, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTrashStack,4, 11635, 6, 3.1, NULL, 11634, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTrashStack,8, 11635, 9, 3.1, NULL, 11634, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTrashStack,4, 11635, 10, 3.1, NULL, 11634, NULL)
#elif defined __s390x__
CheckTypeSize(GTrashStack,8, 11635, 12, 3.1, NULL, 11634, NULL)
#else
Msg("Find size of GTrashStack (11635)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11634,NULL);\n",architecture,11635,0);
#endif

#if defined __i386__
CheckTypeSize(gunichar2,2, 11638, 2, 3.1, NULL, 11396, NULL)
#elif defined __x86_64__
CheckTypeSize(gunichar2,2, 11638, 11, 3.1, NULL, 11396, NULL)
#elif defined __ia64__
CheckTypeSize(gunichar2,2, 11638, 3, 3.1, NULL, 11396, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gunichar2,2, 11638, 6, 3.1, NULL, 11396, NULL)
#elif defined __powerpc64__
CheckTypeSize(gunichar2,2, 11638, 9, 3.1, NULL, 11396, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gunichar2,2, 11638, 10, 3.1, NULL, 11396, NULL)
#elif defined __s390x__
CheckTypeSize(gunichar2,2, 11638, 12, 3.1, NULL, 11396, NULL)
#else
Msg("Find size of gunichar2 (11638)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11396,NULL);\n",architecture,11638,0);
#endif

#if defined __i386__
CheckTypeSize(glong,4, 11642, 2, 3.1, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(glong,8, 11642, 11, 3.1, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(glong,8, 11642, 3, 3.1, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(glong,4, 11642, 6, 3.1, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(glong,8, 11642, 9, 3.1, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(glong,4, 11642, 10, 3.1, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(glong,8, 11642, 12, 3.1, NULL, 8, NULL)
#else
Msg("Find size of glong (11642)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,8,NULL);\n",architecture,11642,0);
#endif

#if defined __i386__
CheckTypeSize(GArray,8, 11645, 2, 3.1, NULL, 11644, NULL)
#elif defined __x86_64__
CheckTypeSize(GArray,16, 11645, 11, 3.1, NULL, 11644, NULL)
#elif defined __ia64__
CheckTypeSize(GArray,16, 11645, 3, 3.1, NULL, 11644, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GArray,8, 11645, 6, 3.1, NULL, 11644, NULL)
#elif defined __powerpc64__
CheckTypeSize(GArray,16, 11645, 9, 3.1, NULL, 11644, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GArray,8, 11645, 10, 3.1, NULL, 11644, NULL)
#elif defined __s390x__
CheckTypeSize(GArray,16, 11645, 12, 3.1, NULL, 11644, NULL)
#else
Msg("Find size of GArray (11645)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11644,NULL);\n",architecture,11645,0);
#endif

#if defined __i386__
CheckTypeSize(GNode,20, 11648, 2, 3.1, NULL, 11647, NULL)
#elif defined __x86_64__
CheckTypeSize(GNode,40, 11648, 11, 3.1, NULL, 11647, NULL)
#elif defined __ia64__
CheckTypeSize(GNode,40, 11648, 3, 3.1, NULL, 11647, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GNode,20, 11648, 6, 3.1, NULL, 11647, NULL)
#elif defined __powerpc64__
CheckTypeSize(GNode,40, 11648, 9, 3.1, NULL, 11647, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GNode,20, 11648, 10, 3.1, NULL, 11647, NULL)
#elif defined __s390x__
CheckTypeSize(GNode,40, 11648, 12, 3.1, NULL, 11647, NULL)
#else
Msg("Find size of GNode (11648)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11647,NULL);\n",architecture,11648,0);
#endif

#if defined __i386__
CheckTypeSize(GHRFunc,4, 11651, 2, 3.1, NULL, 11650, NULL)
#elif defined __x86_64__
CheckTypeSize(GHRFunc,8, 11651, 11, 3.1, NULL, 11650, NULL)
#elif defined __ia64__
CheckTypeSize(GHRFunc,8, 11651, 3, 3.1, NULL, 11650, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHRFunc,4, 11651, 6, 3.1, NULL, 11650, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHRFunc,8, 11651, 9, 3.1, NULL, 11650, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHRFunc,4, 11651, 10, 3.1, NULL, 11650, NULL)
#elif defined __s390x__
CheckTypeSize(GHRFunc,8, 11651, 12, 3.1, NULL, 11650, NULL)
#else
Msg("Find size of GHRFunc (11651)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11650,NULL);\n",architecture,11651,0);
#endif

#if defined __i386__
CheckTypeSize(GCompareFunc,4, 11653, 2, 3.1, NULL, 11652, NULL)
#elif defined __x86_64__
CheckTypeSize(GCompareFunc,8, 11653, 11, 3.1, NULL, 11652, NULL)
#elif defined __ia64__
CheckTypeSize(GCompareFunc,8, 11653, 3, 3.1, NULL, 11652, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCompareFunc,4, 11653, 6, 3.1, NULL, 11652, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCompareFunc,8, 11653, 9, 3.1, NULL, 11652, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCompareFunc,4, 11653, 10, 3.1, NULL, 11652, NULL)
#elif defined __s390x__
CheckTypeSize(GCompareFunc,8, 11653, 12, 3.1, NULL, 11652, NULL)
#else
Msg("Find size of GCompareFunc (11653)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11652,NULL);\n",architecture,11653,0);
#endif

#if defined __i386__
CheckTypeSize(gint32,4, 11654, 2, 3.1, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(gint32,4, 11654, 11, 3.1, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(gint32,4, 11654, 3, 3.1, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gint32,4, 11654, 6, 3.1, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(gint32,4, 11654, 9, 3.1, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gint32,4, 11654, 10, 3.1, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(gint32,4, 11654, 12, 3.1, NULL, 6, NULL)
#else
Msg("Find size of gint32 (11654)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,6,NULL);\n",architecture,11654,0);
#endif

#if defined __i386__
CheckTypeSize(GTime,4, 11655, 2, 3.1, NULL, 11654, NULL)
#elif defined __x86_64__
CheckTypeSize(GTime,4, 11655, 11, 3.1, NULL, 11654, NULL)
#elif defined __ia64__
CheckTypeSize(GTime,4, 11655, 3, 3.1, NULL, 11654, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTime,4, 11655, 6, 3.1, NULL, 11654, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTime,4, 11655, 9, 3.1, NULL, 11654, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTime,4, 11655, 10, 3.1, NULL, 11654, NULL)
#elif defined __s390x__
CheckTypeSize(GTime,4, 11655, 12, 3.1, NULL, 11654, NULL)
#else
Msg("Find size of GTime (11655)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11654,NULL);\n",architecture,11655,0);
#endif

#if defined __i386__
CheckTypeSize(GPollFunc,4, 11657, 2, 3.1, NULL, 11656, NULL)
#elif defined __x86_64__
CheckTypeSize(GPollFunc,8, 11657, 11, 3.1, NULL, 11656, NULL)
#elif defined __ia64__
CheckTypeSize(GPollFunc,8, 11657, 3, 3.1, NULL, 11656, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GPollFunc,4, 11657, 6, 3.1, NULL, 11656, NULL)
#elif defined __powerpc64__
CheckTypeSize(GPollFunc,8, 11657, 9, 3.1, NULL, 11656, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GPollFunc,4, 11657, 10, 3.1, NULL, 11656, NULL)
#elif defined __s390x__
CheckTypeSize(GPollFunc,8, 11657, 12, 3.1, NULL, 11656, NULL)
#else
Msg("Find size of GPollFunc (11657)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11656,NULL);\n",architecture,11657,0);
#endif

#if defined __i386__
CheckTypeSize(GDateDay,1, 11659, 2, 3.1, NULL, 11604, NULL)
#elif defined __x86_64__
CheckTypeSize(GDateDay,1, 11659, 11, 3.1, NULL, 11604, NULL)
#elif defined __ia64__
CheckTypeSize(GDateDay,1, 11659, 3, 3.1, NULL, 11604, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDateDay,1, 11659, 6, 3.1, NULL, 11604, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDateDay,1, 11659, 9, 3.1, NULL, 11604, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDateDay,1, 11659, 10, 3.1, NULL, 11604, NULL)
#elif defined __s390x__
CheckTypeSize(GDateDay,1, 11659, 12, 3.1, NULL, 11604, NULL)
#else
Msg("Find size of GDateDay (11659)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11604,NULL);\n",architecture,11659,0);
#endif

#if defined __i386__
CheckTypeSize(GUnicodeBreakType,4, 11661, 2, 3.1, NULL, 11660, NULL)
#elif defined __x86_64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 11, 3.1, NULL, 11660, NULL)
#elif defined __ia64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 3, 3.1, NULL, 11660, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 6, 3.1, NULL, 11660, NULL)
#elif defined __powerpc64__
CheckTypeSize(GUnicodeBreakType,4, 11661, 9, 3.1, NULL, 11660, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GUnicodeBreakType,4, 11661, 10, 3.1, NULL, 11660, NULL)
#elif defined __s390x__
CheckTypeSize(GUnicodeBreakType,4, 11661, 12, 3.1, NULL, 11660, NULL)
#else
Msg("Find size of GUnicodeBreakType (11661)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11660,NULL);\n",architecture,11661,0);
#endif

#if defined __i386__
CheckTypeSize(GStaticRWLock,52, 11669, 2, 3.1, NULL, 11665, NULL)
#elif defined __x86_64__
CheckTypeSize(GStaticRWLock,80, 11669, 11, 3.1, NULL, 11665, NULL)
#elif defined __ia64__
CheckTypeSize(GStaticRWLock,80, 11669, 3, 3.1, NULL, 11665, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GStaticRWLock,56, 11669, 6, 3.1, NULL, 11665, NULL)
#elif defined __powerpc64__
CheckTypeSize(GStaticRWLock,80, 11669, 9, 3.1, NULL, 11665, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GStaticRWLock,56, 11669, 10, 3.1, NULL, 11665, NULL)
#elif defined __s390x__
CheckTypeSize(GStaticRWLock,80, 11669, 12, 3.1, NULL, 11665, NULL)
#else
Msg("Find size of GStaticRWLock (11669)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11665,NULL);\n",architecture,11669,0);
#endif

#if defined __i386__
CheckTypeSize(GChildWatchFunc,4, 11672, 2, 3.1, NULL, 11671, NULL)
#elif defined __x86_64__
CheckTypeSize(GChildWatchFunc,8, 11672, 11, 3.1, NULL, 11671, NULL)
#elif defined __ia64__
CheckTypeSize(GChildWatchFunc,8, 11672, 3, 3.1, NULL, 11671, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GChildWatchFunc,4, 11672, 6, 3.1, NULL, 11671, NULL)
#elif defined __powerpc64__
CheckTypeSize(GChildWatchFunc,8, 11672, 9, 3.1, NULL, 11671, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GChildWatchFunc,4, 11672, 10, 3.1, NULL, 11671, NULL)
#elif defined __s390x__
CheckTypeSize(GChildWatchFunc,8, 11672, 12, 3.1, NULL, 11671, NULL)
#else
Msg("Find size of GChildWatchFunc (11672)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11671,NULL);\n",architecture,11672,0);
#endif

#if defined __i386__
CheckTypeSize(GTimeVal,8, 11675, 2, 3.1, NULL, 11674, NULL)
#elif defined __x86_64__
CheckTypeSize(GTimeVal,16, 11675, 11, 3.1, NULL, 11674, NULL)
#elif defined __ia64__
CheckTypeSize(GTimeVal,16, 11675, 3, 3.1, NULL, 11674, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTimeVal,8, 11675, 6, 3.1, NULL, 11674, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTimeVal,16, 11675, 9, 3.1, NULL, 11674, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTimeVal,8, 11675, 10, 3.1, NULL, 11674, NULL)
#elif defined __s390x__
CheckTypeSize(GTimeVal,16, 11675, 12, 3.1, NULL, 11674, NULL)
#else
Msg("Find size of GTimeVal (11675)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11674,NULL);\n",architecture,11675,0);
#endif

#if defined __i386__
CheckTypeSize(GLogLevelFlags,4, 11678, 2, 3.1, NULL, 11677, NULL)
#elif defined __x86_64__
CheckTypeSize(GLogLevelFlags,4, 11678, 11, 3.1, NULL, 11677, NULL)
#elif defined __ia64__
CheckTypeSize(GLogLevelFlags,4, 11678, 3, 3.1, NULL, 11677, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLogLevelFlags,4, 11678, 6, 3.1, NULL, 11677, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLogLevelFlags,4, 11678, 9, 3.1, NULL, 11677, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLogLevelFlags,4, 11678, 10, 3.1, NULL, 11677, NULL)
#elif defined __s390x__
CheckTypeSize(GLogLevelFlags,4, 11678, 12, 3.1, NULL, 11677, NULL)
#else
Msg("Find size of GLogLevelFlags (11678)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11677,NULL);\n",architecture,11678,0);
#endif

#if defined __i386__
CheckTypeSize(GDateWeekday,4, 11681, 2, 3.1, NULL, 11680, NULL)
#elif defined __x86_64__
CheckTypeSize(GDateWeekday,4, 11681, 11, 3.1, NULL, 11680, NULL)
#elif defined __ia64__
CheckTypeSize(GDateWeekday,4, 11681, 3, 3.1, NULL, 11680, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDateWeekday,4, 11681, 6, 3.1, NULL, 11680, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDateWeekday,4, 11681, 9, 3.1, NULL, 11680, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDateWeekday,4, 11681, 10, 3.1, NULL, 11680, NULL)
#elif defined __s390x__
CheckTypeSize(GDateWeekday,4, 11681, 12, 3.1, NULL, 11680, NULL)
#else
Msg("Find size of GDateWeekday (11681)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11680,NULL);\n",architecture,11681,0);
#endif

#if defined __i386__
CheckTypeSize(GTraverseType,4, 11683, 2, 3.1, NULL, 11682, NULL)
#elif defined __x86_64__
CheckTypeSize(GTraverseType,4, 11683, 11, 3.1, NULL, 11682, NULL)
#elif defined __ia64__
CheckTypeSize(GTraverseType,4, 11683, 3, 3.1, NULL, 11682, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTraverseType,4, 11683, 6, 3.1, NULL, 11682, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTraverseType,4, 11683, 9, 3.1, NULL, 11682, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTraverseType,4, 11683, 10, 3.1, NULL, 11682, NULL)
#elif defined __s390x__
CheckTypeSize(GTraverseType,4, 11683, 12, 3.1, NULL, 11682, NULL)
#else
Msg("Find size of GTraverseType (11683)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11682,NULL);\n",architecture,11683,0);
#endif

#if defined __i386__
CheckTypeSize(GTraverseFlags,4, 11685, 2, 3.1, NULL, 11684, NULL)
#elif defined __x86_64__
CheckTypeSize(GTraverseFlags,4, 11685, 11, 3.1, NULL, 11684, NULL)
#elif defined __ia64__
CheckTypeSize(GTraverseFlags,4, 11685, 3, 3.1, NULL, 11684, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTraverseFlags,4, 11685, 6, 3.1, NULL, 11684, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTraverseFlags,4, 11685, 9, 3.1, NULL, 11684, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTraverseFlags,4, 11685, 10, 3.1, NULL, 11684, NULL)
#elif defined __s390x__
CheckTypeSize(GTraverseFlags,4, 11685, 12, 3.1, NULL, 11684, NULL)
#else
Msg("Find size of GTraverseFlags (11685)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11684,NULL);\n",architecture,11685,0);
#endif

#if defined __i386__
CheckTypeSize(GMarkupParser,20, 11691, 2, 3.1, NULL, 11686, NULL)
#elif defined __x86_64__
CheckTypeSize(GMarkupParser,40, 11691, 11, 3.1, NULL, 11686, NULL)
#elif defined __ia64__
CheckTypeSize(GMarkupParser,40, 11691, 3, 3.1, NULL, 11686, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GMarkupParser,20, 11691, 6, 3.1, NULL, 11686, NULL)
#elif defined __powerpc64__
CheckTypeSize(GMarkupParser,40, 11691, 9, 3.1, NULL, 11686, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GMarkupParser,20, 11691, 10, 3.1, NULL, 11686, NULL)
#elif defined __s390x__
CheckTypeSize(GMarkupParser,40, 11691, 12, 3.1, NULL, 11686, NULL)
#else
Msg("Find size of GMarkupParser (11691)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11686,NULL);\n",architecture,11691,0);
#endif

#if defined __i386__
CheckTypeSize(GMarkupParseFlags,4, 11695, 2, 3.1, NULL, 11694, NULL)
#elif defined __x86_64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 11, 3.1, NULL, 11694, NULL)
#elif defined __ia64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 3, 3.1, NULL, 11694, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 6, 3.1, NULL, 11694, NULL)
#elif defined __powerpc64__
CheckTypeSize(GMarkupParseFlags,4, 11695, 9, 3.1, NULL, 11694, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GMarkupParseFlags,4, 11695, 10, 3.1, NULL, 11694, NULL)
#elif defined __s390x__
CheckTypeSize(GMarkupParseFlags,4, 11695, 12, 3.1, NULL, 11694, NULL)
#else
Msg("Find size of GMarkupParseFlags (11695)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11694,NULL);\n",architecture,11695,0);
#endif

#if defined __i386__
CheckTypeSize(GHookCheckMarshaller,4, 11697, 2, 3.1, NULL, 11696, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 11, 3.1, NULL, 11696, NULL)
#elif defined __ia64__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 3, 3.1, NULL, 11696, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookCheckMarshaller,4, 11697, 6, 3.1, NULL, 11696, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 9, 3.1, NULL, 11696, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookCheckMarshaller,4, 11697, 10, 3.1, NULL, 11696, NULL)
#elif defined __s390x__
CheckTypeSize(GHookCheckMarshaller,8, 11697, 12, 3.1, NULL, 11696, NULL)
#else
Msg("Find size of GHookCheckMarshaller (11697)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11696,NULL);\n",architecture,11697,0);
#endif

#if defined __i386__
CheckTypeSize(GNodeTraverseFunc,4, 11700, 2, 3.1, NULL, 11699, NULL)
#elif defined __x86_64__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 11, 3.1, NULL, 11699, NULL)
#elif defined __ia64__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 3, 3.1, NULL, 11699, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GNodeTraverseFunc,4, 11700, 6, 3.1, NULL, 11699, NULL)
#elif defined __powerpc64__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 9, 3.1, NULL, 11699, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GNodeTraverseFunc,4, 11700, 10, 3.1, NULL, 11699, NULL)
#elif defined __s390x__
CheckTypeSize(GNodeTraverseFunc,8, 11700, 12, 3.1, NULL, 11699, NULL)
#else
Msg("Find size of GNodeTraverseFunc (11700)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11699,NULL);\n",architecture,11700,0);
#endif

#if defined __i386__
CheckTypeSize(GNormalizeMode,4, 11702, 2, 3.1, NULL, 11701, NULL)
#elif defined __x86_64__
CheckTypeSize(GNormalizeMode,4, 11702, 11, 3.1, NULL, 11701, NULL)
#elif defined __ia64__
CheckTypeSize(GNormalizeMode,4, 11702, 3, 3.1, NULL, 11701, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GNormalizeMode,4, 11702, 6, 3.1, NULL, 11701, NULL)
#elif defined __powerpc64__
CheckTypeSize(GNormalizeMode,4, 11702, 9, 3.1, NULL, 11701, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GNormalizeMode,4, 11702, 10, 3.1, NULL, 11701, NULL)
#elif defined __s390x__
CheckTypeSize(GNormalizeMode,4, 11702, 12, 3.1, NULL, 11701, NULL)
#else
Msg("Find size of GNormalizeMode (11702)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11701,NULL);\n",architecture,11702,0);
#endif

#if defined __i386__
CheckTypeSize(GStaticPrivate,4, 11707, 2, 3.1, NULL, 11706, NULL)
#elif defined __x86_64__
CheckTypeSize(GStaticPrivate,4, 11707, 11, 3.1, NULL, 11706, NULL)
#elif defined __ia64__
CheckTypeSize(GStaticPrivate,4, 11707, 3, 3.1, NULL, 11706, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GStaticPrivate,4, 11707, 6, 3.1, NULL, 11706, NULL)
#elif defined __powerpc64__
CheckTypeSize(GStaticPrivate,4, 11707, 9, 3.1, NULL, 11706, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GStaticPrivate,4, 11707, 10, 3.1, NULL, 11706, NULL)
#elif defined __s390x__
CheckTypeSize(GStaticPrivate,4, 11707, 12, 3.1, NULL, 11706, NULL)
#else
Msg("Find size of GStaticPrivate (11707)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11706,NULL);\n",architecture,11707,0);
#endif

#if defined __i386__
CheckTypeSize(GFileError,4, 11710, 2, 3.1, NULL, 11709, NULL)
#elif defined __x86_64__
CheckTypeSize(GFileError,4, 11710, 11, 3.1, NULL, 11709, NULL)
#elif defined __ia64__
CheckTypeSize(GFileError,4, 11710, 3, 3.1, NULL, 11709, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GFileError,4, 11710, 6, 3.1, NULL, 11709, NULL)
#elif defined __powerpc64__
CheckTypeSize(GFileError,4, 11710, 9, 3.1, NULL, 11709, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GFileError,4, 11710, 10, 3.1, NULL, 11709, NULL)
#elif defined __s390x__
CheckTypeSize(GFileError,4, 11710, 12, 3.1, NULL, 11709, NULL)
#else
Msg("Find size of GFileError (11710)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11709,NULL);\n",architecture,11710,0);
#endif

#if defined __i386__
CheckTypeSize(GDataForeachFunc,4, 11712, 2, 3.1, NULL, 11711, NULL)
#elif defined __x86_64__
CheckTypeSize(GDataForeachFunc,8, 11712, 11, 3.1, NULL, 11711, NULL)
#elif defined __ia64__
CheckTypeSize(GDataForeachFunc,8, 11712, 3, 3.1, NULL, 11711, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDataForeachFunc,4, 11712, 6, 3.1, NULL, 11711, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDataForeachFunc,8, 11712, 9, 3.1, NULL, 11711, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDataForeachFunc,4, 11712, 10, 3.1, NULL, 11711, NULL)
#elif defined __s390x__
CheckTypeSize(GDataForeachFunc,8, 11712, 12, 3.1, NULL, 11711, NULL)
#else
Msg("Find size of GDataForeachFunc (11712)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11711,NULL);\n",architecture,11712,0);
#endif

#if defined __i386__
CheckTypeSize(GMemVTable,24, 11717, 2, 3.1, NULL, 11713, NULL)
#elif defined __x86_64__
CheckTypeSize(GMemVTable,48, 11717, 11, 3.1, NULL, 11713, NULL)
#elif defined __ia64__
CheckTypeSize(GMemVTable,48, 11717, 3, 3.1, NULL, 11713, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GMemVTable,24, 11717, 6, 3.1, NULL, 11713, NULL)
#elif defined __powerpc64__
CheckTypeSize(GMemVTable,48, 11717, 9, 3.1, NULL, 11713, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GMemVTable,24, 11717, 10, 3.1, NULL, 11713, NULL)
#elif defined __s390x__
CheckTypeSize(GMemVTable,48, 11717, 12, 3.1, NULL, 11713, NULL)
#else
Msg("Find size of GMemVTable (11717)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11713,NULL);\n",architecture,11717,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionArg,4, 11721, 2, 3.1, NULL, 11720, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionArg,4, 11721, 11, 3.1, NULL, 11720, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionArg,4, 11721, 3, 3.1, NULL, 11720, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionArg,4, 11721, 6, 3.1, NULL, 11720, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionArg,4, 11721, 9, 3.1, NULL, 11720, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionArg,4, 11721, 10, 3.1, NULL, 11720, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionArg,4, 11721, 12, 3.1, NULL, 11720, NULL)
#else
Msg("Find size of GOptionArg (11721)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11720,NULL);\n",architecture,11721,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionEntry,28, 11722, 2, 3.1, NULL, 11719, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionEntry,48, 11722, 11, 3.1, NULL, 11719, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionEntry,48, 11722, 3, 3.1, NULL, 11719, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionEntry,28, 11722, 6, 3.1, NULL, 11719, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionEntry,48, 11722, 9, 3.1, NULL, 11719, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionEntry,28, 11722, 10, 3.1, NULL, 11719, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionEntry,48, 11722, 12, 3.1, NULL, 11719, NULL)
#else
Msg("Find size of GOptionEntry (11722)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11719,NULL);\n",architecture,11722,0);
#endif

#if defined __i386__
CheckTypeSize(GUnicodeType,4, 11726, 2, 3.1, NULL, 11725, NULL)
#elif defined __x86_64__
CheckTypeSize(GUnicodeType,4, 11726, 11, 3.1, NULL, 11725, NULL)
#elif defined __ia64__
CheckTypeSize(GUnicodeType,4, 11726, 3, 3.1, NULL, 11725, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GUnicodeType,4, 11726, 6, 3.1, NULL, 11725, NULL)
#elif defined __powerpc64__
CheckTypeSize(GUnicodeType,4, 11726, 9, 3.1, NULL, 11725, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GUnicodeType,4, 11726, 10, 3.1, NULL, 11725, NULL)
#elif defined __s390x__
CheckTypeSize(GUnicodeType,4, 11726, 12, 3.1, NULL, 11725, NULL)
#else
Msg("Find size of GUnicodeType (11726)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11725,NULL);\n",architecture,11726,0);
#endif

#if defined __i386__
CheckTypeSize(GLogFunc,4, 11728, 2, 3.1, NULL, 11727, NULL)
#elif defined __x86_64__
CheckTypeSize(GLogFunc,8, 11728, 11, 3.1, NULL, 11727, NULL)
#elif defined __ia64__
CheckTypeSize(GLogFunc,8, 11728, 3, 3.1, NULL, 11727, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GLogFunc,4, 11728, 6, 3.1, NULL, 11727, NULL)
#elif defined __powerpc64__
CheckTypeSize(GLogFunc,8, 11728, 9, 3.1, NULL, 11727, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GLogFunc,4, 11728, 10, 3.1, NULL, 11727, NULL)
#elif defined __s390x__
CheckTypeSize(GLogFunc,8, 11728, 12, 3.1, NULL, 11727, NULL)
#else
Msg("Find size of GLogFunc (11728)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11727,NULL);\n",architecture,11728,0);
#endif

#if defined __i386__
CheckTypeSize(GTranslateFunc,4, 11733, 2, 3.1, NULL, 11732, NULL)
#elif defined __x86_64__
CheckTypeSize(GTranslateFunc,8, 11733, 11, 3.1, NULL, 11732, NULL)
#elif defined __ia64__
CheckTypeSize(GTranslateFunc,8, 11733, 3, 3.1, NULL, 11732, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTranslateFunc,4, 11733, 6, 3.1, NULL, 11732, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTranslateFunc,8, 11733, 9, 3.1, NULL, 11732, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTranslateFunc,4, 11733, 10, 3.1, NULL, 11732, NULL)
#elif defined __s390x__
CheckTypeSize(GTranslateFunc,8, 11733, 12, 3.1, NULL, 11732, NULL)
#else
Msg("Find size of GTranslateFunc (11733)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11732,NULL);\n",architecture,11733,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionParseFunc,4, 11737, 2, 3.1, NULL, 11736, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionParseFunc,8, 11737, 11, 3.1, NULL, 11736, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionParseFunc,8, 11737, 3, 3.1, NULL, 11736, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionParseFunc,4, 11737, 6, 3.1, NULL, 11736, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionParseFunc,8, 11737, 9, 3.1, NULL, 11736, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionParseFunc,4, 11737, 10, 3.1, NULL, 11736, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionParseFunc,8, 11737, 12, 3.1, NULL, 11736, NULL)
#else
Msg("Find size of GOptionParseFunc (11737)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11736,NULL);\n",architecture,11737,0);
#endif

#if defined __i386__
CheckTypeSize(GVoidFunc,4, 11738, 2, 3.1, NULL, 10318, NULL)
#elif defined __x86_64__
CheckTypeSize(GVoidFunc,8, 11738, 11, 3.1, NULL, 10318, NULL)
#elif defined __ia64__
CheckTypeSize(GVoidFunc,8, 11738, 3, 3.1, NULL, 10318, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GVoidFunc,4, 11738, 6, 3.1, NULL, 10318, NULL)
#elif defined __powerpc64__
CheckTypeSize(GVoidFunc,8, 11738, 9, 3.1, NULL, 10318, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GVoidFunc,4, 11738, 10, 3.1, NULL, 10318, NULL)
#elif defined __s390x__
CheckTypeSize(GVoidFunc,8, 11738, 12, 3.1, NULL, 10318, NULL)
#else
Msg("Find size of GVoidFunc (11738)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10318,NULL);\n",architecture,11738,0);
#endif

#if defined __i386__
CheckTypeSize(GHookFindFunc,4, 11739, 2, 3.1, NULL, 11696, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookFindFunc,8, 11739, 11, 3.1, NULL, 11696, NULL)
#elif defined __ia64__
CheckTypeSize(GHookFindFunc,8, 11739, 3, 3.1, NULL, 11696, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookFindFunc,4, 11739, 6, 3.1, NULL, 11696, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookFindFunc,8, 11739, 9, 3.1, NULL, 11696, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookFindFunc,4, 11739, 10, 3.1, NULL, 11696, NULL)
#elif defined __s390x__
CheckTypeSize(GHookFindFunc,8, 11739, 12, 3.1, NULL, 11696, NULL)
#else
Msg("Find size of GHookFindFunc (11739)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11696,NULL);\n",architecture,11739,0);
#endif

#if defined __i386__
CheckTypeSize(GTuples,4, 11743, 2, 3.1, NULL, 11742, NULL)
#elif defined __x86_64__
CheckTypeSize(GTuples,4, 11743, 11, 3.1, NULL, 11742, NULL)
#elif defined __ia64__
CheckTypeSize(GTuples,4, 11743, 3, 3.1, NULL, 11742, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTuples,4, 11743, 6, 3.1, NULL, 11742, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTuples,4, 11743, 9, 3.1, NULL, 11742, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTuples,4, 11743, 10, 3.1, NULL, 11742, NULL)
#elif defined __s390x__
CheckTypeSize(GTuples,4, 11743, 12, 3.1, NULL, 11742, NULL)
#else
Msg("Find size of GTuples (11743)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11742,NULL);\n",architecture,11743,0);
#endif

#if defined __i386__
CheckTypeSize(GCopyFunc,4, 11746, 2, 3.1, NULL, 11745, NULL)
#elif defined __x86_64__
CheckTypeSize(GCopyFunc,8, 11746, 11, 3.1, NULL, 11745, NULL)
#elif defined __ia64__
CheckTypeSize(GCopyFunc,8, 11746, 3, 3.1, NULL, 11745, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCopyFunc,4, 11746, 6, 3.1, NULL, 11745, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCopyFunc,8, 11746, 9, 3.1, NULL, 11745, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCopyFunc,4, 11746, 10, 3.1, NULL, 11745, NULL)
#elif defined __s390x__
CheckTypeSize(GCopyFunc,8, 11746, 12, 3.1, NULL, 11745, NULL)
#else
Msg("Find size of GCopyFunc (11746)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11745,NULL);\n",architecture,11746,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionErrorFunc,4, 11748, 2, 3.1, NULL, 11747, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionErrorFunc,8, 11748, 11, 3.1, NULL, 11747, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionErrorFunc,8, 11748, 3, 3.1, NULL, 11747, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionErrorFunc,4, 11748, 6, 3.1, NULL, 11747, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionErrorFunc,8, 11748, 9, 3.1, NULL, 11747, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionErrorFunc,4, 11748, 10, 3.1, NULL, 11747, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionErrorFunc,8, 11748, 12, 3.1, NULL, 11747, NULL)
#else
Msg("Find size of GOptionErrorFunc (11748)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11747,NULL);\n",architecture,11748,0);
#endif

#if defined __i386__
CheckTypeSize(GCacheNewFunc,4, 11749, 2, 3.1, NULL, 11405, NULL)
#elif defined __x86_64__
CheckTypeSize(GCacheNewFunc,8, 11749, 11, 3.1, NULL, 11405, NULL)
#elif defined __ia64__
CheckTypeSize(GCacheNewFunc,8, 11749, 3, 3.1, NULL, 11405, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCacheNewFunc,4, 11749, 6, 3.1, NULL, 11405, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCacheNewFunc,8, 11749, 9, 3.1, NULL, 11405, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCacheNewFunc,4, 11749, 10, 3.1, NULL, 11405, NULL)
#elif defined __s390x__
CheckTypeSize(GCacheNewFunc,8, 11749, 12, 3.1, NULL, 11405, NULL)
#else
Msg("Find size of GCacheNewFunc (11749)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11405,NULL);\n",architecture,11749,0);
#endif

#if defined __i386__
CheckTypeSize(GCacheDestroyFunc,4, 11750, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCacheDestroyFunc,4, 11750, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCacheDestroyFunc,4, 11750, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GCacheDestroyFunc,8, 11750, 12, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GCacheDestroyFunc (11750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11750,0);
#endif

#if defined __i386__
CheckTypeSize(GCacheDupFunc,4, 11751, 2, 3.1, NULL, 11405, NULL)
#elif defined __x86_64__
CheckTypeSize(GCacheDupFunc,8, 11751, 11, 3.1, NULL, 11405, NULL)
#elif defined __ia64__
CheckTypeSize(GCacheDupFunc,8, 11751, 3, 3.1, NULL, 11405, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCacheDupFunc,4, 11751, 6, 3.1, NULL, 11405, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCacheDupFunc,8, 11751, 9, 3.1, NULL, 11405, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCacheDupFunc,4, 11751, 10, 3.1, NULL, 11405, NULL)
#elif defined __s390x__
CheckTypeSize(GCacheDupFunc,8, 11751, 12, 3.1, NULL, 11405, NULL)
#else
Msg("Find size of GCacheDupFunc (11751)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11405,NULL);\n",architecture,11751,0);
#endif

#if defined __i386__
CheckTypeSize(GFileTest,4, 11753, 2, 3.1, NULL, 11752, NULL)
#elif defined __x86_64__
CheckTypeSize(GFileTest,4, 11753, 11, 3.1, NULL, 11752, NULL)
#elif defined __ia64__
CheckTypeSize(GFileTest,4, 11753, 3, 3.1, NULL, 11752, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GFileTest,4, 11753, 6, 3.1, NULL, 11752, NULL)
#elif defined __powerpc64__
CheckTypeSize(GFileTest,4, 11753, 9, 3.1, NULL, 11752, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GFileTest,4, 11753, 10, 3.1, NULL, 11752, NULL)
#elif defined __s390x__
CheckTypeSize(GFileTest,4, 11753, 12, 3.1, NULL, 11752, NULL)
#else
Msg("Find size of GFileTest (11753)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11752,NULL);\n",architecture,11753,0);
#endif

#if defined __i386__
CheckTypeSize(GOnceStatus,4, 11756, 2, 3.1, NULL, 11755, NULL)
#elif defined __x86_64__
CheckTypeSize(GOnceStatus,4, 11756, 11, 3.1, NULL, 11755, NULL)
#elif defined __ia64__
CheckTypeSize(GOnceStatus,4, 11756, 3, 3.1, NULL, 11755, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOnceStatus,4, 11756, 6, 3.1, NULL, 11755, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOnceStatus,4, 11756, 9, 3.1, NULL, 11755, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOnceStatus,4, 11756, 10, 3.1, NULL, 11755, NULL)
#elif defined __s390x__
CheckTypeSize(GOnceStatus,4, 11756, 12, 3.1, NULL, 11755, NULL)
#else
Msg("Find size of GOnceStatus (11756)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11755,NULL);\n",architecture,11756,0);
#endif

#if defined __i386__
CheckTypeSize(GOnce,8, 11759, 2, 3.1, NULL, 11754, NULL)
#elif defined __x86_64__
CheckTypeSize(GOnce,16, 11759, 11, 3.1, NULL, 11754, NULL)
#elif defined __ia64__
CheckTypeSize(GOnce,16, 11759, 3, 3.1, NULL, 11754, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOnce,8, 11759, 6, 3.1, NULL, 11754, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOnce,16, 11759, 9, 3.1, NULL, 11754, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOnce,8, 11759, 10, 3.1, NULL, 11754, NULL)
#elif defined __s390x__
CheckTypeSize(GOnce,16, 11759, 12, 3.1, NULL, 11754, NULL)
#else
Msg("Find size of GOnce (11759)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11754,NULL);\n",architecture,11759,0);
#endif

#if defined __i386__
CheckTypeSize(GTraverseFunc,4, 11767, 2, 3.1, NULL, 11650, NULL)
#elif defined __x86_64__
CheckTypeSize(GTraverseFunc,8, 11767, 11, 3.1, NULL, 11650, NULL)
#elif defined __ia64__
CheckTypeSize(GTraverseFunc,8, 11767, 3, 3.1, NULL, 11650, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTraverseFunc,4, 11767, 6, 3.1, NULL, 11650, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTraverseFunc,8, 11767, 9, 3.1, NULL, 11650, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTraverseFunc,4, 11767, 10, 3.1, NULL, 11650, NULL)
#elif defined __s390x__
CheckTypeSize(GTraverseFunc,8, 11767, 12, 3.1, NULL, 11650, NULL)
#else
Msg("Find size of GTraverseFunc (11767)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11650,NULL);\n",architecture,11767,0);
#endif

#if defined __i386__
CheckTypeSize(GHookCompareFunc,4, 11769, 2, 3.1, NULL, 11768, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookCompareFunc,8, 11769, 11, 3.1, NULL, 11768, NULL)
#elif defined __ia64__
CheckTypeSize(GHookCompareFunc,8, 11769, 3, 3.1, NULL, 11768, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookCompareFunc,4, 11769, 6, 3.1, NULL, 11768, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookCompareFunc,8, 11769, 9, 3.1, NULL, 11768, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookCompareFunc,4, 11769, 10, 3.1, NULL, 11768, NULL)
#elif defined __s390x__
CheckTypeSize(GHookCompareFunc,8, 11769, 12, 3.1, NULL, 11768, NULL)
#else
Msg("Find size of GHookCompareFunc (11769)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11768,NULL);\n",architecture,11769,0);
#endif

#if defined __i386__
CheckTypeSize(GNodeForeachFunc,4, 11771, 2, 3.1, NULL, 11770, NULL)
#elif defined __x86_64__
CheckTypeSize(GNodeForeachFunc,8, 11771, 11, 3.1, NULL, 11770, NULL)
#elif defined __ia64__
CheckTypeSize(GNodeForeachFunc,8, 11771, 3, 3.1, NULL, 11770, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GNodeForeachFunc,4, 11771, 6, 3.1, NULL, 11770, NULL)
#elif defined __powerpc64__
CheckTypeSize(GNodeForeachFunc,8, 11771, 9, 3.1, NULL, 11770, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GNodeForeachFunc,4, 11771, 10, 3.1, NULL, 11770, NULL)
#elif defined __s390x__
CheckTypeSize(GNodeForeachFunc,8, 11771, 12, 3.1, NULL, 11770, NULL)
#else
Msg("Find size of GNodeForeachFunc (11771)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11770,NULL);\n",architecture,11771,0);
#endif

#if defined __i386__
CheckTypeSize(GDebugKey,8, 11773, 2, 3.1, NULL, 11772, NULL)
#elif defined __x86_64__
CheckTypeSize(GDebugKey,16, 11773, 11, 3.1, NULL, 11772, NULL)
#elif defined __ia64__
CheckTypeSize(GDebugKey,16, 11773, 3, 3.1, NULL, 11772, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDebugKey,8, 11773, 6, 3.1, NULL, 11772, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDebugKey,16, 11773, 9, 3.1, NULL, 11772, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDebugKey,8, 11773, 10, 3.1, NULL, 11772, NULL)
#elif defined __s390x__
CheckTypeSize(GDebugKey,16, 11773, 12, 3.1, NULL, 11772, NULL)
#else
Msg("Find size of GDebugKey (11773)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11772,NULL);\n",architecture,11773,0);
#endif

#if defined __i386__
CheckTypeSize(GThreadFunctions,84, 11793, 2, 3.1, NULL, 11776, NULL)
#elif defined __x86_64__
CheckTypeSize(GThreadFunctions,168, 11793, 11, 3.1, NULL, 11776, NULL)
#elif defined __ia64__
CheckTypeSize(GThreadFunctions,168, 11793, 3, 3.1, NULL, 11776, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GThreadFunctions,84, 11793, 6, 3.1, NULL, 11776, NULL)
#elif defined __powerpc64__
CheckTypeSize(GThreadFunctions,168, 11793, 9, 3.1, NULL, 11776, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GThreadFunctions,84, 11793, 10, 3.1, NULL, 11776, NULL)
#elif defined __s390x__
CheckTypeSize(GThreadFunctions,168, 11793, 12, 3.1, NULL, 11776, NULL)
#else
Msg("Find size of GThreadFunctions (11793)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11776,NULL);\n",architecture,11793,0);
#endif

#if defined __i386__
CheckTypeSize(GHookMarshaller,4, 11795, 2, 3.1, NULL, 11794, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookMarshaller,8, 11795, 11, 3.1, NULL, 11794, NULL)
#elif defined __ia64__
CheckTypeSize(GHookMarshaller,8, 11795, 3, 3.1, NULL, 11794, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookMarshaller,4, 11795, 6, 3.1, NULL, 11794, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookMarshaller,8, 11795, 9, 3.1, NULL, 11794, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookMarshaller,4, 11795, 10, 3.1, NULL, 11794, NULL)
#elif defined __s390x__
CheckTypeSize(GHookMarshaller,8, 11795, 12, 3.1, NULL, 11794, NULL)
#else
Msg("Find size of GHookMarshaller (11795)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11794,NULL);\n",architecture,11795,0);
#endif

#if defined __i386__
CheckTypeSize(GIOChannelError,4, 11797, 2, 3.1, NULL, 11796, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOChannelError,4, 11797, 11, 3.1, NULL, 11796, NULL)
#elif defined __ia64__
CheckTypeSize(GIOChannelError,4, 11797, 3, 3.1, NULL, 11796, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOChannelError,4, 11797, 6, 3.1, NULL, 11796, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOChannelError,4, 11797, 9, 3.1, NULL, 11796, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOChannelError,4, 11797, 10, 3.1, NULL, 11796, NULL)
#elif defined __s390x__
CheckTypeSize(GIOChannelError,4, 11797, 12, 3.1, NULL, 11796, NULL)
#else
Msg("Find size of GIOChannelError (11797)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11796,NULL);\n",architecture,11797,0);
#endif

#if defined __i386__
CheckTypeSize(GIOFunc,4, 11799, 2, 3.1, NULL, 11798, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOFunc,8, 11799, 11, 3.1, NULL, 11798, NULL)
#elif defined __ia64__
CheckTypeSize(GIOFunc,8, 11799, 3, 3.1, NULL, 11798, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOFunc,4, 11799, 6, 3.1, NULL, 11798, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOFunc,8, 11799, 9, 3.1, NULL, 11798, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOFunc,4, 11799, 10, 3.1, NULL, 11798, NULL)
#elif defined __s390x__
CheckTypeSize(GIOFunc,8, 11799, 12, 3.1, NULL, 11798, NULL)
#else
Msg("Find size of GIOFunc (11799)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11798,NULL);\n",architecture,11799,0);
#endif

#if defined __i386__
CheckTypeSize(GFreeFunc,4, 11800, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GFreeFunc,8, 11800, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GFreeFunc,8, 11800, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GFreeFunc,4, 11800, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GFreeFunc,8, 11800, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GFreeFunc,4, 11800, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GFreeFunc,8, 11800, 12, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GFreeFunc (11800)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11800,0);
#endif

#if defined __i386__
CheckTypeSize(GHookCheckFunc,4, 11801, 2, 3.1, NULL, 11542, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookCheckFunc,8, 11801, 11, 3.1, NULL, 11542, NULL)
#elif defined __ia64__
CheckTypeSize(GHookCheckFunc,8, 11801, 3, 3.1, NULL, 11542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookCheckFunc,4, 11801, 6, 3.1, NULL, 11542, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookCheckFunc,8, 11801, 9, 3.1, NULL, 11542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookCheckFunc,4, 11801, 10, 3.1, NULL, 11542, NULL)
#elif defined __s390x__
CheckTypeSize(GHookCheckFunc,8, 11801, 12, 3.1, NULL, 11542, NULL)
#else
Msg("Find size of GHookCheckFunc (11801)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11542,NULL);\n",architecture,11801,0);
#endif

#if defined __i386__
CheckTypeSize(GHookFunc,4, 11802, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookFunc,8, 11802, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GHookFunc,8, 11802, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookFunc,4, 11802, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookFunc,8, 11802, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookFunc,4, 11802, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GHookFunc,8, 11802, 12, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GHookFunc (11802)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11802,0);
#endif

#if defined __i386__
CheckTypeSize(gint16,2, 11803, 2, 3.1, NULL, 11264, NULL)
#elif defined __x86_64__
CheckTypeSize(gint16,2, 11803, 11, 3.1, NULL, 11264, NULL)
#elif defined __ia64__
CheckTypeSize(gint16,2, 11803, 3, 3.1, NULL, 11264, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gint16,2, 11803, 6, 3.1, NULL, 11264, NULL)
#elif defined __powerpc64__
CheckTypeSize(gint16,2, 11803, 9, 3.1, NULL, 11264, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gint16,2, 11803, 10, 3.1, NULL, 11264, NULL)
#elif defined __s390x__
CheckTypeSize(gint16,2, 11803, 12, 3.1, NULL, 11264, NULL)
#else
Msg("Find size of gint16 (11803)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11264,NULL);\n",architecture,11803,0);
#endif

#if defined __i386__
CheckTypeSize(GDateDMY,4, 11805, 2, 3.1, NULL, 11804, NULL)
#elif defined __x86_64__
CheckTypeSize(GDateDMY,4, 11805, 11, 3.1, NULL, 11804, NULL)
#elif defined __ia64__
CheckTypeSize(GDateDMY,4, 11805, 3, 3.1, NULL, 11804, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GDateDMY,4, 11805, 6, 3.1, NULL, 11804, NULL)
#elif defined __powerpc64__
CheckTypeSize(GDateDMY,4, 11805, 9, 3.1, NULL, 11804, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GDateDMY,4, 11805, 10, 3.1, NULL, 11804, NULL)
#elif defined __s390x__
CheckTypeSize(GDateDMY,4, 11805, 12, 3.1, NULL, 11804, NULL)
#else
Msg("Find size of GDateDMY (11805)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11804,NULL);\n",architecture,11805,0);
#endif

#if defined __i386__
CheckTypeSize(gint8,1, 11806, 2, 3.1, NULL, 10505, NULL)
#elif defined __x86_64__
CheckTypeSize(gint8,1, 11806, 11, 3.1, NULL, 10505, NULL)
#elif defined __ia64__
CheckTypeSize(gint8,1, 11806, 3, 3.1, NULL, 10505, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gint8,1, 11806, 6, 3.1, NULL, 10505, NULL)
#elif defined __powerpc64__
CheckTypeSize(gint8,1, 11806, 9, 3.1, NULL, 10505, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gint8,1, 11806, 10, 3.1, NULL, 10505, NULL)
#elif defined __s390x__
CheckTypeSize(gint8,1, 11806, 12, 3.1, NULL, 10505, NULL)
#else
Msg("Find size of gint8 (11806)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10505,NULL);\n",architecture,11806,0);
#endif

#if defined __i386__
CheckTypeSize(GMarkupError,4, 11808, 2, 3.1, NULL, 11807, NULL)
#elif defined __x86_64__
CheckTypeSize(GMarkupError,4, 11808, 11, 3.1, NULL, 11807, NULL)
#elif defined __ia64__
CheckTypeSize(GMarkupError,4, 11808, 3, 3.1, NULL, 11807, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GMarkupError,4, 11808, 6, 3.1, NULL, 11807, NULL)
#elif defined __powerpc64__
CheckTypeSize(GMarkupError,4, 11808, 9, 3.1, NULL, 11807, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GMarkupError,4, 11808, 10, 3.1, NULL, 11807, NULL)
#elif defined __s390x__
CheckTypeSize(GMarkupError,4, 11808, 12, 3.1, NULL, 11807, NULL)
#else
Msg("Find size of GMarkupError (11808)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11807,NULL);\n",architecture,11808,0);
#endif

#if defined __i386__
CheckTypeSize(GIOError,4, 11810, 2, 3.1, NULL, 11809, NULL)
#elif defined __x86_64__
CheckTypeSize(GIOError,4, 11810, 11, 3.1, NULL, 11809, NULL)
#elif defined __ia64__
CheckTypeSize(GIOError,4, 11810, 3, 3.1, NULL, 11809, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GIOError,4, 11810, 6, 3.1, NULL, 11809, NULL)
#elif defined __powerpc64__
CheckTypeSize(GIOError,4, 11810, 9, 3.1, NULL, 11809, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GIOError,4, 11810, 10, 3.1, NULL, 11809, NULL)
#elif defined __s390x__
CheckTypeSize(GIOError,4, 11810, 12, 3.1, NULL, 11809, NULL)
#else
Msg("Find size of GIOError (11810)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11809,NULL);\n",architecture,11810,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionArgFunc,4, 11812, 2, 3.1, NULL, 11811, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionArgFunc,8, 11812, 3, 3.1, NULL, 11811, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionArgFunc,4, 11812, 6, 3.1, NULL, 11811, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionArgFunc,8, 11812, 9, 3.1, NULL, 11811, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionArgFunc,4, 11812, 10, 3.1, NULL, 11811, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionArgFunc,8, 11812, 12, 3.1, NULL, 11811, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionArgFunc,8, 11812, 11, 3.1, NULL, 11811, NULL)
#else
Msg("Find size of GOptionArgFunc (11812)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11811,NULL);\n",architecture,11812,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionFlags,4, 11814, 2, 3.1, NULL, 11813, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionFlags,4, 11814, 11, 3.1, NULL, 11813, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionFlags,4, 11814, 3, 3.1, NULL, 11813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionFlags,4, 11814, 6, 3.1, NULL, 11813, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionFlags,4, 11814, 9, 3.1, NULL, 11813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionFlags,4, 11814, 10, 3.1, NULL, 11813, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionFlags,4, 11814, 12, 3.1, NULL, 11813, NULL)
#else
Msg("Find size of GOptionFlags (11814)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11813,NULL);\n",architecture,11814,0);
#endif

#if defined __i386__
CheckTypeSize(GConvertError,4, 11816, 2, 3.1, NULL, 11815, NULL)
#elif defined __x86_64__
CheckTypeSize(GConvertError,4, 11816, 11, 3.1, NULL, 11815, NULL)
#elif defined __ia64__
CheckTypeSize(GConvertError,4, 11816, 3, 3.1, NULL, 11815, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GConvertError,4, 11816, 6, 3.1, NULL, 11815, NULL)
#elif defined __powerpc64__
CheckTypeSize(GConvertError,4, 11816, 9, 3.1, NULL, 11815, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GConvertError,4, 11816, 10, 3.1, NULL, 11815, NULL)
#elif defined __s390x__
CheckTypeSize(GConvertError,4, 11816, 12, 3.1, NULL, 11815, NULL)
#else
Msg("Find size of GConvertError (11816)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11815,NULL);\n",architecture,11816,0);
#endif

#if defined __i386__
CheckTypeSize(GErrorType,4, 11818, 2, 3.1, NULL, 11817, NULL)
#elif defined __x86_64__
CheckTypeSize(GErrorType,4, 11818, 11, 3.1, NULL, 11817, NULL)
#elif defined __ia64__
CheckTypeSize(GErrorType,4, 11818, 3, 3.1, NULL, 11817, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GErrorType,4, 11818, 6, 3.1, NULL, 11817, NULL)
#elif defined __powerpc64__
CheckTypeSize(GErrorType,4, 11818, 9, 3.1, NULL, 11817, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GErrorType,4, 11818, 10, 3.1, NULL, 11817, NULL)
#elif defined __s390x__
CheckTypeSize(GErrorType,4, 11818, 12, 3.1, NULL, 11817, NULL)
#else
Msg("Find size of GErrorType (11818)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11817,NULL);\n",architecture,11818,0);
#endif

#if defined __i386__
CheckTypeSize(GKeyFileError,4, 11820, 2, 3.1, NULL, 11819, NULL)
#elif defined __x86_64__
CheckTypeSize(GKeyFileError,4, 11820, 11, 3.1, NULL, 11819, NULL)
#elif defined __ia64__
CheckTypeSize(GKeyFileError,4, 11820, 3, 3.1, NULL, 11819, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GKeyFileError,4, 11820, 6, 3.1, NULL, 11819, NULL)
#elif defined __powerpc64__
CheckTypeSize(GKeyFileError,4, 11820, 9, 3.1, NULL, 11819, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GKeyFileError,4, 11820, 10, 3.1, NULL, 11819, NULL)
#elif defined __s390x__
CheckTypeSize(GKeyFileError,4, 11820, 12, 3.1, NULL, 11819, NULL)
#else
Msg("Find size of GKeyFileError (11820)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11819,NULL);\n",architecture,11820,0);
#endif

#if defined __i386__
CheckTypeSize(GSpawnError,4, 11822, 2, 3.1, NULL, 11821, NULL)
#elif defined __x86_64__
CheckTypeSize(GSpawnError,4, 11822, 11, 3.1, NULL, 11821, NULL)
#elif defined __ia64__
CheckTypeSize(GSpawnError,4, 11822, 3, 3.1, NULL, 11821, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSpawnError,4, 11822, 6, 3.1, NULL, 11821, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSpawnError,4, 11822, 9, 3.1, NULL, 11821, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSpawnError,4, 11822, 10, 3.1, NULL, 11821, NULL)
#elif defined __s390x__
CheckTypeSize(GSpawnError,4, 11822, 12, 3.1, NULL, 11821, NULL)
#else
Msg("Find size of GSpawnError (11822)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11821,NULL);\n",architecture,11822,0);
#endif

#if defined __i386__
CheckTypeSize(GHookFlagMask,4, 11824, 2, 3.1, NULL, 11823, NULL)
#elif defined __x86_64__
CheckTypeSize(GHookFlagMask,4, 11824, 11, 3.1, NULL, 11823, NULL)
#elif defined __ia64__
CheckTypeSize(GHookFlagMask,4, 11824, 3, 3.1, NULL, 11823, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GHookFlagMask,4, 11824, 6, 3.1, NULL, 11823, NULL)
#elif defined __powerpc64__
CheckTypeSize(GHookFlagMask,4, 11824, 9, 3.1, NULL, 11823, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GHookFlagMask,4, 11824, 10, 3.1, NULL, 11823, NULL)
#elif defined __s390x__
CheckTypeSize(GHookFlagMask,4, 11824, 12, 3.1, NULL, 11823, NULL)
#else
Msg("Find size of GHookFlagMask (11824)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11823,NULL);\n",architecture,11824,0);
#endif

#if defined __i386__
CheckTypeSize(GThreadError,4, 11826, 2, 3.1, NULL, 11825, NULL)
#elif defined __x86_64__
CheckTypeSize(GThreadError,4, 11826, 11, 3.1, NULL, 11825, NULL)
#elif defined __ia64__
CheckTypeSize(GThreadError,4, 11826, 3, 3.1, NULL, 11825, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GThreadError,4, 11826, 6, 3.1, NULL, 11825, NULL)
#elif defined __powerpc64__
CheckTypeSize(GThreadError,4, 11826, 9, 3.1, NULL, 11825, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GThreadError,4, 11826, 10, 3.1, NULL, 11825, NULL)
#elif defined __s390x__
CheckTypeSize(GThreadError,4, 11826, 12, 3.1, NULL, 11825, NULL)
#else
Msg("Find size of GThreadError (11826)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11825,NULL);\n",architecture,11826,0);
#endif

#if defined __i386__
CheckTypeSize(GOptionError,4, 11828, 2, 3.1, NULL, 11827, NULL)
#elif defined __x86_64__
CheckTypeSize(GOptionError,4, 11828, 11, 3.1, NULL, 11827, NULL)
#elif defined __ia64__
CheckTypeSize(GOptionError,4, 11828, 3, 3.1, NULL, 11827, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GOptionError,4, 11828, 6, 3.1, NULL, 11827, NULL)
#elif defined __powerpc64__
CheckTypeSize(GOptionError,4, 11828, 9, 3.1, NULL, 11827, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GOptionError,4, 11828, 10, 3.1, NULL, 11827, NULL)
#elif defined __s390x__
CheckTypeSize(GOptionError,4, 11828, 12, 3.1, NULL, 11827, NULL)
#else
Msg("Find size of GOptionError (11828)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11827,NULL);\n",architecture,11828,0);
#endif

#if defined __i386__
CheckTypeSize(GAsciiType,4, 11830, 2, 3.1, NULL, 11829, NULL)
#elif defined __x86_64__
CheckTypeSize(GAsciiType,4, 11830, 11, 3.1, NULL, 11829, NULL)
#elif defined __ia64__
CheckTypeSize(GAsciiType,4, 11830, 3, 3.1, NULL, 11829, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GAsciiType,4, 11830, 6, 3.1, NULL, 11829, NULL)
#elif defined __powerpc64__
CheckTypeSize(GAsciiType,4, 11830, 9, 3.1, NULL, 11829, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GAsciiType,4, 11830, 10, 3.1, NULL, 11829, NULL)
#elif defined __s390x__
CheckTypeSize(GAsciiType,4, 11830, 12, 3.1, NULL, 11829, NULL)
#else
Msg("Find size of GAsciiType (11830)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11829,NULL);\n",architecture,11830,0);
#endif

#if defined __i386__
CheckTypeSize(GShellError,4, 11832, 2, 3.1, NULL, 11831, NULL)
#elif defined __x86_64__
CheckTypeSize(GShellError,4, 11832, 11, 3.1, NULL, 11831, NULL)
#elif defined __ia64__
CheckTypeSize(GShellError,4, 11832, 3, 3.1, NULL, 11831, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GShellError,4, 11832, 6, 3.1, NULL, 11831, NULL)
#elif defined __powerpc64__
CheckTypeSize(GShellError,4, 11832, 9, 3.1, NULL, 11831, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GShellError,4, 11832, 10, 3.1, NULL, 11831, NULL)
#elif defined __s390x__
CheckTypeSize(GShellError,4, 11832, 12, 3.1, NULL, 11831, NULL)
#else
Msg("Find size of GShellError (11832)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11831,NULL);\n",architecture,11832,0);
#endif

#if defined __i386__
CheckTypeSize(gssize,4, 11520, 2, 3.1, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(gssize,8, 11520, 3, 3.1, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(gssize,8, 11520, 11, 3.1, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gssize,4, 11520, 6, 3.1, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(gssize,8, 11520, 9, 3.1, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gssize,4, 11520, 10, 3.1, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(gssize,8, 11520, 12, 3.1, NULL, 8, NULL)
#endif

#if defined __i386__
CheckTypeSize(gint64,8, 11533, 2, 3.1, NULL, 10, NULL)
#elif defined __x86_64__
CheckTypeSize(gint64,8, 11533, 11, 3.1, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(gint64,8, 11533, 3, 3.1, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gint64,8, 11533, 6, 3.1, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(gint64,8, 11533, 9, 3.1, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gint64,8, 11533, 10, 3.1, NULL, 10, NULL)
#elif defined __s390x__
CheckTypeSize(gint64,8, 11533, 12, 3.1, NULL, 8, NULL)
#endif

#if defined __i386__
CheckTypeSize(guint64,8, 11621, 2, 3.1, NULL, 11620, NULL)
#elif defined __x86_64__
CheckTypeSize(guint64,8, 11621, 11, 3.1, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(guint64,8, 11621, 3, 3.1, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(guint64,8, 11621, 6, 3.1, NULL, 11620, NULL)
#elif defined __powerpc64__
CheckTypeSize(guint64,8, 11621, 9, 3.1, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(guint64,8, 11621, 10, 3.1, NULL, 11620, NULL)
#elif defined __s390x__
CheckTypeSize(guint64,8, 11621, 12, 3.1, NULL, 9, NULL)
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
extern gboolean g_atomic_pointer_compare_and_exchange_db(volatile gpointer *, gpointer, gpointer);
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
extern gboolean g_atomic_int_compare_and_exchange_db(volatile gint *, gint, gint);
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
extern void g_atomic_int_add_db(volatile gint *, gint);
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
