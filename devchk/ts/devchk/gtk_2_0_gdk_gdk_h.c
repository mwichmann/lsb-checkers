/*
 * Test of gtk-2.0/gdk/gdk.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <fontconfig/fontconfig.h>
struct _GdkAtom { };
struct _GdkRegion { };
struct _GdkDisplayManager { };
struct _GdkPangoRendererPrivate { };
struct _GdkFont {};
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
	CompareConstant(GDK_MAX_TIMECOORD_AXES,128,6668,architecture)
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

#if __i386__
CheckTypeSize(struct _GdkDrawable,12, 12672, 2)
Msg("Missing member data for _GdkDrawable on IA32\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,2,43426)
#elif __x86_64__
CheckTypeSize(struct _GdkDrawable,24, 12672, 11)
Msg("Missing member data for _GdkDrawable on x86-64\n");
CheckOffset(struct _GdkDrawable,parent_instance,0,11,43426)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12672,0);
Msg("Find size of _GdkDrawable (12672)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindow,12, 12673, 2)
#elif __x86_64__
CheckTypeSize(GdkWindow,24, 12673, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12673,0);
Msg("Find size of GdkWindow (12673)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindow *,4, 12674, 2)
#elif __x86_64__
CheckTypeSize(GdkWindow *,8, 12674, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12674,0);
Msg("Find size of GdkWindow * (12674)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkGC,32, 12675, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkGC,48, 12675, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12675,0);
Msg("Find size of _GdkGC (12675)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkColormap,28, 12676, 2)
CheckMemberSize(struct _GdkColormap,size,4,2,43433)
CheckOffset(struct _GdkColormap,size,12,2,43433)
CheckMemberSize(struct _GdkColormap,colors,4,2,43438)
CheckOffset(struct _GdkColormap,colors,16,2,43438)
CheckMemberSize(struct _GdkColormap,visual,4,2,43462)
CheckOffset(struct _GdkColormap,visual,20,2,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,4,2,43463)
CheckOffset(struct _GdkColormap,windowing_data,24,2,43463)
#elif __x86_64__
CheckTypeSize(struct _GdkColormap,56, 12676, 11)
CheckMemberSize(struct _GdkColormap,size,4,11,43433)
CheckOffset(struct _GdkColormap,size,24,11,43433)
CheckMemberSize(struct _GdkColormap,colors,8,11,43438)
CheckOffset(struct _GdkColormap,colors,32,11,43438)
CheckMemberSize(struct _GdkColormap,visual,8,11,43462)
CheckOffset(struct _GdkColormap,visual,40,11,43462)
CheckMemberSize(struct _GdkColormap,windowing_data,8,11,43463)
CheckOffset(struct _GdkColormap,windowing_data,48,11,43463)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12676,0);
Msg("Find size of _GdkColormap (12676)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkColor,12, 12677, 2)
CheckMemberSize(struct _GdkColor,red,2,2,43435)
CheckOffset(struct _GdkColor,red,4,2,43435)
CheckMemberSize(struct _GdkColor,green,2,2,43436)
CheckOffset(struct _GdkColor,green,6,2,43436)
CheckMemberSize(struct _GdkColor,blue,2,2,43437)
CheckOffset(struct _GdkColor,blue,8,2,43437)
#elif __x86_64__
CheckTypeSize(struct _GdkColor,12, 12677, 11)
CheckMemberSize(struct _GdkColor,red,2,11,43435)
CheckOffset(struct _GdkColor,red,4,11,43435)
CheckMemberSize(struct _GdkColor,green,2,11,43436)
CheckOffset(struct _GdkColor,green,6,11,43436)
CheckMemberSize(struct _GdkColor,blue,2,11,43437)
CheckOffset(struct _GdkColor,blue,8,11,43437)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12677,0);
Msg("Find size of _GdkColor (12677)\n");
#endif

#if __i386__
CheckTypeSize(GdkColor,12, 12678, 2)
#elif __x86_64__
CheckTypeSize(GdkColor,12, 12678, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12678,0);
Msg("Find size of GdkColor (12678)\n");
#endif

#if __i386__
CheckTypeSize(GdkColor *,4, 12679, 2)
#elif __x86_64__
CheckTypeSize(GdkColor *,8, 12679, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12679,0);
Msg("Find size of GdkColor * (12679)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkVisual,68, 12680, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkVisual,80, 12680, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12680,0);
Msg("Find size of _GdkVisual (12680)\n");
#endif

#if __i386__
CheckEnum("GDK_VISUAL_STATIC_GRAY",GDK_VISUAL_STATIC_GRAY,0);
CheckEnum("GDK_VISUAL_GRAYSCALE",GDK_VISUAL_GRAYSCALE,1);
CheckEnum("GDK_VISUAL_STATIC_COLOR",GDK_VISUAL_STATIC_COLOR,2);
CheckEnum("GDK_VISUAL_PSEUDO_COLOR",GDK_VISUAL_PSEUDO_COLOR,3);
CheckEnum("GDK_VISUAL_TRUE_COLOR",GDK_VISUAL_TRUE_COLOR,4);
CheckEnum("GDK_VISUAL_DIRECT_COLOR",GDK_VISUAL_DIRECT_COLOR,5);
#elif __x86_64__
CheckEnum("GDK_VISUAL_STATIC_GRAY",GDK_VISUAL_STATIC_GRAY,0);
CheckEnum("GDK_VISUAL_GRAYSCALE",GDK_VISUAL_GRAYSCALE,1);
CheckEnum("GDK_VISUAL_STATIC_COLOR",GDK_VISUAL_STATIC_COLOR,2);
CheckEnum("GDK_VISUAL_PSEUDO_COLOR",GDK_VISUAL_PSEUDO_COLOR,3);
CheckEnum("GDK_VISUAL_TRUE_COLOR",GDK_VISUAL_TRUE_COLOR,4);
CheckEnum("GDK_VISUAL_DIRECT_COLOR",GDK_VISUAL_DIRECT_COLOR,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12681,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-87 (12681)\n");
#endif

#if __i386__
CheckTypeSize(GdkVisualType,4, 12682, 2)
#elif __x86_64__
CheckTypeSize(GdkVisualType,4, 12682, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12682,0);
Msg("Find size of GdkVisualType (12682)\n");
#endif

#if __i386__
CheckEnum("GDK_LSB_FIRST",GDK_LSB_FIRST,0);
CheckEnum("GDK_MSB_FIRST",GDK_MSB_FIRST,1);
#elif __x86_64__
CheckEnum("GDK_LSB_FIRST",GDK_LSB_FIRST,0);
CheckEnum("GDK_MSB_FIRST",GDK_MSB_FIRST,1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12683,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-78 (12683)\n");
#endif

#if __i386__
CheckTypeSize(GdkByteOrder,4, 12684, 2)
#elif __x86_64__
CheckTypeSize(GdkByteOrder,4, 12684, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12684,0);
Msg("Find size of GdkByteOrder (12684)\n");
#endif

#if __i386__
CheckTypeSize(GdkVisual,68, 12685, 2)
#elif __x86_64__
CheckTypeSize(GdkVisual,80, 12685, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12685,0);
Msg("Find size of GdkVisual (12685)\n");
#endif

#if __i386__
CheckTypeSize(GdkVisual *,4, 12686, 2)
#elif __x86_64__
CheckTypeSize(GdkVisual *,8, 12686, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12686,0);
Msg("Find size of GdkVisual * (12686)\n");
#endif

#if __i386__
CheckTypeSize(GdkColormap,28, 12687, 2)
#elif __x86_64__
CheckTypeSize(GdkColormap,56, 12687, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12687,0);
Msg("Find size of GdkColormap (12687)\n");
#endif

#if __i386__
CheckTypeSize(GdkColormap *,4, 12688, 2)
#elif __x86_64__
CheckTypeSize(GdkColormap *,8, 12688, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12688,0);
Msg("Find size of GdkColormap * (12688)\n");
#endif

#if __i386__
CheckTypeSize(GdkGC,32, 12689, 2)
#elif __x86_64__
CheckTypeSize(GdkGC,48, 12689, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12689,0);
Msg("Find size of GdkGC (12689)\n");
#endif

#if __i386__
CheckTypeSize(GdkGC *,4, 12690, 2)
#elif __x86_64__
CheckTypeSize(GdkGC *,8, 12690, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12690,0);
Msg("Find size of GdkGC * (12690)\n");
#endif

#if __i386__
CheckTypeSize(GdkDrawable,12, 12691, 2)
#elif __x86_64__
CheckTypeSize(GdkDrawable,24, 12691, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12691,0);
Msg("Find size of GdkDrawable (12691)\n");
#endif

#if __i386__
CheckTypeSize(GdkDrawable *,4, 12692, 2)
#elif __x86_64__
CheckTypeSize(GdkDrawable *,8, 12692, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12692,0);
Msg("Find size of GdkDrawable * (12692)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDisplay,80, 12693, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkDisplay,120, 12693, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12693,0);
Msg("Find size of _GdkDisplay (12693)\n");
#endif

#if 1
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(struct _GdkDevice,44, 12697, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkDevice,72, 12697, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12697,0);
Msg("Find size of _GdkDevice (12697)\n");
#endif

#if __i386__
CheckEnum("GDK_SOURCE_MOUSE",GDK_SOURCE_MOUSE,0);
CheckEnum("GDK_SOURCE_PEN",GDK_SOURCE_PEN,1);
CheckEnum("GDK_SOURCE_ERASER",GDK_SOURCE_ERASER,2);
CheckEnum("GDK_SOURCE_CURSOR",GDK_SOURCE_CURSOR,3);
#elif __x86_64__
CheckEnum("GDK_SOURCE_MOUSE",GDK_SOURCE_MOUSE,0);
CheckEnum("GDK_SOURCE_PEN",GDK_SOURCE_PEN,1);
CheckEnum("GDK_SOURCE_ERASER",GDK_SOURCE_ERASER,2);
CheckEnum("GDK_SOURCE_CURSOR",GDK_SOURCE_CURSOR,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12698,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-17 (12698)\n");
#endif

#if __i386__
CheckTypeSize(GdkInputSource,4, 12699, 2)
#elif __x86_64__
CheckTypeSize(GdkInputSource,4, 12699, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12699,0);
Msg("Find size of GdkInputSource (12699)\n");
#endif

#if __i386__
CheckEnum("GDK_MODE_DISABLED",GDK_MODE_DISABLED,0);
CheckEnum("GDK_MODE_SCREEN",GDK_MODE_SCREEN,1);
CheckEnum("GDK_MODE_WINDOW",GDK_MODE_WINDOW,2);
#elif __x86_64__
CheckEnum("GDK_MODE_DISABLED",GDK_MODE_DISABLED,0);
CheckEnum("GDK_MODE_SCREEN",GDK_MODE_SCREEN,1);
CheckEnum("GDK_MODE_WINDOW",GDK_MODE_WINDOW,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12700,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-18 (12700)\n");
#endif

#if __i386__
CheckTypeSize(GdkInputMode,4, 12701, 2)
#elif __x86_64__
CheckTypeSize(GdkInputMode,4, 12701, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12701,0);
Msg("Find size of GdkInputMode (12701)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDeviceAxis,20, 12702, 2)
CheckMemberSize(struct _GdkDeviceAxis,min,8,2,43494)
CheckOffset(struct _GdkDeviceAxis,min,4,2,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,2,43495)
CheckOffset(struct _GdkDeviceAxis,max,12,2,43495)
#elif __x86_64__
CheckTypeSize(struct _GdkDeviceAxis,24, 12702, 11)
CheckMemberSize(struct _GdkDeviceAxis,min,8,11,43494)
CheckOffset(struct _GdkDeviceAxis,min,8,11,43494)
CheckMemberSize(struct _GdkDeviceAxis,max,8,11,43495)
CheckOffset(struct _GdkDeviceAxis,max,16,11,43495)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12702,0);
Msg("Find size of _GdkDeviceAxis (12702)\n");
#endif

#if __i386__
CheckEnum("GDK_AXIS_IGNORE",GDK_AXIS_IGNORE,0);
CheckEnum("GDK_AXIS_X",GDK_AXIS_X,1);
CheckEnum("GDK_AXIS_Y",GDK_AXIS_Y,2);
CheckEnum("GDK_AXIS_PRESSURE",GDK_AXIS_PRESSURE,3);
CheckEnum("GDK_AXIS_XTILT",GDK_AXIS_XTILT,4);
CheckEnum("GDK_AXIS_YTILT",GDK_AXIS_YTILT,5);
CheckEnum("GDK_AXIS_WHEEL",GDK_AXIS_WHEEL,6);
CheckEnum("GDK_AXIS_LAST",GDK_AXIS_LAST,7);
#elif __x86_64__
CheckEnum("GDK_AXIS_IGNORE",GDK_AXIS_IGNORE,0);
CheckEnum("GDK_AXIS_X",GDK_AXIS_X,1);
CheckEnum("GDK_AXIS_Y",GDK_AXIS_Y,2);
CheckEnum("GDK_AXIS_PRESSURE",GDK_AXIS_PRESSURE,3);
CheckEnum("GDK_AXIS_XTILT",GDK_AXIS_XTILT,4);
CheckEnum("GDK_AXIS_YTILT",GDK_AXIS_YTILT,5);
CheckEnum("GDK_AXIS_WHEEL",GDK_AXIS_WHEEL,6);
CheckEnum("GDK_AXIS_LAST",GDK_AXIS_LAST,7);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12703,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-19 (12703)\n");
#endif

#if __i386__
CheckTypeSize(GdkAxisUse,4, 12704, 2)
#elif __x86_64__
CheckTypeSize(GdkAxisUse,4, 12704, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12704,0);
Msg("Find size of GdkAxisUse (12704)\n");
#endif

#if __i386__
CheckTypeSize(GdkDeviceAxis,20, 12705, 2)
#elif __x86_64__
CheckTypeSize(GdkDeviceAxis,24, 12705, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12705,0);
Msg("Find size of GdkDeviceAxis (12705)\n");
#endif

#if __i386__
CheckTypeSize(GdkDeviceAxis *,4, 12706, 2)
#elif __x86_64__
CheckTypeSize(GdkDeviceAxis *,8, 12706, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12706,0);
Msg("Find size of GdkDeviceAxis * (12706)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 2)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,2,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,2,43514)
#elif __x86_64__
CheckTypeSize(struct _GdkDeviceKey,8, 12707, 11)
CheckMemberSize(struct _GdkDeviceKey,modifiers,4,11,43514)
CheckOffset(struct _GdkDeviceKey,modifiers,4,11,43514)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12707,0);
Msg("Find size of _GdkDeviceKey (12707)\n");
#endif

#if __i386__
CheckEnum("GDK_SHIFT_MASK",GDK_SHIFT_MASK,1);
CheckEnum("GDK_LOCK_MASK",GDK_LOCK_MASK,2);
CheckEnum("GDK_CONTROL_MASK",GDK_CONTROL_MASK,4);
CheckEnum("GDK_MOD1_MASK",GDK_MOD1_MASK,8);
CheckEnum("GDK_MOD2_MASK",GDK_MOD2_MASK,16);
CheckEnum("GDK_MOD3_MASK",GDK_MOD3_MASK,32);
CheckEnum("GDK_MOD4_MASK",GDK_MOD4_MASK,64);
CheckEnum("GDK_MOD5_MASK",GDK_MOD5_MASK,128);
CheckEnum("GDK_BUTTON1_MASK",GDK_BUTTON1_MASK,256);
CheckEnum("GDK_BUTTON2_MASK",GDK_BUTTON2_MASK,512);
CheckEnum("GDK_BUTTON3_MASK",GDK_BUTTON3_MASK,1024);
CheckEnum("GDK_BUTTON4_MASK",GDK_BUTTON4_MASK,2048);
CheckEnum("GDK_BUTTON5_MASK",GDK_BUTTON5_MASK,4096);
CheckEnum("GDK_RELEASE_MASK",GDK_RELEASE_MASK,1073741824);
CheckEnum("GDK_MODIFIER_MASK",GDK_MODIFIER_MASK,1073750015);
#elif __x86_64__
CheckEnum("GDK_SHIFT_MASK",GDK_SHIFT_MASK,1);
CheckEnum("GDK_LOCK_MASK",GDK_LOCK_MASK,2);
CheckEnum("GDK_CONTROL_MASK",GDK_CONTROL_MASK,4);
CheckEnum("GDK_MOD1_MASK",GDK_MOD1_MASK,8);
CheckEnum("GDK_MOD2_MASK",GDK_MOD2_MASK,16);
CheckEnum("GDK_MOD3_MASK",GDK_MOD3_MASK,32);
CheckEnum("GDK_MOD4_MASK",GDK_MOD4_MASK,64);
CheckEnum("GDK_MOD5_MASK",GDK_MOD5_MASK,128);
CheckEnum("GDK_BUTTON1_MASK",GDK_BUTTON1_MASK,256);
CheckEnum("GDK_BUTTON2_MASK",GDK_BUTTON2_MASK,512);
CheckEnum("GDK_BUTTON3_MASK",GDK_BUTTON3_MASK,1024);
CheckEnum("GDK_BUTTON4_MASK",GDK_BUTTON4_MASK,2048);
CheckEnum("GDK_BUTTON5_MASK",GDK_BUTTON5_MASK,4096);
CheckEnum("GDK_RELEASE_MASK",GDK_RELEASE_MASK,1073741824);
CheckEnum("GDK_MODIFIER_MASK",GDK_MODIFIER_MASK,1073750015);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12708,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-14 (12708)\n");
#endif

#if __i386__
CheckTypeSize(GdkModifierType,4, 12709, 2)
#elif __x86_64__
CheckTypeSize(GdkModifierType,4, 12709, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12709,0);
Msg("Find size of GdkModifierType (12709)\n");
#endif

#if __i386__
CheckTypeSize(GdkDeviceKey,8, 12710, 2)
#elif __x86_64__
CheckTypeSize(GdkDeviceKey,8, 12710, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12710,0);
Msg("Find size of GdkDeviceKey (12710)\n");
#endif

#if __i386__
CheckTypeSize(GdkDeviceKey *,4, 12711, 2)
#elif __x86_64__
CheckTypeSize(GdkDeviceKey *,8, 12711, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12711,0);
Msg("Find size of GdkDeviceKey * (12711)\n");
#endif

#if __i386__
CheckTypeSize(GdkDevice,44, 12712, 2)
#elif __x86_64__
CheckTypeSize(GdkDevice,72, 12712, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12712,0);
Msg("Find size of GdkDevice (12712)\n");
#endif

#if __i386__
CheckTypeSize(GdkDevice *,4, 12713, 2)
#elif __x86_64__
CheckTypeSize(GdkDevice *,8, 12713, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12713,0);
Msg("Find size of GdkDevice * (12713)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDisplayPointerHooks,12, 12714, 2)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,4,2,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,4,2,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,4,2,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,8,2,43536)
#elif __x86_64__
CheckTypeSize(struct _GdkDisplayPointerHooks,24, 12714, 11)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_get_pointer,8,11,43532)
CheckOffset(struct _GdkDisplayPointerHooks,window_get_pointer,8,11,43532)
CheckMemberSize(struct _GdkDisplayPointerHooks,window_at_pointer,8,11,43536)
CheckOffset(struct _GdkDisplayPointerHooks,window_at_pointer,16,11,43536)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12714,0);
Msg("Find size of _GdkDisplayPointerHooks (12714)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplay,80, 12715, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplay,120, 12715, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12715,0);
Msg("Find size of GdkDisplay (12715)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplay *,4, 12716, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplay *,8, 12716, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12716,0);
Msg("Find size of GdkDisplay * (12716)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkScreen,272, 12717, 2)
CheckMemberSize(struct _GdkScreen,normal_gcs,128,2,43519)
CheckOffset(struct _GdkScreen,normal_gcs,16,2,43519)
CheckMemberSize(struct _GdkScreen,exposure_gcs,128,2,43520)
CheckOffset(struct _GdkScreen,exposure_gcs,144,2,43520)
#elif __x86_64__
CheckTypeSize(struct _GdkScreen,544, 12717, 11)
CheckMemberSize(struct _GdkScreen,normal_gcs,256,11,43519)
CheckOffset(struct _GdkScreen,normal_gcs,32,11,43519)
CheckMemberSize(struct _GdkScreen,exposure_gcs,256,11,43520)
CheckOffset(struct _GdkScreen,exposure_gcs,288,11,43520)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12717,0);
Msg("Find size of _GdkScreen (12717)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GdkScreen,272, 12719, 2)
#elif __x86_64__
CheckTypeSize(GdkScreen,544, 12719, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12719,0);
Msg("Find size of GdkScreen (12719)\n");
#endif

#if __i386__
CheckTypeSize(GdkScreen *,4, 12720, 2)
#elif __x86_64__
CheckTypeSize(GdkScreen *,8, 12720, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12720,0);
Msg("Find size of GdkScreen * (12720)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12721,0);
Msg("Find size of GdkScreen * * (12721)\n");
#endif

#if __i386__
CheckTypeSize(GdkModifierType *,4, 12722, 2)
#elif __x86_64__
CheckTypeSize(GdkModifierType *,8, 12722, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12722,0);
Msg("Find size of GdkModifierType * (12722)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12723,0);
Msg("Find size of fptr_gdk_738 (12723)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12724,0);
Msg("Find size of fptr_gdk_433 (12724)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12725,0);
Msg("Find size of fptr_gdk_594 (12725)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplayPointerHooks,12, 12726, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplayPointerHooks,24, 12726, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12726,0);
Msg("Find size of GdkDisplayPointerHooks (12726)\n");
#endif

#if __i386__
CheckTypeSize(const GdkDisplayPointerHooks,12, 12727, 2)
#elif __x86_64__
CheckTypeSize(const GdkDisplayPointerHooks,24, 12727, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12727,0);
Msg("Find size of const GdkDisplayPointerHooks (12727)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12728,0);
Msg("Find size of const GdkDisplayPointerHooks * (12728)\n");
#endif

#if __i386__
CheckEnum("GDK_EXPOSURE_MASK",GDK_EXPOSURE_MASK,2);
CheckEnum("GDK_POINTER_MOTION_MASK",GDK_POINTER_MOTION_MASK,4);
CheckEnum("GDK_POINTER_MOTION_HINT_MASK",GDK_POINTER_MOTION_HINT_MASK,8);
CheckEnum("GDK_BUTTON_MOTION_MASK",GDK_BUTTON_MOTION_MASK,16);
CheckEnum("GDK_BUTTON1_MOTION_MASK",GDK_BUTTON1_MOTION_MASK,32);
CheckEnum("GDK_BUTTON2_MOTION_MASK",GDK_BUTTON2_MOTION_MASK,64);
CheckEnum("GDK_BUTTON3_MOTION_MASK",GDK_BUTTON3_MOTION_MASK,128);
CheckEnum("GDK_BUTTON_PRESS_MASK",GDK_BUTTON_PRESS_MASK,256);
CheckEnum("GDK_BUTTON_RELEASE_MASK",GDK_BUTTON_RELEASE_MASK,512);
CheckEnum("GDK_KEY_PRESS_MASK",GDK_KEY_PRESS_MASK,1024);
CheckEnum("GDK_KEY_RELEASE_MASK",GDK_KEY_RELEASE_MASK,2048);
CheckEnum("GDK_ENTER_NOTIFY_MASK",GDK_ENTER_NOTIFY_MASK,4096);
CheckEnum("GDK_LEAVE_NOTIFY_MASK",GDK_LEAVE_NOTIFY_MASK,8192);
CheckEnum("GDK_FOCUS_CHANGE_MASK",GDK_FOCUS_CHANGE_MASK,16384);
CheckEnum("GDK_STRUCTURE_MASK",GDK_STRUCTURE_MASK,32768);
CheckEnum("GDK_PROPERTY_CHANGE_MASK",GDK_PROPERTY_CHANGE_MASK,65536);
CheckEnum("GDK_VISIBILITY_NOTIFY_MASK",GDK_VISIBILITY_NOTIFY_MASK,131072);
CheckEnum("GDK_PROXIMITY_IN_MASK",GDK_PROXIMITY_IN_MASK,262144);
CheckEnum("GDK_PROXIMITY_OUT_MASK",GDK_PROXIMITY_OUT_MASK,524288);
CheckEnum("GDK_SUBSTRUCTURE_MASK",GDK_SUBSTRUCTURE_MASK,1048576);
CheckEnum("GDK_SCROLL_MASK",GDK_SCROLL_MASK,2097152);
CheckEnum("GDK_ALL_EVENTS_MASK",GDK_ALL_EVENTS_MASK,4194302);
#elif __x86_64__
CheckEnum("GDK_EXPOSURE_MASK",GDK_EXPOSURE_MASK,2);
CheckEnum("GDK_POINTER_MOTION_MASK",GDK_POINTER_MOTION_MASK,4);
CheckEnum("GDK_POINTER_MOTION_HINT_MASK",GDK_POINTER_MOTION_HINT_MASK,8);
CheckEnum("GDK_BUTTON_MOTION_MASK",GDK_BUTTON_MOTION_MASK,16);
CheckEnum("GDK_BUTTON1_MOTION_MASK",GDK_BUTTON1_MOTION_MASK,32);
CheckEnum("GDK_BUTTON2_MOTION_MASK",GDK_BUTTON2_MOTION_MASK,64);
CheckEnum("GDK_BUTTON3_MOTION_MASK",GDK_BUTTON3_MOTION_MASK,128);
CheckEnum("GDK_BUTTON_PRESS_MASK",GDK_BUTTON_PRESS_MASK,256);
CheckEnum("GDK_BUTTON_RELEASE_MASK",GDK_BUTTON_RELEASE_MASK,512);
CheckEnum("GDK_KEY_PRESS_MASK",GDK_KEY_PRESS_MASK,1024);
CheckEnum("GDK_KEY_RELEASE_MASK",GDK_KEY_RELEASE_MASK,2048);
CheckEnum("GDK_ENTER_NOTIFY_MASK",GDK_ENTER_NOTIFY_MASK,4096);
CheckEnum("GDK_LEAVE_NOTIFY_MASK",GDK_LEAVE_NOTIFY_MASK,8192);
CheckEnum("GDK_FOCUS_CHANGE_MASK",GDK_FOCUS_CHANGE_MASK,16384);
CheckEnum("GDK_STRUCTURE_MASK",GDK_STRUCTURE_MASK,32768);
CheckEnum("GDK_PROPERTY_CHANGE_MASK",GDK_PROPERTY_CHANGE_MASK,65536);
CheckEnum("GDK_VISIBILITY_NOTIFY_MASK",GDK_VISIBILITY_NOTIFY_MASK,131072);
CheckEnum("GDK_PROXIMITY_IN_MASK",GDK_PROXIMITY_IN_MASK,262144);
CheckEnum("GDK_PROXIMITY_OUT_MASK",GDK_PROXIMITY_OUT_MASK,524288);
CheckEnum("GDK_SUBSTRUCTURE_MASK",GDK_SUBSTRUCTURE_MASK,1048576);
CheckEnum("GDK_SCROLL_MASK",GDK_SCROLL_MASK,2097152);
CheckEnum("GDK_ALL_EVENTS_MASK",GDK_ALL_EVENTS_MASK,4194302);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12729,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-934 (12729)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventMask,4, 12730, 2)
#elif __x86_64__
CheckTypeSize(GdkEventMask,4, 12730, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12730,0);
Msg("Find size of GdkEventMask (12730)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkCursor,8, 12731, 2)
CheckMemberSize(struct _GdkCursor,ref_count,4,2,43644)
CheckOffset(struct _GdkCursor,ref_count,4,2,43644)
#elif __x86_64__
CheckTypeSize(struct _GdkCursor,8, 12731, 11)
CheckMemberSize(struct _GdkCursor,ref_count,4,11,43644)
CheckOffset(struct _GdkCursor,ref_count,4,11,43644)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12731,0);
Msg("Find size of _GdkCursor (12731)\n");
#endif

#if __i386__
CheckEnum("GDK_X_CURSOR",GDK_X_CURSOR,0);
CheckEnum("GDK_ARROW",GDK_ARROW,2);
CheckEnum("GDK_BASED_ARROW_DOWN",GDK_BASED_ARROW_DOWN,4);
CheckEnum("GDK_BASED_ARROW_UP",GDK_BASED_ARROW_UP,6);
CheckEnum("GDK_BOAT",GDK_BOAT,8);
CheckEnum("GDK_BOGOSITY",GDK_BOGOSITY,10);
CheckEnum("GDK_BOTTOM_LEFT_CORNER",GDK_BOTTOM_LEFT_CORNER,12);
CheckEnum("GDK_BOTTOM_RIGHT_CORNER",GDK_BOTTOM_RIGHT_CORNER,14);
CheckEnum("GDK_BOTTOM_SIDE",GDK_BOTTOM_SIDE,16);
CheckEnum("GDK_BOTTOM_TEE",GDK_BOTTOM_TEE,18);
CheckEnum("GDK_BOX_SPIRAL",GDK_BOX_SPIRAL,20);
CheckEnum("GDK_CENTER_PTR",GDK_CENTER_PTR,22);
CheckEnum("GDK_CIRCLE",GDK_CIRCLE,24);
CheckEnum("GDK_CLOCK",GDK_CLOCK,26);
CheckEnum("GDK_COFFEE_MUG",GDK_COFFEE_MUG,28);
CheckEnum("GDK_CROSS",GDK_CROSS,30);
CheckEnum("GDK_CROSS_REVERSE",GDK_CROSS_REVERSE,32);
CheckEnum("GDK_CROSSHAIR",GDK_CROSSHAIR,34);
CheckEnum("GDK_DIAMOND_CROSS",GDK_DIAMOND_CROSS,36);
CheckEnum("GDK_DOT",GDK_DOT,38);
CheckEnum("GDK_DOTBOX",GDK_DOTBOX,40);
CheckEnum("GDK_DOUBLE_ARROW",GDK_DOUBLE_ARROW,42);
CheckEnum("GDK_DRAFT_LARGE",GDK_DRAFT_LARGE,44);
CheckEnum("GDK_DRAFT_SMALL",GDK_DRAFT_SMALL,46);
CheckEnum("GDK_DRAPED_BOX",GDK_DRAPED_BOX,48);
CheckEnum("GDK_EXCHANGE",GDK_EXCHANGE,50);
CheckEnum("GDK_FLEUR",GDK_FLEUR,52);
CheckEnum("GDK_GOBBLER",GDK_GOBBLER,54);
CheckEnum("GDK_GUMBY",GDK_GUMBY,56);
CheckEnum("GDK_HAND1",GDK_HAND1,58);
CheckEnum("GDK_HAND2",GDK_HAND2,60);
CheckEnum("GDK_HEART",GDK_HEART,62);
CheckEnum("GDK_ICON",GDK_ICON,64);
CheckEnum("GDK_IRON_CROSS",GDK_IRON_CROSS,66);
CheckEnum("GDK_LEFT_PTR",GDK_LEFT_PTR,68);
CheckEnum("GDK_LEFT_SIDE",GDK_LEFT_SIDE,70);
CheckEnum("GDK_LEFT_TEE",GDK_LEFT_TEE,72);
CheckEnum("GDK_LEFTBUTTON",GDK_LEFTBUTTON,74);
CheckEnum("GDK_LL_ANGLE",GDK_LL_ANGLE,76);
CheckEnum("GDK_LR_ANGLE",GDK_LR_ANGLE,78);
CheckEnum("GDK_MAN",GDK_MAN,80);
CheckEnum("GDK_MIDDLEBUTTON",GDK_MIDDLEBUTTON,82);
CheckEnum("GDK_MOUSE",GDK_MOUSE,84);
CheckEnum("GDK_PENCIL",GDK_PENCIL,86);
CheckEnum("GDK_PIRATE",GDK_PIRATE,88);
CheckEnum("GDK_PLUS",GDK_PLUS,90);
CheckEnum("GDK_QUESTION_ARROW",GDK_QUESTION_ARROW,92);
CheckEnum("GDK_RIGHT_PTR",GDK_RIGHT_PTR,94);
CheckEnum("GDK_RIGHT_SIDE",GDK_RIGHT_SIDE,96);
CheckEnum("GDK_RIGHT_TEE",GDK_RIGHT_TEE,98);
CheckEnum("GDK_RIGHTBUTTON",GDK_RIGHTBUTTON,100);
CheckEnum("GDK_RTL_LOGO",GDK_RTL_LOGO,102);
CheckEnum("GDK_SAILBOAT",GDK_SAILBOAT,104);
CheckEnum("GDK_SB_DOWN_ARROW",GDK_SB_DOWN_ARROW,106);
CheckEnum("GDK_SB_H_DOUBLE_ARROW",GDK_SB_H_DOUBLE_ARROW,108);
CheckEnum("GDK_SB_LEFT_ARROW",GDK_SB_LEFT_ARROW,110);
CheckEnum("GDK_SB_RIGHT_ARROW",GDK_SB_RIGHT_ARROW,112);
CheckEnum("GDK_SB_UP_ARROW",GDK_SB_UP_ARROW,114);
CheckEnum("GDK_SB_V_DOUBLE_ARROW",GDK_SB_V_DOUBLE_ARROW,116);
CheckEnum("GDK_SHUTTLE",GDK_SHUTTLE,118);
CheckEnum("GDK_SIZING",GDK_SIZING,120);
CheckEnum("GDK_SPIDER",GDK_SPIDER,122);
CheckEnum("GDK_SPRAYCAN",GDK_SPRAYCAN,124);
CheckEnum("GDK_STAR",GDK_STAR,126);
CheckEnum("GDK_TARGET",GDK_TARGET,128);
CheckEnum("GDK_TCROSS",GDK_TCROSS,130);
CheckEnum("GDK_TOP_LEFT_ARROW",GDK_TOP_LEFT_ARROW,132);
CheckEnum("GDK_TOP_LEFT_CORNER",GDK_TOP_LEFT_CORNER,134);
CheckEnum("GDK_TOP_RIGHT_CORNER",GDK_TOP_RIGHT_CORNER,136);
CheckEnum("GDK_TOP_SIDE",GDK_TOP_SIDE,138);
CheckEnum("GDK_TOP_TEE",GDK_TOP_TEE,140);
CheckEnum("GDK_TREK",GDK_TREK,142);
CheckEnum("GDK_UL_ANGLE",GDK_UL_ANGLE,144);
CheckEnum("GDK_UMBRELLA",GDK_UMBRELLA,146);
CheckEnum("GDK_UR_ANGLE",GDK_UR_ANGLE,148);
CheckEnum("GDK_WATCH",GDK_WATCH,150);
CheckEnum("GDK_XTERM",GDK_XTERM,152);
CheckEnum("GDK_LAST_CURSOR",GDK_LAST_CURSOR,153);
CheckEnum("GDK_CURSOR_IS_PIXMAP",GDK_CURSOR_IS_PIXMAP,-1);
#elif __x86_64__
CheckEnum("GDK_X_CURSOR",GDK_X_CURSOR,0);
CheckEnum("GDK_ARROW",GDK_ARROW,2);
CheckEnum("GDK_BASED_ARROW_DOWN",GDK_BASED_ARROW_DOWN,4);
CheckEnum("GDK_BASED_ARROW_UP",GDK_BASED_ARROW_UP,6);
CheckEnum("GDK_BOAT",GDK_BOAT,8);
CheckEnum("GDK_BOGOSITY",GDK_BOGOSITY,10);
CheckEnum("GDK_BOTTOM_LEFT_CORNER",GDK_BOTTOM_LEFT_CORNER,12);
CheckEnum("GDK_BOTTOM_RIGHT_CORNER",GDK_BOTTOM_RIGHT_CORNER,14);
CheckEnum("GDK_BOTTOM_SIDE",GDK_BOTTOM_SIDE,16);
CheckEnum("GDK_BOTTOM_TEE",GDK_BOTTOM_TEE,18);
CheckEnum("GDK_BOX_SPIRAL",GDK_BOX_SPIRAL,20);
CheckEnum("GDK_CENTER_PTR",GDK_CENTER_PTR,22);
CheckEnum("GDK_CIRCLE",GDK_CIRCLE,24);
CheckEnum("GDK_CLOCK",GDK_CLOCK,26);
CheckEnum("GDK_COFFEE_MUG",GDK_COFFEE_MUG,28);
CheckEnum("GDK_CROSS",GDK_CROSS,30);
CheckEnum("GDK_CROSS_REVERSE",GDK_CROSS_REVERSE,32);
CheckEnum("GDK_CROSSHAIR",GDK_CROSSHAIR,34);
CheckEnum("GDK_DIAMOND_CROSS",GDK_DIAMOND_CROSS,36);
CheckEnum("GDK_DOT",GDK_DOT,38);
CheckEnum("GDK_DOTBOX",GDK_DOTBOX,40);
CheckEnum("GDK_DOUBLE_ARROW",GDK_DOUBLE_ARROW,42);
CheckEnum("GDK_DRAFT_LARGE",GDK_DRAFT_LARGE,44);
CheckEnum("GDK_DRAFT_SMALL",GDK_DRAFT_SMALL,46);
CheckEnum("GDK_DRAPED_BOX",GDK_DRAPED_BOX,48);
CheckEnum("GDK_EXCHANGE",GDK_EXCHANGE,50);
CheckEnum("GDK_FLEUR",GDK_FLEUR,52);
CheckEnum("GDK_GOBBLER",GDK_GOBBLER,54);
CheckEnum("GDK_GUMBY",GDK_GUMBY,56);
CheckEnum("GDK_HAND1",GDK_HAND1,58);
CheckEnum("GDK_HAND2",GDK_HAND2,60);
CheckEnum("GDK_HEART",GDK_HEART,62);
CheckEnum("GDK_ICON",GDK_ICON,64);
CheckEnum("GDK_IRON_CROSS",GDK_IRON_CROSS,66);
CheckEnum("GDK_LEFT_PTR",GDK_LEFT_PTR,68);
CheckEnum("GDK_LEFT_SIDE",GDK_LEFT_SIDE,70);
CheckEnum("GDK_LEFT_TEE",GDK_LEFT_TEE,72);
CheckEnum("GDK_LEFTBUTTON",GDK_LEFTBUTTON,74);
CheckEnum("GDK_LL_ANGLE",GDK_LL_ANGLE,76);
CheckEnum("GDK_LR_ANGLE",GDK_LR_ANGLE,78);
CheckEnum("GDK_MAN",GDK_MAN,80);
CheckEnum("GDK_MIDDLEBUTTON",GDK_MIDDLEBUTTON,82);
CheckEnum("GDK_MOUSE",GDK_MOUSE,84);
CheckEnum("GDK_PENCIL",GDK_PENCIL,86);
CheckEnum("GDK_PIRATE",GDK_PIRATE,88);
CheckEnum("GDK_PLUS",GDK_PLUS,90);
CheckEnum("GDK_QUESTION_ARROW",GDK_QUESTION_ARROW,92);
CheckEnum("GDK_RIGHT_PTR",GDK_RIGHT_PTR,94);
CheckEnum("GDK_RIGHT_SIDE",GDK_RIGHT_SIDE,96);
CheckEnum("GDK_RIGHT_TEE",GDK_RIGHT_TEE,98);
CheckEnum("GDK_RIGHTBUTTON",GDK_RIGHTBUTTON,100);
CheckEnum("GDK_RTL_LOGO",GDK_RTL_LOGO,102);
CheckEnum("GDK_SAILBOAT",GDK_SAILBOAT,104);
CheckEnum("GDK_SB_DOWN_ARROW",GDK_SB_DOWN_ARROW,106);
CheckEnum("GDK_SB_H_DOUBLE_ARROW",GDK_SB_H_DOUBLE_ARROW,108);
CheckEnum("GDK_SB_LEFT_ARROW",GDK_SB_LEFT_ARROW,110);
CheckEnum("GDK_SB_RIGHT_ARROW",GDK_SB_RIGHT_ARROW,112);
CheckEnum("GDK_SB_UP_ARROW",GDK_SB_UP_ARROW,114);
CheckEnum("GDK_SB_V_DOUBLE_ARROW",GDK_SB_V_DOUBLE_ARROW,116);
CheckEnum("GDK_SHUTTLE",GDK_SHUTTLE,118);
CheckEnum("GDK_SIZING",GDK_SIZING,120);
CheckEnum("GDK_SPIDER",GDK_SPIDER,122);
CheckEnum("GDK_SPRAYCAN",GDK_SPRAYCAN,124);
CheckEnum("GDK_STAR",GDK_STAR,126);
CheckEnum("GDK_TARGET",GDK_TARGET,128);
CheckEnum("GDK_TCROSS",GDK_TCROSS,130);
CheckEnum("GDK_TOP_LEFT_ARROW",GDK_TOP_LEFT_ARROW,132);
CheckEnum("GDK_TOP_LEFT_CORNER",GDK_TOP_LEFT_CORNER,134);
CheckEnum("GDK_TOP_RIGHT_CORNER",GDK_TOP_RIGHT_CORNER,136);
CheckEnum("GDK_TOP_SIDE",GDK_TOP_SIDE,138);
CheckEnum("GDK_TOP_TEE",GDK_TOP_TEE,140);
CheckEnum("GDK_TREK",GDK_TREK,142);
CheckEnum("GDK_UL_ANGLE",GDK_UL_ANGLE,144);
CheckEnum("GDK_UMBRELLA",GDK_UMBRELLA,146);
CheckEnum("GDK_UR_ANGLE",GDK_UR_ANGLE,148);
CheckEnum("GDK_WATCH",GDK_WATCH,150);
CheckEnum("GDK_XTERM",GDK_XTERM,152);
CheckEnum("GDK_LAST_CURSOR",GDK_LAST_CURSOR,153);
CheckEnum("GDK_CURSOR_IS_PIXMAP",GDK_CURSOR_IS_PIXMAP,-1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12732,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-329 (12732)\n");
#endif

#if __i386__
CheckTypeSize(GdkCursorType,4, 12733, 2)
#elif __x86_64__
CheckTypeSize(GdkCursorType,4, 12733, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12733,0);
Msg("Find size of GdkCursorType (12733)\n");
#endif

#if __i386__
CheckTypeSize(GdkCursor,8, 12734, 2)
#elif __x86_64__
CheckTypeSize(GdkCursor,8, 12734, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12734,0);
Msg("Find size of GdkCursor (12734)\n");
#endif

#if __i386__
CheckTypeSize(GdkCursor *,4, 12735, 2)
#elif __x86_64__
CheckTypeSize(GdkCursor *,8, 12735, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12735,0);
Msg("Find size of GdkCursor * (12735)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkKeymap,16, 12736, 2)
CheckMemberSize(struct _GdkKeymap,display,4,2,43646)
CheckOffset(struct _GdkKeymap,display,12,2,43646)
#elif __x86_64__
CheckTypeSize(struct _GdkKeymap,32, 12736, 11)
CheckMemberSize(struct _GdkKeymap,display,8,11,43646)
CheckOffset(struct _GdkKeymap,display,24,11,43646)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12736,0);
Msg("Find size of _GdkKeymap (12736)\n");
#endif

#if __i386__
CheckTypeSize(GdkKeymap,16, 12737, 2)
#elif __x86_64__
CheckTypeSize(GdkKeymap,32, 12737, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12737,0);
Msg("Find size of GdkKeymap (12737)\n");
#endif

#if __i386__
CheckTypeSize(GdkKeymap *,4, 12738, 2)
#elif __x86_64__
CheckTypeSize(GdkKeymap *,8, 12738, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12738,0);
Msg("Find size of GdkKeymap * (12738)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkAtom *,4, 12740, 2)
#elif __x86_64__
CheckTypeSize(struct _GdkAtom *,8, 12740, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12740,0);
Msg("Find size of _GdkAtom * (12740)\n");
#endif

#if __i386__
CheckTypeSize(GdkAtom,4, 12741, 2)
#elif __x86_64__
CheckTypeSize(GdkAtom,8, 12741, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12741,0);
Msg("Find size of GdkAtom (12741)\n");
#endif

#if __i386__
CheckEnum("GDK_FILTER_CONTINUE",GDK_FILTER_CONTINUE,0);
CheckEnum("GDK_FILTER_TRANSLATE",GDK_FILTER_TRANSLATE,1);
CheckEnum("GDK_FILTER_REMOVE",GDK_FILTER_REMOVE,2);
#elif __x86_64__
CheckEnum("GDK_FILTER_CONTINUE",GDK_FILTER_CONTINUE,0);
CheckEnum("GDK_FILTER_TRANSLATE",GDK_FILTER_TRANSLATE,1);
CheckEnum("GDK_FILTER_REMOVE",GDK_FILTER_REMOVE,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12742,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-500 (12742)\n");
#endif

#if __i386__
CheckTypeSize(GdkFilterReturn,4, 12743, 2)
#elif __x86_64__
CheckTypeSize(GdkFilterReturn,4, 12743, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12743,0);
Msg("Find size of GdkFilterReturn (12743)\n");
#endif

#if __i386__
CheckTypeSize(GdkXEvent,1, 12744, 2)
#elif __x86_64__
CheckTypeSize(GdkXEvent,1, 12744, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12744,0);
Msg("Find size of GdkXEvent (12744)\n");
#endif

#if __i386__
CheckTypeSize(GdkXEvent *,4, 12745, 2)
#elif __x86_64__
CheckTypeSize(GdkXEvent *,8, 12745, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12745,0);
Msg("Find size of GdkXEvent * (12745)\n");
#endif

#if __i386__
CheckTypeSize(union _GdkEvent,68, 12746, 2)
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
#elif __x86_64__
CheckTypeSize(union _GdkEvent,88, 12746, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12746,0);
Msg("Find size of _GdkEvent (12746)\n");
#endif

#if __i386__
CheckEnum("GDK_NOTHING",GDK_NOTHING,-1);
CheckEnum("GDK_DELETE",GDK_DELETE,0);
CheckEnum("GDK_DESTROY",GDK_DESTROY,1);
CheckEnum("GDK_EXPOSE",GDK_EXPOSE,2);
CheckEnum("GDK_MOTION_NOTIFY",GDK_MOTION_NOTIFY,3);
CheckEnum("GDK_BUTTON_PRESS",GDK_BUTTON_PRESS,4);
CheckEnum("GDK_2BUTTON_PRESS",GDK_2BUTTON_PRESS,5);
CheckEnum("GDK_3BUTTON_PRESS",GDK_3BUTTON_PRESS,6);
CheckEnum("GDK_BUTTON_RELEASE",GDK_BUTTON_RELEASE,7);
CheckEnum("GDK_KEY_PRESS",GDK_KEY_PRESS,8);
CheckEnum("GDK_KEY_RELEASE",GDK_KEY_RELEASE,9);
CheckEnum("GDK_ENTER_NOTIFY",GDK_ENTER_NOTIFY,10);
CheckEnum("GDK_LEAVE_NOTIFY",GDK_LEAVE_NOTIFY,11);
CheckEnum("GDK_FOCUS_CHANGE",GDK_FOCUS_CHANGE,12);
CheckEnum("GDK_CONFIGURE",GDK_CONFIGURE,13);
CheckEnum("GDK_MAP",GDK_MAP,14);
CheckEnum("GDK_UNMAP",GDK_UNMAP,15);
CheckEnum("GDK_PROPERTY_NOTIFY",GDK_PROPERTY_NOTIFY,16);
CheckEnum("GDK_SELECTION_CLEAR",GDK_SELECTION_CLEAR,17);
CheckEnum("GDK_SELECTION_REQUEST",GDK_SELECTION_REQUEST,18);
CheckEnum("GDK_SELECTION_NOTIFY",GDK_SELECTION_NOTIFY,19);
CheckEnum("GDK_PROXIMITY_IN",GDK_PROXIMITY_IN,20);
CheckEnum("GDK_PROXIMITY_OUT",GDK_PROXIMITY_OUT,21);
CheckEnum("GDK_DRAG_ENTER",GDK_DRAG_ENTER,22);
CheckEnum("GDK_DRAG_LEAVE",GDK_DRAG_LEAVE,23);
CheckEnum("GDK_DRAG_MOTION",GDK_DRAG_MOTION,24);
CheckEnum("GDK_DRAG_STATUS",GDK_DRAG_STATUS,25);
CheckEnum("GDK_DROP_START",GDK_DROP_START,26);
CheckEnum("GDK_DROP_FINISHED",GDK_DROP_FINISHED,27);
CheckEnum("GDK_CLIENT_EVENT",GDK_CLIENT_EVENT,28);
CheckEnum("GDK_VISIBILITY_NOTIFY",GDK_VISIBILITY_NOTIFY,29);
CheckEnum("GDK_NO_EXPOSE",GDK_NO_EXPOSE,30);
CheckEnum("GDK_SCROLL",GDK_SCROLL,31);
CheckEnum("GDK_WINDOW_STATE",GDK_WINDOW_STATE,32);
CheckEnum("GDK_SETTING",GDK_SETTING,33);
CheckEnum("GDK_OWNER_CHANGE",GDK_OWNER_CHANGE,34);
#elif __x86_64__
CheckEnum("GDK_NOTHING",GDK_NOTHING,-1);
CheckEnum("GDK_DELETE",GDK_DELETE,0);
CheckEnum("GDK_DESTROY",GDK_DESTROY,1);
CheckEnum("GDK_EXPOSE",GDK_EXPOSE,2);
CheckEnum("GDK_MOTION_NOTIFY",GDK_MOTION_NOTIFY,3);
CheckEnum("GDK_BUTTON_PRESS",GDK_BUTTON_PRESS,4);
CheckEnum("GDK_2BUTTON_PRESS",GDK_2BUTTON_PRESS,5);
CheckEnum("GDK_3BUTTON_PRESS",GDK_3BUTTON_PRESS,6);
CheckEnum("GDK_BUTTON_RELEASE",GDK_BUTTON_RELEASE,7);
CheckEnum("GDK_KEY_PRESS",GDK_KEY_PRESS,8);
CheckEnum("GDK_KEY_RELEASE",GDK_KEY_RELEASE,9);
CheckEnum("GDK_ENTER_NOTIFY",GDK_ENTER_NOTIFY,10);
CheckEnum("GDK_LEAVE_NOTIFY",GDK_LEAVE_NOTIFY,11);
CheckEnum("GDK_FOCUS_CHANGE",GDK_FOCUS_CHANGE,12);
CheckEnum("GDK_CONFIGURE",GDK_CONFIGURE,13);
CheckEnum("GDK_MAP",GDK_MAP,14);
CheckEnum("GDK_UNMAP",GDK_UNMAP,15);
CheckEnum("GDK_PROPERTY_NOTIFY",GDK_PROPERTY_NOTIFY,16);
CheckEnum("GDK_SELECTION_CLEAR",GDK_SELECTION_CLEAR,17);
CheckEnum("GDK_SELECTION_REQUEST",GDK_SELECTION_REQUEST,18);
CheckEnum("GDK_SELECTION_NOTIFY",GDK_SELECTION_NOTIFY,19);
CheckEnum("GDK_PROXIMITY_IN",GDK_PROXIMITY_IN,20);
CheckEnum("GDK_PROXIMITY_OUT",GDK_PROXIMITY_OUT,21);
CheckEnum("GDK_DRAG_ENTER",GDK_DRAG_ENTER,22);
CheckEnum("GDK_DRAG_LEAVE",GDK_DRAG_LEAVE,23);
CheckEnum("GDK_DRAG_MOTION",GDK_DRAG_MOTION,24);
CheckEnum("GDK_DRAG_STATUS",GDK_DRAG_STATUS,25);
CheckEnum("GDK_DROP_START",GDK_DROP_START,26);
CheckEnum("GDK_DROP_FINISHED",GDK_DROP_FINISHED,27);
CheckEnum("GDK_CLIENT_EVENT",GDK_CLIENT_EVENT,28);
CheckEnum("GDK_VISIBILITY_NOTIFY",GDK_VISIBILITY_NOTIFY,29);
CheckEnum("GDK_NO_EXPOSE",GDK_NO_EXPOSE,30);
CheckEnum("GDK_SCROLL",GDK_SCROLL,31);
CheckEnum("GDK_WINDOW_STATE",GDK_WINDOW_STATE,32);
CheckEnum("GDK_SETTING",GDK_SETTING,33);
CheckEnum("GDK_OWNER_CHANGE",GDK_OWNER_CHANGE,34);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12747,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-501 (12747)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventType,4, 12748, 2)
#elif __x86_64__
CheckTypeSize(GdkEventType,4, 12748, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12748,0);
Msg("Find size of GdkEventType (12748)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventAny,12, 12749, 2)
CheckMemberSize(struct _GdkEventAny,window,4,2,43688)
CheckOffset(struct _GdkEventAny,window,4,2,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,2,43689)
CheckOffset(struct _GdkEventAny,send_event,8,2,43689)
#elif __x86_64__
CheckTypeSize(struct _GdkEventAny,24, 12749, 11)
CheckMemberSize(struct _GdkEventAny,window,8,11,43688)
CheckOffset(struct _GdkEventAny,window,8,11,43688)
CheckMemberSize(struct _GdkEventAny,send_event,1,11,43689)
CheckOffset(struct _GdkEventAny,send_event,16,11,43689)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12749,0);
Msg("Find size of _GdkEventAny (12749)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventAny,12, 12750, 2)
#elif __x86_64__
CheckTypeSize(GdkEventAny,24, 12750, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12750,0);
Msg("Find size of GdkEventAny (12750)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventExpose,36, 12751, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventExpose,56, 12751, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12751,0);
Msg("Find size of _GdkEventExpose (12751)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkRectangle,16, 12752, 2)
CheckMemberSize(struct _GdkRectangle,y,4,2,43695)
CheckOffset(struct _GdkRectangle,y,4,2,43695)
CheckMemberSize(struct _GdkRectangle,width,4,2,43696)
CheckOffset(struct _GdkRectangle,width,8,2,43696)
CheckMemberSize(struct _GdkRectangle,height,4,2,43697)
CheckOffset(struct _GdkRectangle,height,12,2,43697)
#elif __x86_64__
CheckTypeSize(struct _GdkRectangle,16, 12752, 11)
CheckMemberSize(struct _GdkRectangle,y,4,11,43695)
CheckOffset(struct _GdkRectangle,y,4,11,43695)
CheckMemberSize(struct _GdkRectangle,width,4,11,43696)
CheckOffset(struct _GdkRectangle,width,8,11,43696)
CheckMemberSize(struct _GdkRectangle,height,4,11,43697)
CheckOffset(struct _GdkRectangle,height,12,11,43697)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12752,0);
Msg("Find size of _GdkRectangle (12752)\n");
#endif

#if __i386__
CheckTypeSize(GdkRectangle,16, 12753, 2)
#elif __x86_64__
CheckTypeSize(GdkRectangle,16, 12753, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12753,0);
Msg("Find size of GdkRectangle (12753)\n");
#endif

#if __i386__
CheckTypeSize(GdkRegion,0, 12755, 2)
#elif __x86_64__
CheckTypeSize(GdkRegion,0, 12755, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12755,0);
Msg("Find size of GdkRegion (12755)\n");
#endif

#if __i386__
CheckTypeSize(GdkRegion *,4, 12756, 2)
#elif __x86_64__
CheckTypeSize(GdkRegion *,8, 12756, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12756,0);
Msg("Find size of GdkRegion * (12756)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventExpose,36, 12757, 2)
#elif __x86_64__
CheckTypeSize(GdkEventExpose,56, 12757, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12757,0);
Msg("Find size of GdkEventExpose (12757)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventNoExpose,12, 12758, 2)
CheckMemberSize(struct _GdkEventNoExpose,window,4,2,43703)
CheckOffset(struct _GdkEventNoExpose,window,4,2,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,2,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,8,2,43704)
#elif __x86_64__
CheckTypeSize(struct _GdkEventNoExpose,24, 12758, 11)
CheckMemberSize(struct _GdkEventNoExpose,window,8,11,43703)
CheckOffset(struct _GdkEventNoExpose,window,8,11,43703)
CheckMemberSize(struct _GdkEventNoExpose,send_event,1,11,43704)
CheckOffset(struct _GdkEventNoExpose,send_event,16,11,43704)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12758,0);
Msg("Find size of _GdkEventNoExpose (12758)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventNoExpose,12, 12759, 2)
#elif __x86_64__
CheckTypeSize(GdkEventNoExpose,24, 12759, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12759,0);
Msg("Find size of GdkEventNoExpose (12759)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventVisibility,16, 12760, 2)
CheckMemberSize(struct _GdkEventVisibility,window,4,2,43707)
CheckOffset(struct _GdkEventVisibility,window,4,2,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,2,43708)
CheckOffset(struct _GdkEventVisibility,send_event,8,2,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,2,43712)
CheckOffset(struct _GdkEventVisibility,state,12,2,43712)
#elif __x86_64__
CheckTypeSize(struct _GdkEventVisibility,24, 12760, 11)
CheckMemberSize(struct _GdkEventVisibility,window,8,11,43707)
CheckOffset(struct _GdkEventVisibility,window,8,11,43707)
CheckMemberSize(struct _GdkEventVisibility,send_event,1,11,43708)
CheckOffset(struct _GdkEventVisibility,send_event,16,11,43708)
CheckMemberSize(struct _GdkEventVisibility,state,4,11,43712)
CheckOffset(struct _GdkEventVisibility,state,20,11,43712)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12760,0);
Msg("Find size of _GdkEventVisibility (12760)\n");
#endif

#if __i386__
CheckEnum("GDK_VISIBILITY_UNOBSCURED",GDK_VISIBILITY_UNOBSCURED,0);
CheckEnum("GDK_VISIBILITY_PARTIAL",GDK_VISIBILITY_PARTIAL,1);
CheckEnum("GDK_VISIBILITY_FULLY_OBSCURED",GDK_VISIBILITY_FULLY_OBSCURED,2);
#elif __x86_64__
CheckEnum("GDK_VISIBILITY_UNOBSCURED",GDK_VISIBILITY_UNOBSCURED,0);
CheckEnum("GDK_VISIBILITY_PARTIAL",GDK_VISIBILITY_PARTIAL,1);
CheckEnum("GDK_VISIBILITY_FULLY_OBSCURED",GDK_VISIBILITY_FULLY_OBSCURED,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12761,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-503 (12761)\n");
#endif

#if __i386__
CheckTypeSize(GdkVisibilityState,4, 12762, 2)
#elif __x86_64__
CheckTypeSize(GdkVisibilityState,4, 12762, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12762,0);
Msg("Find size of GdkVisibilityState (12762)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventVisibility,16, 12763, 2)
#elif __x86_64__
CheckTypeSize(GdkEventVisibility,24, 12763, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12763,0);
Msg("Find size of GdkEventVisibility (12763)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventMotion,64, 12764, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventMotion,80, 12764, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12764,0);
Msg("Find size of _GdkEventMotion (12764)\n");
#endif

#if __i386__
CheckTypeSize(gdouble *,4, 12765, 2)
#elif __x86_64__
CheckTypeSize(gdouble *,8, 12765, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12765,0);
Msg("Find size of gdouble * (12765)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventMotion,64, 12766, 2)
#elif __x86_64__
CheckTypeSize(GdkEventMotion,80, 12766, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12766,0);
Msg("Find size of GdkEventMotion (12766)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventButton,64, 12767, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventButton,80, 12767, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12767,0);
Msg("Find size of _GdkEventButton (12767)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventButton,64, 12768, 2)
#elif __x86_64__
CheckTypeSize(GdkEventButton,80, 12768, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12768,0);
Msg("Find size of GdkEventButton (12768)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventScroll,60, 12769, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventScroll,72, 12769, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12769,0);
Msg("Find size of _GdkEventScroll (12769)\n");
#endif

#if __i386__
CheckEnum("GDK_SCROLL_UP",GDK_SCROLL_UP,0);
CheckEnum("GDK_SCROLL_DOWN",GDK_SCROLL_DOWN,1);
CheckEnum("GDK_SCROLL_LEFT",GDK_SCROLL_LEFT,2);
CheckEnum("GDK_SCROLL_RIGHT",GDK_SCROLL_RIGHT,3);
#elif __x86_64__
CheckEnum("GDK_SCROLL_UP",GDK_SCROLL_UP,0);
CheckEnum("GDK_SCROLL_DOWN",GDK_SCROLL_DOWN,1);
CheckEnum("GDK_SCROLL_LEFT",GDK_SCROLL_LEFT,2);
CheckEnum("GDK_SCROLL_RIGHT",GDK_SCROLL_RIGHT,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12770,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-504 (12770)\n");
#endif

#if __i386__
CheckTypeSize(GdkScrollDirection,4, 12771, 2)
#elif __x86_64__
CheckTypeSize(GdkScrollDirection,4, 12771, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12771,0);
Msg("Find size of GdkScrollDirection (12771)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventScroll,60, 12772, 2)
#elif __x86_64__
CheckTypeSize(GdkEventScroll,72, 12772, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12772,0);
Msg("Find size of GdkEventScroll (12772)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventKey,36, 12773, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventKey,56, 12773, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12773,0);
Msg("Find size of _GdkEventKey (12773)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventKey,36, 12774, 2)
#elif __x86_64__
CheckTypeSize(GdkEventKey,56, 12774, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12774,0);
Msg("Find size of GdkEventKey (12774)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventCrossing,68, 12775, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventCrossing,88, 12775, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12775,0);
Msg("Find size of _GdkEventCrossing (12775)\n");
#endif

#if __i386__
CheckEnum("GDK_CROSSING_NORMAL",GDK_CROSSING_NORMAL,0);
CheckEnum("GDK_CROSSING_GRAB",GDK_CROSSING_GRAB,1);
CheckEnum("GDK_CROSSING_UNGRAB",GDK_CROSSING_UNGRAB,2);
#elif __x86_64__
CheckEnum("GDK_CROSSING_NORMAL",GDK_CROSSING_NORMAL,0);
CheckEnum("GDK_CROSSING_GRAB",GDK_CROSSING_GRAB,1);
CheckEnum("GDK_CROSSING_UNGRAB",GDK_CROSSING_UNGRAB,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12776,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-506 (12776)\n");
#endif

#if __i386__
CheckTypeSize(GdkCrossingMode,4, 12777, 2)
#elif __x86_64__
CheckTypeSize(GdkCrossingMode,4, 12777, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12777,0);
Msg("Find size of GdkCrossingMode (12777)\n");
#endif

#if __i386__
CheckEnum("GDK_NOTIFY_ANCESTOR",GDK_NOTIFY_ANCESTOR,0);
CheckEnum("GDK_NOTIFY_VIRTUAL",GDK_NOTIFY_VIRTUAL,1);
CheckEnum("GDK_NOTIFY_INFERIOR",GDK_NOTIFY_INFERIOR,2);
CheckEnum("GDK_NOTIFY_NONLINEAR",GDK_NOTIFY_NONLINEAR,3);
CheckEnum("GDK_NOTIFY_NONLINEAR_VIRTUAL",GDK_NOTIFY_NONLINEAR_VIRTUAL,4);
CheckEnum("GDK_NOTIFY_UNKNOWN",GDK_NOTIFY_UNKNOWN,5);
#elif __x86_64__
CheckEnum("GDK_NOTIFY_ANCESTOR",GDK_NOTIFY_ANCESTOR,0);
CheckEnum("GDK_NOTIFY_VIRTUAL",GDK_NOTIFY_VIRTUAL,1);
CheckEnum("GDK_NOTIFY_INFERIOR",GDK_NOTIFY_INFERIOR,2);
CheckEnum("GDK_NOTIFY_NONLINEAR",GDK_NOTIFY_NONLINEAR,3);
CheckEnum("GDK_NOTIFY_NONLINEAR_VIRTUAL",GDK_NOTIFY_NONLINEAR_VIRTUAL,4);
CheckEnum("GDK_NOTIFY_UNKNOWN",GDK_NOTIFY_UNKNOWN,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12778,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-505 (12778)\n");
#endif

#if __i386__
CheckTypeSize(GdkNotifyType,4, 12779, 2)
#elif __x86_64__
CheckTypeSize(GdkNotifyType,4, 12779, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12779,0);
Msg("Find size of GdkNotifyType (12779)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventCrossing,68, 12780, 2)
#elif __x86_64__
CheckTypeSize(GdkEventCrossing,88, 12780, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12780,0);
Msg("Find size of GdkEventCrossing (12780)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventFocus,12, 12781, 2)
CheckMemberSize(struct _GdkEventFocus,window,4,2,43791)
CheckOffset(struct _GdkEventFocus,window,4,2,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,2,43792)
CheckOffset(struct _GdkEventFocus,send_event,8,2,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,2,43793)
CheckOffset(struct _GdkEventFocus,in,10,2,43793)
#elif __x86_64__
CheckTypeSize(struct _GdkEventFocus,24, 12781, 11)
CheckMemberSize(struct _GdkEventFocus,window,8,11,43791)
CheckOffset(struct _GdkEventFocus,window,8,11,43791)
CheckMemberSize(struct _GdkEventFocus,send_event,1,11,43792)
CheckOffset(struct _GdkEventFocus,send_event,16,11,43792)
CheckMemberSize(struct _GdkEventFocus,in,2,11,43793)
CheckOffset(struct _GdkEventFocus,in,18,11,43793)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12781,0);
Msg("Find size of _GdkEventFocus (12781)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventFocus,12, 12782, 2)
#elif __x86_64__
CheckTypeSize(GdkEventFocus,24, 12782, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12782,0);
Msg("Find size of GdkEventFocus (12782)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventConfigure,28, 12783, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventConfigure,40, 12783, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12783,0);
Msg("Find size of _GdkEventConfigure (12783)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventConfigure,28, 12784, 2)
#elif __x86_64__
CheckTypeSize(GdkEventConfigure,40, 12784, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12784,0);
Msg("Find size of GdkEventConfigure (12784)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventProperty,24, 12785, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventProperty,40, 12785, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12785,0);
Msg("Find size of _GdkEventProperty (12785)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventProperty,24, 12786, 2)
#elif __x86_64__
CheckTypeSize(GdkEventProperty,40, 12786, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12786,0);
Msg("Find size of GdkEventProperty (12786)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventSelection,32, 12787, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventSelection,56, 12787, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12787,0);
Msg("Find size of _GdkEventSelection (12787)\n");
#endif

#if __i386__
CheckTypeSize(GdkNativeWindow,4, 12788, 2)
#elif __x86_64__
CheckTypeSize(GdkNativeWindow,4, 12788, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12788,0);
Msg("Find size of GdkNativeWindow (12788)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventSelection,32, 12789, 2)
#elif __x86_64__
CheckTypeSize(GdkEventSelection,56, 12789, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12789,0);
Msg("Find size of GdkEventSelection (12789)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventOwnerChange,32, 12790, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventOwnerChange,48, 12790, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12790,0);
Msg("Find size of _GdkEventOwnerChange (12790)\n");
#endif

#if __i386__
CheckEnum("GDK_OWNER_CHANGE_NEW_OWNER",GDK_OWNER_CHANGE_NEW_OWNER,0);
CheckEnum("GDK_OWNER_CHANGE_DESTROY",GDK_OWNER_CHANGE_DESTROY,1);
CheckEnum("GDK_OWNER_CHANGE_CLOSE",GDK_OWNER_CHANGE_CLOSE,2);
#elif __x86_64__
CheckEnum("GDK_OWNER_CHANGE_NEW_OWNER",GDK_OWNER_CHANGE_NEW_OWNER,0);
CheckEnum("GDK_OWNER_CHANGE_DESTROY",GDK_OWNER_CHANGE_DESTROY,1);
CheckEnum("GDK_OWNER_CHANGE_CLOSE",GDK_OWNER_CHANGE_CLOSE,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12791,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-509 (12791)\n");
#endif

#if __i386__
CheckTypeSize(GdkOwnerChange,4, 12792, 2)
#elif __x86_64__
CheckTypeSize(GdkOwnerChange,4, 12792, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12792,0);
Msg("Find size of GdkOwnerChange (12792)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventOwnerChange,32, 12793, 2)
#elif __x86_64__
CheckTypeSize(GdkEventOwnerChange,48, 12793, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12793,0);
Msg("Find size of GdkEventOwnerChange (12793)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventProximity,20, 12794, 2)
CheckMemberSize(struct _GdkEventProximity,window,4,2,43832)
CheckOffset(struct _GdkEventProximity,window,4,2,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,2,43833)
CheckOffset(struct _GdkEventProximity,send_event,8,2,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,2,43834)
CheckOffset(struct _GdkEventProximity,time,12,2,43834)
CheckMemberSize(struct _GdkEventProximity,device,4,2,43835)
CheckOffset(struct _GdkEventProximity,device,16,2,43835)
#elif __x86_64__
CheckTypeSize(struct _GdkEventProximity,32, 12794, 11)
CheckMemberSize(struct _GdkEventProximity,window,8,11,43832)
CheckOffset(struct _GdkEventProximity,window,8,11,43832)
CheckMemberSize(struct _GdkEventProximity,send_event,1,11,43833)
CheckOffset(struct _GdkEventProximity,send_event,16,11,43833)
CheckMemberSize(struct _GdkEventProximity,time,4,11,43834)
CheckOffset(struct _GdkEventProximity,time,20,11,43834)
CheckMemberSize(struct _GdkEventProximity,device,8,11,43835)
CheckOffset(struct _GdkEventProximity,device,24,11,43835)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12794,0);
Msg("Find size of _GdkEventProximity (12794)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventProximity,20, 12795, 2)
#elif __x86_64__
CheckTypeSize(GdkEventProximity,32, 12795, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12795,0);
Msg("Find size of GdkEventProximity (12795)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventClient,40, 12796, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventClient,80, 12796, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12796,0);
Msg("Find size of _GdkEventClient (12796)\n");
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12799,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-510 (12799)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventClient,40, 12800, 2)
#elif __x86_64__
CheckTypeSize(GdkEventClient,80, 12800, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12800,0);
Msg("Find size of GdkEventClient (12800)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventDND,24, 12801, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkEventDND,40, 12801, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12801,0);
Msg("Find size of _GdkEventDND (12801)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDragContext,52, 12802, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkDragContext,80, 12802, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12802,0);
Msg("Find size of _GdkDragContext (12802)\n");
#endif

#if __i386__
CheckEnum("GDK_DRAG_PROTO_MOTIF",GDK_DRAG_PROTO_MOTIF,0);
CheckEnum("GDK_DRAG_PROTO_XDND",GDK_DRAG_PROTO_XDND,1);
CheckEnum("GDK_DRAG_PROTO_ROOTWIN",GDK_DRAG_PROTO_ROOTWIN,2);
CheckEnum("GDK_DRAG_PROTO_NONE",GDK_DRAG_PROTO_NONE,3);
CheckEnum("GDK_DRAG_PROTO_WIN32_DROPFILES",GDK_DRAG_PROTO_WIN32_DROPFILES,4);
CheckEnum("GDK_DRAG_PROTO_OLE2",GDK_DRAG_PROTO_OLE2,5);
CheckEnum("GDK_DRAG_PROTO_LOCAL",GDK_DRAG_PROTO_LOCAL,6);
#elif __x86_64__
CheckEnum("GDK_DRAG_PROTO_MOTIF",GDK_DRAG_PROTO_MOTIF,0);
CheckEnum("GDK_DRAG_PROTO_XDND",GDK_DRAG_PROTO_XDND,1);
CheckEnum("GDK_DRAG_PROTO_ROOTWIN",GDK_DRAG_PROTO_ROOTWIN,2);
CheckEnum("GDK_DRAG_PROTO_NONE",GDK_DRAG_PROTO_NONE,3);
CheckEnum("GDK_DRAG_PROTO_WIN32_DROPFILES",GDK_DRAG_PROTO_WIN32_DROPFILES,4);
CheckEnum("GDK_DRAG_PROTO_OLE2",GDK_DRAG_PROTO_OLE2,5);
CheckEnum("GDK_DRAG_PROTO_LOCAL",GDK_DRAG_PROTO_LOCAL,6);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12803,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-496 (12803)\n");
#endif

#if __i386__
CheckTypeSize(GdkDragProtocol,4, 12804, 2)
#elif __x86_64__
CheckTypeSize(GdkDragProtocol,4, 12804, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12804,0);
Msg("Find size of GdkDragProtocol (12804)\n");
#endif

#if __i386__
CheckEnum("GDK_ACTION_DEFAULT",GDK_ACTION_DEFAULT,1);
CheckEnum("GDK_ACTION_COPY",GDK_ACTION_COPY,2);
CheckEnum("GDK_ACTION_MOVE",GDK_ACTION_MOVE,4);
CheckEnum("GDK_ACTION_LINK",GDK_ACTION_LINK,8);
CheckEnum("GDK_ACTION_PRIVATE",GDK_ACTION_PRIVATE,16);
CheckEnum("GDK_ACTION_ASK",GDK_ACTION_ASK,32);
#elif __x86_64__
CheckEnum("GDK_ACTION_DEFAULT",GDK_ACTION_DEFAULT,1);
CheckEnum("GDK_ACTION_COPY",GDK_ACTION_COPY,2);
CheckEnum("GDK_ACTION_MOVE",GDK_ACTION_MOVE,4);
CheckEnum("GDK_ACTION_LINK",GDK_ACTION_LINK,8);
CheckEnum("GDK_ACTION_PRIVATE",GDK_ACTION_PRIVATE,16);
CheckEnum("GDK_ACTION_ASK",GDK_ACTION_ASK,32);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12805,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-495 (12805)\n");
#endif

#if __i386__
CheckTypeSize(GdkDragAction,4, 12806, 2)
#elif __x86_64__
CheckTypeSize(GdkDragAction,4, 12806, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12806,0);
Msg("Find size of GdkDragAction (12806)\n");
#endif

#if __i386__
CheckTypeSize(GdkDragContext,52, 12807, 2)
#elif __x86_64__
CheckTypeSize(GdkDragContext,80, 12807, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12807,0);
Msg("Find size of GdkDragContext (12807)\n");
#endif

#if __i386__
CheckTypeSize(GdkDragContext *,4, 12808, 2)
#elif __x86_64__
CheckTypeSize(GdkDragContext *,8, 12808, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12808,0);
Msg("Find size of GdkDragContext * (12808)\n");
#endif

#if __i386__
CheckTypeSize(gshort,2, 12809, 2)
#elif __x86_64__
CheckTypeSize(gshort,2, 12809, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12809,0);
Msg("Find size of gshort (12809)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventDND,24, 12810, 2)
#elif __x86_64__
CheckTypeSize(GdkEventDND,40, 12810, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12810,0);
Msg("Find size of GdkEventDND (12810)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventWindowState,20, 12811, 2)
CheckMemberSize(struct _GdkEventWindowState,window,4,2,43880)
CheckOffset(struct _GdkEventWindowState,window,4,2,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,2,43881)
CheckOffset(struct _GdkEventWindowState,send_event,8,2,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,2,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,12,2,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,2,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,16,2,43890)
#elif __x86_64__
CheckTypeSize(struct _GdkEventWindowState,32, 12811, 11)
CheckMemberSize(struct _GdkEventWindowState,window,8,11,43880)
CheckOffset(struct _GdkEventWindowState,window,8,11,43880)
CheckMemberSize(struct _GdkEventWindowState,send_event,1,11,43881)
CheckOffset(struct _GdkEventWindowState,send_event,16,11,43881)
CheckMemberSize(struct _GdkEventWindowState,changed_mask,4,11,43889)
CheckOffset(struct _GdkEventWindowState,changed_mask,20,11,43889)
CheckMemberSize(struct _GdkEventWindowState,new_window_state,4,11,43890)
CheckOffset(struct _GdkEventWindowState,new_window_state,24,11,43890)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12811,0);
Msg("Find size of _GdkEventWindowState (12811)\n");
#endif

#if __i386__
CheckEnum("GDK_WINDOW_STATE_WITHDRAWN",GDK_WINDOW_STATE_WITHDRAWN,1);
CheckEnum("GDK_WINDOW_STATE_ICONIFIED",GDK_WINDOW_STATE_ICONIFIED,2);
CheckEnum("GDK_WINDOW_STATE_MAXIMIZED",GDK_WINDOW_STATE_MAXIMIZED,4);
CheckEnum("GDK_WINDOW_STATE_STICKY",GDK_WINDOW_STATE_STICKY,8);
CheckEnum("GDK_WINDOW_STATE_FULLSCREEN",GDK_WINDOW_STATE_FULLSCREEN,16);
CheckEnum("GDK_WINDOW_STATE_ABOVE",GDK_WINDOW_STATE_ABOVE,32);
CheckEnum("GDK_WINDOW_STATE_BELOW",GDK_WINDOW_STATE_BELOW,64);
#elif __x86_64__
CheckEnum("GDK_WINDOW_STATE_WITHDRAWN",GDK_WINDOW_STATE_WITHDRAWN,1);
CheckEnum("GDK_WINDOW_STATE_ICONIFIED",GDK_WINDOW_STATE_ICONIFIED,2);
CheckEnum("GDK_WINDOW_STATE_MAXIMIZED",GDK_WINDOW_STATE_MAXIMIZED,4);
CheckEnum("GDK_WINDOW_STATE_STICKY",GDK_WINDOW_STATE_STICKY,8);
CheckEnum("GDK_WINDOW_STATE_FULLSCREEN",GDK_WINDOW_STATE_FULLSCREEN,16);
CheckEnum("GDK_WINDOW_STATE_ABOVE",GDK_WINDOW_STATE_ABOVE,32);
CheckEnum("GDK_WINDOW_STATE_BELOW",GDK_WINDOW_STATE_BELOW,64);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12812,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-507 (12812)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowState,4, 12813, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowState,4, 12813, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12813,0);
Msg("Find size of GdkWindowState (12813)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventWindowState,20, 12814, 2)
#elif __x86_64__
CheckTypeSize(GdkEventWindowState,32, 12814, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12814,0);
Msg("Find size of GdkEventWindowState (12814)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkEventSetting,20, 12815, 2)
CheckMemberSize(struct _GdkEventSetting,window,4,2,43893)
CheckOffset(struct _GdkEventSetting,window,4,2,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,2,43894)
CheckOffset(struct _GdkEventSetting,send_event,8,2,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,2,43898)
CheckOffset(struct _GdkEventSetting,action,12,2,43898)
CheckMemberSize(struct _GdkEventSetting,name,4,2,43899)
CheckOffset(struct _GdkEventSetting,name,16,2,43899)
#elif __x86_64__
CheckTypeSize(struct _GdkEventSetting,32, 12815, 11)
CheckMemberSize(struct _GdkEventSetting,window,8,11,43893)
CheckOffset(struct _GdkEventSetting,window,8,11,43893)
CheckMemberSize(struct _GdkEventSetting,send_event,1,11,43894)
CheckOffset(struct _GdkEventSetting,send_event,16,11,43894)
CheckMemberSize(struct _GdkEventSetting,action,4,11,43898)
CheckOffset(struct _GdkEventSetting,action,20,11,43898)
CheckMemberSize(struct _GdkEventSetting,name,8,11,43899)
CheckOffset(struct _GdkEventSetting,name,24,11,43899)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12815,0);
Msg("Find size of _GdkEventSetting (12815)\n");
#endif

#if __i386__
CheckEnum("GDK_SETTING_ACTION_NEW",GDK_SETTING_ACTION_NEW,0);
CheckEnum("GDK_SETTING_ACTION_CHANGED",GDK_SETTING_ACTION_CHANGED,1);
CheckEnum("GDK_SETTING_ACTION_DELETED",GDK_SETTING_ACTION_DELETED,2);
#elif __x86_64__
CheckEnum("GDK_SETTING_ACTION_NEW",GDK_SETTING_ACTION_NEW,0);
CheckEnum("GDK_SETTING_ACTION_CHANGED",GDK_SETTING_ACTION_CHANGED,1);
CheckEnum("GDK_SETTING_ACTION_DELETED",GDK_SETTING_ACTION_DELETED,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12816,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-508 (12816)\n");
#endif

#if __i386__
CheckTypeSize(GdkSettingAction,4, 12817, 2)
#elif __x86_64__
CheckTypeSize(GdkSettingAction,4, 12817, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12817,0);
Msg("Find size of GdkSettingAction (12817)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventSetting,20, 12818, 2)
#elif __x86_64__
CheckTypeSize(GdkEventSetting,32, 12818, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12818,0);
Msg("Find size of GdkEventSetting (12818)\n");
#endif

#if __i386__
CheckTypeSize(GdkEvent,68, 12819, 2)
#elif __x86_64__
CheckTypeSize(GdkEvent,88, 12819, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12819,0);
Msg("Find size of GdkEvent (12819)\n");
#endif

#if __i386__
CheckTypeSize(GdkEvent *,4, 12820, 2)
#elif __x86_64__
CheckTypeSize(GdkEvent *,8, 12820, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12820,0);
Msg("Find size of GdkEvent * (12820)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12821,0);
Msg("Find size of fptr_gdk_29 (12821)\n");
#endif

#if __i386__
CheckTypeSize(GdkFilterFunc,4, 12822, 2)
#elif __x86_64__
CheckTypeSize(GdkFilterFunc,8, 12822, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12822,0);
Msg("Find size of GdkFilterFunc (12822)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixmap,12, 12823, 2)
#elif __x86_64__
CheckTypeSize(GdkPixmap,24, 12823, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12823,0);
Msg("Find size of GdkPixmap (12823)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixmap *,4, 12824, 2)
#elif __x86_64__
CheckTypeSize(GdkPixmap *,8, 12824, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12824,0);
Msg("Find size of GdkPixmap * (12824)\n");
#endif

#if __i386__
CheckTypeSize(GdkBitmap,12, 12825, 2)
#elif __x86_64__
CheckTypeSize(GdkBitmap,24, 12825, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12825,0);
Msg("Find size of GdkBitmap (12825)\n");
#endif

#if __i386__
CheckTypeSize(GdkBitmap *,4, 12826, 2)
#elif __x86_64__
CheckTypeSize(GdkBitmap *,8, 12826, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12826,0);
Msg("Find size of GdkBitmap * (12826)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12827,0);
Msg("Find size of GdkBitmap * * (12827)\n");
#endif

#if __i386__
CheckTypeSize(const GdkColor,12, 12828, 2)
#elif __x86_64__
CheckTypeSize(const GdkColor,12, 12828, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12828,0);
Msg("Find size of const GdkColor (12828)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12829,0);
Msg("Find size of const GdkColor * (12829)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplayManager,0, 12831, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplayManager,0, 12831, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12831,0);
Msg("Find size of GdkDisplayManager (12831)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplayManager *,4, 12832, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplayManager *,8, 12832, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12832,0);
Msg("Find size of GdkDisplayManager * (12832)\n");
#endif

#if __i386__
CheckEnum("GDK_CLIP_BY_CHILDREN",GDK_CLIP_BY_CHILDREN,0);
CheckEnum("GDK_INCLUDE_INFERIORS",GDK_INCLUDE_INFERIORS,1);
#elif __x86_64__
CheckEnum("GDK_CLIP_BY_CHILDREN",GDK_CLIP_BY_CHILDREN,0);
CheckEnum("GDK_INCLUDE_INFERIORS",GDK_INCLUDE_INFERIORS,1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12833,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-84 (12833)\n");
#endif

#if __i386__
CheckTypeSize(GdkSubwindowMode,4, 12834, 2)
#elif __x86_64__
CheckTypeSize(GdkSubwindowMode,4, 12834, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12834,0);
Msg("Find size of GdkSubwindowMode (12834)\n");
#endif

#if __i386__
CheckEnum("GDK_WINDOW_EDGE_NORTH_WEST",GDK_WINDOW_EDGE_NORTH_WEST,0);
CheckEnum("GDK_WINDOW_EDGE_NORTH",GDK_WINDOW_EDGE_NORTH,1);
CheckEnum("GDK_WINDOW_EDGE_NORTH_EAST",GDK_WINDOW_EDGE_NORTH_EAST,2);
CheckEnum("GDK_WINDOW_EDGE_WEST",GDK_WINDOW_EDGE_WEST,3);
CheckEnum("GDK_WINDOW_EDGE_EAST",GDK_WINDOW_EDGE_EAST,4);
CheckEnum("GDK_WINDOW_EDGE_SOUTH_WEST",GDK_WINDOW_EDGE_SOUTH_WEST,5);
CheckEnum("GDK_WINDOW_EDGE_SOUTH",GDK_WINDOW_EDGE_SOUTH,6);
CheckEnum("GDK_WINDOW_EDGE_SOUTH_EAST",GDK_WINDOW_EDGE_SOUTH_EAST,7);
#elif __x86_64__
CheckEnum("GDK_WINDOW_EDGE_NORTH_WEST",GDK_WINDOW_EDGE_NORTH_WEST,0);
CheckEnum("GDK_WINDOW_EDGE_NORTH",GDK_WINDOW_EDGE_NORTH,1);
CheckEnum("GDK_WINDOW_EDGE_NORTH_EAST",GDK_WINDOW_EDGE_NORTH_EAST,2);
CheckEnum("GDK_WINDOW_EDGE_WEST",GDK_WINDOW_EDGE_WEST,3);
CheckEnum("GDK_WINDOW_EDGE_EAST",GDK_WINDOW_EDGE_EAST,4);
CheckEnum("GDK_WINDOW_EDGE_SOUTH_WEST",GDK_WINDOW_EDGE_SOUTH_WEST,5);
CheckEnum("GDK_WINDOW_EDGE_SOUTH",GDK_WINDOW_EDGE_SOUTH,6);
CheckEnum("GDK_WINDOW_EDGE_SOUTH_EAST",GDK_WINDOW_EDGE_SOUTH_EAST,7);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12835,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-954 (12835)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowEdge,4, 12836, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowEdge,4, 12836, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12836,0);
Msg("Find size of GdkWindowEdge (12836)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkImage,52, 12837, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkImage,88, 12837, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12837,0);
Msg("Find size of _GdkImage (12837)\n");
#endif

#if __i386__
CheckEnum("GDK_IMAGE_NORMAL",GDK_IMAGE_NORMAL,0);
CheckEnum("GDK_IMAGE_SHARED",GDK_IMAGE_SHARED,1);
CheckEnum("GDK_IMAGE_FASTEST",GDK_IMAGE_FASTEST,2);
#elif __x86_64__
CheckEnum("GDK_IMAGE_NORMAL",GDK_IMAGE_NORMAL,0);
CheckEnum("GDK_IMAGE_SHARED",GDK_IMAGE_SHARED,1);
CheckEnum("GDK_IMAGE_FASTEST",GDK_IMAGE_FASTEST,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12838,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-97 (12838)\n");
#endif

#if __i386__
CheckTypeSize(GdkImageType,4, 12839, 2)
#elif __x86_64__
CheckTypeSize(GdkImageType,4, 12839, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12839,0);
Msg("Find size of GdkImageType (12839)\n");
#endif

#if __i386__
CheckTypeSize(GdkImage,52, 12840, 2)
#elif __x86_64__
CheckTypeSize(GdkImage,88, 12840, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12840,0);
Msg("Find size of GdkImage (12840)\n");
#endif

#if __i386__
CheckTypeSize(GdkImage *,4, 12841, 2)
#elif __x86_64__
CheckTypeSize(GdkImage *,8, 12841, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12841,0);
Msg("Find size of GdkImage * (12841)\n");
#endif

#if __i386__
CheckTypeSize(GdkRectangle *,4, 12842, 2)
#elif __x86_64__
CheckTypeSize(GdkRectangle *,8, 12842, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12842,0);
Msg("Find size of GdkRectangle * (12842)\n");
#endif

#if __i386__
CheckTypeSize(gint8 *,4, 12843, 2)
#elif __x86_64__
CheckTypeSize(gint8 *,8, 12843, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12843,0);
Msg("Find size of gint8 * (12843)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPangoRenderer,36, 12844, 2)
CheckMemberSize(struct _GdkPangoRenderer,priv,4,2,43931)
CheckOffset(struct _GdkPangoRenderer,priv,32,2,43931)
#elif __x86_64__
CheckTypeSize(struct _GdkPangoRenderer,64, 12844, 11)
CheckMemberSize(struct _GdkPangoRenderer,priv,8,11,43931)
CheckOffset(struct _GdkPangoRenderer,priv,56,11,43931)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12844,0);
Msg("Find size of _GdkPangoRenderer (12844)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoRendererPrivate,0, 12846, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoRendererPrivate,0, 12846, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12846,0);
Msg("Find size of GdkPangoRendererPrivate (12846)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoRendererPrivate *,4, 12847, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoRendererPrivate *,8, 12847, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12847,0);
Msg("Find size of GdkPangoRendererPrivate * (12847)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoRenderer,36, 12848, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoRenderer,64, 12848, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12848,0);
Msg("Find size of GdkPangoRenderer (12848)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoRenderer *,4, 12849, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoRenderer *,8, 12849, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12849,0);
Msg("Find size of GdkPangoRenderer * (12849)\n");
#endif

#if __i386__
CheckEnum("GDK_GRAB_SUCCESS",GDK_GRAB_SUCCESS,0);
CheckEnum("GDK_GRAB_ALREADY_GRABBED",GDK_GRAB_ALREADY_GRABBED,1);
CheckEnum("GDK_GRAB_INVALID_TIME",GDK_GRAB_INVALID_TIME,2);
CheckEnum("GDK_GRAB_NOT_VIEWABLE",GDK_GRAB_NOT_VIEWABLE,3);
CheckEnum("GDK_GRAB_FROZEN",GDK_GRAB_FROZEN,4);
#elif __x86_64__
CheckEnum("GDK_GRAB_SUCCESS",GDK_GRAB_SUCCESS,0);
CheckEnum("GDK_GRAB_ALREADY_GRABBED",GDK_GRAB_ALREADY_GRABBED,1);
CheckEnum("GDK_GRAB_INVALID_TIME",GDK_GRAB_INVALID_TIME,2);
CheckEnum("GDK_GRAB_NOT_VIEWABLE",GDK_GRAB_NOT_VIEWABLE,3);
CheckEnum("GDK_GRAB_FROZEN",GDK_GRAB_FROZEN,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12850,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-739 (12850)\n");
#endif

#if __i386__
CheckTypeSize(GdkGrabStatus,4, 12851, 2)
#elif __x86_64__
CheckTypeSize(GdkGrabStatus,4, 12851, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12851,0);
Msg("Find size of GdkGrabStatus (12851)\n");
#endif

#if __i386__
CheckEnum("GDK_SOLID",GDK_SOLID,0);
CheckEnum("GDK_TILED",GDK_TILED,1);
CheckEnum("GDK_STIPPLED",GDK_STIPPLED,2);
CheckEnum("GDK_OPAQUE_STIPPLED",GDK_OPAQUE_STIPPLED,3);
#elif __x86_64__
CheckEnum("GDK_SOLID",GDK_SOLID,0);
CheckEnum("GDK_TILED",GDK_TILED,1);
CheckEnum("GDK_STIPPLED",GDK_STIPPLED,2);
CheckEnum("GDK_OPAQUE_STIPPLED",GDK_OPAQUE_STIPPLED,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12852,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-80 (12852)\n");
#endif

#if __i386__
CheckTypeSize(GdkFill,4, 12853, 2)
#elif __x86_64__
CheckTypeSize(GdkFill,4, 12853, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12853,0);
Msg("Find size of GdkFill (12853)\n");
#endif

#if __i386__
CheckTypeSize(GdkAtom *,4, 12854, 2)
#elif __x86_64__
CheckTypeSize(GdkAtom *,8, 12854, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12854,0);
Msg("Find size of GdkAtom * (12854)\n");
#endif

#if __i386__
CheckEnum("GDK_WINDOW_TYPE_HINT_NORMAL",GDK_WINDOW_TYPE_HINT_NORMAL,0);
CheckEnum("GDK_WINDOW_TYPE_HINT_DIALOG",GDK_WINDOW_TYPE_HINT_DIALOG,1);
CheckEnum("GDK_WINDOW_TYPE_HINT_MENU",GDK_WINDOW_TYPE_HINT_MENU,2);
CheckEnum("GDK_WINDOW_TYPE_HINT_TOOLBAR",GDK_WINDOW_TYPE_HINT_TOOLBAR,3);
CheckEnum("GDK_WINDOW_TYPE_HINT_SPLASHSCREEN",GDK_WINDOW_TYPE_HINT_SPLASHSCREEN,4);
CheckEnum("GDK_WINDOW_TYPE_HINT_UTILITY",GDK_WINDOW_TYPE_HINT_UTILITY,5);
CheckEnum("GDK_WINDOW_TYPE_HINT_DOCK",GDK_WINDOW_TYPE_HINT_DOCK,6);
CheckEnum("GDK_WINDOW_TYPE_HINT_DESKTOP",GDK_WINDOW_TYPE_HINT_DESKTOP,7);
#elif __x86_64__
CheckEnum("GDK_WINDOW_TYPE_HINT_NORMAL",GDK_WINDOW_TYPE_HINT_NORMAL,0);
CheckEnum("GDK_WINDOW_TYPE_HINT_DIALOG",GDK_WINDOW_TYPE_HINT_DIALOG,1);
CheckEnum("GDK_WINDOW_TYPE_HINT_MENU",GDK_WINDOW_TYPE_HINT_MENU,2);
CheckEnum("GDK_WINDOW_TYPE_HINT_TOOLBAR",GDK_WINDOW_TYPE_HINT_TOOLBAR,3);
CheckEnum("GDK_WINDOW_TYPE_HINT_SPLASHSCREEN",GDK_WINDOW_TYPE_HINT_SPLASHSCREEN,4);
CheckEnum("GDK_WINDOW_TYPE_HINT_UTILITY",GDK_WINDOW_TYPE_HINT_UTILITY,5);
CheckEnum("GDK_WINDOW_TYPE_HINT_DOCK",GDK_WINDOW_TYPE_HINT_DOCK,6);
CheckEnum("GDK_WINDOW_TYPE_HINT_DESKTOP",GDK_WINDOW_TYPE_HINT_DESKTOP,7);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12855,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-950 (12855)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowTypeHint,4, 12856, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12856,0);
Msg("Find size of GdkWindowTypeHint (12856)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplayPointerHooks *,4, 12857, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplayPointerHooks *,8, 12857, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12857,0);
Msg("Find size of GdkDisplayPointerHooks * (12857)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkTimeCoord,1028, 12858, 2)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,2,43950)
CheckOffset(struct _GdkTimeCoord,axes,4,2,43950)
#elif __x86_64__
CheckTypeSize(struct _GdkTimeCoord,1032, 12858, 11)
CheckMemberSize(struct _GdkTimeCoord,axes,1024,11,43950)
CheckOffset(struct _GdkTimeCoord,axes,8,11,43950)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12858,0);
Msg("Find size of _GdkTimeCoord (12858)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GdkTimeCoord,1028, 12860, 2)
#elif __x86_64__
CheckTypeSize(GdkTimeCoord,1032, 12860, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12860,0);
Msg("Find size of GdkTimeCoord (12860)\n");
#endif

#if __i386__
CheckTypeSize(GdkTimeCoord *,4, 12861, 2)
#elif __x86_64__
CheckTypeSize(GdkTimeCoord *,8, 12861, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12861,0);
Msg("Find size of GdkTimeCoord * (12861)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12862,0);
Msg("Find size of GdkTimeCoord * * (12862)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPoint,8, 12863, 2)
CheckMemberSize(struct _GdkPoint,y,4,2,43952)
CheckOffset(struct _GdkPoint,y,4,2,43952)
#elif __x86_64__
CheckTypeSize(struct _GdkPoint,8, 12863, 11)
CheckMemberSize(struct _GdkPoint,y,4,11,43952)
CheckOffset(struct _GdkPoint,y,4,11,43952)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12863,0);
Msg("Find size of _GdkPoint (12863)\n");
#endif

#if __i386__
CheckTypeSize(GdkPoint,8, 12864, 2)
#elif __x86_64__
CheckTypeSize(GdkPoint,8, 12864, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12864,0);
Msg("Find size of GdkPoint (12864)\n");
#endif

#if __i386__
CheckTypeSize(GdkPoint *,4, 12865, 2)
#elif __x86_64__
CheckTypeSize(GdkPoint *,8, 12865, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12865,0);
Msg("Find size of GdkPoint * (12865)\n");
#endif

#if __i386__
CheckTypeSize(GdkFont,12, 12867, 2)
#elif __x86_64__
CheckTypeSize(GdkFont,12, 12867, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12867,0);
Msg("Find size of GdkFont (12867)\n");
#endif

#if __i386__
CheckTypeSize(const GdkFont,12, 12868, 2)
#elif __x86_64__
CheckTypeSize(const GdkFont,12, 12868, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12868,0);
Msg("Find size of const GdkFont (12868)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12869,0);
Msg("Find size of const GdkFont * (12869)\n");
#endif

#if __i386__
CheckEnum("GDK_DECOR_ALL",GDK_DECOR_ALL,1);
CheckEnum("GDK_DECOR_BORDER",GDK_DECOR_BORDER,2);
CheckEnum("GDK_DECOR_RESIZEH",GDK_DECOR_RESIZEH,4);
CheckEnum("GDK_DECOR_TITLE",GDK_DECOR_TITLE,8);
CheckEnum("GDK_DECOR_MENU",GDK_DECOR_MENU,16);
CheckEnum("GDK_DECOR_MINIMIZE",GDK_DECOR_MINIMIZE,32);
CheckEnum("GDK_DECOR_MAXIMIZE",GDK_DECOR_MAXIMIZE,64);
#elif __x86_64__
CheckEnum("GDK_DECOR_ALL",GDK_DECOR_ALL,1);
CheckEnum("GDK_DECOR_BORDER",GDK_DECOR_BORDER,2);
CheckEnum("GDK_DECOR_RESIZEH",GDK_DECOR_RESIZEH,4);
CheckEnum("GDK_DECOR_TITLE",GDK_DECOR_TITLE,8);
CheckEnum("GDK_DECOR_MENU",GDK_DECOR_MENU,16);
CheckEnum("GDK_DECOR_MINIMIZE",GDK_DECOR_MINIMIZE,32);
CheckEnum("GDK_DECOR_MAXIMIZE",GDK_DECOR_MAXIMIZE,64);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12870,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-951 (12870)\n");
#endif

#if __i386__
CheckTypeSize(GdkWMDecoration,4, 12871, 2)
#elif __x86_64__
CheckTypeSize(GdkWMDecoration,4, 12871, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12871,0);
Msg("Find size of GdkWMDecoration (12871)\n");
#endif

#if __i386__
CheckEnum("GDK_FUNC_ALL",GDK_FUNC_ALL,1);
CheckEnum("GDK_FUNC_RESIZE",GDK_FUNC_RESIZE,2);
CheckEnum("GDK_FUNC_MOVE",GDK_FUNC_MOVE,4);
CheckEnum("GDK_FUNC_MINIMIZE",GDK_FUNC_MINIMIZE,8);
CheckEnum("GDK_FUNC_MAXIMIZE",GDK_FUNC_MAXIMIZE,16);
CheckEnum("GDK_FUNC_CLOSE",GDK_FUNC_CLOSE,32);
#elif __x86_64__
CheckEnum("GDK_FUNC_ALL",GDK_FUNC_ALL,1);
CheckEnum("GDK_FUNC_RESIZE",GDK_FUNC_RESIZE,2);
CheckEnum("GDK_FUNC_MOVE",GDK_FUNC_MOVE,4);
CheckEnum("GDK_FUNC_MINIMIZE",GDK_FUNC_MINIMIZE,8);
CheckEnum("GDK_FUNC_MAXIMIZE",GDK_FUNC_MAXIMIZE,16);
CheckEnum("GDK_FUNC_CLOSE",GDK_FUNC_CLOSE,32);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12872,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-952 (12872)\n");
#endif

#if __i386__
CheckTypeSize(GdkWMFunction,4, 12873, 2)
#elif __x86_64__
CheckTypeSize(GdkWMFunction,4, 12873, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12873,0);
Msg("Find size of GdkWMFunction (12873)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12874,0);
Msg("Find size of fptr_gdk_65 (12874)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 2)
CheckMemberSize(struct _GdkKeymapKey,group,4,2,43969)
CheckOffset(struct _GdkKeymapKey,group,4,2,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,2,43970)
CheckOffset(struct _GdkKeymapKey,level,8,2,43970)
#elif __x86_64__
CheckTypeSize(struct _GdkKeymapKey,12, 12875, 11)
CheckMemberSize(struct _GdkKeymapKey,group,4,11,43969)
CheckOffset(struct _GdkKeymapKey,group,4,11,43969)
CheckMemberSize(struct _GdkKeymapKey,level,4,11,43970)
CheckOffset(struct _GdkKeymapKey,level,8,11,43970)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12875,0);
Msg("Find size of _GdkKeymapKey (12875)\n");
#endif

#if __i386__
CheckTypeSize(GdkKeymapKey,12, 12876, 2)
#elif __x86_64__
CheckTypeSize(GdkKeymapKey,12, 12876, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12876,0);
Msg("Find size of GdkKeymapKey (12876)\n");
#endif

#if __i386__
CheckTypeSize(GdkKeymapKey *,4, 12877, 2)
#elif __x86_64__
CheckTypeSize(GdkKeymapKey *,8, 12877, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12877,0);
Msg("Find size of GdkKeymapKey * (12877)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12878,0);
Msg("Find size of GdkKeymapKey * * (12878)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12879,0);
Msg("Find size of GdkPixmap * * (12879)\n");
#endif

#if __i386__
CheckEnum("GDK_RGB_DITHER_NONE",GDK_RGB_DITHER_NONE,0);
CheckEnum("GDK_RGB_DITHER_NORMAL",GDK_RGB_DITHER_NORMAL,1);
CheckEnum("GDK_RGB_DITHER_MAX",GDK_RGB_DITHER_MAX,2);
#elif __x86_64__
CheckEnum("GDK_RGB_DITHER_NONE",GDK_RGB_DITHER_NONE,0);
CheckEnum("GDK_RGB_DITHER_NORMAL",GDK_RGB_DITHER_NORMAL,1);
CheckEnum("GDK_RGB_DITHER_MAX",GDK_RGB_DITHER_MAX,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12880,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-43 (12880)\n");
#endif

#if __i386__
CheckTypeSize(GdkRgbDither,4, 12881, 2)
#elif __x86_64__
CheckTypeSize(GdkRgbDither,4, 12881, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12881,0);
Msg("Find size of GdkRgbDither (12881)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkRgbCmap,1032, 12882, 2)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,2,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,2,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,4,2,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1028,2,43976)
#elif __x86_64__
CheckTypeSize(struct _GdkRgbCmap,1040, 12882, 11)
CheckMemberSize(struct _GdkRgbCmap,n_colors,4,11,43975)
CheckOffset(struct _GdkRgbCmap,n_colors,1024,11,43975)
CheckMemberSize(struct _GdkRgbCmap,info_list,8,11,43976)
CheckOffset(struct _GdkRgbCmap,info_list,1032,11,43976)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12882,0);
Msg("Find size of _GdkRgbCmap (12882)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GdkRgbCmap,1032, 12884, 2)
#elif __x86_64__
CheckTypeSize(GdkRgbCmap,1040, 12884, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12884,0);
Msg("Find size of GdkRgbCmap (12884)\n");
#endif

#if __i386__
CheckTypeSize(GdkRgbCmap *,4, 12885, 2)
#elif __x86_64__
CheckTypeSize(GdkRgbCmap *,8, 12885, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12885,0);
Msg("Find size of GdkRgbCmap * (12885)\n");
#endif

#if __i386__
CheckTypeSize(GdkFont *,4, 12886, 2)
#elif __x86_64__
CheckTypeSize(GdkFont *,8, 12886, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12886,0);
Msg("Find size of GdkFont * (12886)\n");
#endif

#if __i386__
CheckTypeSize(GdkDragProtocol *,4, 12887, 2)
#elif __x86_64__
CheckTypeSize(GdkDragProtocol *,8, 12887, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12887,0);
Msg("Find size of GdkDragProtocol * (12887)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkGCValues,88, 12888, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkGCValues,104, 12888, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12888,0);
Msg("Find size of _GdkGCValues (12888)\n");
#endif

#if __i386__
CheckEnum("GDK_COPY",GDK_COPY,0);
CheckEnum("GDK_INVERT",GDK_INVERT,1);
CheckEnum("GDK_XOR",GDK_XOR,2);
CheckEnum("GDK_CLEAR",GDK_CLEAR,3);
CheckEnum("GDK_AND",GDK_AND,4);
CheckEnum("GDK_AND_REVERSE",GDK_AND_REVERSE,5);
CheckEnum("GDK_AND_INVERT",GDK_AND_INVERT,6);
CheckEnum("GDK_NOOP",GDK_NOOP,7);
CheckEnum("GDK_OR",GDK_OR,8);
CheckEnum("GDK_EQUIV",GDK_EQUIV,9);
CheckEnum("GDK_OR_REVERSE",GDK_OR_REVERSE,10);
CheckEnum("GDK_COPY_INVERT",GDK_COPY_INVERT,11);
CheckEnum("GDK_OR_INVERT",GDK_OR_INVERT,12);
CheckEnum("GDK_NAND",GDK_NAND,13);
CheckEnum("GDK_NOR",GDK_NOR,14);
CheckEnum("GDK_SET",GDK_SET,15);
#elif __x86_64__
CheckEnum("GDK_COPY",GDK_COPY,0);
CheckEnum("GDK_INVERT",GDK_INVERT,1);
CheckEnum("GDK_XOR",GDK_XOR,2);
CheckEnum("GDK_CLEAR",GDK_CLEAR,3);
CheckEnum("GDK_AND",GDK_AND,4);
CheckEnum("GDK_AND_REVERSE",GDK_AND_REVERSE,5);
CheckEnum("GDK_AND_INVERT",GDK_AND_INVERT,6);
CheckEnum("GDK_NOOP",GDK_NOOP,7);
CheckEnum("GDK_OR",GDK_OR,8);
CheckEnum("GDK_EQUIV",GDK_EQUIV,9);
CheckEnum("GDK_OR_REVERSE",GDK_OR_REVERSE,10);
CheckEnum("GDK_COPY_INVERT",GDK_COPY_INVERT,11);
CheckEnum("GDK_OR_INVERT",GDK_OR_INVERT,12);
CheckEnum("GDK_NAND",GDK_NAND,13);
CheckEnum("GDK_NOR",GDK_NOR,14);
CheckEnum("GDK_SET",GDK_SET,15);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12889,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-81 (12889)\n");
#endif

#if __i386__
CheckTypeSize(GdkFunction,4, 12890, 2)
#elif __x86_64__
CheckTypeSize(GdkFunction,4, 12890, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12890,0);
Msg("Find size of GdkFunction (12890)\n");
#endif

#if __i386__
CheckEnum("GDK_LINE_SOLID",GDK_LINE_SOLID,0);
CheckEnum("GDK_LINE_ON_OFF_DASH",GDK_LINE_ON_OFF_DASH,1);
CheckEnum("GDK_LINE_DOUBLE_DASH",GDK_LINE_DOUBLE_DASH,2);
#elif __x86_64__
CheckEnum("GDK_LINE_SOLID",GDK_LINE_SOLID,0);
CheckEnum("GDK_LINE_ON_OFF_DASH",GDK_LINE_ON_OFF_DASH,1);
CheckEnum("GDK_LINE_DOUBLE_DASH",GDK_LINE_DOUBLE_DASH,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12891,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-83 (12891)\n");
#endif

#if __i386__
CheckTypeSize(GdkLineStyle,4, 12892, 2)
#elif __x86_64__
CheckTypeSize(GdkLineStyle,4, 12892, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12892,0);
Msg("Find size of GdkLineStyle (12892)\n");
#endif

#if __i386__
CheckEnum("GDK_CAP_NOT_LAST",GDK_CAP_NOT_LAST,0);
CheckEnum("GDK_CAP_BUTT",GDK_CAP_BUTT,1);
CheckEnum("GDK_CAP_ROUND",GDK_CAP_ROUND,2);
CheckEnum("GDK_CAP_PROJECTING",GDK_CAP_PROJECTING,3);
#elif __x86_64__
CheckEnum("GDK_CAP_NOT_LAST",GDK_CAP_NOT_LAST,0);
CheckEnum("GDK_CAP_BUTT",GDK_CAP_BUTT,1);
CheckEnum("GDK_CAP_ROUND",GDK_CAP_ROUND,2);
CheckEnum("GDK_CAP_PROJECTING",GDK_CAP_PROJECTING,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12893,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-79 (12893)\n");
#endif

#if __i386__
CheckTypeSize(GdkCapStyle,4, 12894, 2)
#elif __x86_64__
CheckTypeSize(GdkCapStyle,4, 12894, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12894,0);
Msg("Find size of GdkCapStyle (12894)\n");
#endif

#if __i386__
CheckEnum("GDK_JOIN_MITER",GDK_JOIN_MITER,0);
CheckEnum("GDK_JOIN_ROUND",GDK_JOIN_ROUND,1);
CheckEnum("GDK_JOIN_BEVEL",GDK_JOIN_BEVEL,2);
#elif __x86_64__
CheckEnum("GDK_JOIN_MITER",GDK_JOIN_MITER,0);
CheckEnum("GDK_JOIN_ROUND",GDK_JOIN_ROUND,1);
CheckEnum("GDK_JOIN_BEVEL",GDK_JOIN_BEVEL,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12895,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-82 (12895)\n");
#endif

#if __i386__
CheckTypeSize(GdkJoinStyle,4, 12896, 2)
#elif __x86_64__
CheckTypeSize(GdkJoinStyle,4, 12896, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12896,0);
Msg("Find size of GdkJoinStyle (12896)\n");
#endif

#if __i386__
CheckTypeSize(GdkGCValues,88, 12897, 2)
#elif __x86_64__
CheckTypeSize(GdkGCValues,104, 12897, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12897,0);
Msg("Find size of GdkGCValues (12897)\n");
#endif

#if __i386__
CheckTypeSize(GdkGCValues *,4, 12898, 2)
#elif __x86_64__
CheckTypeSize(GdkGCValues *,8, 12898, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12898,0);
Msg("Find size of GdkGCValues * (12898)\n");
#endif

#if __i386__
CheckEnum("GDK_GC_FOREGROUND",GDK_GC_FOREGROUND,1);
CheckEnum("GDK_GC_BACKGROUND",GDK_GC_BACKGROUND,2);
CheckEnum("GDK_GC_FONT",GDK_GC_FONT,4);
CheckEnum("GDK_GC_FUNCTION",GDK_GC_FUNCTION,8);
CheckEnum("GDK_GC_FILL",GDK_GC_FILL,16);
CheckEnum("GDK_GC_TILE",GDK_GC_TILE,32);
CheckEnum("GDK_GC_STIPPLE",GDK_GC_STIPPLE,64);
CheckEnum("GDK_GC_CLIP_MASK",GDK_GC_CLIP_MASK,128);
CheckEnum("GDK_GC_SUBWINDOW",GDK_GC_SUBWINDOW,256);
CheckEnum("GDK_GC_TS_X_ORIGIN",GDK_GC_TS_X_ORIGIN,512);
CheckEnum("GDK_GC_TS_Y_ORIGIN",GDK_GC_TS_Y_ORIGIN,1024);
CheckEnum("GDK_GC_CLIP_X_ORIGIN",GDK_GC_CLIP_X_ORIGIN,2048);
CheckEnum("GDK_GC_CLIP_Y_ORIGIN",GDK_GC_CLIP_Y_ORIGIN,4096);
CheckEnum("GDK_GC_EXPOSURES",GDK_GC_EXPOSURES,8192);
CheckEnum("GDK_GC_LINE_WIDTH",GDK_GC_LINE_WIDTH,16384);
CheckEnum("GDK_GC_LINE_STYLE",GDK_GC_LINE_STYLE,32768);
CheckEnum("GDK_GC_CAP_STYLE",GDK_GC_CAP_STYLE,65536);
CheckEnum("GDK_GC_JOIN_STYLE",GDK_GC_JOIN_STYLE,131072);
#elif __x86_64__
CheckEnum("GDK_GC_FOREGROUND",GDK_GC_FOREGROUND,1);
CheckEnum("GDK_GC_BACKGROUND",GDK_GC_BACKGROUND,2);
CheckEnum("GDK_GC_FONT",GDK_GC_FONT,4);
CheckEnum("GDK_GC_FUNCTION",GDK_GC_FUNCTION,8);
CheckEnum("GDK_GC_FILL",GDK_GC_FILL,16);
CheckEnum("GDK_GC_TILE",GDK_GC_TILE,32);
CheckEnum("GDK_GC_STIPPLE",GDK_GC_STIPPLE,64);
CheckEnum("GDK_GC_CLIP_MASK",GDK_GC_CLIP_MASK,128);
CheckEnum("GDK_GC_SUBWINDOW",GDK_GC_SUBWINDOW,256);
CheckEnum("GDK_GC_TS_X_ORIGIN",GDK_GC_TS_X_ORIGIN,512);
CheckEnum("GDK_GC_TS_Y_ORIGIN",GDK_GC_TS_Y_ORIGIN,1024);
CheckEnum("GDK_GC_CLIP_X_ORIGIN",GDK_GC_CLIP_X_ORIGIN,2048);
CheckEnum("GDK_GC_CLIP_Y_ORIGIN",GDK_GC_CLIP_Y_ORIGIN,4096);
CheckEnum("GDK_GC_EXPOSURES",GDK_GC_EXPOSURES,8192);
CheckEnum("GDK_GC_LINE_WIDTH",GDK_GC_LINE_WIDTH,16384);
CheckEnum("GDK_GC_LINE_STYLE",GDK_GC_LINE_STYLE,32768);
CheckEnum("GDK_GC_CAP_STYLE",GDK_GC_CAP_STYLE,65536);
CheckEnum("GDK_GC_JOIN_STYLE",GDK_GC_JOIN_STYLE,131072);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12899,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-85 (12899)\n");
#endif

#if __i386__
CheckTypeSize(GdkGCValuesMask,4, 12900, 2)
#elif __x86_64__
CheckTypeSize(GdkGCValuesMask,4, 12900, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12900,0);
Msg("Find size of GdkGCValuesMask (12900)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12901,0);
Msg("Find size of GdkWindow * * (12901)\n");
#endif

#if __i386__
CheckEnum("GDK_WINDOW_ROOT",GDK_WINDOW_ROOT,0);
CheckEnum("GDK_WINDOW_TOPLEVEL",GDK_WINDOW_TOPLEVEL,1);
CheckEnum("GDK_WINDOW_CHILD",GDK_WINDOW_CHILD,2);
CheckEnum("GDK_WINDOW_DIALOG",GDK_WINDOW_DIALOG,3);
CheckEnum("GDK_WINDOW_TEMP",GDK_WINDOW_TEMP,4);
CheckEnum("GDK_WINDOW_FOREIGN",GDK_WINDOW_FOREIGN,5);
#elif __x86_64__
CheckEnum("GDK_WINDOW_ROOT",GDK_WINDOW_ROOT,0);
CheckEnum("GDK_WINDOW_TOPLEVEL",GDK_WINDOW_TOPLEVEL,1);
CheckEnum("GDK_WINDOW_CHILD",GDK_WINDOW_CHILD,2);
CheckEnum("GDK_WINDOW_DIALOG",GDK_WINDOW_DIALOG,3);
CheckEnum("GDK_WINDOW_TEMP",GDK_WINDOW_TEMP,4);
CheckEnum("GDK_WINDOW_FOREIGN",GDK_WINDOW_FOREIGN,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12902,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-183 (12902)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowType,4, 12903, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowType,4, 12903, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12903,0);
Msg("Find size of GdkWindowType (12903)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12904,0);
Msg("Find size of guint * * (12904)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkSpan,12, 12905, 2)
CheckMemberSize(struct _GdkSpan,y,4,2,44046)
CheckOffset(struct _GdkSpan,y,4,2,44046)
CheckMemberSize(struct _GdkSpan,width,4,2,44047)
CheckOffset(struct _GdkSpan,width,8,2,44047)
#elif __x86_64__
CheckTypeSize(struct _GdkSpan,12, 12905, 11)
CheckMemberSize(struct _GdkSpan,y,4,11,44046)
CheckOffset(struct _GdkSpan,y,4,11,44046)
CheckMemberSize(struct _GdkSpan,width,4,11,44047)
CheckOffset(struct _GdkSpan,width,8,11,44047)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12905,0);
Msg("Find size of _GdkSpan (12905)\n");
#endif

#if __i386__
CheckTypeSize(GdkSpan,12, 12906, 2)
#elif __x86_64__
CheckTypeSize(GdkSpan,12, 12906, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12906,0);
Msg("Find size of GdkSpan (12906)\n");
#endif

#if __i386__
CheckTypeSize(GdkSpan *,4, 12907, 2)
#elif __x86_64__
CheckTypeSize(GdkSpan *,8, 12907, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12907,0);
Msg("Find size of GdkSpan * (12907)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12908,0);
Msg("Find size of fptr_gdk_27 (12908)\n");
#endif

#if __i386__
CheckTypeSize(GdkSpanFunc,4, 12909, 2)
#elif __x86_64__
CheckTypeSize(GdkSpanFunc,8, 12909, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12909,0);
Msg("Find size of GdkSpanFunc (12909)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkGeometry,52, 12910, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkGeometry,56, 12910, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12910,0);
Msg("Find size of _GdkGeometry (12910)\n");
#endif

#if __i386__
CheckEnum("GDK_GRAVITY_NORTH_WEST",GDK_GRAVITY_NORTH_WEST,1);
CheckEnum("GDK_GRAVITY_NORTH",GDK_GRAVITY_NORTH,2);
CheckEnum("GDK_GRAVITY_NORTH_EAST",GDK_GRAVITY_NORTH_EAST,3);
CheckEnum("GDK_GRAVITY_WEST",GDK_GRAVITY_WEST,4);
CheckEnum("GDK_GRAVITY_CENTER",GDK_GRAVITY_CENTER,5);
CheckEnum("GDK_GRAVITY_EAST",GDK_GRAVITY_EAST,6);
CheckEnum("GDK_GRAVITY_SOUTH_WEST",GDK_GRAVITY_SOUTH_WEST,7);
CheckEnum("GDK_GRAVITY_SOUTH",GDK_GRAVITY_SOUTH,8);
CheckEnum("GDK_GRAVITY_SOUTH_EAST",GDK_GRAVITY_SOUTH_EAST,9);
CheckEnum("GDK_GRAVITY_STATIC",GDK_GRAVITY_STATIC,10);
#elif __x86_64__
CheckEnum("GDK_GRAVITY_NORTH_WEST",GDK_GRAVITY_NORTH_WEST,1);
CheckEnum("GDK_GRAVITY_NORTH",GDK_GRAVITY_NORTH,2);
CheckEnum("GDK_GRAVITY_NORTH_EAST",GDK_GRAVITY_NORTH_EAST,3);
CheckEnum("GDK_GRAVITY_WEST",GDK_GRAVITY_WEST,4);
CheckEnum("GDK_GRAVITY_CENTER",GDK_GRAVITY_CENTER,5);
CheckEnum("GDK_GRAVITY_EAST",GDK_GRAVITY_EAST,6);
CheckEnum("GDK_GRAVITY_SOUTH_WEST",GDK_GRAVITY_SOUTH_WEST,7);
CheckEnum("GDK_GRAVITY_SOUTH",GDK_GRAVITY_SOUTH,8);
CheckEnum("GDK_GRAVITY_SOUTH_EAST",GDK_GRAVITY_SOUTH_EAST,9);
CheckEnum("GDK_GRAVITY_STATIC",GDK_GRAVITY_STATIC,10);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12911,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-953 (12911)\n");
#endif

#if __i386__
CheckTypeSize(GdkGravity,4, 12912, 2)
#elif __x86_64__
CheckTypeSize(GdkGravity,4, 12912, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12912,0);
Msg("Find size of GdkGravity (12912)\n");
#endif

#if __i386__
CheckTypeSize(GdkGeometry,52, 12913, 2)
#elif __x86_64__
CheckTypeSize(GdkGeometry,56, 12913, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12913,0);
Msg("Find size of GdkGeometry (12913)\n");
#endif

#if __i386__
CheckTypeSize(GdkGeometry *,4, 12914, 2)
#elif __x86_64__
CheckTypeSize(GdkGeometry *,8, 12914, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12914,0);
Msg("Find size of GdkGeometry * (12914)\n");
#endif

#if __i386__
CheckEnum("GDK_HINT_POS",GDK_HINT_POS,1);
CheckEnum("GDK_HINT_MIN_SIZE",GDK_HINT_MIN_SIZE,2);
CheckEnum("GDK_HINT_MAX_SIZE",GDK_HINT_MAX_SIZE,4);
CheckEnum("GDK_HINT_BASE_SIZE",GDK_HINT_BASE_SIZE,8);
CheckEnum("GDK_HINT_ASPECT",GDK_HINT_ASPECT,16);
CheckEnum("GDK_HINT_RESIZE_INC",GDK_HINT_RESIZE_INC,32);
CheckEnum("GDK_HINT_WIN_GRAVITY",GDK_HINT_WIN_GRAVITY,64);
CheckEnum("GDK_HINT_USER_POS",GDK_HINT_USER_POS,128);
CheckEnum("GDK_HINT_USER_SIZE",GDK_HINT_USER_SIZE,256);
#elif __x86_64__
CheckEnum("GDK_HINT_POS",GDK_HINT_POS,1);
CheckEnum("GDK_HINT_MIN_SIZE",GDK_HINT_MIN_SIZE,2);
CheckEnum("GDK_HINT_MAX_SIZE",GDK_HINT_MAX_SIZE,4);
CheckEnum("GDK_HINT_BASE_SIZE",GDK_HINT_BASE_SIZE,8);
CheckEnum("GDK_HINT_ASPECT",GDK_HINT_ASPECT,16);
CheckEnum("GDK_HINT_RESIZE_INC",GDK_HINT_RESIZE_INC,32);
CheckEnum("GDK_HINT_WIN_GRAVITY",GDK_HINT_WIN_GRAVITY,64);
CheckEnum("GDK_HINT_USER_POS",GDK_HINT_USER_POS,128);
CheckEnum("GDK_HINT_USER_SIZE",GDK_HINT_USER_SIZE,256);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12915,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-949 (12915)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowHints,4, 12916, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowHints,4, 12916, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12916,0);
Msg("Find size of GdkWindowHints (12916)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12917,0);
Msg("Find size of fptr_gdk_331 (12917)\n");
#endif

#if __i386__
CheckTypeSize(GdkEventFunc,4, 12918, 2)
#elif __x86_64__
CheckTypeSize(GdkEventFunc,8, 12918, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12918,0);
Msg("Find size of GdkEventFunc (12918)\n");
#endif

#if __i386__
CheckEnum("GDK_OVERLAP_RECTANGLE_IN",GDK_OVERLAP_RECTANGLE_IN,0);
CheckEnum("GDK_OVERLAP_RECTANGLE_OUT",GDK_OVERLAP_RECTANGLE_OUT,1);
CheckEnum("GDK_OVERLAP_RECTANGLE_PART",GDK_OVERLAP_RECTANGLE_PART,2);
#elif __x86_64__
CheckEnum("GDK_OVERLAP_RECTANGLE_IN",GDK_OVERLAP_RECTANGLE_IN,0);
CheckEnum("GDK_OVERLAP_RECTANGLE_OUT",GDK_OVERLAP_RECTANGLE_OUT,1);
CheckEnum("GDK_OVERLAP_RECTANGLE_PART",GDK_OVERLAP_RECTANGLE_PART,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12919,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-148 (12919)\n");
#endif

#if __i386__
CheckTypeSize(GdkOverlapType,4, 12920, 2)
#elif __x86_64__
CheckTypeSize(GdkOverlapType,4, 12920, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12920,0);
Msg("Find size of GdkOverlapType (12920)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkSegment,16, 12921, 2)
CheckMemberSize(struct _GdkSegment,y1,4,2,44086)
CheckOffset(struct _GdkSegment,y1,4,2,44086)
CheckMemberSize(struct _GdkSegment,x2,4,2,44087)
CheckOffset(struct _GdkSegment,x2,8,2,44087)
CheckMemberSize(struct _GdkSegment,y2,4,2,44088)
CheckOffset(struct _GdkSegment,y2,12,2,44088)
#elif __x86_64__
CheckTypeSize(struct _GdkSegment,16, 12921, 11)
CheckMemberSize(struct _GdkSegment,y1,4,11,44086)
CheckOffset(struct _GdkSegment,y1,4,11,44086)
CheckMemberSize(struct _GdkSegment,x2,4,11,44087)
CheckOffset(struct _GdkSegment,x2,8,11,44087)
CheckMemberSize(struct _GdkSegment,y2,4,11,44088)
CheckOffset(struct _GdkSegment,y2,12,11,44088)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12921,0);
Msg("Find size of _GdkSegment (12921)\n");
#endif

#if __i386__
CheckTypeSize(GdkSegment,16, 12922, 2)
#elif __x86_64__
CheckTypeSize(GdkSegment,16, 12922, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12922,0);
Msg("Find size of GdkSegment (12922)\n");
#endif

#if __i386__
CheckTypeSize(GdkSegment *,4, 12923, 2)
#elif __x86_64__
CheckTypeSize(GdkSegment *,8, 12923, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12923,0);
Msg("Find size of GdkSegment * (12923)\n");
#endif

#if __i386__
CheckEnum("GDK_PROP_MODE_REPLACE",GDK_PROP_MODE_REPLACE,0);
CheckEnum("GDK_PROP_MODE_PREPEND",GDK_PROP_MODE_PREPEND,1);
CheckEnum("GDK_PROP_MODE_APPEND",GDK_PROP_MODE_APPEND,2);
#elif __x86_64__
CheckEnum("GDK_PROP_MODE_REPLACE",GDK_PROP_MODE_REPLACE,0);
CheckEnum("GDK_PROP_MODE_PREPEND",GDK_PROP_MODE_PREPEND,1);
CheckEnum("GDK_PROP_MODE_APPEND",GDK_PROP_MODE_APPEND,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12924,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-796 (12924)\n");
#endif

#if __i386__
CheckTypeSize(GdkPropMode,4, 12925, 2)
#elif __x86_64__
CheckTypeSize(GdkPropMode,4, 12925, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12925,0);
Msg("Find size of GdkPropMode (12925)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkWindowAttr,56, 12926, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkWindowAttr,88, 12926, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12926,0);
Msg("Find size of _GdkWindowAttr (12926)\n");
#endif

#if __i386__
CheckEnum("GDK_INPUT_OUTPUT",GDK_INPUT_OUTPUT,0);
CheckEnum("GDK_INPUT_ONLY",GDK_INPUT_ONLY,1);
#elif __x86_64__
CheckEnum("GDK_INPUT_OUTPUT",GDK_INPUT_OUTPUT,0);
CheckEnum("GDK_INPUT_ONLY",GDK_INPUT_ONLY,1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12927,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-947 (12927)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowClass,4, 12928, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowClass,4, 12928, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12928,0);
Msg("Find size of GdkWindowClass (12928)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowAttr,56, 12929, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowAttr,88, 12929, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12929,0);
Msg("Find size of GdkWindowAttr (12929)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowAttr *,4, 12930, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowAttr *,8, 12930, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12930,0);
Msg("Find size of GdkWindowAttr * (12930)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12931,0);
Msg("Find size of GdkTimeCoord * * * (12931)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12932,0);
Msg("Find size of GdkDrawable * * (12932)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDrawable *,4, 12933, 2)
#elif __x86_64__
CheckTypeSize(struct _GdkDrawable *,8, 12933, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12933,0);
Msg("Find size of _GdkDrawable * (12933)\n");
#endif

#if __i386__
CheckTypeSize(GdkVisualType *,4, 12934, 2)
#elif __x86_64__
CheckTypeSize(GdkVisualType *,8, 12934, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12934,0);
Msg("Find size of GdkVisualType * (12934)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12935,0);
Msg("Find size of GdkVisualType * * (12935)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkTrapezoid,48, 12936, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12936,0);
Msg("Find size of _GdkTrapezoid (12936)\n");
#endif

#if __i386__
CheckTypeSize(GdkTrapezoid,48, 12937, 2)
#elif __x86_64__
CheckTypeSize(GdkTrapezoid,48, 12937, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12937,0);
Msg("Find size of GdkTrapezoid (12937)\n");
#endif

#if __i386__
CheckTypeSize(GdkTrapezoid *,4, 12938, 2)
#elif __x86_64__
CheckTypeSize(GdkTrapezoid *,8, 12938, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12938,0);
Msg("Find size of GdkTrapezoid * (12938)\n");
#endif

#if __i386__
CheckTypeSize(GdkWMDecoration *,4, 12939, 2)
#elif __x86_64__
CheckTypeSize(GdkWMDecoration *,8, 12939, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12939,0);
Msg("Find size of GdkWMDecoration * (12939)\n");
#endif

#if __i386__
CheckTypeSize(const GdkKeymapKey,12, 12940, 2)
#elif __x86_64__
CheckTypeSize(const GdkKeymapKey,12, 12940, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12940,0);
Msg("Find size of const GdkKeymapKey (12940)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12941,0);
Msg("Find size of const GdkKeymapKey * (12941)\n");
#endif

#if __i386__
CheckEnum("GDK_EVEN_ODD_RULE",GDK_EVEN_ODD_RULE,0);
CheckEnum("GDK_WINDING_RULE",GDK_WINDING_RULE,1);
#elif __x86_64__
CheckEnum("GDK_EVEN_ODD_RULE",GDK_EVEN_ODD_RULE,0);
CheckEnum("GDK_WINDING_RULE",GDK_WINDING_RULE,1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12942,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-141 (12942)\n");
#endif

#if __i386__
CheckTypeSize(GdkFillRule,4, 12943, 2)
#elif __x86_64__
CheckTypeSize(GdkFillRule,4, 12943, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12943,0);
Msg("Find size of GdkFillRule (12943)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPointerHooks,8, 12944, 2)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,4,2,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,4,2,44124)
#elif __x86_64__
CheckTypeSize(struct _GdkPointerHooks,16, 12944, 11)
CheckMemberSize(struct _GdkPointerHooks,window_at_pointer,8,11,44124)
CheckOffset(struct _GdkPointerHooks,window_at_pointer,8,11,44124)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12944,0);
Msg("Find size of _GdkPointerHooks (12944)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12945,0);
Msg("Find size of fptr_gdk_253 (12945)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12946,0);
Msg("Find size of fptr_gdk_70 (12946)\n");
#endif

#if __i386__
CheckTypeSize(GdkPointerHooks,8, 12947, 2)
#elif __x86_64__
CheckTypeSize(GdkPointerHooks,16, 12947, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12947,0);
Msg("Find size of GdkPointerHooks (12947)\n");
#endif

#if __i386__
CheckTypeSize(GdkPointerHooks *,4, 12948, 2)
#elif __x86_64__
CheckTypeSize(GdkPointerHooks *,8, 12948, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12948,0);
Msg("Find size of GdkPointerHooks * (12948)\n");
#endif

#if __i386__
CheckTypeSize(const GdkPointerHooks,8, 12949, 2)
#elif __x86_64__
CheckTypeSize(const GdkPointerHooks,16, 12949, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12949,0);
Msg("Find size of const GdkPointerHooks (12949)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12950,0);
Msg("Find size of const GdkPointerHooks * (12950)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12951,0);
Msg("Find size of GdkRectangle * * (12951)\n");
#endif

#if __i386__
CheckEnum("GDK_EXTENSION_EVENTS_NONE",GDK_EXTENSION_EVENTS_NONE,0);
CheckEnum("GDK_EXTENSION_EVENTS_ALL",GDK_EXTENSION_EVENTS_ALL,1);
CheckEnum("GDK_EXTENSION_EVENTS_CURSOR",GDK_EXTENSION_EVENTS_CURSOR,2);
#elif __x86_64__
CheckEnum("GDK_EXTENSION_EVENTS_NONE",GDK_EXTENSION_EVENTS_NONE,0);
CheckEnum("GDK_EXTENSION_EVENTS_ALL",GDK_EXTENSION_EVENTS_ALL,1);
CheckEnum("GDK_EXTENSION_EVENTS_CURSOR",GDK_EXTENSION_EVENTS_CURSOR,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12952,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-675 (12952)\n");
#endif

#if __i386__
CheckTypeSize(GdkExtensionMode,4, 12953, 2)
#elif __x86_64__
CheckTypeSize(GdkExtensionMode,4, 12953, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12953,0);
Msg("Find size of GdkExtensionMode (12953)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkWindowObject,88, 12954, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkWindowObject,144, 12954, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12954,0);
Msg("Find size of _GdkWindowObject (12954)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowObject,88, 12955, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowObject,144, 12955, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12955,0);
Msg("Find size of GdkWindowObject (12955)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowObject *,4, 12956, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowObject *,8, 12956, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12956,0);
Msg("Find size of GdkWindowObject * (12956)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkScreenClass,72, 12957, 2)
CheckMemberSize(struct _GdkScreenClass,size_changed,4,2,44155)
CheckOffset(struct _GdkScreenClass,size_changed,68,2,44155)
#elif __x86_64__
CheckTypeSize(struct _GdkScreenClass,144, 12957, 11)
CheckMemberSize(struct _GdkScreenClass,size_changed,8,11,44155)
CheckOffset(struct _GdkScreenClass,size_changed,136,11,44155)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12957,0);
Msg("Find size of _GdkScreenClass (12957)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12958,0);
Msg("Find size of fptr_gdk_7 (12958)\n");
#endif

#if __i386__
CheckTypeSize(GdkScreenClass,72, 12959, 2)
#elif __x86_64__
CheckTypeSize(GdkScreenClass,144, 12959, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12959,0);
Msg("Find size of GdkScreenClass (12959)\n");
#endif

#if __i386__
CheckTypeSize(GdkWChar,4, 12960, 2)
#elif __x86_64__
CheckTypeSize(GdkWChar,4, 12960, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12960,0);
Msg("Find size of GdkWChar (12960)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPixmapObject,20, 12961, 2)
CheckMemberSize(struct _GdkPixmapObject,impl,4,2,44157)
CheckOffset(struct _GdkPixmapObject,impl,12,2,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,2,44158)
CheckOffset(struct _GdkPixmapObject,depth,16,2,44158)
#elif __x86_64__
CheckTypeSize(struct _GdkPixmapObject,40, 12961, 11)
CheckMemberSize(struct _GdkPixmapObject,impl,8,11,44157)
CheckOffset(struct _GdkPixmapObject,impl,24,11,44157)
CheckMemberSize(struct _GdkPixmapObject,depth,4,11,44158)
CheckOffset(struct _GdkPixmapObject,depth,32,11,44158)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12961,0);
Msg("Find size of _GdkPixmapObject (12961)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixmapObject,20, 12962, 2)
#elif __x86_64__
CheckTypeSize(GdkPixmapObject,40, 12962, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12962,0);
Msg("Find size of GdkPixmapObject (12962)\n");
#endif

#if __i386__
CheckEnum("GDK_INPUT_READ",GDK_INPUT_READ,1);
CheckEnum("GDK_INPUT_WRITE",GDK_INPUT_WRITE,2);
CheckEnum("GDK_INPUT_EXCEPTION",GDK_INPUT_EXCEPTION,4);
#elif __x86_64__
CheckEnum("GDK_INPUT_READ",GDK_INPUT_READ,1);
CheckEnum("GDK_INPUT_WRITE",GDK_INPUT_WRITE,2);
CheckEnum("GDK_INPUT_EXCEPTION",GDK_INPUT_EXCEPTION,4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12963,0);
Msg("Find size of anon-gtk-2.0/gdk/gdk.h-59 (12963)\n");
#endif

#if __i386__
CheckTypeSize(GdkInputCondition,4, 12964, 2)
#elif __x86_64__
CheckTypeSize(GdkInputCondition,4, 12964, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12964,0);
Msg("Find size of GdkInputCondition (12964)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12965,0);
Msg("Find size of fptr_gdk_604 (12965)\n");
#endif

#if __i386__
CheckTypeSize(GdkInputFunction,4, 12966, 2)
#elif __x86_64__
CheckTypeSize(GdkInputFunction,8, 12966, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12966,0);
Msg("Find size of GdkInputFunction (12966)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkImageClass,68, 12967, 2)
Msg("Missing member data for _GdkImageClass on IA32\n");
CheckOffset(struct _GdkImageClass,parent_class,0,2,44165)
#elif __x86_64__
CheckTypeSize(struct _GdkImageClass,136, 12967, 11)
Msg("Missing member data for _GdkImageClass on x86-64\n");
CheckOffset(struct _GdkImageClass,parent_class,0,11,44165)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12967,0);
Msg("Find size of _GdkImageClass (12967)\n");
#endif

#if __i386__
CheckTypeSize(GdkImageClass,68, 12968, 2)
#elif __x86_64__
CheckTypeSize(GdkImageClass,136, 12968, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12968,0);
Msg("Find size of GdkImageClass (12968)\n");
#endif

#if __i386__
CheckTypeSize(GdkDestroyNotify,4, 12969, 2)
#elif __x86_64__
CheckTypeSize(GdkDestroyNotify,8, 12969, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12969,0);
Msg("Find size of GdkDestroyNotify (12969)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkKeymapClass,76, 12970, 2)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,4,2,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,68,2,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,4,2,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,72,2,44169)
#elif __x86_64__
CheckTypeSize(struct _GdkKeymapClass,152, 12970, 11)
CheckMemberSize(struct _GdkKeymapClass,direction_changed,8,11,44168)
CheckOffset(struct _GdkKeymapClass,direction_changed,136,11,44168)
CheckMemberSize(struct _GdkKeymapClass,keys_changed,8,11,44169)
CheckOffset(struct _GdkKeymapClass,keys_changed,144,11,44169)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12970,0);
Msg("Find size of _GdkKeymapClass (12970)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12971,0);
Msg("Find size of fptr_gdk_215 (12971)\n");
#endif

#if __i386__
CheckTypeSize(GdkKeymapClass,76, 12972, 2)
#elif __x86_64__
CheckTypeSize(GdkKeymapClass,152, 12972, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12972,0);
Msg("Find size of GdkKeymapClass (12972)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDrawableClass,224, 12973, 2)
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
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved3,4,2,44320)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved3,172,2,44320)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved4,4,2,44321)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved4,176,2,44321)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved5,4,2,44322)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved5,180,2,44322)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved6,4,2,44323)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved6,184,2,44323)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved7,4,2,44324)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved7,188,2,44324)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved9,4,2,44325)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved9,192,2,44325)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved10,4,2,44326)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved10,196,2,44326)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved11,4,2,44327)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved11,200,2,44327)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved12,4,2,44328)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved12,204,2,44328)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved13,4,2,44329)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved13,208,2,44329)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved14,4,2,44330)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved14,212,2,44330)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved15,4,2,44331)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved15,216,2,44331)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved16,4,2,44332)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved16,220,2,44332)
#elif __x86_64__
CheckTypeSize(struct _GdkDrawableClass,448, 12973, 11)
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
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved3,8,11,44320)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved3,344,11,44320)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved4,8,11,44321)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved4,352,11,44321)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved5,8,11,44322)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved5,360,11,44322)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved6,8,11,44323)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved6,368,11,44323)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved7,8,11,44324)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved7,376,11,44324)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved9,8,11,44325)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved9,384,11,44325)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved10,8,11,44326)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved10,392,11,44326)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved11,8,11,44327)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved11,400,11,44327)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved12,8,11,44328)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved12,408,11,44328)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved13,8,11,44329)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved13,416,11,44329)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved14,8,11,44330)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved14,424,11,44330)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved15,8,11,44331)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved15,432,11,44331)
CheckMemberSize(struct _GdkDrawableClass,_gdk_reserved16,8,11,44332)
CheckOffset(struct _GdkDrawableClass,_gdk_reserved16,440,11,44332)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12973,0);
Msg("Find size of _GdkDrawableClass (12973)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12974,0);
Msg("Find size of fptr_gdk_206 (12974)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12975,0);
Msg("Find size of fptr_gdk_51 (12975)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12976,0);
Msg("Find size of fptr_gdk_619 (12976)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12977,0);
Msg("Find size of fptr_gdk_8 (12977)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12978,0);
Msg("Find size of fptr_gdk_56 (12978)\n");
#endif

#if __i386__
CheckTypeSize(const GdkWChar,4, 12979, 2)
#elif __x86_64__
CheckTypeSize(const GdkWChar,4, 12979, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12979,0);
Msg("Find size of const GdkWChar (12979)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12980,0);
Msg("Find size of const GdkWChar * (12980)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12981,0);
Msg("Find size of fptr_gdk_255 (12981)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12982,0);
Msg("Find size of fptr_gdk_676 (12982)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12983,0);
Msg("Find size of fptr_gdk_264 (12983)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12984,0);
Msg("Find size of fptr_gdk_696 (12984)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12985,0);
Msg("Find size of fptr_gdk_145 (12985)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12986,0);
Msg("Find size of fptr_gdk_372 (12986)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12987,0);
Msg("Find size of fptr_gdk_574 (12987)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12988,0);
Msg("Find size of fptr_gdk_11 (12988)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12989,0);
Msg("Find size of fptr_gdk_693 (12989)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12990,0);
Msg("Find size of fptr_gdk_606 (12990)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12991,0);
Msg("Find size of fptr_gdk_44 (12991)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12992,0);
Msg("Find size of fptr_gdk_102 (12992)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12993,0);
Msg("Find size of fptr_gdk_216 (12993)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12994,0);
Msg("Find size of fptr_gdk_270 (12994)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12995,0);
Msg("Find size of fptr_gdk_344 (12995)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12996,0);
Msg("Find size of fptr_gdk_96 (12996)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12997,0);
Msg("Find size of fptr_gdk_124 (12997)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12998,0);
Msg("Find size of fptr_gdk_411 (12998)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12999,0);
Msg("Find size of fptr_gdk_694 (12999)\n");
#endif

#if __i386__
CheckTypeSize(GdkDrawableClass,224, 13000, 2)
#elif __x86_64__
CheckTypeSize(GdkDrawableClass,448, 13000, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13000,0);
Msg("Find size of GdkDrawableClass (13000)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPangoAttrEmbossed,16, 13001, 2)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,2,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,12,2,44334)
#elif __x86_64__
CheckTypeSize(struct _GdkPangoAttrEmbossed,24, 13001, 11)
CheckMemberSize(struct _GdkPangoAttrEmbossed,embossed,4,11,44334)
CheckOffset(struct _GdkPangoAttrEmbossed,embossed,16,11,44334)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13001,0);
Msg("Find size of _GdkPangoAttrEmbossed (13001)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoAttrEmbossed,16, 13002, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoAttrEmbossed,24, 13002, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13002,0);
Msg("Find size of GdkPangoAttrEmbossed (13002)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDisplayManagerClass,72, 13003, 2)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,4,2,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,68,2,44338)
#elif __x86_64__
CheckTypeSize(struct _GdkDisplayManagerClass,144, 13003, 11)
CheckMemberSize(struct _GdkDisplayManagerClass,display_opened,8,11,44338)
CheckOffset(struct _GdkDisplayManagerClass,display_opened,136,11,44338)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13003,0);
Msg("Find size of _GdkDisplayManagerClass (13003)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13004,0);
Msg("Find size of fptr_gdk_114 (13004)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplayManagerClass,72, 13005, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplayManagerClass,144, 13005, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13005,0);
Msg("Find size of GdkDisplayManagerClass (13005)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPixmapObjectClass,224, 13006, 2)
Msg("Missing member data for _GdkPixmapObjectClass on IA32\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,2,44339)
#elif __x86_64__
CheckTypeSize(struct _GdkPixmapObjectClass,448, 13006, 11)
Msg("Missing member data for _GdkPixmapObjectClass on x86-64\n");
CheckOffset(struct _GdkPixmapObjectClass,parent_class,0,11,44339)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13006,0);
Msg("Find size of _GdkPixmapObjectClass (13006)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixmapObjectClass,224, 13007, 2)
#elif __x86_64__
CheckTypeSize(GdkPixmapObjectClass,448, 13007, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13007,0);
Msg("Find size of GdkPixmapObjectClass (13007)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPangoRendererClass,124, 13008, 2)
Msg("Missing member data for _GdkPangoRendererClass on IA32\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,2,44340)
#elif __x86_64__
CheckTypeSize(struct _GdkPangoRendererClass,248, 13008, 11)
Msg("Missing member data for _GdkPangoRendererClass on x86-64\n");
CheckOffset(struct _GdkPangoRendererClass,parent_class,0,11,44340)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13008,0);
Msg("Find size of _GdkPangoRendererClass (13008)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoRendererClass,124, 13009, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoRendererClass,248, 13009, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13009,0);
Msg("Find size of GdkPangoRendererClass (13009)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDisplayClass,88, 13010, 2)
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
#elif __x86_64__
CheckTypeSize(struct _GdkDisplayClass,176, 13010, 11)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13010,0);
Msg("Find size of _GdkDisplayClass (13010)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13011,0);
Msg("Find size of fptr_gdk_708 (13011)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13012,0);
Msg("Find size of fptr_gdk_382 (13012)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13013,0);
Msg("Find size of fptr_gdk_672 (13013)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13014,0);
Msg("Find size of fptr_gdk_498 (13014)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13015,0);
Msg("Find size of fptr_gdk_509 (13015)\n");
#endif

#if __i386__
CheckTypeSize(GdkDisplayClass,88, 13016, 2)
#elif __x86_64__
CheckTypeSize(GdkDisplayClass,176, 13016, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13016,0);
Msg("Find size of GdkDisplayClass (13016)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkPangoAttrStipple,16, 13017, 2)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,4,2,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,12,2,44355)
#elif __x86_64__
CheckTypeSize(struct _GdkPangoAttrStipple,24, 13017, 11)
CheckMemberSize(struct _GdkPangoAttrStipple,stipple,8,11,44355)
CheckOffset(struct _GdkPangoAttrStipple,stipple,16,11,44355)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13017,0);
Msg("Find size of _GdkPangoAttrStipple (13017)\n");
#endif

#if __i386__
CheckTypeSize(GdkPangoAttrStipple,16, 13018, 2)
#elif __x86_64__
CheckTypeSize(GdkPangoAttrStipple,24, 13018, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13018,0);
Msg("Find size of GdkPangoAttrStipple (13018)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkColormapClass,68, 13019, 2)
Msg("Missing member data for _GdkColormapClass on IA32\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,2,44356)
#elif __x86_64__
CheckTypeSize(struct _GdkColormapClass,136, 13019, 11)
Msg("Missing member data for _GdkColormapClass on x86-64\n");
CheckOffset(struct _GdkColormapClass,parent_class,0,11,44356)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13019,0);
Msg("Find size of _GdkColormapClass (13019)\n");
#endif

#if __i386__
CheckTypeSize(GdkColormapClass,68, 13020, 2)
#elif __x86_64__
CheckTypeSize(GdkColormapClass,136, 13020, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13020,0);
Msg("Find size of GdkColormapClass (13020)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkDragContextClass,68, 13021, 2)
Msg("Missing member data for _GdkDragContextClass on IA32\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,2,44357)
#elif __x86_64__
CheckTypeSize(struct _GdkDragContextClass,136, 13021, 11)
Msg("Missing member data for _GdkDragContextClass on x86-64\n");
CheckOffset(struct _GdkDragContextClass,parent_class,0,11,44357)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13021,0);
Msg("Find size of _GdkDragContextClass (13021)\n");
#endif

#if __i386__
CheckTypeSize(GdkDragContextClass,68, 13022, 2)
#elif __x86_64__
CheckTypeSize(GdkDragContextClass,136, 13022, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13022,0);
Msg("Find size of GdkDragContextClass (13022)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkWindowObjectClass,224, 13023, 2)
Msg("Missing member data for _GdkWindowObjectClass on IA32\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,2,44358)
#elif __x86_64__
CheckTypeSize(struct _GdkWindowObjectClass,448, 13023, 11)
Msg("Missing member data for _GdkWindowObjectClass on x86-64\n");
CheckOffset(struct _GdkWindowObjectClass,parent_class,0,11,44358)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13023,0);
Msg("Find size of _GdkWindowObjectClass (13023)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowObjectClass,224, 13024, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowObjectClass,448, 13024, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13024,0);
Msg("Find size of GdkWindowObjectClass (13024)\n");
#endif

#if __i386__
CheckTypeSize(struct _GdkGCClass,96, 13025, 2)
CheckMemberSize(struct _GdkGCClass,get_values,4,2,44362)
CheckOffset(struct _GdkGCClass,get_values,68,2,44362)
CheckMemberSize(struct _GdkGCClass,set_values,4,2,44366)
CheckOffset(struct _GdkGCClass,set_values,72,2,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,4,2,44371)
CheckOffset(struct _GdkGCClass,set_dashes,76,2,44371)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved1,4,2,44372)
CheckOffset(struct _GdkGCClass,_gdk_reserved1,80,2,44372)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved2,4,2,44373)
CheckOffset(struct _GdkGCClass,_gdk_reserved2,84,2,44373)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved3,4,2,44374)
CheckOffset(struct _GdkGCClass,_gdk_reserved3,88,2,44374)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved4,4,2,44375)
CheckOffset(struct _GdkGCClass,_gdk_reserved4,92,2,44375)
#elif __x86_64__
CheckTypeSize(struct _GdkGCClass,192, 13025, 11)
CheckMemberSize(struct _GdkGCClass,get_values,8,11,44362)
CheckOffset(struct _GdkGCClass,get_values,136,11,44362)
CheckMemberSize(struct _GdkGCClass,set_values,8,11,44366)
CheckOffset(struct _GdkGCClass,set_values,144,11,44366)
CheckMemberSize(struct _GdkGCClass,set_dashes,8,11,44371)
CheckOffset(struct _GdkGCClass,set_dashes,152,11,44371)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved1,8,11,44372)
CheckOffset(struct _GdkGCClass,_gdk_reserved1,160,11,44372)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved2,8,11,44373)
CheckOffset(struct _GdkGCClass,_gdk_reserved2,168,11,44373)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved3,8,11,44374)
CheckOffset(struct _GdkGCClass,_gdk_reserved3,176,11,44374)
CheckMemberSize(struct _GdkGCClass,_gdk_reserved4,8,11,44375)
CheckOffset(struct _GdkGCClass,_gdk_reserved4,184,11,44375)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13025,0);
Msg("Find size of _GdkGCClass (13025)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13026,0);
Msg("Find size of fptr_gdk_691 (13026)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13027,0);
Msg("Find size of fptr_gdk_343 (13027)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13028,0);
Msg("Find size of fptr_gdk_403 (13028)\n");
#endif

#if __i386__
CheckTypeSize(GdkGCClass,96, 13029, 2)
#elif __x86_64__
CheckTypeSize(GdkGCClass,192, 13029, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13029,0);
Msg("Find size of GdkGCClass (13029)\n");
#endif

#if __i386__
CheckTypeSize(GdkDeviceClass,0, 13031, 2)
#elif __x86_64__
CheckTypeSize(GdkDeviceClass,0, 13031, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13031,0);
Msg("Find size of GdkDeviceClass (13031)\n");
#endif

#if __i386__
CheckTypeSize(GdkVisualClass,0, 13033, 2)
#elif __x86_64__
CheckTypeSize(GdkVisualClass,0, 13033, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13033,0);
Msg("Find size of GdkVisualClass (13033)\n");
#endif

#if __i386__
CheckEnum("GDK_OK",GDK_OK,0);
CheckEnum("GDK_ERROR",GDK_ERROR,-1);
CheckEnum("GDK_ERROR_PARAM",GDK_ERROR_PARAM,-2);
CheckEnum("GDK_ERROR_FILE",GDK_ERROR_FILE,-3);
CheckEnum("GDK_ERROR_MEM",GDK_ERROR_MEM,-4);
#elif __x86_64__
CheckEnum("GDK_OK",GDK_OK,0);
CheckEnum("GDK_ERROR",GDK_ERROR,-1);
CheckEnum("GDK_ERROR_PARAM",GDK_ERROR_PARAM,-2);
CheckEnum("GDK_ERROR_FILE",GDK_ERROR_FILE,-3);
CheckEnum("GDK_ERROR_MEM",GDK_ERROR_MEM,-4);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13034,0);
Msg("Find size of anonymous-gdk.h.types-4 (13034)\n");
#endif

#if __i386__
CheckTypeSize(GdkStatus,4, 13035, 2)
#elif __x86_64__
CheckTypeSize(GdkStatus,4, 13035, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13035,0);
Msg("Find size of GdkStatus (13035)\n");
#endif

#if __i386__
CheckEnum("GDK_PROPERTY_NEW_VALUE",GDK_PROPERTY_NEW_VALUE,0);
CheckEnum("GDK_PROPERTY_DELETE",GDK_PROPERTY_DELETE,(0) + 1);
#elif __x86_64__
CheckEnum("GDK_PROPERTY_NEW_VALUE",GDK_PROPERTY_NEW_VALUE,0);
CheckEnum("GDK_PROPERTY_DELETE",GDK_PROPERTY_DELETE,(0) + 1);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13036,0);
Msg("Find size of anonymous-gdk.h.types-6 (13036)\n");
#endif

#if __i386__
CheckTypeSize(GdkPropertyState,4, 13037, 2)
#elif __x86_64__
CheckTypeSize(GdkPropertyState,4, 13037, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13037,0);
Msg("Find size of GdkPropertyState (13037)\n");
#endif

#if __i386__
CheckEnum("GDK_WA_TITLE",GDK_WA_TITLE,1 << 1);
CheckEnum("GDK_WA_X",GDK_WA_X,1 << 2);
CheckEnum("GDK_WA_Y",GDK_WA_Y,1 << 3);
CheckEnum("GDK_WA_CURSOR",GDK_WA_CURSOR,1 << 4);
CheckEnum("GDK_WA_COLORMAP",GDK_WA_COLORMAP,1 << 5);
CheckEnum("GDK_WA_VISUAL",GDK_WA_VISUAL,1 << 6);
CheckEnum("GDK_WA_WMCLASS",GDK_WA_WMCLASS,1 << 7);
CheckEnum("GDK_WA_NOREDIR",GDK_WA_NOREDIR,1 << 8);
#elif __x86_64__
CheckEnum("GDK_WA_TITLE",GDK_WA_TITLE,1 << 1);
CheckEnum("GDK_WA_X",GDK_WA_X,1 << 2);
CheckEnum("GDK_WA_Y",GDK_WA_Y,1 << 3);
CheckEnum("GDK_WA_CURSOR",GDK_WA_CURSOR,1 << 4);
CheckEnum("GDK_WA_COLORMAP",GDK_WA_COLORMAP,1 << 5);
CheckEnum("GDK_WA_VISUAL",GDK_WA_VISUAL,1 << 6);
CheckEnum("GDK_WA_WMCLASS",GDK_WA_WMCLASS,1 << 7);
CheckEnum("GDK_WA_NOREDIR",GDK_WA_NOREDIR,1 << 8);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13038,0);
Msg("Find size of anonymous-gdk.h.types-8 (13038)\n");
#endif

#if __i386__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 2)
#elif __x86_64__
CheckTypeSize(GdkWindowAttributesType,4, 13039, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13039,0);
Msg("Find size of GdkWindowAttributesType (13039)\n");
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
extern void gdk_pre_parse_libgtk_only_db(void);
CheckInterfacedef(gdk_pre_parse_libgtk_only,gdk_pre_parse_libgtk_only_db);
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
extern gboolean gdk_font_equal_db(const GdkFont *, const GdkFont *);
CheckInterfacedef(gdk_font_equal,gdk_font_equal_db);
extern GdkDisplay * gdk_display_open_default_libgtk_only_db(void);
CheckInterfacedef(gdk_display_open_default_libgtk_only,gdk_display_open_default_libgtk_only_db);
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
extern void gdk_window_invalidate_maybe_recurse_db(GdkWindow *, GdkRegion *, gboolean(*fptr_gdk_65)(GdkWindow *,gpointer)
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
extern GdkFont * gdk_font_ref_db(GdkFont *);
CheckInterfacedef(gdk_font_ref,gdk_font_ref_db);
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
extern gboolean gdk_keyboard_grab_info_libgtk_only_db(GdkDisplay *, GdkWindow * *, gboolean *);
CheckInterfacedef(gdk_keyboard_grab_info_libgtk_only,gdk_keyboard_grab_info_libgtk_only_db);
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
extern gboolean gdk_pointer_grab_info_libgtk_only_db(GdkDisplay *, GdkWindow * *, gboolean *);
CheckInterfacedef(gdk_pointer_grab_info_libgtk_only,gdk_pointer_grab_info_libgtk_only_db);
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
extern gboolean gdk_draw_rectangle_alpha_libgtk_only_db(GdkDrawable *, gint, gint, gint, gint, GdkColor *, guint16);
CheckInterfacedef(gdk_draw_rectangle_alpha_libgtk_only,gdk_draw_rectangle_alpha_libgtk_only_db);
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
extern void gdk_font_unref_db(GdkFont *);
CheckInterfacedef(gdk_font_unref,gdk_font_unref_db);
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
extern void gdk_add_option_entries_libgtk_only_db(GOptionGroup *);
CheckInterfacedef(gdk_add_option_entries_libgtk_only,gdk_add_option_entries_libgtk_only_db);
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
extern gint gdk_font_id_db(const GdkFont *);
CheckInterfacedef(gdk_font_id,gdk_font_id_db);
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
