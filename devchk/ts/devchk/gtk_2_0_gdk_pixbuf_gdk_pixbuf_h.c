/*
 * Test of gtk-2.0/gdk-pixbuf/gdk-pixbuf.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
#define PANGO_DISABLE_DEPRECATED
#define GTK_DISABLE_DEPRECATED
#define GDK_DISABLE_DEPRECATED
#define GDK_PIXBUF_DISABLE_DEPRECATED
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
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixbuf.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixbuf.h\n");
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
	CompareStringConstant(GDK_PIXBUF_VERSION,"2.6.10")
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

#if __i386__
CheckTypeSize(GdkPixbuf,0, 12611, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbuf,0, 12611, 11)
#elif __ia64__
CheckTypeSize(GdkPixbuf,0, 12611, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12611,0);
Msg("Find size of GdkPixbuf (12611)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbuf *,4, 12612, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbuf *,8, 12612, 11)
#elif __ia64__
CheckTypeSize(GdkPixbuf *,8, 12612, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12612,0);
Msg("Find size of GdkPixbuf * (12612)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12613,0);
Msg("Find size of fptr_gdk-pixbuf_122 (12613)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufSaveFunc,4, 12614, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufSaveFunc,8, 12614, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufSaveFunc,8, 12614, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12614,0);
Msg("Find size of GdkPixbufSaveFunc (12614)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPixbufLoader,16, 12615, 2)
CheckMemberSize(struct _GdkPixbufLoader,priv,4,2,43321)
CheckOffset(struct _GdkPixbufLoader,priv,12,2,43321)
#elif __x86_64__
CheckTypeSize(struct _GdkPixbufLoader,32, 12615, 11)
CheckMemberSize(struct _GdkPixbufLoader,priv,8,11,43321)
CheckOffset(struct _GdkPixbufLoader,priv,24,11,43321)
#elif __ia64__
CheckTypeSize(struct _GdkPixbufLoader,32, 12615, 3)
CheckMemberSize(struct _GdkPixbufLoader,priv,8,3,43321)
CheckOffset(struct _GdkPixbufLoader,priv,24,3,43321)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12615,0);
Msg("Find size of _GdkPixbufLoader (12615)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufLoader,16, 12616, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufLoader,32, 12616, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufLoader,32, 12616, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12616,0);
Msg("Find size of GdkPixbufLoader (12616)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufLoader *,4, 12617, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufLoader *,8, 12617, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufLoader *,8, 12617, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12617,0);
Msg("Find size of GdkPixbufLoader * (12617)\n");
#endif

#if __i386__
CheckTypeSize(const GdkPixbuf,0, 12618, 2)
#elif __x86_64__
CheckTypeSize(const GdkPixbuf,0, 12618, 11)
#elif __ia64__
CheckTypeSize(const GdkPixbuf,0, 12618, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12618,0);
Msg("Find size of const GdkPixbuf (12618)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12619,0);
Msg("Find size of const GdkPixbuf * (12619)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufFormat,0, 12621, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufFormat,0, 12621, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufFormat,0, 12621, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12621,0);
Msg("Find size of GdkPixbufFormat (12621)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufFormat *,4, 12622, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufFormat *,8, 12622, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufFormat *,8, 12622, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12622,0);
Msg("Find size of GdkPixbufFormat * (12622)\n");
#endif

#if __i386__
CheckEnum("GDK_INTERP_NEAREST",GDK_INTERP_NEAREST,0);
CheckEnum("GDK_INTERP_TILES",GDK_INTERP_TILES,1);
CheckEnum("GDK_INTERP_BILINEAR",GDK_INTERP_BILINEAR,2);
CheckEnum("GDK_INTERP_HYPER",GDK_INTERP_HYPER,3);
#elif __x86_64__
CheckEnum("GDK_INTERP_NEAREST",GDK_INTERP_NEAREST,0);
CheckEnum("GDK_INTERP_TILES",GDK_INTERP_TILES,1);
CheckEnum("GDK_INTERP_BILINEAR",GDK_INTERP_BILINEAR,2);
CheckEnum("GDK_INTERP_HYPER",GDK_INTERP_HYPER,3);
#elif __ia64__
CheckEnum("GDK_INTERP_NEAREST",GDK_INTERP_NEAREST,0);
CheckEnum("GDK_INTERP_TILES",GDK_INTERP_TILES,1);
CheckEnum("GDK_INTERP_BILINEAR",GDK_INTERP_BILINEAR,2);
CheckEnum("GDK_INTERP_HYPER",GDK_INTERP_HYPER,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12623,0);
Msg("Find size of anon-gtk-2.0/gdk-pixbuf/gdk-pixbuf.h-21 (12623)\n");
#endif

#if __i386__
CheckTypeSize(GdkInterpType,4, 12624, 2)
#elif __x86_64__
CheckTypeSize(GdkInterpType,4, 12624, 11)
#elif __ia64__
CheckTypeSize(GdkInterpType,4, 12624, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12624,0);
Msg("Find size of GdkInterpType (12624)\n");
#endif

#if __i386__
CheckTypeSize(const guchar,1, 12625, 2)
#elif __x86_64__
CheckTypeSize(const guchar,1, 12625, 11)
#elif __ia64__
CheckTypeSize(const guchar,1, 12625, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12625,0);
Msg("Find size of const guchar (12625)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12626,0);
Msg("Find size of const guchar * (12626)\n");
#endif

#if __i386__
CheckEnum("GDK_COLORSPACE_RGB",GDK_COLORSPACE_RGB,0);
#elif __x86_64__
CheckEnum("GDK_COLORSPACE_RGB",GDK_COLORSPACE_RGB,0);
#elif __ia64__
CheckEnum("GDK_COLORSPACE_RGB",GDK_COLORSPACE_RGB,0);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12627,0);
Msg("Find size of anon-gtk-2.0/gdk-pixbuf/gdk-pixbuf.h-6 (12627)\n");
#endif

#if __i386__
CheckTypeSize(GdkColorspace,4, 12628, 2)
#elif __x86_64__
CheckTypeSize(GdkColorspace,4, 12628, 11)
#elif __ia64__
CheckTypeSize(GdkColorspace,4, 12628, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12628,0);
Msg("Find size of GdkColorspace (12628)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12629,0);
Msg("Find size of fptr_gdk-pixbuf_24 (12629)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufDestroyNotify,4, 12630, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufDestroyNotify,8, 12630, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufDestroyNotify,8, 12630, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12630,0);
Msg("Find size of GdkPixbufDestroyNotify (12630)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufAnimationIter,0, 12632, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufAnimationIter,0, 12632, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufAnimationIter,0, 12632, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12632,0);
Msg("Find size of GdkPixbufAnimationIter (12632)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufAnimationIter *,4, 12633, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufAnimationIter *,8, 12633, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufAnimationIter *,8, 12633, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12633,0);
Msg("Find size of GdkPixbufAnimationIter * (12633)\n");
#endif

#if __i386__
CheckTypeSize(const GTimeVal,8, 12634, 2)
#elif __x86_64__
CheckTypeSize(const GTimeVal,16, 12634, 11)
#elif __ia64__
CheckTypeSize(const GTimeVal,16, 12634, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12634,0);
Msg("Find size of const GTimeVal (12634)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12635,0);
Msg("Find size of const GTimeVal * (12635)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufAnimation,0, 12637, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufAnimation,0, 12637, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufAnimation,0, 12637, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12637,0);
Msg("Find size of GdkPixbufAnimation (12637)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufAnimation *,4, 12638, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufAnimation *,8, 12638, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufAnimation *,8, 12638, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12638,0);
Msg("Find size of GdkPixbufAnimation * (12638)\n");
#endif

#if __i386__
CheckEnum("GDK_PIXBUF_ROTATE_NONE",GDK_PIXBUF_ROTATE_NONE,0);
CheckEnum("GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE",GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE,90);
CheckEnum("GDK_PIXBUF_ROTATE_UPSIDEDOWN",GDK_PIXBUF_ROTATE_UPSIDEDOWN,180);
CheckEnum("GDK_PIXBUF_ROTATE_CLOCKWISE",GDK_PIXBUF_ROTATE_CLOCKWISE,270);
#elif __x86_64__
CheckEnum("GDK_PIXBUF_ROTATE_NONE",GDK_PIXBUF_ROTATE_NONE,0);
CheckEnum("GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE",GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE,90);
CheckEnum("GDK_PIXBUF_ROTATE_UPSIDEDOWN",GDK_PIXBUF_ROTATE_UPSIDEDOWN,180);
CheckEnum("GDK_PIXBUF_ROTATE_CLOCKWISE",GDK_PIXBUF_ROTATE_CLOCKWISE,270);
#elif __ia64__
CheckEnum("GDK_PIXBUF_ROTATE_NONE",GDK_PIXBUF_ROTATE_NONE,0);
CheckEnum("GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE",GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE,90);
CheckEnum("GDK_PIXBUF_ROTATE_UPSIDEDOWN",GDK_PIXBUF_ROTATE_UPSIDEDOWN,180);
CheckEnum("GDK_PIXBUF_ROTATE_CLOCKWISE",GDK_PIXBUF_ROTATE_CLOCKWISE,270);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12639,0);
Msg("Find size of anon-gtk-2.0/gdk-pixbuf/gdk-pixbuf.h-22 (12639)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufRotation,4, 12640, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufRotation,4, 12640, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufRotation,4, 12640, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12640,0);
Msg("Find size of GdkPixbufRotation (12640)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPixbufLoaderClass,84, 12641, 2)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,4,2,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,68,2,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,4,2,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,72,2,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,4,2,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,76,2,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,4,2,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,80,2,43346)
#elif __x86_64__
CheckTypeSize(struct _GdkPixbufLoaderClass,168, 12641, 11)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,8,11,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,136,11,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,8,11,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,144,11,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,8,11,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,152,11,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,8,11,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,160,11,43346)
#elif __ia64__
CheckTypeSize(struct _GdkPixbufLoaderClass,168, 12641, 3)
CheckMemberSize(struct _GdkPixbufLoaderClass,size_prepared,8,3,43337)
CheckOffset(struct _GdkPixbufLoaderClass,size_prepared,136,3,43337)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_prepared,8,3,43339)
CheckOffset(struct _GdkPixbufLoaderClass,area_prepared,144,3,43339)
CheckMemberSize(struct _GdkPixbufLoaderClass,area_updated,8,3,43345)
CheckOffset(struct _GdkPixbufLoaderClass,area_updated,152,3,43345)
CheckMemberSize(struct _GdkPixbufLoaderClass,closed,8,3,43346)
CheckOffset(struct _GdkPixbufLoaderClass,closed,160,3,43346)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12641,0);
Msg("Find size of _GdkPixbufLoaderClass (12641)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12642,0);
Msg("Find size of fptr_gdk-pixbuf_26 (12642)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12643,0);
Msg("Find size of fptr_gdk-pixbuf_13 (12643)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12644,0);
Msg("Find size of fptr_gdk-pixbuf_36 (12644)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufLoaderClass,84, 12645, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufLoaderClass,168, 12645, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufLoaderClass,168, 12645, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12645,0);
Msg("Find size of GdkPixbufLoaderClass (12645)\n");
#endif

#if __i386__
CheckEnum("GDK_PIXBUF_ERROR_CORRUPT_IMAGE",GDK_PIXBUF_ERROR_CORRUPT_IMAGE,0);
CheckEnum("GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY",GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,(0) + 1);
CheckEnum("GDK_PIXBUF_ERROR_BAD_OPTION",GDK_PIXBUF_ERROR_BAD_OPTION,((0) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_UNKNOWN_TYPE",GDK_PIXBUF_ERROR_UNKNOWN_TYPE,(((0) + 1) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION",GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,((((0) + 1) + 1) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_FAILED",GDK_PIXBUF_ERROR_FAILED,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __x86_64__
CheckEnum("GDK_PIXBUF_ERROR_CORRUPT_IMAGE",GDK_PIXBUF_ERROR_CORRUPT_IMAGE,0);
CheckEnum("GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY",GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,(0) + 1);
CheckEnum("GDK_PIXBUF_ERROR_BAD_OPTION",GDK_PIXBUF_ERROR_BAD_OPTION,((0) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_UNKNOWN_TYPE",GDK_PIXBUF_ERROR_UNKNOWN_TYPE,(((0) + 1) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION",GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,((((0) + 1) + 1) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_FAILED",GDK_PIXBUF_ERROR_FAILED,(((((0) + 1) + 1) + 1) + 1) + 1);
#elif __ia64__
CheckEnum("GDK_PIXBUF_ERROR_CORRUPT_IMAGE",GDK_PIXBUF_ERROR_CORRUPT_IMAGE,0);
CheckEnum("GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY",GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,(0) + 1);
CheckEnum("GDK_PIXBUF_ERROR_BAD_OPTION",GDK_PIXBUF_ERROR_BAD_OPTION,((0) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_UNKNOWN_TYPE",GDK_PIXBUF_ERROR_UNKNOWN_TYPE,(((0) + 1) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION",GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,((((0) + 1) + 1) + 1) + 1);
CheckEnum("GDK_PIXBUF_ERROR_FAILED",GDK_PIXBUF_ERROR_FAILED,(((((0) + 1) + 1) + 1) + 1) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12646,0);
Msg("Find size of anonymous-gdk-pixbuf.h.types-0 (12646)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufError,4, 12647, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufError,4, 12647, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufError,4, 12647, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12647,0);
Msg("Find size of GdkPixbufError (12647)\n");
#endif

#if __i386__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,(0) + 1);
#elif __x86_64__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,(0) + 1);
#elif __ia64__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,(0) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12648,0);
Msg("Find size of anonymous-gdk-pixbuf.h.types-2 (12648)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 2)
#elif __x86_64__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 11)
#elif __ia64__
CheckTypeSize(GdkPixbufAlphaMode,4, 12649, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12649,0);
Msg("Find size of GdkPixbufAlphaMode (12649)\n");
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
