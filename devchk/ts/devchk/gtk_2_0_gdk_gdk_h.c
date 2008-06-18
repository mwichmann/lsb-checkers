/*
 * Test of gtk-2.0/gdk/gdk.h
 */
#include "hdrchk.h"
#include <stdio.h>
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


#include <fontconfig/fontconfig.h>
struct _GdkAtom { };
struct _GdkRegion { };
struct _GdkDisplayManager { };
struct _GdkPangoRendererPrivate { };
#ifdef LSBCC_MODE
struct _GdkFont {};
#endif
struct _GdkDeviceClass {};
struct _GdkVisualClass {};
#include "gtk-2.0/gdk/gdk.h"



#ifdef TET_TEST
void gtk_2_0_gdk_gdk_h()
{
#else
int gtk_2_0_gdk_gdk_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk/gdk.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk/gdk.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for GDKVAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_CURRENT_TIME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PARENT_RELATIVE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_ATOM_TO_POINTER(atom) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_POINTER_TO_ATOM(ptr) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _GDK_MAKE_ATOM(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_NONE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_COLORMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_COLORMAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_COLORMAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_COLORMAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_COLORMAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_COLORMAP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_COLOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_CURSOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DRAG_CONTEXT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAG_CONTEXT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAG_CONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DRAG_CONTEXT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DRAG_CONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAG_CONTEXT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DEVICE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DEVICE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DEVICE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DEVICE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DEVICE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DEVICE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_MAX_TIMECOORD_AXES
	CompareConstant(GDK_MAX_TIMECOORD_AXES,128,6668,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_MAX_TIMECOORD_AXES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_EVENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PRIORITY_EVENTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PRIORITY_REDRAW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DISPLAY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DISPLAY(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DISPLAY_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_GC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_GC(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_GC_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_GC(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_GC_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_GC_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DRAWABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAWABLE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAWABLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DRAWABLE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DRAWABLE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAWABLE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for gdk_draw_bitmap */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_CURSOR_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DRAG_ACTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DRAG_PROTOCOL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_FILTER_RETURN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_EVENT_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_EVENT_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_VISIBILITY_STATE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_SCROLL_DIRECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_NOTIFY_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_CROSSING_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PROPERTY_STATE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_STATE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_SETTING_ACTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_OWNER_CHANGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_FONT_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_CAP_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_FILL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_FUNCTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_JOIN_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_LINE_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_SUBWINDOW_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_GC_VALUES_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_IMAGE_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_EXTENSION_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_INPUT_SOURCE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_INPUT_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_AXIS_USE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PROP_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_FILL_RULE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_OVERLAP_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_RGB_DITHER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_BYTE_ORDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_MODIFIER_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_INPUT_CONDITION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_STATUS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_GRAB_STATUS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_VISUAL_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_CLASS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_ATTRIBUTES_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_HINTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_TYPE_HINT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WM_DECORATION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WM_FUNCTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_GRAVITY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW_EDGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_IMAGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IMAGE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IMAGE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_IMAGE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_IMAGE_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IMAGE_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_KEYMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_KEYMAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_KEYMAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_KEYMAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_KEYMAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_KEYMAP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_DISPLAY_MANAGER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_MANAGER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_MANAGER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DISPLAY_MANAGER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_DISPLAY_MANAGER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_MANAGER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PANGO_RENDERER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PANGO_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PANGO_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PANGO_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PANGO_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PANGO_RENDERER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_PIXMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXMAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXMAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXMAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_PIXMAP_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXMAP_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXMAP_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_SCREEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SCREEN(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SCREEN_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_SCREEN(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_SCREEN_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SCREEN_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_PRIMARY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_SECONDARY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_CLIPBOARD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TARGET_BITMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TARGET_COLORMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TARGET_DRAWABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TARGET_PIXMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TARGET_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_ATOM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_BITMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_COLORMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_DRAWABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_INTEGER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_PIXMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_WINDOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SELECTION_TYPE_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_VISUAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_VISUAL(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_VISUAL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_VISUAL(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_VISUAL_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_VISUAL_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_WINDOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_WINDOW(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IS_WINDOW_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_TYPE_RECTANGLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_THREADS_ENTER() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_THREADS_LEAVE() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOWING_X11 */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_HAVE_WCHAR_H
	CompareConstant(GDK_HAVE_WCHAR_H,1,9492,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_HAVE_WCHAR_H\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_HAVE_WCTYPE_H
	CompareConstant(GDK_HAVE_WCTYPE_H,1,9493,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_HAVE_WCTYPE_H\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(GdkWindow,24, 12673, 12, 3.1, NULL, 12672, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindow,24, 12673, 11, 3.1, NULL, 12672, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindow,12, 12673, 10, 3.1, NULL, 12672, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindow,24, 12673, 9, 3.1, NULL, 12672, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindow,12, 12673, 6, 3.1, NULL, 12672, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindow,24, 12673, 3, 3.1, NULL, 12672, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindow,12, 12673, 2, 3.1, NULL, 12672, NULL)
#else
Msg("Find size of GdkWindow (12673)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12672,NULL);\n",architecture,12673,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkColor,12, 12678, 12, 3.1, NULL, 12677, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkColor,12, 12678, 11, 3.1, NULL, 12677, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkColor,12, 12678, 10, 3.1, NULL, 12677, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkColor,12, 12678, 9, 3.1, NULL, 12677, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkColor,12, 12678, 6, 3.1, NULL, 12677, NULL)
#elif defined __ia64__
CheckTypeSize(GdkColor,12, 12678, 3, 3.1, NULL, 12677, NULL)
#elif defined __i386__
CheckTypeSize(GdkColor,12, 12678, 2, 3.1, NULL, 12677, NULL)
#else
Msg("Find size of GdkColor (12678)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12677,NULL);\n",architecture,12678,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkVisualType,4, 12682, 12, 3.1, NULL, 12681, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkVisualType,4, 12682, 11, 3.1, NULL, 12681, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkVisualType,4, 12682, 10, 3.1, NULL, 12681, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkVisualType,4, 12682, 9, 3.1, NULL, 12681, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkVisualType,4, 12682, 6, 3.1, NULL, 12681, NULL)
#elif defined __ia64__
CheckTypeSize(GdkVisualType,4, 12682, 3, 3.1, NULL, 12681, NULL)
#elif defined __i386__
CheckTypeSize(GdkVisualType,4, 12682, 2, 3.1, NULL, 12681, NULL)
#else
Msg("Find size of GdkVisualType (12682)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12681,NULL);\n",architecture,12682,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkByteOrder,4, 12684, 12, 3.1, NULL, 12683, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkByteOrder,4, 12684, 11, 3.1, NULL, 12683, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkByteOrder,4, 12684, 10, 3.1, NULL, 12683, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkByteOrder,4, 12684, 9, 3.1, NULL, 12683, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkByteOrder,4, 12684, 6, 3.1, NULL, 12683, NULL)
#elif defined __ia64__
CheckTypeSize(GdkByteOrder,4, 12684, 3, 3.1, NULL, 12683, NULL)
#elif defined __i386__
CheckTypeSize(GdkByteOrder,4, 12684, 2, 3.1, NULL, 12683, NULL)
#else
Msg("Find size of GdkByteOrder (12684)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12683,NULL);\n",architecture,12684,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkVisual,80, 12685, 12, 3.1, NULL, 12680, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkVisual,80, 12685, 11, 3.1, NULL, 12680, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkVisual,68, 12685, 10, 3.1, NULL, 12680, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkVisual,80, 12685, 9, 3.1, NULL, 12680, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkVisual,68, 12685, 6, 3.1, NULL, 12680, NULL)
#elif defined __ia64__
CheckTypeSize(GdkVisual,80, 12685, 3, 3.1, NULL, 12680, NULL)
#elif defined __i386__
CheckTypeSize(GdkVisual,68, 12685, 2, 3.1, NULL, 12680, NULL)
#else
Msg("Find size of GdkVisual (12685)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12680,NULL);\n",architecture,12685,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkColormap,56, 12687, 12, 3.1, NULL, 12676, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkColormap,56, 12687, 11, 3.1, NULL, 12676, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkColormap,28, 12687, 10, 3.1, NULL, 12676, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkColormap,56, 12687, 9, 3.1, NULL, 12676, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkColormap,28, 12687, 6, 3.1, NULL, 12676, NULL)
#elif defined __ia64__
CheckTypeSize(GdkColormap,56, 12687, 3, 3.1, NULL, 12676, NULL)
#elif defined __i386__
CheckTypeSize(GdkColormap,28, 12687, 2, 3.1, NULL, 12676, NULL)
#else
Msg("Find size of GdkColormap (12687)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12676,NULL);\n",architecture,12687,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGC,48, 12689, 12, 3.1, NULL, 12675, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGC,48, 12689, 11, 3.1, NULL, 12675, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGC,32, 12689, 10, 3.1, NULL, 12675, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGC,48, 12689, 9, 3.1, NULL, 12675, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGC,32, 12689, 6, 3.1, NULL, 12675, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGC,48, 12689, 3, 3.1, NULL, 12675, NULL)
#elif defined __i386__
CheckTypeSize(GdkGC,32, 12689, 2, 3.1, NULL, 12675, NULL)
#else
Msg("Find size of GdkGC (12689)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12675,NULL);\n",architecture,12689,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDrawable,24, 12691, 12, 3.1, NULL, 12672, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDrawable,24, 12691, 11, 3.1, NULL, 12672, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDrawable,12, 12691, 10, 3.1, NULL, 12672, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDrawable,24, 12691, 9, 3.1, NULL, 12672, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDrawable,12, 12691, 6, 3.1, NULL, 12672, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDrawable,24, 12691, 3, 3.1, NULL, 12672, NULL)
#elif defined __i386__
CheckTypeSize(GdkDrawable,12, 12691, 2, 3.1, NULL, 12672, NULL)
#else
Msg("Find size of GdkDrawable (12691)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12672,NULL);\n",architecture,12691,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkInputSource,4, 12699, 12, 3.1, NULL, 12698, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkInputSource,4, 12699, 11, 3.1, NULL, 12698, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkInputSource,4, 12699, 10, 3.1, NULL, 12698, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkInputSource,4, 12699, 9, 3.1, NULL, 12698, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkInputSource,4, 12699, 6, 3.1, NULL, 12698, NULL)
#elif defined __ia64__
CheckTypeSize(GdkInputSource,4, 12699, 3, 3.1, NULL, 12698, NULL)
#elif defined __i386__
CheckTypeSize(GdkInputSource,4, 12699, 2, 3.1, NULL, 12698, NULL)
#else
Msg("Find size of GdkInputSource (12699)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12698,NULL);\n",architecture,12699,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkInputMode,4, 12701, 12, 3.1, NULL, 12700, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkInputMode,4, 12701, 11, 3.1, NULL, 12700, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkInputMode,4, 12701, 10, 3.1, NULL, 12700, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkInputMode,4, 12701, 9, 3.1, NULL, 12700, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkInputMode,4, 12701, 6, 3.1, NULL, 12700, NULL)
#elif defined __ia64__
CheckTypeSize(GdkInputMode,4, 12701, 3, 3.1, NULL, 12700, NULL)
#elif defined __i386__
CheckTypeSize(GdkInputMode,4, 12701, 2, 3.1, NULL, 12700, NULL)
#else
Msg("Find size of GdkInputMode (12701)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12700,NULL);\n",architecture,12701,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkAxisUse,4, 12704, 12, 3.1, NULL, 12703, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkAxisUse,4, 12704, 11, 3.1, NULL, 12703, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkAxisUse,4, 12704, 10, 3.1, NULL, 12703, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkAxisUse,4, 12704, 9, 3.1, NULL, 12703, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkAxisUse,4, 12704, 6, 3.1, NULL, 12703, NULL)
#elif defined __ia64__
CheckTypeSize(GdkAxisUse,4, 12704, 3, 3.1, NULL, 12703, NULL)
#elif defined __i386__
CheckTypeSize(GdkAxisUse,4, 12704, 2, 3.1, NULL, 12703, NULL)
#else
Msg("Find size of GdkAxisUse (12704)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12703,NULL);\n",architecture,12704,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDeviceAxis,24, 12705, 12, 3.1, NULL, 12702, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDeviceAxis,24, 12705, 11, 3.1, NULL, 12702, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDeviceAxis,24, 12705, 10, 3.1, NULL, 12702, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDeviceAxis,24, 12705, 9, 3.1, NULL, 12702, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDeviceAxis,24, 12705, 6, 3.1, NULL, 12702, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDeviceAxis,24, 12705, 3, 3.1, NULL, 12702, NULL)
#elif defined __i386__
CheckTypeSize(GdkDeviceAxis,20, 12705, 2, 3.1, NULL, 12702, NULL)
#else
Msg("Find size of GdkDeviceAxis (12705)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12702,NULL);\n",architecture,12705,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkModifierType,4, 12709, 12, 3.1, NULL, 12708, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkModifierType,4, 12709, 11, 3.1, NULL, 12708, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkModifierType,4, 12709, 10, 3.1, NULL, 12708, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkModifierType,4, 12709, 9, 3.1, NULL, 12708, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkModifierType,4, 12709, 6, 3.1, NULL, 12708, NULL)
#elif defined __ia64__
CheckTypeSize(GdkModifierType,4, 12709, 3, 3.1, NULL, 12708, NULL)
#elif defined __i386__
CheckTypeSize(GdkModifierType,4, 12709, 2, 3.1, NULL, 12708, NULL)
#else
Msg("Find size of GdkModifierType (12709)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12708,NULL);\n",architecture,12709,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDeviceKey,8, 12710, 12, 3.1, NULL, 12707, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDeviceKey,8, 12710, 11, 3.1, NULL, 12707, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDeviceKey,8, 12710, 10, 3.1, NULL, 12707, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDeviceKey,8, 12710, 9, 3.1, NULL, 12707, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDeviceKey,8, 12710, 6, 3.1, NULL, 12707, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDeviceKey,8, 12710, 3, 3.1, NULL, 12707, NULL)
#elif defined __i386__
CheckTypeSize(GdkDeviceKey,8, 12710, 2, 3.1, NULL, 12707, NULL)
#else
Msg("Find size of GdkDeviceKey (12710)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12707,NULL);\n",architecture,12710,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDevice,72, 12712, 12, 3.1, NULL, 12697, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDevice,72, 12712, 11, 3.1, NULL, 12697, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDevice,44, 12712, 10, 3.1, NULL, 12697, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDevice,72, 12712, 9, 3.1, NULL, 12697, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDevice,44, 12712, 6, 3.1, NULL, 12697, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDevice,72, 12712, 3, 3.1, NULL, 12697, NULL)
#elif defined __i386__
CheckTypeSize(GdkDevice,44, 12712, 2, 3.1, NULL, 12697, NULL)
#else
Msg("Find size of GdkDevice (12712)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12697,NULL);\n",architecture,12712,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDisplay,120, 12715, 12, 3.1, NULL, 12693, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDisplay,120, 12715, 11, 3.1, NULL, 12693, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDisplay,80, 12715, 10, 3.1, NULL, 12693, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDisplay,120, 12715, 9, 3.1, NULL, 12693, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDisplay,80, 12715, 6, 3.1, NULL, 12693, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDisplay,120, 12715, 3, 3.1, NULL, 12693, NULL)
#elif defined __i386__
CheckTypeSize(GdkDisplay,80, 12715, 2, 3.1, NULL, 12693, NULL)
#else
Msg("Find size of GdkDisplay (12715)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12693,NULL);\n",architecture,12715,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkScreen,544, 12719, 12, 3.1, NULL, 12717, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkScreen,544, 12719, 11, 3.1, NULL, 12717, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkScreen,272, 12719, 10, 3.1, NULL, 12717, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkScreen,544, 12719, 9, 3.1, NULL, 12717, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkScreen,272, 12719, 6, 3.1, NULL, 12717, NULL)
#elif defined __ia64__
CheckTypeSize(GdkScreen,544, 12719, 3, 3.1, NULL, 12717, NULL)
#elif defined __i386__
CheckTypeSize(GdkScreen,272, 12719, 2, 3.1, NULL, 12717, NULL)
#else
Msg("Find size of GdkScreen (12719)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12717,NULL);\n",architecture,12719,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDisplayPointerHooks,24, 12726, 12, 3.1, NULL, 12714, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDisplayPointerHooks,24, 12726, 11, 3.1, NULL, 12714, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDisplayPointerHooks,12, 12726, 10, 3.1, NULL, 12714, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDisplayPointerHooks,24, 12726, 9, 3.1, NULL, 12714, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDisplayPointerHooks,12, 12726, 6, 3.1, NULL, 12714, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDisplayPointerHooks,24, 12726, 3, 3.1, NULL, 12714, NULL)
#elif defined __i386__
CheckTypeSize(GdkDisplayPointerHooks,12, 12726, 2, 3.1, NULL, 12714, NULL)
#else
Msg("Find size of GdkDisplayPointerHooks (12726)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12714,NULL);\n",architecture,12726,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventMask,4, 12730, 12, 3.1, NULL, 12729, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventMask,4, 12730, 11, 3.1, NULL, 12729, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventMask,4, 12730, 10, 3.1, NULL, 12729, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventMask,4, 12730, 9, 3.1, NULL, 12729, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventMask,4, 12730, 6, 3.1, NULL, 12729, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventMask,4, 12730, 3, 3.1, NULL, 12729, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventMask,4, 12730, 2, 3.1, NULL, 12729, NULL)
#else
Msg("Find size of GdkEventMask (12730)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12729,NULL);\n",architecture,12730,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkCursorType,4, 12733, 12, 3.1, NULL, 12732, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkCursorType,4, 12733, 11, 3.1, NULL, 12732, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkCursorType,4, 12733, 10, 3.1, NULL, 12732, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkCursorType,4, 12733, 9, 3.1, NULL, 12732, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkCursorType,4, 12733, 6, 3.1, NULL, 12732, NULL)
#elif defined __ia64__
CheckTypeSize(GdkCursorType,4, 12733, 3, 3.1, NULL, 12732, NULL)
#elif defined __i386__
CheckTypeSize(GdkCursorType,4, 12733, 2, 3.1, NULL, 12732, NULL)
#else
Msg("Find size of GdkCursorType (12733)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12732,NULL);\n",architecture,12733,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkCursor,8, 12734, 12, 3.1, NULL, 12731, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkCursor,8, 12734, 11, 3.1, NULL, 12731, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkCursor,8, 12734, 10, 3.1, NULL, 12731, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkCursor,8, 12734, 9, 3.1, NULL, 12731, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkCursor,8, 12734, 6, 3.1, NULL, 12731, NULL)
#elif defined __ia64__
CheckTypeSize(GdkCursor,8, 12734, 3, 3.1, NULL, 12731, NULL)
#elif defined __i386__
CheckTypeSize(GdkCursor,8, 12734, 2, 3.1, NULL, 12731, NULL)
#else
Msg("Find size of GdkCursor (12734)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12731,NULL);\n",architecture,12734,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkKeymap,32, 12737, 12, 3.1, NULL, 12736, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkKeymap,32, 12737, 11, 3.1, NULL, 12736, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkKeymap,16, 12737, 10, 3.1, NULL, 12736, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkKeymap,32, 12737, 9, 3.1, NULL, 12736, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkKeymap,16, 12737, 6, 3.1, NULL, 12736, NULL)
#elif defined __ia64__
CheckTypeSize(GdkKeymap,32, 12737, 3, 3.1, NULL, 12736, NULL)
#elif defined __i386__
CheckTypeSize(GdkKeymap,16, 12737, 2, 3.1, NULL, 12736, NULL)
#else
Msg("Find size of GdkKeymap (12737)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12736,NULL);\n",architecture,12737,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkAtom,8, 12741, 12, 3.1, NULL, 12740, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkAtom,8, 12741, 11, 3.1, NULL, 12740, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkAtom,4, 12741, 10, 3.1, NULL, 12740, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkAtom,8, 12741, 9, 3.1, NULL, 12740, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkAtom,4, 12741, 6, 3.1, NULL, 12740, NULL)
#elif defined __ia64__
CheckTypeSize(GdkAtom,8, 12741, 3, 3.1, NULL, 12740, NULL)
#elif defined __i386__
CheckTypeSize(GdkAtom,4, 12741, 2, 3.1, NULL, 12740, NULL)
#else
Msg("Find size of GdkAtom (12741)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12740,NULL);\n",architecture,12741,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkFilterReturn,4, 12743, 12, 3.1, NULL, 12742, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkFilterReturn,4, 12743, 11, 3.1, NULL, 12742, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkFilterReturn,4, 12743, 10, 3.1, NULL, 12742, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkFilterReturn,4, 12743, 9, 3.1, NULL, 12742, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkFilterReturn,4, 12743, 6, 3.1, NULL, 12742, NULL)
#elif defined __ia64__
CheckTypeSize(GdkFilterReturn,4, 12743, 3, 3.1, NULL, 12742, NULL)
#elif defined __i386__
CheckTypeSize(GdkFilterReturn,4, 12743, 2, 3.1, NULL, 12742, NULL)
#else
Msg("Find size of GdkFilterReturn (12743)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12742,NULL);\n",architecture,12743,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkXEvent,1, 12744, 12, 3.1, NULL, 1, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkXEvent,1, 12744, 11, 3.1, NULL, 1, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkXEvent,1, 12744, 10, 3.1, NULL, 1, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkXEvent,1, 12744, 9, 3.1, NULL, 1, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkXEvent,1, 12744, 6, 3.1, NULL, 1, NULL)
#elif defined __ia64__
CheckTypeSize(GdkXEvent,1, 12744, 3, 3.1, NULL, 1, NULL)
#elif defined __i386__
CheckTypeSize(GdkXEvent,1, 12744, 2, 3.1, NULL, 1, NULL)
#else
Msg("Find size of GdkXEvent (12744)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,1,NULL);\n",architecture,12744,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventType,4, 12748, 12, 3.1, NULL, 12747, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventType,4, 12748, 11, 3.1, NULL, 12747, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventType,4, 12748, 10, 3.1, NULL, 12747, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventType,4, 12748, 9, 3.1, NULL, 12747, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventType,4, 12748, 6, 3.1, NULL, 12747, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventType,4, 12748, 3, 3.1, NULL, 12747, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventType,4, 12748, 2, 3.1, NULL, 12747, NULL)
#else
Msg("Find size of GdkEventType (12748)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12747,NULL);\n",architecture,12748,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventAny,24, 12750, 12, 3.1, NULL, 12749, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventAny,24, 12750, 11, 3.1, NULL, 12749, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventAny,12, 12750, 10, 3.1, NULL, 12749, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventAny,24, 12750, 9, 3.1, NULL, 12749, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventAny,12, 12750, 6, 3.1, NULL, 12749, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventAny,24, 12750, 3, 3.1, NULL, 12749, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventAny,12, 12750, 2, 3.1, NULL, 12749, NULL)
#else
Msg("Find size of GdkEventAny (12750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12749,NULL);\n",architecture,12750,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkRectangle,16, 12753, 12, 3.1, NULL, 12752, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkRectangle,16, 12753, 11, 3.1, NULL, 12752, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkRectangle,16, 12753, 10, 3.1, NULL, 12752, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkRectangle,16, 12753, 9, 3.1, NULL, 12752, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkRectangle,16, 12753, 6, 3.1, NULL, 12752, NULL)
#elif defined __ia64__
CheckTypeSize(GdkRectangle,16, 12753, 3, 3.1, NULL, 12752, NULL)
#elif defined __i386__
CheckTypeSize(GdkRectangle,16, 12753, 2, 3.1, NULL, 12752, NULL)
#else
Msg("Find size of GdkRectangle (12753)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12752,NULL);\n",architecture,12753,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventExpose,56, 12757, 12, 3.1, NULL, 12751, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventExpose,56, 12757, 11, 3.1, NULL, 12751, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventExpose,36, 12757, 10, 3.1, NULL, 12751, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventExpose,56, 12757, 9, 3.1, NULL, 12751, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventExpose,36, 12757, 6, 3.1, NULL, 12751, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventExpose,56, 12757, 3, 3.1, NULL, 12751, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventExpose,36, 12757, 2, 3.1, NULL, 12751, NULL)
#else
Msg("Find size of GdkEventExpose (12757)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12751,NULL);\n",architecture,12757,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventNoExpose,24, 12759, 12, 3.1, NULL, 12758, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventNoExpose,24, 12759, 11, 3.1, NULL, 12758, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventNoExpose,12, 12759, 10, 3.1, NULL, 12758, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventNoExpose,24, 12759, 9, 3.1, NULL, 12758, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventNoExpose,12, 12759, 6, 3.1, NULL, 12758, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventNoExpose,24, 12759, 3, 3.1, NULL, 12758, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventNoExpose,12, 12759, 2, 3.1, NULL, 12758, NULL)
#else
Msg("Find size of GdkEventNoExpose (12759)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12758,NULL);\n",architecture,12759,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkVisibilityState,4, 12762, 12, 3.1, NULL, 12761, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkVisibilityState,4, 12762, 11, 3.1, NULL, 12761, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkVisibilityState,4, 12762, 10, 3.1, NULL, 12761, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkVisibilityState,4, 12762, 9, 3.1, NULL, 12761, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkVisibilityState,4, 12762, 6, 3.1, NULL, 12761, NULL)
#elif defined __ia64__
CheckTypeSize(GdkVisibilityState,4, 12762, 3, 3.1, NULL, 12761, NULL)
#elif defined __i386__
CheckTypeSize(GdkVisibilityState,4, 12762, 2, 3.1, NULL, 12761, NULL)
#else
Msg("Find size of GdkVisibilityState (12762)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12761,NULL);\n",architecture,12762,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventVisibility,24, 12763, 12, 3.1, NULL, 12760, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventVisibility,24, 12763, 11, 3.1, NULL, 12760, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventVisibility,16, 12763, 10, 3.1, NULL, 12760, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventVisibility,24, 12763, 9, 3.1, NULL, 12760, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventVisibility,16, 12763, 6, 3.1, NULL, 12760, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventVisibility,24, 12763, 3, 3.1, NULL, 12760, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventVisibility,16, 12763, 2, 3.1, NULL, 12760, NULL)
#else
Msg("Find size of GdkEventVisibility (12763)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12760,NULL);\n",architecture,12763,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventMotion,80, 12766, 12, 3.1, NULL, 12764, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventMotion,80, 12766, 11, 3.1, NULL, 12764, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventMotion,64, 12766, 10, 3.1, NULL, 12764, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventMotion,80, 12766, 9, 3.1, NULL, 12764, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventMotion,64, 12766, 6, 3.1, NULL, 12764, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventMotion,80, 12766, 3, 3.1, NULL, 12764, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventMotion,64, 12766, 2, 3.1, NULL, 12764, NULL)
#else
Msg("Find size of GdkEventMotion (12766)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12764,NULL);\n",architecture,12766,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventButton,80, 12768, 12, 3.1, NULL, 12767, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventButton,80, 12768, 11, 3.1, NULL, 12767, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventButton,64, 12768, 10, 3.1, NULL, 12767, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventButton,80, 12768, 9, 3.1, NULL, 12767, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventButton,64, 12768, 6, 3.1, NULL, 12767, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventButton,80, 12768, 3, 3.1, NULL, 12767, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventButton,64, 12768, 2, 3.1, NULL, 12767, NULL)
#else
Msg("Find size of GdkEventButton (12768)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12767,NULL);\n",architecture,12768,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkScrollDirection,4, 12771, 12, 3.1, NULL, 12770, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkScrollDirection,4, 12771, 11, 3.1, NULL, 12770, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkScrollDirection,4, 12771, 10, 3.1, NULL, 12770, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkScrollDirection,4, 12771, 9, 3.1, NULL, 12770, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkScrollDirection,4, 12771, 6, 3.1, NULL, 12770, NULL)
#elif defined __ia64__
CheckTypeSize(GdkScrollDirection,4, 12771, 3, 3.1, NULL, 12770, NULL)
#elif defined __i386__
CheckTypeSize(GdkScrollDirection,4, 12771, 2, 3.1, NULL, 12770, NULL)
#else
Msg("Find size of GdkScrollDirection (12771)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12770,NULL);\n",architecture,12771,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventScroll,72, 12772, 12, 3.1, NULL, 12769, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventScroll,72, 12772, 11, 3.1, NULL, 12769, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventScroll,64, 12772, 10, 3.1, NULL, 12769, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventScroll,72, 12772, 9, 3.1, NULL, 12769, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventScroll,64, 12772, 6, 3.1, NULL, 12769, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventScroll,72, 12772, 3, 3.1, NULL, 12769, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventScroll,60, 12772, 2, 3.1, NULL, 12769, NULL)
#else
Msg("Find size of GdkEventScroll (12772)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12769,NULL);\n",architecture,12772,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventKey,56, 12774, 12, 3.1, NULL, 12773, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventKey,56, 12774, 11, 3.1, NULL, 12773, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventKey,36, 12774, 10, 3.1, NULL, 12773, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventKey,56, 12774, 9, 3.1, NULL, 12773, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventKey,36, 12774, 6, 3.1, NULL, 12773, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventKey,56, 12774, 3, 3.1, NULL, 12773, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventKey,36, 12774, 2, 3.1, NULL, 12773, NULL)
#else
Msg("Find size of GdkEventKey (12774)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12773,NULL);\n",architecture,12774,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkCrossingMode,4, 12777, 12, 3.1, NULL, 12776, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkCrossingMode,4, 12777, 11, 3.1, NULL, 12776, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkCrossingMode,4, 12777, 10, 3.1, NULL, 12776, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkCrossingMode,4, 12777, 9, 3.1, NULL, 12776, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkCrossingMode,4, 12777, 6, 3.1, NULL, 12776, NULL)
#elif defined __ia64__
CheckTypeSize(GdkCrossingMode,4, 12777, 3, 3.1, NULL, 12776, NULL)
#elif defined __i386__
CheckTypeSize(GdkCrossingMode,4, 12777, 2, 3.1, NULL, 12776, NULL)
#else
Msg("Find size of GdkCrossingMode (12777)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12776,NULL);\n",architecture,12777,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkNotifyType,4, 12779, 12, 3.1, NULL, 12778, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkNotifyType,4, 12779, 11, 3.1, NULL, 12778, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkNotifyType,4, 12779, 10, 3.1, NULL, 12778, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkNotifyType,4, 12779, 9, 3.1, NULL, 12778, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkNotifyType,4, 12779, 6, 3.1, NULL, 12778, NULL)
#elif defined __ia64__
CheckTypeSize(GdkNotifyType,4, 12779, 3, 3.1, NULL, 12778, NULL)
#elif defined __i386__
CheckTypeSize(GdkNotifyType,4, 12779, 2, 3.1, NULL, 12778, NULL)
#else
Msg("Find size of GdkNotifyType (12779)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12778,NULL);\n",architecture,12779,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventCrossing,88, 12780, 12, 3.1, NULL, 12775, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventCrossing,88, 12780, 11, 3.1, NULL, 12775, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventCrossing,72, 12780, 10, 3.1, NULL, 12775, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventCrossing,88, 12780, 9, 3.1, NULL, 12775, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventCrossing,72, 12780, 6, 3.1, NULL, 12775, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventCrossing,88, 12780, 3, 3.1, NULL, 12775, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventCrossing,68, 12780, 2, 3.1, NULL, 12775, NULL)
#else
Msg("Find size of GdkEventCrossing (12780)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12775,NULL);\n",architecture,12780,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventFocus,24, 12782, 12, 3.1, NULL, 12781, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventFocus,24, 12782, 11, 3.1, NULL, 12781, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventFocus,12, 12782, 10, 3.1, NULL, 12781, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventFocus,24, 12782, 9, 3.1, NULL, 12781, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventFocus,12, 12782, 6, 3.1, NULL, 12781, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventFocus,24, 12782, 3, 3.1, NULL, 12781, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventFocus,12, 12782, 2, 3.1, NULL, 12781, NULL)
#else
Msg("Find size of GdkEventFocus (12782)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12781,NULL);\n",architecture,12782,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventConfigure,40, 12784, 12, 3.1, NULL, 12783, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventConfigure,40, 12784, 11, 3.1, NULL, 12783, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventConfigure,28, 12784, 10, 3.1, NULL, 12783, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventConfigure,40, 12784, 9, 3.1, NULL, 12783, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventConfigure,28, 12784, 6, 3.1, NULL, 12783, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventConfigure,40, 12784, 3, 3.1, NULL, 12783, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventConfigure,28, 12784, 2, 3.1, NULL, 12783, NULL)
#else
Msg("Find size of GdkEventConfigure (12784)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12783,NULL);\n",architecture,12784,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventProperty,40, 12786, 12, 3.1, NULL, 12785, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventProperty,40, 12786, 11, 3.1, NULL, 12785, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventProperty,24, 12786, 10, 3.1, NULL, 12785, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventProperty,40, 12786, 9, 3.1, NULL, 12785, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventProperty,24, 12786, 6, 3.1, NULL, 12785, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventProperty,40, 12786, 3, 3.1, NULL, 12785, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventProperty,24, 12786, 2, 3.1, NULL, 12785, NULL)
#else
Msg("Find size of GdkEventProperty (12786)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12785,NULL);\n",architecture,12786,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkNativeWindow,4, 12788, 12, 3.1, NULL, 11412, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkNativeWindow,4, 12788, 11, 3.1, NULL, 11412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkNativeWindow,4, 12788, 10, 3.1, NULL, 11412, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkNativeWindow,4, 12788, 9, 3.1, NULL, 11412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkNativeWindow,4, 12788, 6, 3.1, NULL, 11412, NULL)
#elif defined __ia64__
CheckTypeSize(GdkNativeWindow,4, 12788, 3, 3.1, NULL, 11412, NULL)
#elif defined __i386__
CheckTypeSize(GdkNativeWindow,4, 12788, 2, 3.1, NULL, 11412, NULL)
#else
Msg("Find size of GdkNativeWindow (12788)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11412,NULL);\n",architecture,12788,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventSelection,56, 12789, 12, 3.1, NULL, 12787, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventSelection,56, 12789, 11, 3.1, NULL, 12787, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventSelection,32, 12789, 10, 3.1, NULL, 12787, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventSelection,56, 12789, 9, 3.1, NULL, 12787, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventSelection,32, 12789, 6, 3.1, NULL, 12787, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventSelection,56, 12789, 3, 3.1, NULL, 12787, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventSelection,32, 12789, 2, 3.1, NULL, 12787, NULL)
#else
Msg("Find size of GdkEventSelection (12789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12787,NULL);\n",architecture,12789,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkOwnerChange,4, 12792, 12, 3.1, NULL, 12791, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkOwnerChange,4, 12792, 11, 3.1, NULL, 12791, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkOwnerChange,4, 12792, 10, 3.1, NULL, 12791, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkOwnerChange,4, 12792, 9, 3.1, NULL, 12791, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkOwnerChange,4, 12792, 6, 3.1, NULL, 12791, NULL)
#elif defined __ia64__
CheckTypeSize(GdkOwnerChange,4, 12792, 3, 3.1, NULL, 12791, NULL)
#elif defined __i386__
CheckTypeSize(GdkOwnerChange,4, 12792, 2, 3.1, NULL, 12791, NULL)
#else
Msg("Find size of GdkOwnerChange (12792)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12791,NULL);\n",architecture,12792,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventOwnerChange,48, 12793, 12, 3.1, NULL, 12790, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventOwnerChange,48, 12793, 11, 3.1, NULL, 12790, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventOwnerChange,32, 12793, 10, 3.1, NULL, 12790, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventOwnerChange,48, 12793, 9, 3.1, NULL, 12790, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventOwnerChange,32, 12793, 6, 3.1, NULL, 12790, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventOwnerChange,48, 12793, 3, 3.1, NULL, 12790, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventOwnerChange,32, 12793, 2, 3.1, NULL, 12790, NULL)
#else
Msg("Find size of GdkEventOwnerChange (12793)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12790,NULL);\n",architecture,12793,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventProximity,32, 12795, 12, 3.1, NULL, 12794, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventProximity,32, 12795, 11, 3.1, NULL, 12794, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventProximity,20, 12795, 10, 3.1, NULL, 12794, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventProximity,32, 12795, 9, 3.1, NULL, 12794, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventProximity,20, 12795, 6, 3.1, NULL, 12794, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventProximity,32, 12795, 3, 3.1, NULL, 12794, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventProximity,20, 12795, 2, 3.1, NULL, 12794, NULL)
#else
Msg("Find size of GdkEventProximity (12795)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12794,NULL);\n",architecture,12795,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventClient,80, 12800, 12, 3.1, NULL, 12796, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventClient,80, 12800, 11, 3.1, NULL, 12796, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventClient,40, 12800, 10, 3.1, NULL, 12796, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventClient,80, 12800, 9, 3.1, NULL, 12796, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventClient,40, 12800, 6, 3.1, NULL, 12796, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventClient,80, 12800, 3, 3.1, NULL, 12796, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventClient,40, 12800, 2, 3.1, NULL, 12796, NULL)
#else
Msg("Find size of GdkEventClient (12800)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12796,NULL);\n",architecture,12800,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDragProtocol,4, 12804, 12, 3.1, NULL, 12803, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDragProtocol,4, 12804, 11, 3.1, NULL, 12803, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDragProtocol,4, 12804, 10, 3.1, NULL, 12803, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDragProtocol,4, 12804, 9, 3.1, NULL, 12803, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDragProtocol,4, 12804, 6, 3.1, NULL, 12803, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDragProtocol,4, 12804, 3, 3.1, NULL, 12803, NULL)
#elif defined __i386__
CheckTypeSize(GdkDragProtocol,4, 12804, 2, 3.1, NULL, 12803, NULL)
#else
Msg("Find size of GdkDragProtocol (12804)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12803,NULL);\n",architecture,12804,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDragAction,4, 12806, 12, 3.1, NULL, 12805, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDragAction,4, 12806, 11, 3.1, NULL, 12805, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDragAction,4, 12806, 10, 3.1, NULL, 12805, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDragAction,4, 12806, 9, 3.1, NULL, 12805, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDragAction,4, 12806, 6, 3.1, NULL, 12805, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDragAction,4, 12806, 3, 3.1, NULL, 12805, NULL)
#elif defined __i386__
CheckTypeSize(GdkDragAction,4, 12806, 2, 3.1, NULL, 12805, NULL)
#else
Msg("Find size of GdkDragAction (12806)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12805,NULL);\n",architecture,12806,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDragContext,80, 12807, 12, 3.1, NULL, 12802, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDragContext,80, 12807, 11, 3.1, NULL, 12802, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDragContext,52, 12807, 10, 3.1, NULL, 12802, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDragContext,80, 12807, 9, 3.1, NULL, 12802, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDragContext,52, 12807, 6, 3.1, NULL, 12802, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDragContext,80, 12807, 3, 3.1, NULL, 12802, NULL)
#elif defined __i386__
CheckTypeSize(GdkDragContext,52, 12807, 2, 3.1, NULL, 12802, NULL)
#else
Msg("Find size of GdkDragContext (12807)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12802,NULL);\n",architecture,12807,0);
#endif

#if defined __s390x__
CheckTypeSize(gshort,2, 12809, 12, 3.1, NULL, 11264, NULL)
#elif defined __x86_64__
CheckTypeSize(gshort,2, 12809, 11, 3.1, NULL, 11264, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gshort,2, 12809, 10, 3.1, NULL, 11264, NULL)
#elif defined __powerpc64__
CheckTypeSize(gshort,2, 12809, 9, 3.1, NULL, 11264, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gshort,2, 12809, 6, 3.1, NULL, 11264, NULL)
#elif defined __ia64__
CheckTypeSize(gshort,2, 12809, 3, 3.1, NULL, 11264, NULL)
#elif defined __i386__
CheckTypeSize(gshort,2, 12809, 2, 3.1, NULL, 11264, NULL)
#else
Msg("Find size of gshort (12809)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11264,NULL);\n",architecture,12809,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventDND,40, 12810, 12, 3.1, NULL, 12801, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventDND,40, 12810, 11, 3.1, NULL, 12801, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventDND,24, 12810, 10, 3.1, NULL, 12801, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventDND,40, 12810, 9, 3.1, NULL, 12801, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventDND,24, 12810, 6, 3.1, NULL, 12801, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventDND,40, 12810, 3, 3.1, NULL, 12801, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventDND,24, 12810, 2, 3.1, NULL, 12801, NULL)
#else
Msg("Find size of GdkEventDND (12810)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12801,NULL);\n",architecture,12810,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowState,4, 12813, 12, 3.1, NULL, 12812, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowState,4, 12813, 11, 3.1, NULL, 12812, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowState,4, 12813, 10, 3.1, NULL, 12812, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowState,4, 12813, 9, 3.1, NULL, 12812, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowState,4, 12813, 6, 3.1, NULL, 12812, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowState,4, 12813, 3, 3.1, NULL, 12812, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowState,4, 12813, 2, 3.1, NULL, 12812, NULL)
#else
Msg("Find size of GdkWindowState (12813)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12812,NULL);\n",architecture,12813,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventWindowState,32, 12814, 12, 3.1, NULL, 12811, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventWindowState,32, 12814, 11, 3.1, NULL, 12811, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventWindowState,20, 12814, 10, 3.1, NULL, 12811, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventWindowState,32, 12814, 9, 3.1, NULL, 12811, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventWindowState,20, 12814, 6, 3.1, NULL, 12811, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventWindowState,32, 12814, 3, 3.1, NULL, 12811, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventWindowState,20, 12814, 2, 3.1, NULL, 12811, NULL)
#else
Msg("Find size of GdkEventWindowState (12814)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12811,NULL);\n",architecture,12814,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkSettingAction,4, 12817, 12, 3.1, NULL, 12816, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkSettingAction,4, 12817, 11, 3.1, NULL, 12816, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkSettingAction,4, 12817, 10, 3.1, NULL, 12816, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkSettingAction,4, 12817, 9, 3.1, NULL, 12816, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkSettingAction,4, 12817, 6, 3.1, NULL, 12816, NULL)
#elif defined __ia64__
CheckTypeSize(GdkSettingAction,4, 12817, 3, 3.1, NULL, 12816, NULL)
#elif defined __i386__
CheckTypeSize(GdkSettingAction,4, 12817, 2, 3.1, NULL, 12816, NULL)
#else
Msg("Find size of GdkSettingAction (12817)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12816,NULL);\n",architecture,12817,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventSetting,32, 12818, 12, 3.1, NULL, 12815, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventSetting,32, 12818, 11, 3.1, NULL, 12815, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventSetting,20, 12818, 10, 3.1, NULL, 12815, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventSetting,32, 12818, 9, 3.1, NULL, 12815, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventSetting,20, 12818, 6, 3.1, NULL, 12815, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventSetting,32, 12818, 3, 3.1, NULL, 12815, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventSetting,20, 12818, 2, 3.1, NULL, 12815, NULL)
#else
Msg("Find size of GdkEventSetting (12818)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12815,NULL);\n",architecture,12818,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEvent,88, 12819, 12, 3.1, NULL, 12746, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEvent,88, 12819, 11, 3.1, NULL, 12746, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEvent,72, 12819, 10, 3.1, NULL, 12746, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEvent,88, 12819, 9, 3.1, NULL, 12746, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEvent,72, 12819, 6, 3.1, NULL, 12746, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEvent,88, 12819, 3, 3.1, NULL, 12746, NULL)
#elif defined __i386__
CheckTypeSize(GdkEvent,68, 12819, 2, 3.1, NULL, 12746, NULL)
#else
Msg("Find size of GdkEvent (12819)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12746,NULL);\n",architecture,12819,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkFilterFunc,8, 12822, 12, 3.1, NULL, 12821, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkFilterFunc,8, 12822, 11, 3.1, NULL, 12821, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkFilterFunc,4, 12822, 10, 3.1, NULL, 12821, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkFilterFunc,8, 12822, 9, 3.1, NULL, 12821, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkFilterFunc,4, 12822, 6, 3.1, NULL, 12821, NULL)
#elif defined __ia64__
CheckTypeSize(GdkFilterFunc,8, 12822, 3, 3.1, NULL, 12821, NULL)
#elif defined __i386__
CheckTypeSize(GdkFilterFunc,4, 12822, 2, 3.1, NULL, 12821, NULL)
#else
Msg("Find size of GdkFilterFunc (12822)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12821,NULL);\n",architecture,12822,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixmap,24, 12823, 12, 3.1, NULL, 12672, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixmap,24, 12823, 11, 3.1, NULL, 12672, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixmap,12, 12823, 10, 3.1, NULL, 12672, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixmap,24, 12823, 9, 3.1, NULL, 12672, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixmap,12, 12823, 6, 3.1, NULL, 12672, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixmap,24, 12823, 3, 3.1, NULL, 12672, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixmap,12, 12823, 2, 3.1, NULL, 12672, NULL)
#else
Msg("Find size of GdkPixmap (12823)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12672,NULL);\n",architecture,12823,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkBitmap,24, 12825, 12, 3.1, NULL, 12672, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkBitmap,24, 12825, 11, 3.1, NULL, 12672, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkBitmap,12, 12825, 10, 3.1, NULL, 12672, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkBitmap,24, 12825, 9, 3.1, NULL, 12672, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkBitmap,12, 12825, 6, 3.1, NULL, 12672, NULL)
#elif defined __ia64__
CheckTypeSize(GdkBitmap,24, 12825, 3, 3.1, NULL, 12672, NULL)
#elif defined __i386__
CheckTypeSize(GdkBitmap,12, 12825, 2, 3.1, NULL, 12672, NULL)
#else
Msg("Find size of GdkBitmap (12825)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12672,NULL);\n",architecture,12825,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkSubwindowMode,4, 12834, 12, 3.1, NULL, 12833, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkSubwindowMode,4, 12834, 11, 3.1, NULL, 12833, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkSubwindowMode,4, 12834, 10, 3.1, NULL, 12833, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkSubwindowMode,4, 12834, 9, 3.1, NULL, 12833, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkSubwindowMode,4, 12834, 6, 3.1, NULL, 12833, NULL)
#elif defined __ia64__
CheckTypeSize(GdkSubwindowMode,4, 12834, 3, 3.1, NULL, 12833, NULL)
#elif defined __i386__
CheckTypeSize(GdkSubwindowMode,4, 12834, 2, 3.1, NULL, 12833, NULL)
#else
Msg("Find size of GdkSubwindowMode (12834)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12833,NULL);\n",architecture,12834,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowEdge,4, 12836, 12, 3.1, NULL, 12835, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowEdge,4, 12836, 11, 3.1, NULL, 12835, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowEdge,4, 12836, 10, 3.1, NULL, 12835, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowEdge,4, 12836, 9, 3.1, NULL, 12835, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowEdge,4, 12836, 6, 3.1, NULL, 12835, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowEdge,4, 12836, 3, 3.1, NULL, 12835, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowEdge,4, 12836, 2, 3.1, NULL, 12835, NULL)
#else
Msg("Find size of GdkWindowEdge (12836)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12835,NULL);\n",architecture,12836,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkImageType,4, 12839, 12, 3.1, NULL, 12838, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkImageType,4, 12839, 11, 3.1, NULL, 12838, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkImageType,4, 12839, 10, 3.1, NULL, 12838, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkImageType,4, 12839, 9, 3.1, NULL, 12838, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkImageType,4, 12839, 6, 3.1, NULL, 12838, NULL)
#elif defined __ia64__
CheckTypeSize(GdkImageType,4, 12839, 3, 3.1, NULL, 12838, NULL)
#elif defined __i386__
CheckTypeSize(GdkImageType,4, 12839, 2, 3.1, NULL, 12838, NULL)
#else
Msg("Find size of GdkImageType (12839)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12838,NULL);\n",architecture,12839,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkImage,88, 12840, 12, 3.1, NULL, 12837, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkImage,88, 12840, 11, 3.1, NULL, 12837, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkImage,52, 12840, 10, 3.1, NULL, 12837, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkImage,88, 12840, 9, 3.1, NULL, 12837, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkImage,52, 12840, 6, 3.1, NULL, 12837, NULL)
#elif defined __ia64__
CheckTypeSize(GdkImage,88, 12840, 3, 3.1, NULL, 12837, NULL)
#elif defined __i386__
CheckTypeSize(GdkImage,52, 12840, 2, 3.1, NULL, 12837, NULL)
#else
Msg("Find size of GdkImage (12840)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12837,NULL);\n",architecture,12840,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPangoRenderer,64, 12848, 12, 3.1, NULL, 12844, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPangoRenderer,64, 12848, 11, 3.1, NULL, 12844, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPangoRenderer,36, 12848, 10, 3.1, NULL, 12844, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPangoRenderer,64, 12848, 9, 3.1, NULL, 12844, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPangoRenderer,36, 12848, 6, 3.1, NULL, 12844, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPangoRenderer,64, 12848, 3, 3.1, NULL, 12844, NULL)
#elif defined __i386__
CheckTypeSize(GdkPangoRenderer,36, 12848, 2, 3.1, NULL, 12844, NULL)
#else
Msg("Find size of GdkPangoRenderer (12848)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12844,NULL);\n",architecture,12848,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGrabStatus,4, 12851, 12, 3.1, NULL, 12850, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGrabStatus,4, 12851, 11, 3.1, NULL, 12850, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGrabStatus,4, 12851, 10, 3.1, NULL, 12850, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGrabStatus,4, 12851, 9, 3.1, NULL, 12850, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGrabStatus,4, 12851, 6, 3.1, NULL, 12850, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGrabStatus,4, 12851, 3, 3.1, NULL, 12850, NULL)
#elif defined __i386__
CheckTypeSize(GdkGrabStatus,4, 12851, 2, 3.1, NULL, 12850, NULL)
#else
Msg("Find size of GdkGrabStatus (12851)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12850,NULL);\n",architecture,12851,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkFill,4, 12853, 12, 3.1, NULL, 12852, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkFill,4, 12853, 11, 3.1, NULL, 12852, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkFill,4, 12853, 10, 3.1, NULL, 12852, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkFill,4, 12853, 9, 3.1, NULL, 12852, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkFill,4, 12853, 6, 3.1, NULL, 12852, NULL)
#elif defined __ia64__
CheckTypeSize(GdkFill,4, 12853, 3, 3.1, NULL, 12852, NULL)
#elif defined __i386__
CheckTypeSize(GdkFill,4, 12853, 2, 3.1, NULL, 12852, NULL)
#else
Msg("Find size of GdkFill (12853)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12852,NULL);\n",architecture,12853,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 12, 3.1, NULL, 12855, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 11, 3.1, NULL, 12855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 10, 3.1, NULL, 12855, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 9, 3.1, NULL, 12855, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 6, 3.1, NULL, 12855, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 3, 3.1, NULL, 12855, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 2, 3.1, NULL, 12855, NULL)
#else
Msg("Find size of GdkWindowTypeHint (12856)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12855,NULL);\n",architecture,12856,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkTimeCoord,1032, 12860, 12, 3.1, NULL, 12858, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkTimeCoord,1032, 12860, 11, 3.1, NULL, 12858, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkTimeCoord,1032, 12860, 10, 3.1, NULL, 12858, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkTimeCoord,1032, 12860, 9, 3.1, NULL, 12858, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkTimeCoord,1032, 12860, 6, 3.1, NULL, 12858, NULL)
#elif defined __ia64__
CheckTypeSize(GdkTimeCoord,1032, 12860, 3, 3.1, NULL, 12858, NULL)
#elif defined __i386__
CheckTypeSize(GdkTimeCoord,1028, 12860, 2, 3.1, NULL, 12858, NULL)
#else
Msg("Find size of GdkTimeCoord (12860)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12858,NULL);\n",architecture,12860,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPoint,8, 12864, 12, 3.1, NULL, 12863, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPoint,8, 12864, 11, 3.1, NULL, 12863, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPoint,8, 12864, 10, 3.1, NULL, 12863, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPoint,8, 12864, 9, 3.1, NULL, 12863, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPoint,8, 12864, 6, 3.1, NULL, 12863, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPoint,8, 12864, 3, 3.1, NULL, 12863, NULL)
#elif defined __i386__
CheckTypeSize(GdkPoint,8, 12864, 2, 3.1, NULL, 12863, NULL)
#else
Msg("Find size of GdkPoint (12864)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12863,NULL);\n",architecture,12864,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWMDecoration,4, 12871, 12, 3.1, NULL, 12870, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWMDecoration,4, 12871, 11, 3.1, NULL, 12870, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWMDecoration,4, 12871, 10, 3.1, NULL, 12870, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWMDecoration,4, 12871, 9, 3.1, NULL, 12870, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWMDecoration,4, 12871, 6, 3.1, NULL, 12870, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWMDecoration,4, 12871, 3, 3.1, NULL, 12870, NULL)
#elif defined __i386__
CheckTypeSize(GdkWMDecoration,4, 12871, 2, 3.1, NULL, 12870, NULL)
#else
Msg("Find size of GdkWMDecoration (12871)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12870,NULL);\n",architecture,12871,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWMFunction,4, 12873, 12, 3.1, NULL, 12872, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWMFunction,4, 12873, 11, 3.1, NULL, 12872, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWMFunction,4, 12873, 10, 3.1, NULL, 12872, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWMFunction,4, 12873, 9, 3.1, NULL, 12872, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWMFunction,4, 12873, 6, 3.1, NULL, 12872, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWMFunction,4, 12873, 3, 3.1, NULL, 12872, NULL)
#elif defined __i386__
CheckTypeSize(GdkWMFunction,4, 12873, 2, 3.1, NULL, 12872, NULL)
#else
Msg("Find size of GdkWMFunction (12873)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12872,NULL);\n",architecture,12873,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkKeymapKey,12, 12876, 12, 3.1, NULL, 12875, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkKeymapKey,12, 12876, 11, 3.1, NULL, 12875, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkKeymapKey,12, 12876, 10, 3.1, NULL, 12875, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkKeymapKey,12, 12876, 9, 3.1, NULL, 12875, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkKeymapKey,12, 12876, 6, 3.1, NULL, 12875, NULL)
#elif defined __ia64__
CheckTypeSize(GdkKeymapKey,12, 12876, 3, 3.1, NULL, 12875, NULL)
#elif defined __i386__
CheckTypeSize(GdkKeymapKey,12, 12876, 2, 3.1, NULL, 12875, NULL)
#else
Msg("Find size of GdkKeymapKey (12876)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12875,NULL);\n",architecture,12876,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkRgbDither,4, 12881, 12, 3.1, NULL, 12880, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkRgbDither,4, 12881, 11, 3.1, NULL, 12880, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkRgbDither,4, 12881, 10, 3.1, NULL, 12880, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkRgbDither,4, 12881, 9, 3.1, NULL, 12880, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkRgbDither,4, 12881, 6, 3.1, NULL, 12880, NULL)
#elif defined __ia64__
CheckTypeSize(GdkRgbDither,4, 12881, 3, 3.1, NULL, 12880, NULL)
#elif defined __i386__
CheckTypeSize(GdkRgbDither,4, 12881, 2, 3.1, NULL, 12880, NULL)
#else
Msg("Find size of GdkRgbDither (12881)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12880,NULL);\n",architecture,12881,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkRgbCmap,1040, 12884, 12, 3.1, NULL, 12882, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkRgbCmap,1040, 12884, 11, 3.1, NULL, 12882, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkRgbCmap,1032, 12884, 10, 3.1, NULL, 12882, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkRgbCmap,1040, 12884, 9, 3.1, NULL, 12882, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkRgbCmap,1032, 12884, 6, 3.1, NULL, 12882, NULL)
#elif defined __ia64__
CheckTypeSize(GdkRgbCmap,1040, 12884, 3, 3.1, NULL, 12882, NULL)
#elif defined __i386__
CheckTypeSize(GdkRgbCmap,1032, 12884, 2, 3.1, NULL, 12882, NULL)
#else
Msg("Find size of GdkRgbCmap (12884)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12882,NULL);\n",architecture,12884,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkFunction,4, 12890, 12, 3.1, NULL, 12889, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkFunction,4, 12890, 11, 3.1, NULL, 12889, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkFunction,4, 12890, 10, 3.1, NULL, 12889, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkFunction,4, 12890, 9, 3.1, NULL, 12889, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkFunction,4, 12890, 6, 3.1, NULL, 12889, NULL)
#elif defined __ia64__
CheckTypeSize(GdkFunction,4, 12890, 3, 3.1, NULL, 12889, NULL)
#elif defined __i386__
CheckTypeSize(GdkFunction,4, 12890, 2, 3.1, NULL, 12889, NULL)
#else
Msg("Find size of GdkFunction (12890)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12889,NULL);\n",architecture,12890,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkLineStyle,4, 12892, 12, 3.1, NULL, 12891, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkLineStyle,4, 12892, 11, 3.1, NULL, 12891, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkLineStyle,4, 12892, 10, 3.1, NULL, 12891, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkLineStyle,4, 12892, 9, 3.1, NULL, 12891, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkLineStyle,4, 12892, 6, 3.1, NULL, 12891, NULL)
#elif defined __ia64__
CheckTypeSize(GdkLineStyle,4, 12892, 3, 3.1, NULL, 12891, NULL)
#elif defined __i386__
CheckTypeSize(GdkLineStyle,4, 12892, 2, 3.1, NULL, 12891, NULL)
#else
Msg("Find size of GdkLineStyle (12892)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12891,NULL);\n",architecture,12892,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkCapStyle,4, 12894, 12, 3.1, NULL, 12893, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkCapStyle,4, 12894, 11, 3.1, NULL, 12893, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkCapStyle,4, 12894, 10, 3.1, NULL, 12893, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkCapStyle,4, 12894, 9, 3.1, NULL, 12893, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkCapStyle,4, 12894, 6, 3.1, NULL, 12893, NULL)
#elif defined __ia64__
CheckTypeSize(GdkCapStyle,4, 12894, 3, 3.1, NULL, 12893, NULL)
#elif defined __i386__
CheckTypeSize(GdkCapStyle,4, 12894, 2, 3.1, NULL, 12893, NULL)
#else
Msg("Find size of GdkCapStyle (12894)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12893,NULL);\n",architecture,12894,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkJoinStyle,4, 12896, 12, 3.1, NULL, 12895, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkJoinStyle,4, 12896, 11, 3.1, NULL, 12895, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkJoinStyle,4, 12896, 10, 3.1, NULL, 12895, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkJoinStyle,4, 12896, 9, 3.1, NULL, 12895, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkJoinStyle,4, 12896, 6, 3.1, NULL, 12895, NULL)
#elif defined __ia64__
CheckTypeSize(GdkJoinStyle,4, 12896, 3, 3.1, NULL, 12895, NULL)
#elif defined __i386__
CheckTypeSize(GdkJoinStyle,4, 12896, 2, 3.1, NULL, 12895, NULL)
#else
Msg("Find size of GdkJoinStyle (12896)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12895,NULL);\n",architecture,12896,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGCValues,104, 12897, 12, 3.1, NULL, 12888, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGCValues,104, 12897, 11, 3.1, NULL, 12888, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGCValues,88, 12897, 10, 3.1, NULL, 12888, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGCValues,104, 12897, 9, 3.1, NULL, 12888, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGCValues,88, 12897, 6, 3.1, NULL, 12888, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGCValues,104, 12897, 3, 3.1, NULL, 12888, NULL)
#elif defined __i386__
CheckTypeSize(GdkGCValues,88, 12897, 2, 3.1, NULL, 12888, NULL)
#else
Msg("Find size of GdkGCValues (12897)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12888,NULL);\n",architecture,12897,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGCValuesMask,4, 12900, 12, 3.1, NULL, 12899, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGCValuesMask,4, 12900, 11, 3.1, NULL, 12899, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGCValuesMask,4, 12900, 10, 3.1, NULL, 12899, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGCValuesMask,4, 12900, 9, 3.1, NULL, 12899, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGCValuesMask,4, 12900, 6, 3.1, NULL, 12899, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGCValuesMask,4, 12900, 3, 3.1, NULL, 12899, NULL)
#elif defined __i386__
CheckTypeSize(GdkGCValuesMask,4, 12900, 2, 3.1, NULL, 12899, NULL)
#else
Msg("Find size of GdkGCValuesMask (12900)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12899,NULL);\n",architecture,12900,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowType,4, 12903, 12, 3.1, NULL, 12902, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowType,4, 12903, 11, 3.1, NULL, 12902, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowType,4, 12903, 10, 3.1, NULL, 12902, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowType,4, 12903, 9, 3.1, NULL, 12902, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowType,4, 12903, 6, 3.1, NULL, 12902, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowType,4, 12903, 3, 3.1, NULL, 12902, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowType,4, 12903, 2, 3.1, NULL, 12902, NULL)
#else
Msg("Find size of GdkWindowType (12903)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12902,NULL);\n",architecture,12903,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkSpan,12, 12906, 12, 3.1, NULL, 12905, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkSpan,12, 12906, 11, 3.1, NULL, 12905, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkSpan,12, 12906, 10, 3.1, NULL, 12905, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkSpan,12, 12906, 9, 3.1, NULL, 12905, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkSpan,12, 12906, 6, 3.1, NULL, 12905, NULL)
#elif defined __ia64__
CheckTypeSize(GdkSpan,12, 12906, 3, 3.1, NULL, 12905, NULL)
#elif defined __i386__
CheckTypeSize(GdkSpan,12, 12906, 2, 3.1, NULL, 12905, NULL)
#else
Msg("Find size of GdkSpan (12906)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12905,NULL);\n",architecture,12906,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkSpanFunc,8, 12909, 12, 3.1, NULL, 12908, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkSpanFunc,8, 12909, 11, 3.1, NULL, 12908, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkSpanFunc,4, 12909, 10, 3.1, NULL, 12908, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkSpanFunc,8, 12909, 9, 3.1, NULL, 12908, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkSpanFunc,4, 12909, 6, 3.1, NULL, 12908, NULL)
#elif defined __ia64__
CheckTypeSize(GdkSpanFunc,8, 12909, 3, 3.1, NULL, 12908, NULL)
#elif defined __i386__
CheckTypeSize(GdkSpanFunc,4, 12909, 2, 3.1, NULL, 12908, NULL)
#else
Msg("Find size of GdkSpanFunc (12909)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12908,NULL);\n",architecture,12909,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGravity,4, 12912, 12, 3.1, NULL, 12911, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGravity,4, 12912, 11, 3.1, NULL, 12911, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGravity,4, 12912, 10, 3.1, NULL, 12911, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGravity,4, 12912, 9, 3.1, NULL, 12911, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGravity,4, 12912, 6, 3.1, NULL, 12911, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGravity,4, 12912, 3, 3.1, NULL, 12911, NULL)
#elif defined __i386__
CheckTypeSize(GdkGravity,4, 12912, 2, 3.1, NULL, 12911, NULL)
#else
Msg("Find size of GdkGravity (12912)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12911,NULL);\n",architecture,12912,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGeometry,56, 12913, 12, 3.1, NULL, 12910, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGeometry,56, 12913, 11, 3.1, NULL, 12910, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGeometry,56, 12913, 10, 3.1, NULL, 12910, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGeometry,56, 12913, 9, 3.1, NULL, 12910, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGeometry,56, 12913, 6, 3.1, NULL, 12910, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGeometry,56, 12913, 3, 3.1, NULL, 12910, NULL)
#elif defined __i386__
CheckTypeSize(GdkGeometry,52, 12913, 2, 3.1, NULL, 12910, NULL)
#else
Msg("Find size of GdkGeometry (12913)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12910,NULL);\n",architecture,12913,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowHints,4, 12916, 12, 3.1, NULL, 12915, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowHints,4, 12916, 11, 3.1, NULL, 12915, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowHints,4, 12916, 10, 3.1, NULL, 12915, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowHints,4, 12916, 9, 3.1, NULL, 12915, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowHints,4, 12916, 6, 3.1, NULL, 12915, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowHints,4, 12916, 3, 3.1, NULL, 12915, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowHints,4, 12916, 2, 3.1, NULL, 12915, NULL)
#else
Msg("Find size of GdkWindowHints (12916)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12915,NULL);\n",architecture,12916,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkEventFunc,8, 12918, 12, 3.1, NULL, 12917, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkEventFunc,8, 12918, 11, 3.1, NULL, 12917, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkEventFunc,4, 12918, 10, 3.1, NULL, 12917, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkEventFunc,8, 12918, 9, 3.1, NULL, 12917, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkEventFunc,4, 12918, 6, 3.1, NULL, 12917, NULL)
#elif defined __ia64__
CheckTypeSize(GdkEventFunc,8, 12918, 3, 3.1, NULL, 12917, NULL)
#elif defined __i386__
CheckTypeSize(GdkEventFunc,4, 12918, 2, 3.1, NULL, 12917, NULL)
#else
Msg("Find size of GdkEventFunc (12918)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12917,NULL);\n",architecture,12918,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkOverlapType,4, 12920, 12, 3.1, NULL, 12919, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkOverlapType,4, 12920, 11, 3.1, NULL, 12919, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkOverlapType,4, 12920, 10, 3.1, NULL, 12919, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkOverlapType,4, 12920, 9, 3.1, NULL, 12919, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkOverlapType,4, 12920, 6, 3.1, NULL, 12919, NULL)
#elif defined __ia64__
CheckTypeSize(GdkOverlapType,4, 12920, 3, 3.1, NULL, 12919, NULL)
#elif defined __i386__
CheckTypeSize(GdkOverlapType,4, 12920, 2, 3.1, NULL, 12919, NULL)
#else
Msg("Find size of GdkOverlapType (12920)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12919,NULL);\n",architecture,12920,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkSegment,16, 12922, 12, 3.1, NULL, 12921, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkSegment,16, 12922, 11, 3.1, NULL, 12921, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkSegment,16, 12922, 10, 3.1, NULL, 12921, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkSegment,16, 12922, 9, 3.1, NULL, 12921, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkSegment,16, 12922, 6, 3.1, NULL, 12921, NULL)
#elif defined __ia64__
CheckTypeSize(GdkSegment,16, 12922, 3, 3.1, NULL, 12921, NULL)
#elif defined __i386__
CheckTypeSize(GdkSegment,16, 12922, 2, 3.1, NULL, 12921, NULL)
#else
Msg("Find size of GdkSegment (12922)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12921,NULL);\n",architecture,12922,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPropMode,4, 12925, 12, 3.1, NULL, 12924, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPropMode,4, 12925, 11, 3.1, NULL, 12924, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPropMode,4, 12925, 10, 3.1, NULL, 12924, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPropMode,4, 12925, 9, 3.1, NULL, 12924, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPropMode,4, 12925, 6, 3.1, NULL, 12924, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPropMode,4, 12925, 3, 3.1, NULL, 12924, NULL)
#elif defined __i386__
CheckTypeSize(GdkPropMode,4, 12925, 2, 3.1, NULL, 12924, NULL)
#else
Msg("Find size of GdkPropMode (12925)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12924,NULL);\n",architecture,12925,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowClass,4, 12928, 12, 3.1, NULL, 12927, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowClass,4, 12928, 11, 3.1, NULL, 12927, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowClass,4, 12928, 10, 3.1, NULL, 12927, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowClass,4, 12928, 9, 3.1, NULL, 12927, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowClass,4, 12928, 6, 3.1, NULL, 12927, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowClass,4, 12928, 3, 3.1, NULL, 12927, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowClass,4, 12928, 2, 3.1, NULL, 12927, NULL)
#else
Msg("Find size of GdkWindowClass (12928)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12927,NULL);\n",architecture,12928,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowAttr,88, 12929, 12, 3.1, NULL, 12926, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowAttr,88, 12929, 11, 3.1, NULL, 12926, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowAttr,56, 12929, 10, 3.1, NULL, 12926, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowAttr,88, 12929, 9, 3.1, NULL, 12926, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowAttr,56, 12929, 6, 3.1, NULL, 12926, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowAttr,88, 12929, 3, 3.1, NULL, 12926, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowAttr,56, 12929, 2, 3.1, NULL, 12926, NULL)
#else
Msg("Find size of GdkWindowAttr (12929)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12926,NULL);\n",architecture,12929,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkTrapezoid,48, 12937, 12, 3.1, NULL, 12936, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkTrapezoid,48, 12937, 11, 3.1, NULL, 12936, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkTrapezoid,48, 12937, 10, 3.1, NULL, 12936, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkTrapezoid,48, 12937, 9, 3.1, NULL, 12936, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkTrapezoid,48, 12937, 6, 3.1, NULL, 12936, NULL)
#elif defined __ia64__
CheckTypeSize(GdkTrapezoid,48, 12937, 3, 3.1, NULL, 12936, NULL)
#elif defined __i386__
CheckTypeSize(GdkTrapezoid,48, 12937, 2, 3.1, NULL, 12936, NULL)
#else
Msg("Find size of GdkTrapezoid (12937)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12936,NULL);\n",architecture,12937,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkFillRule,4, 12943, 12, 3.1, NULL, 12942, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkFillRule,4, 12943, 11, 3.1, NULL, 12942, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkFillRule,4, 12943, 10, 3.1, NULL, 12942, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkFillRule,4, 12943, 9, 3.1, NULL, 12942, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkFillRule,4, 12943, 6, 3.1, NULL, 12942, NULL)
#elif defined __ia64__
CheckTypeSize(GdkFillRule,4, 12943, 3, 3.1, NULL, 12942, NULL)
#elif defined __i386__
CheckTypeSize(GdkFillRule,4, 12943, 2, 3.1, NULL, 12942, NULL)
#else
Msg("Find size of GdkFillRule (12943)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12942,NULL);\n",architecture,12943,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPointerHooks,16, 12947, 12, 3.1, NULL, 12944, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPointerHooks,16, 12947, 11, 3.1, NULL, 12944, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPointerHooks,8, 12947, 10, 3.1, NULL, 12944, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPointerHooks,16, 12947, 9, 3.1, NULL, 12944, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPointerHooks,8, 12947, 6, 3.1, NULL, 12944, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPointerHooks,16, 12947, 3, 3.1, NULL, 12944, NULL)
#elif defined __i386__
CheckTypeSize(GdkPointerHooks,8, 12947, 2, 3.1, NULL, 12944, NULL)
#else
Msg("Find size of GdkPointerHooks (12947)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12944,NULL);\n",architecture,12947,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkExtensionMode,4, 12953, 12, 3.1, NULL, 12952, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkExtensionMode,4, 12953, 11, 3.1, NULL, 12952, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkExtensionMode,4, 12953, 10, 3.1, NULL, 12952, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkExtensionMode,4, 12953, 9, 3.1, NULL, 12952, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkExtensionMode,4, 12953, 6, 3.1, NULL, 12952, NULL)
#elif defined __ia64__
CheckTypeSize(GdkExtensionMode,4, 12953, 3, 3.1, NULL, 12952, NULL)
#elif defined __i386__
CheckTypeSize(GdkExtensionMode,4, 12953, 2, 3.1, NULL, 12952, NULL)
#else
Msg("Find size of GdkExtensionMode (12953)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12952,NULL);\n",architecture,12953,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowObject,144, 12955, 12, 3.1, NULL, 12954, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowObject,144, 12955, 11, 3.1, NULL, 12954, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowObject,88, 12955, 10, 3.1, NULL, 12954, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowObject,144, 12955, 9, 3.1, NULL, 12954, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowObject,88, 12955, 6, 3.1, NULL, 12954, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowObject,144, 12955, 3, 3.1, NULL, 12954, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowObject,88, 12955, 2, 3.1, NULL, 12954, NULL)
#else
Msg("Find size of GdkWindowObject (12955)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12954,NULL);\n",architecture,12955,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkScreenClass,144, 12959, 12, 3.1, NULL, 12957, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkScreenClass,144, 12959, 11, 3.1, NULL, 12957, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkScreenClass,72, 12959, 10, 3.1, NULL, 12957, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkScreenClass,144, 12959, 9, 3.1, NULL, 12957, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkScreenClass,72, 12959, 6, 3.1, NULL, 12957, NULL)
#elif defined __ia64__
CheckTypeSize(GdkScreenClass,144, 12959, 3, 3.1, NULL, 12957, NULL)
#elif defined __i386__
CheckTypeSize(GdkScreenClass,72, 12959, 2, 3.1, NULL, 12957, NULL)
#else
Msg("Find size of GdkScreenClass (12959)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12957,NULL);\n",architecture,12959,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWChar,4, 12960, 12, 3.1, NULL, 11412, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWChar,4, 12960, 11, 3.1, NULL, 11412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWChar,4, 12960, 10, 3.1, NULL, 11412, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWChar,4, 12960, 9, 3.1, NULL, 11412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWChar,4, 12960, 6, 3.1, NULL, 11412, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWChar,4, 12960, 3, 3.1, NULL, 11412, NULL)
#elif defined __i386__
CheckTypeSize(GdkWChar,4, 12960, 2, 3.1, NULL, 11412, NULL)
#else
Msg("Find size of GdkWChar (12960)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11412,NULL);\n",architecture,12960,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixmapObject,40, 12962, 12, 3.1, NULL, 12961, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixmapObject,40, 12962, 11, 3.1, NULL, 12961, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixmapObject,20, 12962, 10, 3.1, NULL, 12961, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixmapObject,40, 12962, 9, 3.1, NULL, 12961, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixmapObject,20, 12962, 6, 3.1, NULL, 12961, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixmapObject,40, 12962, 3, 3.1, NULL, 12961, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixmapObject,20, 12962, 2, 3.1, NULL, 12961, NULL)
#else
Msg("Find size of GdkPixmapObject (12962)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12961,NULL);\n",architecture,12962,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkInputCondition,4, 12964, 12, 3.1, NULL, 12963, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkInputCondition,4, 12964, 11, 3.1, NULL, 12963, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkInputCondition,4, 12964, 10, 3.1, NULL, 12963, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkInputCondition,4, 12964, 9, 3.1, NULL, 12963, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkInputCondition,4, 12964, 6, 3.1, NULL, 12963, NULL)
#elif defined __ia64__
CheckTypeSize(GdkInputCondition,4, 12964, 3, 3.1, NULL, 12963, NULL)
#elif defined __i386__
CheckTypeSize(GdkInputCondition,4, 12964, 2, 3.1, NULL, 12963, NULL)
#else
Msg("Find size of GdkInputCondition (12964)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12963,NULL);\n",architecture,12964,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkInputFunction,8, 12966, 12, 3.1, NULL, 12965, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkInputFunction,8, 12966, 11, 3.1, NULL, 12965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkInputFunction,4, 12966, 10, 3.1, NULL, 12965, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkInputFunction,8, 12966, 9, 3.1, NULL, 12965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkInputFunction,4, 12966, 6, 3.1, NULL, 12965, NULL)
#elif defined __ia64__
CheckTypeSize(GdkInputFunction,8, 12966, 3, 3.1, NULL, 12965, NULL)
#elif defined __i386__
CheckTypeSize(GdkInputFunction,4, 12966, 2, 3.1, NULL, 12965, NULL)
#else
Msg("Find size of GdkInputFunction (12966)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12965,NULL);\n",architecture,12966,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkImageClass,136, 12968, 12, 3.1, NULL, 12967, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkImageClass,136, 12968, 11, 3.1, NULL, 12967, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkImageClass,68, 12968, 10, 3.1, NULL, 12967, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkImageClass,136, 12968, 9, 3.1, NULL, 12967, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkImageClass,68, 12968, 6, 3.1, NULL, 12967, NULL)
#elif defined __ia64__
CheckTypeSize(GdkImageClass,136, 12968, 3, 3.1, NULL, 12967, NULL)
#elif defined __i386__
CheckTypeSize(GdkImageClass,68, 12968, 2, 3.1, NULL, 12967, NULL)
#else
Msg("Find size of GdkImageClass (12968)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12967,NULL);\n",architecture,12968,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDestroyNotify,8, 12969, 12, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDestroyNotify,8, 12969, 11, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDestroyNotify,4, 12969, 10, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDestroyNotify,8, 12969, 9, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDestroyNotify,4, 12969, 6, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDestroyNotify,8, 12969, 3, 3.1, NULL, 11438, NULL)
#elif defined __i386__
CheckTypeSize(GdkDestroyNotify,4, 12969, 2, 3.1, NULL, 11438, NULL)
#else
Msg("Find size of GdkDestroyNotify (12969)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,12969,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkKeymapClass,152, 12972, 12, 3.1, NULL, 12970, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkKeymapClass,152, 12972, 11, 3.1, NULL, 12970, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkKeymapClass,76, 12972, 10, 3.1, NULL, 12970, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkKeymapClass,152, 12972, 9, 3.1, NULL, 12970, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkKeymapClass,76, 12972, 6, 3.1, NULL, 12970, NULL)
#elif defined __ia64__
CheckTypeSize(GdkKeymapClass,152, 12972, 3, 3.1, NULL, 12970, NULL)
#elif defined __i386__
CheckTypeSize(GdkKeymapClass,76, 12972, 2, 3.1, NULL, 12970, NULL)
#else
Msg("Find size of GdkKeymapClass (12972)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12970,NULL);\n",architecture,12972,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDrawableClass,448, 13000, 12, 3.1, NULL, 12973, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDrawableClass,448, 13000, 11, 3.1, NULL, 12973, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDrawableClass,224, 13000, 10, 3.1, NULL, 12973, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDrawableClass,448, 13000, 9, 3.1, NULL, 12973, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDrawableClass,224, 13000, 6, 3.1, NULL, 12973, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDrawableClass,448, 13000, 3, 3.1, NULL, 12973, NULL)
#elif defined __i386__
CheckTypeSize(GdkDrawableClass,224, 13000, 2, 3.1, NULL, 12973, NULL)
#else
Msg("Find size of GdkDrawableClass (13000)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12973,NULL);\n",architecture,13000,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPangoAttrEmbossed,24, 13002, 12, 3.1, NULL, 13001, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPangoAttrEmbossed,24, 13002, 11, 3.1, NULL, 13001, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPangoAttrEmbossed,16, 13002, 10, 3.1, NULL, 13001, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPangoAttrEmbossed,24, 13002, 9, 3.1, NULL, 13001, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPangoAttrEmbossed,16, 13002, 6, 3.1, NULL, 13001, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPangoAttrEmbossed,24, 13002, 3, 3.1, NULL, 13001, NULL)
#elif defined __i386__
CheckTypeSize(GdkPangoAttrEmbossed,16, 13002, 2, 3.1, NULL, 13001, NULL)
#else
Msg("Find size of GdkPangoAttrEmbossed (13002)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13001,NULL);\n",architecture,13002,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDisplayManagerClass,144, 13005, 12, 3.1, NULL, 13003, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDisplayManagerClass,144, 13005, 11, 3.1, NULL, 13003, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDisplayManagerClass,72, 13005, 10, 3.1, NULL, 13003, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDisplayManagerClass,144, 13005, 9, 3.1, NULL, 13003, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDisplayManagerClass,72, 13005, 6, 3.1, NULL, 13003, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDisplayManagerClass,144, 13005, 3, 3.1, NULL, 13003, NULL)
#elif defined __i386__
CheckTypeSize(GdkDisplayManagerClass,72, 13005, 2, 3.1, NULL, 13003, NULL)
#else
Msg("Find size of GdkDisplayManagerClass (13005)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13003,NULL);\n",architecture,13005,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixmapObjectClass,448, 13007, 12, 3.1, NULL, 13006, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixmapObjectClass,448, 13007, 11, 3.1, NULL, 13006, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixmapObjectClass,224, 13007, 10, 3.1, NULL, 13006, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixmapObjectClass,448, 13007, 9, 3.1, NULL, 13006, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixmapObjectClass,224, 13007, 6, 3.1, NULL, 13006, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixmapObjectClass,448, 13007, 3, 3.1, NULL, 13006, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixmapObjectClass,224, 13007, 2, 3.1, NULL, 13006, NULL)
#else
Msg("Find size of GdkPixmapObjectClass (13007)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13006,NULL);\n",architecture,13007,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPangoRendererClass,248, 13009, 12, 3.1, NULL, 13008, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPangoRendererClass,248, 13009, 11, 3.1, NULL, 13008, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPangoRendererClass,124, 13009, 10, 3.1, NULL, 13008, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPangoRendererClass,248, 13009, 9, 3.1, NULL, 13008, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPangoRendererClass,124, 13009, 6, 3.1, NULL, 13008, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPangoRendererClass,248, 13009, 3, 3.1, NULL, 13008, NULL)
#elif defined __i386__
CheckTypeSize(GdkPangoRendererClass,124, 13009, 2, 3.1, NULL, 13008, NULL)
#else
Msg("Find size of GdkPangoRendererClass (13009)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13008,NULL);\n",architecture,13009,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDisplayClass,176, 13016, 12, 3.1, NULL, 13010, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDisplayClass,176, 13016, 11, 3.1, NULL, 13010, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDisplayClass,88, 13016, 10, 3.1, NULL, 13010, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDisplayClass,176, 13016, 9, 3.1, NULL, 13010, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDisplayClass,88, 13016, 6, 3.1, NULL, 13010, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDisplayClass,176, 13016, 3, 3.1, NULL, 13010, NULL)
#elif defined __i386__
CheckTypeSize(GdkDisplayClass,88, 13016, 2, 3.1, NULL, 13010, NULL)
#else
Msg("Find size of GdkDisplayClass (13016)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13010,NULL);\n",architecture,13016,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPangoAttrStipple,24, 13018, 12, 3.1, NULL, 13017, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPangoAttrStipple,24, 13018, 11, 3.1, NULL, 13017, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPangoAttrStipple,16, 13018, 10, 3.1, NULL, 13017, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPangoAttrStipple,24, 13018, 9, 3.1, NULL, 13017, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPangoAttrStipple,16, 13018, 6, 3.1, NULL, 13017, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPangoAttrStipple,24, 13018, 3, 3.1, NULL, 13017, NULL)
#elif defined __i386__
CheckTypeSize(GdkPangoAttrStipple,16, 13018, 2, 3.1, NULL, 13017, NULL)
#else
Msg("Find size of GdkPangoAttrStipple (13018)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13017,NULL);\n",architecture,13018,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkColormapClass,136, 13020, 12, 3.1, NULL, 13019, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkColormapClass,136, 13020, 11, 3.1, NULL, 13019, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkColormapClass,68, 13020, 10, 3.1, NULL, 13019, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkColormapClass,136, 13020, 9, 3.1, NULL, 13019, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkColormapClass,68, 13020, 6, 3.1, NULL, 13019, NULL)
#elif defined __ia64__
CheckTypeSize(GdkColormapClass,136, 13020, 3, 3.1, NULL, 13019, NULL)
#elif defined __i386__
CheckTypeSize(GdkColormapClass,68, 13020, 2, 3.1, NULL, 13019, NULL)
#else
Msg("Find size of GdkColormapClass (13020)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13019,NULL);\n",architecture,13020,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkDragContextClass,136, 13022, 12, 3.1, NULL, 13021, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkDragContextClass,136, 13022, 11, 3.1, NULL, 13021, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkDragContextClass,68, 13022, 10, 3.1, NULL, 13021, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkDragContextClass,136, 13022, 9, 3.1, NULL, 13021, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkDragContextClass,68, 13022, 6, 3.1, NULL, 13021, NULL)
#elif defined __ia64__
CheckTypeSize(GdkDragContextClass,136, 13022, 3, 3.1, NULL, 13021, NULL)
#elif defined __i386__
CheckTypeSize(GdkDragContextClass,68, 13022, 2, 3.1, NULL, 13021, NULL)
#else
Msg("Find size of GdkDragContextClass (13022)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13021,NULL);\n",architecture,13022,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowObjectClass,448, 13024, 12, 3.1, NULL, 13023, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowObjectClass,448, 13024, 11, 3.1, NULL, 13023, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowObjectClass,224, 13024, 10, 3.1, NULL, 13023, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowObjectClass,448, 13024, 9, 3.1, NULL, 13023, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowObjectClass,224, 13024, 6, 3.1, NULL, 13023, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowObjectClass,448, 13024, 3, 3.1, NULL, 13023, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowObjectClass,224, 13024, 2, 3.1, NULL, 13023, NULL)
#else
Msg("Find size of GdkWindowObjectClass (13024)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13023,NULL);\n",architecture,13024,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkGCClass,192, 13029, 12, 3.1, NULL, 13025, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkGCClass,192, 13029, 11, 3.1, NULL, 13025, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkGCClass,96, 13029, 10, 3.1, NULL, 13025, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkGCClass,192, 13029, 9, 3.1, NULL, 13025, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkGCClass,96, 13029, 6, 3.1, NULL, 13025, NULL)
#elif defined __ia64__
CheckTypeSize(GdkGCClass,192, 13029, 3, 3.1, NULL, 13025, NULL)
#elif defined __i386__
CheckTypeSize(GdkGCClass,96, 13029, 2, 3.1, NULL, 13025, NULL)
#else
Msg("Find size of GdkGCClass (13029)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13025,NULL);\n",architecture,13029,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkStatus,4, 13035, 12, 3.1, NULL, 13034, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkStatus,4, 13035, 11, 3.1, NULL, 13034, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkStatus,4, 13035, 10, 3.1, NULL, 13034, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkStatus,4, 13035, 9, 3.1, NULL, 13034, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkStatus,4, 13035, 6, 3.1, NULL, 13034, NULL)
#elif defined __ia64__
CheckTypeSize(GdkStatus,4, 13035, 3, 3.1, NULL, 13034, NULL)
#elif defined __i386__
CheckTypeSize(GdkStatus,4, 13035, 2, 3.1, NULL, 13034, NULL)
#else
Msg("Find size of GdkStatus (13035)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13034,NULL);\n",architecture,13035,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPropertyState,4, 13037, 12, 3.1, NULL, 13036, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPropertyState,4, 13037, 11, 3.1, NULL, 13036, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPropertyState,4, 13037, 10, 3.1, NULL, 13036, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPropertyState,4, 13037, 9, 3.1, NULL, 13036, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPropertyState,4, 13037, 6, 3.1, NULL, 13036, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPropertyState,4, 13037, 3, 3.1, NULL, 13036, NULL)
#elif defined __i386__
CheckTypeSize(GdkPropertyState,4, 13037, 2, 3.1, NULL, 13036, NULL)
#else
Msg("Find size of GdkPropertyState (13037)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13036,NULL);\n",architecture,13037,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 12, 3.1, NULL, 13038, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 11, 3.1, NULL, 13038, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 10, 3.1, NULL, 13038, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 9, 3.1, NULL, 13038, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 6, 3.1, NULL, 13038, NULL)
#elif defined __ia64__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 3, 3.1, NULL, 13038, NULL)
#elif defined __i386__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 2, 3.1, NULL, 13038, NULL)
#else
Msg("Find size of GdkWindowAttributesType (13039)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,13038, NULL);\n",architecture,13039,0);
#endif

extern void gdk_window_deiconify_db(GdkWindow *);
CheckInterfacedef(gdk_window_deiconify,gdk_window_deiconify_db);
extern GType gdk_device_get_type_db(void);
CheckInterfacedef(gdk_device_get_type,gdk_device_get_type_db);
extern void gdk_gc_set_clip_origin_db(GdkGC *, gint, gint);
CheckInterfacedef(gdk_gc_set_clip_origin,gdk_gc_set_clip_origin_db);
extern GdkColormap * gdk_drawable_get_colormap_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_colormap,gdk_drawable_get_colormap_db);
extern void gdk_flush_db(void);
CheckInterfacedef(gdk_flush,gdk_flush_db);
extern gint gdk_screen_height_mm_db(void);
CheckInterfacedef(gdk_screen_height_mm,gdk_screen_height_mm_db);
extern void gdk_display_get_pointer_db(GdkDisplay *, GdkScreen * *, gint *, gint *, GdkModifierType *);
CheckInterfacedef(gdk_display_get_pointer,gdk_display_get_pointer_db);
extern GdkEventMask gdk_window_get_events_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_events,gdk_window_get_events_db);
extern void gdk_window_scroll_db(GdkWindow *, gint, gint);
CheckInterfacedef(gdk_window_scroll,gdk_window_scroll_db);
extern GType gdk_window_object_get_type_db(void);
CheckInterfacedef(gdk_window_object_get_type,gdk_window_object_get_type_db);
extern GdkCursor * gdk_cursor_new_from_pixbuf_db(GdkDisplay *, GdkPixbuf *, gint, gint);
CheckInterfacedef(gdk_cursor_new_from_pixbuf,gdk_cursor_new_from_pixbuf_db);
extern GType gdk_axis_use_get_type_db(void);
CheckInterfacedef(gdk_axis_use_get_type,gdk_axis_use_get_type_db);
extern GType gdk_fill_get_type_db(void);
CheckInterfacedef(gdk_fill_get_type,gdk_fill_get_type_db);
extern void gdk_window_resize_db(GdkWindow *, gint, gint);
CheckInterfacedef(gdk_window_resize,gdk_window_resize_db);
extern GdkKeymap * gdk_keymap_get_for_display_db(GdkDisplay *);
CheckInterfacedef(gdk_keymap_get_for_display,gdk_keymap_get_for_display_db);
extern void gdk_display_add_client_message_filter_db(GdkDisplay *, GdkAtom, GdkFilterFunc, gpointer);
CheckInterfacedef(gdk_display_add_client_message_filter,gdk_display_add_client_message_filter_db);
extern GdkPixmap * gdk_pixmap_create_from_xpm_d_db(GdkDrawable *, GdkBitmap * *, const GdkColor *, gchar * *);
CheckInterfacedef(gdk_pixmap_create_from_xpm_d,gdk_pixmap_create_from_xpm_d_db);
extern gboolean gdk_display_supports_selection_notification_db(GdkDisplay *);
CheckInterfacedef(gdk_display_supports_selection_notification,gdk_display_supports_selection_notification_db);
extern GSList * gdk_display_manager_list_displays_db(GdkDisplayManager *);
CheckInterfacedef(gdk_display_manager_list_displays,gdk_display_manager_list_displays_db);
extern void gdk_gc_set_subwindow_db(GdkGC *, GdkSubwindowMode);
CheckInterfacedef(gdk_gc_set_subwindow,gdk_gc_set_subwindow_db);
extern void gdk_gc_set_colormap_db(GdkGC *, GdkColormap *);
CheckInterfacedef(gdk_gc_set_colormap,gdk_gc_set_colormap_db);
extern GType gdk_grab_status_get_type_db(void);
CheckInterfacedef(gdk_grab_status_get_type,gdk_grab_status_get_type_db);
extern GType gdk_visual_get_type_db(void);
CheckInterfacedef(gdk_visual_get_type,gdk_visual_get_type_db);
extern GdkVisual * gdk_rgb_get_visual_db(void);
CheckInterfacedef(gdk_rgb_get_visual,gdk_rgb_get_visual_db);
extern GType gdk_event_get_type_db(void);
CheckInterfacedef(gdk_event_get_type,gdk_event_get_type_db);
extern void gdk_display_set_double_click_time_db(GdkDisplay *, guint);
CheckInterfacedef(gdk_display_set_double_click_time,gdk_display_set_double_click_time_db);
extern GList * gdk_devices_list_db(void);
CheckInterfacedef(gdk_devices_list,gdk_devices_list_db);
extern void gdk_draw_layout_line_db(GdkDrawable *, GdkGC *, gint, gint, PangoLayoutLine *);
CheckInterfacedef(gdk_draw_layout_line,gdk_draw_layout_line_db);
extern gboolean gdk_init_check_db(int *, char * * *);
CheckInterfacedef(gdk_init_check,gdk_init_check_db);
extern gboolean gdk_event_get_root_coords_db(GdkEvent *, gdouble *, gdouble *);
CheckInterfacedef(gdk_event_get_root_coords,gdk_event_get_root_coords_db);
extern void gdk_window_begin_resize_drag_db(GdkWindow *, GdkWindowEdge, gint, gint, gint, guint32);
CheckInterfacedef(gdk_window_begin_resize_drag,gdk_window_begin_resize_drag_db);
extern guint gdk_keyval_from_name_db(const gchar *);
CheckInterfacedef(gdk_keyval_from_name,gdk_keyval_from_name_db);
extern gboolean gdk_display_request_selection_notification_db(GdkDisplay *, GdkAtom);
CheckInterfacedef(gdk_display_request_selection_notification,gdk_display_request_selection_notification_db);
extern void gdk_window_raise_db(GdkWindow *);
CheckInterfacedef(gdk_window_raise,gdk_window_raise_db);
extern GdkImage * gdk_image_new_db(GdkImageType, GdkVisual *, gint, gint);
CheckInterfacedef(gdk_image_new,gdk_image_new_db);
extern GdkAtom gdk_atom_intern_db(const gchar *, gboolean);
CheckInterfacedef(gdk_atom_intern,gdk_atom_intern_db);
extern void gdk_window_get_frame_extents_db(GdkWindow *, GdkRectangle *);
CheckInterfacedef(gdk_window_get_frame_extents,gdk_window_get_frame_extents_db);
extern gboolean gdk_rectangle_intersect_db(GdkRectangle *, GdkRectangle *, GdkRectangle *);
CheckInterfacedef(gdk_rectangle_intersect,gdk_rectangle_intersect_db);
extern GdkWindow * gdk_selection_owner_get_for_display_db(GdkDisplay *, GdkAtom);
CheckInterfacedef(gdk_selection_owner_get_for_display,gdk_selection_owner_get_for_display_db);
extern PangoRenderer * gdk_pango_renderer_get_default_db(GdkScreen *);
CheckInterfacedef(gdk_pango_renderer_get_default,gdk_pango_renderer_get_default_db);
extern gchar * gdk_get_display_db(void);
CheckInterfacedef(gdk_get_display,gdk_get_display_db);
extern void gdk_gc_set_dashes_db(GdkGC *, gint, gint8 *, gint);
CheckInterfacedef(gdk_gc_set_dashes,gdk_gc_set_dashes_db);
extern void gdk_device_set_key_db(GdkDevice *, guint, guint, GdkModifierType);
CheckInterfacedef(gdk_device_set_key,gdk_device_set_key_db);
extern void gdk_pango_renderer_set_override_color_db(GdkPangoRenderer *, PangoRenderPart, const GdkColor *);
CheckInterfacedef(gdk_pango_renderer_set_override_color,gdk_pango_renderer_set_override_color_db);
extern void gdk_window_iconify_db(GdkWindow *);
CheckInterfacedef(gdk_window_iconify,gdk_window_iconify_db);
extern void gdk_display_set_double_click_distance_db(GdkDisplay *, guint);
CheckInterfacedef(gdk_display_set_double_click_distance,gdk_display_set_double_click_distance_db);
extern GdkWindow * gdk_window_get_group_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_group,gdk_window_get_group_db);
extern GdkDevice * gdk_device_get_core_pointer_db(void);
CheckInterfacedef(gdk_device_get_core_pointer,gdk_device_get_core_pointer_db);
extern guint gdk_color_hash_db(const GdkColor *);
CheckInterfacedef(gdk_color_hash,gdk_color_hash_db);
extern void gdk_screen_get_monitor_geometry_db(GdkScreen *, gint, GdkRectangle *);
CheckInterfacedef(gdk_screen_get_monitor_geometry,gdk_screen_get_monitor_geometry_db);
extern void gdk_device_set_source_db(GdkDevice *, GdkInputSource);
CheckInterfacedef(gdk_device_set_source,gdk_device_set_source_db);
extern GType gdk_input_mode_get_type_db(void);
CheckInterfacedef(gdk_input_mode_get_type,gdk_input_mode_get_type_db);
extern GdkWindow * gdk_get_default_root_window_db(void);
CheckInterfacedef(gdk_get_default_root_window,gdk_get_default_root_window_db);
extern gchar * gdk_screen_make_display_name_db(GdkScreen *);
CheckInterfacedef(gdk_screen_make_display_name,gdk_screen_make_display_name_db);
extern GdkGrabStatus gdk_pointer_grab_db(GdkWindow *, gboolean, GdkEventMask, GdkWindow *, GdkCursor *, guint32);
CheckInterfacedef(gdk_pointer_grab,gdk_pointer_grab_db);
extern void gdk_window_set_title_db(GdkWindow *, const gchar *);
CheckInterfacedef(gdk_window_set_title,gdk_window_set_title_db);
extern void gdk_property_delete_db(GdkWindow *, GdkAtom);
CheckInterfacedef(gdk_property_delete,gdk_property_delete_db);
extern GdkColormap * gdk_rgb_get_colormap_db(void);
CheckInterfacedef(gdk_rgb_get_colormap,gdk_rgb_get_colormap_db);
extern void gdk_free_text_list_db(gchar * *);
CheckInterfacedef(gdk_free_text_list,gdk_free_text_list_db);
extern gint gdk_colormap_alloc_colors_db(GdkColormap *, GdkColor *, gint, gboolean, gboolean, gboolean *);
CheckInterfacedef(gdk_colormap_alloc_colors,gdk_colormap_alloc_colors_db);
extern void gdk_window_process_all_updates_db(void);
CheckInterfacedef(gdk_window_process_all_updates,gdk_window_process_all_updates_db);
extern guint32 gdk_event_get_time_db(GdkEvent *);
CheckInterfacedef(gdk_event_get_time,gdk_event_get_time_db);
extern gint gdk_text_property_to_text_list_for_display_db(GdkDisplay *, GdkAtom, gint, const guchar *, gint, gchar * * *);
CheckInterfacedef(gdk_text_property_to_text_list_for_display,gdk_text_property_to_text_list_for_display_db);
extern GdkAtom gdk_drag_get_selection_db(GdkDragContext *);
CheckInterfacedef(gdk_drag_get_selection,gdk_drag_get_selection_db);
extern GdkScreen * gdk_screen_get_default_db(void);
CheckInterfacedef(gdk_screen_get_default,gdk_screen_get_default_db);
extern void gdk_window_set_skip_pager_hint_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_skip_pager_hint,gdk_window_set_skip_pager_hint_db);
extern GdkPixmap * gdk_pixmap_foreign_new_db(GdkNativeWindow);
CheckInterfacedef(gdk_pixmap_foreign_new,gdk_pixmap_foreign_new_db);
extern GType gdk_window_hints_get_type_db(void);
CheckInterfacedef(gdk_window_hints_get_type,gdk_window_hints_get_type_db);
extern void gdk_drag_drop_db(GdkDragContext *, guint32);
CheckInterfacedef(gdk_drag_drop,gdk_drag_drop_db);
extern void gdk_gc_set_fill_db(GdkGC *, GdkFill);
CheckInterfacedef(gdk_gc_set_fill,gdk_gc_set_fill_db);
extern void gdk_init_db(int *, char * * *);
CheckInterfacedef(gdk_init,gdk_init_db);
extern gboolean gdk_property_get_db(GdkWindow *, GdkAtom, GdkAtom, gulong, gulong, gint, GdkAtom *, gint *, gint *, guchar * *);
CheckInterfacedef(gdk_property_get,gdk_property_get_db);
extern void gdk_gc_set_rgb_fg_color_db(GdkGC *, const GdkColor *);
CheckInterfacedef(gdk_gc_set_rgb_fg_color,gdk_gc_set_rgb_fg_color_db);
extern void gdk_window_set_transient_for_db(GdkWindow *, GdkWindow *);
CheckInterfacedef(gdk_window_set_transient_for,gdk_window_set_transient_for_db);
extern GdkRegion * gdk_pango_layout_line_get_clip_region_db(PangoLayoutLine *, gint, gint, gint *, gint);
CheckInterfacedef(gdk_pango_layout_line_get_clip_region,gdk_pango_layout_line_get_clip_region_db);
extern GdkVisual * gdk_screen_get_system_visual_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_system_visual,gdk_screen_get_system_visual_db);
extern GdkDisplay * gdk_display_manager_get_default_display_db(GdkDisplayManager *);
CheckInterfacedef(gdk_display_manager_get_default_display,gdk_display_manager_get_default_display_db);
extern gint gdk_text_property_to_utf8_list_db(GdkAtom, gint, const guchar *, gint, gchar * * *);
CheckInterfacedef(gdk_text_property_to_utf8_list,gdk_text_property_to_utf8_list_db);
extern void gdk_window_set_type_hint_db(GdkWindow *, GdkWindowTypeHint);
CheckInterfacedef(gdk_window_set_type_hint,gdk_window_set_type_hint_db);
extern void gdk_parse_args_db(int *, char * * *);
CheckInterfacedef(gdk_parse_args,gdk_parse_args_db);
extern GdkPixmap * gdk_pixmap_create_from_xpm_db(GdkDrawable *, GdkBitmap * *, const GdkColor *, const gchar *);
CheckInterfacedef(gdk_pixmap_create_from_xpm,gdk_pixmap_create_from_xpm_db);
extern void gdk_window_set_group_db(GdkWindow *, GdkWindow *);
CheckInterfacedef(gdk_window_set_group,gdk_window_set_group_db);
extern void gdk_window_focus_db(GdkWindow *, guint32);
CheckInterfacedef(gdk_window_focus,gdk_window_focus_db);
extern void gdk_event_set_screen_db(GdkEvent *, GdkScreen *);
CheckInterfacedef(gdk_event_set_screen,gdk_event_set_screen_db);
extern void gdk_display_flush_db(GdkDisplay *);
CheckInterfacedef(gdk_display_flush,gdk_display_flush_db);
extern GType gdk_owner_change_get_type_db(void);
CheckInterfacedef(gdk_owner_change_get_type,gdk_owner_change_get_type_db);
extern void gdk_region_subtract_db(GdkRegion *, GdkRegion *);
CheckInterfacedef(gdk_region_subtract,gdk_region_subtract_db);
extern GType gdk_cap_style_get_type_db(void);
CheckInterfacedef(gdk_cap_style_get_type,gdk_cap_style_get_type_db);
extern void gdk_window_unstick_db(GdkWindow *);
CheckInterfacedef(gdk_window_unstick,gdk_window_unstick_db);
extern void gdk_draw_glyphs_db(GdkDrawable *, GdkGC *, PangoFont *, gint, gint, PangoGlyphString *);
CheckInterfacedef(gdk_draw_glyphs,gdk_draw_glyphs_db);
extern gint gdk_text_property_to_utf8_list_for_display_db(GdkDisplay *, GdkAtom, gint, const guchar *, gint, gchar * * *);
CheckInterfacedef(gdk_text_property_to_utf8_list_for_display,gdk_text_property_to_utf8_list_for_display_db);
extern void gdk_drag_abort_db(GdkDragContext *, guint32);
CheckInterfacedef(gdk_drag_abort,gdk_drag_abort_db);
extern GdkWindow * gdk_display_get_window_at_pointer_db(GdkDisplay *, gint *, gint *);
CheckInterfacedef(gdk_display_get_window_at_pointer,gdk_display_get_window_at_pointer_db);
extern GdkDisplayPointerHooks * gdk_display_set_pointer_hooks_db(GdkDisplay *, const GdkDisplayPointerHooks *);
CheckInterfacedef(gdk_display_set_pointer_hooks,gdk_display_set_pointer_hooks_db);
extern void gdk_window_set_debug_updates_db(gboolean);
CheckInterfacedef(gdk_window_set_debug_updates,gdk_window_set_debug_updates_db);
extern gboolean gdk_spawn_command_line_on_screen_db(GdkScreen *, const gchar *, GError * *);
CheckInterfacedef(gdk_spawn_command_line_on_screen,gdk_spawn_command_line_on_screen_db);
extern GdkRegion * gdk_region_copy_db(GdkRegion *);
CheckInterfacedef(gdk_region_copy,gdk_region_copy_db);
extern GdkEvent * gdk_display_peek_event_db(GdkDisplay *);
CheckInterfacedef(gdk_display_peek_event,gdk_display_peek_event_db);
extern GdkColormap * gdk_gc_get_colormap_db(GdkGC *);
CheckInterfacedef(gdk_gc_get_colormap,gdk_gc_get_colormap_db);
extern void gdk_selection_send_notify_db(guint32, GdkAtom, GdkAtom, GdkAtom, guint32);
CheckInterfacedef(gdk_selection_send_notify,gdk_selection_send_notify_db);
extern const char * gdk_get_program_class_db(void);
CheckInterfacedef(gdk_get_program_class,gdk_get_program_class_db);
extern GType gdk_filter_return_get_type_db(void);
CheckInterfacedef(gdk_filter_return_get_type,gdk_filter_return_get_type_db);
extern void gdk_drop_reply_db(GdkDragContext *, gboolean, guint32);
CheckInterfacedef(gdk_drop_reply,gdk_drop_reply_db);
extern void gdk_threads_enter_db(void);
CheckInterfacedef(gdk_threads_enter,gdk_threads_enter_db);
extern void gdk_device_free_history_db(GdkTimeCoord * *, gint);
CheckInterfacedef(gdk_device_free_history,gdk_device_free_history_db);
extern GdkImage * gdk_drawable_get_image_db(GdkDrawable *, gint, gint, gint, gint);
CheckInterfacedef(gdk_drawable_get_image,gdk_drawable_get_image_db);
extern GType gdk_event_mask_get_type_db(void);
CheckInterfacedef(gdk_event_mask_get_type,gdk_event_mask_get_type_db);
extern void gdk_set_program_class_db(const char *);
CheckInterfacedef(gdk_set_program_class,gdk_set_program_class_db);
extern void gdk_draw_polygon_db(GdkDrawable *, GdkGC *, gboolean, GdkPoint *, gint);
CheckInterfacedef(gdk_draw_polygon,gdk_draw_polygon_db);
extern GType gdk_function_get_type_db(void);
CheckInterfacedef(gdk_function_get_type,gdk_function_get_type_db);
extern void gdk_display_close_db(GdkDisplay *);
CheckInterfacedef(gdk_display_close,gdk_display_close_db);
extern gint gdk_screen_get_n_monitors_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_n_monitors,gdk_screen_get_n_monitors_db);
extern gboolean gdk_keymap_translate_keyboard_state_db(GdkKeymap *, guint, GdkModifierType, gint, guint *, gint *, gint *, GdkModifierType *);
CheckInterfacedef(gdk_keymap_translate_keyboard_state,gdk_keymap_translate_keyboard_state_db);
extern GType gdk_rectangle_get_type_db(void);
CheckInterfacedef(gdk_rectangle_get_type,gdk_rectangle_get_type_db);
extern GdkDisplay * gdk_screen_get_display_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_display,gdk_screen_get_display_db);
extern GList * gdk_window_get_toplevels_db(void);
CheckInterfacedef(gdk_window_get_toplevels,gdk_window_get_toplevels_db);
extern GdkVisual * gdk_visual_get_best_with_depth_db(gint);
CheckInterfacedef(gdk_visual_get_best_with_depth,gdk_visual_get_best_with_depth_db);
extern gboolean gdk_display_supports_cursor_alpha_db(GdkDisplay *);
CheckInterfacedef(gdk_display_supports_cursor_alpha,gdk_display_supports_cursor_alpha_db);
extern void gdk_window_set_decorations_db(GdkWindow *, GdkWMDecoration);
CheckInterfacedef(gdk_window_set_decorations,gdk_window_set_decorations_db);
extern PangoContext * gdk_pango_context_get_for_screen_db(GdkScreen *);
CheckInterfacedef(gdk_pango_context_get_for_screen,gdk_pango_context_get_for_screen_db);
extern GdkVisual * gdk_colormap_get_visual_db(GdkColormap *);
CheckInterfacedef(gdk_colormap_get_visual,gdk_colormap_get_visual_db);
extern void gdk_error_trap_push_db(void);
CheckInterfacedef(gdk_error_trap_push,gdk_error_trap_push_db);
extern void gdk_display_beep_db(GdkDisplay *);
CheckInterfacedef(gdk_display_beep,gdk_display_beep_db);
extern gboolean gdk_spawn_on_screen_db(GdkScreen *, const gchar *, gchar * *, gchar * *, GSpawnFlags, GSpawnChildSetupFunc, gpointer, gint *, GError * *);
CheckInterfacedef(gdk_spawn_on_screen,gdk_spawn_on_screen_db);
extern void gdk_add_client_message_filter_db(GdkAtom, GdkFilterFunc, gpointer);
CheckInterfacedef(gdk_add_client_message_filter,gdk_add_client_message_filter_db);
extern PangoDirection gdk_keymap_get_direction_db(GdkKeymap *);
CheckInterfacedef(gdk_keymap_get_direction,gdk_keymap_get_direction_db);
extern PangoAttribute * gdk_pango_attr_stipple_new_db(GdkBitmap *);
CheckInterfacedef(gdk_pango_attr_stipple_new,gdk_pango_attr_stipple_new_db);
extern void gdk_window_lower_db(GdkWindow *);
CheckInterfacedef(gdk_window_lower,gdk_window_lower_db);
extern gboolean gdk_rgb_ditherable_db(void);
CheckInterfacedef(gdk_rgb_ditherable,gdk_rgb_ditherable_db);
extern gboolean gdk_colormap_alloc_color_db(GdkColormap *, GdkColor *, gboolean, gboolean);
CheckInterfacedef(gdk_colormap_alloc_color,gdk_colormap_alloc_color_db);
extern GdkWindow * gdk_display_get_default_group_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_default_group,gdk_display_get_default_group_db);
extern GType gdk_event_type_get_type_db(void);
CheckInterfacedef(gdk_event_type_get_type,gdk_event_type_get_type_db);
extern GType gdk_color_get_type_db(void);
CheckInterfacedef(gdk_color_get_type,gdk_color_get_type_db);
extern GType gdk_drag_protocol_get_type_db(void);
CheckInterfacedef(gdk_drag_protocol_get_type,gdk_drag_protocol_get_type_db);
extern GType gdk_gravity_get_type_db(void);
CheckInterfacedef(gdk_gravity_get_type,gdk_gravity_get_type_db);
extern gboolean gdk_events_pending_db(void);
CheckInterfacedef(gdk_events_pending,gdk_events_pending_db);
extern GType gdk_input_condition_get_type_db(void);
CheckInterfacedef(gdk_input_condition_get_type,gdk_input_condition_get_type_db);
extern GType gdk_input_source_get_type_db(void);
CheckInterfacedef(gdk_input_source_get_type,gdk_input_source_get_type_db);
extern gchar * gdk_utf8_to_string_target_db(const gchar *);
CheckInterfacedef(gdk_utf8_to_string_target,gdk_utf8_to_string_target_db);
extern void gdk_threads_init_db(void);
CheckInterfacedef(gdk_threads_init,gdk_threads_init_db);
extern void gdk_gc_set_foreground_db(GdkGC *, const GdkColor *);
CheckInterfacedef(gdk_gc_set_foreground,gdk_gc_set_foreground_db);
extern gint gdk_string_to_compound_text_for_display_db(GdkDisplay *, const gchar *, GdkAtom *, gint *, guchar * *, gint *);
CheckInterfacedef(gdk_string_to_compound_text_for_display,gdk_string_to_compound_text_for_display_db);
extern GdkWindow * gdk_window_get_toplevel_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_toplevel,gdk_window_get_toplevel_db);
extern void gdk_drop_finish_db(GdkDragContext *, gboolean, guint32);
CheckInterfacedef(gdk_drop_finish,gdk_drop_finish_db);
extern void gdk_window_set_functions_db(GdkWindow *, GdkWMFunction);
CheckInterfacedef(gdk_window_set_functions,gdk_window_set_functions_db);
extern void gdk_window_invalidate_maybe_recurse_db(GdkWindow *, GdkRegion *, gboolean(*fptr0)(GdkWindow *,gpointer)
, gpointer);
CheckInterfacedef(gdk_window_invalidate_maybe_recurse,gdk_window_invalidate_maybe_recurse_db);
extern gint gdk_screen_get_height_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_height,gdk_screen_get_height_db);
extern gboolean gdk_keymap_get_entries_for_keyval_db(GdkKeymap *, guint, GdkKeymapKey * *, gint *);
CheckInterfacedef(gdk_keymap_get_entries_for_keyval,gdk_keymap_get_entries_for_keyval_db);
extern GdkDragContext * gdk_drag_context_new_db(void);
CheckInterfacedef(gdk_drag_context_new,gdk_drag_context_new_db);
extern void gdk_colormap_query_color_db(GdkColormap *, gulong, GdkColor *);
CheckInterfacedef(gdk_colormap_query_color,gdk_colormap_query_color_db);
extern void gdk_pixbuf_render_pixmap_and_mask_for_colormap_db(GdkPixbuf *, GdkColormap *, GdkPixmap * *, GdkBitmap * *, int);
CheckInterfacedef(gdk_pixbuf_render_pixmap_and_mask_for_colormap,gdk_pixbuf_render_pixmap_and_mask_for_colormap_db);
extern void gdk_region_intersect_db(GdkRegion *, GdkRegion *);
CheckInterfacedef(gdk_region_intersect,gdk_region_intersect_db);
extern GdkWindow * gdk_selection_owner_get_db(GdkAtom);
CheckInterfacedef(gdk_selection_owner_get,gdk_selection_owner_get_db);
extern void gdk_draw_pixbuf_db(GdkDrawable *, GdkGC *, GdkPixbuf *, gint, gint, gint, gint, gint, gint, GdkRgbDither, gint, gint);
CheckInterfacedef(gdk_draw_pixbuf,gdk_draw_pixbuf_db);
extern void gdk_rgb_cmap_free_db(GdkRgbCmap *);
CheckInterfacedef(gdk_rgb_cmap_free,gdk_rgb_cmap_free_db);
extern GdkDisplay * gdk_display_open_db(const gchar *);
CheckInterfacedef(gdk_display_open,gdk_display_open_db);
extern GdkPixmap * gdk_pixmap_colormap_create_from_xpm_d_db(GdkDrawable *, GdkColormap *, GdkBitmap * *, const GdkColor *, gchar * *);
CheckInterfacedef(gdk_pixmap_colormap_create_from_xpm_d,gdk_pixmap_colormap_create_from_xpm_d_db);
extern gboolean gdk_keyval_is_lower_db(guint);
CheckInterfacedef(gdk_keyval_is_lower,gdk_keyval_is_lower_db);
extern GType gdk_modifier_type_get_type_db(void);
CheckInterfacedef(gdk_modifier_type_get_type,gdk_modifier_type_get_type_db);
extern gint gdk_visual_get_best_depth_db(void);
CheckInterfacedef(gdk_visual_get_best_depth,gdk_visual_get_best_depth_db);
extern gboolean gdk_setting_get_db(const gchar *, GValue *);
CheckInterfacedef(gdk_setting_get,gdk_setting_get_db);
extern GType gdk_screen_get_type_db(void);
CheckInterfacedef(gdk_screen_get_type,gdk_screen_get_type_db);
extern guint32 gdk_drag_get_protocol_for_display_db(GdkDisplay *, guint32, GdkDragProtocol *);
CheckInterfacedef(gdk_drag_get_protocol_for_display,gdk_drag_get_protocol_for_display_db);
extern GList * gdk_screen_get_toplevel_windows_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_toplevel_windows,gdk_screen_get_toplevel_windows_db);
extern GdkGC * gdk_gc_new_with_values_db(GdkDrawable *, GdkGCValues *, GdkGCValuesMask);
CheckInterfacedef(gdk_gc_new_with_values,gdk_gc_new_with_values_db);
extern GdkScreen * gdk_display_get_default_screen_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_default_screen,gdk_display_get_default_screen_db);
extern gboolean gdk_drag_motion_db(GdkDragContext *, GdkWindow *, GdkDragProtocol, gint, gint, GdkDragAction, GdkDragAction, guint32);
CheckInterfacedef(gdk_drag_motion,gdk_drag_motion_db);
extern GdkRegion * gdk_drawable_get_visible_region_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_visible_region,gdk_drawable_get_visible_region_db);
extern void gdk_pango_renderer_set_stipple_db(GdkPangoRenderer *, PangoRenderPart, GdkBitmap *);
CheckInterfacedef(gdk_pango_renderer_set_stipple,gdk_pango_renderer_set_stipple_db);
extern void gdk_display_get_maximal_cursor_size_db(GdkDisplay *, guint *, guint *);
CheckInterfacedef(gdk_display_get_maximal_cursor_size,gdk_display_get_maximal_cursor_size_db);
extern GdkRegion * gdk_window_get_update_area_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_update_area,gdk_window_get_update_area_db);
extern void gdk_drag_status_db(GdkDragContext *, GdkDragAction, guint32);
CheckInterfacedef(gdk_drag_status,gdk_drag_status_db);
extern gboolean gdk_keyval_is_upper_db(guint);
CheckInterfacedef(gdk_keyval_is_upper,gdk_keyval_is_upper_db);
extern void gdk_window_begin_paint_region_db(GdkWindow *, GdkRegion *);
CheckInterfacedef(gdk_window_begin_paint_region,gdk_window_begin_paint_region_db);
extern void gdk_pango_renderer_set_drawable_db(GdkPangoRenderer *, GdkDrawable *);
CheckInterfacedef(gdk_pango_renderer_set_drawable,gdk_pango_renderer_set_drawable_db);
extern gint gdk_screen_get_monitor_at_point_db(GdkScreen *, gint, gint);
CheckInterfacedef(gdk_screen_get_monitor_at_point,gdk_screen_get_monitor_at_point_db);
extern gboolean gdk_utf8_to_compound_text_for_display_db(GdkDisplay *, const gchar *, GdkAtom *, gint *, guchar * *, gint *);
CheckInterfacedef(gdk_utf8_to_compound_text_for_display,gdk_utf8_to_compound_text_for_display_db);
extern GdkColormap * gdk_image_get_colormap_db(GdkImage *);
CheckInterfacedef(gdk_image_get_colormap,gdk_image_get_colormap_db);
extern gint gdk_window_get_origin_db(GdkWindow *, gint *, gint *);
CheckInterfacedef(gdk_window_get_origin,gdk_window_get_origin_db);
extern void gdk_set_double_click_time_db(guint);
CheckInterfacedef(gdk_set_double_click_time,gdk_set_double_click_time_db);
extern void gdk_gc_get_values_db(GdkGC *, GdkGCValues *);
CheckInterfacedef(gdk_gc_get_values,gdk_gc_get_values_db);
extern GdkColor * gdk_color_copy_db(const GdkColor *);
CheckInterfacedef(gdk_color_copy,gdk_color_copy_db);
extern void gdk_gc_set_tile_db(GdkGC *, GdkPixmap *);
CheckInterfacedef(gdk_gc_set_tile,gdk_gc_set_tile_db);
extern gboolean gdk_event_get_coords_db(GdkEvent *, gdouble *, gdouble *);
CheckInterfacedef(gdk_event_get_coords,gdk_event_get_coords_db);
extern void gdk_gc_set_ts_origin_db(GdkGC *, gint, gint);
CheckInterfacedef(gdk_gc_set_ts_origin,gdk_gc_set_ts_origin_db);
extern GdkWindowType gdk_window_get_window_type_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_window_type,gdk_window_get_window_type_db);
extern void gdk_window_set_focus_on_map_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_focus_on_map,gdk_window_set_focus_on_map_db);
extern void gdk_region_union_with_rect_db(GdkRegion *, GdkRectangle *);
CheckInterfacedef(gdk_region_union_with_rect,gdk_region_union_with_rect_db);
extern gboolean gdk_keymap_get_entries_for_keycode_db(GdkKeymap *, guint, GdkKeymapKey * *, guint * *, gint *);
CheckInterfacedef(gdk_keymap_get_entries_for_keycode,gdk_keymap_get_entries_for_keycode_db);
extern gboolean gdk_selection_property_get_db(GdkWindow *, guchar * *, GdkAtom *, gint *);
CheckInterfacedef(gdk_selection_property_get,gdk_selection_property_get_db);
extern void gdk_display_keyboard_ungrab_db(GdkDisplay *, guint32);
CheckInterfacedef(gdk_display_keyboard_ungrab,gdk_display_keyboard_ungrab_db);
extern GdkDisplay * gdk_drawable_get_display_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_display,gdk_drawable_get_display_db);
extern void gdk_gc_set_stipple_db(GdkGC *, GdkPixmap *);
CheckInterfacedef(gdk_gc_set_stipple,gdk_gc_set_stipple_db);
extern void gdk_window_clear_area_e_db(GdkWindow *, gint, gint, gint, gint);
CheckInterfacedef(gdk_window_clear_area_e,gdk_window_clear_area_e_db);
extern void gdk_window_set_keep_below_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_keep_below,gdk_window_set_keep_below_db);
extern GType gdk_font_type_get_type_db(void);
CheckInterfacedef(gdk_font_type_get_type,gdk_font_type_get_type_db);
extern GType gdk_visual_type_get_type_db(void);
CheckInterfacedef(gdk_visual_type_get_type,gdk_visual_type_get_type_db);
extern GdkEvent * gdk_display_get_event_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_event,gdk_display_get_event_db);
extern void gdk_pixbuf_render_pixmap_and_mask_db(GdkPixbuf *, GdkPixmap * *, GdkBitmap * *, int);
CheckInterfacedef(gdk_pixbuf_render_pixmap_and_mask,gdk_pixbuf_render_pixmap_and_mask_db);
extern GdkVisual * gdk_drawable_get_visual_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_visual,gdk_drawable_get_visual_db);
extern void gdk_image_set_colormap_db(GdkImage *, GdkColormap *);
CheckInterfacedef(gdk_image_set_colormap,gdk_image_set_colormap_db);
extern guint gdk_keyval_to_upper_db(guint);
CheckInterfacedef(gdk_keyval_to_upper,gdk_keyval_to_upper_db);
extern void gdk_set_show_events_db(gboolean);
CheckInterfacedef(gdk_set_show_events,gdk_set_show_events_db);
extern GdkWindow * gdk_window_lookup_for_display_db(GdkDisplay *, GdkNativeWindow);
CheckInterfacedef(gdk_window_lookup_for_display,gdk_window_lookup_for_display_db);
extern GdkPixmap * gdk_pixmap_new_db(GdkDrawable *, gint, gint, gint);
CheckInterfacedef(gdk_pixmap_new,gdk_pixmap_new_db);
extern GdkColormap * gdk_screen_get_rgb_colormap_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_rgb_colormap,gdk_screen_get_rgb_colormap_db);
extern void gdk_rgb_find_color_db(GdkColormap *, GdkColor *);
CheckInterfacedef(gdk_rgb_find_color,gdk_rgb_find_color_db);
extern void gdk_window_set_override_redirect_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_override_redirect,gdk_window_set_override_redirect_db);
extern void gdk_window_set_accept_focus_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_accept_focus,gdk_window_set_accept_focus_db);
extern GdkEvent * gdk_event_peek_db(void);
CheckInterfacedef(gdk_event_peek,gdk_event_peek_db);
extern void gdk_window_show_db(GdkWindow *);
CheckInterfacedef(gdk_window_show,gdk_window_show_db);
extern GType gdk_overlap_type_get_type_db(void);
CheckInterfacedef(gdk_overlap_type_get_type,gdk_overlap_type_get_type_db);
extern void gdk_window_show_unraised_db(GdkWindow *);
CheckInterfacedef(gdk_window_show_unraised,gdk_window_show_unraised_db);
extern GType gdk_gc_values_mask_get_type_db(void);
CheckInterfacedef(gdk_gc_values_mask_get_type,gdk_gc_values_mask_get_type_db);
extern void gdk_screen_broadcast_client_message_db(GdkScreen *, GdkEvent *);
CheckInterfacedef(gdk_screen_broadcast_client_message,gdk_screen_broadcast_client_message_db);
extern void gdk_window_set_events_db(GdkWindow *, GdkEventMask);
CheckInterfacedef(gdk_window_set_events,gdk_window_set_events_db);
extern void gdk_window_set_icon_db(GdkWindow *, GdkWindow *, GdkPixmap *, GdkBitmap *);
CheckInterfacedef(gdk_window_set_icon,gdk_window_set_icon_db);
extern GType gdk_join_style_get_type_db(void);
CheckInterfacedef(gdk_join_style_get_type,gdk_join_style_get_type_db);
extern gboolean gdk_utf8_to_compound_text_db(const gchar *, GdkAtom *, gint *, guchar * *, gint *);
CheckInterfacedef(gdk_utf8_to_compound_text,gdk_utf8_to_compound_text_db);
extern void gdk_display_put_event_db(GdkDisplay *, GdkEvent *);
CheckInterfacedef(gdk_display_put_event,gdk_display_put_event_db);
extern GList * gdk_window_peek_children_db(GdkWindow *);
CheckInterfacedef(gdk_window_peek_children,gdk_window_peek_children_db);
extern void gdk_window_enable_synchronized_configure_db(GdkWindow *);
CheckInterfacedef(gdk_window_enable_synchronized_configure,gdk_window_enable_synchronized_configure_db);
extern void gdk_window_set_role_db(GdkWindow *, const gchar *);
CheckInterfacedef(gdk_window_set_role,gdk_window_set_role_db);
extern GdkDisplay * gdk_display_get_default_db(void);
CheckInterfacedef(gdk_display_get_default,gdk_display_get_default_db);
extern void gdk_window_remove_filter_db(GdkWindow *, GdkFilterFunc, gpointer);
CheckInterfacedef(gdk_window_remove_filter,gdk_window_remove_filter_db);
extern void gdk_gc_set_function_db(GdkGC *, GdkFunction);
CheckInterfacedef(gdk_gc_set_function,gdk_gc_set_function_db);
extern GList * gdk_list_visuals_db(void);
CheckInterfacedef(gdk_list_visuals,gdk_list_visuals_db);
extern void gdk_pixbuf_render_threshold_alpha_db(GdkPixbuf *, GdkBitmap *, int, int, int, int, int, int, int);
CheckInterfacedef(gdk_pixbuf_render_threshold_alpha,gdk_pixbuf_render_threshold_alpha_db);
extern void gdk_region_spans_intersect_foreach_db(GdkRegion *, GdkSpan *, int, gboolean, GdkSpanFunc, gpointer);
CheckInterfacedef(gdk_region_spans_intersect_foreach,gdk_region_spans_intersect_foreach_db);
extern void gdk_display_pointer_ungrab_db(GdkDisplay *, guint32);
CheckInterfacedef(gdk_display_pointer_ungrab,gdk_display_pointer_ungrab_db);
extern GdkColormap * gdk_screen_get_default_colormap_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_default_colormap,gdk_screen_get_default_colormap_db);
extern gboolean gdk_rgb_colormap_ditherable_db(GdkColormap *);
CheckInterfacedef(gdk_rgb_colormap_ditherable,gdk_rgb_colormap_ditherable_db);
extern void gdk_window_move_db(GdkWindow *, gint, gint);
CheckInterfacedef(gdk_window_move,gdk_window_move_db);
extern GdkImage * gdk_drawable_copy_to_image_db(GdkDrawable *, GdkImage *, gint, gint, gint, gint, gint, gint);
CheckInterfacedef(gdk_drawable_copy_to_image,gdk_drawable_copy_to_image_db);
extern void gdk_window_reparent_db(GdkWindow *, GdkWindow *, gint, gint);
CheckInterfacedef(gdk_window_reparent,gdk_window_reparent_db);
extern GList * gdk_display_list_devices_db(GdkDisplay *);
CheckInterfacedef(gdk_display_list_devices,gdk_display_list_devices_db);
extern GdkVisual * gdk_screen_get_rgb_visual_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_rgb_visual,gdk_screen_get_rgb_visual_db);
extern void gdk_set_sm_client_id_db(const gchar *);
CheckInterfacedef(gdk_set_sm_client_id,gdk_set_sm_client_id_db);
extern void gdk_region_destroy_db(GdkRegion *);
CheckInterfacedef(gdk_region_destroy,gdk_region_destroy_db);
extern void gdk_display_manager_set_default_display_db(GdkDisplayManager *, GdkDisplay *);
CheckInterfacedef(gdk_display_manager_set_default_display,gdk_display_manager_set_default_display_db);
extern void gdk_beep_db(void);
CheckInterfacedef(gdk_beep,gdk_beep_db);
extern GdkColormap * gdk_colormap_get_system_db(void);
CheckInterfacedef(gdk_colormap_get_system,gdk_colormap_get_system_db);
extern void gdk_display_store_clipboard_db(GdkDisplay *, GdkWindow *, guint32, GdkAtom *, gint);
CheckInterfacedef(gdk_display_store_clipboard,gdk_display_store_clipboard_db);
extern gint gdk_error_trap_pop_db(void);
CheckInterfacedef(gdk_error_trap_pop,gdk_error_trap_pop_db);
extern PangoAttribute * gdk_pango_attr_embossed_new_db(gboolean);
CheckInterfacedef(gdk_pango_attr_embossed_new,gdk_pango_attr_embossed_new_db);
extern void gdk_drawable_set_colormap_db(GdkDrawable *, GdkColormap *);
CheckInterfacedef(gdk_drawable_set_colormap,gdk_drawable_set_colormap_db);
extern GdkDisplay * gdk_cursor_get_display_db(GdkCursor *);
CheckInterfacedef(gdk_cursor_get_display,gdk_cursor_get_display_db);
extern void gdk_window_add_filter_db(GdkWindow *, GdkFilterFunc, gpointer);
CheckInterfacedef(gdk_window_add_filter,gdk_window_add_filter_db);
extern void gdk_draw_line_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint);
CheckInterfacedef(gdk_draw_line,gdk_draw_line_db);
extern gboolean gdk_event_send_client_message_db(GdkEvent *, GdkNativeWindow);
CheckInterfacedef(gdk_event_send_client_message,gdk_event_send_client_message_db);
extern void gdk_window_set_geometry_hints_db(GdkWindow *, GdkGeometry *, GdkWindowHints);
CheckInterfacedef(gdk_window_set_geometry_hints,gdk_window_set_geometry_hints_db);
extern GType gdk_window_class_get_type_db(void);
CheckInterfacedef(gdk_window_class_get_type,gdk_window_class_get_type_db);
extern guint gdk_unicode_to_keyval_db(guint32);
CheckInterfacedef(gdk_unicode_to_keyval,gdk_unicode_to_keyval_db);
extern void gdk_draw_arc_db(GdkDrawable *, GdkGC *, gboolean, gint, gint, gint, gint, gint, gint);
CheckInterfacedef(gdk_draw_arc,gdk_draw_arc_db);
extern void gdk_event_handler_set_db(GdkEventFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gdk_event_handler_set,gdk_event_handler_set_db);
extern void gdk_region_get_clipbox_db(GdkRegion *, GdkRectangle *);
CheckInterfacedef(gdk_region_get_clipbox,gdk_region_get_clipbox_db);
extern GType gdk_drawable_get_type_db(void);
CheckInterfacedef(gdk_drawable_get_type,gdk_drawable_get_type_db);
extern void gdk_window_clear_area_db(GdkWindow *, gint, gint, gint, gint);
CheckInterfacedef(gdk_window_clear_area,gdk_window_clear_area_db);
extern void gdk_draw_layout_db(GdkDrawable *, GdkGC *, int, int, PangoLayout *);
CheckInterfacedef(gdk_draw_layout,gdk_draw_layout_db);
extern void gdk_window_get_root_origin_db(GdkWindow *, gint *, gint *);
CheckInterfacedef(gdk_window_get_root_origin,gdk_window_get_root_origin_db);
extern gint gdk_color_parse_db(const gchar *, GdkColor *);
CheckInterfacedef(gdk_color_parse,gdk_color_parse_db);
extern void gdk_window_set_skip_taskbar_hint_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_skip_taskbar_hint,gdk_window_set_skip_taskbar_hint_db);
extern GType gdk_gc_get_type_db(void);
CheckInterfacedef(gdk_gc_get_type,gdk_gc_get_type_db);
extern GdkRegion * gdk_pango_layout_get_clip_region_db(PangoLayout *, gint, gint, gint *, gint);
CheckInterfacedef(gdk_pango_layout_get_clip_region,gdk_pango_layout_get_clip_region_db);
extern void gdk_window_fullscreen_db(GdkWindow *);
CheckInterfacedef(gdk_window_fullscreen,gdk_window_fullscreen_db);
extern gchar * gdk_keyval_name_db(guint);
CheckInterfacedef(gdk_keyval_name,gdk_keyval_name_db);
extern GdkCursor * gdk_cursor_new_db(GdkCursorType);
CheckInterfacedef(gdk_cursor_new,gdk_cursor_new_db);
extern PangoContext * gdk_pango_context_get_db(void);
CheckInterfacedef(gdk_pango_context_get,gdk_pango_context_get_db);
extern GType gdk_rgb_dither_get_type_db(void);
CheckInterfacedef(gdk_rgb_dither_get_type,gdk_rgb_dither_get_type_db);
extern void gdk_window_hide_db(GdkWindow *);
CheckInterfacedef(gdk_window_hide,gdk_window_hide_db);
extern void gdk_window_register_dnd_db(GdkWindow *);
CheckInterfacedef(gdk_window_register_dnd,gdk_window_register_dnd_db);
extern GType gdk_notify_type_get_type_db(void);
CheckInterfacedef(gdk_notify_type_get_type,gdk_notify_type_get_type_db);
extern void gdk_window_invalidate_rect_db(GdkWindow *, GdkRectangle *, gboolean);
CheckInterfacedef(gdk_window_invalidate_rect,gdk_window_invalidate_rect_db);
extern void gdk_window_unmaximize_db(GdkWindow *);
CheckInterfacedef(gdk_window_unmaximize,gdk_window_unmaximize_db);
extern void gdk_gc_copy_db(GdkGC *, GdkGC *);
CheckInterfacedef(gdk_gc_copy,gdk_gc_copy_db);
extern guint gdk_display_get_default_cursor_size_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_default_cursor_size,gdk_display_get_default_cursor_size_db);
extern void gdk_window_set_cursor_db(GdkWindow *, GdkCursor *);
CheckInterfacedef(gdk_window_set_cursor,gdk_window_set_cursor_db);
extern void gdk_keyval_convert_case_db(guint, guint *, guint *);
CheckInterfacedef(gdk_keyval_convert_case,gdk_keyval_convert_case_db);
extern GdkVisual * gdk_visual_get_best_with_type_db(GdkVisualType);
CheckInterfacedef(gdk_visual_get_best_with_type,gdk_visual_get_best_with_type_db);
extern void gdk_gc_set_exposures_db(GdkGC *, gboolean);
CheckInterfacedef(gdk_gc_set_exposures,gdk_gc_set_exposures_db);
extern GdkDisplayManager * gdk_display_manager_get_db(void);
CheckInterfacedef(gdk_display_manager_get,gdk_display_manager_get_db);
extern void gdk_gc_set_background_db(GdkGC *, const GdkColor *);
CheckInterfacedef(gdk_gc_set_background,gdk_gc_set_background_db);
extern void gdk_draw_point_db(GdkDrawable *, GdkGC *, gint, gint);
CheckInterfacedef(gdk_draw_point,gdk_draw_point_db);
extern GdkVisual * gdk_visual_get_best_db(void);
CheckInterfacedef(gdk_visual_get_best,gdk_visual_get_best_db);
extern GList * gdk_window_get_children_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_children,gdk_window_get_children_db);
extern gint gdk_screen_height_db(void);
CheckInterfacedef(gdk_screen_height,gdk_screen_height_db);
extern void gdk_selection_convert_db(GdkWindow *, GdkAtom, GdkAtom, guint32);
CheckInterfacedef(gdk_selection_convert,gdk_selection_convert_db);
extern GdkWindow * gdk_window_get_pointer_db(GdkWindow *, gint *, gint *, GdkModifierType *);
CheckInterfacedef(gdk_window_get_pointer,gdk_window_get_pointer_db);
extern void gdk_window_end_paint_db(GdkWindow *);
CheckInterfacedef(gdk_window_end_paint,gdk_window_end_paint_db);
extern GType gdk_pixmap_get_type_db(void);
CheckInterfacedef(gdk_pixmap_get_type,gdk_pixmap_get_type_db);
extern GType gdk_property_state_get_type_db(void);
CheckInterfacedef(gdk_property_state_get_type,gdk_property_state_get_type_db);
extern void gdk_window_maximize_db(GdkWindow *);
CheckInterfacedef(gdk_window_maximize,gdk_window_maximize_db);
extern void gdk_window_get_user_data_db(GdkWindow *, gpointer *);
CheckInterfacedef(gdk_window_get_user_data,gdk_window_get_user_data_db);
extern GdkGrabStatus gdk_keyboard_grab_db(GdkWindow *, gboolean, guint32);
CheckInterfacedef(gdk_keyboard_grab,gdk_keyboard_grab_db);
extern GType gdk_visibility_state_get_type_db(void);
CheckInterfacedef(gdk_visibility_state_get_type,gdk_visibility_state_get_type_db);
extern void gdk_draw_indexed_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, guchar *, gint, GdkRgbCmap *);
CheckInterfacedef(gdk_draw_indexed_image,gdk_draw_indexed_image_db);
extern gboolean gdk_color_equal_db(const GdkColor *, const GdkColor *);
CheckInterfacedef(gdk_color_equal,gdk_color_equal_db);
extern gboolean gdk_region_empty_db(GdkRegion *);
CheckInterfacedef(gdk_region_empty,gdk_region_empty_db);
extern void gdk_region_offset_db(GdkRegion *, gint, gint);
CheckInterfacedef(gdk_region_offset,gdk_region_offset_db);
extern gint gdk_string_to_compound_text_db(const gchar *, GdkAtom *, gint *, guchar * *, gint *);
CheckInterfacedef(gdk_string_to_compound_text,gdk_string_to_compound_text_db);
extern GdkScreen * gdk_gc_get_screen_db(GdkGC *);
CheckInterfacedef(gdk_gc_get_screen,gdk_gc_get_screen_db);
extern GdkOverlapType gdk_region_rect_in_db(GdkRegion *, GdkRectangle *);
CheckInterfacedef(gdk_region_rect_in,gdk_region_rect_in_db);
extern GType gdk_cursor_type_get_type_db(void);
CheckInterfacedef(gdk_cursor_type_get_type,gdk_cursor_type_get_type_db);
extern gboolean gdk_window_set_static_gravities_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_static_gravities,gdk_window_set_static_gravities_db);
extern gint gdk_screen_get_number_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_number,gdk_screen_get_number_db);
extern void gdk_draw_segments_db(GdkDrawable *, GdkGC *, GdkSegment *, gint);
CheckInterfacedef(gdk_draw_segments,gdk_draw_segments_db);
extern guint32 gdk_keyval_to_unicode_db(guint);
CheckInterfacedef(gdk_keyval_to_unicode,gdk_keyval_to_unicode_db);
extern void gdk_draw_layout_line_with_colors_db(GdkDrawable *, GdkGC *, gint, gint, PangoLayoutLine *, const GdkColor *, const GdkColor *);
CheckInterfacedef(gdk_draw_layout_line_with_colors,gdk_draw_layout_line_with_colors_db);
extern void gdk_property_change_db(GdkWindow *, GdkAtom, GdkAtom, gint, GdkPropMode, const guchar *, gint);
CheckInterfacedef(gdk_property_change,gdk_property_change_db);
extern gboolean gdk_event_send_client_message_for_display_db(GdkDisplay *, GdkEvent *, GdkNativeWindow);
CheckInterfacedef(gdk_event_send_client_message_for_display,gdk_event_send_client_message_for_display_db);
extern gboolean gdk_screen_get_setting_db(GdkScreen *, const gchar *, GValue *);
CheckInterfacedef(gdk_screen_get_setting,gdk_screen_get_setting_db);
extern GList * gdk_screen_list_visuals_db(GdkScreen *);
CheckInterfacedef(gdk_screen_list_visuals,gdk_screen_list_visuals_db);
extern GType gdk_window_attributes_type_get_type_db(void);
CheckInterfacedef(gdk_window_attributes_type_get_type,gdk_window_attributes_type_get_type_db);
extern GdkWindow * gdk_window_new_db(GdkWindow *, GdkWindowAttr *, gint);
CheckInterfacedef(gdk_window_new,gdk_window_new_db);
extern void gdk_window_begin_move_drag_db(GdkWindow *, gint, gint, gint, guint32);
CheckInterfacedef(gdk_window_begin_move_drag,gdk_window_begin_move_drag_db);
extern void gdk_device_get_state_db(GdkDevice *, GdkWindow *, gdouble *, GdkModifierType *);
CheckInterfacedef(gdk_device_get_state,gdk_device_get_state_db);
extern void gdk_window_set_modal_hint_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_modal_hint,gdk_window_set_modal_hint_db);
extern GdkEvent * gdk_event_new_db(GdkEventType);
CheckInterfacedef(gdk_event_new,gdk_event_new_db);
extern void gdk_window_destroy_db(GdkWindow *);
CheckInterfacedef(gdk_window_destroy,gdk_window_destroy_db);
extern GType gdk_wm_function_get_type_db(void);
CheckInterfacedef(gdk_wm_function_get_type,gdk_wm_function_get_type_db);
extern GdkColormap * gdk_colormap_new_db(GdkVisual *, gboolean);
CheckInterfacedef(gdk_colormap_new,gdk_colormap_new_db);
extern void gdk_draw_rgb_32_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, guchar *, gint);
CheckInterfacedef(gdk_draw_rgb_32_image,gdk_draw_rgb_32_image_db);
extern void gdk_window_set_background_db(GdkWindow *, const GdkColor *);
CheckInterfacedef(gdk_window_set_background,gdk_window_set_background_db);
extern void gdk_window_stick_db(GdkWindow *);
CheckInterfacedef(gdk_window_stick,gdk_window_stick_db);
extern GType gdk_pango_renderer_get_type_db(void);
CheckInterfacedef(gdk_pango_renderer_get_type,gdk_pango_renderer_get_type_db);
extern void gdk_window_set_back_pixmap_db(GdkWindow *, GdkPixmap *, gboolean);
CheckInterfacedef(gdk_window_set_back_pixmap,gdk_window_set_back_pixmap_db);
extern gboolean gdk_display_supports_cursor_color_db(GdkDisplay *);
CheckInterfacedef(gdk_display_supports_cursor_color,gdk_display_supports_cursor_color_db);
extern GdkDragContext * gdk_drag_begin_db(GdkWindow *, GList *);
CheckInterfacedef(gdk_drag_begin,gdk_drag_begin_db);
extern void gdk_notify_startup_complete_db(void);
CheckInterfacedef(gdk_notify_startup_complete,gdk_notify_startup_complete_db);
extern void gdk_display_sync_db(GdkDisplay *);
CheckInterfacedef(gdk_display_sync,gdk_display_sync_db);
extern gboolean gdk_event_get_state_db(GdkEvent *, GdkModifierType *);
CheckInterfacedef(gdk_event_get_state,gdk_event_get_state_db);
extern void gdk_gc_set_values_db(GdkGC *, GdkGCValues *, GdkGCValuesMask);
CheckInterfacedef(gdk_gc_set_values,gdk_gc_set_values_db);
extern GdkEvent * gdk_event_get_graphics_expose_db(GdkWindow *);
CheckInterfacedef(gdk_event_get_graphics_expose,gdk_event_get_graphics_expose_db);
extern void gdk_color_free_db(GdkColor *);
CheckInterfacedef(gdk_color_free,gdk_color_free_db);
extern void gdk_rectangle_union_db(GdkRectangle *, GdkRectangle *, GdkRectangle *);
CheckInterfacedef(gdk_rectangle_union,gdk_rectangle_union_db);
extern void gdk_window_configure_finished_db(GdkWindow *);
CheckInterfacedef(gdk_window_configure_finished,gdk_window_configure_finished_db);
extern gboolean gdk_drag_drop_succeeded_db(GdkDragContext *);
CheckInterfacedef(gdk_drag_drop_succeeded,gdk_drag_drop_succeeded_db);
extern gint gdk_display_get_n_screens_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_n_screens,gdk_display_get_n_screens_db);
extern void gdk_draw_layout_with_colors_db(GdkDrawable *, GdkGC *, int, int, PangoLayout *, const GdkColor *, const GdkColor *);
CheckInterfacedef(gdk_draw_layout_with_colors,gdk_draw_layout_with_colors_db);
extern gint gdk_drawable_get_depth_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_depth,gdk_drawable_get_depth_db);
extern GdkPixmap * gdk_pixmap_foreign_new_for_display_db(GdkDisplay *, GdkNativeWindow);
CheckInterfacedef(gdk_pixmap_foreign_new_for_display,gdk_pixmap_foreign_new_for_display_db);
extern void gdk_event_send_clientmessage_toall_db(GdkEvent *);
CheckInterfacedef(gdk_event_send_clientmessage_toall,gdk_event_send_clientmessage_toall_db);
extern GdkPixbuf * gdk_pixbuf_get_from_drawable_db(GdkPixbuf *, GdkDrawable *, GdkColormap *, int, int, int, int, int, int);
CheckInterfacedef(gdk_pixbuf_get_from_drawable,gdk_pixbuf_get_from_drawable_db);
extern void gdk_draw_gray_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, guchar *, gint);
CheckInterfacedef(gdk_draw_gray_image,gdk_draw_gray_image_db);
extern gint gdk_text_property_to_text_list_db(GdkAtom, gint, const guchar *, gint, gchar * * *);
CheckInterfacedef(gdk_text_property_to_text_list,gdk_text_property_to_text_list_db);
extern gboolean gdk_region_equal_db(GdkRegion *, GdkRegion *);
CheckInterfacedef(gdk_region_equal,gdk_region_equal_db);
extern GdkEvent * gdk_event_get_db(void);
CheckInterfacedef(gdk_event_get,gdk_event_get_db);
extern void gdk_window_freeze_updates_db(GdkWindow *);
CheckInterfacedef(gdk_window_freeze_updates,gdk_window_freeze_updates_db);
extern GdkScreen * gdk_visual_get_screen_db(GdkVisual *);
CheckInterfacedef(gdk_visual_get_screen,gdk_visual_get_screen_db);
extern gboolean gdk_device_get_history_db(GdkDevice *, GdkWindow *, guint32, guint32, GdkTimeCoord * * *, gint *);
CheckInterfacedef(gdk_device_get_history,gdk_device_get_history_db);
extern void gdk_image_put_pixel_db(GdkImage *, gint, gint, guint32);
CheckInterfacedef(gdk_image_put_pixel,gdk_image_put_pixel_db);
extern void gdk_screen_set_default_colormap_db(GdkScreen *, GdkColormap *);
CheckInterfacedef(gdk_screen_set_default_colormap,gdk_screen_set_default_colormap_db);
extern GType gdk_wm_decoration_get_type_db(void);
CheckInterfacedef(gdk_wm_decoration_get_type,gdk_wm_decoration_get_type_db);
extern void gdk_draw_image_db(GdkDrawable *, GdkGC *, GdkImage *, gint, gint, gint, gint, gint, gint);
CheckInterfacedef(gdk_draw_image,gdk_draw_image_db);
extern void gdk_window_shape_combine_region_db(GdkWindow *, GdkRegion *, gint, gint);
CheckInterfacedef(gdk_window_shape_combine_region,gdk_window_shape_combine_region_db);
extern GdkGC * gdk_gc_new_db(GdkDrawable *);
CheckInterfacedef(gdk_gc_new,gdk_gc_new_db);
extern GType gdk_status_get_type_db(void);
CheckInterfacedef(gdk_status_get_type,gdk_status_get_type_db);
extern void gdk_window_set_keep_above_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_keep_above,gdk_window_set_keep_above_db);
extern gboolean gdk_selection_owner_set_for_display_db(GdkDisplay *, GdkWindow *, GdkAtom, guint32, gboolean);
CheckInterfacedef(gdk_selection_owner_set_for_display,gdk_selection_owner_set_for_display_db);
extern GdkDevice * gdk_display_get_core_pointer_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_core_pointer,gdk_display_get_core_pointer_db);
extern void gdk_cursor_unref_db(GdkCursor *);
CheckInterfacedef(gdk_cursor_unref,gdk_cursor_unref_db);
extern GType gdk_display_manager_get_type_db(void);
CheckInterfacedef(gdk_display_manager_get_type,gdk_display_manager_get_type_db);
extern const gchar * gdk_get_display_arg_name_db(void);
CheckInterfacedef(gdk_get_display_arg_name,gdk_get_display_arg_name_db);
extern gboolean gdk_window_is_visible_db(GdkWindow *);
CheckInterfacedef(gdk_window_is_visible,gdk_window_is_visible_db);
extern void gdk_region_union_db(GdkRegion *, GdkRegion *);
CheckInterfacedef(gdk_region_union,gdk_region_union_db);
extern gint gdk_screen_get_width_mm_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_width_mm,gdk_screen_get_width_mm_db);
extern void gdk_draw_lines_db(GdkDrawable *, GdkGC *, GdkPoint *, gint);
CheckInterfacedef(gdk_draw_lines,gdk_draw_lines_db);
extern GType gdk_colormap_get_type_db(void);
CheckInterfacedef(gdk_colormap_get_type,gdk_colormap_get_type_db);
extern guint32 gdk_drag_get_protocol_db(guint32, GdkDragProtocol *);
CheckInterfacedef(gdk_drag_get_protocol,gdk_drag_get_protocol_db);
extern gint gdk_screen_get_width_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_width,gdk_screen_get_width_db);
extern void gdk_selection_send_notify_for_display_db(GdkDisplay *, guint32, GdkAtom, GdkAtom, GdkAtom, guint32);
CheckInterfacedef(gdk_selection_send_notify_for_display,gdk_selection_send_notify_for_display_db);
extern gchar * gdk_set_locale_db(void);
CheckInterfacedef(gdk_set_locale,gdk_set_locale_db);
extern GdkKeymap * gdk_keymap_get_default_db(void);
CheckInterfacedef(gdk_keymap_get_default,gdk_keymap_get_default_db);
extern GdkScreen * gdk_colormap_get_screen_db(GdkColormap *);
CheckInterfacedef(gdk_colormap_get_screen,gdk_colormap_get_screen_db);
extern GType gdk_byte_order_get_type_db(void);
CheckInterfacedef(gdk_byte_order_get_type,gdk_byte_order_get_type_db);
extern void gdk_window_constrain_size_db(GdkGeometry *, guint, gint, gint, gint *, gint *);
CheckInterfacedef(gdk_window_constrain_size,gdk_window_constrain_size_db);
extern GdkWindow * gdk_screen_get_root_window_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_root_window,gdk_screen_get_root_window_db);
extern void gdk_window_set_user_data_db(GdkWindow *, gpointer);
CheckInterfacedef(gdk_window_set_user_data,gdk_window_set_user_data_db);
extern void gdk_colormap_free_colors_db(GdkColormap *, GdkColor *, gint);
CheckInterfacedef(gdk_colormap_free_colors,gdk_colormap_free_colors_db);
extern void gdk_window_get_internal_paint_info_db(GdkWindow *, GdkDrawable * *, gint *, gint *);
CheckInterfacedef(gdk_window_get_internal_paint_info,gdk_window_get_internal_paint_info_db);
extern gboolean gdk_window_is_viewable_db(GdkWindow *);
CheckInterfacedef(gdk_window_is_viewable,gdk_window_is_viewable_db);
extern struct _GdkDrawable * gdk_bitmap_create_from_data_db(GdkDrawable *, const gchar *, gint, gint);
CheckInterfacedef(gdk_bitmap_create_from_data,gdk_bitmap_create_from_data_db);
extern void gdk_window_unfullscreen_db(GdkWindow *);
CheckInterfacedef(gdk_window_unfullscreen,gdk_window_unfullscreen_db);
extern void gdk_drag_find_window_db(GdkDragContext *, GdkWindow *, gint, gint, GdkWindow * *, GdkDragProtocol *);
CheckInterfacedef(gdk_drag_find_window,gdk_drag_find_window_db);
extern GType gdk_keymap_get_type_db(void);
CheckInterfacedef(gdk_keymap_get_type,gdk_keymap_get_type_db);
extern GType gdk_window_type_hint_get_type_db(void);
CheckInterfacedef(gdk_window_type_hint_get_type,gdk_window_type_hint_get_type_db);
extern void gdk_gc_set_clip_mask_db(GdkGC *, GdkBitmap *);
CheckInterfacedef(gdk_gc_set_clip_mask,gdk_gc_set_clip_mask_db);
extern gchar * gdk_atom_name_db(GdkAtom);
CheckInterfacedef(gdk_atom_name,gdk_atom_name_db);
extern void gdk_rgb_set_verbose_db(gboolean);
CheckInterfacedef(gdk_rgb_set_verbose,gdk_rgb_set_verbose_db);
extern void gdk_draw_rgb_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, guchar *, gint);
CheckInterfacedef(gdk_draw_rgb_image,gdk_draw_rgb_image_db);
extern void gdk_query_visual_types_db(GdkVisualType * *, gint *);
CheckInterfacedef(gdk_query_visual_types,gdk_query_visual_types_db);
extern GType gdk_crossing_mode_get_type_db(void);
CheckInterfacedef(gdk_crossing_mode_get_type,gdk_crossing_mode_get_type_db);
extern void gdk_draw_trapezoids_db(GdkDrawable *, GdkGC *, GdkTrapezoid *, gint);
CheckInterfacedef(gdk_draw_trapezoids,gdk_draw_trapezoids_db);
extern GdkPixmap * gdk_pixmap_create_from_data_db(GdkDrawable *, const gchar *, gint, gint, gint, const GdkColor *, const GdkColor *);
CheckInterfacedef(gdk_pixmap_create_from_data,gdk_pixmap_create_from_data_db);
extern GType gdk_line_style_get_type_db(void);
CheckInterfacedef(gdk_line_style_get_type,gdk_line_style_get_type_db);
extern gboolean gdk_window_get_decorations_db(GdkWindow *, GdkWMDecoration *);
CheckInterfacedef(gdk_window_get_decorations,gdk_window_get_decorations_db);
extern GType gdk_window_state_get_type_db(void);
CheckInterfacedef(gdk_window_state_get_type,gdk_window_state_get_type_db);
extern void gdk_gc_offset_db(GdkGC *, gint, gint);
CheckInterfacedef(gdk_gc_offset,gdk_gc_offset_db);
extern void gdk_event_free_db(GdkEvent *);
CheckInterfacedef(gdk_event_free,gdk_event_free_db);
extern void gdk_gc_set_clip_region_db(GdkGC *, GdkRegion *);
CheckInterfacedef(gdk_gc_set_clip_region,gdk_gc_set_clip_region_db);
extern gboolean gdk_device_set_mode_db(GdkDevice *, GdkInputMode);
CheckInterfacedef(gdk_device_set_mode,gdk_device_set_mode_db);
extern void gdk_query_depths_db(gint * *, gint *);
CheckInterfacedef(gdk_query_depths,gdk_query_depths_db);
extern void gdk_draw_rgb_32_image_dithalign_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, guchar *, gint, gint, gint);
CheckInterfacedef(gdk_draw_rgb_32_image_dithalign,gdk_draw_rgb_32_image_dithalign_db);
extern GType gdk_subwindow_mode_get_type_db(void);
CheckInterfacedef(gdk_subwindow_mode_get_type,gdk_subwindow_mode_get_type_db);
extern void gdk_rgb_set_install_db(gboolean);
CheckInterfacedef(gdk_rgb_set_install,gdk_rgb_set_install_db);
extern guint gdk_keyval_to_lower_db(guint);
CheckInterfacedef(gdk_keyval_to_lower,gdk_keyval_to_lower_db);
extern GType gdk_window_edge_get_type_db(void);
CheckInterfacedef(gdk_window_edge_get_type,gdk_window_edge_get_type_db);
extern GdkPixmap * gdk_pixmap_lookup_for_display_db(GdkDisplay *, GdkNativeWindow);
CheckInterfacedef(gdk_pixmap_lookup_for_display,gdk_pixmap_lookup_for_display_db);
extern gboolean gdk_display_pointer_is_grabbed_db(GdkDisplay *);
CheckInterfacedef(gdk_display_pointer_is_grabbed,gdk_display_pointer_is_grabbed_db);
extern GType gdk_prop_mode_get_type_db(void);
CheckInterfacedef(gdk_prop_mode_get_type,gdk_prop_mode_get_type_db);
extern void gdk_window_withdraw_db(GdkWindow *);
CheckInterfacedef(gdk_window_withdraw,gdk_window_withdraw_db);
extern void gdk_drawable_get_size_db(GdkDrawable *, gint *, gint *);
CheckInterfacedef(gdk_drawable_get_size,gdk_drawable_get_size_db);
extern void gdk_window_merge_child_shapes_db(GdkWindow *);
CheckInterfacedef(gdk_window_merge_child_shapes,gdk_window_merge_child_shapes_db);
extern guint gdk_keymap_lookup_key_db(GdkKeymap *, const GdkKeymapKey *);
CheckInterfacedef(gdk_keymap_lookup_key,gdk_keymap_lookup_key_db);
extern GdkRegion * gdk_region_polygon_db(GdkPoint *, gint, GdkFillRule);
CheckInterfacedef(gdk_region_polygon,gdk_region_polygon_db);
extern void gdk_window_clear_db(GdkWindow *);
CheckInterfacedef(gdk_window_clear,gdk_window_clear_db);
extern const gchar * gdk_display_get_name_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_name,gdk_display_get_name_db);
extern void gdk_pango_renderer_set_gc_db(GdkPangoRenderer *, GdkGC *);
CheckInterfacedef(gdk_pango_renderer_set_gc,gdk_pango_renderer_set_gc_db);
extern gboolean gdk_spawn_on_screen_with_pipes_db(GdkScreen *, const gchar *, gchar * *, gchar * *, GSpawnFlags, GSpawnChildSetupFunc, gpointer, gint *, gint *, gint *, gint *, GError * *);
CheckInterfacedef(gdk_spawn_on_screen_with_pipes,gdk_spawn_on_screen_with_pipes_db);
extern void gdk_event_put_db(GdkEvent *);
CheckInterfacedef(gdk_event_put,gdk_event_put_db);
extern GType gdk_window_type_get_type_db(void);
CheckInterfacedef(gdk_window_type_get_type,gdk_window_type_get_type_db);
extern GdkScreen * gdk_event_get_screen_db(GdkEvent *);
CheckInterfacedef(gdk_event_get_screen,gdk_event_get_screen_db);
extern GdkPointerHooks * gdk_set_pointer_hooks_db(const GdkPointerHooks *);
CheckInterfacedef(gdk_set_pointer_hooks,gdk_set_pointer_hooks_db);
extern void gdk_draw_glyphs_transformed_db(GdkDrawable *, GdkGC *, PangoMatrix *, PangoFont *, gint, gint, PangoGlyphString *);
CheckInterfacedef(gdk_draw_glyphs_transformed,gdk_draw_glyphs_transformed_db);
extern void gdk_draw_rgb_image_dithalign_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, guchar *, gint, gint, gint);
CheckInterfacedef(gdk_draw_rgb_image_dithalign,gdk_draw_rgb_image_dithalign_db);
extern void gdk_window_process_updates_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_process_updates,gdk_window_process_updates_db);
extern GType gdk_extension_mode_get_type_db(void);
CheckInterfacedef(gdk_extension_mode_get_type,gdk_extension_mode_get_type_db);
extern gboolean gdk_event_get_axis_db(GdkEvent *, GdkAxisUse, gdouble *);
CheckInterfacedef(gdk_event_get_axis,gdk_event_get_axis_db);
extern void gdk_gc_set_clip_rectangle_db(GdkGC *, GdkRectangle *);
CheckInterfacedef(gdk_gc_set_clip_rectangle,gdk_gc_set_clip_rectangle_db);
extern void gdk_gc_set_rgb_bg_color_db(GdkGC *, const GdkColor *);
CheckInterfacedef(gdk_gc_set_rgb_bg_color,gdk_gc_set_rgb_bg_color_db);
extern void gdk_region_xor_db(GdkRegion *, GdkRegion *);
CheckInterfacedef(gdk_region_xor,gdk_region_xor_db);
extern GdkCursor * gdk_cursor_ref_db(GdkCursor *);
CheckInterfacedef(gdk_cursor_ref,gdk_cursor_ref_db);
extern GdkVisual * gdk_visual_get_best_with_both_db(gint, GdkVisualType);
CheckInterfacedef(gdk_visual_get_best_with_both,gdk_visual_get_best_with_both_db);
extern GType gdk_scroll_direction_get_type_db(void);
CheckInterfacedef(gdk_scroll_direction_get_type,gdk_scroll_direction_get_type_db);
extern void gdk_draw_points_db(GdkDrawable *, GdkGC *, GdkPoint *, gint);
CheckInterfacedef(gdk_draw_points,gdk_draw_points_db);
extern GdkRgbCmap * gdk_rgb_cmap_new_db(guint32 *, gint);
CheckInterfacedef(gdk_rgb_cmap_new,gdk_rgb_cmap_new_db);
extern GdkWindow * gdk_window_foreign_new_db(GdkNativeWindow);
CheckInterfacedef(gdk_window_foreign_new,gdk_window_foreign_new_db);
extern GdkWindow * gdk_window_get_parent_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_parent,gdk_window_get_parent_db);
extern void gdk_draw_drawable_db(GdkDrawable *, GdkGC *, GdkDrawable *, gint, gint, gint, gint, gint, gint);
CheckInterfacedef(gdk_draw_drawable,gdk_draw_drawable_db);
extern void gdk_threads_set_lock_functions_db(GCallback, GCallback);
CheckInterfacedef(gdk_threads_set_lock_functions,gdk_threads_set_lock_functions_db);
extern gint gdk_screen_get_height_mm_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_height_mm,gdk_screen_get_height_mm_db);
extern gboolean gdk_device_get_axis_db(GdkDevice *, gdouble *, GdkAxisUse, gdouble *);
CheckInterfacedef(gdk_device_get_axis,gdk_device_get_axis_db);
extern gboolean gdk_get_show_events_db(void);
CheckInterfacedef(gdk_get_show_events,gdk_get_show_events_db);
extern void gdk_window_begin_paint_rect_db(GdkWindow *, GdkRectangle *);
CheckInterfacedef(gdk_window_begin_paint_rect,gdk_window_begin_paint_rect_db);
extern void gdk_pointer_ungrab_db(guint32);
CheckInterfacedef(gdk_pointer_ungrab,gdk_pointer_ungrab_db);
extern GdkPixmap * gdk_pixmap_lookup_db(GdkNativeWindow);
CheckInterfacedef(gdk_pixmap_lookup,gdk_pixmap_lookup_db);
extern void gdk_threads_leave_db(void);
CheckInterfacedef(gdk_threads_leave,gdk_threads_leave_db);
extern gboolean gdk_pointer_is_grabbed_db(void);
CheckInterfacedef(gdk_pointer_is_grabbed,gdk_pointer_is_grabbed_db);
extern gboolean gdk_region_point_in_db(GdkRegion *, int, int);
CheckInterfacedef(gdk_region_point_in,gdk_region_point_in_db);
extern GdkWindowState gdk_window_get_state_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_state,gdk_window_get_state_db);
extern void gdk_region_get_rectangles_db(GdkRegion *, GdkRectangle * *, gint *);
CheckInterfacedef(gdk_region_get_rectangles,gdk_region_get_rectangles_db);
extern void gdk_draw_rectangle_db(GdkDrawable *, GdkGC *, gboolean, gint, gint, gint, gint);
CheckInterfacedef(gdk_draw_rectangle,gdk_draw_rectangle_db);
extern void gdk_gc_set_line_attributes_db(GdkGC *, gint, GdkLineStyle, GdkCapStyle, GdkJoinStyle);
CheckInterfacedef(gdk_gc_set_line_attributes,gdk_gc_set_line_attributes_db);
extern void gdk_window_get_geometry_db(GdkWindow *, gint *, gint *, gint *, gint *, gint *);
CheckInterfacedef(gdk_window_get_geometry,gdk_window_get_geometry_db);
extern void gdk_rgb_set_min_colors_db(gint);
CheckInterfacedef(gdk_rgb_set_min_colors,gdk_rgb_set_min_colors_db);
extern gint gdk_screen_get_monitor_at_window_db(GdkScreen *, GdkWindow *);
CheckInterfacedef(gdk_screen_get_monitor_at_window,gdk_screen_get_monitor_at_window_db);
extern GdkWindow * gdk_window_foreign_new_for_display_db(GdkDisplay *, GdkNativeWindow);
CheckInterfacedef(gdk_window_foreign_new_for_display,gdk_window_foreign_new_for_display_db);
extern GdkRegion * gdk_region_rectangle_db(GdkRectangle *);
CheckInterfacedef(gdk_region_rectangle,gdk_region_rectangle_db);
extern void gdk_window_set_icon_list_db(GdkWindow *, GList *);
CheckInterfacedef(gdk_window_set_icon_list,gdk_window_set_icon_list_db);
extern GdkPixbuf * gdk_pixbuf_get_from_image_db(GdkPixbuf *, GdkImage *, GdkColormap *, int, int, int, int, int, int);
CheckInterfacedef(gdk_pixbuf_get_from_image,gdk_pixbuf_get_from_image_db);
extern void gdk_device_set_axis_use_db(GdkDevice *, guint, GdkAxisUse);
CheckInterfacedef(gdk_device_set_axis_use,gdk_device_set_axis_use_db);
extern void gdk_keyboard_ungrab_db(guint32);
CheckInterfacedef(gdk_keyboard_ungrab,gdk_keyboard_ungrab_db);
extern GdkWindow * gdk_window_at_pointer_db(gint *, gint *);
CheckInterfacedef(gdk_window_at_pointer,gdk_window_at_pointer_db);
extern GdkVisual * gdk_visual_get_system_db(void);
CheckInterfacedef(gdk_visual_get_system,gdk_visual_get_system_db);
extern void gdk_drag_find_window_for_screen_db(GdkDragContext *, GdkWindow *, GdkScreen *, gint, gint, GdkWindow * *, GdkDragProtocol *);
CheckInterfacedef(gdk_drag_find_window_for_screen,gdk_drag_find_window_for_screen_db);
extern GdkRegion * gdk_region_new_db(void);
CheckInterfacedef(gdk_region_new,gdk_region_new_db);
extern GType gdk_image_type_get_type_db(void);
CheckInterfacedef(gdk_image_type_get_type,gdk_image_type_get_type_db);
extern GType gdk_image_get_type_db(void);
CheckInterfacedef(gdk_image_get_type,gdk_image_get_type_db);
extern gboolean gdk_display_supports_clipboard_persistence_db(GdkDisplay *);
CheckInterfacedef(gdk_display_supports_clipboard_persistence,gdk_display_supports_clipboard_persistence_db);
extern gint gdk_screen_width_db(void);
CheckInterfacedef(gdk_screen_width,gdk_screen_width_db);
extern void gdk_input_set_extension_events_db(GdkWindow *, gint, GdkExtensionMode);
CheckInterfacedef(gdk_input_set_extension_events,gdk_input_set_extension_events_db);
extern GType gdk_display_get_type_db(void);
CheckInterfacedef(gdk_display_get_type,gdk_display_get_type_db);
extern GdkCursor * gdk_cursor_new_for_display_db(GdkDisplay *, GdkCursorType);
CheckInterfacedef(gdk_cursor_new_for_display,gdk_cursor_new_for_display_db);
extern GdkRegion * gdk_drawable_get_clip_region_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_clip_region,gdk_drawable_get_clip_region_db);
extern GdkScreen * gdk_display_get_screen_db(GdkDisplay *, gint);
CheckInterfacedef(gdk_display_get_screen,gdk_display_get_screen_db);
extern GdkColormap * gdk_screen_get_system_colormap_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_system_colormap,gdk_screen_get_system_colormap_db);
extern GdkVisualType gdk_visual_get_best_type_db(void);
CheckInterfacedef(gdk_visual_get_best_type,gdk_visual_get_best_type_db);
extern GType gdk_setting_action_get_type_db(void);
CheckInterfacedef(gdk_setting_action_get_type,gdk_setting_action_get_type_db);
extern GdkCursor * gdk_cursor_new_from_pixmap_db(GdkPixmap *, GdkPixmap *, const GdkColor *, const GdkColor *, gint, gint);
CheckInterfacedef(gdk_cursor_new_from_pixmap,gdk_cursor_new_from_pixmap_db);
extern GType gdk_fill_rule_get_type_db(void);
CheckInterfacedef(gdk_fill_rule_get_type,gdk_fill_rule_get_type_db);
extern void gdk_window_invalidate_region_db(GdkWindow *, GdkRegion *, gboolean);
CheckInterfacedef(gdk_window_invalidate_region,gdk_window_invalidate_region_db);
extern gint gdk_screen_width_mm_db(void);
CheckInterfacedef(gdk_screen_width_mm,gdk_screen_width_mm_db);
extern void gdk_window_set_child_shapes_db(GdkWindow *);
CheckInterfacedef(gdk_window_set_child_shapes,gdk_window_set_child_shapes_db);
extern void gdk_window_move_resize_db(GdkWindow *, gint, gint, gint, gint);
CheckInterfacedef(gdk_window_move_resize,gdk_window_move_resize_db);
extern GType gdk_cursor_get_type_db(void);
CheckInterfacedef(gdk_cursor_get_type,gdk_cursor_get_type_db);
extern void gdk_free_compound_text_db(guchar *);
CheckInterfacedef(gdk_free_compound_text,gdk_free_compound_text_db);
extern PangoRenderer * gdk_pango_renderer_new_db(GdkScreen *);
CheckInterfacedef(gdk_pango_renderer_new,gdk_pango_renderer_new_db);
extern GdkScreen * gdk_drawable_get_screen_db(GdkDrawable *);
CheckInterfacedef(gdk_drawable_get_screen,gdk_drawable_get_screen_db);
extern GdkWindow * gdk_window_lookup_db(GdkNativeWindow);
CheckInterfacedef(gdk_window_lookup,gdk_window_lookup_db);
extern void gdk_window_set_icon_name_db(GdkWindow *, const gchar *);
CheckInterfacedef(gdk_window_set_icon_name,gdk_window_set_icon_name_db);
extern GType gdk_drag_context_get_type_db(void);
CheckInterfacedef(gdk_drag_context_get_type,gdk_drag_context_get_type_db);
extern void gdk_window_thaw_updates_db(GdkWindow *);
CheckInterfacedef(gdk_window_thaw_updates,gdk_window_thaw_updates_db);
extern GdkPixmap * gdk_pixmap_colormap_create_from_xpm_db(GdkDrawable *, GdkColormap *, GdkBitmap * *, const GdkColor *, const gchar *);
CheckInterfacedef(gdk_pixmap_colormap_create_from_xpm,gdk_pixmap_colormap_create_from_xpm_db);
extern GdkEvent * gdk_event_copy_db(GdkEvent *);
CheckInterfacedef(gdk_event_copy,gdk_event_copy_db);
extern gboolean gdk_selection_owner_set_db(GdkWindow *, GdkAtom, guint32, gboolean);
CheckInterfacedef(gdk_selection_owner_set,gdk_selection_owner_set_db);
extern void gdk_window_get_position_db(GdkWindow *, gint *, gint *);
CheckInterfacedef(gdk_window_get_position,gdk_window_get_position_db);
extern GType gdk_drag_action_get_type_db(void);
CheckInterfacedef(gdk_drag_action_get_type,gdk_drag_action_get_type_db);
extern guint32 gdk_image_get_pixel_db(GdkImage *, gint, gint);
CheckInterfacedef(gdk_image_get_pixel,gdk_image_get_pixel_db);
extern void gdk_window_shape_combine_mask_db(GdkWindow *, GdkBitmap *, gint, gint);
CheckInterfacedef(gdk_window_shape_combine_mask,gdk_window_shape_combine_mask_db);
extern void gdk_region_shrink_db(GdkRegion *, int, int);
CheckInterfacedef(gdk_region_shrink,gdk_region_shrink_db);
extern GdkPixbuf * gdk_cursor_get_image_db(GdkCursor *);
CheckInterfacedef(gdk_cursor_get_image,gdk_cursor_get_image_db);
extern GdkCursor * gdk_cursor_new_from_name_db(GdkDisplay *, const gchar *);
CheckInterfacedef(gdk_cursor_new_from_name,gdk_cursor_new_from_name_db);
extern void gdk_display_warp_pointer_db(GdkDisplay *, GdkScreen *, gint, gint);
CheckInterfacedef(gdk_display_warp_pointer,gdk_display_warp_pointer_db);
extern GdkColormap * gdk_screen_get_rgba_colormap_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_rgba_colormap,gdk_screen_get_rgba_colormap_db);
extern GdkVisual * gdk_screen_get_rgba_visual_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_rgba_visual,gdk_screen_get_rgba_visual_db);
extern void gdk_window_move_region_db(GdkWindow *, GdkRegion *, gint, gint);
CheckInterfacedef(gdk_window_move_region,gdk_window_move_region_db);
extern void gdk_window_set_urgency_hint_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_urgency_hint,gdk_window_set_urgency_hint_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gdk/gdk.h\n\n",pcnt,cnt);
return cnt;
#endif

}
