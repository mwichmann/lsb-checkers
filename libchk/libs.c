/* Generated file, do not edit */
#include <unistd.h>
#include "libs.h"
#include "libchk.h"

#include "../tetj/tetj.h"

struct modlib modlibs [] = {
#if defined __ia64__
	{LSB_Base,"/lib/ld-lsb-ia64.so.3",ld_lsb_ia64_so_3,ld_lsb_ia64_so_3_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"/lib/ld-lsb-ppc32.so.3",ld_lsb_ppc32_so_3,ld_lsb_ppc32_so_3_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"/lib/ld-lsb-s390.so.3",ld_lsb_s390_so_3,ld_lsb_s390_so_3_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"/lib/ld-lsb.so.3",ld_lsb_so_3,ld_lsb_so_3_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"/lib64/ld-lsb-ppc64.so.3",ld_lsb_ppc64_so_3,ld_lsb_ppc64_so_3_classinfo},
#endif
#if defined __s390x__
	{LSB_Base,"/lib64/ld-lsb-s390x.so.3",ld_lsb_s390x_so_3,ld_lsb_s390x_so_3_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"/lib64/ld-lsb-x86-64.so.3",ld_lsb_x86_64_so_3,ld_lsb_x86_64_so_3_classinfo},
#endif
	{LSB_Multimedia,"libasound.so.2",libasound_so_2,libasound_so_2_classinfo},
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libatk-1.0.so.0",libatk_1_0_so_0,libatk_1_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Base,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libc.so.6.1",libc_so_6_1,libc_so_6_1_classinfo},
#endif
	{LSB_Graphics,"libcairo.so.2",libcairo_so_2,libcairo_so_2_classinfo},
#if defined __s390x__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
	{LSB_Print,"libcups.so.2",libcups_so_2,libcups_so_2_classinfo},
	{LSB_Print,"libcupsimage.so.2",libcupsimage_so_2,libcupsimage_so_2_classinfo},
#if defined __s390x__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
	{LSB_Graphics,"libfontconfig.so.1",libfontconfig_so_1,libfontconfig_so_1_classinfo},
	{LSB_Graphics,"libfreetype.so.6",libfreetype_so_6,libfreetype_so_6_classinfo},
#if defined __s390x__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgdk-x11-2.0.so.0",libgdk_x11_2_0_so_0,libgdk_x11_2_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf-2.0.so.0",libgdk_pixbuf_2_0_so_0,libgdk_pixbuf_2_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgdk_pixbuf_xlib-2.0.so.0",libgdk_pixbuf_xlib_2_0_so_0,libgdk_pixbuf_xlib_2_0_so_0_classinfo},
#endif
	{LSB_Graphics,"libGL.so.1",libGL_so_1,libGL_so_1_classinfo},
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libglib-2.0.so.0",libglib_2_0_so_0,libglib_2_0_so_0_classinfo},
#endif
	{LSB_Graphics,"libGLU.so.1",libGLU_so_1,libGLU_so_1_classinfo},
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgmodule-2.0.so.0",libgmodule_2_0_so_0,libgmodule_2_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgobject-2.0.so.0",libgobject_2_0_so_0,libgobject_2_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgthread-2.0.so.0",libgthread_2_0_so_0,libgthread_2_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libgtk-x11-2.0.so.0",libgtk_x11_2_0_so_0,libgtk_x11_2_0_so_0_classinfo},
#endif
	{LSB_Graphics,"libICE.so.6",libICE_so_6,libICE_so_6_classinfo},
	{LSB_Graphics,"libjpeg.so.62",libjpeg_so_62,libjpeg_so_62_classinfo},
#if defined __s390x__
	{LSB_Base,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libm.so.6.1",libm_so_6_1,libm_so_6_1_classinfo},
#endif
#if defined __s390x__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
	{LSB_Security,"libnspr4.so",libnspr4_so,libnspr4_so_classinfo},
	{LSB_Security,"libnss3.so",libnss3_so,libnss3_so_classinfo},
	{LSB_Base,"libpam.so.0",libpam_so_0,libpam_so_0_classinfo},
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libpango-1.0.so.0",libpango_1_0_so_0,libpango_1_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libpangocairo-1.0.so.0",libpangocairo_1_0_so_0,libpangocairo_1_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libpangoft2-1.0.so.0",libpangoft2_1_0_so_0,libpangoft2_1_0_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Gtk,"libpangoxft-1.0.so.0",libpangoxft_1_0_so_0,libpangoxft_1_0_so_0_classinfo},
#endif
	{LSB_Graphics,"libpng12.so.0",libpng12_so_0,libpng12_so_0_classinfo},
#if defined __s390x__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtCore.so.4",libQtCore_so_4,libQtCore_so_4_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtGui.so.4",libQtGui_so_4,libQtGui_so_4_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtNetwork.so.4",libQtNetwork_so_4,libQtNetwork_so_4_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtOpenGL.so.4",libQtOpenGL_so_4,libQtOpenGL_so_4_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtSql.so.4",libQtSql_so_4,libQtSql_so_4_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtSvg.so.4",libQtSvg_so_4,libQtSvg_so_4_classinfo},
#endif
#if defined __s390x__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
#if defined __x86_64__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
#if defined __ia64__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
#if defined __i386__
	{LSB_Toolkit_Qt,"libQtXml.so.4",libQtXml_so_4,libQtXml_so_4_classinfo},
#endif
	{LSB_Base,"librt.so.1",librt_so_1,librt_so_1_classinfo},
	{LSB_Scan,"libsane.so.1",libsane_so_1,libsane_so_1_classinfo},
	{LSB_Graphics,"libSM.so.6",libSM_so_6,libSM_so_6_classinfo},
	{LSB_Security,"libssl3.so",libssl3_so,libssl3_so_classinfo},
#if defined __s390x__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
	{LSB_Graphics,"libtiff.so.5",libtiff_so_5,libtiff_so_5_classinfo},
#if defined __s390x__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
	{LSB_Graphics,"libX11.so.6",libX11_so_6,libX11_so_6_classinfo},
	{LSB_Graphics,"libXext.so.6",libXext_so_6,libXext_so_6_classinfo},
	{LSB_Graphics,"libXft.so.2",libXft_so_2,libXft_so_2_classinfo},
	{LSB_Graphics,"libXi.so.6",libXi_so_6,libXi_so_6_classinfo},
	{LSB_XML,"libxml2.so.2",libxml2_so_2,libxml2_so_2_classinfo},
	{LSB_Graphics,"libXrender.so.1",libXrender_so_1,libXrender_so_1_classinfo},
	{LSB_XML,"libxslt.so.1",libxslt_so_1,libxslt_so_1_classinfo},
	{LSB_Graphics,"libXt.so.6",libXt_so_6,libXt_so_6_classinfo},
	{LSB_Graphics,"libXtst.so.6",libXtst_so_6,libXtst_so_6_classinfo},
#if defined __s390x__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if defined __x86_64__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if defined __s390__ && !defined __s390x__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if defined __powerpc64__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if defined __ia64__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if defined __i386__
	{LSB_Base,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
{0,NULL,NULL,NULL}
};
