// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_drawable_copy_to_image
static GdkImage *(*funcptr) (GdkDrawable * , GdkImage * , gint , gint , gint , gint , gint , gint ) = 0;

extern int __lsb_check_params;
GdkImage * gdk_drawable_copy_to_image (GdkDrawable * arg0 , GdkImage * arg1 , gint arg2 , gint arg3 , gint arg4 , gint arg5 , gint arg6 , gint arg7 )
{
	int reset_flag = __lsb_check_params;
	GdkImage * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_drawable_copy_to_image()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_drawable_copy_to_image");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_drawable_copy_to_image. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_drawable_copy_to_image() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_drawable_copy_to_image - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_drawable_copy_to_image - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_drawable_copy_to_image - arg1 (image)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_drawable_copy_to_image - arg1 (image)");
		validate_NULL_TYPETYPE(  arg2, "gdk_drawable_copy_to_image - arg2 (src_x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_drawable_copy_to_image - arg3 (src_y)");
		validate_NULL_TYPETYPE(  arg4, "gdk_drawable_copy_to_image - arg4 (dest_x)");
		validate_NULL_TYPETYPE(  arg5, "gdk_drawable_copy_to_image - arg5 (dest_y)");
		validate_NULL_TYPETYPE(  arg6, "gdk_drawable_copy_to_image - arg6 (width)");
		validate_NULL_TYPETYPE(  arg7, "gdk_drawable_copy_to_image - arg7 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}

