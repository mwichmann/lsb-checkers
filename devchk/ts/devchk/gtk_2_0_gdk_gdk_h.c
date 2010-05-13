/*
 * Test of gtk-2.0/gdk/gdk.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
#ifndef LSBCC_MODE
#include "gtk-2.0/gtk/gtk.h"
#endif
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk/gdk.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk/gdk.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GDKVAR
	CompareMacro(GDKVAR,extern,extern,6641,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDKVAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_CURRENT_TIME
	CompareConstant(GDK_CURRENT_TIME,0L,6642,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_CURRENT_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_PARENT_RELATIVE
	CompareConstant(GDK_PARENT_RELATIVE,1L,6643,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_PARENT_RELATIVE\n");
cnt++;
#endif

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
#ifndef GDK_WINDOWING_X11
Msg( "Error: Constant not found: GDK_WINDOWING_X11\n");
cnt++;
#endif

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
CheckTypeSize(struct _GdkDrawable,24, 12672, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on S390X\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,12,43426)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDrawable,24, 12672, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on x86-64\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,11,43426)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDrawable,12, 12672, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on S390\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,10,43426)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDrawable,24, 12672, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on PPC64\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,9,43426)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDrawable,12, 12672, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on PPC32\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,6,43426)
#elif defined __ia64__
CheckTypeSize(struct _GdkDrawable,24, 12672, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on IA64\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,3,43426)
#elif defined __i386__
CheckTypeSize(struct _GdkDrawable,12, 12672, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on IA32\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,2,43426)
#elif 1
CheckTypeSize(struct _GdkDrawable,0, 12672, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawable on All\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,1,43426)
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
CheckTypeSize(struct _GdkGC,48, 12675, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,12,43428)
CheckOffset(struct _GdkGC,clip_x_origin,24,12,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,12,43429)
CheckOffset(struct _GdkGC,clip_y_origin,28,12,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,12,43430)
CheckOffset(struct _GdkGC,ts_x_origin,32,12,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,12,43431)
CheckOffset(struct _GdkGC,ts_y_origin,36,12,43431)
CheckMemberSize(struct _GdkGC,colormap,8,12,43464)
CheckOffset(struct _GdkGC,colormap,40,12,43464)
#elif defined __x86_64__
CheckTypeSize(struct _GdkGC,48, 12675, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,11,43428)
CheckOffset(struct _GdkGC,clip_x_origin,24,11,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,11,43429)
CheckOffset(struct _GdkGC,clip_y_origin,28,11,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,11,43430)
CheckOffset(struct _GdkGC,ts_x_origin,32,11,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,11,43431)
CheckOffset(struct _GdkGC,ts_y_origin,36,11,43431)
CheckMemberSize(struct _GdkGC,colormap,8,11,43464)
CheckOffset(struct _GdkGC,colormap,40,11,43464)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkGC,32, 12675, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,10,43428)
CheckOffset(struct _GdkGC,clip_x_origin,12,10,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,10,43429)
CheckOffset(struct _GdkGC,clip_y_origin,16,10,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,10,43430)
CheckOffset(struct _GdkGC,ts_x_origin,20,10,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,10,43431)
CheckOffset(struct _GdkGC,ts_y_origin,24,10,43431)
CheckMemberSize(struct _GdkGC,colormap,4,10,43464)
CheckOffset(struct _GdkGC,colormap,28,10,43464)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkGC,48, 12675, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,9,43428)
CheckOffset(struct _GdkGC,clip_x_origin,24,9,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,9,43429)
CheckOffset(struct _GdkGC,clip_y_origin,28,9,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,9,43430)
CheckOffset(struct _GdkGC,ts_x_origin,32,9,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,9,43431)
CheckOffset(struct _GdkGC,ts_y_origin,36,9,43431)
CheckMemberSize(struct _GdkGC,colormap,8,9,43464)
CheckOffset(struct _GdkGC,colormap,40,9,43464)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkGC,32, 12675, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,6,43428)
CheckOffset(struct _GdkGC,clip_x_origin,12,6,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,6,43429)
CheckOffset(struct _GdkGC,clip_y_origin,16,6,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,6,43430)
CheckOffset(struct _GdkGC,ts_x_origin,20,6,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,6,43431)
CheckOffset(struct _GdkGC,ts_y_origin,24,6,43431)
CheckMemberSize(struct _GdkGC,colormap,4,6,43464)
CheckOffset(struct _GdkGC,colormap,28,6,43464)
#elif defined __ia64__
CheckTypeSize(struct _GdkGC,48, 12675, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,3,43428)
CheckOffset(struct _GdkGC,clip_x_origin,24,3,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,3,43429)
CheckOffset(struct _GdkGC,clip_y_origin,28,3,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,3,43430)
CheckOffset(struct _GdkGC,ts_x_origin,32,3,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,3,43431)
CheckOffset(struct _GdkGC,ts_y_origin,36,3,43431)
CheckMemberSize(struct _GdkGC,colormap,8,3,43464)
CheckOffset(struct _GdkGC,colormap,40,3,43464)
#elif defined __i386__
CheckTypeSize(struct _GdkGC,32, 12675, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGC,clip_x_origin,4,2,43428)
CheckOffset(struct _GdkGC,clip_x_origin,12,2,43428)
CheckMemberSize(struct _GdkGC,clip_y_origin,4,2,43429)
CheckOffset(struct _GdkGC,clip_y_origin,16,2,43429)
CheckMemberSize(struct _GdkGC,ts_x_origin,4,2,43430)
CheckOffset(struct _GdkGC,ts_x_origin,20,2,43430)
CheckMemberSize(struct _GdkGC,ts_y_origin,4,2,43431)
CheckOffset(struct _GdkGC,ts_y_origin,24,2,43431)
CheckMemberSize(struct _GdkGC,colormap,4,2,43464)
CheckOffset(struct _GdkGC,colormap,28,2,43464)
#elif 1
CheckTypeSize(struct _GdkGC,0, 12675, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkGC on All\n");
CheckOffset(struct _GdkGC,parent_instance,0,1,43427)
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkColormap,56, 12676, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,12,43433)
CheckOffset(struct _GdkColormap,size,24,12,43433)
CheckMemberSize(struct _GdkColormap,colors,8,12,43438)
CheckOffset(struct _GdkColormap,colors,32,12,43438)
CheckMemberSize(struct _GdkColormap,visual,8,12,43462)
CheckOffset(struct _GdkColormap,visual,40,12,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,8,12,43463)
CheckOffset(struct _GdkColormap,windowing_data,48,12,43463)
#elif defined __x86_64__
CheckTypeSize(struct _GdkColormap,56, 12676, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,11,43433)
CheckOffset(struct _GdkColormap,size,24,11,43433)
CheckMemberSize(struct _GdkColormap,colors,8,11,43438)
CheckOffset(struct _GdkColormap,colors,32,11,43438)
CheckMemberSize(struct _GdkColormap,visual,8,11,43462)
CheckOffset(struct _GdkColormap,visual,40,11,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,8,11,43463)
CheckOffset(struct _GdkColormap,windowing_data,48,11,43463)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkColormap,28, 12676, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,10,43433)
CheckOffset(struct _GdkColormap,size,12,10,43433)
CheckMemberSize(struct _GdkColormap,colors,4,10,43438)
CheckOffset(struct _GdkColormap,colors,16,10,43438)
CheckMemberSize(struct _GdkColormap,visual,4,10,43462)
CheckOffset(struct _GdkColormap,visual,20,10,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,4,10,43463)
CheckOffset(struct _GdkColormap,windowing_data,24,10,43463)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkColormap,56, 12676, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,9,43433)
CheckOffset(struct _GdkColormap,size,24,9,43433)
CheckMemberSize(struct _GdkColormap,colors,8,9,43438)
CheckOffset(struct _GdkColormap,colors,32,9,43438)
CheckMemberSize(struct _GdkColormap,visual,8,9,43462)
CheckOffset(struct _GdkColormap,visual,40,9,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,8,9,43463)
CheckOffset(struct _GdkColormap,windowing_data,48,9,43463)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkColormap,28, 12676, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,6,43433)
CheckOffset(struct _GdkColormap,size,12,6,43433)
CheckMemberSize(struct _GdkColormap,colors,4,6,43438)
CheckOffset(struct _GdkColormap,colors,16,6,43438)
CheckMemberSize(struct _GdkColormap,visual,4,6,43462)
CheckOffset(struct _GdkColormap,visual,20,6,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,4,6,43463)
CheckOffset(struct _GdkColormap,windowing_data,24,6,43463)
#elif defined __ia64__
CheckTypeSize(struct _GdkColormap,56, 12676, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,3,43433)
CheckOffset(struct _GdkColormap,size,24,3,43433)
CheckMemberSize(struct _GdkColormap,colors,8,3,43438)
CheckOffset(struct _GdkColormap,colors,32,3,43438)
CheckMemberSize(struct _GdkColormap,visual,8,3,43462)
CheckOffset(struct _GdkColormap,visual,40,3,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,8,3,43463)
CheckOffset(struct _GdkColormap,windowing_data,48,3,43463)
#elif defined __i386__
CheckTypeSize(struct _GdkColormap,28, 12676, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColormap,size,4,2,43433)
CheckOffset(struct _GdkColormap,size,12,2,43433)
CheckMemberSize(struct _GdkColormap,colors,4,2,43438)
CheckOffset(struct _GdkColormap,colors,16,2,43438)
CheckMemberSize(struct _GdkColormap,visual,4,2,43462)
CheckOffset(struct _GdkColormap,visual,20,2,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,4,2,43463)
CheckOffset(struct _GdkColormap,windowing_data,24,2,43463)
#elif 1
CheckTypeSize(struct _GdkColormap,0, 12676, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormap on All\n");
CheckOffset(struct _GdkColormap,parent_instance,0,1,43432)
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkColor,12, 12677, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,12,43435)
CheckOffset(struct _GdkColor,red,4,12,43435)
CheckMemberSize(struct _GdkColor,green,2,12,43436)
CheckOffset(struct _GdkColor,green,6,12,43436)
CheckMemberSize(struct _GdkColor,blue,2,12,43437)
CheckOffset(struct _GdkColor,blue,8,12,43437)
#elif defined __x86_64__
CheckTypeSize(struct _GdkColor,12, 12677, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,11,43435)
CheckOffset(struct _GdkColor,red,4,11,43435)
CheckMemberSize(struct _GdkColor,green,2,11,43436)
CheckOffset(struct _GdkColor,green,6,11,43436)
CheckMemberSize(struct _GdkColor,blue,2,11,43437)
CheckOffset(struct _GdkColor,blue,8,11,43437)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkColor,12, 12677, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,10,43435)
CheckOffset(struct _GdkColor,red,4,10,43435)
CheckMemberSize(struct _GdkColor,green,2,10,43436)
CheckOffset(struct _GdkColor,green,6,10,43436)
CheckMemberSize(struct _GdkColor,blue,2,10,43437)
CheckOffset(struct _GdkColor,blue,8,10,43437)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkColor,12, 12677, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,9,43435)
CheckOffset(struct _GdkColor,red,4,9,43435)
CheckMemberSize(struct _GdkColor,green,2,9,43436)
CheckOffset(struct _GdkColor,green,6,9,43436)
CheckMemberSize(struct _GdkColor,blue,2,9,43437)
CheckOffset(struct _GdkColor,blue,8,9,43437)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkColor,12, 12677, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,6,43435)
CheckOffset(struct _GdkColor,red,4,6,43435)
CheckMemberSize(struct _GdkColor,green,2,6,43436)
CheckOffset(struct _GdkColor,green,6,6,43436)
CheckMemberSize(struct _GdkColor,blue,2,6,43437)
CheckOffset(struct _GdkColor,blue,8,6,43437)
#elif defined __ia64__
CheckTypeSize(struct _GdkColor,12, 12677, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,3,43435)
CheckOffset(struct _GdkColor,red,4,3,43435)
CheckMemberSize(struct _GdkColor,green,2,3,43436)
CheckOffset(struct _GdkColor,green,6,3,43436)
CheckMemberSize(struct _GdkColor,blue,2,3,43437)
CheckOffset(struct _GdkColor,blue,8,3,43437)
#elif defined __i386__
CheckTypeSize(struct _GdkColor,12, 12677, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkColor,red,2,2,43435)
CheckOffset(struct _GdkColor,red,4,2,43435)
CheckMemberSize(struct _GdkColor,green,2,2,43436)
CheckOffset(struct _GdkColor,green,6,2,43436)
CheckMemberSize(struct _GdkColor,blue,2,2,43437)
CheckOffset(struct _GdkColor,blue,8,2,43437)
#elif 1
CheckTypeSize(struct _GdkColor,0, 12677, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkColor on All\n");
CheckOffset(struct _GdkColor,pixel,0,1,43434)
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
CheckTypeSize(struct _GdkVisual,80, 12680, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,12,43446)
CheckOffset(struct _GdkVisual,type,24,12,43446)
CheckMemberSize(struct _GdkVisual,depth,4,12,43447)
CheckOffset(struct _GdkVisual,depth,28,12,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,12,43450)
CheckOffset(struct _GdkVisual,byte_order,32,12,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,12,43451)
CheckOffset(struct _GdkVisual,colormap_size,36,12,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,12,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,40,12,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,12,43453)
CheckOffset(struct _GdkVisual,red_mask,44,12,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,12,43454)
CheckOffset(struct _GdkVisual,red_shift,48,12,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,12,43455)
CheckOffset(struct _GdkVisual,red_prec,52,12,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,12,43456)
CheckOffset(struct _GdkVisual,green_mask,56,12,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,12,43457)
CheckOffset(struct _GdkVisual,green_shift,60,12,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,12,43458)
CheckOffset(struct _GdkVisual,green_prec,64,12,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,12,43459)
CheckOffset(struct _GdkVisual,blue_mask,68,12,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,12,43460)
CheckOffset(struct _GdkVisual,blue_shift,72,12,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,12,43461)
CheckOffset(struct _GdkVisual,blue_prec,76,12,43461)
#elif defined __x86_64__
CheckTypeSize(struct _GdkVisual,80, 12680, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,11,43446)
CheckOffset(struct _GdkVisual,type,24,11,43446)
CheckMemberSize(struct _GdkVisual,depth,4,11,43447)
CheckOffset(struct _GdkVisual,depth,28,11,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,11,43450)
CheckOffset(struct _GdkVisual,byte_order,32,11,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,11,43451)
CheckOffset(struct _GdkVisual,colormap_size,36,11,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,11,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,40,11,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,11,43453)
CheckOffset(struct _GdkVisual,red_mask,44,11,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,11,43454)
CheckOffset(struct _GdkVisual,red_shift,48,11,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,11,43455)
CheckOffset(struct _GdkVisual,red_prec,52,11,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,11,43456)
CheckOffset(struct _GdkVisual,green_mask,56,11,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,11,43457)
CheckOffset(struct _GdkVisual,green_shift,60,11,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,11,43458)
CheckOffset(struct _GdkVisual,green_prec,64,11,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,11,43459)
CheckOffset(struct _GdkVisual,blue_mask,68,11,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,11,43460)
CheckOffset(struct _GdkVisual,blue_shift,72,11,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,11,43461)
CheckOffset(struct _GdkVisual,blue_prec,76,11,43461)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkVisual,68, 12680, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,10,43446)
CheckOffset(struct _GdkVisual,type,12,10,43446)
CheckMemberSize(struct _GdkVisual,depth,4,10,43447)
CheckOffset(struct _GdkVisual,depth,16,10,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,10,43450)
CheckOffset(struct _GdkVisual,byte_order,20,10,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,10,43451)
CheckOffset(struct _GdkVisual,colormap_size,24,10,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,10,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,28,10,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,10,43453)
CheckOffset(struct _GdkVisual,red_mask,32,10,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,10,43454)
CheckOffset(struct _GdkVisual,red_shift,36,10,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,10,43455)
CheckOffset(struct _GdkVisual,red_prec,40,10,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,10,43456)
CheckOffset(struct _GdkVisual,green_mask,44,10,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,10,43457)
CheckOffset(struct _GdkVisual,green_shift,48,10,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,10,43458)
CheckOffset(struct _GdkVisual,green_prec,52,10,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,10,43459)
CheckOffset(struct _GdkVisual,blue_mask,56,10,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,10,43460)
CheckOffset(struct _GdkVisual,blue_shift,60,10,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,10,43461)
CheckOffset(struct _GdkVisual,blue_prec,64,10,43461)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkVisual,80, 12680, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,9,43446)
CheckOffset(struct _GdkVisual,type,24,9,43446)
CheckMemberSize(struct _GdkVisual,depth,4,9,43447)
CheckOffset(struct _GdkVisual,depth,28,9,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,9,43450)
CheckOffset(struct _GdkVisual,byte_order,32,9,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,9,43451)
CheckOffset(struct _GdkVisual,colormap_size,36,9,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,9,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,40,9,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,9,43453)
CheckOffset(struct _GdkVisual,red_mask,44,9,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,9,43454)
CheckOffset(struct _GdkVisual,red_shift,48,9,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,9,43455)
CheckOffset(struct _GdkVisual,red_prec,52,9,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,9,43456)
CheckOffset(struct _GdkVisual,green_mask,56,9,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,9,43457)
CheckOffset(struct _GdkVisual,green_shift,60,9,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,9,43458)
CheckOffset(struct _GdkVisual,green_prec,64,9,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,9,43459)
CheckOffset(struct _GdkVisual,blue_mask,68,9,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,9,43460)
CheckOffset(struct _GdkVisual,blue_shift,72,9,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,9,43461)
CheckOffset(struct _GdkVisual,blue_prec,76,9,43461)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkVisual,68, 12680, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,6,43446)
CheckOffset(struct _GdkVisual,type,12,6,43446)
CheckMemberSize(struct _GdkVisual,depth,4,6,43447)
CheckOffset(struct _GdkVisual,depth,16,6,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,6,43450)
CheckOffset(struct _GdkVisual,byte_order,20,6,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,6,43451)
CheckOffset(struct _GdkVisual,colormap_size,24,6,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,6,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,28,6,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,6,43453)
CheckOffset(struct _GdkVisual,red_mask,32,6,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,6,43454)
CheckOffset(struct _GdkVisual,red_shift,36,6,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,6,43455)
CheckOffset(struct _GdkVisual,red_prec,40,6,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,6,43456)
CheckOffset(struct _GdkVisual,green_mask,44,6,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,6,43457)
CheckOffset(struct _GdkVisual,green_shift,48,6,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,6,43458)
CheckOffset(struct _GdkVisual,green_prec,52,6,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,6,43459)
CheckOffset(struct _GdkVisual,blue_mask,56,6,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,6,43460)
CheckOffset(struct _GdkVisual,blue_shift,60,6,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,6,43461)
CheckOffset(struct _GdkVisual,blue_prec,64,6,43461)
#elif defined __ia64__
CheckTypeSize(struct _GdkVisual,80, 12680, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,3,43446)
CheckOffset(struct _GdkVisual,type,24,3,43446)
CheckMemberSize(struct _GdkVisual,depth,4,3,43447)
CheckOffset(struct _GdkVisual,depth,28,3,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,3,43450)
CheckOffset(struct _GdkVisual,byte_order,32,3,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,3,43451)
CheckOffset(struct _GdkVisual,colormap_size,36,3,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,3,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,40,3,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,3,43453)
CheckOffset(struct _GdkVisual,red_mask,44,3,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,3,43454)
CheckOffset(struct _GdkVisual,red_shift,48,3,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,3,43455)
CheckOffset(struct _GdkVisual,red_prec,52,3,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,3,43456)
CheckOffset(struct _GdkVisual,green_mask,56,3,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,3,43457)
CheckOffset(struct _GdkVisual,green_shift,60,3,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,3,43458)
CheckOffset(struct _GdkVisual,green_prec,64,3,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,3,43459)
CheckOffset(struct _GdkVisual,blue_mask,68,3,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,3,43460)
CheckOffset(struct _GdkVisual,blue_shift,72,3,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,3,43461)
CheckOffset(struct _GdkVisual,blue_prec,76,3,43461)
#elif defined __i386__
CheckTypeSize(struct _GdkVisual,68, 12680, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkVisual,type,4,2,43446)
CheckOffset(struct _GdkVisual,type,12,2,43446)
CheckMemberSize(struct _GdkVisual,depth,4,2,43447)
CheckOffset(struct _GdkVisual,depth,16,2,43447)
CheckMemberSize(struct _GdkVisual,byte_order,4,2,43450)
CheckOffset(struct _GdkVisual,byte_order,20,2,43450)
CheckMemberSize(struct _GdkVisual,colormap_size,4,2,43451)
CheckOffset(struct _GdkVisual,colormap_size,24,2,43451)
CheckMemberSize(struct _GdkVisual,bits_per_rgb,4,2,43452)
CheckOffset(struct _GdkVisual,bits_per_rgb,28,2,43452)
CheckMemberSize(struct _GdkVisual,red_mask,4,2,43453)
CheckOffset(struct _GdkVisual,red_mask,32,2,43453)
CheckMemberSize(struct _GdkVisual,red_shift,4,2,43454)
CheckOffset(struct _GdkVisual,red_shift,36,2,43454)
CheckMemberSize(struct _GdkVisual,red_prec,4,2,43455)
CheckOffset(struct _GdkVisual,red_prec,40,2,43455)
CheckMemberSize(struct _GdkVisual,green_mask,4,2,43456)
CheckOffset(struct _GdkVisual,green_mask,44,2,43456)
CheckMemberSize(struct _GdkVisual,green_shift,4,2,43457)
CheckOffset(struct _GdkVisual,green_shift,48,2,43457)
CheckMemberSize(struct _GdkVisual,green_prec,4,2,43458)
CheckOffset(struct _GdkVisual,green_prec,52,2,43458)
CheckMemberSize(struct _GdkVisual,blue_mask,4,2,43459)
CheckOffset(struct _GdkVisual,blue_mask,56,2,43459)
CheckMemberSize(struct _GdkVisual,blue_shift,4,2,43460)
CheckOffset(struct _GdkVisual,blue_shift,60,2,43460)
CheckMemberSize(struct _GdkVisual,blue_prec,4,2,43461)
CheckOffset(struct _GdkVisual,blue_prec,64,2,43461)
#elif 1
CheckTypeSize(struct _GdkVisual,0, 12680, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkVisual on All\n");
CheckOffset(struct _GdkVisual,parent_instance,0,1,43439)
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
CheckTypeSize(struct _GdkDisplay,120, 12693, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,8,12,43466)
CheckOffset(struct _GdkDisplay,queued_events,24,12,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,8,12,43467)
CheckOffset(struct _GdkDisplay,queued_tail,32,12,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,12,43468)
CheckOffset(struct _GdkDisplay,button_click_time,40,12,43468)
CheckMemberSize(struct _GdkDisplay,button_window,16,12,43469)
CheckOffset(struct _GdkDisplay,button_window,48,12,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,12,43470)
CheckOffset(struct _GdkDisplay,button_number,64,12,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,12,43471)
CheckOffset(struct _GdkDisplay,double_click_time,72,12,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,8,12,43516)
CheckOffset(struct _GdkDisplay,core_pointer,80,12,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,8,12,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,88,12,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,12,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,100,12,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,12,43540)
CheckOffset(struct _GdkDisplay,button_x,104,12,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,12,43541)
CheckOffset(struct _GdkDisplay,button_y,112,12,43541)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDisplay,120, 12693, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,8,11,43466)
CheckOffset(struct _GdkDisplay,queued_events,24,11,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,8,11,43467)
CheckOffset(struct _GdkDisplay,queued_tail,32,11,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,11,43468)
CheckOffset(struct _GdkDisplay,button_click_time,40,11,43468)
CheckMemberSize(struct _GdkDisplay,button_window,16,11,43469)
CheckOffset(struct _GdkDisplay,button_window,48,11,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,11,43470)
CheckOffset(struct _GdkDisplay,button_number,64,11,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,11,43471)
CheckOffset(struct _GdkDisplay,double_click_time,72,11,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,8,11,43516)
CheckOffset(struct _GdkDisplay,core_pointer,80,11,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,8,11,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,88,11,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,11,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,100,11,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,11,43540)
CheckOffset(struct _GdkDisplay,button_x,104,11,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,11,43541)
CheckOffset(struct _GdkDisplay,button_y,112,11,43541)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDisplay,80, 12693, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,4,10,43466)
CheckOffset(struct _GdkDisplay,queued_events,12,10,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,4,10,43467)
CheckOffset(struct _GdkDisplay,queued_tail,16,10,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,10,43468)
CheckOffset(struct _GdkDisplay,button_click_time,20,10,43468)
CheckMemberSize(struct _GdkDisplay,button_window,8,10,43469)
CheckOffset(struct _GdkDisplay,button_window,28,10,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,10,43470)
CheckOffset(struct _GdkDisplay,button_number,36,10,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,10,43471)
CheckOffset(struct _GdkDisplay,double_click_time,44,10,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,4,10,43516)
CheckOffset(struct _GdkDisplay,core_pointer,48,10,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,4,10,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,52,10,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,10,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,60,10,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,10,43540)
CheckOffset(struct _GdkDisplay,button_x,64,10,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,10,43541)
CheckOffset(struct _GdkDisplay,button_y,72,10,43541)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDisplay,120, 12693, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,8,9,43466)
CheckOffset(struct _GdkDisplay,queued_events,24,9,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,8,9,43467)
CheckOffset(struct _GdkDisplay,queued_tail,32,9,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,9,43468)
CheckOffset(struct _GdkDisplay,button_click_time,40,9,43468)
CheckMemberSize(struct _GdkDisplay,button_window,16,9,43469)
CheckOffset(struct _GdkDisplay,button_window,48,9,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,9,43470)
CheckOffset(struct _GdkDisplay,button_number,64,9,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,9,43471)
CheckOffset(struct _GdkDisplay,double_click_time,72,9,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,8,9,43516)
CheckOffset(struct _GdkDisplay,core_pointer,80,9,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,8,9,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,88,9,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,9,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,100,9,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,9,43540)
CheckOffset(struct _GdkDisplay,button_x,104,9,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,9,43541)
CheckOffset(struct _GdkDisplay,button_y,112,9,43541)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDisplay,80, 12693, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,4,6,43466)
CheckOffset(struct _GdkDisplay,queued_events,12,6,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,4,6,43467)
CheckOffset(struct _GdkDisplay,queued_tail,16,6,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,6,43468)
CheckOffset(struct _GdkDisplay,button_click_time,20,6,43468)
CheckMemberSize(struct _GdkDisplay,button_window,8,6,43469)
CheckOffset(struct _GdkDisplay,button_window,28,6,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,6,43470)
CheckOffset(struct _GdkDisplay,button_number,36,6,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,6,43471)
CheckOffset(struct _GdkDisplay,double_click_time,44,6,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,4,6,43516)
CheckOffset(struct _GdkDisplay,core_pointer,48,6,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,4,6,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,52,6,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,6,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,60,6,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,6,43540)
CheckOffset(struct _GdkDisplay,button_x,64,6,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,6,43541)
CheckOffset(struct _GdkDisplay,button_y,72,6,43541)
#elif defined __ia64__
CheckTypeSize(struct _GdkDisplay,120, 12693, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,8,3,43466)
CheckOffset(struct _GdkDisplay,queued_events,24,3,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,8,3,43467)
CheckOffset(struct _GdkDisplay,queued_tail,32,3,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,3,43468)
CheckOffset(struct _GdkDisplay,button_click_time,40,3,43468)
CheckMemberSize(struct _GdkDisplay,button_window,16,3,43469)
CheckOffset(struct _GdkDisplay,button_window,48,3,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,3,43470)
CheckOffset(struct _GdkDisplay,button_number,64,3,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,3,43471)
CheckOffset(struct _GdkDisplay,double_click_time,72,3,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,8,3,43516)
CheckOffset(struct _GdkDisplay,core_pointer,80,3,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,8,3,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,88,3,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,3,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,100,3,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,3,43540)
CheckOffset(struct _GdkDisplay,button_x,104,3,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,3,43541)
CheckOffset(struct _GdkDisplay,button_y,112,3,43541)
#elif defined __i386__
CheckTypeSize(struct _GdkDisplay,80, 12693, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplay,queued_events,4,2,43466)
CheckOffset(struct _GdkDisplay,queued_events,12,2,43466)
CheckMemberSize(struct _GdkDisplay,queued_tail,4,2,43467)
CheckOffset(struct _GdkDisplay,queued_tail,16,2,43467)
CheckMemberSize(struct _GdkDisplay,button_click_time,8,2,43468)
CheckOffset(struct _GdkDisplay,button_click_time,20,2,43468)
CheckMemberSize(struct _GdkDisplay,button_window,8,2,43469)
CheckOffset(struct _GdkDisplay,button_window,28,2,43469)
CheckMemberSize(struct _GdkDisplay,button_number,8,2,43470)
CheckOffset(struct _GdkDisplay,button_number,36,2,43470)
CheckMemberSize(struct _GdkDisplay,double_click_time,4,2,43471)
CheckOffset(struct _GdkDisplay,double_click_time,44,2,43471)
CheckMemberSize(struct _GdkDisplay,core_pointer,4,2,43516)
CheckOffset(struct _GdkDisplay,core_pointer,48,2,43516)
CheckMemberSize(struct _GdkDisplay,pointer_hooks,4,2,43537)
CheckOffset(struct _GdkDisplay,pointer_hooks,52,2,43537)
CheckMemberSize(struct _GdkDisplay,double_click_distance,4,2,43539)
CheckOffset(struct _GdkDisplay,double_click_distance,60,2,43539)
CheckMemberSize(struct _GdkDisplay,button_x,8,2,43540)
CheckOffset(struct _GdkDisplay,button_x,64,2,43540)
CheckMemberSize(struct _GdkDisplay,button_y,8,2,43541)
CheckOffset(struct _GdkDisplay,button_y,72,2,43541)
#elif 1
CheckTypeSize(struct _GdkDisplay,0, 12693, 1, , NULL, 0, NULL)
CheckBitField(struct _GdkDisplay,closed,1,1,43538)
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkDevice,72, 12697, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,8,12,43473)
CheckOffset(struct _GdkDevice,name,24,12,43473)
CheckMemberSize(struct _GdkDevice,source,4,12,43478)
CheckOffset(struct _GdkDevice,source,32,12,43478)
CheckMemberSize(struct _GdkDevice,mode,4,12,43482)
CheckOffset(struct _GdkDevice,mode,36,12,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,12,43483)
CheckOffset(struct _GdkDevice,has_cursor,40,12,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,12,43484)
CheckOffset(struct _GdkDevice,num_axes,44,12,43484)
CheckMemberSize(struct _GdkDevice,axes,8,12,43496)
CheckOffset(struct _GdkDevice,axes,48,12,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,12,43497)
CheckOffset(struct _GdkDevice,num_keys,56,12,43497)
CheckMemberSize(struct _GdkDevice,keys,8,12,43515)
CheckOffset(struct _GdkDevice,keys,64,12,43515)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDevice,72, 12697, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,8,11,43473)
CheckOffset(struct _GdkDevice,name,24,11,43473)
CheckMemberSize(struct _GdkDevice,source,4,11,43478)
CheckOffset(struct _GdkDevice,source,32,11,43478)
CheckMemberSize(struct _GdkDevice,mode,4,11,43482)
CheckOffset(struct _GdkDevice,mode,36,11,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,11,43483)
CheckOffset(struct _GdkDevice,has_cursor,40,11,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,11,43484)
CheckOffset(struct _GdkDevice,num_axes,44,11,43484)
CheckMemberSize(struct _GdkDevice,axes,8,11,43496)
CheckOffset(struct _GdkDevice,axes,48,11,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,11,43497)
CheckOffset(struct _GdkDevice,num_keys,56,11,43497)
CheckMemberSize(struct _GdkDevice,keys,8,11,43515)
CheckOffset(struct _GdkDevice,keys,64,11,43515)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDevice,44, 12697, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,4,10,43473)
CheckOffset(struct _GdkDevice,name,12,10,43473)
CheckMemberSize(struct _GdkDevice,source,4,10,43478)
CheckOffset(struct _GdkDevice,source,16,10,43478)
CheckMemberSize(struct _GdkDevice,mode,4,10,43482)
CheckOffset(struct _GdkDevice,mode,20,10,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,10,43483)
CheckOffset(struct _GdkDevice,has_cursor,24,10,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,10,43484)
CheckOffset(struct _GdkDevice,num_axes,28,10,43484)
CheckMemberSize(struct _GdkDevice,axes,4,10,43496)
CheckOffset(struct _GdkDevice,axes,32,10,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,10,43497)
CheckOffset(struct _GdkDevice,num_keys,36,10,43497)
CheckMemberSize(struct _GdkDevice,keys,4,10,43515)
CheckOffset(struct _GdkDevice,keys,40,10,43515)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDevice,72, 12697, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,8,9,43473)
CheckOffset(struct _GdkDevice,name,24,9,43473)
CheckMemberSize(struct _GdkDevice,source,4,9,43478)
CheckOffset(struct _GdkDevice,source,32,9,43478)
CheckMemberSize(struct _GdkDevice,mode,4,9,43482)
CheckOffset(struct _GdkDevice,mode,36,9,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,9,43483)
CheckOffset(struct _GdkDevice,has_cursor,40,9,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,9,43484)
CheckOffset(struct _GdkDevice,num_axes,44,9,43484)
CheckMemberSize(struct _GdkDevice,axes,8,9,43496)
CheckOffset(struct _GdkDevice,axes,48,9,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,9,43497)
CheckOffset(struct _GdkDevice,num_keys,56,9,43497)
CheckMemberSize(struct _GdkDevice,keys,8,9,43515)
CheckOffset(struct _GdkDevice,keys,64,9,43515)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDevice,44, 12697, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,4,6,43473)
CheckOffset(struct _GdkDevice,name,12,6,43473)
CheckMemberSize(struct _GdkDevice,source,4,6,43478)
CheckOffset(struct _GdkDevice,source,16,6,43478)
CheckMemberSize(struct _GdkDevice,mode,4,6,43482)
CheckOffset(struct _GdkDevice,mode,20,6,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,6,43483)
CheckOffset(struct _GdkDevice,has_cursor,24,6,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,6,43484)
CheckOffset(struct _GdkDevice,num_axes,28,6,43484)
CheckMemberSize(struct _GdkDevice,axes,4,6,43496)
CheckOffset(struct _GdkDevice,axes,32,6,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,6,43497)
CheckOffset(struct _GdkDevice,num_keys,36,6,43497)
CheckMemberSize(struct _GdkDevice,keys,4,6,43515)
CheckOffset(struct _GdkDevice,keys,40,6,43515)
#elif defined __ia64__
CheckTypeSize(struct _GdkDevice,72, 12697, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,8,3,43473)
CheckOffset(struct _GdkDevice,name,24,3,43473)
CheckMemberSize(struct _GdkDevice,source,4,3,43478)
CheckOffset(struct _GdkDevice,source,32,3,43478)
CheckMemberSize(struct _GdkDevice,mode,4,3,43482)
CheckOffset(struct _GdkDevice,mode,36,3,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,3,43483)
CheckOffset(struct _GdkDevice,has_cursor,40,3,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,3,43484)
CheckOffset(struct _GdkDevice,num_axes,44,3,43484)
CheckMemberSize(struct _GdkDevice,axes,8,3,43496)
CheckOffset(struct _GdkDevice,axes,48,3,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,3,43497)
CheckOffset(struct _GdkDevice,num_keys,56,3,43497)
CheckMemberSize(struct _GdkDevice,keys,8,3,43515)
CheckOffset(struct _GdkDevice,keys,64,3,43515)
#elif defined __i386__
CheckTypeSize(struct _GdkDevice,44, 12697, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDevice,name,4,2,43473)
CheckOffset(struct _GdkDevice,name,12,2,43473)
CheckMemberSize(struct _GdkDevice,source,4,2,43478)
CheckOffset(struct _GdkDevice,source,16,2,43478)
CheckMemberSize(struct _GdkDevice,mode,4,2,43482)
CheckOffset(struct _GdkDevice,mode,20,2,43482)
CheckMemberSize(struct _GdkDevice,has_cursor,4,2,43483)
CheckOffset(struct _GdkDevice,has_cursor,24,2,43483)
CheckMemberSize(struct _GdkDevice,num_axes,4,2,43484)
CheckOffset(struct _GdkDevice,num_axes,28,2,43484)
CheckMemberSize(struct _GdkDevice,axes,4,2,43496)
CheckOffset(struct _GdkDevice,axes,32,2,43496)
CheckMemberSize(struct _GdkDevice,num_keys,4,2,43497)
CheckOffset(struct _GdkDevice,num_keys,36,2,43497)
CheckMemberSize(struct _GdkDevice,keys,4,2,43515)
CheckOffset(struct _GdkDevice,keys,40,2,43515)
#elif 1
CheckTypeSize(struct _GdkDevice,0, 12697, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDevice on All\n");
CheckOffset(struct _GdkDevice,parent_instance,0,1,43472)
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
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,12,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,12,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,12,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,12,43495)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,11,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,11,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,11,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,11,43495)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,10,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,10,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,10,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,10,43495)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,9,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,9,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,9,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,9,43495)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,6,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,6,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,6,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,6,43495)
#elif defined __ia64__
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,3,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,3,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,3,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,3,43495)
#elif defined __i386__
CheckTypeSize(struct _GdkDeviceAxis,20, 12702, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceAxis,min,8,2,43494)
CheckOffset(struct _GdkDeviceAxis,min,4,2,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,2,43495)
CheckOffset(struct _GdkDeviceAxis,max,12,2,43495)
#elif 1
CheckTypeSize(struct _GdkDeviceAxis,0, 12702, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDeviceAxis on All\n");
CheckOffset(struct _GdkDeviceAxis,use,0,1,43493)
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
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,12,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,12,43514)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,11,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,11,43514)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,10,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,10,43514)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,9,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,9,43514)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,6,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,6,43514)
#elif defined __ia64__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,3,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,3,43514)
#elif defined __i386__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,2,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,2,43514)
#elif 1
CheckTypeSize(struct _GdkDeviceKey,0, 12707, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDeviceKey on All\n");
CheckOffset(struct _GdkDeviceKey,keyval,0,1,43498)
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
CheckTypeSize(struct _GdkDisplayPointerHooks,24, 12714, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,8,12,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,8,12,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,8,12,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,16,12,43536)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDisplayPointerHooks,24, 12714, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,8,11,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,8,11,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,8,11,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,16,11,43536)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDisplayPointerHooks,12, 12714, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,4,10,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,4,10,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,4,10,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,8,10,43536)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDisplayPointerHooks,24, 12714, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,8,9,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,8,9,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,8,9,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,16,9,43536)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDisplayPointerHooks,12, 12714, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,4,6,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,4,6,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,4,6,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,8,6,43536)
#elif defined __ia64__
CheckTypeSize(struct _GdkDisplayPointerHooks,24, 12714, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,8,3,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,8,3,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,8,3,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,16,3,43536)
#elif defined __i386__
CheckTypeSize(struct _GdkDisplayPointerHooks,12, 12714, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,4,2,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,4,2,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,4,2,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,8,2,43536)
#elif 1
CheckTypeSize(struct _GdkDisplayPointerHooks,0, 12714, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDisplayPointerHooks on All\n");
CheckOffset(struct _GdkDisplayPointerHooks,get_pointer,0,1,43526)
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
CheckTypeSize(struct _GdkCursor,8, 12731, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,12,43644)
CheckOffset(struct _GdkCursor,ref_count,4,12,43644)
#elif defined __x86_64__
CheckTypeSize(struct _GdkCursor,8, 12731, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,11,43644)
CheckOffset(struct _GdkCursor,ref_count,4,11,43644)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkCursor,8, 12731, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,10,43644)
CheckOffset(struct _GdkCursor,ref_count,4,10,43644)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkCursor,8, 12731, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,9,43644)
CheckOffset(struct _GdkCursor,ref_count,4,9,43644)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkCursor,8, 12731, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,6,43644)
CheckOffset(struct _GdkCursor,ref_count,4,6,43644)
#elif defined __ia64__
CheckTypeSize(struct _GdkCursor,8, 12731, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,3,43644)
CheckOffset(struct _GdkCursor,ref_count,4,3,43644)
#elif defined __i386__
CheckTypeSize(struct _GdkCursor,8, 12731, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkCursor,ref_count,4,2,43644)
CheckOffset(struct _GdkCursor,ref_count,4,2,43644)
#elif 1
CheckTypeSize(struct _GdkCursor,0, 12731, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkCursor on All\n");
CheckOffset(struct _GdkCursor,type,0,1,43643)
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
CheckTypeSize(struct _GdkKeymap,32, 12736, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,8,12,43646)
CheckOffset(struct _GdkKeymap,display,24,12,43646)
#elif defined __x86_64__
CheckTypeSize(struct _GdkKeymap,32, 12736, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,8,11,43646)
CheckOffset(struct _GdkKeymap,display,24,11,43646)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkKeymap,16, 12736, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,4,10,43646)
CheckOffset(struct _GdkKeymap,display,12,10,43646)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkKeymap,32, 12736, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,8,9,43646)
CheckOffset(struct _GdkKeymap,display,24,9,43646)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkKeymap,16, 12736, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,4,6,43646)
CheckOffset(struct _GdkKeymap,display,12,6,43646)
#elif defined __ia64__
CheckTypeSize(struct _GdkKeymap,32, 12736, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,8,3,43646)
CheckOffset(struct _GdkKeymap,display,24,3,43646)
#elif defined __i386__
CheckTypeSize(struct _GdkKeymap,16, 12736, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymap,display,4,2,43646)
CheckOffset(struct _GdkKeymap,display,12,2,43646)
#elif 1
CheckTypeSize(struct _GdkKeymap,0, 12736, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkKeymap on All\n");
CheckOffset(struct _GdkKeymap,parent_instance,0,1,43645)
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
CheckTypeSize(union _GdkEvent,88, 12746, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on S390X\n");
CheckOffset(union _GdkEvent,type,0,12,43686)
CheckOffset(union _GdkEvent,any,0,12,43690)
CheckOffset(union _GdkEvent,expose,0,12,43701)
CheckOffset(union _GdkEvent,no_expose,0,12,43705)
CheckOffset(union _GdkEvent,visibility,0,12,43713)
CheckOffset(union _GdkEvent,motion,0,12,43726)
CheckOffset(union _GdkEvent,button,0,12,43739)
CheckOffset(union _GdkEvent,scroll,0,12,43755)
CheckOffset(union _GdkEvent,key,0,12,43766)
CheckOffset(union _GdkEvent,crossing,0,12,43789)
CheckOffset(union _GdkEvent,focus_change,0,12,43794)
CheckOffset(union _GdkEvent,configure,0,12,43802)
CheckOffset(union _GdkEvent,property,0,12,43809)
CheckOffset(union _GdkEvent,selection,0,12,43818)
CheckOffset(union _GdkEvent,owner_change,0,12,43830)
CheckOffset(union _GdkEvent,proximity,0,12,43836)
CheckOffset(union _GdkEvent,client,0,12,43846)
CheckOffset(union _GdkEvent,dnd,0,12,43878)
CheckOffset(union _GdkEvent,window_state,0,12,43891)
CheckOffset(union _GdkEvent,setting,0,12,43900)
#elif defined __x86_64__
CheckTypeSize(union _GdkEvent,88, 12746, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on x86-64\n");
CheckOffset(union _GdkEvent,type,0,11,43686)
CheckOffset(union _GdkEvent,any,0,11,43690)
CheckOffset(union _GdkEvent,expose,0,11,43701)
CheckOffset(union _GdkEvent,no_expose,0,11,43705)
CheckOffset(union _GdkEvent,visibility,0,11,43713)
CheckOffset(union _GdkEvent,motion,0,11,43726)
CheckOffset(union _GdkEvent,button,0,11,43739)
CheckOffset(union _GdkEvent,scroll,0,11,43755)
CheckOffset(union _GdkEvent,key,0,11,43766)
CheckOffset(union _GdkEvent,crossing,0,11,43789)
CheckOffset(union _GdkEvent,focus_change,0,11,43794)
CheckOffset(union _GdkEvent,configure,0,11,43802)
CheckOffset(union _GdkEvent,property,0,11,43809)
CheckOffset(union _GdkEvent,selection,0,11,43818)
CheckOffset(union _GdkEvent,owner_change,0,11,43830)
CheckOffset(union _GdkEvent,proximity,0,11,43836)
CheckOffset(union _GdkEvent,client,0,11,43846)
CheckOffset(union _GdkEvent,dnd,0,11,43878)
CheckOffset(union _GdkEvent,window_state,0,11,43891)
CheckOffset(union _GdkEvent,setting,0,11,43900)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union _GdkEvent,72, 12746, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on S390\n");
CheckOffset(union _GdkEvent,type,0,10,43686)
CheckOffset(union _GdkEvent,any,0,10,43690)
CheckOffset(union _GdkEvent,expose,0,10,43701)
CheckOffset(union _GdkEvent,no_expose,0,10,43705)
CheckOffset(union _GdkEvent,visibility,0,10,43713)
CheckOffset(union _GdkEvent,motion,0,10,43726)
CheckOffset(union _GdkEvent,button,0,10,43739)
CheckOffset(union _GdkEvent,scroll,0,10,43755)
CheckOffset(union _GdkEvent,key,0,10,43766)
CheckOffset(union _GdkEvent,crossing,0,10,43789)
CheckOffset(union _GdkEvent,focus_change,0,10,43794)
CheckOffset(union _GdkEvent,configure,0,10,43802)
CheckOffset(union _GdkEvent,property,0,10,43809)
CheckOffset(union _GdkEvent,selection,0,10,43818)
CheckOffset(union _GdkEvent,owner_change,0,10,43830)
CheckOffset(union _GdkEvent,proximity,0,10,43836)
CheckOffset(union _GdkEvent,client,0,10,43846)
CheckOffset(union _GdkEvent,dnd,0,10,43878)
CheckOffset(union _GdkEvent,window_state,0,10,43891)
CheckOffset(union _GdkEvent,setting,0,10,43900)
#elif defined __powerpc64__
CheckTypeSize(union _GdkEvent,88, 12746, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on PPC64\n");
CheckOffset(union _GdkEvent,type,0,9,43686)
CheckOffset(union _GdkEvent,any,0,9,43690)
CheckOffset(union _GdkEvent,expose,0,9,43701)
CheckOffset(union _GdkEvent,no_expose,0,9,43705)
CheckOffset(union _GdkEvent,visibility,0,9,43713)
CheckOffset(union _GdkEvent,motion,0,9,43726)
CheckOffset(union _GdkEvent,button,0,9,43739)
CheckOffset(union _GdkEvent,scroll,0,9,43755)
CheckOffset(union _GdkEvent,key,0,9,43766)
CheckOffset(union _GdkEvent,crossing,0,9,43789)
CheckOffset(union _GdkEvent,focus_change,0,9,43794)
CheckOffset(union _GdkEvent,configure,0,9,43802)
CheckOffset(union _GdkEvent,property,0,9,43809)
CheckOffset(union _GdkEvent,selection,0,9,43818)
CheckOffset(union _GdkEvent,owner_change,0,9,43830)
CheckOffset(union _GdkEvent,proximity,0,9,43836)
CheckOffset(union _GdkEvent,client,0,9,43846)
CheckOffset(union _GdkEvent,dnd,0,9,43878)
CheckOffset(union _GdkEvent,window_state,0,9,43891)
CheckOffset(union _GdkEvent,setting,0,9,43900)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union _GdkEvent,72, 12746, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on PPC32\n");
CheckOffset(union _GdkEvent,type,0,6,43686)
CheckOffset(union _GdkEvent,any,0,6,43690)
CheckOffset(union _GdkEvent,expose,0,6,43701)
CheckOffset(union _GdkEvent,no_expose,0,6,43705)
CheckOffset(union _GdkEvent,visibility,0,6,43713)
CheckOffset(union _GdkEvent,motion,0,6,43726)
CheckOffset(union _GdkEvent,button,0,6,43739)
CheckOffset(union _GdkEvent,scroll,0,6,43755)
CheckOffset(union _GdkEvent,key,0,6,43766)
CheckOffset(union _GdkEvent,crossing,0,6,43789)
CheckOffset(union _GdkEvent,focus_change,0,6,43794)
CheckOffset(union _GdkEvent,configure,0,6,43802)
CheckOffset(union _GdkEvent,property,0,6,43809)
CheckOffset(union _GdkEvent,selection,0,6,43818)
CheckOffset(union _GdkEvent,owner_change,0,6,43830)
CheckOffset(union _GdkEvent,proximity,0,6,43836)
CheckOffset(union _GdkEvent,client,0,6,43846)
CheckOffset(union _GdkEvent,dnd,0,6,43878)
CheckOffset(union _GdkEvent,window_state,0,6,43891)
CheckOffset(union _GdkEvent,setting,0,6,43900)
#elif defined __ia64__
CheckTypeSize(union _GdkEvent,88, 12746, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on IA64\n");
CheckOffset(union _GdkEvent,type,0,3,43686)
CheckOffset(union _GdkEvent,any,0,3,43690)
CheckOffset(union _GdkEvent,expose,0,3,43701)
CheckOffset(union _GdkEvent,no_expose,0,3,43705)
CheckOffset(union _GdkEvent,visibility,0,3,43713)
CheckOffset(union _GdkEvent,motion,0,3,43726)
CheckOffset(union _GdkEvent,button,0,3,43739)
CheckOffset(union _GdkEvent,scroll,0,3,43755)
CheckOffset(union _GdkEvent,key,0,3,43766)
CheckOffset(union _GdkEvent,crossing,0,3,43789)
CheckOffset(union _GdkEvent,focus_change,0,3,43794)
CheckOffset(union _GdkEvent,configure,0,3,43802)
CheckOffset(union _GdkEvent,property,0,3,43809)
CheckOffset(union _GdkEvent,selection,0,3,43818)
CheckOffset(union _GdkEvent,owner_change,0,3,43830)
CheckOffset(union _GdkEvent,proximity,0,3,43836)
CheckOffset(union _GdkEvent,client,0,3,43846)
CheckOffset(union _GdkEvent,dnd,0,3,43878)
CheckOffset(union _GdkEvent,window_state,0,3,43891)
CheckOffset(union _GdkEvent,setting,0,3,43900)
#elif defined __i386__
CheckTypeSize(union _GdkEvent,68, 12746, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on IA32\n");
CheckOffset(union _GdkEvent,type,0,2,43686)
CheckOffset(union _GdkEvent,any,0,2,43690)
CheckOffset(union _GdkEvent,expose,0,2,43701)
CheckOffset(union _GdkEvent,no_expose,0,2,43705)
CheckOffset(union _GdkEvent,visibility,0,2,43713)
CheckOffset(union _GdkEvent,motion,0,2,43726)
CheckOffset(union _GdkEvent,button,0,2,43739)
CheckOffset(union _GdkEvent,scroll,0,2,43755)
CheckOffset(union _GdkEvent,key,0,2,43766)
CheckOffset(union _GdkEvent,crossing,0,2,43789)
CheckOffset(union _GdkEvent,focus_change,0,2,43794)
CheckOffset(union _GdkEvent,configure,0,2,43802)
CheckOffset(union _GdkEvent,property,0,2,43809)
CheckOffset(union _GdkEvent,selection,0,2,43818)
CheckOffset(union _GdkEvent,owner_change,0,2,43830)
CheckOffset(union _GdkEvent,proximity,0,2,43836)
CheckOffset(union _GdkEvent,client,0,2,43846)
CheckOffset(union _GdkEvent,dnd,0,2,43878)
CheckOffset(union _GdkEvent,window_state,0,2,43891)
CheckOffset(union _GdkEvent,setting,0,2,43900)
#elif 1
CheckTypeSize(union _GdkEvent,0, 12746, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEvent on All\n");
CheckOffset(union _GdkEvent,type,0,1,43686)
CheckOffset(union _GdkEvent,any,0,1,43690)
CheckOffset(union _GdkEvent,expose,0,1,43701)
CheckOffset(union _GdkEvent,no_expose,0,1,43705)
CheckOffset(union _GdkEvent,visibility,0,1,43713)
CheckOffset(union _GdkEvent,motion,0,1,43726)
CheckOffset(union _GdkEvent,button,0,1,43739)
CheckOffset(union _GdkEvent,scroll,0,1,43755)
CheckOffset(union _GdkEvent,key,0,1,43766)
CheckOffset(union _GdkEvent,crossing,0,1,43789)
CheckOffset(union _GdkEvent,focus_change,0,1,43794)
CheckOffset(union _GdkEvent,configure,0,1,43802)
CheckOffset(union _GdkEvent,property,0,1,43809)
CheckOffset(union _GdkEvent,selection,0,1,43818)
CheckOffset(union _GdkEvent,owner_change,0,1,43830)
CheckOffset(union _GdkEvent,proximity,0,1,43836)
CheckOffset(union _GdkEvent,client,0,1,43846)
CheckOffset(union _GdkEvent,dnd,0,1,43878)
CheckOffset(union _GdkEvent,window_state,0,1,43891)
CheckOffset(union _GdkEvent,setting,0,1,43900)
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
CheckTypeSize(struct _GdkEventAny,24, 12749, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,8,12,43688)
CheckOffset(struct _GdkEventAny,window,8,12,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,12,43689)
CheckOffset(struct _GdkEventAny,send_event,16,12,43689)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventAny,24, 12749, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,8,11,43688)
CheckOffset(struct _GdkEventAny,window,8,11,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,11,43689)
CheckOffset(struct _GdkEventAny,send_event,16,11,43689)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventAny,12, 12749, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,4,10,43688)
CheckOffset(struct _GdkEventAny,window,4,10,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,10,43689)
CheckOffset(struct _GdkEventAny,send_event,8,10,43689)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventAny,24, 12749, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,8,9,43688)
CheckOffset(struct _GdkEventAny,window,8,9,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,9,43689)
CheckOffset(struct _GdkEventAny,send_event,16,9,43689)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventAny,12, 12749, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,4,6,43688)
CheckOffset(struct _GdkEventAny,window,4,6,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,6,43689)
CheckOffset(struct _GdkEventAny,send_event,8,6,43689)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventAny,24, 12749, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,8,3,43688)
CheckOffset(struct _GdkEventAny,window,8,3,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,3,43689)
CheckOffset(struct _GdkEventAny,send_event,16,3,43689)
#elif defined __i386__
CheckTypeSize(struct _GdkEventAny,12, 12749, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventAny,window,4,2,43688)
CheckOffset(struct _GdkEventAny,window,4,2,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,2,43689)
CheckOffset(struct _GdkEventAny,send_event,8,2,43689)
#elif 1
CheckTypeSize(struct _GdkEventAny,0, 12749, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventAny on All\n");
CheckOffset(struct _GdkEventAny,type,0,1,43687)
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
CheckTypeSize(struct _GdkEventExpose,56, 12751, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,8,12,43692)
CheckOffset(struct _GdkEventExpose,window,8,12,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,12,43693)
CheckOffset(struct _GdkEventExpose,send_event,16,12,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,12,43698)
CheckOffset(struct _GdkEventExpose,area,20,12,43698)
CheckMemberSize(struct _GdkEventExpose,region,8,12,43699)
CheckOffset(struct _GdkEventExpose,region,40,12,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,12,43700)
CheckOffset(struct _GdkEventExpose,count,48,12,43700)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventExpose,56, 12751, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,8,11,43692)
CheckOffset(struct _GdkEventExpose,window,8,11,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,11,43693)
CheckOffset(struct _GdkEventExpose,send_event,16,11,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,11,43698)
CheckOffset(struct _GdkEventExpose,area,20,11,43698)
CheckMemberSize(struct _GdkEventExpose,region,8,11,43699)
CheckOffset(struct _GdkEventExpose,region,40,11,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,11,43700)
CheckOffset(struct _GdkEventExpose,count,48,11,43700)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventExpose,36, 12751, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,4,10,43692)
CheckOffset(struct _GdkEventExpose,window,4,10,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,10,43693)
CheckOffset(struct _GdkEventExpose,send_event,8,10,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,10,43698)
CheckOffset(struct _GdkEventExpose,area,12,10,43698)
CheckMemberSize(struct _GdkEventExpose,region,4,10,43699)
CheckOffset(struct _GdkEventExpose,region,28,10,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,10,43700)
CheckOffset(struct _GdkEventExpose,count,32,10,43700)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventExpose,56, 12751, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,8,9,43692)
CheckOffset(struct _GdkEventExpose,window,8,9,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,9,43693)
CheckOffset(struct _GdkEventExpose,send_event,16,9,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,9,43698)
CheckOffset(struct _GdkEventExpose,area,20,9,43698)
CheckMemberSize(struct _GdkEventExpose,region,8,9,43699)
CheckOffset(struct _GdkEventExpose,region,40,9,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,9,43700)
CheckOffset(struct _GdkEventExpose,count,48,9,43700)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventExpose,36, 12751, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,4,6,43692)
CheckOffset(struct _GdkEventExpose,window,4,6,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,6,43693)
CheckOffset(struct _GdkEventExpose,send_event,8,6,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,6,43698)
CheckOffset(struct _GdkEventExpose,area,12,6,43698)
CheckMemberSize(struct _GdkEventExpose,region,4,6,43699)
CheckOffset(struct _GdkEventExpose,region,28,6,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,6,43700)
CheckOffset(struct _GdkEventExpose,count,32,6,43700)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventExpose,56, 12751, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,8,3,43692)
CheckOffset(struct _GdkEventExpose,window,8,3,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,3,43693)
CheckOffset(struct _GdkEventExpose,send_event,16,3,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,3,43698)
CheckOffset(struct _GdkEventExpose,area,20,3,43698)
CheckMemberSize(struct _GdkEventExpose,region,8,3,43699)
CheckOffset(struct _GdkEventExpose,region,40,3,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,3,43700)
CheckOffset(struct _GdkEventExpose,count,48,3,43700)
#elif defined __i386__
CheckTypeSize(struct _GdkEventExpose,36, 12751, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventExpose,window,4,2,43692)
CheckOffset(struct _GdkEventExpose,window,4,2,43692)
CheckMemberSize(struct _GdkEventExpose,send_event,1,2,43693)
CheckOffset(struct _GdkEventExpose,send_event,8,2,43693)
CheckMemberSize(struct _GdkEventExpose,area,16,2,43698)
CheckOffset(struct _GdkEventExpose,area,12,2,43698)
CheckMemberSize(struct _GdkEventExpose,region,4,2,43699)
CheckOffset(struct _GdkEventExpose,region,28,2,43699)
CheckMemberSize(struct _GdkEventExpose,count,4,2,43700)
CheckOffset(struct _GdkEventExpose,count,32,2,43700)
#elif 1
CheckTypeSize(struct _GdkEventExpose,0, 12751, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventExpose on All\n");
CheckOffset(struct _GdkEventExpose,type,0,1,43691)
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkRectangle,16, 12752, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,12,43695)
CheckOffset(struct _GdkRectangle,y,4,12,43695)
CheckMemberSize(struct _GdkRectangle,width,4,12,43696)
CheckOffset(struct _GdkRectangle,width,8,12,43696)
CheckMemberSize(struct _GdkRectangle,height,4,12,43697)
CheckOffset(struct _GdkRectangle,height,12,12,43697)
#elif defined __x86_64__
CheckTypeSize(struct _GdkRectangle,16, 12752, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,11,43695)
CheckOffset(struct _GdkRectangle,y,4,11,43695)
CheckMemberSize(struct _GdkRectangle,width,4,11,43696)
CheckOffset(struct _GdkRectangle,width,8,11,43696)
CheckMemberSize(struct _GdkRectangle,height,4,11,43697)
CheckOffset(struct _GdkRectangle,height,12,11,43697)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkRectangle,16, 12752, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,10,43695)
CheckOffset(struct _GdkRectangle,y,4,10,43695)
CheckMemberSize(struct _GdkRectangle,width,4,10,43696)
CheckOffset(struct _GdkRectangle,width,8,10,43696)
CheckMemberSize(struct _GdkRectangle,height,4,10,43697)
CheckOffset(struct _GdkRectangle,height,12,10,43697)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkRectangle,16, 12752, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,9,43695)
CheckOffset(struct _GdkRectangle,y,4,9,43695)
CheckMemberSize(struct _GdkRectangle,width,4,9,43696)
CheckOffset(struct _GdkRectangle,width,8,9,43696)
CheckMemberSize(struct _GdkRectangle,height,4,9,43697)
CheckOffset(struct _GdkRectangle,height,12,9,43697)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkRectangle,16, 12752, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,6,43695)
CheckOffset(struct _GdkRectangle,y,4,6,43695)
CheckMemberSize(struct _GdkRectangle,width,4,6,43696)
CheckOffset(struct _GdkRectangle,width,8,6,43696)
CheckMemberSize(struct _GdkRectangle,height,4,6,43697)
CheckOffset(struct _GdkRectangle,height,12,6,43697)
#elif defined __ia64__
CheckTypeSize(struct _GdkRectangle,16, 12752, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,3,43695)
CheckOffset(struct _GdkRectangle,y,4,3,43695)
CheckMemberSize(struct _GdkRectangle,width,4,3,43696)
CheckOffset(struct _GdkRectangle,width,8,3,43696)
CheckMemberSize(struct _GdkRectangle,height,4,3,43697)
CheckOffset(struct _GdkRectangle,height,12,3,43697)
#elif defined __i386__
CheckTypeSize(struct _GdkRectangle,16, 12752, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRectangle,y,4,2,43695)
CheckOffset(struct _GdkRectangle,y,4,2,43695)
CheckMemberSize(struct _GdkRectangle,width,4,2,43696)
CheckOffset(struct _GdkRectangle,width,8,2,43696)
CheckMemberSize(struct _GdkRectangle,height,4,2,43697)
CheckOffset(struct _GdkRectangle,height,12,2,43697)
#elif 1
CheckTypeSize(struct _GdkRectangle,0, 12752, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkRectangle on All\n");
CheckOffset(struct _GdkRectangle,x,0,1,43694)
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
CheckTypeSize(struct _GdkEventNoExpose,24, 12758, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,8,12,43703)
CheckOffset(struct _GdkEventNoExpose,window,8,12,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,12,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,16,12,43704)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventNoExpose,24, 12758, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,8,11,43703)
CheckOffset(struct _GdkEventNoExpose,window,8,11,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,11,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,16,11,43704)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventNoExpose,12, 12758, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,4,10,43703)
CheckOffset(struct _GdkEventNoExpose,window,4,10,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,10,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,8,10,43704)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventNoExpose,24, 12758, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,8,9,43703)
CheckOffset(struct _GdkEventNoExpose,window,8,9,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,9,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,16,9,43704)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventNoExpose,12, 12758, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,4,6,43703)
CheckOffset(struct _GdkEventNoExpose,window,4,6,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,6,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,8,6,43704)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventNoExpose,24, 12758, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,8,3,43703)
CheckOffset(struct _GdkEventNoExpose,window,8,3,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,3,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,16,3,43704)
#elif defined __i386__
CheckTypeSize(struct _GdkEventNoExpose,12, 12758, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventNoExpose,window,4,2,43703)
CheckOffset(struct _GdkEventNoExpose,window,4,2,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,2,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,8,2,43704)
#elif 1
CheckTypeSize(struct _GdkEventNoExpose,0, 12758, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventNoExpose on All\n");
CheckOffset(struct _GdkEventNoExpose,type,0,1,43702)
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
CheckTypeSize(struct _GdkEventVisibility,24, 12760, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,8,12,43707)
CheckOffset(struct _GdkEventVisibility,window,8,12,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,12,43708)
CheckOffset(struct _GdkEventVisibility,send_event,16,12,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,12,43712)
CheckOffset(struct _GdkEventVisibility,state,20,12,43712)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventVisibility,24, 12760, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,8,11,43707)
CheckOffset(struct _GdkEventVisibility,window,8,11,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,11,43708)
CheckOffset(struct _GdkEventVisibility,send_event,16,11,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,11,43712)
CheckOffset(struct _GdkEventVisibility,state,20,11,43712)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventVisibility,16, 12760, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,4,10,43707)
CheckOffset(struct _GdkEventVisibility,window,4,10,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,10,43708)
CheckOffset(struct _GdkEventVisibility,send_event,8,10,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,10,43712)
CheckOffset(struct _GdkEventVisibility,state,12,10,43712)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventVisibility,24, 12760, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,8,9,43707)
CheckOffset(struct _GdkEventVisibility,window,8,9,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,9,43708)
CheckOffset(struct _GdkEventVisibility,send_event,16,9,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,9,43712)
CheckOffset(struct _GdkEventVisibility,state,20,9,43712)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventVisibility,16, 12760, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,4,6,43707)
CheckOffset(struct _GdkEventVisibility,window,4,6,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,6,43708)
CheckOffset(struct _GdkEventVisibility,send_event,8,6,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,6,43712)
CheckOffset(struct _GdkEventVisibility,state,12,6,43712)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventVisibility,24, 12760, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,8,3,43707)
CheckOffset(struct _GdkEventVisibility,window,8,3,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,3,43708)
CheckOffset(struct _GdkEventVisibility,send_event,16,3,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,3,43712)
CheckOffset(struct _GdkEventVisibility,state,20,3,43712)
#elif defined __i386__
CheckTypeSize(struct _GdkEventVisibility,16, 12760, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventVisibility,window,4,2,43707)
CheckOffset(struct _GdkEventVisibility,window,4,2,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,2,43708)
CheckOffset(struct _GdkEventVisibility,send_event,8,2,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,2,43712)
CheckOffset(struct _GdkEventVisibility,state,12,2,43712)
#elif 1
CheckTypeSize(struct _GdkEventVisibility,0, 12760, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventVisibility on All\n");
CheckOffset(struct _GdkEventVisibility,type,0,1,43706)
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
CheckTypeSize(struct _GdkEventMotion,80, 12764, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,8,12,43715)
CheckOffset(struct _GdkEventMotion,window,8,12,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,12,43716)
CheckOffset(struct _GdkEventMotion,send_event,16,12,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,12,43717)
CheckOffset(struct _GdkEventMotion,time,20,12,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,12,43718)
CheckOffset(struct _GdkEventMotion,x,24,12,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,12,43719)
CheckOffset(struct _GdkEventMotion,y,32,12,43719)
CheckMemberSize(struct _GdkEventMotion,axes,8,12,43720)
CheckOffset(struct _GdkEventMotion,axes,40,12,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,12,43721)
CheckOffset(struct _GdkEventMotion,state,48,12,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,12,43722)
CheckOffset(struct _GdkEventMotion,is_hint,52,12,43722)
CheckMemberSize(struct _GdkEventMotion,device,8,12,43723)
CheckOffset(struct _GdkEventMotion,device,56,12,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,12,43724)
CheckOffset(struct _GdkEventMotion,x_root,64,12,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,12,43725)
CheckOffset(struct _GdkEventMotion,y_root,72,12,43725)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventMotion,80, 12764, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,8,11,43715)
CheckOffset(struct _GdkEventMotion,window,8,11,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,11,43716)
CheckOffset(struct _GdkEventMotion,send_event,16,11,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,11,43717)
CheckOffset(struct _GdkEventMotion,time,20,11,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,11,43718)
CheckOffset(struct _GdkEventMotion,x,24,11,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,11,43719)
CheckOffset(struct _GdkEventMotion,y,32,11,43719)
CheckMemberSize(struct _GdkEventMotion,axes,8,11,43720)
CheckOffset(struct _GdkEventMotion,axes,40,11,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,11,43721)
CheckOffset(struct _GdkEventMotion,state,48,11,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,11,43722)
CheckOffset(struct _GdkEventMotion,is_hint,52,11,43722)
CheckMemberSize(struct _GdkEventMotion,device,8,11,43723)
CheckOffset(struct _GdkEventMotion,device,56,11,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,11,43724)
CheckOffset(struct _GdkEventMotion,x_root,64,11,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,11,43725)
CheckOffset(struct _GdkEventMotion,y_root,72,11,43725)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventMotion,64, 12764, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,4,10,43715)
CheckOffset(struct _GdkEventMotion,window,4,10,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,10,43716)
CheckOffset(struct _GdkEventMotion,send_event,8,10,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,10,43717)
CheckOffset(struct _GdkEventMotion,time,12,10,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,10,43718)
CheckOffset(struct _GdkEventMotion,x,16,10,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,10,43719)
CheckOffset(struct _GdkEventMotion,y,24,10,43719)
CheckMemberSize(struct _GdkEventMotion,axes,4,10,43720)
CheckOffset(struct _GdkEventMotion,axes,32,10,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,10,43721)
CheckOffset(struct _GdkEventMotion,state,36,10,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,10,43722)
CheckOffset(struct _GdkEventMotion,is_hint,40,10,43722)
CheckMemberSize(struct _GdkEventMotion,device,4,10,43723)
CheckOffset(struct _GdkEventMotion,device,44,10,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,10,43724)
CheckOffset(struct _GdkEventMotion,x_root,48,10,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,10,43725)
CheckOffset(struct _GdkEventMotion,y_root,56,10,43725)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventMotion,80, 12764, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,8,9,43715)
CheckOffset(struct _GdkEventMotion,window,8,9,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,9,43716)
CheckOffset(struct _GdkEventMotion,send_event,16,9,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,9,43717)
CheckOffset(struct _GdkEventMotion,time,20,9,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,9,43718)
CheckOffset(struct _GdkEventMotion,x,24,9,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,9,43719)
CheckOffset(struct _GdkEventMotion,y,32,9,43719)
CheckMemberSize(struct _GdkEventMotion,axes,8,9,43720)
CheckOffset(struct _GdkEventMotion,axes,40,9,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,9,43721)
CheckOffset(struct _GdkEventMotion,state,48,9,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,9,43722)
CheckOffset(struct _GdkEventMotion,is_hint,52,9,43722)
CheckMemberSize(struct _GdkEventMotion,device,8,9,43723)
CheckOffset(struct _GdkEventMotion,device,56,9,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,9,43724)
CheckOffset(struct _GdkEventMotion,x_root,64,9,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,9,43725)
CheckOffset(struct _GdkEventMotion,y_root,72,9,43725)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventMotion,64, 12764, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,4,6,43715)
CheckOffset(struct _GdkEventMotion,window,4,6,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,6,43716)
CheckOffset(struct _GdkEventMotion,send_event,8,6,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,6,43717)
CheckOffset(struct _GdkEventMotion,time,12,6,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,6,43718)
CheckOffset(struct _GdkEventMotion,x,16,6,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,6,43719)
CheckOffset(struct _GdkEventMotion,y,24,6,43719)
CheckMemberSize(struct _GdkEventMotion,axes,4,6,43720)
CheckOffset(struct _GdkEventMotion,axes,32,6,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,6,43721)
CheckOffset(struct _GdkEventMotion,state,36,6,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,6,43722)
CheckOffset(struct _GdkEventMotion,is_hint,40,6,43722)
CheckMemberSize(struct _GdkEventMotion,device,4,6,43723)
CheckOffset(struct _GdkEventMotion,device,44,6,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,6,43724)
CheckOffset(struct _GdkEventMotion,x_root,48,6,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,6,43725)
CheckOffset(struct _GdkEventMotion,y_root,56,6,43725)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventMotion,80, 12764, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,8,3,43715)
CheckOffset(struct _GdkEventMotion,window,8,3,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,3,43716)
CheckOffset(struct _GdkEventMotion,send_event,16,3,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,3,43717)
CheckOffset(struct _GdkEventMotion,time,20,3,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,3,43718)
CheckOffset(struct _GdkEventMotion,x,24,3,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,3,43719)
CheckOffset(struct _GdkEventMotion,y,32,3,43719)
CheckMemberSize(struct _GdkEventMotion,axes,8,3,43720)
CheckOffset(struct _GdkEventMotion,axes,40,3,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,3,43721)
CheckOffset(struct _GdkEventMotion,state,48,3,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,3,43722)
CheckOffset(struct _GdkEventMotion,is_hint,52,3,43722)
CheckMemberSize(struct _GdkEventMotion,device,8,3,43723)
CheckOffset(struct _GdkEventMotion,device,56,3,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,3,43724)
CheckOffset(struct _GdkEventMotion,x_root,64,3,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,3,43725)
CheckOffset(struct _GdkEventMotion,y_root,72,3,43725)
#elif defined __i386__
CheckTypeSize(struct _GdkEventMotion,64, 12764, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventMotion,window,4,2,43715)
CheckOffset(struct _GdkEventMotion,window,4,2,43715)
CheckMemberSize(struct _GdkEventMotion,send_event,1,2,43716)
CheckOffset(struct _GdkEventMotion,send_event,8,2,43716)
CheckMemberSize(struct _GdkEventMotion,time,4,2,43717)
CheckOffset(struct _GdkEventMotion,time,12,2,43717)
CheckMemberSize(struct _GdkEventMotion,x,8,2,43718)
CheckOffset(struct _GdkEventMotion,x,16,2,43718)
CheckMemberSize(struct _GdkEventMotion,y,8,2,43719)
CheckOffset(struct _GdkEventMotion,y,24,2,43719)
CheckMemberSize(struct _GdkEventMotion,axes,4,2,43720)
CheckOffset(struct _GdkEventMotion,axes,32,2,43720)
CheckMemberSize(struct _GdkEventMotion,state,4,2,43721)
CheckOffset(struct _GdkEventMotion,state,36,2,43721)
CheckMemberSize(struct _GdkEventMotion,is_hint,2,2,43722)
CheckOffset(struct _GdkEventMotion,is_hint,40,2,43722)
CheckMemberSize(struct _GdkEventMotion,device,4,2,43723)
CheckOffset(struct _GdkEventMotion,device,44,2,43723)
CheckMemberSize(struct _GdkEventMotion,x_root,8,2,43724)
CheckOffset(struct _GdkEventMotion,x_root,48,2,43724)
CheckMemberSize(struct _GdkEventMotion,y_root,8,2,43725)
CheckOffset(struct _GdkEventMotion,y_root,56,2,43725)
#elif 1
CheckTypeSize(struct _GdkEventMotion,0, 12764, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventMotion on All\n");
CheckOffset(struct _GdkEventMotion,type,0,1,43714)
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
CheckTypeSize(struct _GdkEventButton,80, 12767, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,8,12,43728)
CheckOffset(struct _GdkEventButton,window,8,12,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,12,43729)
CheckOffset(struct _GdkEventButton,send_event,16,12,43729)
CheckMemberSize(struct _GdkEventButton,time,4,12,43730)
CheckOffset(struct _GdkEventButton,time,20,12,43730)
CheckMemberSize(struct _GdkEventButton,x,8,12,43731)
CheckOffset(struct _GdkEventButton,x,24,12,43731)
CheckMemberSize(struct _GdkEventButton,y,8,12,43732)
CheckOffset(struct _GdkEventButton,y,32,12,43732)
CheckMemberSize(struct _GdkEventButton,axes,8,12,43733)
CheckOffset(struct _GdkEventButton,axes,40,12,43733)
CheckMemberSize(struct _GdkEventButton,state,4,12,43734)
CheckOffset(struct _GdkEventButton,state,48,12,43734)
CheckMemberSize(struct _GdkEventButton,button,4,12,43735)
CheckOffset(struct _GdkEventButton,button,52,12,43735)
CheckMemberSize(struct _GdkEventButton,device,8,12,43736)
CheckOffset(struct _GdkEventButton,device,56,12,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,12,43737)
CheckOffset(struct _GdkEventButton,x_root,64,12,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,12,43738)
CheckOffset(struct _GdkEventButton,y_root,72,12,43738)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventButton,80, 12767, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,8,11,43728)
CheckOffset(struct _GdkEventButton,window,8,11,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,11,43729)
CheckOffset(struct _GdkEventButton,send_event,16,11,43729)
CheckMemberSize(struct _GdkEventButton,time,4,11,43730)
CheckOffset(struct _GdkEventButton,time,20,11,43730)
CheckMemberSize(struct _GdkEventButton,x,8,11,43731)
CheckOffset(struct _GdkEventButton,x,24,11,43731)
CheckMemberSize(struct _GdkEventButton,y,8,11,43732)
CheckOffset(struct _GdkEventButton,y,32,11,43732)
CheckMemberSize(struct _GdkEventButton,axes,8,11,43733)
CheckOffset(struct _GdkEventButton,axes,40,11,43733)
CheckMemberSize(struct _GdkEventButton,state,4,11,43734)
CheckOffset(struct _GdkEventButton,state,48,11,43734)
CheckMemberSize(struct _GdkEventButton,button,4,11,43735)
CheckOffset(struct _GdkEventButton,button,52,11,43735)
CheckMemberSize(struct _GdkEventButton,device,8,11,43736)
CheckOffset(struct _GdkEventButton,device,56,11,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,11,43737)
CheckOffset(struct _GdkEventButton,x_root,64,11,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,11,43738)
CheckOffset(struct _GdkEventButton,y_root,72,11,43738)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventButton,64, 12767, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,4,10,43728)
CheckOffset(struct _GdkEventButton,window,4,10,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,10,43729)
CheckOffset(struct _GdkEventButton,send_event,8,10,43729)
CheckMemberSize(struct _GdkEventButton,time,4,10,43730)
CheckOffset(struct _GdkEventButton,time,12,10,43730)
CheckMemberSize(struct _GdkEventButton,x,8,10,43731)
CheckOffset(struct _GdkEventButton,x,16,10,43731)
CheckMemberSize(struct _GdkEventButton,y,8,10,43732)
CheckOffset(struct _GdkEventButton,y,24,10,43732)
CheckMemberSize(struct _GdkEventButton,axes,4,10,43733)
CheckOffset(struct _GdkEventButton,axes,32,10,43733)
CheckMemberSize(struct _GdkEventButton,state,4,10,43734)
CheckOffset(struct _GdkEventButton,state,36,10,43734)
CheckMemberSize(struct _GdkEventButton,button,4,10,43735)
CheckOffset(struct _GdkEventButton,button,40,10,43735)
CheckMemberSize(struct _GdkEventButton,device,4,10,43736)
CheckOffset(struct _GdkEventButton,device,44,10,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,10,43737)
CheckOffset(struct _GdkEventButton,x_root,48,10,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,10,43738)
CheckOffset(struct _GdkEventButton,y_root,56,10,43738)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventButton,80, 12767, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,8,9,43728)
CheckOffset(struct _GdkEventButton,window,8,9,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,9,43729)
CheckOffset(struct _GdkEventButton,send_event,16,9,43729)
CheckMemberSize(struct _GdkEventButton,time,4,9,43730)
CheckOffset(struct _GdkEventButton,time,20,9,43730)
CheckMemberSize(struct _GdkEventButton,x,8,9,43731)
CheckOffset(struct _GdkEventButton,x,24,9,43731)
CheckMemberSize(struct _GdkEventButton,y,8,9,43732)
CheckOffset(struct _GdkEventButton,y,32,9,43732)
CheckMemberSize(struct _GdkEventButton,axes,8,9,43733)
CheckOffset(struct _GdkEventButton,axes,40,9,43733)
CheckMemberSize(struct _GdkEventButton,state,4,9,43734)
CheckOffset(struct _GdkEventButton,state,48,9,43734)
CheckMemberSize(struct _GdkEventButton,button,4,9,43735)
CheckOffset(struct _GdkEventButton,button,52,9,43735)
CheckMemberSize(struct _GdkEventButton,device,8,9,43736)
CheckOffset(struct _GdkEventButton,device,56,9,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,9,43737)
CheckOffset(struct _GdkEventButton,x_root,64,9,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,9,43738)
CheckOffset(struct _GdkEventButton,y_root,72,9,43738)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventButton,64, 12767, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,4,6,43728)
CheckOffset(struct _GdkEventButton,window,4,6,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,6,43729)
CheckOffset(struct _GdkEventButton,send_event,8,6,43729)
CheckMemberSize(struct _GdkEventButton,time,4,6,43730)
CheckOffset(struct _GdkEventButton,time,12,6,43730)
CheckMemberSize(struct _GdkEventButton,x,8,6,43731)
CheckOffset(struct _GdkEventButton,x,16,6,43731)
CheckMemberSize(struct _GdkEventButton,y,8,6,43732)
CheckOffset(struct _GdkEventButton,y,24,6,43732)
CheckMemberSize(struct _GdkEventButton,axes,4,6,43733)
CheckOffset(struct _GdkEventButton,axes,32,6,43733)
CheckMemberSize(struct _GdkEventButton,state,4,6,43734)
CheckOffset(struct _GdkEventButton,state,36,6,43734)
CheckMemberSize(struct _GdkEventButton,button,4,6,43735)
CheckOffset(struct _GdkEventButton,button,40,6,43735)
CheckMemberSize(struct _GdkEventButton,device,4,6,43736)
CheckOffset(struct _GdkEventButton,device,44,6,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,6,43737)
CheckOffset(struct _GdkEventButton,x_root,48,6,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,6,43738)
CheckOffset(struct _GdkEventButton,y_root,56,6,43738)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventButton,80, 12767, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,8,3,43728)
CheckOffset(struct _GdkEventButton,window,8,3,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,3,43729)
CheckOffset(struct _GdkEventButton,send_event,16,3,43729)
CheckMemberSize(struct _GdkEventButton,time,4,3,43730)
CheckOffset(struct _GdkEventButton,time,20,3,43730)
CheckMemberSize(struct _GdkEventButton,x,8,3,43731)
CheckOffset(struct _GdkEventButton,x,24,3,43731)
CheckMemberSize(struct _GdkEventButton,y,8,3,43732)
CheckOffset(struct _GdkEventButton,y,32,3,43732)
CheckMemberSize(struct _GdkEventButton,axes,8,3,43733)
CheckOffset(struct _GdkEventButton,axes,40,3,43733)
CheckMemberSize(struct _GdkEventButton,state,4,3,43734)
CheckOffset(struct _GdkEventButton,state,48,3,43734)
CheckMemberSize(struct _GdkEventButton,button,4,3,43735)
CheckOffset(struct _GdkEventButton,button,52,3,43735)
CheckMemberSize(struct _GdkEventButton,device,8,3,43736)
CheckOffset(struct _GdkEventButton,device,56,3,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,3,43737)
CheckOffset(struct _GdkEventButton,x_root,64,3,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,3,43738)
CheckOffset(struct _GdkEventButton,y_root,72,3,43738)
#elif defined __i386__
CheckTypeSize(struct _GdkEventButton,64, 12767, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventButton,window,4,2,43728)
CheckOffset(struct _GdkEventButton,window,4,2,43728)
CheckMemberSize(struct _GdkEventButton,send_event,1,2,43729)
CheckOffset(struct _GdkEventButton,send_event,8,2,43729)
CheckMemberSize(struct _GdkEventButton,time,4,2,43730)
CheckOffset(struct _GdkEventButton,time,12,2,43730)
CheckMemberSize(struct _GdkEventButton,x,8,2,43731)
CheckOffset(struct _GdkEventButton,x,16,2,43731)
CheckMemberSize(struct _GdkEventButton,y,8,2,43732)
CheckOffset(struct _GdkEventButton,y,24,2,43732)
CheckMemberSize(struct _GdkEventButton,axes,4,2,43733)
CheckOffset(struct _GdkEventButton,axes,32,2,43733)
CheckMemberSize(struct _GdkEventButton,state,4,2,43734)
CheckOffset(struct _GdkEventButton,state,36,2,43734)
CheckMemberSize(struct _GdkEventButton,button,4,2,43735)
CheckOffset(struct _GdkEventButton,button,40,2,43735)
CheckMemberSize(struct _GdkEventButton,device,4,2,43736)
CheckOffset(struct _GdkEventButton,device,44,2,43736)
CheckMemberSize(struct _GdkEventButton,x_root,8,2,43737)
CheckOffset(struct _GdkEventButton,x_root,48,2,43737)
CheckMemberSize(struct _GdkEventButton,y_root,8,2,43738)
CheckOffset(struct _GdkEventButton,y_root,56,2,43738)
#elif 1
CheckTypeSize(struct _GdkEventButton,0, 12767, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventButton on All\n");
CheckOffset(struct _GdkEventButton,type,0,1,43727)
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
CheckTypeSize(struct _GdkEventScroll,72, 12769, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,8,12,43741)
CheckOffset(struct _GdkEventScroll,window,8,12,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,12,43742)
CheckOffset(struct _GdkEventScroll,send_event,16,12,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,12,43743)
CheckOffset(struct _GdkEventScroll,time,20,12,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,12,43744)
CheckOffset(struct _GdkEventScroll,x,24,12,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,12,43745)
CheckOffset(struct _GdkEventScroll,y,32,12,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,12,43746)
CheckOffset(struct _GdkEventScroll,state,40,12,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,12,43751)
CheckOffset(struct _GdkEventScroll,direction,44,12,43751)
CheckMemberSize(struct _GdkEventScroll,device,8,12,43752)
CheckOffset(struct _GdkEventScroll,device,48,12,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,12,43753)
CheckOffset(struct _GdkEventScroll,x_root,56,12,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,12,43754)
CheckOffset(struct _GdkEventScroll,y_root,64,12,43754)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventScroll,72, 12769, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,8,11,43741)
CheckOffset(struct _GdkEventScroll,window,8,11,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,11,43742)
CheckOffset(struct _GdkEventScroll,send_event,16,11,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,11,43743)
CheckOffset(struct _GdkEventScroll,time,20,11,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,11,43744)
CheckOffset(struct _GdkEventScroll,x,24,11,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,11,43745)
CheckOffset(struct _GdkEventScroll,y,32,11,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,11,43746)
CheckOffset(struct _GdkEventScroll,state,40,11,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,11,43751)
CheckOffset(struct _GdkEventScroll,direction,44,11,43751)
CheckMemberSize(struct _GdkEventScroll,device,8,11,43752)
CheckOffset(struct _GdkEventScroll,device,48,11,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,11,43753)
CheckOffset(struct _GdkEventScroll,x_root,56,11,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,11,43754)
CheckOffset(struct _GdkEventScroll,y_root,64,11,43754)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventScroll,64, 12769, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,4,10,43741)
CheckOffset(struct _GdkEventScroll,window,4,10,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,10,43742)
CheckOffset(struct _GdkEventScroll,send_event,8,10,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,10,43743)
CheckOffset(struct _GdkEventScroll,time,12,10,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,10,43744)
CheckOffset(struct _GdkEventScroll,x,16,10,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,10,43745)
CheckOffset(struct _GdkEventScroll,y,24,10,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,10,43746)
CheckOffset(struct _GdkEventScroll,state,32,10,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,10,43751)
CheckOffset(struct _GdkEventScroll,direction,36,10,43751)
CheckMemberSize(struct _GdkEventScroll,device,4,10,43752)
CheckOffset(struct _GdkEventScroll,device,40,10,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,10,43753)
CheckOffset(struct _GdkEventScroll,x_root,48,10,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,10,43754)
CheckOffset(struct _GdkEventScroll,y_root,56,10,43754)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventScroll,72, 12769, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,8,9,43741)
CheckOffset(struct _GdkEventScroll,window,8,9,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,9,43742)
CheckOffset(struct _GdkEventScroll,send_event,16,9,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,9,43743)
CheckOffset(struct _GdkEventScroll,time,20,9,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,9,43744)
CheckOffset(struct _GdkEventScroll,x,24,9,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,9,43745)
CheckOffset(struct _GdkEventScroll,y,32,9,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,9,43746)
CheckOffset(struct _GdkEventScroll,state,40,9,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,9,43751)
CheckOffset(struct _GdkEventScroll,direction,44,9,43751)
CheckMemberSize(struct _GdkEventScroll,device,8,9,43752)
CheckOffset(struct _GdkEventScroll,device,48,9,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,9,43753)
CheckOffset(struct _GdkEventScroll,x_root,56,9,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,9,43754)
CheckOffset(struct _GdkEventScroll,y_root,64,9,43754)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventScroll,64, 12769, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,4,6,43741)
CheckOffset(struct _GdkEventScroll,window,4,6,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,6,43742)
CheckOffset(struct _GdkEventScroll,send_event,8,6,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,6,43743)
CheckOffset(struct _GdkEventScroll,time,12,6,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,6,43744)
CheckOffset(struct _GdkEventScroll,x,16,6,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,6,43745)
CheckOffset(struct _GdkEventScroll,y,24,6,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,6,43746)
CheckOffset(struct _GdkEventScroll,state,32,6,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,6,43751)
CheckOffset(struct _GdkEventScroll,direction,36,6,43751)
CheckMemberSize(struct _GdkEventScroll,device,4,6,43752)
CheckOffset(struct _GdkEventScroll,device,40,6,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,6,43753)
CheckOffset(struct _GdkEventScroll,x_root,48,6,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,6,43754)
CheckOffset(struct _GdkEventScroll,y_root,56,6,43754)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventScroll,72, 12769, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,8,3,43741)
CheckOffset(struct _GdkEventScroll,window,8,3,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,3,43742)
CheckOffset(struct _GdkEventScroll,send_event,16,3,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,3,43743)
CheckOffset(struct _GdkEventScroll,time,20,3,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,3,43744)
CheckOffset(struct _GdkEventScroll,x,24,3,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,3,43745)
CheckOffset(struct _GdkEventScroll,y,32,3,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,3,43746)
CheckOffset(struct _GdkEventScroll,state,40,3,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,3,43751)
CheckOffset(struct _GdkEventScroll,direction,44,3,43751)
CheckMemberSize(struct _GdkEventScroll,device,8,3,43752)
CheckOffset(struct _GdkEventScroll,device,48,3,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,3,43753)
CheckOffset(struct _GdkEventScroll,x_root,56,3,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,3,43754)
CheckOffset(struct _GdkEventScroll,y_root,64,3,43754)
#elif defined __i386__
CheckTypeSize(struct _GdkEventScroll,60, 12769, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventScroll,window,4,2,43741)
CheckOffset(struct _GdkEventScroll,window,4,2,43741)
CheckMemberSize(struct _GdkEventScroll,send_event,1,2,43742)
CheckOffset(struct _GdkEventScroll,send_event,8,2,43742)
CheckMemberSize(struct _GdkEventScroll,time,4,2,43743)
CheckOffset(struct _GdkEventScroll,time,12,2,43743)
CheckMemberSize(struct _GdkEventScroll,x,8,2,43744)
CheckOffset(struct _GdkEventScroll,x,16,2,43744)
CheckMemberSize(struct _GdkEventScroll,y,8,2,43745)
CheckOffset(struct _GdkEventScroll,y,24,2,43745)
CheckMemberSize(struct _GdkEventScroll,state,4,2,43746)
CheckOffset(struct _GdkEventScroll,state,32,2,43746)
CheckMemberSize(struct _GdkEventScroll,direction,4,2,43751)
CheckOffset(struct _GdkEventScroll,direction,36,2,43751)
CheckMemberSize(struct _GdkEventScroll,device,4,2,43752)
CheckOffset(struct _GdkEventScroll,device,40,2,43752)
CheckMemberSize(struct _GdkEventScroll,x_root,8,2,43753)
CheckOffset(struct _GdkEventScroll,x_root,44,2,43753)
CheckMemberSize(struct _GdkEventScroll,y_root,8,2,43754)
CheckOffset(struct _GdkEventScroll,y_root,52,2,43754)
#elif 1
CheckTypeSize(struct _GdkEventScroll,0, 12769, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventScroll on All\n");
CheckOffset(struct _GdkEventScroll,type,0,1,43740)
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
CheckTypeSize(struct _GdkEventKey,56, 12773, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,8,12,43757)
CheckOffset(struct _GdkEventKey,window,8,12,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,12,43758)
CheckOffset(struct _GdkEventKey,send_event,16,12,43758)
CheckMemberSize(struct _GdkEventKey,time,4,12,43759)
CheckOffset(struct _GdkEventKey,time,20,12,43759)
CheckMemberSize(struct _GdkEventKey,state,4,12,43760)
CheckOffset(struct _GdkEventKey,state,24,12,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,12,43761)
CheckOffset(struct _GdkEventKey,keyval,28,12,43761)
CheckMemberSize(struct _GdkEventKey,length,4,12,43762)
CheckOffset(struct _GdkEventKey,length,32,12,43762)
CheckMemberSize(struct _GdkEventKey,string,8,12,43763)
CheckOffset(struct _GdkEventKey,string,40,12,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,12,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,48,12,43764)
CheckMemberSize(struct _GdkEventKey,group,1,12,43765)
CheckOffset(struct _GdkEventKey,group,50,12,43765)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventKey,56, 12773, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,8,11,43757)
CheckOffset(struct _GdkEventKey,window,8,11,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,11,43758)
CheckOffset(struct _GdkEventKey,send_event,16,11,43758)
CheckMemberSize(struct _GdkEventKey,time,4,11,43759)
CheckOffset(struct _GdkEventKey,time,20,11,43759)
CheckMemberSize(struct _GdkEventKey,state,4,11,43760)
CheckOffset(struct _GdkEventKey,state,24,11,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,11,43761)
CheckOffset(struct _GdkEventKey,keyval,28,11,43761)
CheckMemberSize(struct _GdkEventKey,length,4,11,43762)
CheckOffset(struct _GdkEventKey,length,32,11,43762)
CheckMemberSize(struct _GdkEventKey,string,8,11,43763)
CheckOffset(struct _GdkEventKey,string,40,11,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,11,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,48,11,43764)
CheckMemberSize(struct _GdkEventKey,group,1,11,43765)
CheckOffset(struct _GdkEventKey,group,50,11,43765)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventKey,36, 12773, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,4,10,43757)
CheckOffset(struct _GdkEventKey,window,4,10,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,10,43758)
CheckOffset(struct _GdkEventKey,send_event,8,10,43758)
CheckMemberSize(struct _GdkEventKey,time,4,10,43759)
CheckOffset(struct _GdkEventKey,time,12,10,43759)
CheckMemberSize(struct _GdkEventKey,state,4,10,43760)
CheckOffset(struct _GdkEventKey,state,16,10,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,10,43761)
CheckOffset(struct _GdkEventKey,keyval,20,10,43761)
CheckMemberSize(struct _GdkEventKey,length,4,10,43762)
CheckOffset(struct _GdkEventKey,length,24,10,43762)
CheckMemberSize(struct _GdkEventKey,string,4,10,43763)
CheckOffset(struct _GdkEventKey,string,28,10,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,10,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,32,10,43764)
CheckMemberSize(struct _GdkEventKey,group,1,10,43765)
CheckOffset(struct _GdkEventKey,group,34,10,43765)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventKey,56, 12773, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,8,9,43757)
CheckOffset(struct _GdkEventKey,window,8,9,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,9,43758)
CheckOffset(struct _GdkEventKey,send_event,16,9,43758)
CheckMemberSize(struct _GdkEventKey,time,4,9,43759)
CheckOffset(struct _GdkEventKey,time,20,9,43759)
CheckMemberSize(struct _GdkEventKey,state,4,9,43760)
CheckOffset(struct _GdkEventKey,state,24,9,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,9,43761)
CheckOffset(struct _GdkEventKey,keyval,28,9,43761)
CheckMemberSize(struct _GdkEventKey,length,4,9,43762)
CheckOffset(struct _GdkEventKey,length,32,9,43762)
CheckMemberSize(struct _GdkEventKey,string,8,9,43763)
CheckOffset(struct _GdkEventKey,string,40,9,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,9,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,48,9,43764)
CheckMemberSize(struct _GdkEventKey,group,1,9,43765)
CheckOffset(struct _GdkEventKey,group,50,9,43765)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventKey,36, 12773, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,4,6,43757)
CheckOffset(struct _GdkEventKey,window,4,6,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,6,43758)
CheckOffset(struct _GdkEventKey,send_event,8,6,43758)
CheckMemberSize(struct _GdkEventKey,time,4,6,43759)
CheckOffset(struct _GdkEventKey,time,12,6,43759)
CheckMemberSize(struct _GdkEventKey,state,4,6,43760)
CheckOffset(struct _GdkEventKey,state,16,6,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,6,43761)
CheckOffset(struct _GdkEventKey,keyval,20,6,43761)
CheckMemberSize(struct _GdkEventKey,length,4,6,43762)
CheckOffset(struct _GdkEventKey,length,24,6,43762)
CheckMemberSize(struct _GdkEventKey,string,4,6,43763)
CheckOffset(struct _GdkEventKey,string,28,6,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,6,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,32,6,43764)
CheckMemberSize(struct _GdkEventKey,group,1,6,43765)
CheckOffset(struct _GdkEventKey,group,34,6,43765)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventKey,56, 12773, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,8,3,43757)
CheckOffset(struct _GdkEventKey,window,8,3,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,3,43758)
CheckOffset(struct _GdkEventKey,send_event,16,3,43758)
CheckMemberSize(struct _GdkEventKey,time,4,3,43759)
CheckOffset(struct _GdkEventKey,time,20,3,43759)
CheckMemberSize(struct _GdkEventKey,state,4,3,43760)
CheckOffset(struct _GdkEventKey,state,24,3,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,3,43761)
CheckOffset(struct _GdkEventKey,keyval,28,3,43761)
CheckMemberSize(struct _GdkEventKey,length,4,3,43762)
CheckOffset(struct _GdkEventKey,length,32,3,43762)
CheckMemberSize(struct _GdkEventKey,string,8,3,43763)
CheckOffset(struct _GdkEventKey,string,40,3,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,3,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,48,3,43764)
CheckMemberSize(struct _GdkEventKey,group,1,3,43765)
CheckOffset(struct _GdkEventKey,group,50,3,43765)
#elif defined __i386__
CheckTypeSize(struct _GdkEventKey,36, 12773, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventKey,window,4,2,43757)
CheckOffset(struct _GdkEventKey,window,4,2,43757)
CheckMemberSize(struct _GdkEventKey,send_event,1,2,43758)
CheckOffset(struct _GdkEventKey,send_event,8,2,43758)
CheckMemberSize(struct _GdkEventKey,time,4,2,43759)
CheckOffset(struct _GdkEventKey,time,12,2,43759)
CheckMemberSize(struct _GdkEventKey,state,4,2,43760)
CheckOffset(struct _GdkEventKey,state,16,2,43760)
CheckMemberSize(struct _GdkEventKey,keyval,4,2,43761)
CheckOffset(struct _GdkEventKey,keyval,20,2,43761)
CheckMemberSize(struct _GdkEventKey,length,4,2,43762)
CheckOffset(struct _GdkEventKey,length,24,2,43762)
CheckMemberSize(struct _GdkEventKey,string,4,2,43763)
CheckOffset(struct _GdkEventKey,string,28,2,43763)
CheckMemberSize(struct _GdkEventKey,hardware_keycode,2,2,43764)
CheckOffset(struct _GdkEventKey,hardware_keycode,32,2,43764)
CheckMemberSize(struct _GdkEventKey,group,1,2,43765)
CheckOffset(struct _GdkEventKey,group,34,2,43765)
#elif 1
CheckTypeSize(struct _GdkEventKey,0, 12773, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventKey on All\n");
CheckOffset(struct _GdkEventKey,type,0,1,43756)
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
CheckTypeSize(struct _GdkEventCrossing,88, 12775, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,8,12,43768)
CheckOffset(struct _GdkEventCrossing,window,8,12,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,12,43769)
CheckOffset(struct _GdkEventCrossing,send_event,16,12,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,8,12,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,24,12,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,12,43771)
CheckOffset(struct _GdkEventCrossing,time,32,12,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,12,43772)
CheckOffset(struct _GdkEventCrossing,x,40,12,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,12,43773)
CheckOffset(struct _GdkEventCrossing,y,48,12,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,12,43774)
CheckOffset(struct _GdkEventCrossing,x_root,56,12,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,12,43775)
CheckOffset(struct _GdkEventCrossing,y_root,64,12,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,12,43779)
CheckOffset(struct _GdkEventCrossing,mode,72,12,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,12,43786)
CheckOffset(struct _GdkEventCrossing,detail,76,12,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,12,43787)
CheckOffset(struct _GdkEventCrossing,focus,80,12,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,12,43788)
CheckOffset(struct _GdkEventCrossing,state,84,12,43788)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventCrossing,88, 12775, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,8,11,43768)
CheckOffset(struct _GdkEventCrossing,window,8,11,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,11,43769)
CheckOffset(struct _GdkEventCrossing,send_event,16,11,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,8,11,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,24,11,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,11,43771)
CheckOffset(struct _GdkEventCrossing,time,32,11,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,11,43772)
CheckOffset(struct _GdkEventCrossing,x,40,11,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,11,43773)
CheckOffset(struct _GdkEventCrossing,y,48,11,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,11,43774)
CheckOffset(struct _GdkEventCrossing,x_root,56,11,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,11,43775)
CheckOffset(struct _GdkEventCrossing,y_root,64,11,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,11,43779)
CheckOffset(struct _GdkEventCrossing,mode,72,11,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,11,43786)
CheckOffset(struct _GdkEventCrossing,detail,76,11,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,11,43787)
CheckOffset(struct _GdkEventCrossing,focus,80,11,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,11,43788)
CheckOffset(struct _GdkEventCrossing,state,84,11,43788)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventCrossing,72, 12775, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,4,10,43768)
CheckOffset(struct _GdkEventCrossing,window,4,10,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,10,43769)
CheckOffset(struct _GdkEventCrossing,send_event,8,10,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,4,10,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,12,10,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,10,43771)
CheckOffset(struct _GdkEventCrossing,time,16,10,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,10,43772)
CheckOffset(struct _GdkEventCrossing,x,24,10,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,10,43773)
CheckOffset(struct _GdkEventCrossing,y,32,10,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,10,43774)
CheckOffset(struct _GdkEventCrossing,x_root,40,10,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,10,43775)
CheckOffset(struct _GdkEventCrossing,y_root,48,10,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,10,43779)
CheckOffset(struct _GdkEventCrossing,mode,56,10,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,10,43786)
CheckOffset(struct _GdkEventCrossing,detail,60,10,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,10,43787)
CheckOffset(struct _GdkEventCrossing,focus,64,10,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,10,43788)
CheckOffset(struct _GdkEventCrossing,state,68,10,43788)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventCrossing,88, 12775, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,8,9,43768)
CheckOffset(struct _GdkEventCrossing,window,8,9,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,9,43769)
CheckOffset(struct _GdkEventCrossing,send_event,16,9,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,8,9,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,24,9,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,9,43771)
CheckOffset(struct _GdkEventCrossing,time,32,9,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,9,43772)
CheckOffset(struct _GdkEventCrossing,x,40,9,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,9,43773)
CheckOffset(struct _GdkEventCrossing,y,48,9,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,9,43774)
CheckOffset(struct _GdkEventCrossing,x_root,56,9,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,9,43775)
CheckOffset(struct _GdkEventCrossing,y_root,64,9,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,9,43779)
CheckOffset(struct _GdkEventCrossing,mode,72,9,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,9,43786)
CheckOffset(struct _GdkEventCrossing,detail,76,9,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,9,43787)
CheckOffset(struct _GdkEventCrossing,focus,80,9,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,9,43788)
CheckOffset(struct _GdkEventCrossing,state,84,9,43788)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventCrossing,72, 12775, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,4,6,43768)
CheckOffset(struct _GdkEventCrossing,window,4,6,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,6,43769)
CheckOffset(struct _GdkEventCrossing,send_event,8,6,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,4,6,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,12,6,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,6,43771)
CheckOffset(struct _GdkEventCrossing,time,16,6,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,6,43772)
CheckOffset(struct _GdkEventCrossing,x,24,6,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,6,43773)
CheckOffset(struct _GdkEventCrossing,y,32,6,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,6,43774)
CheckOffset(struct _GdkEventCrossing,x_root,40,6,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,6,43775)
CheckOffset(struct _GdkEventCrossing,y_root,48,6,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,6,43779)
CheckOffset(struct _GdkEventCrossing,mode,56,6,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,6,43786)
CheckOffset(struct _GdkEventCrossing,detail,60,6,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,6,43787)
CheckOffset(struct _GdkEventCrossing,focus,64,6,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,6,43788)
CheckOffset(struct _GdkEventCrossing,state,68,6,43788)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventCrossing,88, 12775, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,8,3,43768)
CheckOffset(struct _GdkEventCrossing,window,8,3,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,3,43769)
CheckOffset(struct _GdkEventCrossing,send_event,16,3,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,8,3,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,24,3,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,3,43771)
CheckOffset(struct _GdkEventCrossing,time,32,3,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,3,43772)
CheckOffset(struct _GdkEventCrossing,x,40,3,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,3,43773)
CheckOffset(struct _GdkEventCrossing,y,48,3,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,3,43774)
CheckOffset(struct _GdkEventCrossing,x_root,56,3,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,3,43775)
CheckOffset(struct _GdkEventCrossing,y_root,64,3,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,3,43779)
CheckOffset(struct _GdkEventCrossing,mode,72,3,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,3,43786)
CheckOffset(struct _GdkEventCrossing,detail,76,3,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,3,43787)
CheckOffset(struct _GdkEventCrossing,focus,80,3,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,3,43788)
CheckOffset(struct _GdkEventCrossing,state,84,3,43788)
#elif defined __i386__
CheckTypeSize(struct _GdkEventCrossing,68, 12775, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventCrossing,window,4,2,43768)
CheckOffset(struct _GdkEventCrossing,window,4,2,43768)
CheckMemberSize(struct _GdkEventCrossing,send_event,1,2,43769)
CheckOffset(struct _GdkEventCrossing,send_event,8,2,43769)
CheckMemberSize(struct _GdkEventCrossing,subwindow,4,2,43770)
CheckOffset(struct _GdkEventCrossing,subwindow,12,2,43770)
CheckMemberSize(struct _GdkEventCrossing,time,4,2,43771)
CheckOffset(struct _GdkEventCrossing,time,16,2,43771)
CheckMemberSize(struct _GdkEventCrossing,x,8,2,43772)
CheckOffset(struct _GdkEventCrossing,x,20,2,43772)
CheckMemberSize(struct _GdkEventCrossing,y,8,2,43773)
CheckOffset(struct _GdkEventCrossing,y,28,2,43773)
CheckMemberSize(struct _GdkEventCrossing,x_root,8,2,43774)
CheckOffset(struct _GdkEventCrossing,x_root,36,2,43774)
CheckMemberSize(struct _GdkEventCrossing,y_root,8,2,43775)
CheckOffset(struct _GdkEventCrossing,y_root,44,2,43775)
CheckMemberSize(struct _GdkEventCrossing,mode,4,2,43779)
CheckOffset(struct _GdkEventCrossing,mode,52,2,43779)
CheckMemberSize(struct _GdkEventCrossing,detail,4,2,43786)
CheckOffset(struct _GdkEventCrossing,detail,56,2,43786)
CheckMemberSize(struct _GdkEventCrossing,focus,4,2,43787)
CheckOffset(struct _GdkEventCrossing,focus,60,2,43787)
CheckMemberSize(struct _GdkEventCrossing,state,4,2,43788)
CheckOffset(struct _GdkEventCrossing,state,64,2,43788)
#elif 1
CheckTypeSize(struct _GdkEventCrossing,0, 12775, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventCrossing on All\n");
CheckOffset(struct _GdkEventCrossing,type,0,1,43767)
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
CheckTypeSize(struct _GdkEventFocus,24, 12781, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,8,12,43791)
CheckOffset(struct _GdkEventFocus,window,8,12,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,12,43792)
CheckOffset(struct _GdkEventFocus,send_event,16,12,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,12,43793)
CheckOffset(struct _GdkEventFocus,in,18,12,43793)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventFocus,24, 12781, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,8,11,43791)
CheckOffset(struct _GdkEventFocus,window,8,11,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,11,43792)
CheckOffset(struct _GdkEventFocus,send_event,16,11,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,11,43793)
CheckOffset(struct _GdkEventFocus,in,18,11,43793)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventFocus,12, 12781, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,4,10,43791)
CheckOffset(struct _GdkEventFocus,window,4,10,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,10,43792)
CheckOffset(struct _GdkEventFocus,send_event,8,10,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,10,43793)
CheckOffset(struct _GdkEventFocus,in,10,10,43793)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventFocus,24, 12781, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,8,9,43791)
CheckOffset(struct _GdkEventFocus,window,8,9,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,9,43792)
CheckOffset(struct _GdkEventFocus,send_event,16,9,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,9,43793)
CheckOffset(struct _GdkEventFocus,in,18,9,43793)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventFocus,12, 12781, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,4,6,43791)
CheckOffset(struct _GdkEventFocus,window,4,6,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,6,43792)
CheckOffset(struct _GdkEventFocus,send_event,8,6,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,6,43793)
CheckOffset(struct _GdkEventFocus,in,10,6,43793)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventFocus,24, 12781, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,8,3,43791)
CheckOffset(struct _GdkEventFocus,window,8,3,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,3,43792)
CheckOffset(struct _GdkEventFocus,send_event,16,3,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,3,43793)
CheckOffset(struct _GdkEventFocus,in,18,3,43793)
#elif defined __i386__
CheckTypeSize(struct _GdkEventFocus,12, 12781, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventFocus,window,4,2,43791)
CheckOffset(struct _GdkEventFocus,window,4,2,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,2,43792)
CheckOffset(struct _GdkEventFocus,send_event,8,2,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,2,43793)
CheckOffset(struct _GdkEventFocus,in,10,2,43793)
#elif 1
CheckTypeSize(struct _GdkEventFocus,0, 12781, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventFocus on All\n");
CheckOffset(struct _GdkEventFocus,type,0,1,43790)
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
CheckTypeSize(struct _GdkEventConfigure,40, 12783, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,8,12,43796)
CheckOffset(struct _GdkEventConfigure,window,8,12,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,12,43797)
CheckOffset(struct _GdkEventConfigure,send_event,16,12,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,12,43798)
CheckOffset(struct _GdkEventConfigure,x,20,12,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,12,43799)
CheckOffset(struct _GdkEventConfigure,y,24,12,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,12,43800)
CheckOffset(struct _GdkEventConfigure,width,28,12,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,12,43801)
CheckOffset(struct _GdkEventConfigure,height,32,12,43801)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventConfigure,40, 12783, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,8,11,43796)
CheckOffset(struct _GdkEventConfigure,window,8,11,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,11,43797)
CheckOffset(struct _GdkEventConfigure,send_event,16,11,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,11,43798)
CheckOffset(struct _GdkEventConfigure,x,20,11,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,11,43799)
CheckOffset(struct _GdkEventConfigure,y,24,11,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,11,43800)
CheckOffset(struct _GdkEventConfigure,width,28,11,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,11,43801)
CheckOffset(struct _GdkEventConfigure,height,32,11,43801)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventConfigure,28, 12783, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,4,10,43796)
CheckOffset(struct _GdkEventConfigure,window,4,10,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,10,43797)
CheckOffset(struct _GdkEventConfigure,send_event,8,10,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,10,43798)
CheckOffset(struct _GdkEventConfigure,x,12,10,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,10,43799)
CheckOffset(struct _GdkEventConfigure,y,16,10,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,10,43800)
CheckOffset(struct _GdkEventConfigure,width,20,10,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,10,43801)
CheckOffset(struct _GdkEventConfigure,height,24,10,43801)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventConfigure,40, 12783, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,8,9,43796)
CheckOffset(struct _GdkEventConfigure,window,8,9,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,9,43797)
CheckOffset(struct _GdkEventConfigure,send_event,16,9,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,9,43798)
CheckOffset(struct _GdkEventConfigure,x,20,9,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,9,43799)
CheckOffset(struct _GdkEventConfigure,y,24,9,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,9,43800)
CheckOffset(struct _GdkEventConfigure,width,28,9,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,9,43801)
CheckOffset(struct _GdkEventConfigure,height,32,9,43801)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventConfigure,28, 12783, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,4,6,43796)
CheckOffset(struct _GdkEventConfigure,window,4,6,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,6,43797)
CheckOffset(struct _GdkEventConfigure,send_event,8,6,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,6,43798)
CheckOffset(struct _GdkEventConfigure,x,12,6,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,6,43799)
CheckOffset(struct _GdkEventConfigure,y,16,6,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,6,43800)
CheckOffset(struct _GdkEventConfigure,width,20,6,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,6,43801)
CheckOffset(struct _GdkEventConfigure,height,24,6,43801)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventConfigure,40, 12783, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,8,3,43796)
CheckOffset(struct _GdkEventConfigure,window,8,3,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,3,43797)
CheckOffset(struct _GdkEventConfigure,send_event,16,3,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,3,43798)
CheckOffset(struct _GdkEventConfigure,x,20,3,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,3,43799)
CheckOffset(struct _GdkEventConfigure,y,24,3,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,3,43800)
CheckOffset(struct _GdkEventConfigure,width,28,3,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,3,43801)
CheckOffset(struct _GdkEventConfigure,height,32,3,43801)
#elif defined __i386__
CheckTypeSize(struct _GdkEventConfigure,28, 12783, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventConfigure,window,4,2,43796)
CheckOffset(struct _GdkEventConfigure,window,4,2,43796)
CheckMemberSize(struct _GdkEventConfigure,send_event,1,2,43797)
CheckOffset(struct _GdkEventConfigure,send_event,8,2,43797)
CheckMemberSize(struct _GdkEventConfigure,x,4,2,43798)
CheckOffset(struct _GdkEventConfigure,x,12,2,43798)
CheckMemberSize(struct _GdkEventConfigure,y,4,2,43799)
CheckOffset(struct _GdkEventConfigure,y,16,2,43799)
CheckMemberSize(struct _GdkEventConfigure,width,4,2,43800)
CheckOffset(struct _GdkEventConfigure,width,20,2,43800)
CheckMemberSize(struct _GdkEventConfigure,height,4,2,43801)
CheckOffset(struct _GdkEventConfigure,height,24,2,43801)
#elif 1
CheckTypeSize(struct _GdkEventConfigure,0, 12783, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventConfigure on All\n");
CheckOffset(struct _GdkEventConfigure,type,0,1,43795)
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
CheckTypeSize(struct _GdkEventProperty,40, 12785, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,8,12,43804)
CheckOffset(struct _GdkEventProperty,window,8,12,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,12,43805)
CheckOffset(struct _GdkEventProperty,send_event,16,12,43805)
CheckMemberSize(struct _GdkEventProperty,atom,8,12,43806)
CheckOffset(struct _GdkEventProperty,atom,24,12,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,12,43807)
CheckOffset(struct _GdkEventProperty,time,32,12,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,12,43808)
CheckOffset(struct _GdkEventProperty,state,36,12,43808)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventProperty,40, 12785, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,8,11,43804)
CheckOffset(struct _GdkEventProperty,window,8,11,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,11,43805)
CheckOffset(struct _GdkEventProperty,send_event,16,11,43805)
CheckMemberSize(struct _GdkEventProperty,atom,8,11,43806)
CheckOffset(struct _GdkEventProperty,atom,24,11,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,11,43807)
CheckOffset(struct _GdkEventProperty,time,32,11,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,11,43808)
CheckOffset(struct _GdkEventProperty,state,36,11,43808)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventProperty,24, 12785, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,4,10,43804)
CheckOffset(struct _GdkEventProperty,window,4,10,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,10,43805)
CheckOffset(struct _GdkEventProperty,send_event,8,10,43805)
CheckMemberSize(struct _GdkEventProperty,atom,4,10,43806)
CheckOffset(struct _GdkEventProperty,atom,12,10,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,10,43807)
CheckOffset(struct _GdkEventProperty,time,16,10,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,10,43808)
CheckOffset(struct _GdkEventProperty,state,20,10,43808)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventProperty,40, 12785, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,8,9,43804)
CheckOffset(struct _GdkEventProperty,window,8,9,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,9,43805)
CheckOffset(struct _GdkEventProperty,send_event,16,9,43805)
CheckMemberSize(struct _GdkEventProperty,atom,8,9,43806)
CheckOffset(struct _GdkEventProperty,atom,24,9,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,9,43807)
CheckOffset(struct _GdkEventProperty,time,32,9,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,9,43808)
CheckOffset(struct _GdkEventProperty,state,36,9,43808)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventProperty,24, 12785, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,4,6,43804)
CheckOffset(struct _GdkEventProperty,window,4,6,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,6,43805)
CheckOffset(struct _GdkEventProperty,send_event,8,6,43805)
CheckMemberSize(struct _GdkEventProperty,atom,4,6,43806)
CheckOffset(struct _GdkEventProperty,atom,12,6,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,6,43807)
CheckOffset(struct _GdkEventProperty,time,16,6,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,6,43808)
CheckOffset(struct _GdkEventProperty,state,20,6,43808)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventProperty,40, 12785, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,8,3,43804)
CheckOffset(struct _GdkEventProperty,window,8,3,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,3,43805)
CheckOffset(struct _GdkEventProperty,send_event,16,3,43805)
CheckMemberSize(struct _GdkEventProperty,atom,8,3,43806)
CheckOffset(struct _GdkEventProperty,atom,24,3,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,3,43807)
CheckOffset(struct _GdkEventProperty,time,32,3,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,3,43808)
CheckOffset(struct _GdkEventProperty,state,36,3,43808)
#elif defined __i386__
CheckTypeSize(struct _GdkEventProperty,24, 12785, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProperty,window,4,2,43804)
CheckOffset(struct _GdkEventProperty,window,4,2,43804)
CheckMemberSize(struct _GdkEventProperty,send_event,1,2,43805)
CheckOffset(struct _GdkEventProperty,send_event,8,2,43805)
CheckMemberSize(struct _GdkEventProperty,atom,4,2,43806)
CheckOffset(struct _GdkEventProperty,atom,12,2,43806)
CheckMemberSize(struct _GdkEventProperty,time,4,2,43807)
CheckOffset(struct _GdkEventProperty,time,16,2,43807)
CheckMemberSize(struct _GdkEventProperty,state,4,2,43808)
CheckOffset(struct _GdkEventProperty,state,20,2,43808)
#elif 1
CheckTypeSize(struct _GdkEventProperty,0, 12785, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventProperty on All\n");
CheckOffset(struct _GdkEventProperty,type,0,1,43803)
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
CheckTypeSize(struct _GdkEventSelection,56, 12787, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,8,12,43811)
CheckOffset(struct _GdkEventSelection,window,8,12,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,12,43812)
CheckOffset(struct _GdkEventSelection,send_event,16,12,43812)
CheckMemberSize(struct _GdkEventSelection,selection,8,12,43813)
CheckOffset(struct _GdkEventSelection,selection,24,12,43813)
CheckMemberSize(struct _GdkEventSelection,target,8,12,43814)
CheckOffset(struct _GdkEventSelection,target,32,12,43814)
CheckMemberSize(struct _GdkEventSelection,property,8,12,43815)
CheckOffset(struct _GdkEventSelection,property,40,12,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,12,43816)
CheckOffset(struct _GdkEventSelection,time,48,12,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,12,43817)
CheckOffset(struct _GdkEventSelection,requestor,52,12,43817)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventSelection,56, 12787, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,8,11,43811)
CheckOffset(struct _GdkEventSelection,window,8,11,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,11,43812)
CheckOffset(struct _GdkEventSelection,send_event,16,11,43812)
CheckMemberSize(struct _GdkEventSelection,selection,8,11,43813)
CheckOffset(struct _GdkEventSelection,selection,24,11,43813)
CheckMemberSize(struct _GdkEventSelection,target,8,11,43814)
CheckOffset(struct _GdkEventSelection,target,32,11,43814)
CheckMemberSize(struct _GdkEventSelection,property,8,11,43815)
CheckOffset(struct _GdkEventSelection,property,40,11,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,11,43816)
CheckOffset(struct _GdkEventSelection,time,48,11,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,11,43817)
CheckOffset(struct _GdkEventSelection,requestor,52,11,43817)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventSelection,32, 12787, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,4,10,43811)
CheckOffset(struct _GdkEventSelection,window,4,10,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,10,43812)
CheckOffset(struct _GdkEventSelection,send_event,8,10,43812)
CheckMemberSize(struct _GdkEventSelection,selection,4,10,43813)
CheckOffset(struct _GdkEventSelection,selection,12,10,43813)
CheckMemberSize(struct _GdkEventSelection,target,4,10,43814)
CheckOffset(struct _GdkEventSelection,target,16,10,43814)
CheckMemberSize(struct _GdkEventSelection,property,4,10,43815)
CheckOffset(struct _GdkEventSelection,property,20,10,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,10,43816)
CheckOffset(struct _GdkEventSelection,time,24,10,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,10,43817)
CheckOffset(struct _GdkEventSelection,requestor,28,10,43817)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventSelection,56, 12787, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,8,9,43811)
CheckOffset(struct _GdkEventSelection,window,8,9,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,9,43812)
CheckOffset(struct _GdkEventSelection,send_event,16,9,43812)
CheckMemberSize(struct _GdkEventSelection,selection,8,9,43813)
CheckOffset(struct _GdkEventSelection,selection,24,9,43813)
CheckMemberSize(struct _GdkEventSelection,target,8,9,43814)
CheckOffset(struct _GdkEventSelection,target,32,9,43814)
CheckMemberSize(struct _GdkEventSelection,property,8,9,43815)
CheckOffset(struct _GdkEventSelection,property,40,9,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,9,43816)
CheckOffset(struct _GdkEventSelection,time,48,9,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,9,43817)
CheckOffset(struct _GdkEventSelection,requestor,52,9,43817)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventSelection,32, 12787, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,4,6,43811)
CheckOffset(struct _GdkEventSelection,window,4,6,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,6,43812)
CheckOffset(struct _GdkEventSelection,send_event,8,6,43812)
CheckMemberSize(struct _GdkEventSelection,selection,4,6,43813)
CheckOffset(struct _GdkEventSelection,selection,12,6,43813)
CheckMemberSize(struct _GdkEventSelection,target,4,6,43814)
CheckOffset(struct _GdkEventSelection,target,16,6,43814)
CheckMemberSize(struct _GdkEventSelection,property,4,6,43815)
CheckOffset(struct _GdkEventSelection,property,20,6,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,6,43816)
CheckOffset(struct _GdkEventSelection,time,24,6,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,6,43817)
CheckOffset(struct _GdkEventSelection,requestor,28,6,43817)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventSelection,56, 12787, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,8,3,43811)
CheckOffset(struct _GdkEventSelection,window,8,3,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,3,43812)
CheckOffset(struct _GdkEventSelection,send_event,16,3,43812)
CheckMemberSize(struct _GdkEventSelection,selection,8,3,43813)
CheckOffset(struct _GdkEventSelection,selection,24,3,43813)
CheckMemberSize(struct _GdkEventSelection,target,8,3,43814)
CheckOffset(struct _GdkEventSelection,target,32,3,43814)
CheckMemberSize(struct _GdkEventSelection,property,8,3,43815)
CheckOffset(struct _GdkEventSelection,property,40,3,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,3,43816)
CheckOffset(struct _GdkEventSelection,time,48,3,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,3,43817)
CheckOffset(struct _GdkEventSelection,requestor,52,3,43817)
#elif defined __i386__
CheckTypeSize(struct _GdkEventSelection,32, 12787, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSelection,window,4,2,43811)
CheckOffset(struct _GdkEventSelection,window,4,2,43811)
CheckMemberSize(struct _GdkEventSelection,send_event,1,2,43812)
CheckOffset(struct _GdkEventSelection,send_event,8,2,43812)
CheckMemberSize(struct _GdkEventSelection,selection,4,2,43813)
CheckOffset(struct _GdkEventSelection,selection,12,2,43813)
CheckMemberSize(struct _GdkEventSelection,target,4,2,43814)
CheckOffset(struct _GdkEventSelection,target,16,2,43814)
CheckMemberSize(struct _GdkEventSelection,property,4,2,43815)
CheckOffset(struct _GdkEventSelection,property,20,2,43815)
CheckMemberSize(struct _GdkEventSelection,time,4,2,43816)
CheckOffset(struct _GdkEventSelection,time,24,2,43816)
CheckMemberSize(struct _GdkEventSelection,requestor,4,2,43817)
CheckOffset(struct _GdkEventSelection,requestor,28,2,43817)
#elif 1
CheckTypeSize(struct _GdkEventSelection,0, 12787, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventSelection on All\n");
CheckOffset(struct _GdkEventSelection,type,0,1,43810)
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
CheckTypeSize(struct _GdkEventOwnerChange,48, 12790, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,8,12,43820)
CheckOffset(struct _GdkEventOwnerChange,window,8,12,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,12,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,16,12,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,12,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,20,12,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,12,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,24,12,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,8,12,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,32,12,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,12,43828)
CheckOffset(struct _GdkEventOwnerChange,time,40,12,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,12,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,44,12,43829)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventOwnerChange,48, 12790, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,8,11,43820)
CheckOffset(struct _GdkEventOwnerChange,window,8,11,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,11,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,16,11,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,11,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,20,11,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,11,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,24,11,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,8,11,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,32,11,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,11,43828)
CheckOffset(struct _GdkEventOwnerChange,time,40,11,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,11,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,44,11,43829)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventOwnerChange,32, 12790, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,4,10,43820)
CheckOffset(struct _GdkEventOwnerChange,window,4,10,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,10,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,8,10,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,10,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,12,10,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,10,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,16,10,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,4,10,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,20,10,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,10,43828)
CheckOffset(struct _GdkEventOwnerChange,time,24,10,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,10,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,28,10,43829)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventOwnerChange,48, 12790, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,8,9,43820)
CheckOffset(struct _GdkEventOwnerChange,window,8,9,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,9,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,16,9,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,9,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,20,9,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,9,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,24,9,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,8,9,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,32,9,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,9,43828)
CheckOffset(struct _GdkEventOwnerChange,time,40,9,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,9,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,44,9,43829)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventOwnerChange,32, 12790, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,4,6,43820)
CheckOffset(struct _GdkEventOwnerChange,window,4,6,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,6,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,8,6,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,6,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,12,6,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,6,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,16,6,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,4,6,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,20,6,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,6,43828)
CheckOffset(struct _GdkEventOwnerChange,time,24,6,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,6,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,28,6,43829)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventOwnerChange,48, 12790, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,8,3,43820)
CheckOffset(struct _GdkEventOwnerChange,window,8,3,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,3,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,16,3,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,3,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,20,3,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,3,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,24,3,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,8,3,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,32,3,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,3,43828)
CheckOffset(struct _GdkEventOwnerChange,time,40,3,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,3,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,44,3,43829)
#elif defined __i386__
CheckTypeSize(struct _GdkEventOwnerChange,32, 12790, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventOwnerChange,window,4,2,43820)
CheckOffset(struct _GdkEventOwnerChange,window,4,2,43820)
CheckMemberSize(struct _GdkEventOwnerChange,send_event,1,2,43821)
CheckOffset(struct _GdkEventOwnerChange,send_event,8,2,43821)
CheckMemberSize(struct _GdkEventOwnerChange,owner,4,2,43822)
CheckOffset(struct _GdkEventOwnerChange,owner,12,2,43822)
CheckMemberSize(struct _GdkEventOwnerChange,reason,4,2,43826)
CheckOffset(struct _GdkEventOwnerChange,reason,16,2,43826)
CheckMemberSize(struct _GdkEventOwnerChange,selection,4,2,43827)
CheckOffset(struct _GdkEventOwnerChange,selection,20,2,43827)
CheckMemberSize(struct _GdkEventOwnerChange,time,4,2,43828)
CheckOffset(struct _GdkEventOwnerChange,time,24,2,43828)
CheckMemberSize(struct _GdkEventOwnerChange,selection_time,4,2,43829)
CheckOffset(struct _GdkEventOwnerChange,selection_time,28,2,43829)
#elif 1
CheckTypeSize(struct _GdkEventOwnerChange,0, 12790, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventOwnerChange on All\n");
CheckOffset(struct _GdkEventOwnerChange,type,0,1,43819)
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
CheckTypeSize(struct _GdkEventProximity,32, 12794, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,8,12,43832)
CheckOffset(struct _GdkEventProximity,window,8,12,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,12,43833)
CheckOffset(struct _GdkEventProximity,send_event,16,12,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,12,43834)
CheckOffset(struct _GdkEventProximity,time,20,12,43834)
CheckMemberSize(struct _GdkEventProximity,device,8,12,43835)
CheckOffset(struct _GdkEventProximity,device,24,12,43835)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventProximity,32, 12794, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,8,11,43832)
CheckOffset(struct _GdkEventProximity,window,8,11,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,11,43833)
CheckOffset(struct _GdkEventProximity,send_event,16,11,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,11,43834)
CheckOffset(struct _GdkEventProximity,time,20,11,43834)
CheckMemberSize(struct _GdkEventProximity,device,8,11,43835)
CheckOffset(struct _GdkEventProximity,device,24,11,43835)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventProximity,20, 12794, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,4,10,43832)
CheckOffset(struct _GdkEventProximity,window,4,10,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,10,43833)
CheckOffset(struct _GdkEventProximity,send_event,8,10,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,10,43834)
CheckOffset(struct _GdkEventProximity,time,12,10,43834)
CheckMemberSize(struct _GdkEventProximity,device,4,10,43835)
CheckOffset(struct _GdkEventProximity,device,16,10,43835)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventProximity,32, 12794, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,8,9,43832)
CheckOffset(struct _GdkEventProximity,window,8,9,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,9,43833)
CheckOffset(struct _GdkEventProximity,send_event,16,9,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,9,43834)
CheckOffset(struct _GdkEventProximity,time,20,9,43834)
CheckMemberSize(struct _GdkEventProximity,device,8,9,43835)
CheckOffset(struct _GdkEventProximity,device,24,9,43835)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventProximity,20, 12794, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,4,6,43832)
CheckOffset(struct _GdkEventProximity,window,4,6,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,6,43833)
CheckOffset(struct _GdkEventProximity,send_event,8,6,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,6,43834)
CheckOffset(struct _GdkEventProximity,time,12,6,43834)
CheckMemberSize(struct _GdkEventProximity,device,4,6,43835)
CheckOffset(struct _GdkEventProximity,device,16,6,43835)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventProximity,32, 12794, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,8,3,43832)
CheckOffset(struct _GdkEventProximity,window,8,3,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,3,43833)
CheckOffset(struct _GdkEventProximity,send_event,16,3,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,3,43834)
CheckOffset(struct _GdkEventProximity,time,20,3,43834)
CheckMemberSize(struct _GdkEventProximity,device,8,3,43835)
CheckOffset(struct _GdkEventProximity,device,24,3,43835)
#elif defined __i386__
CheckTypeSize(struct _GdkEventProximity,20, 12794, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventProximity,window,4,2,43832)
CheckOffset(struct _GdkEventProximity,window,4,2,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,2,43833)
CheckOffset(struct _GdkEventProximity,send_event,8,2,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,2,43834)
CheckOffset(struct _GdkEventProximity,time,12,2,43834)
CheckMemberSize(struct _GdkEventProximity,device,4,2,43835)
CheckOffset(struct _GdkEventProximity,device,16,2,43835)
#elif 1
CheckTypeSize(struct _GdkEventProximity,0, 12794, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventProximity on All\n");
CheckOffset(struct _GdkEventProximity,type,0,1,43831)
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
CheckTypeSize(struct _GdkEventClient,80, 12796, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,8,12,43838)
CheckOffset(struct _GdkEventClient,window,8,12,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,12,43839)
CheckOffset(struct _GdkEventClient,send_event,16,12,43839)
CheckMemberSize(struct _GdkEventClient,message_type,8,12,43840)
CheckOffset(struct _GdkEventClient,message_type,24,12,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,12,43841)
CheckOffset(struct _GdkEventClient,data_format,32,12,43841)
CheckMemberSize(struct _GdkEventClient,data,40,12,43845)
CheckOffset(struct _GdkEventClient,data,40,12,43845)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventClient,80, 12796, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,8,11,43838)
CheckOffset(struct _GdkEventClient,window,8,11,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,11,43839)
CheckOffset(struct _GdkEventClient,send_event,16,11,43839)
CheckMemberSize(struct _GdkEventClient,message_type,8,11,43840)
CheckOffset(struct _GdkEventClient,message_type,24,11,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,11,43841)
CheckOffset(struct _GdkEventClient,data_format,32,11,43841)
CheckMemberSize(struct _GdkEventClient,data,40,11,43845)
CheckOffset(struct _GdkEventClient,data,40,11,43845)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventClient,40, 12796, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,4,10,43838)
CheckOffset(struct _GdkEventClient,window,4,10,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,10,43839)
CheckOffset(struct _GdkEventClient,send_event,8,10,43839)
CheckMemberSize(struct _GdkEventClient,message_type,4,10,43840)
CheckOffset(struct _GdkEventClient,message_type,12,10,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,10,43841)
CheckOffset(struct _GdkEventClient,data_format,16,10,43841)
CheckMemberSize(struct _GdkEventClient,data,20,10,43845)
CheckOffset(struct _GdkEventClient,data,20,10,43845)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventClient,80, 12796, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,8,9,43838)
CheckOffset(struct _GdkEventClient,window,8,9,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,9,43839)
CheckOffset(struct _GdkEventClient,send_event,16,9,43839)
CheckMemberSize(struct _GdkEventClient,message_type,8,9,43840)
CheckOffset(struct _GdkEventClient,message_type,24,9,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,9,43841)
CheckOffset(struct _GdkEventClient,data_format,32,9,43841)
CheckMemberSize(struct _GdkEventClient,data,40,9,43845)
CheckOffset(struct _GdkEventClient,data,40,9,43845)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventClient,40, 12796, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,4,6,43838)
CheckOffset(struct _GdkEventClient,window,4,6,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,6,43839)
CheckOffset(struct _GdkEventClient,send_event,8,6,43839)
CheckMemberSize(struct _GdkEventClient,message_type,4,6,43840)
CheckOffset(struct _GdkEventClient,message_type,12,6,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,6,43841)
CheckOffset(struct _GdkEventClient,data_format,16,6,43841)
CheckMemberSize(struct _GdkEventClient,data,20,6,43845)
CheckOffset(struct _GdkEventClient,data,20,6,43845)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventClient,80, 12796, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,8,3,43838)
CheckOffset(struct _GdkEventClient,window,8,3,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,3,43839)
CheckOffset(struct _GdkEventClient,send_event,16,3,43839)
CheckMemberSize(struct _GdkEventClient,message_type,8,3,43840)
CheckOffset(struct _GdkEventClient,message_type,24,3,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,3,43841)
CheckOffset(struct _GdkEventClient,data_format,32,3,43841)
CheckMemberSize(struct _GdkEventClient,data,40,3,43845)
CheckOffset(struct _GdkEventClient,data,40,3,43845)
#elif defined __i386__
CheckTypeSize(struct _GdkEventClient,40, 12796, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventClient,window,4,2,43838)
CheckOffset(struct _GdkEventClient,window,4,2,43838)
CheckMemberSize(struct _GdkEventClient,send_event,1,2,43839)
CheckOffset(struct _GdkEventClient,send_event,8,2,43839)
CheckMemberSize(struct _GdkEventClient,message_type,4,2,43840)
CheckOffset(struct _GdkEventClient,message_type,12,2,43840)
CheckMemberSize(struct _GdkEventClient,data_format,2,2,43841)
CheckOffset(struct _GdkEventClient,data_format,16,2,43841)
CheckMemberSize(struct _GdkEventClient,data,20,2,43845)
CheckOffset(struct _GdkEventClient,data,20,2,43845)
#elif 1
CheckTypeSize(struct _GdkEventClient,0, 12796, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventClient on All\n");
CheckOffset(struct _GdkEventClient,type,0,1,43837)
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
CheckTypeSize(struct _GdkEventDND,40, 12801, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,8,12,43848)
CheckOffset(struct _GdkEventDND,window,8,12,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,12,43849)
CheckOffset(struct _GdkEventDND,send_event,16,12,43849)
CheckMemberSize(struct _GdkEventDND,context,8,12,43874)
CheckOffset(struct _GdkEventDND,context,24,12,43874)
CheckMemberSize(struct _GdkEventDND,time,4,12,43875)
CheckOffset(struct _GdkEventDND,time,32,12,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,12,43876)
CheckOffset(struct _GdkEventDND,x_root,36,12,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,12,43877)
CheckOffset(struct _GdkEventDND,y_root,38,12,43877)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventDND,40, 12801, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,8,11,43848)
CheckOffset(struct _GdkEventDND,window,8,11,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,11,43849)
CheckOffset(struct _GdkEventDND,send_event,16,11,43849)
CheckMemberSize(struct _GdkEventDND,context,8,11,43874)
CheckOffset(struct _GdkEventDND,context,24,11,43874)
CheckMemberSize(struct _GdkEventDND,time,4,11,43875)
CheckOffset(struct _GdkEventDND,time,32,11,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,11,43876)
CheckOffset(struct _GdkEventDND,x_root,36,11,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,11,43877)
CheckOffset(struct _GdkEventDND,y_root,38,11,43877)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventDND,24, 12801, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,4,10,43848)
CheckOffset(struct _GdkEventDND,window,4,10,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,10,43849)
CheckOffset(struct _GdkEventDND,send_event,8,10,43849)
CheckMemberSize(struct _GdkEventDND,context,4,10,43874)
CheckOffset(struct _GdkEventDND,context,12,10,43874)
CheckMemberSize(struct _GdkEventDND,time,4,10,43875)
CheckOffset(struct _GdkEventDND,time,16,10,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,10,43876)
CheckOffset(struct _GdkEventDND,x_root,20,10,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,10,43877)
CheckOffset(struct _GdkEventDND,y_root,22,10,43877)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventDND,40, 12801, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,8,9,43848)
CheckOffset(struct _GdkEventDND,window,8,9,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,9,43849)
CheckOffset(struct _GdkEventDND,send_event,16,9,43849)
CheckMemberSize(struct _GdkEventDND,context,8,9,43874)
CheckOffset(struct _GdkEventDND,context,24,9,43874)
CheckMemberSize(struct _GdkEventDND,time,4,9,43875)
CheckOffset(struct _GdkEventDND,time,32,9,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,9,43876)
CheckOffset(struct _GdkEventDND,x_root,36,9,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,9,43877)
CheckOffset(struct _GdkEventDND,y_root,38,9,43877)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventDND,24, 12801, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,4,6,43848)
CheckOffset(struct _GdkEventDND,window,4,6,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,6,43849)
CheckOffset(struct _GdkEventDND,send_event,8,6,43849)
CheckMemberSize(struct _GdkEventDND,context,4,6,43874)
CheckOffset(struct _GdkEventDND,context,12,6,43874)
CheckMemberSize(struct _GdkEventDND,time,4,6,43875)
CheckOffset(struct _GdkEventDND,time,16,6,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,6,43876)
CheckOffset(struct _GdkEventDND,x_root,20,6,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,6,43877)
CheckOffset(struct _GdkEventDND,y_root,22,6,43877)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventDND,40, 12801, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,8,3,43848)
CheckOffset(struct _GdkEventDND,window,8,3,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,3,43849)
CheckOffset(struct _GdkEventDND,send_event,16,3,43849)
CheckMemberSize(struct _GdkEventDND,context,8,3,43874)
CheckOffset(struct _GdkEventDND,context,24,3,43874)
CheckMemberSize(struct _GdkEventDND,time,4,3,43875)
CheckOffset(struct _GdkEventDND,time,32,3,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,3,43876)
CheckOffset(struct _GdkEventDND,x_root,36,3,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,3,43877)
CheckOffset(struct _GdkEventDND,y_root,38,3,43877)
#elif defined __i386__
CheckTypeSize(struct _GdkEventDND,24, 12801, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventDND,window,4,2,43848)
CheckOffset(struct _GdkEventDND,window,4,2,43848)
CheckMemberSize(struct _GdkEventDND,send_event,1,2,43849)
CheckOffset(struct _GdkEventDND,send_event,8,2,43849)
CheckMemberSize(struct _GdkEventDND,context,4,2,43874)
CheckOffset(struct _GdkEventDND,context,12,2,43874)
CheckMemberSize(struct _GdkEventDND,time,4,2,43875)
CheckOffset(struct _GdkEventDND,time,16,2,43875)
CheckMemberSize(struct _GdkEventDND,x_root,2,2,43876)
CheckOffset(struct _GdkEventDND,x_root,20,2,43876)
CheckMemberSize(struct _GdkEventDND,y_root,2,2,43877)
CheckOffset(struct _GdkEventDND,y_root,22,2,43877)
#elif 1
CheckTypeSize(struct _GdkEventDND,0, 12801, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventDND on All\n");
CheckOffset(struct _GdkEventDND,type,0,1,43847)
#endif

#if defined __s390x__
CheckTypeSize(struct _GdkDragContext,80, 12802, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,12,43858)
CheckOffset(struct _GdkDragContext,protocol,24,12,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,12,43859)
CheckOffset(struct _GdkDragContext,is_source,28,12,43859)
CheckMemberSize(struct _GdkDragContext,source_window,8,12,43860)
CheckOffset(struct _GdkDragContext,source_window,32,12,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,8,12,43861)
CheckOffset(struct _GdkDragContext,dest_window,40,12,43861)
CheckMemberSize(struct _GdkDragContext,targets,8,12,43862)
CheckOffset(struct _GdkDragContext,targets,48,12,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,12,43869)
CheckOffset(struct _GdkDragContext,actions,56,12,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,12,43870)
CheckOffset(struct _GdkDragContext,suggested_action,60,12,43870)
CheckMemberSize(struct _GdkDragContext,action,4,12,43871)
CheckOffset(struct _GdkDragContext,action,64,12,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,12,43872)
CheckOffset(struct _GdkDragContext,start_time,68,12,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,8,12,43873)
CheckOffset(struct _GdkDragContext,windowing_data,72,12,43873)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDragContext,80, 12802, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,11,43858)
CheckOffset(struct _GdkDragContext,protocol,24,11,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,11,43859)
CheckOffset(struct _GdkDragContext,is_source,28,11,43859)
CheckMemberSize(struct _GdkDragContext,source_window,8,11,43860)
CheckOffset(struct _GdkDragContext,source_window,32,11,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,8,11,43861)
CheckOffset(struct _GdkDragContext,dest_window,40,11,43861)
CheckMemberSize(struct _GdkDragContext,targets,8,11,43862)
CheckOffset(struct _GdkDragContext,targets,48,11,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,11,43869)
CheckOffset(struct _GdkDragContext,actions,56,11,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,11,43870)
CheckOffset(struct _GdkDragContext,suggested_action,60,11,43870)
CheckMemberSize(struct _GdkDragContext,action,4,11,43871)
CheckOffset(struct _GdkDragContext,action,64,11,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,11,43872)
CheckOffset(struct _GdkDragContext,start_time,68,11,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,8,11,43873)
CheckOffset(struct _GdkDragContext,windowing_data,72,11,43873)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDragContext,52, 12802, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,10,43858)
CheckOffset(struct _GdkDragContext,protocol,12,10,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,10,43859)
CheckOffset(struct _GdkDragContext,is_source,16,10,43859)
CheckMemberSize(struct _GdkDragContext,source_window,4,10,43860)
CheckOffset(struct _GdkDragContext,source_window,20,10,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,4,10,43861)
CheckOffset(struct _GdkDragContext,dest_window,24,10,43861)
CheckMemberSize(struct _GdkDragContext,targets,4,10,43862)
CheckOffset(struct _GdkDragContext,targets,28,10,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,10,43869)
CheckOffset(struct _GdkDragContext,actions,32,10,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,10,43870)
CheckOffset(struct _GdkDragContext,suggested_action,36,10,43870)
CheckMemberSize(struct _GdkDragContext,action,4,10,43871)
CheckOffset(struct _GdkDragContext,action,40,10,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,10,43872)
CheckOffset(struct _GdkDragContext,start_time,44,10,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,4,10,43873)
CheckOffset(struct _GdkDragContext,windowing_data,48,10,43873)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDragContext,80, 12802, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,9,43858)
CheckOffset(struct _GdkDragContext,protocol,24,9,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,9,43859)
CheckOffset(struct _GdkDragContext,is_source,28,9,43859)
CheckMemberSize(struct _GdkDragContext,source_window,8,9,43860)
CheckOffset(struct _GdkDragContext,source_window,32,9,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,8,9,43861)
CheckOffset(struct _GdkDragContext,dest_window,40,9,43861)
CheckMemberSize(struct _GdkDragContext,targets,8,9,43862)
CheckOffset(struct _GdkDragContext,targets,48,9,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,9,43869)
CheckOffset(struct _GdkDragContext,actions,56,9,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,9,43870)
CheckOffset(struct _GdkDragContext,suggested_action,60,9,43870)
CheckMemberSize(struct _GdkDragContext,action,4,9,43871)
CheckOffset(struct _GdkDragContext,action,64,9,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,9,43872)
CheckOffset(struct _GdkDragContext,start_time,68,9,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,8,9,43873)
CheckOffset(struct _GdkDragContext,windowing_data,72,9,43873)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDragContext,52, 12802, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,6,43858)
CheckOffset(struct _GdkDragContext,protocol,12,6,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,6,43859)
CheckOffset(struct _GdkDragContext,is_source,16,6,43859)
CheckMemberSize(struct _GdkDragContext,source_window,4,6,43860)
CheckOffset(struct _GdkDragContext,source_window,20,6,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,4,6,43861)
CheckOffset(struct _GdkDragContext,dest_window,24,6,43861)
CheckMemberSize(struct _GdkDragContext,targets,4,6,43862)
CheckOffset(struct _GdkDragContext,targets,28,6,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,6,43869)
CheckOffset(struct _GdkDragContext,actions,32,6,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,6,43870)
CheckOffset(struct _GdkDragContext,suggested_action,36,6,43870)
CheckMemberSize(struct _GdkDragContext,action,4,6,43871)
CheckOffset(struct _GdkDragContext,action,40,6,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,6,43872)
CheckOffset(struct _GdkDragContext,start_time,44,6,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,4,6,43873)
CheckOffset(struct _GdkDragContext,windowing_data,48,6,43873)
#elif defined __ia64__
CheckTypeSize(struct _GdkDragContext,80, 12802, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,3,43858)
CheckOffset(struct _GdkDragContext,protocol,24,3,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,3,43859)
CheckOffset(struct _GdkDragContext,is_source,28,3,43859)
CheckMemberSize(struct _GdkDragContext,source_window,8,3,43860)
CheckOffset(struct _GdkDragContext,source_window,32,3,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,8,3,43861)
CheckOffset(struct _GdkDragContext,dest_window,40,3,43861)
CheckMemberSize(struct _GdkDragContext,targets,8,3,43862)
CheckOffset(struct _GdkDragContext,targets,48,3,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,3,43869)
CheckOffset(struct _GdkDragContext,actions,56,3,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,3,43870)
CheckOffset(struct _GdkDragContext,suggested_action,60,3,43870)
CheckMemberSize(struct _GdkDragContext,action,4,3,43871)
CheckOffset(struct _GdkDragContext,action,64,3,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,3,43872)
CheckOffset(struct _GdkDragContext,start_time,68,3,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,8,3,43873)
CheckOffset(struct _GdkDragContext,windowing_data,72,3,43873)
#elif defined __i386__
CheckTypeSize(struct _GdkDragContext,52, 12802, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDragContext,protocol,4,2,43858)
CheckOffset(struct _GdkDragContext,protocol,12,2,43858)
CheckMemberSize(struct _GdkDragContext,is_source,4,2,43859)
CheckOffset(struct _GdkDragContext,is_source,16,2,43859)
CheckMemberSize(struct _GdkDragContext,source_window,4,2,43860)
CheckOffset(struct _GdkDragContext,source_window,20,2,43860)
CheckMemberSize(struct _GdkDragContext,dest_window,4,2,43861)
CheckOffset(struct _GdkDragContext,dest_window,24,2,43861)
CheckMemberSize(struct _GdkDragContext,targets,4,2,43862)
CheckOffset(struct _GdkDragContext,targets,28,2,43862)
CheckMemberSize(struct _GdkDragContext,actions,4,2,43869)
CheckOffset(struct _GdkDragContext,actions,32,2,43869)
CheckMemberSize(struct _GdkDragContext,suggested_action,4,2,43870)
CheckOffset(struct _GdkDragContext,suggested_action,36,2,43870)
CheckMemberSize(struct _GdkDragContext,action,4,2,43871)
CheckOffset(struct _GdkDragContext,action,40,2,43871)
CheckMemberSize(struct _GdkDragContext,start_time,4,2,43872)
CheckOffset(struct _GdkDragContext,start_time,44,2,43872)
CheckMemberSize(struct _GdkDragContext,windowing_data,4,2,43873)
CheckOffset(struct _GdkDragContext,windowing_data,48,2,43873)
#elif 1
CheckTypeSize(struct _GdkDragContext,0, 12802, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContext on All\n");
CheckOffset(struct _GdkDragContext,parent_instance,0,1,43850)
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
CheckTypeSize(struct _GdkEventWindowState,32, 12811, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,8,12,43880)
CheckOffset(struct _GdkEventWindowState,window,8,12,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,12,43881)
CheckOffset(struct _GdkEventWindowState,send_event,16,12,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,12,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,20,12,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,12,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,24,12,43890)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventWindowState,32, 12811, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,8,11,43880)
CheckOffset(struct _GdkEventWindowState,window,8,11,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,11,43881)
CheckOffset(struct _GdkEventWindowState,send_event,16,11,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,11,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,20,11,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,11,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,24,11,43890)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventWindowState,20, 12811, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,4,10,43880)
CheckOffset(struct _GdkEventWindowState,window,4,10,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,10,43881)
CheckOffset(struct _GdkEventWindowState,send_event,8,10,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,10,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,12,10,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,10,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,16,10,43890)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventWindowState,32, 12811, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,8,9,43880)
CheckOffset(struct _GdkEventWindowState,window,8,9,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,9,43881)
CheckOffset(struct _GdkEventWindowState,send_event,16,9,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,9,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,20,9,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,9,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,24,9,43890)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventWindowState,20, 12811, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,4,6,43880)
CheckOffset(struct _GdkEventWindowState,window,4,6,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,6,43881)
CheckOffset(struct _GdkEventWindowState,send_event,8,6,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,6,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,12,6,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,6,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,16,6,43890)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventWindowState,32, 12811, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,8,3,43880)
CheckOffset(struct _GdkEventWindowState,window,8,3,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,3,43881)
CheckOffset(struct _GdkEventWindowState,send_event,16,3,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,3,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,20,3,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,3,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,24,3,43890)
#elif defined __i386__
CheckTypeSize(struct _GdkEventWindowState,20, 12811, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventWindowState,window,4,2,43880)
CheckOffset(struct _GdkEventWindowState,window,4,2,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,2,43881)
CheckOffset(struct _GdkEventWindowState,send_event,8,2,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,2,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,12,2,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,2,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,16,2,43890)
#elif 1
CheckTypeSize(struct _GdkEventWindowState,0, 12811, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventWindowState on All\n");
CheckOffset(struct _GdkEventWindowState,type,0,1,43879)
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
CheckTypeSize(struct _GdkEventSetting,32, 12815, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,8,12,43893)
CheckOffset(struct _GdkEventSetting,window,8,12,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,12,43894)
CheckOffset(struct _GdkEventSetting,send_event,16,12,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,12,43898)
CheckOffset(struct _GdkEventSetting,action,20,12,43898)
CheckMemberSize(struct _GdkEventSetting,name,8,12,43899)
CheckOffset(struct _GdkEventSetting,name,24,12,43899)
#elif defined __x86_64__
CheckTypeSize(struct _GdkEventSetting,32, 12815, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,8,11,43893)
CheckOffset(struct _GdkEventSetting,window,8,11,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,11,43894)
CheckOffset(struct _GdkEventSetting,send_event,16,11,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,11,43898)
CheckOffset(struct _GdkEventSetting,action,20,11,43898)
CheckMemberSize(struct _GdkEventSetting,name,8,11,43899)
CheckOffset(struct _GdkEventSetting,name,24,11,43899)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkEventSetting,20, 12815, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,4,10,43893)
CheckOffset(struct _GdkEventSetting,window,4,10,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,10,43894)
CheckOffset(struct _GdkEventSetting,send_event,8,10,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,10,43898)
CheckOffset(struct _GdkEventSetting,action,12,10,43898)
CheckMemberSize(struct _GdkEventSetting,name,4,10,43899)
CheckOffset(struct _GdkEventSetting,name,16,10,43899)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkEventSetting,32, 12815, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,8,9,43893)
CheckOffset(struct _GdkEventSetting,window,8,9,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,9,43894)
CheckOffset(struct _GdkEventSetting,send_event,16,9,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,9,43898)
CheckOffset(struct _GdkEventSetting,action,20,9,43898)
CheckMemberSize(struct _GdkEventSetting,name,8,9,43899)
CheckOffset(struct _GdkEventSetting,name,24,9,43899)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkEventSetting,20, 12815, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,4,6,43893)
CheckOffset(struct _GdkEventSetting,window,4,6,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,6,43894)
CheckOffset(struct _GdkEventSetting,send_event,8,6,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,6,43898)
CheckOffset(struct _GdkEventSetting,action,12,6,43898)
CheckMemberSize(struct _GdkEventSetting,name,4,6,43899)
CheckOffset(struct _GdkEventSetting,name,16,6,43899)
#elif defined __ia64__
CheckTypeSize(struct _GdkEventSetting,32, 12815, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,8,3,43893)
CheckOffset(struct _GdkEventSetting,window,8,3,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,3,43894)
CheckOffset(struct _GdkEventSetting,send_event,16,3,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,3,43898)
CheckOffset(struct _GdkEventSetting,action,20,3,43898)
CheckMemberSize(struct _GdkEventSetting,name,8,3,43899)
CheckOffset(struct _GdkEventSetting,name,24,3,43899)
#elif defined __i386__
CheckTypeSize(struct _GdkEventSetting,20, 12815, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkEventSetting,window,4,2,43893)
CheckOffset(struct _GdkEventSetting,window,4,2,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,2,43894)
CheckOffset(struct _GdkEventSetting,send_event,8,2,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,2,43898)
CheckOffset(struct _GdkEventSetting,action,12,2,43898)
CheckMemberSize(struct _GdkEventSetting,name,4,2,43899)
CheckOffset(struct _GdkEventSetting,name,16,2,43899)
#elif 1
CheckTypeSize(struct _GdkEventSetting,0, 12815, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkEventSetting on All\n");
CheckOffset(struct _GdkEventSetting,type,0,1,43892)
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
CheckTypeSize(struct _GdkImage,88, 12837, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,12,43918)
CheckOffset(struct _GdkImage,type,24,12,43918)
CheckMemberSize(struct _GdkImage,visual,8,12,43919)
CheckOffset(struct _GdkImage,visual,32,12,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,12,43920)
CheckOffset(struct _GdkImage,byte_order,40,12,43920)
CheckMemberSize(struct _GdkImage,width,4,12,43921)
CheckOffset(struct _GdkImage,width,44,12,43921)
CheckMemberSize(struct _GdkImage,height,4,12,43922)
CheckOffset(struct _GdkImage,height,48,12,43922)
CheckMemberSize(struct _GdkImage,depth,2,12,43923)
CheckOffset(struct _GdkImage,depth,52,12,43923)
CheckMemberSize(struct _GdkImage,bpp,2,12,43924)
CheckOffset(struct _GdkImage,bpp,54,12,43924)
CheckMemberSize(struct _GdkImage,bpl,2,12,43925)
CheckOffset(struct _GdkImage,bpl,56,12,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,12,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,58,12,43926)
CheckMemberSize(struct _GdkImage,mem,8,12,43927)
CheckOffset(struct _GdkImage,mem,64,12,43927)
CheckMemberSize(struct _GdkImage,colormap,8,12,43928)
CheckOffset(struct _GdkImage,colormap,72,12,43928)
CheckMemberSize(struct _GdkImage,windowing_data,8,12,43929)
CheckOffset(struct _GdkImage,windowing_data,80,12,43929)
#elif defined __x86_64__
CheckTypeSize(struct _GdkImage,88, 12837, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,11,43918)
CheckOffset(struct _GdkImage,type,24,11,43918)
CheckMemberSize(struct _GdkImage,visual,8,11,43919)
CheckOffset(struct _GdkImage,visual,32,11,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,11,43920)
CheckOffset(struct _GdkImage,byte_order,40,11,43920)
CheckMemberSize(struct _GdkImage,width,4,11,43921)
CheckOffset(struct _GdkImage,width,44,11,43921)
CheckMemberSize(struct _GdkImage,height,4,11,43922)
CheckOffset(struct _GdkImage,height,48,11,43922)
CheckMemberSize(struct _GdkImage,depth,2,11,43923)
CheckOffset(struct _GdkImage,depth,52,11,43923)
CheckMemberSize(struct _GdkImage,bpp,2,11,43924)
CheckOffset(struct _GdkImage,bpp,54,11,43924)
CheckMemberSize(struct _GdkImage,bpl,2,11,43925)
CheckOffset(struct _GdkImage,bpl,56,11,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,11,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,58,11,43926)
CheckMemberSize(struct _GdkImage,mem,8,11,43927)
CheckOffset(struct _GdkImage,mem,64,11,43927)
CheckMemberSize(struct _GdkImage,colormap,8,11,43928)
CheckOffset(struct _GdkImage,colormap,72,11,43928)
CheckMemberSize(struct _GdkImage,windowing_data,8,11,43929)
CheckOffset(struct _GdkImage,windowing_data,80,11,43929)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkImage,52, 12837, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,10,43918)
CheckOffset(struct _GdkImage,type,12,10,43918)
CheckMemberSize(struct _GdkImage,visual,4,10,43919)
CheckOffset(struct _GdkImage,visual,16,10,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,10,43920)
CheckOffset(struct _GdkImage,byte_order,20,10,43920)
CheckMemberSize(struct _GdkImage,width,4,10,43921)
CheckOffset(struct _GdkImage,width,24,10,43921)
CheckMemberSize(struct _GdkImage,height,4,10,43922)
CheckOffset(struct _GdkImage,height,28,10,43922)
CheckMemberSize(struct _GdkImage,depth,2,10,43923)
CheckOffset(struct _GdkImage,depth,32,10,43923)
CheckMemberSize(struct _GdkImage,bpp,2,10,43924)
CheckOffset(struct _GdkImage,bpp,34,10,43924)
CheckMemberSize(struct _GdkImage,bpl,2,10,43925)
CheckOffset(struct _GdkImage,bpl,36,10,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,10,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,38,10,43926)
CheckMemberSize(struct _GdkImage,mem,4,10,43927)
CheckOffset(struct _GdkImage,mem,40,10,43927)
CheckMemberSize(struct _GdkImage,colormap,4,10,43928)
CheckOffset(struct _GdkImage,colormap,44,10,43928)
CheckMemberSize(struct _GdkImage,windowing_data,4,10,43929)
CheckOffset(struct _GdkImage,windowing_data,48,10,43929)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkImage,88, 12837, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,9,43918)
CheckOffset(struct _GdkImage,type,24,9,43918)
CheckMemberSize(struct _GdkImage,visual,8,9,43919)
CheckOffset(struct _GdkImage,visual,32,9,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,9,43920)
CheckOffset(struct _GdkImage,byte_order,40,9,43920)
CheckMemberSize(struct _GdkImage,width,4,9,43921)
CheckOffset(struct _GdkImage,width,44,9,43921)
CheckMemberSize(struct _GdkImage,height,4,9,43922)
CheckOffset(struct _GdkImage,height,48,9,43922)
CheckMemberSize(struct _GdkImage,depth,2,9,43923)
CheckOffset(struct _GdkImage,depth,52,9,43923)
CheckMemberSize(struct _GdkImage,bpp,2,9,43924)
CheckOffset(struct _GdkImage,bpp,54,9,43924)
CheckMemberSize(struct _GdkImage,bpl,2,9,43925)
CheckOffset(struct _GdkImage,bpl,56,9,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,9,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,58,9,43926)
CheckMemberSize(struct _GdkImage,mem,8,9,43927)
CheckOffset(struct _GdkImage,mem,64,9,43927)
CheckMemberSize(struct _GdkImage,colormap,8,9,43928)
CheckOffset(struct _GdkImage,colormap,72,9,43928)
CheckMemberSize(struct _GdkImage,windowing_data,8,9,43929)
CheckOffset(struct _GdkImage,windowing_data,80,9,43929)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkImage,52, 12837, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,6,43918)
CheckOffset(struct _GdkImage,type,12,6,43918)
CheckMemberSize(struct _GdkImage,visual,4,6,43919)
CheckOffset(struct _GdkImage,visual,16,6,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,6,43920)
CheckOffset(struct _GdkImage,byte_order,20,6,43920)
CheckMemberSize(struct _GdkImage,width,4,6,43921)
CheckOffset(struct _GdkImage,width,24,6,43921)
CheckMemberSize(struct _GdkImage,height,4,6,43922)
CheckOffset(struct _GdkImage,height,28,6,43922)
CheckMemberSize(struct _GdkImage,depth,2,6,43923)
CheckOffset(struct _GdkImage,depth,32,6,43923)
CheckMemberSize(struct _GdkImage,bpp,2,6,43924)
CheckOffset(struct _GdkImage,bpp,34,6,43924)
CheckMemberSize(struct _GdkImage,bpl,2,6,43925)
CheckOffset(struct _GdkImage,bpl,36,6,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,6,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,38,6,43926)
CheckMemberSize(struct _GdkImage,mem,4,6,43927)
CheckOffset(struct _GdkImage,mem,40,6,43927)
CheckMemberSize(struct _GdkImage,colormap,4,6,43928)
CheckOffset(struct _GdkImage,colormap,44,6,43928)
CheckMemberSize(struct _GdkImage,windowing_data,4,6,43929)
CheckOffset(struct _GdkImage,windowing_data,48,6,43929)
#elif defined __ia64__
CheckTypeSize(struct _GdkImage,88, 12837, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,3,43918)
CheckOffset(struct _GdkImage,type,24,3,43918)
CheckMemberSize(struct _GdkImage,visual,8,3,43919)
CheckOffset(struct _GdkImage,visual,32,3,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,3,43920)
CheckOffset(struct _GdkImage,byte_order,40,3,43920)
CheckMemberSize(struct _GdkImage,width,4,3,43921)
CheckOffset(struct _GdkImage,width,44,3,43921)
CheckMemberSize(struct _GdkImage,height,4,3,43922)
CheckOffset(struct _GdkImage,height,48,3,43922)
CheckMemberSize(struct _GdkImage,depth,2,3,43923)
CheckOffset(struct _GdkImage,depth,52,3,43923)
CheckMemberSize(struct _GdkImage,bpp,2,3,43924)
CheckOffset(struct _GdkImage,bpp,54,3,43924)
CheckMemberSize(struct _GdkImage,bpl,2,3,43925)
CheckOffset(struct _GdkImage,bpl,56,3,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,3,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,58,3,43926)
CheckMemberSize(struct _GdkImage,mem,8,3,43927)
CheckOffset(struct _GdkImage,mem,64,3,43927)
CheckMemberSize(struct _GdkImage,colormap,8,3,43928)
CheckOffset(struct _GdkImage,colormap,72,3,43928)
CheckMemberSize(struct _GdkImage,windowing_data,8,3,43929)
CheckOffset(struct _GdkImage,windowing_data,80,3,43929)
#elif defined __i386__
CheckTypeSize(struct _GdkImage,52, 12837, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkImage,type,4,2,43918)
CheckOffset(struct _GdkImage,type,12,2,43918)
CheckMemberSize(struct _GdkImage,visual,4,2,43919)
CheckOffset(struct _GdkImage,visual,16,2,43919)
CheckMemberSize(struct _GdkImage,byte_order,4,2,43920)
CheckOffset(struct _GdkImage,byte_order,20,2,43920)
CheckMemberSize(struct _GdkImage,width,4,2,43921)
CheckOffset(struct _GdkImage,width,24,2,43921)
CheckMemberSize(struct _GdkImage,height,4,2,43922)
CheckOffset(struct _GdkImage,height,28,2,43922)
CheckMemberSize(struct _GdkImage,depth,2,2,43923)
CheckOffset(struct _GdkImage,depth,32,2,43923)
CheckMemberSize(struct _GdkImage,bpp,2,2,43924)
CheckOffset(struct _GdkImage,bpp,34,2,43924)
CheckMemberSize(struct _GdkImage,bpl,2,2,43925)
CheckOffset(struct _GdkImage,bpl,36,2,43925)
CheckMemberSize(struct _GdkImage,bits_per_pixel,2,2,43926)
CheckOffset(struct _GdkImage,bits_per_pixel,38,2,43926)
CheckMemberSize(struct _GdkImage,mem,4,2,43927)
CheckOffset(struct _GdkImage,mem,40,2,43927)
CheckMemberSize(struct _GdkImage,colormap,4,2,43928)
CheckOffset(struct _GdkImage,colormap,44,2,43928)
CheckMemberSize(struct _GdkImage,windowing_data,4,2,43929)
CheckOffset(struct _GdkImage,windowing_data,48,2,43929)
#elif 1
CheckTypeSize(struct _GdkImage,0, 12837, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkImage on All\n");
CheckOffset(struct _GdkImage,parent_instance,0,1,43914)
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
CheckTypeSize(struct _GdkPangoRenderer,64, 12844, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,8,12,43931)
CheckOffset(struct _GdkPangoRenderer,priv,56,12,43931)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPangoRenderer,64, 12844, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,8,11,43931)
CheckOffset(struct _GdkPangoRenderer,priv,56,11,43931)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPangoRenderer,36, 12844, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,4,10,43931)
CheckOffset(struct _GdkPangoRenderer,priv,32,10,43931)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPangoRenderer,64, 12844, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,8,9,43931)
CheckOffset(struct _GdkPangoRenderer,priv,56,9,43931)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPangoRenderer,36, 12844, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,4,6,43931)
CheckOffset(struct _GdkPangoRenderer,priv,32,6,43931)
#elif defined __ia64__
CheckTypeSize(struct _GdkPangoRenderer,64, 12844, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,8,3,43931)
CheckOffset(struct _GdkPangoRenderer,priv,56,3,43931)
#elif defined __i386__
CheckTypeSize(struct _GdkPangoRenderer,36, 12844, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoRenderer,priv,4,2,43931)
CheckOffset(struct _GdkPangoRenderer,priv,32,2,43931)
#elif 1
CheckTypeSize(struct _GdkPangoRenderer,0, 12844, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRenderer on All\n");
CheckOffset(struct _GdkPangoRenderer,parent_instance,0,1,43930)
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
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,12,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,12,43950)
#elif defined __x86_64__
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,11,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,11,43950)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,10,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,10,43950)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,9,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,9,43950)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,6,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,6,43950)
#elif defined __ia64__
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,3,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,3,43950)
#elif defined __i386__
CheckTypeSize(struct _GdkTimeCoord,1028, 12858, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,2,43950)
CheckOffset(struct _GdkTimeCoord,axes,4,2,43950)
#elif 1
CheckTypeSize(struct _GdkTimeCoord,0, 12858, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkTimeCoord on All\n");
CheckOffset(struct _GdkTimeCoord,time,0,1,43949)
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
CheckTypeSize(struct _GdkPoint,8, 12863, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,12,43952)
CheckOffset(struct _GdkPoint,y,4,12,43952)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPoint,8, 12863, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,11,43952)
CheckOffset(struct _GdkPoint,y,4,11,43952)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPoint,8, 12863, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,10,43952)
CheckOffset(struct _GdkPoint,y,4,10,43952)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPoint,8, 12863, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,9,43952)
CheckOffset(struct _GdkPoint,y,4,9,43952)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPoint,8, 12863, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,6,43952)
CheckOffset(struct _GdkPoint,y,4,6,43952)
#elif defined __ia64__
CheckTypeSize(struct _GdkPoint,8, 12863, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,3,43952)
CheckOffset(struct _GdkPoint,y,4,3,43952)
#elif defined __i386__
CheckTypeSize(struct _GdkPoint,8, 12863, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPoint,y,4,2,43952)
CheckOffset(struct _GdkPoint,y,4,2,43952)
#elif 1
CheckTypeSize(struct _GdkPoint,0, 12863, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPoint on All\n");
CheckOffset(struct _GdkPoint,x,0,1,43951)
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
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,12,43969)
CheckOffset(struct _GdkKeymapKey,group,4,12,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,12,43970)
CheckOffset(struct _GdkKeymapKey,level,8,12,43970)
#elif defined __x86_64__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,11,43969)
CheckOffset(struct _GdkKeymapKey,group,4,11,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,11,43970)
CheckOffset(struct _GdkKeymapKey,level,8,11,43970)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,10,43969)
CheckOffset(struct _GdkKeymapKey,group,4,10,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,10,43970)
CheckOffset(struct _GdkKeymapKey,level,8,10,43970)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,9,43969)
CheckOffset(struct _GdkKeymapKey,group,4,9,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,9,43970)
CheckOffset(struct _GdkKeymapKey,level,8,9,43970)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,6,43969)
CheckOffset(struct _GdkKeymapKey,group,4,6,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,6,43970)
CheckOffset(struct _GdkKeymapKey,level,8,6,43970)
#elif defined __ia64__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,3,43969)
CheckOffset(struct _GdkKeymapKey,group,4,3,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,3,43970)
CheckOffset(struct _GdkKeymapKey,level,8,3,43970)
#elif defined __i386__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapKey,group,4,2,43969)
CheckOffset(struct _GdkKeymapKey,group,4,2,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,2,43970)
CheckOffset(struct _GdkKeymapKey,level,8,2,43970)
#elif 1
CheckTypeSize(struct _GdkKeymapKey,0, 12875, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkKeymapKey on All\n");
CheckOffset(struct _GdkKeymapKey,keycode,0,1,43968)
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
CheckTypeSize(struct _GdkRgbCmap,1040, 12882, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,12,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,12,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,8,12,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1032,12,43976)
#elif defined __x86_64__
CheckTypeSize(struct _GdkRgbCmap,1040, 12882, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,11,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,11,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,8,11,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1032,11,43976)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkRgbCmap,1032, 12882, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,10,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,10,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,4,10,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1028,10,43976)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkRgbCmap,1040, 12882, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,9,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,9,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,8,9,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1032,9,43976)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkRgbCmap,1032, 12882, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,6,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,6,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,4,6,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1028,6,43976)
#elif defined __ia64__
CheckTypeSize(struct _GdkRgbCmap,1040, 12882, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,3,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,3,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,8,3,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1032,3,43976)
#elif defined __i386__
CheckTypeSize(struct _GdkRgbCmap,1032, 12882, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,2,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,2,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,4,2,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1028,2,43976)
#elif 1
CheckTypeSize(struct _GdkRgbCmap,0, 12882, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkRgbCmap on All\n");
CheckOffset(struct _GdkRgbCmap,colors,0,1,43974)
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
CheckTypeSize(struct _GdkGCValues,104, 12888, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,12,43978)
CheckOffset(struct _GdkGCValues,background,12,12,43978)
CheckMemberSize(struct _GdkGCValues,font,8,12,43979)
CheckOffset(struct _GdkGCValues,font,24,12,43979)
CheckMemberSize(struct _GdkGCValues,function,4,12,43996)
CheckOffset(struct _GdkGCValues,function,32,12,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,12,43997)
CheckOffset(struct _GdkGCValues,fill,36,12,43997)
CheckMemberSize(struct _GdkGCValues,tile,8,12,43998)
CheckOffset(struct _GdkGCValues,tile,40,12,43998)
CheckMemberSize(struct _GdkGCValues,stipple,8,12,43999)
CheckOffset(struct _GdkGCValues,stipple,48,12,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,8,12,44000)
CheckOffset(struct _GdkGCValues,clip_mask,56,12,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,12,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,64,12,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,12,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,68,12,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,12,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,72,12,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,12,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,76,12,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,12,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,80,12,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,12,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,84,12,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,12,44007)
CheckOffset(struct _GdkGCValues,line_width,88,12,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,12,44011)
CheckOffset(struct _GdkGCValues,line_style,92,12,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,12,44016)
CheckOffset(struct _GdkGCValues,cap_style,96,12,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,12,44020)
CheckOffset(struct _GdkGCValues,join_style,100,12,44020)
#elif defined __x86_64__
CheckTypeSize(struct _GdkGCValues,104, 12888, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,11,43978)
CheckOffset(struct _GdkGCValues,background,12,11,43978)
CheckMemberSize(struct _GdkGCValues,font,8,11,43979)
CheckOffset(struct _GdkGCValues,font,24,11,43979)
CheckMemberSize(struct _GdkGCValues,function,4,11,43996)
CheckOffset(struct _GdkGCValues,function,32,11,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,11,43997)
CheckOffset(struct _GdkGCValues,fill,36,11,43997)
CheckMemberSize(struct _GdkGCValues,tile,8,11,43998)
CheckOffset(struct _GdkGCValues,tile,40,11,43998)
CheckMemberSize(struct _GdkGCValues,stipple,8,11,43999)
CheckOffset(struct _GdkGCValues,stipple,48,11,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,8,11,44000)
CheckOffset(struct _GdkGCValues,clip_mask,56,11,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,11,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,64,11,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,11,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,68,11,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,11,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,72,11,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,11,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,76,11,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,11,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,80,11,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,11,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,84,11,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,11,44007)
CheckOffset(struct _GdkGCValues,line_width,88,11,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,11,44011)
CheckOffset(struct _GdkGCValues,line_style,92,11,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,11,44016)
CheckOffset(struct _GdkGCValues,cap_style,96,11,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,11,44020)
CheckOffset(struct _GdkGCValues,join_style,100,11,44020)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkGCValues,88, 12888, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,10,43978)
CheckOffset(struct _GdkGCValues,background,12,10,43978)
CheckMemberSize(struct _GdkGCValues,font,4,10,43979)
CheckOffset(struct _GdkGCValues,font,24,10,43979)
CheckMemberSize(struct _GdkGCValues,function,4,10,43996)
CheckOffset(struct _GdkGCValues,function,28,10,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,10,43997)
CheckOffset(struct _GdkGCValues,fill,32,10,43997)
CheckMemberSize(struct _GdkGCValues,tile,4,10,43998)
CheckOffset(struct _GdkGCValues,tile,36,10,43998)
CheckMemberSize(struct _GdkGCValues,stipple,4,10,43999)
CheckOffset(struct _GdkGCValues,stipple,40,10,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,4,10,44000)
CheckOffset(struct _GdkGCValues,clip_mask,44,10,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,10,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,48,10,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,10,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,52,10,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,10,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,56,10,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,10,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,60,10,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,10,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,64,10,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,10,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,68,10,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,10,44007)
CheckOffset(struct _GdkGCValues,line_width,72,10,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,10,44011)
CheckOffset(struct _GdkGCValues,line_style,76,10,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,10,44016)
CheckOffset(struct _GdkGCValues,cap_style,80,10,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,10,44020)
CheckOffset(struct _GdkGCValues,join_style,84,10,44020)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkGCValues,104, 12888, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,9,43978)
CheckOffset(struct _GdkGCValues,background,12,9,43978)
CheckMemberSize(struct _GdkGCValues,font,8,9,43979)
CheckOffset(struct _GdkGCValues,font,24,9,43979)
CheckMemberSize(struct _GdkGCValues,function,4,9,43996)
CheckOffset(struct _GdkGCValues,function,32,9,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,9,43997)
CheckOffset(struct _GdkGCValues,fill,36,9,43997)
CheckMemberSize(struct _GdkGCValues,tile,8,9,43998)
CheckOffset(struct _GdkGCValues,tile,40,9,43998)
CheckMemberSize(struct _GdkGCValues,stipple,8,9,43999)
CheckOffset(struct _GdkGCValues,stipple,48,9,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,8,9,44000)
CheckOffset(struct _GdkGCValues,clip_mask,56,9,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,9,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,64,9,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,9,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,68,9,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,9,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,72,9,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,9,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,76,9,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,9,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,80,9,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,9,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,84,9,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,9,44007)
CheckOffset(struct _GdkGCValues,line_width,88,9,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,9,44011)
CheckOffset(struct _GdkGCValues,line_style,92,9,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,9,44016)
CheckOffset(struct _GdkGCValues,cap_style,96,9,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,9,44020)
CheckOffset(struct _GdkGCValues,join_style,100,9,44020)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkGCValues,88, 12888, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,6,43978)
CheckOffset(struct _GdkGCValues,background,12,6,43978)
CheckMemberSize(struct _GdkGCValues,font,4,6,43979)
CheckOffset(struct _GdkGCValues,font,24,6,43979)
CheckMemberSize(struct _GdkGCValues,function,4,6,43996)
CheckOffset(struct _GdkGCValues,function,28,6,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,6,43997)
CheckOffset(struct _GdkGCValues,fill,32,6,43997)
CheckMemberSize(struct _GdkGCValues,tile,4,6,43998)
CheckOffset(struct _GdkGCValues,tile,36,6,43998)
CheckMemberSize(struct _GdkGCValues,stipple,4,6,43999)
CheckOffset(struct _GdkGCValues,stipple,40,6,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,4,6,44000)
CheckOffset(struct _GdkGCValues,clip_mask,44,6,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,6,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,48,6,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,6,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,52,6,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,6,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,56,6,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,6,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,60,6,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,6,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,64,6,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,6,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,68,6,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,6,44007)
CheckOffset(struct _GdkGCValues,line_width,72,6,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,6,44011)
CheckOffset(struct _GdkGCValues,line_style,76,6,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,6,44016)
CheckOffset(struct _GdkGCValues,cap_style,80,6,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,6,44020)
CheckOffset(struct _GdkGCValues,join_style,84,6,44020)
#elif defined __ia64__
CheckTypeSize(struct _GdkGCValues,104, 12888, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,3,43978)
CheckOffset(struct _GdkGCValues,background,12,3,43978)
CheckMemberSize(struct _GdkGCValues,font,8,3,43979)
CheckOffset(struct _GdkGCValues,font,24,3,43979)
CheckMemberSize(struct _GdkGCValues,function,4,3,43996)
CheckOffset(struct _GdkGCValues,function,32,3,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,3,43997)
CheckOffset(struct _GdkGCValues,fill,36,3,43997)
CheckMemberSize(struct _GdkGCValues,tile,8,3,43998)
CheckOffset(struct _GdkGCValues,tile,40,3,43998)
CheckMemberSize(struct _GdkGCValues,stipple,8,3,43999)
CheckOffset(struct _GdkGCValues,stipple,48,3,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,8,3,44000)
CheckOffset(struct _GdkGCValues,clip_mask,56,3,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,3,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,64,3,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,3,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,68,3,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,3,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,72,3,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,3,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,76,3,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,3,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,80,3,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,3,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,84,3,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,3,44007)
CheckOffset(struct _GdkGCValues,line_width,88,3,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,3,44011)
CheckOffset(struct _GdkGCValues,line_style,92,3,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,3,44016)
CheckOffset(struct _GdkGCValues,cap_style,96,3,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,3,44020)
CheckOffset(struct _GdkGCValues,join_style,100,3,44020)
#elif defined __i386__
CheckTypeSize(struct _GdkGCValues,88, 12888, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCValues,background,12,2,43978)
CheckOffset(struct _GdkGCValues,background,12,2,43978)
CheckMemberSize(struct _GdkGCValues,font,4,2,43979)
CheckOffset(struct _GdkGCValues,font,24,2,43979)
CheckMemberSize(struct _GdkGCValues,function,4,2,43996)
CheckOffset(struct _GdkGCValues,function,28,2,43996)
CheckMemberSize(struct _GdkGCValues,fill,4,2,43997)
CheckOffset(struct _GdkGCValues,fill,32,2,43997)
CheckMemberSize(struct _GdkGCValues,tile,4,2,43998)
CheckOffset(struct _GdkGCValues,tile,36,2,43998)
CheckMemberSize(struct _GdkGCValues,stipple,4,2,43999)
CheckOffset(struct _GdkGCValues,stipple,40,2,43999)
CheckMemberSize(struct _GdkGCValues,clip_mask,4,2,44000)
CheckOffset(struct _GdkGCValues,clip_mask,44,2,44000)
CheckMemberSize(struct _GdkGCValues,subwindow_mode,4,2,44001)
CheckOffset(struct _GdkGCValues,subwindow_mode,48,2,44001)
CheckMemberSize(struct _GdkGCValues,ts_x_origin,4,2,44002)
CheckOffset(struct _GdkGCValues,ts_x_origin,52,2,44002)
CheckMemberSize(struct _GdkGCValues,ts_y_origin,4,2,44003)
CheckOffset(struct _GdkGCValues,ts_y_origin,56,2,44003)
CheckMemberSize(struct _GdkGCValues,clip_x_origin,4,2,44004)
CheckOffset(struct _GdkGCValues,clip_x_origin,60,2,44004)
CheckMemberSize(struct _GdkGCValues,clip_y_origin,4,2,44005)
CheckOffset(struct _GdkGCValues,clip_y_origin,64,2,44005)
CheckMemberSize(struct _GdkGCValues,graphics_exposures,4,2,44006)
CheckOffset(struct _GdkGCValues,graphics_exposures,68,2,44006)
CheckMemberSize(struct _GdkGCValues,line_width,4,2,44007)
CheckOffset(struct _GdkGCValues,line_width,72,2,44007)
CheckMemberSize(struct _GdkGCValues,line_style,4,2,44011)
CheckOffset(struct _GdkGCValues,line_style,76,2,44011)
CheckMemberSize(struct _GdkGCValues,cap_style,4,2,44016)
CheckOffset(struct _GdkGCValues,cap_style,80,2,44016)
CheckMemberSize(struct _GdkGCValues,join_style,4,2,44020)
CheckOffset(struct _GdkGCValues,join_style,84,2,44020)
#elif 1
CheckTypeSize(struct _GdkGCValues,0, 12888, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkGCValues on All\n");
CheckOffset(struct _GdkGCValues,foreground,0,1,43977)
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
CheckTypeSize(struct _GdkSpan,12, 12905, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,12,44046)
CheckOffset(struct _GdkSpan,y,4,12,44046)
CheckMemberSize(struct _GdkSpan,width,4,12,44047)
CheckOffset(struct _GdkSpan,width,8,12,44047)
#elif defined __x86_64__
CheckTypeSize(struct _GdkSpan,12, 12905, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,11,44046)
CheckOffset(struct _GdkSpan,y,4,11,44046)
CheckMemberSize(struct _GdkSpan,width,4,11,44047)
CheckOffset(struct _GdkSpan,width,8,11,44047)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkSpan,12, 12905, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,10,44046)
CheckOffset(struct _GdkSpan,y,4,10,44046)
CheckMemberSize(struct _GdkSpan,width,4,10,44047)
CheckOffset(struct _GdkSpan,width,8,10,44047)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkSpan,12, 12905, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,9,44046)
CheckOffset(struct _GdkSpan,y,4,9,44046)
CheckMemberSize(struct _GdkSpan,width,4,9,44047)
CheckOffset(struct _GdkSpan,width,8,9,44047)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkSpan,12, 12905, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,6,44046)
CheckOffset(struct _GdkSpan,y,4,6,44046)
CheckMemberSize(struct _GdkSpan,width,4,6,44047)
CheckOffset(struct _GdkSpan,width,8,6,44047)
#elif defined __ia64__
CheckTypeSize(struct _GdkSpan,12, 12905, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,3,44046)
CheckOffset(struct _GdkSpan,y,4,3,44046)
CheckMemberSize(struct _GdkSpan,width,4,3,44047)
CheckOffset(struct _GdkSpan,width,8,3,44047)
#elif defined __i386__
CheckTypeSize(struct _GdkSpan,12, 12905, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSpan,y,4,2,44046)
CheckOffset(struct _GdkSpan,y,4,2,44046)
CheckMemberSize(struct _GdkSpan,width,4,2,44047)
CheckOffset(struct _GdkSpan,width,8,2,44047)
#elif 1
CheckTypeSize(struct _GdkSpan,0, 12905, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkSpan on All\n");
CheckOffset(struct _GdkSpan,x,0,1,44045)
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
CheckTypeSize(struct _GdkGeometry,56, 12910, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,12,44051)
CheckOffset(struct _GdkGeometry,min_height,4,12,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,12,44052)
CheckOffset(struct _GdkGeometry,max_width,8,12,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,12,44053)
CheckOffset(struct _GdkGeometry,max_height,12,12,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,12,44054)
CheckOffset(struct _GdkGeometry,base_width,16,12,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,12,44055)
CheckOffset(struct _GdkGeometry,base_height,20,12,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,12,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,12,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,12,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,12,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,12,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,12,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,12,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,12,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,12,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,12,44070)
#elif defined __x86_64__
CheckTypeSize(struct _GdkGeometry,56, 12910, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,11,44051)
CheckOffset(struct _GdkGeometry,min_height,4,11,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,11,44052)
CheckOffset(struct _GdkGeometry,max_width,8,11,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,11,44053)
CheckOffset(struct _GdkGeometry,max_height,12,11,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,11,44054)
CheckOffset(struct _GdkGeometry,base_width,16,11,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,11,44055)
CheckOffset(struct _GdkGeometry,base_height,20,11,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,11,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,11,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,11,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,11,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,11,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,11,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,11,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,11,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,11,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,11,44070)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkGeometry,56, 12910, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,10,44051)
CheckOffset(struct _GdkGeometry,min_height,4,10,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,10,44052)
CheckOffset(struct _GdkGeometry,max_width,8,10,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,10,44053)
CheckOffset(struct _GdkGeometry,max_height,12,10,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,10,44054)
CheckOffset(struct _GdkGeometry,base_width,16,10,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,10,44055)
CheckOffset(struct _GdkGeometry,base_height,20,10,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,10,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,10,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,10,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,10,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,10,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,10,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,10,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,10,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,10,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,10,44070)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkGeometry,56, 12910, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,9,44051)
CheckOffset(struct _GdkGeometry,min_height,4,9,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,9,44052)
CheckOffset(struct _GdkGeometry,max_width,8,9,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,9,44053)
CheckOffset(struct _GdkGeometry,max_height,12,9,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,9,44054)
CheckOffset(struct _GdkGeometry,base_width,16,9,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,9,44055)
CheckOffset(struct _GdkGeometry,base_height,20,9,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,9,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,9,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,9,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,9,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,9,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,9,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,9,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,9,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,9,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,9,44070)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkGeometry,56, 12910, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,6,44051)
CheckOffset(struct _GdkGeometry,min_height,4,6,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,6,44052)
CheckOffset(struct _GdkGeometry,max_width,8,6,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,6,44053)
CheckOffset(struct _GdkGeometry,max_height,12,6,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,6,44054)
CheckOffset(struct _GdkGeometry,base_width,16,6,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,6,44055)
CheckOffset(struct _GdkGeometry,base_height,20,6,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,6,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,6,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,6,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,6,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,6,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,6,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,6,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,6,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,6,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,6,44070)
#elif defined __ia64__
CheckTypeSize(struct _GdkGeometry,56, 12910, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,3,44051)
CheckOffset(struct _GdkGeometry,min_height,4,3,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,3,44052)
CheckOffset(struct _GdkGeometry,max_width,8,3,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,3,44053)
CheckOffset(struct _GdkGeometry,max_height,12,3,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,3,44054)
CheckOffset(struct _GdkGeometry,base_width,16,3,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,3,44055)
CheckOffset(struct _GdkGeometry,base_height,20,3,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,3,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,3,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,3,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,3,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,3,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,3,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,3,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,3,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,3,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,3,44070)
#elif defined __i386__
CheckTypeSize(struct _GdkGeometry,52, 12910, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGeometry,min_height,4,2,44051)
CheckOffset(struct _GdkGeometry,min_height,4,2,44051)
CheckMemberSize(struct _GdkGeometry,max_width,4,2,44052)
CheckOffset(struct _GdkGeometry,max_width,8,2,44052)
CheckMemberSize(struct _GdkGeometry,max_height,4,2,44053)
CheckOffset(struct _GdkGeometry,max_height,12,2,44053)
CheckMemberSize(struct _GdkGeometry,base_width,4,2,44054)
CheckOffset(struct _GdkGeometry,base_width,16,2,44054)
CheckMemberSize(struct _GdkGeometry,base_height,4,2,44055)
CheckOffset(struct _GdkGeometry,base_height,20,2,44055)
CheckMemberSize(struct _GdkGeometry,width_inc,4,2,44056)
CheckOffset(struct _GdkGeometry,width_inc,24,2,44056)
CheckMemberSize(struct _GdkGeometry,height_inc,4,2,44057)
CheckOffset(struct _GdkGeometry,height_inc,28,2,44057)
CheckMemberSize(struct _GdkGeometry,min_aspect,8,2,44058)
CheckOffset(struct _GdkGeometry,min_aspect,32,2,44058)
CheckMemberSize(struct _GdkGeometry,max_aspect,8,2,44059)
CheckOffset(struct _GdkGeometry,max_aspect,40,2,44059)
CheckMemberSize(struct _GdkGeometry,win_gravity,4,2,44070)
CheckOffset(struct _GdkGeometry,win_gravity,48,2,44070)
#elif 1
CheckTypeSize(struct _GdkGeometry,0, 12910, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkGeometry on All\n");
CheckOffset(struct _GdkGeometry,min_width,0,1,44050)
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
CheckTypeSize(struct _GdkSegment,16, 12921, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,12,44086)
CheckOffset(struct _GdkSegment,y1,4,12,44086)
CheckMemberSize(struct _GdkSegment,x2,4,12,44087)
CheckOffset(struct _GdkSegment,x2,8,12,44087)
CheckMemberSize(struct _GdkSegment,y2,4,12,44088)
CheckOffset(struct _GdkSegment,y2,12,12,44088)
#elif defined __x86_64__
CheckTypeSize(struct _GdkSegment,16, 12921, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,11,44086)
CheckOffset(struct _GdkSegment,y1,4,11,44086)
CheckMemberSize(struct _GdkSegment,x2,4,11,44087)
CheckOffset(struct _GdkSegment,x2,8,11,44087)
CheckMemberSize(struct _GdkSegment,y2,4,11,44088)
CheckOffset(struct _GdkSegment,y2,12,11,44088)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkSegment,16, 12921, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,10,44086)
CheckOffset(struct _GdkSegment,y1,4,10,44086)
CheckMemberSize(struct _GdkSegment,x2,4,10,44087)
CheckOffset(struct _GdkSegment,x2,8,10,44087)
CheckMemberSize(struct _GdkSegment,y2,4,10,44088)
CheckOffset(struct _GdkSegment,y2,12,10,44088)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkSegment,16, 12921, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,9,44086)
CheckOffset(struct _GdkSegment,y1,4,9,44086)
CheckMemberSize(struct _GdkSegment,x2,4,9,44087)
CheckOffset(struct _GdkSegment,x2,8,9,44087)
CheckMemberSize(struct _GdkSegment,y2,4,9,44088)
CheckOffset(struct _GdkSegment,y2,12,9,44088)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkSegment,16, 12921, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,6,44086)
CheckOffset(struct _GdkSegment,y1,4,6,44086)
CheckMemberSize(struct _GdkSegment,x2,4,6,44087)
CheckOffset(struct _GdkSegment,x2,8,6,44087)
CheckMemberSize(struct _GdkSegment,y2,4,6,44088)
CheckOffset(struct _GdkSegment,y2,12,6,44088)
#elif defined __ia64__
CheckTypeSize(struct _GdkSegment,16, 12921, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,3,44086)
CheckOffset(struct _GdkSegment,y1,4,3,44086)
CheckMemberSize(struct _GdkSegment,x2,4,3,44087)
CheckOffset(struct _GdkSegment,x2,8,3,44087)
CheckMemberSize(struct _GdkSegment,y2,4,3,44088)
CheckOffset(struct _GdkSegment,y2,12,3,44088)
#elif defined __i386__
CheckTypeSize(struct _GdkSegment,16, 12921, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkSegment,y1,4,2,44086)
CheckOffset(struct _GdkSegment,y1,4,2,44086)
CheckMemberSize(struct _GdkSegment,x2,4,2,44087)
CheckOffset(struct _GdkSegment,x2,8,2,44087)
CheckMemberSize(struct _GdkSegment,y2,4,2,44088)
CheckOffset(struct _GdkSegment,y2,12,2,44088)
#elif 1
CheckTypeSize(struct _GdkSegment,0, 12921, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkSegment on All\n");
CheckOffset(struct _GdkSegment,x1,0,1,44085)
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
CheckTypeSize(struct _GdkWindowAttr,88, 12926, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,12,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,8,12,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,12,44094)
CheckOffset(struct _GdkWindowAttr,x,12,12,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,12,44095)
CheckOffset(struct _GdkWindowAttr,y,16,12,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,12,44096)
CheckOffset(struct _GdkWindowAttr,width,20,12,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,12,44097)
CheckOffset(struct _GdkWindowAttr,height,24,12,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,12,44100)
CheckOffset(struct _GdkWindowAttr,wclass,28,12,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,8,12,44101)
CheckOffset(struct _GdkWindowAttr,visual,32,12,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,8,12,44102)
CheckOffset(struct _GdkWindowAttr,colormap,40,12,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,12,44103)
CheckOffset(struct _GdkWindowAttr,window_type,48,12,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,8,12,44104)
CheckOffset(struct _GdkWindowAttr,cursor,56,12,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,8,12,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,64,12,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,8,12,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,72,12,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,12,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,80,12,44107)
#elif defined __x86_64__
CheckTypeSize(struct _GdkWindowAttr,88, 12926, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,11,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,8,11,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,11,44094)
CheckOffset(struct _GdkWindowAttr,x,12,11,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,11,44095)
CheckOffset(struct _GdkWindowAttr,y,16,11,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,11,44096)
CheckOffset(struct _GdkWindowAttr,width,20,11,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,11,44097)
CheckOffset(struct _GdkWindowAttr,height,24,11,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,11,44100)
CheckOffset(struct _GdkWindowAttr,wclass,28,11,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,8,11,44101)
CheckOffset(struct _GdkWindowAttr,visual,32,11,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,8,11,44102)
CheckOffset(struct _GdkWindowAttr,colormap,40,11,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,11,44103)
CheckOffset(struct _GdkWindowAttr,window_type,48,11,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,8,11,44104)
CheckOffset(struct _GdkWindowAttr,cursor,56,11,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,8,11,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,64,11,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,8,11,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,72,11,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,11,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,80,11,44107)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkWindowAttr,56, 12926, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,10,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,4,10,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,10,44094)
CheckOffset(struct _GdkWindowAttr,x,8,10,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,10,44095)
CheckOffset(struct _GdkWindowAttr,y,12,10,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,10,44096)
CheckOffset(struct _GdkWindowAttr,width,16,10,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,10,44097)
CheckOffset(struct _GdkWindowAttr,height,20,10,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,10,44100)
CheckOffset(struct _GdkWindowAttr,wclass,24,10,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,4,10,44101)
CheckOffset(struct _GdkWindowAttr,visual,28,10,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,4,10,44102)
CheckOffset(struct _GdkWindowAttr,colormap,32,10,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,10,44103)
CheckOffset(struct _GdkWindowAttr,window_type,36,10,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,4,10,44104)
CheckOffset(struct _GdkWindowAttr,cursor,40,10,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,4,10,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,44,10,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,4,10,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,48,10,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,10,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,52,10,44107)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkWindowAttr,88, 12926, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,9,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,8,9,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,9,44094)
CheckOffset(struct _GdkWindowAttr,x,12,9,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,9,44095)
CheckOffset(struct _GdkWindowAttr,y,16,9,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,9,44096)
CheckOffset(struct _GdkWindowAttr,width,20,9,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,9,44097)
CheckOffset(struct _GdkWindowAttr,height,24,9,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,9,44100)
CheckOffset(struct _GdkWindowAttr,wclass,28,9,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,8,9,44101)
CheckOffset(struct _GdkWindowAttr,visual,32,9,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,8,9,44102)
CheckOffset(struct _GdkWindowAttr,colormap,40,9,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,9,44103)
CheckOffset(struct _GdkWindowAttr,window_type,48,9,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,8,9,44104)
CheckOffset(struct _GdkWindowAttr,cursor,56,9,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,8,9,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,64,9,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,8,9,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,72,9,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,9,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,80,9,44107)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkWindowAttr,56, 12926, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,6,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,4,6,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,6,44094)
CheckOffset(struct _GdkWindowAttr,x,8,6,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,6,44095)
CheckOffset(struct _GdkWindowAttr,y,12,6,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,6,44096)
CheckOffset(struct _GdkWindowAttr,width,16,6,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,6,44097)
CheckOffset(struct _GdkWindowAttr,height,20,6,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,6,44100)
CheckOffset(struct _GdkWindowAttr,wclass,24,6,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,4,6,44101)
CheckOffset(struct _GdkWindowAttr,visual,28,6,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,4,6,44102)
CheckOffset(struct _GdkWindowAttr,colormap,32,6,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,6,44103)
CheckOffset(struct _GdkWindowAttr,window_type,36,6,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,4,6,44104)
CheckOffset(struct _GdkWindowAttr,cursor,40,6,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,4,6,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,44,6,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,4,6,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,48,6,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,6,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,52,6,44107)
#elif defined __ia64__
CheckTypeSize(struct _GdkWindowAttr,88, 12926, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,3,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,8,3,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,3,44094)
CheckOffset(struct _GdkWindowAttr,x,12,3,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,3,44095)
CheckOffset(struct _GdkWindowAttr,y,16,3,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,3,44096)
CheckOffset(struct _GdkWindowAttr,width,20,3,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,3,44097)
CheckOffset(struct _GdkWindowAttr,height,24,3,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,3,44100)
CheckOffset(struct _GdkWindowAttr,wclass,28,3,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,8,3,44101)
CheckOffset(struct _GdkWindowAttr,visual,32,3,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,8,3,44102)
CheckOffset(struct _GdkWindowAttr,colormap,40,3,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,3,44103)
CheckOffset(struct _GdkWindowAttr,window_type,48,3,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,8,3,44104)
CheckOffset(struct _GdkWindowAttr,cursor,56,3,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,8,3,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,64,3,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,8,3,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,72,3,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,3,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,80,3,44107)
#elif defined __i386__
CheckTypeSize(struct _GdkWindowAttr,56, 12926, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowAttr,event_mask,4,2,44093)
CheckOffset(struct _GdkWindowAttr,event_mask,4,2,44093)
CheckMemberSize(struct _GdkWindowAttr,x,4,2,44094)
CheckOffset(struct _GdkWindowAttr,x,8,2,44094)
CheckMemberSize(struct _GdkWindowAttr,y,4,2,44095)
CheckOffset(struct _GdkWindowAttr,y,12,2,44095)
CheckMemberSize(struct _GdkWindowAttr,width,4,2,44096)
CheckOffset(struct _GdkWindowAttr,width,16,2,44096)
CheckMemberSize(struct _GdkWindowAttr,height,4,2,44097)
CheckOffset(struct _GdkWindowAttr,height,20,2,44097)
CheckMemberSize(struct _GdkWindowAttr,wclass,4,2,44100)
CheckOffset(struct _GdkWindowAttr,wclass,24,2,44100)
CheckMemberSize(struct _GdkWindowAttr,visual,4,2,44101)
CheckOffset(struct _GdkWindowAttr,visual,28,2,44101)
CheckMemberSize(struct _GdkWindowAttr,colormap,4,2,44102)
CheckOffset(struct _GdkWindowAttr,colormap,32,2,44102)
CheckMemberSize(struct _GdkWindowAttr,window_type,4,2,44103)
CheckOffset(struct _GdkWindowAttr,window_type,36,2,44103)
CheckMemberSize(struct _GdkWindowAttr,cursor,4,2,44104)
CheckOffset(struct _GdkWindowAttr,cursor,40,2,44104)
CheckMemberSize(struct _GdkWindowAttr,wmclass_name,4,2,44105)
CheckOffset(struct _GdkWindowAttr,wmclass_name,44,2,44105)
CheckMemberSize(struct _GdkWindowAttr,wmclass_class,4,2,44106)
CheckOffset(struct _GdkWindowAttr,wmclass_class,48,2,44106)
CheckMemberSize(struct _GdkWindowAttr,override_redirect,4,2,44107)
CheckOffset(struct _GdkWindowAttr,override_redirect,52,2,44107)
#elif 1
CheckTypeSize(struct _GdkWindowAttr,0, 12926, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowAttr on All\n");
CheckOffset(struct _GdkWindowAttr,title,0,1,44092)
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
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,12,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,12,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,12,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,12,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,12,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,12,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,12,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,12,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,12,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,12,44113)
#elif defined __x86_64__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,11,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,11,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,11,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,11,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,11,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,11,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,11,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,11,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,11,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,11,44113)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,10,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,10,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,10,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,10,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,10,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,10,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,10,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,10,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,10,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,10,44113)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,9,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,9,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,9,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,9,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,9,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,9,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,9,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,9,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,9,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,9,44113)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,6,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,6,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,6,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,6,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,6,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,6,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,6,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,6,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,6,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,6,44113)
#elif defined __ia64__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,3,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,3,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,3,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,3,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,3,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,3,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,3,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,3,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,3,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,3,44113)
#elif defined __i386__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkTrapezoid,x11,8,2,44109)
CheckOffset(struct _GdkTrapezoid,x11,8,2,44109)
CheckMemberSize(struct _GdkTrapezoid,x21,8,2,44110)
CheckOffset(struct _GdkTrapezoid,x21,16,2,44110)
CheckMemberSize(struct _GdkTrapezoid,y2,8,2,44111)
CheckOffset(struct _GdkTrapezoid,y2,24,2,44111)
CheckMemberSize(struct _GdkTrapezoid,x12,8,2,44112)
CheckOffset(struct _GdkTrapezoid,x12,32,2,44112)
CheckMemberSize(struct _GdkTrapezoid,x22,8,2,44113)
CheckOffset(struct _GdkTrapezoid,x22,40,2,44113)
#elif 1
CheckTypeSize(struct _GdkTrapezoid,0, 12936, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkTrapezoid on All\n");
CheckOffset(struct _GdkTrapezoid,y1,0,1,44108)
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
CheckTypeSize(struct _GdkPointerHooks,16, 12944, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,8,12,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,8,12,44124)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPointerHooks,16, 12944, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,8,11,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,8,11,44124)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPointerHooks,8, 12944, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,4,10,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,4,10,44124)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPointerHooks,16, 12944, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,8,9,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,8,9,44124)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPointerHooks,8, 12944, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,4,6,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,4,6,44124)
#elif defined __ia64__
CheckTypeSize(struct _GdkPointerHooks,16, 12944, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,8,3,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,8,3,44124)
#elif defined __i386__
CheckTypeSize(struct _GdkPointerHooks,8, 12944, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,4,2,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,4,2,44124)
#elif 1
CheckTypeSize(struct _GdkPointerHooks,0, 12944, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPointerHooks on All\n");
CheckOffset(struct _GdkPointerHooks,get_pointer,0,1,44120)
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
CheckTypeSize(struct _GdkWindowObject,144, 12954, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,8,12,44129)
CheckOffset(struct _GdkWindowObject,impl,24,12,44129)
CheckMemberSize(struct _GdkWindowObject,parent,8,12,44130)
CheckOffset(struct _GdkWindowObject,parent,32,12,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,8,12,44131)
CheckOffset(struct _GdkWindowObject,user_data,40,12,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,12,44132)
CheckOffset(struct _GdkWindowObject,x,48,12,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,12,44133)
CheckOffset(struct _GdkWindowObject,y,52,12,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,12,44134)
CheckOffset(struct _GdkWindowObject,extension_events,56,12,44134)
CheckMemberSize(struct _GdkWindowObject,filters,8,12,44135)
CheckOffset(struct _GdkWindowObject,filters,64,12,44135)
CheckMemberSize(struct _GdkWindowObject,children,8,12,44136)
CheckOffset(struct _GdkWindowObject,children,72,12,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,12,44137)
CheckOffset(struct _GdkWindowObject,bg_color,80,12,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,8,12,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,96,12,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,8,12,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,104,12,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,8,12,44140)
CheckOffset(struct _GdkWindowObject,update_area,112,12,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,12,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,120,12,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,12,44142)
CheckOffset(struct _GdkWindowObject,window_type,124,12,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,12,44143)
CheckOffset(struct _GdkWindowObject,depth,125,12,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,12,44144)
CheckOffset(struct _GdkWindowObject,resize_count,126,12,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,12,44145)
CheckOffset(struct _GdkWindowObject,state,128,12,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,12,44152)
CheckOffset(struct _GdkWindowObject,event_mask,136,12,44152)
#elif defined __x86_64__
CheckTypeSize(struct _GdkWindowObject,144, 12954, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,8,11,44129)
CheckOffset(struct _GdkWindowObject,impl,24,11,44129)
CheckMemberSize(struct _GdkWindowObject,parent,8,11,44130)
CheckOffset(struct _GdkWindowObject,parent,32,11,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,8,11,44131)
CheckOffset(struct _GdkWindowObject,user_data,40,11,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,11,44132)
CheckOffset(struct _GdkWindowObject,x,48,11,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,11,44133)
CheckOffset(struct _GdkWindowObject,y,52,11,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,11,44134)
CheckOffset(struct _GdkWindowObject,extension_events,56,11,44134)
CheckMemberSize(struct _GdkWindowObject,filters,8,11,44135)
CheckOffset(struct _GdkWindowObject,filters,64,11,44135)
CheckMemberSize(struct _GdkWindowObject,children,8,11,44136)
CheckOffset(struct _GdkWindowObject,children,72,11,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,11,44137)
CheckOffset(struct _GdkWindowObject,bg_color,80,11,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,8,11,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,96,11,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,8,11,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,104,11,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,8,11,44140)
CheckOffset(struct _GdkWindowObject,update_area,112,11,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,11,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,120,11,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,11,44142)
CheckOffset(struct _GdkWindowObject,window_type,124,11,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,11,44143)
CheckOffset(struct _GdkWindowObject,depth,125,11,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,11,44144)
CheckOffset(struct _GdkWindowObject,resize_count,126,11,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,11,44145)
CheckOffset(struct _GdkWindowObject,state,128,11,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,11,44152)
CheckOffset(struct _GdkWindowObject,event_mask,136,11,44152)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkWindowObject,88, 12954, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,4,10,44129)
CheckOffset(struct _GdkWindowObject,impl,12,10,44129)
CheckMemberSize(struct _GdkWindowObject,parent,4,10,44130)
CheckOffset(struct _GdkWindowObject,parent,16,10,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,4,10,44131)
CheckOffset(struct _GdkWindowObject,user_data,20,10,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,10,44132)
CheckOffset(struct _GdkWindowObject,x,24,10,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,10,44133)
CheckOffset(struct _GdkWindowObject,y,28,10,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,10,44134)
CheckOffset(struct _GdkWindowObject,extension_events,32,10,44134)
CheckMemberSize(struct _GdkWindowObject,filters,4,10,44135)
CheckOffset(struct _GdkWindowObject,filters,36,10,44135)
CheckMemberSize(struct _GdkWindowObject,children,4,10,44136)
CheckOffset(struct _GdkWindowObject,children,40,10,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,10,44137)
CheckOffset(struct _GdkWindowObject,bg_color,44,10,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,4,10,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,56,10,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,4,10,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,60,10,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,4,10,44140)
CheckOffset(struct _GdkWindowObject,update_area,64,10,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,10,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,68,10,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,10,44142)
CheckOffset(struct _GdkWindowObject,window_type,72,10,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,10,44143)
CheckOffset(struct _GdkWindowObject,depth,73,10,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,10,44144)
CheckOffset(struct _GdkWindowObject,resize_count,74,10,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,10,44145)
CheckOffset(struct _GdkWindowObject,state,76,10,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,10,44152)
CheckOffset(struct _GdkWindowObject,event_mask,84,10,44152)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkWindowObject,144, 12954, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,8,9,44129)
CheckOffset(struct _GdkWindowObject,impl,24,9,44129)
CheckMemberSize(struct _GdkWindowObject,parent,8,9,44130)
CheckOffset(struct _GdkWindowObject,parent,32,9,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,8,9,44131)
CheckOffset(struct _GdkWindowObject,user_data,40,9,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,9,44132)
CheckOffset(struct _GdkWindowObject,x,48,9,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,9,44133)
CheckOffset(struct _GdkWindowObject,y,52,9,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,9,44134)
CheckOffset(struct _GdkWindowObject,extension_events,56,9,44134)
CheckMemberSize(struct _GdkWindowObject,filters,8,9,44135)
CheckOffset(struct _GdkWindowObject,filters,64,9,44135)
CheckMemberSize(struct _GdkWindowObject,children,8,9,44136)
CheckOffset(struct _GdkWindowObject,children,72,9,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,9,44137)
CheckOffset(struct _GdkWindowObject,bg_color,80,9,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,8,9,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,96,9,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,8,9,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,104,9,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,8,9,44140)
CheckOffset(struct _GdkWindowObject,update_area,112,9,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,9,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,120,9,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,9,44142)
CheckOffset(struct _GdkWindowObject,window_type,124,9,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,9,44143)
CheckOffset(struct _GdkWindowObject,depth,125,9,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,9,44144)
CheckOffset(struct _GdkWindowObject,resize_count,126,9,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,9,44145)
CheckOffset(struct _GdkWindowObject,state,128,9,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,9,44152)
CheckOffset(struct _GdkWindowObject,event_mask,136,9,44152)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkWindowObject,88, 12954, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,4,6,44129)
CheckOffset(struct _GdkWindowObject,impl,12,6,44129)
CheckMemberSize(struct _GdkWindowObject,parent,4,6,44130)
CheckOffset(struct _GdkWindowObject,parent,16,6,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,4,6,44131)
CheckOffset(struct _GdkWindowObject,user_data,20,6,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,6,44132)
CheckOffset(struct _GdkWindowObject,x,24,6,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,6,44133)
CheckOffset(struct _GdkWindowObject,y,28,6,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,6,44134)
CheckOffset(struct _GdkWindowObject,extension_events,32,6,44134)
CheckMemberSize(struct _GdkWindowObject,filters,4,6,44135)
CheckOffset(struct _GdkWindowObject,filters,36,6,44135)
CheckMemberSize(struct _GdkWindowObject,children,4,6,44136)
CheckOffset(struct _GdkWindowObject,children,40,6,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,6,44137)
CheckOffset(struct _GdkWindowObject,bg_color,44,6,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,4,6,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,56,6,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,4,6,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,60,6,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,4,6,44140)
CheckOffset(struct _GdkWindowObject,update_area,64,6,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,6,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,68,6,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,6,44142)
CheckOffset(struct _GdkWindowObject,window_type,72,6,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,6,44143)
CheckOffset(struct _GdkWindowObject,depth,73,6,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,6,44144)
CheckOffset(struct _GdkWindowObject,resize_count,74,6,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,6,44145)
CheckOffset(struct _GdkWindowObject,state,76,6,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,6,44152)
CheckOffset(struct _GdkWindowObject,event_mask,84,6,44152)
#elif defined __ia64__
CheckTypeSize(struct _GdkWindowObject,144, 12954, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,8,3,44129)
CheckOffset(struct _GdkWindowObject,impl,24,3,44129)
CheckMemberSize(struct _GdkWindowObject,parent,8,3,44130)
CheckOffset(struct _GdkWindowObject,parent,32,3,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,8,3,44131)
CheckOffset(struct _GdkWindowObject,user_data,40,3,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,3,44132)
CheckOffset(struct _GdkWindowObject,x,48,3,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,3,44133)
CheckOffset(struct _GdkWindowObject,y,52,3,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,3,44134)
CheckOffset(struct _GdkWindowObject,extension_events,56,3,44134)
CheckMemberSize(struct _GdkWindowObject,filters,8,3,44135)
CheckOffset(struct _GdkWindowObject,filters,64,3,44135)
CheckMemberSize(struct _GdkWindowObject,children,8,3,44136)
CheckOffset(struct _GdkWindowObject,children,72,3,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,3,44137)
CheckOffset(struct _GdkWindowObject,bg_color,80,3,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,8,3,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,96,3,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,8,3,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,104,3,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,8,3,44140)
CheckOffset(struct _GdkWindowObject,update_area,112,3,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,3,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,120,3,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,3,44142)
CheckOffset(struct _GdkWindowObject,window_type,124,3,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,3,44143)
CheckOffset(struct _GdkWindowObject,depth,125,3,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,3,44144)
CheckOffset(struct _GdkWindowObject,resize_count,126,3,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,3,44145)
CheckOffset(struct _GdkWindowObject,state,128,3,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,3,44152)
CheckOffset(struct _GdkWindowObject,event_mask,136,3,44152)
#elif defined __i386__
CheckTypeSize(struct _GdkWindowObject,88, 12954, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkWindowObject,impl,4,2,44129)
CheckOffset(struct _GdkWindowObject,impl,12,2,44129)
CheckMemberSize(struct _GdkWindowObject,parent,4,2,44130)
CheckOffset(struct _GdkWindowObject,parent,16,2,44130)
CheckMemberSize(struct _GdkWindowObject,user_data,4,2,44131)
CheckOffset(struct _GdkWindowObject,user_data,20,2,44131)
CheckMemberSize(struct _GdkWindowObject,x,4,2,44132)
CheckOffset(struct _GdkWindowObject,x,24,2,44132)
CheckMemberSize(struct _GdkWindowObject,y,4,2,44133)
CheckOffset(struct _GdkWindowObject,y,28,2,44133)
CheckMemberSize(struct _GdkWindowObject,extension_events,4,2,44134)
CheckOffset(struct _GdkWindowObject,extension_events,32,2,44134)
CheckMemberSize(struct _GdkWindowObject,filters,4,2,44135)
CheckOffset(struct _GdkWindowObject,filters,36,2,44135)
CheckMemberSize(struct _GdkWindowObject,children,4,2,44136)
CheckOffset(struct _GdkWindowObject,children,40,2,44136)
CheckMemberSize(struct _GdkWindowObject,bg_color,12,2,44137)
CheckOffset(struct _GdkWindowObject,bg_color,44,2,44137)
CheckMemberSize(struct _GdkWindowObject,bg_pixmap,4,2,44138)
CheckOffset(struct _GdkWindowObject,bg_pixmap,56,2,44138)
CheckMemberSize(struct _GdkWindowObject,paint_stack,4,2,44139)
CheckOffset(struct _GdkWindowObject,paint_stack,60,2,44139)
CheckMemberSize(struct _GdkWindowObject,update_area,4,2,44140)
CheckOffset(struct _GdkWindowObject,update_area,64,2,44140)
CheckMemberSize(struct _GdkWindowObject,update_freeze_count,4,2,44141)
CheckOffset(struct _GdkWindowObject,update_freeze_count,68,2,44141)
CheckMemberSize(struct _GdkWindowObject,window_type,1,2,44142)
CheckOffset(struct _GdkWindowObject,window_type,72,2,44142)
CheckMemberSize(struct _GdkWindowObject,depth,1,2,44143)
CheckOffset(struct _GdkWindowObject,depth,73,2,44143)
CheckMemberSize(struct _GdkWindowObject,resize_count,1,2,44144)
CheckOffset(struct _GdkWindowObject,resize_count,74,2,44144)
CheckMemberSize(struct _GdkWindowObject,state,4,2,44145)
CheckOffset(struct _GdkWindowObject,state,76,2,44145)
CheckMemberSize(struct _GdkWindowObject,event_mask,4,2,44152)
CheckOffset(struct _GdkWindowObject,event_mask,84,2,44152)
#elif 1
CheckTypeSize(struct _GdkWindowObject,0, 12954, 1, , NULL, 0, NULL)
CheckBitField(struct _GdkWindowObject,guffaw_gravity,1,1,44146)
CheckBitField(struct _GdkWindowObject,input_only,1,1,44147)
CheckBitField(struct _GdkWindowObject,modal_hint,1,1,44148)
CheckBitField(struct _GdkWindowObject,destroyed,2,1,44149)
CheckBitField(struct _GdkWindowObject,accept_focus,1,1,44150)
CheckBitField(struct _GdkWindowObject,focus_on_map,1,1,44151)
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
CheckTypeSize(struct _GdkScreenClass,144, 12957, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,8,12,44155)
CheckOffset(struct _GdkScreenClass,size_changed,136,12,44155)
#elif defined __x86_64__
CheckTypeSize(struct _GdkScreenClass,144, 12957, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,8,11,44155)
CheckOffset(struct _GdkScreenClass,size_changed,136,11,44155)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkScreenClass,72, 12957, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,4,10,44155)
CheckOffset(struct _GdkScreenClass,size_changed,68,10,44155)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkScreenClass,144, 12957, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,8,9,44155)
CheckOffset(struct _GdkScreenClass,size_changed,136,9,44155)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkScreenClass,72, 12957, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,4,6,44155)
CheckOffset(struct _GdkScreenClass,size_changed,68,6,44155)
#elif defined __ia64__
CheckTypeSize(struct _GdkScreenClass,144, 12957, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,8,3,44155)
CheckOffset(struct _GdkScreenClass,size_changed,136,3,44155)
#elif defined __i386__
CheckTypeSize(struct _GdkScreenClass,72, 12957, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkScreenClass,size_changed,4,2,44155)
CheckOffset(struct _GdkScreenClass,size_changed,68,2,44155)
#elif 1
CheckTypeSize(struct _GdkScreenClass,0, 12957, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkScreenClass on All\n");
CheckOffset(struct _GdkScreenClass,parent_class,0,1,44153)
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
CheckTypeSize(struct _GdkPixmapObject,40, 12961, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,8,12,44157)
CheckOffset(struct _GdkPixmapObject,impl,24,12,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,12,44158)
CheckOffset(struct _GdkPixmapObject,depth,32,12,44158)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPixmapObject,40, 12961, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,8,11,44157)
CheckOffset(struct _GdkPixmapObject,impl,24,11,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,11,44158)
CheckOffset(struct _GdkPixmapObject,depth,32,11,44158)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPixmapObject,20, 12961, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,4,10,44157)
CheckOffset(struct _GdkPixmapObject,impl,12,10,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,10,44158)
CheckOffset(struct _GdkPixmapObject,depth,16,10,44158)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPixmapObject,40, 12961, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,8,9,44157)
CheckOffset(struct _GdkPixmapObject,impl,24,9,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,9,44158)
CheckOffset(struct _GdkPixmapObject,depth,32,9,44158)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPixmapObject,20, 12961, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,4,6,44157)
CheckOffset(struct _GdkPixmapObject,impl,12,6,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,6,44158)
CheckOffset(struct _GdkPixmapObject,depth,16,6,44158)
#elif defined __ia64__
CheckTypeSize(struct _GdkPixmapObject,40, 12961, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,8,3,44157)
CheckOffset(struct _GdkPixmapObject,impl,24,3,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,3,44158)
CheckOffset(struct _GdkPixmapObject,depth,32,3,44158)
#elif defined __i386__
CheckTypeSize(struct _GdkPixmapObject,20, 12961, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPixmapObject,impl,4,2,44157)
CheckOffset(struct _GdkPixmapObject,impl,12,2,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,2,44158)
CheckOffset(struct _GdkPixmapObject,depth,16,2,44158)
#elif 1
CheckTypeSize(struct _GdkPixmapObject,0, 12961, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObject on All\n");
CheckOffset(struct _GdkPixmapObject,parent_instance,0,1,44156)
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
CheckTypeSize(struct _GdkImageClass,136, 12967, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on S390X\n");
CheckOffset(struct _GdkImageClass,parent_class,0,12,44165)
#elif defined __x86_64__
CheckTypeSize(struct _GdkImageClass,136, 12967, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on x86-64\n");
CheckOffset(struct _GdkImageClass,parent_class,0,11,44165)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkImageClass,68, 12967, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on S390\n");
CheckOffset(struct _GdkImageClass,parent_class,0,10,44165)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkImageClass,136, 12967, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on PPC64\n");
CheckOffset(struct _GdkImageClass,parent_class,0,9,44165)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkImageClass,68, 12967, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on PPC32\n");
CheckOffset(struct _GdkImageClass,parent_class,0,6,44165)
#elif defined __ia64__
CheckTypeSize(struct _GdkImageClass,136, 12967, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on IA64\n");
CheckOffset(struct _GdkImageClass,parent_class,0,3,44165)
#elif defined __i386__
CheckTypeSize(struct _GdkImageClass,68, 12967, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on IA32\n");
CheckOffset(struct _GdkImageClass,parent_class,0,2,44165)
#elif 1
CheckTypeSize(struct _GdkImageClass,0, 12967, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkImageClass on All\n");
CheckOffset(struct _GdkImageClass,parent_class,0,1,44165)
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
CheckTypeSize(struct _GdkKeymapClass,152, 12970, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,8,12,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,136,12,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,8,12,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,144,12,44169)
#elif defined __x86_64__
CheckTypeSize(struct _GdkKeymapClass,152, 12970, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,8,11,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,136,11,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,8,11,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,144,11,44169)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkKeymapClass,76, 12970, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,4,10,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,68,10,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,4,10,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,72,10,44169)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkKeymapClass,152, 12970, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,8,9,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,136,9,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,8,9,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,144,9,44169)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkKeymapClass,76, 12970, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,4,6,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,68,6,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,4,6,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,72,6,44169)
#elif defined __ia64__
CheckTypeSize(struct _GdkKeymapClass,152, 12970, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,8,3,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,136,3,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,8,3,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,144,3,44169)
#elif defined __i386__
CheckTypeSize(struct _GdkKeymapClass,76, 12970, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,4,2,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,68,2,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,4,2,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,72,2,44169)
#elif 1
CheckTypeSize(struct _GdkKeymapClass,0, 12970, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkKeymapClass on All\n");
CheckOffset(struct _GdkKeymapClass,parent_class,0,1,44166)
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
CheckTypeSize(struct _GdkDrawableClass,448, 12973, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,8,12,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,136,12,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,8,12,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,144,12,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,8,12,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,152,12,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,8,12,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,160,12,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,8,12,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,168,12,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,8,12,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,176,12,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,8,12,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,184,12,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,8,12,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,192,12,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,8,12,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,200,12,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,8,12,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,208,12,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,8,12,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,216,12,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,8,12,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,224,12,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,8,12,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,232,12,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,8,12,44258)
CheckOffset(struct _GdkDrawableClass,get_size,240,12,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,8,12,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,248,12,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,8,12,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,256,12,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,8,12,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,264,12,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,8,12,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,272,12,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,8,12,44273)
CheckOffset(struct _GdkDrawableClass,get_image,280,12,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,8,12,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,288,12,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,8,12,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,296,12,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,8,12,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,304,12,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,8,12,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,312,12,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,8,12,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,320,12,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,8,12,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,328,12,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,8,12,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,336,12,44319)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDrawableClass,448, 12973, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,8,11,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,136,11,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,8,11,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,144,11,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,8,11,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,152,11,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,8,11,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,160,11,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,8,11,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,168,11,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,8,11,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,176,11,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,8,11,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,184,11,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,8,11,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,192,11,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,8,11,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,200,11,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,8,11,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,208,11,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,8,11,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,216,11,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,8,11,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,224,11,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,8,11,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,232,11,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,8,11,44258)
CheckOffset(struct _GdkDrawableClass,get_size,240,11,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,8,11,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,248,11,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,8,11,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,256,11,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,8,11,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,264,11,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,8,11,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,272,11,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,8,11,44273)
CheckOffset(struct _GdkDrawableClass,get_image,280,11,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,8,11,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,288,11,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,8,11,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,296,11,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,8,11,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,304,11,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,8,11,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,312,11,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,8,11,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,320,11,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,8,11,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,328,11,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,8,11,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,336,11,44319)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDrawableClass,224, 12973, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,4,10,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,68,10,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,4,10,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,72,10,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,4,10,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,76,10,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,4,10,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,80,10,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,4,10,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,84,10,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,4,10,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,88,10,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,4,10,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,92,10,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,4,10,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,96,10,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,4,10,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,100,10,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,4,10,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,104,10,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,4,10,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,108,10,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,4,10,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,112,10,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,4,10,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,116,10,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,4,10,44258)
CheckOffset(struct _GdkDrawableClass,get_size,120,10,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,4,10,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,124,10,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,4,10,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,128,10,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,4,10,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,132,10,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,4,10,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,136,10,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,4,10,44273)
CheckOffset(struct _GdkDrawableClass,get_image,140,10,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,4,10,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,144,10,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,4,10,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,148,10,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,4,10,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,152,10,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,4,10,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,156,10,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,4,10,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,160,10,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,4,10,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,164,10,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,4,10,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,168,10,44319)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDrawableClass,448, 12973, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,8,9,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,136,9,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,8,9,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,144,9,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,8,9,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,152,9,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,8,9,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,160,9,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,8,9,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,168,9,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,8,9,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,176,9,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,8,9,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,184,9,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,8,9,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,192,9,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,8,9,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,200,9,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,8,9,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,208,9,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,8,9,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,216,9,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,8,9,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,224,9,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,8,9,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,232,9,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,8,9,44258)
CheckOffset(struct _GdkDrawableClass,get_size,240,9,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,8,9,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,248,9,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,8,9,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,256,9,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,8,9,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,264,9,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,8,9,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,272,9,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,8,9,44273)
CheckOffset(struct _GdkDrawableClass,get_image,280,9,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,8,9,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,288,9,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,8,9,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,296,9,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,8,9,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,304,9,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,8,9,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,312,9,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,8,9,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,320,9,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,8,9,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,328,9,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,8,9,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,336,9,44319)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDrawableClass,224, 12973, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,4,6,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,68,6,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,4,6,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,72,6,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,4,6,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,76,6,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,4,6,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,80,6,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,4,6,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,84,6,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,4,6,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,88,6,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,4,6,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,92,6,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,4,6,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,96,6,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,4,6,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,100,6,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,4,6,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,104,6,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,4,6,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,108,6,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,4,6,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,112,6,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,4,6,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,116,6,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,4,6,44258)
CheckOffset(struct _GdkDrawableClass,get_size,120,6,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,4,6,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,124,6,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,4,6,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,128,6,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,4,6,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,132,6,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,4,6,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,136,6,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,4,6,44273)
CheckOffset(struct _GdkDrawableClass,get_image,140,6,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,4,6,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,144,6,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,4,6,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,148,6,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,4,6,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,152,6,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,4,6,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,156,6,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,4,6,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,160,6,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,4,6,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,164,6,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,4,6,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,168,6,44319)
#elif defined __ia64__
CheckTypeSize(struct _GdkDrawableClass,448, 12973, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,8,3,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,136,3,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,8,3,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,144,3,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,8,3,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,152,3,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,8,3,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,160,3,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,8,3,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,168,3,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,8,3,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,176,3,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,8,3,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,184,3,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,8,3,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,192,3,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,8,3,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,200,3,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,8,3,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,208,3,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,8,3,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,216,3,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,8,3,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,224,3,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,8,3,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,232,3,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,8,3,44258)
CheckOffset(struct _GdkDrawableClass,get_size,240,3,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,8,3,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,248,3,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,8,3,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,256,3,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,8,3,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,264,3,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,8,3,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,272,3,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,8,3,44273)
CheckOffset(struct _GdkDrawableClass,get_image,280,3,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,8,3,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,288,3,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,8,3,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,296,3,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,8,3,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,304,3,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,8,3,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,312,3,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,8,3,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,320,3,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,8,3,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,328,3,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,8,3,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,336,3,44319)
#elif defined __i386__
CheckTypeSize(struct _GdkDrawableClass,224, 12973, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDrawableClass,create_gc,4,2,44174)
CheckOffset(struct _GdkDrawableClass,create_gc,68,2,44174)
CheckMemberSize(struct _GdkDrawableClass,draw_rectangle,4,2,44182)
CheckOffset(struct _GdkDrawableClass,draw_rectangle,72,2,44182)
CheckMemberSize(struct _GdkDrawableClass,draw_arc,4,2,44192)
CheckOffset(struct _GdkDrawableClass,draw_arc,76,2,44192)
CheckMemberSize(struct _GdkDrawableClass,draw_polygon,4,2,44198)
CheckOffset(struct _GdkDrawableClass,draw_polygon,80,2,44198)
CheckMemberSize(struct _GdkDrawableClass,draw_text,4,2,44206)
CheckOffset(struct _GdkDrawableClass,draw_text,84,2,44206)
CheckMemberSize(struct _GdkDrawableClass,draw_text_wc,4,2,44214)
CheckOffset(struct _GdkDrawableClass,draw_text_wc,88,2,44214)
CheckMemberSize(struct _GdkDrawableClass,draw_drawable,4,2,44224)
CheckOffset(struct _GdkDrawableClass,draw_drawable,92,2,44224)
CheckMemberSize(struct _GdkDrawableClass,draw_points,4,2,44229)
CheckOffset(struct _GdkDrawableClass,draw_points,96,2,44229)
CheckMemberSize(struct _GdkDrawableClass,draw_segments,4,2,44234)
CheckOffset(struct _GdkDrawableClass,draw_segments,100,2,44234)
CheckMemberSize(struct _GdkDrawableClass,draw_lines,4,2,44235)
CheckOffset(struct _GdkDrawableClass,draw_lines,104,2,44235)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs,4,2,44242)
CheckOffset(struct _GdkDrawableClass,draw_glyphs,108,2,44242)
CheckMemberSize(struct _GdkDrawableClass,draw_image,4,2,44252)
CheckOffset(struct _GdkDrawableClass,draw_image,112,2,44252)
CheckMemberSize(struct _GdkDrawableClass,get_depth,4,2,44254)
CheckOffset(struct _GdkDrawableClass,get_depth,116,2,44254)
CheckMemberSize(struct _GdkDrawableClass,get_size,4,2,44258)
CheckOffset(struct _GdkDrawableClass,get_size,120,2,44258)
CheckMemberSize(struct _GdkDrawableClass,set_colormap,4,2,44261)
CheckOffset(struct _GdkDrawableClass,set_colormap,124,2,44261)
CheckMemberSize(struct _GdkDrawableClass,get_colormap,4,2,44263)
CheckOffset(struct _GdkDrawableClass,get_colormap,128,2,44263)
CheckMemberSize(struct _GdkDrawableClass,get_visual,4,2,44265)
CheckOffset(struct _GdkDrawableClass,get_visual,132,2,44265)
CheckMemberSize(struct _GdkDrawableClass,get_screen,4,2,44267)
CheckOffset(struct _GdkDrawableClass,get_screen,136,2,44267)
CheckMemberSize(struct _GdkDrawableClass,get_image,4,2,44273)
CheckOffset(struct _GdkDrawableClass,get_image,140,2,44273)
CheckMemberSize(struct _GdkDrawableClass,get_clip_region,4,2,44275)
CheckOffset(struct _GdkDrawableClass,get_clip_region,144,2,44275)
CheckMemberSize(struct _GdkDrawableClass,get_visible_region,4,2,44276)
CheckOffset(struct _GdkDrawableClass,get_visible_region,148,2,44276)
CheckMemberSize(struct _GdkDrawableClass,get_composite_drawable,4,2,44284)
CheckOffset(struct _GdkDrawableClass,get_composite_drawable,152,2,44284)
CheckMemberSize(struct _GdkDrawableClass,draw_pixbuf,4,2,44297)
CheckOffset(struct _GdkDrawableClass,draw_pixbuf,156,2,44297)
CheckMemberSize(struct _GdkDrawableClass,_copy_to_image,4,2,44306)
CheckOffset(struct _GdkDrawableClass,_copy_to_image,160,2,44306)
CheckMemberSize(struct _GdkDrawableClass,draw_glyphs_transformed,4,2,44314)
CheckOffset(struct _GdkDrawableClass,draw_glyphs_transformed,164,2,44314)
CheckMemberSize(struct _GdkDrawableClass,draw_trapezoids,4,2,44319)
CheckOffset(struct _GdkDrawableClass,draw_trapezoids,168,2,44319)
#elif 1
CheckTypeSize(struct _GdkDrawableClass,0, 12973, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDrawableClass on All\n");
CheckOffset(struct _GdkDrawableClass,parent_class,0,1,44170)
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
CheckTypeSize(struct _GdkPangoAttrEmbossed,24, 13001, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,12,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,16,12,44334)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPangoAttrEmbossed,24, 13001, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,11,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,16,11,44334)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPangoAttrEmbossed,16, 13001, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,10,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,12,10,44334)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPangoAttrEmbossed,24, 13001, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,9,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,16,9,44334)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPangoAttrEmbossed,16, 13001, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,6,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,12,6,44334)
#elif defined __ia64__
CheckTypeSize(struct _GdkPangoAttrEmbossed,24, 13001, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,3,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,16,3,44334)
#elif defined __i386__
CheckTypeSize(struct _GdkPangoAttrEmbossed,16, 13001, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,2,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,12,2,44334)
#elif 1
CheckTypeSize(struct _GdkPangoAttrEmbossed,0, 13001, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoAttrEmbossed on All\n");
CheckOffset(struct _GdkPangoAttrEmbossed,attr,0,1,44333)
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
CheckTypeSize(struct _GdkDisplayManagerClass,144, 13003, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,8,12,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,136,12,44338)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDisplayManagerClass,144, 13003, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,8,11,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,136,11,44338)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDisplayManagerClass,72, 13003, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,4,10,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,68,10,44338)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDisplayManagerClass,144, 13003, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,8,9,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,136,9,44338)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDisplayManagerClass,72, 13003, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,4,6,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,68,6,44338)
#elif defined __ia64__
CheckTypeSize(struct _GdkDisplayManagerClass,144, 13003, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,8,3,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,136,3,44338)
#elif defined __i386__
CheckTypeSize(struct _GdkDisplayManagerClass,72, 13003, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,4,2,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,68,2,44338)
#elif 1
CheckTypeSize(struct _GdkDisplayManagerClass,0, 13003, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDisplayManagerClass on All\n");
CheckOffset(struct _GdkDisplayManagerClass,parent_class,0,1,44335)
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
CheckTypeSize(struct _GdkPixmapObjectClass,448, 13006, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on S390X\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,12,44339)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPixmapObjectClass,448, 13006, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on x86-64\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,11,44339)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPixmapObjectClass,224, 13006, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on S390\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,10,44339)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPixmapObjectClass,448, 13006, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on PPC64\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,9,44339)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPixmapObjectClass,224, 13006, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on PPC32\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,6,44339)
#elif defined __ia64__
CheckTypeSize(struct _GdkPixmapObjectClass,448, 13006, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on IA64\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,3,44339)
#elif defined __i386__
CheckTypeSize(struct _GdkPixmapObjectClass,224, 13006, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on IA32\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,2,44339)
#elif 1
CheckTypeSize(struct _GdkPixmapObjectClass,0, 13006, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixmapObjectClass on All\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,1,44339)
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
CheckTypeSize(struct _GdkPangoRendererClass,248, 13008, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on S390X\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,12,44340)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPangoRendererClass,248, 13008, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on x86-64\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,11,44340)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPangoRendererClass,124, 13008, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on S390\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,10,44340)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPangoRendererClass,248, 13008, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on PPC64\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,9,44340)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPangoRendererClass,124, 13008, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on PPC32\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,6,44340)
#elif defined __ia64__
CheckTypeSize(struct _GdkPangoRendererClass,248, 13008, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on IA64\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,3,44340)
#elif defined __i386__
CheckTypeSize(struct _GdkPangoRendererClass,124, 13008, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on IA32\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,2,44340)
#elif 1
CheckTypeSize(struct _GdkPangoRendererClass,0, 13008, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoRendererClass on All\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,1,44340)
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
CheckTypeSize(struct _GdkDisplayClass,176, 13010, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,8,12,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,136,12,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,8,12,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,144,12,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,8,12,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,152,12,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,8,12,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,160,12,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,8,12,44353)
CheckOffset(struct _GdkDisplayClass,closed,168,12,44353)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDisplayClass,176, 13010, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,8,11,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,136,11,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,8,11,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,144,11,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,8,11,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,152,11,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,8,11,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,160,11,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,8,11,44353)
CheckOffset(struct _GdkDisplayClass,closed,168,11,44353)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDisplayClass,88, 13010, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,4,10,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,68,10,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,4,10,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,72,10,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,4,10,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,76,10,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,4,10,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,80,10,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,4,10,44353)
CheckOffset(struct _GdkDisplayClass,closed,84,10,44353)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDisplayClass,176, 13010, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,8,9,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,136,9,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,8,9,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,144,9,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,8,9,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,152,9,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,8,9,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,160,9,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,8,9,44353)
CheckOffset(struct _GdkDisplayClass,closed,168,9,44353)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDisplayClass,88, 13010, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,4,6,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,68,6,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,4,6,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,72,6,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,4,6,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,76,6,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,4,6,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,80,6,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,4,6,44353)
CheckOffset(struct _GdkDisplayClass,closed,84,6,44353)
#elif defined __ia64__
CheckTypeSize(struct _GdkDisplayClass,176, 13010, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,8,3,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,136,3,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,8,3,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,144,3,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,8,3,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,152,3,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,8,3,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,160,3,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,8,3,44353)
CheckOffset(struct _GdkDisplayClass,closed,168,3,44353)
#elif defined __i386__
CheckTypeSize(struct _GdkDisplayClass,88, 13010, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkDisplayClass,get_display_name,4,2,44343)
CheckOffset(struct _GdkDisplayClass,get_display_name,68,2,44343)
CheckMemberSize(struct _GdkDisplayClass,get_n_screens,4,2,44345)
CheckOffset(struct _GdkDisplayClass,get_n_screens,72,2,44345)
CheckMemberSize(struct _GdkDisplayClass,get_screen,4,2,44348)
CheckOffset(struct _GdkDisplayClass,get_screen,76,2,44348)
CheckMemberSize(struct _GdkDisplayClass,get_default_screen,4,2,44350)
CheckOffset(struct _GdkDisplayClass,get_default_screen,80,2,44350)
CheckMemberSize(struct _GdkDisplayClass,closed,4,2,44353)
CheckOffset(struct _GdkDisplayClass,closed,84,2,44353)
#elif 1
CheckTypeSize(struct _GdkDisplayClass,0, 13010, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDisplayClass on All\n");
CheckOffset(struct _GdkDisplayClass,parent_class,0,1,44341)
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
CheckTypeSize(struct _GdkPangoAttrStipple,24, 13017, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,8,12,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,16,12,44355)
#elif defined __x86_64__
CheckTypeSize(struct _GdkPangoAttrStipple,24, 13017, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,8,11,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,16,11,44355)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPangoAttrStipple,16, 13017, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,4,10,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,12,10,44355)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPangoAttrStipple,24, 13017, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,8,9,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,16,9,44355)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPangoAttrStipple,16, 13017, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,4,6,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,12,6,44355)
#elif defined __ia64__
CheckTypeSize(struct _GdkPangoAttrStipple,24, 13017, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,8,3,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,16,3,44355)
#elif defined __i386__
CheckTypeSize(struct _GdkPangoAttrStipple,16, 13017, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,4,2,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,12,2,44355)
#elif 1
CheckTypeSize(struct _GdkPangoAttrStipple,0, 13017, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPangoAttrStipple on All\n");
CheckOffset(struct _GdkPangoAttrStipple,attr,0,1,44354)
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
CheckTypeSize(struct _GdkColormapClass,136, 13019, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on S390X\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,12,44356)
#elif defined __x86_64__
CheckTypeSize(struct _GdkColormapClass,136, 13019, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on x86-64\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,11,44356)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkColormapClass,68, 13019, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on S390\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,10,44356)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkColormapClass,136, 13019, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on PPC64\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,9,44356)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkColormapClass,68, 13019, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on PPC32\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,6,44356)
#elif defined __ia64__
CheckTypeSize(struct _GdkColormapClass,136, 13019, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on IA64\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,3,44356)
#elif defined __i386__
CheckTypeSize(struct _GdkColormapClass,68, 13019, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on IA32\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,2,44356)
#elif 1
CheckTypeSize(struct _GdkColormapClass,0, 13019, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkColormapClass on All\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,1,44356)
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
CheckTypeSize(struct _GdkDragContextClass,136, 13021, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on S390X\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,12,44357)
#elif defined __x86_64__
CheckTypeSize(struct _GdkDragContextClass,136, 13021, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on x86-64\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,11,44357)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkDragContextClass,68, 13021, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on S390\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,10,44357)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkDragContextClass,136, 13021, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on PPC64\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,9,44357)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkDragContextClass,68, 13021, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on PPC32\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,6,44357)
#elif defined __ia64__
CheckTypeSize(struct _GdkDragContextClass,136, 13021, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on IA64\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,3,44357)
#elif defined __i386__
CheckTypeSize(struct _GdkDragContextClass,68, 13021, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on IA32\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,2,44357)
#elif 1
CheckTypeSize(struct _GdkDragContextClass,0, 13021, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkDragContextClass on All\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,1,44357)
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
CheckTypeSize(struct _GdkWindowObjectClass,448, 13023, 12, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on S390X\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,12,44358)
#elif defined __x86_64__
CheckTypeSize(struct _GdkWindowObjectClass,448, 13023, 11, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on x86-64\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,11,44358)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkWindowObjectClass,224, 13023, 10, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on S390\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,10,44358)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkWindowObjectClass,448, 13023, 9, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on PPC64\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,9,44358)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkWindowObjectClass,224, 13023, 6, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on PPC32\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,6,44358)
#elif defined __ia64__
CheckTypeSize(struct _GdkWindowObjectClass,448, 13023, 3, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on IA64\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,3,44358)
#elif defined __i386__
CheckTypeSize(struct _GdkWindowObjectClass,224, 13023, 2, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on IA32\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,2,44358)
#elif 1
CheckTypeSize(struct _GdkWindowObjectClass,0, 13023, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkWindowObjectClass on All\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,1,44358)
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
CheckTypeSize(struct _GdkGCClass,192, 13025, 12, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,8,12,44362)
CheckOffset(struct _GdkGCClass,get_values,136,12,44362)
CheckMemberSize(struct _GdkGCClass,set_values,8,12,44366)
CheckOffset(struct _GdkGCClass,set_values,144,12,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,8,12,44371)
CheckOffset(struct _GdkGCClass,set_dashes,152,12,44371)
#elif defined __x86_64__
CheckTypeSize(struct _GdkGCClass,192, 13025, 11, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,8,11,44362)
CheckOffset(struct _GdkGCClass,get_values,136,11,44362)
CheckMemberSize(struct _GdkGCClass,set_values,8,11,44366)
CheckOffset(struct _GdkGCClass,set_values,144,11,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,8,11,44371)
CheckOffset(struct _GdkGCClass,set_dashes,152,11,44371)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkGCClass,96, 13025, 10, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,4,10,44362)
CheckOffset(struct _GdkGCClass,get_values,68,10,44362)
CheckMemberSize(struct _GdkGCClass,set_values,4,10,44366)
CheckOffset(struct _GdkGCClass,set_values,72,10,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,4,10,44371)
CheckOffset(struct _GdkGCClass,set_dashes,76,10,44371)
#elif defined __powerpc64__
CheckTypeSize(struct _GdkGCClass,192, 13025, 9, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,8,9,44362)
CheckOffset(struct _GdkGCClass,get_values,136,9,44362)
CheckMemberSize(struct _GdkGCClass,set_values,8,9,44366)
CheckOffset(struct _GdkGCClass,set_values,144,9,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,8,9,44371)
CheckOffset(struct _GdkGCClass,set_dashes,152,9,44371)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkGCClass,96, 13025, 6, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,4,6,44362)
CheckOffset(struct _GdkGCClass,get_values,68,6,44362)
CheckMemberSize(struct _GdkGCClass,set_values,4,6,44366)
CheckOffset(struct _GdkGCClass,set_values,72,6,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,4,6,44371)
CheckOffset(struct _GdkGCClass,set_dashes,76,6,44371)
#elif defined __ia64__
CheckTypeSize(struct _GdkGCClass,192, 13025, 3, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,8,3,44362)
CheckOffset(struct _GdkGCClass,get_values,136,3,44362)
CheckMemberSize(struct _GdkGCClass,set_values,8,3,44366)
CheckOffset(struct _GdkGCClass,set_values,144,3,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,8,3,44371)
CheckOffset(struct _GdkGCClass,set_dashes,152,3,44371)
#elif defined __i386__
CheckTypeSize(struct _GdkGCClass,96, 13025, 2, , NULL, 0, NULL)
CheckMemberSize(struct _GdkGCClass,get_values,4,2,44362)
CheckOffset(struct _GdkGCClass,get_values,68,2,44362)
CheckMemberSize(struct _GdkGCClass,set_values,4,2,44366)
CheckOffset(struct _GdkGCClass,set_values,72,2,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,4,2,44371)
CheckOffset(struct _GdkGCClass,set_dashes,76,2,44371)
#elif 1
CheckTypeSize(struct _GdkGCClass,0, 13025, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkGCClass on All\n");
CheckOffset(struct _GdkGCClass,parent_class,0,1,44359)
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

#if defined __s390x__
/* S390X */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#elif defined __ia64__
/* IA64 */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#elif defined __i386__
/* IA32 */
typedef GdkFilterReturn (*GdkFilterFunc_db)(GdkXEvent *, GdkEvent *, gpointer);
CheckFunctionTypedef(GdkFilterFunc,GdkFilterFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*GdkSpanFunc_db)(GdkSpan *, gpointer);
CheckFunctionTypedef(GdkSpanFunc,GdkSpanFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*GdkEventFunc_db)(GdkEvent *, gpointer);
CheckFunctionTypedef(GdkEventFunc,GdkEventFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#elif defined __ia64__
/* IA64 */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#elif defined __i386__
/* IA32 */
typedef void (*GdkInputFunction_db)(gpointer, gint, GdkInputCondition);
CheckFunctionTypedef(GdkInputFunction,GdkInputFunction_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
#elif defined __ia64__
/* IA64 */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
#elif defined __i386__
/* IA32 */
typedef void (*GdkDestroyNotify_db)(gpointer);
CheckFunctionTypedef(GdkDestroyNotify,GdkDestroyNotify_db);
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
extern gboolean gdk_event_get_root_coords_db(const GdkEvent *, gdouble *, gdouble *);
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
extern gboolean gdk_rectangle_intersect_db(const GdkRectangle *, const GdkRectangle *, GdkRectangle *);
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
extern guint32 gdk_event_get_time_db(const GdkEvent *);
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
extern GdkRegion * gdk_pango_layout_line_get_clip_region_db(PangoLayoutLine *, gint, gint, const gint *, gint);
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
extern void gdk_region_subtract_db(GdkRegion *, const GdkRegion *);
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
extern GdkRegion * gdk_region_copy_db(const GdkRegion *);
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
extern void gdk_draw_polygon_db(GdkDrawable *, GdkGC *, gboolean, const GdkPoint *, gint);
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
extern void gdk_window_invalidate_maybe_recurse_db(GdkWindow *, const GdkRegion *, gboolean(*fptr0)(GdkWindow *,gpointer)
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
extern void gdk_region_intersect_db(GdkRegion *, const GdkRegion *);
CheckInterfacedef(gdk_region_intersect,gdk_region_intersect_db);
extern GdkWindow * gdk_selection_owner_get_db(GdkAtom);
CheckInterfacedef(gdk_selection_owner_get,gdk_selection_owner_get_db);
extern void gdk_draw_pixbuf_db(GdkDrawable *, GdkGC *, const GdkPixbuf *, gint, gint, gint, gint, gint, gint, GdkRgbDither, gint, gint);
CheckInterfacedef(gdk_draw_pixbuf,gdk_draw_pixbuf_db);
extern void gdk_rgb_cmap_free_db(GdkRgbCmap *);
CheckInterfacedef(gdk_rgb_cmap_free,gdk_rgb_cmap_free_db);
extern GdkDisplay * gdk_display_open_db(const gchar *);
CheckInterfacedef(gdk_display_open,gdk_display_open_db);
extern GdkPixmap * gdk_pixmap_colormap_create_from_xpm_d_db(GdkDrawable *, GdkColormap *, GdkBitmap * *, const GdkColor *, gchar * *);
CheckInterfacedef(gdk_pixmap_colormap_create_from_xpm_d,gdk_pixmap_colormap_create_from_xpm_d_db);
extern gboolean gdk_keyval_is_lower_db(guint);
CheckInterfacedef(gdk_keyval_is_lower,gdk_keyval_is_lower_db);
GCallback gdk_threads_unlock_db ;
CheckGlobalVar(gdk_threads_unlock_db, gdk_threads_unlock);
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
extern void gdk_window_begin_paint_region_db(GdkWindow *, const GdkRegion *);
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
extern gboolean gdk_event_get_coords_db(const GdkEvent *, gdouble *, gdouble *);
CheckInterfacedef(gdk_event_get_coords,gdk_event_get_coords_db);
extern void gdk_gc_set_ts_origin_db(GdkGC *, gint, gint);
CheckInterfacedef(gdk_gc_set_ts_origin,gdk_gc_set_ts_origin_db);
extern GdkWindowType gdk_window_get_window_type_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_window_type,gdk_window_get_window_type_db);
extern void gdk_window_set_focus_on_map_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_focus_on_map,gdk_window_set_focus_on_map_db);
extern void gdk_region_union_with_rect_db(GdkRegion *, const GdkRectangle *);
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
extern void gdk_display_put_event_db(GdkDisplay *, const GdkEvent *);
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
extern void gdk_region_spans_intersect_foreach_db(GdkRegion *, const GdkSpan *, int, gboolean, GdkSpanFunc, gpointer);
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
extern void gdk_display_store_clipboard_db(GdkDisplay *, GdkWindow *, guint32, const GdkAtom *, gint);
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
extern void gdk_window_set_geometry_hints_db(GdkWindow *, const GdkGeometry *, GdkWindowHints);
CheckInterfacedef(gdk_window_set_geometry_hints,gdk_window_set_geometry_hints_db);
extern GType gdk_window_class_get_type_db(void);
CheckInterfacedef(gdk_window_class_get_type,gdk_window_class_get_type_db);
extern guint gdk_unicode_to_keyval_db(guint32);
CheckInterfacedef(gdk_unicode_to_keyval,gdk_unicode_to_keyval_db);
extern void gdk_draw_arc_db(GdkDrawable *, GdkGC *, gboolean, gint, gint, gint, gint, gint, gint);
CheckInterfacedef(gdk_draw_arc,gdk_draw_arc_db);
extern void gdk_event_handler_set_db(GdkEventFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gdk_event_handler_set,gdk_event_handler_set_db);
extern void gdk_region_get_clipbox_db(const GdkRegion *, GdkRectangle *);
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
extern GdkRegion * gdk_pango_layout_get_clip_region_db(PangoLayout *, gint, gint, const gint *, gint);
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
extern void gdk_window_invalidate_rect_db(GdkWindow *, const GdkRectangle *, gboolean);
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
extern void gdk_draw_indexed_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, const guchar *, gint, GdkRgbCmap *);
CheckInterfacedef(gdk_draw_indexed_image,gdk_draw_indexed_image_db);
extern gboolean gdk_color_equal_db(const GdkColor *, const GdkColor *);
CheckInterfacedef(gdk_color_equal,gdk_color_equal_db);
extern gboolean gdk_region_empty_db(const GdkRegion *);
CheckInterfacedef(gdk_region_empty,gdk_region_empty_db);
extern void gdk_region_offset_db(GdkRegion *, gint, gint);
CheckInterfacedef(gdk_region_offset,gdk_region_offset_db);
extern gint gdk_string_to_compound_text_db(const gchar *, GdkAtom *, gint *, guchar * *, gint *);
CheckInterfacedef(gdk_string_to_compound_text,gdk_string_to_compound_text_db);
extern GdkScreen * gdk_gc_get_screen_db(GdkGC *);
CheckInterfacedef(gdk_gc_get_screen,gdk_gc_get_screen_db);
extern GdkOverlapType gdk_region_rect_in_db(const GdkRegion *, const GdkRectangle *);
CheckInterfacedef(gdk_region_rect_in,gdk_region_rect_in_db);
extern GType gdk_cursor_type_get_type_db(void);
CheckInterfacedef(gdk_cursor_type_get_type,gdk_cursor_type_get_type_db);
extern gboolean gdk_window_set_static_gravities_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_static_gravities,gdk_window_set_static_gravities_db);
extern gint gdk_screen_get_number_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_number,gdk_screen_get_number_db);
extern void gdk_draw_segments_db(GdkDrawable *, GdkGC *, const GdkSegment *, gint);
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
extern void gdk_draw_rgb_32_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, const guchar *, gint);
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
extern gboolean gdk_event_get_state_db(const GdkEvent *, GdkModifierType *);
CheckInterfacedef(gdk_event_get_state,gdk_event_get_state_db);
extern void gdk_gc_set_values_db(GdkGC *, GdkGCValues *, GdkGCValuesMask);
CheckInterfacedef(gdk_gc_set_values,gdk_gc_set_values_db);
extern GdkEvent * gdk_event_get_graphics_expose_db(GdkWindow *);
CheckInterfacedef(gdk_event_get_graphics_expose,gdk_event_get_graphics_expose_db);
extern void gdk_color_free_db(GdkColor *);
CheckInterfacedef(gdk_color_free,gdk_color_free_db);
extern void gdk_rectangle_union_db(const GdkRectangle *, const GdkRectangle *, GdkRectangle *);
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
extern void gdk_draw_gray_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, const guchar *, gint);
CheckInterfacedef(gdk_draw_gray_image,gdk_draw_gray_image_db);
extern gint gdk_text_property_to_text_list_db(GdkAtom, gint, const guchar *, gint, gchar * * *);
CheckInterfacedef(gdk_text_property_to_text_list,gdk_text_property_to_text_list_db);
GCallback gdk_threads_lock_db ;
CheckGlobalVar(gdk_threads_lock_db, gdk_threads_lock);
extern gboolean gdk_region_equal_db(const GdkRegion *, const GdkRegion *);
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
extern void gdk_window_shape_combine_region_db(GdkWindow *, const GdkRegion *, gint, gint);
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
extern void gdk_region_union_db(GdkRegion *, const GdkRegion *);
CheckInterfacedef(gdk_region_union,gdk_region_union_db);
extern gint gdk_screen_get_width_mm_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_width_mm,gdk_screen_get_width_mm_db);
extern void gdk_draw_lines_db(GdkDrawable *, GdkGC *, const GdkPoint *, gint);
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
extern void gdk_colormap_free_colors_db(GdkColormap *, const GdkColor *, gint);
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
extern void gdk_draw_rgb_image_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, const guchar *, gint);
CheckInterfacedef(gdk_draw_rgb_image,gdk_draw_rgb_image_db);
extern void gdk_query_visual_types_db(GdkVisualType * *, gint *);
CheckInterfacedef(gdk_query_visual_types,gdk_query_visual_types_db);
extern GType gdk_crossing_mode_get_type_db(void);
CheckInterfacedef(gdk_crossing_mode_get_type,gdk_crossing_mode_get_type_db);
extern void gdk_draw_trapezoids_db(GdkDrawable *, GdkGC *, const struct _GdkTrapezoid *, gint);
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
extern void gdk_gc_set_clip_region_db(GdkGC *, const GdkRegion *);
CheckInterfacedef(gdk_gc_set_clip_region,gdk_gc_set_clip_region_db);
extern gboolean gdk_device_set_mode_db(GdkDevice *, GdkInputMode);
CheckInterfacedef(gdk_device_set_mode,gdk_device_set_mode_db);
extern void gdk_query_depths_db(gint * *, gint *);
CheckInterfacedef(gdk_query_depths,gdk_query_depths_db);
extern void gdk_draw_rgb_32_image_dithalign_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, const guchar *, gint, gint, gint);
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
extern GdkRegion * gdk_region_polygon_db(const GdkPoint *, gint, GdkFillRule);
CheckInterfacedef(gdk_region_polygon,gdk_region_polygon_db);
extern void gdk_window_clear_db(GdkWindow *);
CheckInterfacedef(gdk_window_clear,gdk_window_clear_db);
extern const gchar * gdk_display_get_name_db(GdkDisplay *);
CheckInterfacedef(gdk_display_get_name,gdk_display_get_name_db);
extern void gdk_pango_renderer_set_gc_db(GdkPangoRenderer *, GdkGC *);
CheckInterfacedef(gdk_pango_renderer_set_gc,gdk_pango_renderer_set_gc_db);
extern gboolean gdk_spawn_on_screen_with_pipes_db(GdkScreen *, const gchar *, gchar * *, gchar * *, GSpawnFlags, GSpawnChildSetupFunc, gpointer, gint *, gint *, gint *, gint *, GError * *);
CheckInterfacedef(gdk_spawn_on_screen_with_pipes,gdk_spawn_on_screen_with_pipes_db);
extern void gdk_event_put_db(const GdkEvent *);
CheckInterfacedef(gdk_event_put,gdk_event_put_db);
extern GType gdk_window_type_get_type_db(void);
CheckInterfacedef(gdk_window_type_get_type,gdk_window_type_get_type_db);
extern GdkScreen * gdk_event_get_screen_db(const GdkEvent *);
CheckInterfacedef(gdk_event_get_screen,gdk_event_get_screen_db);
extern GdkPointerHooks * gdk_set_pointer_hooks_db(const GdkPointerHooks *);
CheckInterfacedef(gdk_set_pointer_hooks,gdk_set_pointer_hooks_db);
extern void gdk_draw_glyphs_transformed_db(GdkDrawable *, GdkGC *, const PangoMatrix *, PangoFont *, gint, gint, PangoGlyphString *);
CheckInterfacedef(gdk_draw_glyphs_transformed,gdk_draw_glyphs_transformed_db);
extern void gdk_draw_rgb_image_dithalign_db(GdkDrawable *, GdkGC *, gint, gint, gint, gint, GdkRgbDither, const guchar *, gint, gint, gint);
CheckInterfacedef(gdk_draw_rgb_image_dithalign,gdk_draw_rgb_image_dithalign_db);
extern void gdk_window_process_updates_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_process_updates,gdk_window_process_updates_db);
extern GType gdk_extension_mode_get_type_db(void);
CheckInterfacedef(gdk_extension_mode_get_type,gdk_extension_mode_get_type_db);
extern gboolean gdk_event_get_axis_db(const GdkEvent *, GdkAxisUse, gdouble *);
CheckInterfacedef(gdk_event_get_axis,gdk_event_get_axis_db);
extern void gdk_gc_set_clip_rectangle_db(GdkGC *, const GdkRectangle *);
CheckInterfacedef(gdk_gc_set_clip_rectangle,gdk_gc_set_clip_rectangle_db);
extern void gdk_gc_set_rgb_bg_color_db(GdkGC *, const GdkColor *);
CheckInterfacedef(gdk_gc_set_rgb_bg_color,gdk_gc_set_rgb_bg_color_db);
extern void gdk_region_xor_db(GdkRegion *, const GdkRegion *);
CheckInterfacedef(gdk_region_xor,gdk_region_xor_db);
extern GdkCursor * gdk_cursor_ref_db(GdkCursor *);
CheckInterfacedef(gdk_cursor_ref,gdk_cursor_ref_db);
extern GdkVisual * gdk_visual_get_best_with_both_db(gint, GdkVisualType);
CheckInterfacedef(gdk_visual_get_best_with_both,gdk_visual_get_best_with_both_db);
extern GType gdk_scroll_direction_get_type_db(void);
CheckInterfacedef(gdk_scroll_direction_get_type,gdk_scroll_direction_get_type_db);
extern void gdk_draw_points_db(GdkDrawable *, GdkGC *, const GdkPoint *, gint);
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
extern void gdk_window_begin_paint_rect_db(GdkWindow *, const GdkRectangle *);
CheckInterfacedef(gdk_window_begin_paint_rect,gdk_window_begin_paint_rect_db);
extern void gdk_pointer_ungrab_db(guint32);
CheckInterfacedef(gdk_pointer_ungrab,gdk_pointer_ungrab_db);
extern GdkPixmap * gdk_pixmap_lookup_db(GdkNativeWindow);
CheckInterfacedef(gdk_pixmap_lookup,gdk_pixmap_lookup_db);
extern void gdk_threads_leave_db(void);
CheckInterfacedef(gdk_threads_leave,gdk_threads_leave_db);
extern gboolean gdk_pointer_is_grabbed_db(void);
CheckInterfacedef(gdk_pointer_is_grabbed,gdk_pointer_is_grabbed_db);
extern gboolean gdk_region_point_in_db(const GdkRegion *, int, int);
CheckInterfacedef(gdk_region_point_in,gdk_region_point_in_db);
extern GdkWindowState gdk_window_get_state_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_state,gdk_window_get_state_db);
extern void gdk_region_get_rectangles_db(const GdkRegion *, GdkRectangle * *, gint *);
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
extern GdkRegion * gdk_region_rectangle_db(const GdkRectangle *);
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
extern void gdk_window_invalidate_region_db(GdkWindow *, const GdkRegion *, gboolean);
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
extern GdkEvent * gdk_event_copy_db(const GdkEvent *);
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
extern void gdk_window_move_region_db(GdkWindow *, const GdkRegion *, gint, gint);
CheckInterfacedef(gdk_window_move_region,gdk_window_move_region_db);
extern void gdk_window_set_urgency_hint_db(GdkWindow *, gboolean);
CheckInterfacedef(gdk_window_set_urgency_hint,gdk_window_set_urgency_hint_db);
extern GdkPixmap * gdk_pixmap_foreign_new_for_screen_db(GdkScreen *, GdkNativeWindow, gint, gint, gint);
CheckInterfacedef(gdk_pixmap_foreign_new_for_screen,gdk_pixmap_foreign_new_for_screen_db);
extern GdkAtom gdk_atom_intern_static_string_db(const gchar *);
CheckInterfacedef(gdk_atom_intern_static_string,gdk_atom_intern_static_string_db);
extern void gdk_screen_set_font_options_db(GdkScreen *, const cairo_font_options_t *);
CheckInterfacedef(gdk_screen_set_font_options,gdk_screen_set_font_options_db);
extern const cairo_font_options_t * gdk_screen_get_font_options_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_font_options,gdk_screen_get_font_options_db);
extern void gdk_screen_set_resolution_db(GdkScreen *, gdouble);
CheckInterfacedef(gdk_screen_set_resolution,gdk_screen_set_resolution_db);
extern gdouble gdk_screen_get_resolution_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_resolution,gdk_screen_get_resolution_db);
extern gboolean gdk_screen_is_composited_db(GdkScreen *);
CheckInterfacedef(gdk_screen_is_composited,gdk_screen_is_composited_db);
extern GdkWindow * gdk_screen_get_active_window_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_active_window,gdk_screen_get_active_window_db);
extern GList * gdk_screen_get_window_stack_db(GdkScreen *);
CheckInterfacedef(gdk_screen_get_window_stack,gdk_screen_get_window_stack_db);
extern void gdk_window_merge_child_input_shapes_db(GdkWindow *);
CheckInterfacedef(gdk_window_merge_child_input_shapes,gdk_window_merge_child_input_shapes_db);
extern void gdk_window_set_child_input_shapes_db(GdkWindow *);
CheckInterfacedef(gdk_window_set_child_input_shapes,gdk_window_set_child_input_shapes_db);
extern void gdk_window_input_shape_combine_region_db(GdkWindow *, const GdkRegion *, gint, gint);
CheckInterfacedef(gdk_window_input_shape_combine_region,gdk_window_input_shape_combine_region_db);
extern void gdk_window_input_shape_combine_mask_db(GdkWindow *, GdkBitmap *, gint, gint);
CheckInterfacedef(gdk_window_input_shape_combine_mask,gdk_window_input_shape_combine_mask_db);
extern GdkWindowTypeHint gdk_window_get_type_hint_db(GdkWindow *);
CheckInterfacedef(gdk_window_get_type_hint,gdk_window_get_type_hint_db);
extern gboolean gdk_display_supports_shapes_db(GdkDisplay *);
CheckInterfacedef(gdk_display_supports_shapes,gdk_display_supports_shapes_db);
extern gboolean gdk_display_supports_input_shapes_db(GdkDisplay *);
CheckInterfacedef(gdk_display_supports_input_shapes,gdk_display_supports_input_shapes_db);
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
