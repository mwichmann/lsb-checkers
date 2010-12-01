/*
 * Test of gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h"



#ifdef TET_TEST
void gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h()
{
#else
int gtk_2_0_gdk_pixbuf_xlib_gdk_pixbuf_xlib_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h\n");
#if defined __s390x__
CheckTypeSize(XlibRgbDither,4, 12661, 12, 3.1, NULL, 12660, NULL)
#elif defined __x86_64__
CheckTypeSize(XlibRgbDither,4, 12661, 11, 3.1, NULL, 12660, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XlibRgbDither,4, 12661, 10, 3.1, NULL, 12660, NULL)
#elif defined __powerpc64__
CheckTypeSize(XlibRgbDither,4, 12661, 9, 3.1, NULL, 12660, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XlibRgbDither,4, 12661, 6, 3.1, NULL, 12660, NULL)
#elif defined __ia64__
CheckTypeSize(XlibRgbDither,4, 12661, 3, 3.1, NULL, 12660, NULL)
#elif defined __i386__
CheckTypeSize(XlibRgbDither,4, 12661, 2, 3.1, NULL, 12660, NULL)
#else
Msg("Find size of XlibRgbDither (12661)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12660,NULL);\n",architecture,12661,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 12, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,12,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,12,43400)
#elif defined __x86_64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 11, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,11,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,11,43400)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 10, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,10,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,10,43400)
#elif defined __powerpc64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 9, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,9,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,9,43400)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 6, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,6,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,6,43400)
#elif defined __ia64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 3, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,3,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,3,43400)
#elif defined __i386__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 2, , NULL, 0, NULL)
CheckMemberSize(struct _XlibRgbCmap,lut,256,2,43400)
CheckOffset(struct _XlibRgbCmap,lut,1024,2,43400)
#elif 1
CheckTypeSize(struct _XlibRgbCmap,0, 12663, 1, , NULL, 0, NULL)
Msg("Missing member data for _XlibRgbCmap on All\n");
CheckOffset(struct _XlibRgbCmap,colors,0,1,43399)
#endif

#if defined __s390x__
CheckTypeSize(XlibRgbCmap,1280, 12666, 12, 3.1, NULL, 12663, NULL)
#elif defined __x86_64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 11, 3.1, NULL, 12663, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XlibRgbCmap,1280, 12666, 10, 3.1, NULL, 12663, NULL)
#elif defined __powerpc64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 9, 3.1, NULL, 12663, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 6, 3.1, NULL, 12663, NULL)
#elif defined __ia64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 3, 3.1, NULL, 12663, NULL)
#elif defined __i386__
CheckTypeSize(XlibRgbCmap,1280, 12666, 2, 3.1, NULL, 12663, NULL)
#else
Msg("Find size of XlibRgbCmap (12666)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12663, NULL);\n",architecture,12666,0);
#endif

extern void gdk_pixbuf_xlib_init_with_depth_db(Display *, int, int);
CheckInterfacedef(gdk_pixbuf_xlib_init_with_depth,gdk_pixbuf_xlib_init_with_depth_db);
extern Visual * xlib_rgb_get_visual_db(void);
CheckInterfacedef(xlib_rgb_get_visual,xlib_rgb_get_visual_db);
extern void gdk_pixbuf_xlib_render_to_drawable_db(GdkPixbuf *, Drawable, GC, int, int, int, int, int, int, XlibRgbDither, int, int);
CheckInterfacedef(gdk_pixbuf_xlib_render_to_drawable,gdk_pixbuf_xlib_render_to_drawable_db);
extern GdkPixbuf * gdk_pixbuf_xlib_get_from_drawable_db(GdkPixbuf *, Drawable, Colormap, Visual *, int, int, int, int, int, int);
CheckInterfacedef(gdk_pixbuf_xlib_get_from_drawable,gdk_pixbuf_xlib_get_from_drawable_db);
extern XVisualInfo * xlib_rgb_get_visual_info_db(void);
CheckInterfacedef(xlib_rgb_get_visual_info,xlib_rgb_get_visual_info_db);
extern void xlib_rgb_set_install_db(int);
CheckInterfacedef(xlib_rgb_set_install,xlib_rgb_set_install_db);
extern void xlib_rgb_cmap_free_db(XlibRgbCmap *);
CheckInterfacedef(xlib_rgb_cmap_free,xlib_rgb_cmap_free_db);
extern int xlib_rgb_get_depth_db(void);
CheckInterfacedef(xlib_rgb_get_depth,xlib_rgb_get_depth_db);
extern long unsigned int xlib_rgb_xpixel_from_rgb_db(guint32);
CheckInterfacedef(xlib_rgb_xpixel_from_rgb,xlib_rgb_xpixel_from_rgb_db);
extern void xlib_rgb_gc_set_foreground_db(GC, guint32);
CheckInterfacedef(xlib_rgb_gc_set_foreground,xlib_rgb_gc_set_foreground_db);
extern void xlib_rgb_set_verbose_db(int);
CheckInterfacedef(xlib_rgb_set_verbose,xlib_rgb_set_verbose_db);
extern int xlib_rgb_ditherable_db(void);
CheckInterfacedef(xlib_rgb_ditherable,xlib_rgb_ditherable_db);
extern void xlib_rgb_set_min_colors_db(int);
CheckInterfacedef(xlib_rgb_set_min_colors,xlib_rgb_set_min_colors_db);
extern void gdk_pixbuf_xlib_render_threshold_alpha_db(GdkPixbuf *, Pixmap, int, int, int, int, int, int, int);
CheckInterfacedef(gdk_pixbuf_xlib_render_threshold_alpha,gdk_pixbuf_xlib_render_threshold_alpha_db);
extern Display * xlib_rgb_get_display_db(void);
CheckInterfacedef(xlib_rgb_get_display,xlib_rgb_get_display_db);
extern void xlib_rgb_init_db(Display *, Screen *);
CheckInterfacedef(xlib_rgb_init,xlib_rgb_init_db);
extern void gdk_pixbuf_xlib_init_db(Display *, int);
CheckInterfacedef(gdk_pixbuf_xlib_init,gdk_pixbuf_xlib_init_db);
extern Screen * xlib_rgb_get_screen_db(void);
CheckInterfacedef(xlib_rgb_get_screen,xlib_rgb_get_screen_db);
extern Colormap xlib_rgb_get_cmap_db(void);
CheckInterfacedef(xlib_rgb_get_cmap,xlib_rgb_get_cmap_db);
extern void xlib_draw_gray_image_db(Drawable, GC, int, int, int, int, XlibRgbDither, unsigned char *, int);
CheckInterfacedef(xlib_draw_gray_image,xlib_draw_gray_image_db);
extern void xlib_draw_indexed_image_db(Drawable, GC, int, int, int, int, XlibRgbDither, unsigned char *, int, XlibRgbCmap *);
CheckInterfacedef(xlib_draw_indexed_image,xlib_draw_indexed_image_db);
extern XlibRgbCmap * xlib_rgb_cmap_new_db(guint32 *, int);
CheckInterfacedef(xlib_rgb_cmap_new,xlib_rgb_cmap_new_db);
extern void xlib_draw_rgb_32_image_db(Drawable, GC, int, int, int, int, XlibRgbDither, unsigned char *, int);
CheckInterfacedef(xlib_draw_rgb_32_image,xlib_draw_rgb_32_image_db);
extern void xlib_draw_rgb_image_dithalign_db(Drawable, GC, int, int, int, int, XlibRgbDither, unsigned char *, int, int, int);
CheckInterfacedef(xlib_draw_rgb_image_dithalign,xlib_draw_rgb_image_dithalign_db);
extern void xlib_rgb_gc_set_background_db(GC, guint32);
CheckInterfacedef(xlib_rgb_gc_set_background,xlib_rgb_gc_set_background_db);
extern void gdk_pixbuf_xlib_render_pixmap_and_mask_db(GdkPixbuf *, Pixmap *, Pixmap *, int);
CheckInterfacedef(gdk_pixbuf_xlib_render_pixmap_and_mask,gdk_pixbuf_xlib_render_pixmap_and_mask_db);
extern void gdk_pixbuf_xlib_render_to_drawable_alpha_db(GdkPixbuf *, Drawable, int, int, int, int, int, int, GdkPixbufAlphaMode, int, XlibRgbDither, int, int);
CheckInterfacedef(gdk_pixbuf_xlib_render_to_drawable_alpha,gdk_pixbuf_xlib_render_to_drawable_alpha_db);
extern void xlib_draw_rgb_image_db(Drawable, GC, int, int, int, int, XlibRgbDither, unsigned char *, int);
CheckInterfacedef(xlib_draw_rgb_image,xlib_draw_rgb_image_db);
extern void xlib_rgb_init_with_depth_db(Display *, Screen *, int);
CheckInterfacedef(xlib_rgb_init_with_depth,xlib_rgb_init_with_depth_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
