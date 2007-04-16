/*
 * Test of gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h\n");
#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif __x86_64__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif __ia64__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif __powerpc64__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif __s390__ && !__s390x__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif __s390x__
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#elif 1
CheckEnum("XLIB_RGB_DITHER_NONE",XLIB_RGB_DITHER_NONE,0,43386);
CheckEnum("XLIB_RGB_DITHER_NORMAL",XLIB_RGB_DITHER_NORMAL,1,43387);
CheckEnum("XLIB_RGB_DITHER_MAX",XLIB_RGB_DITHER_MAX,2,43388);
#endif

#if __i386__
CheckTypeSize(XlibRgbDither,4, 12661, 2);
#elif __x86_64__
CheckTypeSize(XlibRgbDither,4, 12661, 11);
#elif __ia64__
CheckTypeSize(XlibRgbDither,4, 12661, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XlibRgbDither,4, 12661, 6);
#elif __powerpc64__
CheckTypeSize(XlibRgbDither,4, 12661, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(XlibRgbDither,4, 12661, 10);
#elif __s390x__
CheckTypeSize(XlibRgbDither,4, 12661, 12);
#elif 1
CheckTypeSize(XlibRgbDither,0, 12661, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 2);
CheckMemberSize(struct _XlibRgbCmap,lut,256,2,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,2,43400);
#elif __x86_64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 11);
CheckMemberSize(struct _XlibRgbCmap,lut,256,11,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,11,43400);
#elif __ia64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 3);
CheckMemberSize(struct _XlibRgbCmap,lut,256,3,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,3,43400);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 6);
CheckMemberSize(struct _XlibRgbCmap,lut,256,6,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,6,43400);
#elif __powerpc64__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 9);
CheckMemberSize(struct _XlibRgbCmap,lut,256,9,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,9,43400);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 10);
CheckMemberSize(struct _XlibRgbCmap,lut,256,10,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,10,43400);
#elif __s390x__
CheckTypeSize(struct _XlibRgbCmap,1280, 12663, 12);
CheckMemberSize(struct _XlibRgbCmap,lut,256,12,43400);
CheckOffset(struct _XlibRgbCmap,lut,1024,12,43400);
#elif 1
CheckTypeSize(struct _XlibRgbCmap,0, 12663, 1);
Msg("Missing member data for _XlibRgbCmap on All\n");
CheckOffset(struct _XlibRgbCmap,colors,0,1,43399);
CheckOffset(struct _XlibRgbCmap,lut,0,1,43400);
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(XlibRgbCmap,1280, 12666, 2);
#elif __x86_64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 11);
#elif __ia64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 6);
#elif __powerpc64__
CheckTypeSize(XlibRgbCmap,1280, 12666, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(XlibRgbCmap,1280, 12666, 10);
#elif __s390x__
CheckTypeSize(XlibRgbCmap,1280, 12666, 12);
#elif 1
CheckTypeSize(XlibRgbCmap,0, 12666, 1);
#endif

#if __i386__
CheckTypeSize(XlibRgbCmap *,4, 12667, 2);
#elif __x86_64__
CheckTypeSize(XlibRgbCmap *,8, 12667, 11);
#elif __ia64__
CheckTypeSize(XlibRgbCmap *,8, 12667, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XlibRgbCmap *,4, 12667, 6);
#elif __powerpc64__
CheckTypeSize(XlibRgbCmap *,8, 12667, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(XlibRgbCmap *,4, 12667, 10);
#elif __s390x__
CheckTypeSize(XlibRgbCmap *,8, 12667, 12);
#elif 1
CheckTypeSize(XlibRgbCmap *,0, 12667, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(guint32 *,4, 12670, 2);
#elif __x86_64__
CheckTypeSize(guint32 *,8, 12670, 11);
#elif __ia64__
CheckTypeSize(guint32 *,8, 12670, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint32 *,4, 12670, 6);
#elif __powerpc64__
CheckTypeSize(guint32 *,8, 12670, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(guint32 *,4, 12670, 10);
#elif __s390x__
CheckTypeSize(guint32 *,8, 12670, 12);
#elif 1
CheckTypeSize(guint32 *,0, 12670, 1);
#endif

#if __i386__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif __x86_64__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif __ia64__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif __powerpc__ && !__powerpc64__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif __powerpc64__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif __s390__ && !__s390x__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif __s390x__
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
#elif 1
CheckEnum("GDK_PIXBUF_ALPHA_BILEVEL",GDK_PIXBUF_ALPHA_BILEVEL,0,43424);
CheckEnum("GDK_PIXBUF_ALPHA_FULL",GDK_PIXBUF_ALPHA_FULL,1,43425);
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
printf("%d tests passed out of %d tests in gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
