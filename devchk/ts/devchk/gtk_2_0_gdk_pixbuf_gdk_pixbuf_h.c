/*
 * Test of gtk-2.0/gdk-pixbuf/gdk-pixbuf.h
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
/* #define PANGO_DISABLE_DEPRECATED */
/* #define GTK_DISABLE_DEPRECATED */
/* #define GDK_DISABLE_DEPRECATED */
/* #define GDK_PIXBUF_DISABLE_DEPRECATED */
#undef GTK_FILE_SYSTEM_ENABLE_UNSUPPORTED
#undef GTK_TEXT_USE_INTERNAL_UNSUPPORTED_API
#undef GTK_COMPILATION
#undef GDK_COMPILATION
#undef GTK_MENU_INTERNALS

struct _GdkPixbuf { };
struct _GdkPixbufFormat { };
struct _GdkPixbufAnimationIter { };
struct _GdkPixbufAnimation { };
#include "gtk-2.0/gdk-pixbuf/gdk-pixbuf.h"



#ifdef TET_TEST
void gtk_2_0_gdk_pixbuf_gdk_pixbuf_h()
{
#else
int gtk_2_0_gdk_pixbuf_gdk_pixbuf_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixbuf.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixbuf.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_SIMPLE_ANIM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_SIMPLE_ANIM(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF_SIMPLE_ANIM(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_SIMPLE_ANIM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF_SIMPLE_ANIM_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_SIMPLE_ANIM_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_MAJOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_MINOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_MICRO */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_PIXBUF_VERSION
	CompareStringConstant(GDK_PIXBUF_VERSION,"2.8.11",6616,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: GDK_PIXBUF_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_VAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_ANIMATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_ANIMATION(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF_ANIMATION(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_ANIMATION_ITER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_ANIMATION_ITER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF_ANIMATION_ITER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_LOADER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_LOADER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_LOADER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF_LOADER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXBUF_LOADER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_LOADER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_ALPHA_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_COLORSPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_INTERP_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXBUF_ROTATION */
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufSaveFunc,8, 12614, 12, 3.1, NULL, 12613, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufSaveFunc,8, 12614, 11, 3.1, NULL, 12613, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufSaveFunc,4, 12614, 10, 3.1, NULL, 12613, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufSaveFunc,8, 12614, 9, 3.1, NULL, 12613, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufSaveFunc,4, 12614, 6, 3.1, NULL, 12613, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufSaveFunc,8, 12614, 3, 3.1, NULL, 12613, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufSaveFunc,4, 12614, 2, 3.1, NULL, 12613, NULL)
#else
Msg("Find size of GdkPixbufSaveFunc (12614)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12613,NULL);\n",architecture,12614,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkPixbufLoader,32, 12615, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,8,12,43321)
CheckOffset(struct _GdkPixbufLoader,priv,24,12,43321)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPixbufLoader,32, 12615, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,8,11,43321)
CheckOffset(struct _GdkPixbufLoader,priv,24,11,43321)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPixbufLoader,16, 12615, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,4,10,43321)
CheckOffset(struct _GdkPixbufLoader,priv,12,10,43321)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPixbufLoader,32, 12615, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,8,9,43321)
CheckOffset(struct _GdkPixbufLoader,priv,24,9,43321)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPixbufLoader,16, 12615, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,4,6,43321)
CheckOffset(struct _GdkPixbufLoader,priv,12,6,43321)
#elif defined __ia64__
CheckTypeSize(struct _GdkPixbufLoader,32, 12615, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,8,3,43321)
CheckOffset(struct _GdkPixbufLoader,priv,24,3,43321)
#elif defined __i386__
CheckTypeSize(struct _GdkPixbufLoader,16, 12615, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoader,priv,4,2,43321)
CheckOffset(struct _GdkPixbufLoader,priv,12,2,43321)
#elif 1
CheckTypeSize(struct _GdkPixbufLoader,0, 12615, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixbufLoader on All\n");
CheckOffset(struct _GdkPixbufLoader,parent_instance,0,1,43320)
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufLoader,32, 12616, 12, 3.1, NULL, 12615, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufLoader,32, 12616, 11, 3.1, NULL, 12615, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufLoader,16, 12616, 10, 3.1, NULL, 12615, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufLoader,32, 12616, 9, 3.1, NULL, 12615, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufLoader,16, 12616, 6, 3.1, NULL, 12615, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufLoader,32, 12616, 3, 3.1, NULL, 12615, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufLoader,16, 12616, 2, 3.1, NULL, 12615, NULL)
#else
Msg("Find size of GdkPixbufLoader (12616)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12615,NULL);\n",architecture,12616,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkInterpType,4, 12624, 12, 3.1, NULL, 12623, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkInterpType,4, 12624, 11, 3.1, NULL, 12623, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkInterpType,4, 12624, 10, 3.1, NULL, 12623, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkInterpType,4, 12624, 9, 3.1, NULL, 12623, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkInterpType,4, 12624, 6, 3.1, NULL, 12623, NULL)
#elif defined __ia64__
CheckTypeSize(GdkInterpType,4, 12624, 3, 3.1, NULL, 12623, NULL)
#elif defined __i386__
CheckTypeSize(GdkInterpType,4, 12624, 2, 3.1, NULL, 12623, NULL)
#else
Msg("Find size of GdkInterpType (12624)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12623,NULL);\n",architecture,12624,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkColorspace,4, 12628, 12, 3.1, NULL, 12627, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkColorspace,4, 12628, 11, 3.1, NULL, 12627, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkColorspace,4, 12628, 10, 3.1, NULL, 12627, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkColorspace,4, 12628, 9, 3.1, NULL, 12627, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkColorspace,4, 12628, 6, 3.1, NULL, 12627, NULL)
#elif defined __ia64__
CheckTypeSize(GdkColorspace,4, 12628, 3, 3.1, NULL, 12627, NULL)
#elif defined __i386__
CheckTypeSize(GdkColorspace,4, 12628, 2, 3.1, NULL, 12627, NULL)
#else
Msg("Find size of GdkColorspace (12628)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12627,NULL);\n",architecture,12628,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufDestroyNotify,8, 12630, 12, 3.1, NULL, 12629, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufDestroyNotify,8, 12630, 11, 3.1, NULL, 12629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufDestroyNotify,4, 12630, 10, 3.1, NULL, 12629, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufDestroyNotify,8, 12630, 9, 3.1, NULL, 12629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufDestroyNotify,4, 12630, 6, 3.1, NULL, 12629, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufDestroyNotify,8, 12630, 3, 3.1, NULL, 12629, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufDestroyNotify,4, 12630, 2, 3.1, NULL, 12629, NULL)
#else
Msg("Find size of GdkPixbufDestroyNotify (12630)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12629,NULL);\n",architecture,12630,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufRotation,4, 12640, 12, 3.1, NULL, 12639, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufRotation,4, 12640, 11, 3.1, NULL, 12639, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufRotation,4, 12640, 10, 3.1, NULL, 12639, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufRotation,4, 12640, 9, 3.1, NULL, 12639, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufRotation,4, 12640, 6, 3.1, NULL, 12639, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufRotation,4, 12640, 3, 3.1, NULL, 12639, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufRotation,4, 12640, 2, 3.1, NULL, 12639, NULL)
#else
Msg("Find size of GdkPixbufRotation (12640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12639,NULL);\n",architecture,12640,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkPixbufLoaderClass,168, 12641, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,8,12,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,136,12,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,8,12,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,144,12,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,8,12,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,152,12,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,8,12,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,160,12,43346)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPixbufLoaderClass,168, 12641, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,8,11,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,136,11,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,8,11,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,144,11,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,8,11,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,152,11,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,8,11,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,160,11,43346)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPixbufLoaderClass,84, 12641, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,4,10,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,68,10,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,4,10,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,72,10,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,4,10,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,76,10,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,4,10,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,80,10,43346)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPixbufLoaderClass,168, 12641, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,8,9,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,136,9,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,8,9,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,144,9,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,8,9,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,152,9,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,8,9,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,160,9,43346)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPixbufLoaderClass,84, 12641, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,4,6,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,68,6,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,4,6,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,72,6,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,4,6,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,76,6,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,4,6,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,80,6,43346)
#elif defined __ia64__
CheckTypeSize(struct _GdkPixbufLoaderClass,168, 12641, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,8,3,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,136,3,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,8,3,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,144,3,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,8,3,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,152,3,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,8,3,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,160,3,43346)
#elif defined __i386__
CheckTypeSize(struct _GdkPixbufLoaderClass,84, 12641, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,4,2,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,68,2,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,4,2,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,72,2,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,4,2,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,76,2,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,4,2,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,80,2,43346)
#elif 1
CheckTypeSize(struct _GdkPixbufLoaderClass,0, 12641, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixbufLoaderClass on All\n");
CheckOffset(struct _GdkPixbufLoaderClass,parent_class,0,1,43333)
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufLoaderClass,168, 12645, 12, 3.1, NULL, 12641, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufLoaderClass,168, 12645, 11, 3.1, NULL, 12641, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufLoaderClass,84, 12645, 10, 3.1, NULL, 12641, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufLoaderClass,168, 12645, 9, 3.1, NULL, 12641, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufLoaderClass,84, 12645, 6, 3.1, NULL, 12641, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufLoaderClass,168, 12645, 3, 3.1, NULL, 12641, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufLoaderClass,84, 12645, 2, 3.1, NULL, 12641, NULL)
#else
Msg("Find size of GdkPixbufLoaderClass (12645)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12641,NULL);\n",architecture,12645,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufError,4, 12647, 12, 3.1, NULL, 12646, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufError,4, 12647, 11, 3.1, NULL, 12646, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufError,4, 12647, 10, 3.1, NULL, 12646, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufError,4, 12647, 9, 3.1, NULL, 12646, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufError,4, 12647, 6, 3.1, NULL, 12646, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufError,4, 12647, 3, 3.1, NULL, 12646, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufError,4, 12647, 2, 3.1, NULL, 12646, NULL)
#else
Msg("Find size of GdkPixbufError (12647)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12646,NULL);\n",architecture,12647,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 12, 3.1, NULL, 12648, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 11, 3.1, NULL, 12648, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 10, 3.1, NULL, 12648, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 9, 3.1, NULL, 12648, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 6, 3.1, NULL, 12648, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 3, 3.1, NULL, 12648, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 2, 3.1, NULL, 12648, NULL)
#else
Msg("Find size of GdkPixbufAlphaMode (12649)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12648,NULL);\n",architecture,12649,0);
#endif

