/*
 * Test of gtk-2.0/gdk/gdkx.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "gtk-2.0/gdk/gdkx.h"



#ifdef TET_TEST
void gtk_2_0_gdk_gdkx_h()
{
#else
int gtk_2_0_gdk_gdkx_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk/gdkx.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk/gdkx.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for GDK_PARENT_RELATIVE_BG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_NO_BG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_TYPE(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_DESTROYED(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_COLORMAP_XDISPLAY(cmap) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_COLORMAP_XCOLORMAP(cmap) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_CURSOR_XDISPLAY(cursor) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_CURSOR_XCURSOR(cursor) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IMAGE_XDISPLAY(image) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_IMAGE_XIMAGE(image) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_ROOT_WINDOW() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DISPLAY_XDISPLAY(display) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_XDISPLAY(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_XID(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_WINDOW_XWINDOW(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXMAP_XDISPLAY(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXMAP_XID(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAWABLE_XDISPLAY(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_DRAWABLE_XID(win) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_GC_XDISPLAY(gc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_GC_XGC(gc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SCREEN_XDISPLAY(screen) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SCREEN_XSCREEN(screen) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_SCREEN_XNUMBER(screen) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_VISUAL_XVISUAL(visual) */
#endif

extern guint32 gdk_x11_get_server_time_db(GdkWindow *);
CheckInterfacedef(gdk_x11_get_server_time,gdk_x11_get_server_time_db);
extern gpointer gdk_xid_table_lookup_for_display_db(GdkDisplay *, XID);
CheckInterfacedef(gdk_xid_table_lookup_for_display,gdk_xid_table_lookup_for_display_db);
extern GdkVisual * gdk_x11_screen_lookup_visual_db(GdkScreen *, VisualID);
CheckInterfacedef(gdk_x11_screen_lookup_visual,gdk_x11_screen_lookup_visual_db);
extern Window gdk_x11_get_default_root_xwindow_db(void);
CheckInterfacedef(gdk_x11_get_default_root_xwindow,gdk_x11_get_default_root_xwindow_db);
extern Visual * gdk_x11_visual_get_xvisual_db(GdkVisual *);
CheckInterfacedef(gdk_x11_visual_get_xvisual,gdk_x11_visual_get_xvisual_db);
extern void gdk_x11_display_ungrab_db(GdkDisplay *);
CheckInterfacedef(gdk_x11_display_ungrab,gdk_x11_display_ungrab_db);
extern void gdk_x11_register_standard_event_type_db(GdkDisplay *, gint, gint);
CheckInterfacedef(gdk_x11_register_standard_event_type,gdk_x11_register_standard_event_type_db);
extern void gdk_window_destroy_notify_db(GdkWindow *);
CheckInterfacedef(gdk_window_destroy_notify,gdk_window_destroy_notify_db);
extern const gchar * gdk_x11_get_xatom_name_db(Atom);
CheckInterfacedef(gdk_x11_get_xatom_name,gdk_x11_get_xatom_name_db);
extern Atom gdk_x11_get_xatom_by_name_for_display_db(GdkDisplay *, const gchar *);
CheckInterfacedef(gdk_x11_get_xatom_by_name_for_display,gdk_x11_get_xatom_by_name_for_display_db);
extern GdkColormap * gdk_x11_colormap_foreign_new_db(GdkVisual *, Colormap);
CheckInterfacedef(gdk_x11_colormap_foreign_new,gdk_x11_colormap_foreign_new_db);
extern gboolean gdk_net_wm_supports_db(GdkAtom);
CheckInterfacedef(gdk_net_wm_supports,gdk_net_wm_supports_db);
extern const gchar * gdk_x11_get_xatom_name_for_display_db(GdkDisplay *, Atom);
CheckInterfacedef(gdk_x11_get_xatom_name_for_display,gdk_x11_get_xatom_name_for_display_db);
extern GdkVisual * gdkx_visual_get_db(VisualID);
CheckInterfacedef(gdkx_visual_get,gdkx_visual_get_db);
extern Atom gdk_x11_get_xatom_by_name_db(const gchar *);
CheckInterfacedef(gdk_x11_get_xatom_by_name,gdk_x11_get_xatom_by_name_db);
extern gpointer gdk_xid_table_lookup_db(XID);
CheckInterfacedef(gdk_xid_table_lookup,gdk_xid_table_lookup_db);
extern XID gdk_x11_drawable_get_xid_db(GdkDrawable *);
CheckInterfacedef(gdk_x11_drawable_get_xid,gdk_x11_drawable_get_xid_db);
extern Display * gdk_x11_gc_get_xdisplay_db(GdkGC *);
CheckInterfacedef(gdk_x11_gc_get_xdisplay,gdk_x11_gc_get_xdisplay_db);
extern Colormap gdk_x11_colormap_get_xcolormap_db(GdkColormap *);
CheckInterfacedef(gdk_x11_colormap_get_xcolormap,gdk_x11_colormap_get_xcolormap_db);
extern GdkDisplay * gdk_x11_lookup_xdisplay_db(Display *);
CheckInterfacedef(gdk_x11_lookup_xdisplay,gdk_x11_lookup_xdisplay_db);
extern GC gdk_x11_gc_get_xgc_db(GdkGC *);
CheckInterfacedef(gdk_x11_gc_get_xgc,gdk_x11_gc_get_xgc_db);
extern void gdk_x11_grab_server_db(void);
CheckInterfacedef(gdk_x11_grab_server,gdk_x11_grab_server_db);
extern int gdk_x11_screen_get_screen_number_db(GdkScreen *);
CheckInterfacedef(gdk_x11_screen_get_screen_number,gdk_x11_screen_get_screen_number_db);
extern const char * gdk_x11_screen_get_window_manager_name_db(GdkScreen *);
CheckInterfacedef(gdk_x11_screen_get_window_manager_name,gdk_x11_screen_get_window_manager_name_db);
extern GdkAtom gdk_x11_xatom_to_atom_for_display_db(GdkDisplay *, Atom);
CheckInterfacedef(gdk_x11_xatom_to_atom_for_display,gdk_x11_xatom_to_atom_for_display_db);
extern Screen * gdk_x11_screen_get_xscreen_db(GdkScreen *);
CheckInterfacedef(gdk_x11_screen_get_xscreen,gdk_x11_screen_get_xscreen_db);
extern void gdk_x11_ungrab_server_db(void);
CheckInterfacedef(gdk_x11_ungrab_server,gdk_x11_ungrab_server_db);
extern gint gdk_x11_get_default_screen_db(void);
CheckInterfacedef(gdk_x11_get_default_screen,gdk_x11_get_default_screen_db);
extern Display * gdk_x11_drawable_get_xdisplay_db(GdkDrawable *);
CheckInterfacedef(gdk_x11_drawable_get_xdisplay,gdk_x11_drawable_get_xdisplay_db);
extern GdkAtom gdk_x11_xatom_to_atom_db(Atom);
CheckInterfacedef(gdk_x11_xatom_to_atom,gdk_x11_xatom_to_atom_db);
extern Display * gdk_x11_colormap_get_xdisplay_db(GdkColormap *);
CheckInterfacedef(gdk_x11_colormap_get_xdisplay,gdk_x11_colormap_get_xdisplay_db);
extern void gdk_x11_window_set_user_time_db(GdkWindow *, guint32);
CheckInterfacedef(gdk_x11_window_set_user_time,gdk_x11_window_set_user_time_db);
extern Atom gdk_x11_atom_to_xatom_db(GdkAtom);
CheckInterfacedef(gdk_x11_atom_to_xatom,gdk_x11_atom_to_xatom_db);
extern XImage * gdk_x11_image_get_ximage_db(GdkImage *);
CheckInterfacedef(gdk_x11_image_get_ximage,gdk_x11_image_get_ximage_db);
extern Display * gdk_x11_cursor_get_xdisplay_db(GdkCursor *);
CheckInterfacedef(gdk_x11_cursor_get_xdisplay,gdk_x11_cursor_get_xdisplay_db);
extern void gdk_x11_display_grab_db(GdkDisplay *);
CheckInterfacedef(gdk_x11_display_grab,gdk_x11_display_grab_db);
extern Display * gdk_x11_image_get_xdisplay_db(GdkImage *);
CheckInterfacedef(gdk_x11_image_get_xdisplay,gdk_x11_image_get_xdisplay_db);
extern Display * gdk_x11_get_default_xdisplay_db(void);
CheckInterfacedef(gdk_x11_get_default_xdisplay,gdk_x11_get_default_xdisplay_db);
extern gboolean gdk_x11_screen_supports_net_wm_hint_db(GdkScreen *, GdkAtom);
CheckInterfacedef(gdk_x11_screen_supports_net_wm_hint,gdk_x11_screen_supports_net_wm_hint_db);
extern void gdk_synthesize_window_state_db(GdkWindow *, GdkWindowState, GdkWindowState);
CheckInterfacedef(gdk_synthesize_window_state,gdk_synthesize_window_state_db);
extern Display * gdk_x11_display_get_xdisplay_db(GdkDisplay *);
CheckInterfacedef(gdk_x11_display_get_xdisplay,gdk_x11_display_get_xdisplay_db);
extern Atom gdk_x11_atom_to_xatom_for_display_db(GdkDisplay *, GdkAtom);
CheckInterfacedef(gdk_x11_atom_to_xatom_for_display,gdk_x11_atom_to_xatom_for_display_db);
extern Cursor gdk_x11_cursor_get_xcursor_db(GdkCursor *);
CheckInterfacedef(gdk_x11_cursor_get_xcursor,gdk_x11_cursor_get_xcursor_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gdk/gdkx.h\n\n",pcnt,cnt);
return cnt;
#endif

}
