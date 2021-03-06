// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_pixmap_create_from_xpm_d
static GdkPixmap *(*funcptr) (GdkDrawable * , GdkBitmap * * , const GdkColor * , gchar * * ) = 0;

extern int __lsb_check_params;
GdkPixmap * gdk_pixmap_create_from_xpm_d (GdkDrawable * arg0 , GdkBitmap * * arg1 , const GdkColor * arg2 , gchar * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GdkPixmap * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixmap_create_from_xpm_d()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixmap_create_from_xpm_d");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixmap_create_from_xpm_d. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixmap_create_from_xpm_d() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixmap_create_from_xpm_d - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixmap_create_from_xpm_d - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixmap_create_from_xpm_d - arg1 (mask)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixmap_create_from_xpm_d - arg1 (mask)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gdk_pixmap_create_from_xpm_d - arg2 (transparent_color)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_pixmap_create_from_xpm_d - arg2 (transparent_color)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_pixmap_create_from_xpm_d - arg3 (data)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_pixmap_create_from_xpm_d - arg3 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