#if defined __s390x__
/* S390X */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#elif defined __ia64__
/* IA64 */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#elif defined __i386__
/* IA32 */
typedef gboolean (*GdkPixbufSaveFunc_db)(const gchar *, gsize, GError * *, gpointer);
CheckFunctionTypedef(GdkPixbufSaveFunc,GdkPixbufSaveFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#elif defined __ia64__
/* IA64 */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#elif defined __i386__
/* IA32 */
typedef void (*GdkPixbufDestroyNotify_db)(guchar *, gpointer);
CheckFunctionTypedef(GdkPixbufDestroyNotify,GdkPixbufDestroyNotify_db);
#endif

extern gboolean gdk_pixbuf_save_to_callbackv_db(GdkPixbuf *, GdkPixbufSaveFunc, gpointer, const char *, char * *, char * *, GError * *);
CheckInterfacedef(gdk_pixbuf_save_to_callbackv,gdk_pixbuf_save_to_callbackv_db);
extern gboolean gdk_pixbuf_save_to_bufferv_db(GdkPixbuf *, gchar * *, gsize *, const char *, char * *, char * *, GError * *);
CheckInterfacedef(gdk_pixbuf_save_to_bufferv,gdk_pixbuf_save_to_bufferv_db);
extern GdkPixbuf * gdk_pixbuf_new_from_file_at_scale_db(const char *, int, int, gboolean, GError * *);
CheckInterfacedef(gdk_pixbuf_new_from_file_at_scale,gdk_pixbuf_new_from_file_at_scale_db);
extern GdkPixbufLoader * gdk_pixbuf_loader_new_with_type_db(const char *, GError * *);
CheckInterfacedef(gdk_pixbuf_loader_new_with_type,gdk_pixbuf_loader_new_with_type_db);
extern GSList * gdk_pixbuf_get_formats_db(void);
CheckInterfacedef(gdk_pixbuf_get_formats,gdk_pixbuf_get_formats_db);
extern guchar * gdk_pixbuf_get_pixels_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_pixels,gdk_pixbuf_get_pixels_db);
extern void gdk_pixbuf_format_set_disabled_db(GdkPixbufFormat *, gboolean);
CheckInterfacedef(gdk_pixbuf_format_set_disabled,gdk_pixbuf_format_set_disabled_db);
extern gboolean gdk_pixbuf_format_is_scalable_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_is_scalable,gdk_pixbuf_format_is_scalable_db);
extern int gdk_pixbuf_get_n_channels_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_n_channels,gdk_pixbuf_get_n_channels_db);
extern GdkPixbuf * gdk_pixbuf_scale_simple_db(const GdkPixbuf *, int, int, GdkInterpType);
CheckInterfacedef(gdk_pixbuf_scale_simple,gdk_pixbuf_scale_simple_db);
extern GdkPixbuf * gdk_pixbuf_new_from_data_db(const guchar *, GdkColorspace, gboolean, int, int, int, int, GdkPixbufDestroyNotify, gpointer);
CheckInterfacedef(gdk_pixbuf_new_from_data,gdk_pixbuf_new_from_data_db);
extern gboolean gdk_pixbuf_loader_close_db(GdkPixbufLoader *, GError * *);
CheckInterfacedef(gdk_pixbuf_loader_close,gdk_pixbuf_loader_close_db);
extern GType gdk_pixbuf_animation_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_animation_get_type,gdk_pixbuf_animation_get_type_db);
extern gboolean gdk_pixbuf_save_to_buffer_db(GdkPixbuf *, gchar * *, gsize *, const char *, GError * *, ...);
CheckInterfacedef(gdk_pixbuf_save_to_buffer,gdk_pixbuf_save_to_buffer_db);
extern GType gdk_interp_type_get_type_db(void);
CheckInterfacedef(gdk_interp_type_get_type,gdk_interp_type_get_type_db);
extern GdkPixbuf * gdk_pixbuf_new_from_file_at_size_db(const char *, int, int, GError * *);
CheckInterfacedef(gdk_pixbuf_new_from_file_at_size,gdk_pixbuf_new_from_file_at_size_db);
extern GdkPixbuf * gdk_pixbuf_new_from_xpm_data_db(const char * *);
CheckInterfacedef(gdk_pixbuf_new_from_xpm_data,gdk_pixbuf_new_from_xpm_data_db);
extern GdkPixbufLoader * gdk_pixbuf_loader_new_db(void);
CheckInterfacedef(gdk_pixbuf_loader_new,gdk_pixbuf_loader_new_db);
extern gboolean gdk_pixbuf_save_to_callback_db(GdkPixbuf *, GdkPixbufSaveFunc, gpointer, const char *, GError * *, ...);
CheckInterfacedef(gdk_pixbuf_save_to_callback,gdk_pixbuf_save_to_callback_db);
extern GdkPixbuf * gdk_pixbuf_add_alpha_db(const GdkPixbuf *, gboolean, guchar, guchar, guchar);
CheckInterfacedef(gdk_pixbuf_add_alpha,gdk_pixbuf_add_alpha_db);
extern gboolean gdk_pixbuf_animation_iter_advance_db(GdkPixbufAnimationIter *, const GTimeVal *);
CheckInterfacedef(gdk_pixbuf_animation_iter_advance,gdk_pixbuf_animation_iter_advance_db);
extern void gdk_pixbuf_saturate_and_pixelate_db(const GdkPixbuf *, GdkPixbuf *, gfloat, gboolean);
CheckInterfacedef(gdk_pixbuf_saturate_and_pixelate,gdk_pixbuf_saturate_and_pixelate_db);
extern GType gdk_pixbuf_animation_iter_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_animation_iter_get_type,gdk_pixbuf_animation_iter_get_type_db);
extern int gdk_pixbuf_get_bits_per_sample_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_bits_per_sample,gdk_pixbuf_get_bits_per_sample_db);
extern GdkPixbuf * gdk_pixbuf_new_from_inline_db(gint, const guint8 *, gboolean, GError * *);
CheckInterfacedef(gdk_pixbuf_new_from_inline,gdk_pixbuf_new_from_inline_db);
extern GdkPixbuf * gdk_pixbuf_animation_get_static_image_db(GdkPixbufAnimation *);
CheckInterfacedef(gdk_pixbuf_animation_get_static_image,gdk_pixbuf_animation_get_static_image_db);
extern int gdk_pixbuf_get_height_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_height,gdk_pixbuf_get_height_db);
extern GdkPixbuf * gdk_pixbuf_flip_db(const GdkPixbuf *, gboolean);
CheckInterfacedef(gdk_pixbuf_flip,gdk_pixbuf_flip_db);
extern GdkPixbufAnimationIter * gdk_pixbuf_animation_get_iter_db(GdkPixbufAnimation *, const GTimeVal *);
CheckInterfacedef(gdk_pixbuf_animation_get_iter,gdk_pixbuf_animation_get_iter_db);
extern gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame_db(GdkPixbufAnimationIter *);
CheckInterfacedef(gdk_pixbuf_animation_iter_on_currently_loading_frame,gdk_pixbuf_animation_iter_on_currently_loading_frame_db);
extern GdkPixbufAnimation * gdk_pixbuf_loader_get_animation_db(GdkPixbufLoader *);
CheckInterfacedef(gdk_pixbuf_loader_get_animation,gdk_pixbuf_loader_get_animation_db);
extern int gdk_pixbuf_get_rowstride_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_rowstride,gdk_pixbuf_get_rowstride_db);
extern GdkPixbuf * gdk_pixbuf_new_from_file_db(const char *, GError * *);
CheckInterfacedef(gdk_pixbuf_new_from_file,gdk_pixbuf_new_from_file_db);
extern void gdk_pixbuf_loader_set_size_db(GdkPixbufLoader *, gint, gint);
CheckInterfacedef(gdk_pixbuf_loader_set_size,gdk_pixbuf_loader_set_size_db);
extern GType gdk_pixbuf_loader_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_loader_get_type,gdk_pixbuf_loader_get_type_db);
extern GdkPixbuf * gdk_pixbuf_composite_color_simple_db(const GdkPixbuf *, int, int, GdkInterpType, int, int, guint32, guint32);
CheckInterfacedef(gdk_pixbuf_composite_color_simple,gdk_pixbuf_composite_color_simple_db);
extern gboolean gdk_pixbuf_save_db(GdkPixbuf *, const char *, const char *, GError * *, ...);
CheckInterfacedef(gdk_pixbuf_save,gdk_pixbuf_save_db);
extern GdkPixbuf * gdk_pixbuf_new_subpixbuf_db(GdkPixbuf *, int, int, int, int);
CheckInterfacedef(gdk_pixbuf_new_subpixbuf,gdk_pixbuf_new_subpixbuf_db);
extern gchar * gdk_pixbuf_format_get_license_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_get_license,gdk_pixbuf_format_get_license_db);
extern GdkPixbufAnimation * gdk_pixbuf_animation_new_from_file_db(const char *, GError * *);
CheckInterfacedef(gdk_pixbuf_animation_new_from_file,gdk_pixbuf_animation_new_from_file_db);
extern void gdk_pixbuf_fill_db(GdkPixbuf *, guint32);
CheckInterfacedef(gdk_pixbuf_fill,gdk_pixbuf_fill_db);
extern void gdk_pixbuf_composite_color_db(const GdkPixbuf *, GdkPixbuf *, int, int, int, int, double, double, double, double, GdkInterpType, int, int, int, int, guint32, guint32);
CheckInterfacedef(gdk_pixbuf_composite_color,gdk_pixbuf_composite_color_db);
extern void gdk_pixbuf_composite_db(const GdkPixbuf *, GdkPixbuf *, int, int, int, int, double, double, double, double, GdkInterpType, int);
CheckInterfacedef(gdk_pixbuf_composite,gdk_pixbuf_composite_db);
extern int gdk_pixbuf_animation_get_width_db(GdkPixbufAnimation *);
CheckInterfacedef(gdk_pixbuf_animation_get_width,gdk_pixbuf_animation_get_width_db);
extern gboolean gdk_pixbuf_animation_is_static_image_db(GdkPixbufAnimation *);
CheckInterfacedef(gdk_pixbuf_animation_is_static_image,gdk_pixbuf_animation_is_static_image_db);
extern void gdk_pixbuf_scale_db(const GdkPixbuf *, GdkPixbuf *, int, int, int, int, double, double, double, double, GdkInterpType);
CheckInterfacedef(gdk_pixbuf_scale,gdk_pixbuf_scale_db);
extern GdkPixbuf * gdk_pixbuf_animation_iter_get_pixbuf_db(GdkPixbufAnimationIter *);
CheckInterfacedef(gdk_pixbuf_animation_iter_get_pixbuf,gdk_pixbuf_animation_iter_get_pixbuf_db);
extern gchar * gdk_pixbuf_format_get_name_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_get_name,gdk_pixbuf_format_get_name_db);
extern gchar * * gdk_pixbuf_format_get_mime_types_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_get_mime_types,gdk_pixbuf_format_get_mime_types_db);
extern GType gdk_pixbuf_rotation_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_rotation_get_type,gdk_pixbuf_rotation_get_type_db);
extern GType gdk_colorspace_get_type_db(void);
CheckInterfacedef(gdk_colorspace_get_type,gdk_colorspace_get_type_db);
extern GdkPixbufFormat * gdk_pixbuf_loader_get_format_db(GdkPixbufLoader *);
CheckInterfacedef(gdk_pixbuf_loader_get_format,gdk_pixbuf_loader_get_format_db);
extern GType gdk_pixbuf_alpha_mode_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_alpha_mode_get_type,gdk_pixbuf_alpha_mode_get_type_db);
extern gboolean gdk_pixbuf_format_is_disabled_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_is_disabled,gdk_pixbuf_format_is_disabled_db);
extern GdkPixbuf * gdk_pixbuf_rotate_simple_db(const GdkPixbuf *, GdkPixbufRotation);
CheckInterfacedef(gdk_pixbuf_rotate_simple,gdk_pixbuf_rotate_simple_db);
extern void gdk_pixbuf_copy_area_db(const GdkPixbuf *, int, int, int, int, GdkPixbuf *, int, int);
CheckInterfacedef(gdk_pixbuf_copy_area,gdk_pixbuf_copy_area_db);
extern GQuark gdk_pixbuf_error_quark_db(void);
CheckInterfacedef(gdk_pixbuf_error_quark,gdk_pixbuf_error_quark_db);
extern gboolean gdk_pixbuf_format_is_writable_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_is_writable,gdk_pixbuf_format_is_writable_db);
extern GType gdk_pixbuf_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_get_type,gdk_pixbuf_get_type_db);
extern GdkPixbufFormat * gdk_pixbuf_get_file_info_db(const gchar *, gint *, gint *);
CheckInterfacedef(gdk_pixbuf_get_file_info,gdk_pixbuf_get_file_info_db);
extern GdkPixbuf * gdk_pixbuf_copy_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_copy,gdk_pixbuf_copy_db);
extern gboolean gdk_pixbuf_savev_db(GdkPixbuf *, const char *, const char *, char * *, char * *, GError * *);
CheckInterfacedef(gdk_pixbuf_savev,gdk_pixbuf_savev_db);
extern gchar * gdk_pixbuf_format_get_description_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_get_description,gdk_pixbuf_format_get_description_db);
extern GdkPixbuf * gdk_pixbuf_loader_get_pixbuf_db(GdkPixbufLoader *);
CheckInterfacedef(gdk_pixbuf_loader_get_pixbuf,gdk_pixbuf_loader_get_pixbuf_db);
extern gboolean gdk_pixbuf_loader_write_db(GdkPixbufLoader *, const guchar *, gsize, GError * *);
CheckInterfacedef(gdk_pixbuf_loader_write,gdk_pixbuf_loader_write_db);
extern int gdk_pixbuf_animation_get_height_db(GdkPixbufAnimation *);
CheckInterfacedef(gdk_pixbuf_animation_get_height,gdk_pixbuf_animation_get_height_db);
extern int gdk_pixbuf_get_width_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_width,gdk_pixbuf_get_width_db);
extern GdkPixbuf * gdk_pixbuf_new_db(GdkColorspace, gboolean, int, int, int);
CheckInterfacedef(gdk_pixbuf_new,gdk_pixbuf_new_db);
extern gchar * * gdk_pixbuf_format_get_extensions_db(GdkPixbufFormat *);
CheckInterfacedef(gdk_pixbuf_format_get_extensions,gdk_pixbuf_format_get_extensions_db);
extern GdkColorspace gdk_pixbuf_get_colorspace_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_colorspace,gdk_pixbuf_get_colorspace_db);
extern GdkPixbufLoader * gdk_pixbuf_loader_new_with_mime_type_db(const char *, GError * *);
CheckInterfacedef(gdk_pixbuf_loader_new_with_mime_type,gdk_pixbuf_loader_new_with_mime_type_db);
extern GType gdk_pixbuf_error_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_error_get_type,gdk_pixbuf_error_get_type_db);
extern gboolean gdk_pixbuf_get_has_alpha_db(const GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_get_has_alpha,gdk_pixbuf_get_has_alpha_db);
extern const gchar * gdk_pixbuf_get_option_db(GdkPixbuf *, const gchar *);
CheckInterfacedef(gdk_pixbuf_get_option,gdk_pixbuf_get_option_db);
extern int gdk_pixbuf_animation_iter_get_delay_time_db(GdkPixbufAnimationIter *);
CheckInterfacedef(gdk_pixbuf_animation_iter_get_delay_time,gdk_pixbuf_animation_iter_get_delay_time_db);
extern GType gdk_pixbuf_simple_anim_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_simple_anim_get_type,gdk_pixbuf_simple_anim_get_type_db);
extern GType gdk_pixbuf_simple_anim_iter_get_type_db(void);
CheckInterfacedef(gdk_pixbuf_simple_anim_iter_get_type,gdk_pixbuf_simple_anim_iter_get_type_db);
extern GdkPixbufSimpleAnim * gdk_pixbuf_simple_anim_new_db(gint, gint, gfloat);
CheckInterfacedef(gdk_pixbuf_simple_anim_new,gdk_pixbuf_simple_anim_new_db);
extern void gdk_pixbuf_simple_anim_add_frame_db(GdkPixbufSimpleAnim *, GdkPixbuf *);
CheckInterfacedef(gdk_pixbuf_simple_anim_add_frame,gdk_pixbuf_simple_anim_add_frame_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gdk-pixbuf/gdk-pixbuf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
