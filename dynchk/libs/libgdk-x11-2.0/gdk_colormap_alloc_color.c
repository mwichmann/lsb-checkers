// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_colormap_alloc_color
static gboolean(*funcptr) (GdkColormap * , GdkColor * , gboolean , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gdk_colormap_alloc_color (GdkColormap * arg0 , GdkColor * arg1 , gboolean arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_colormap_alloc_color()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_colormap_alloc_color");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_colormap_alloc_color. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_colormap_alloc_color() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_colormap_alloc_color - arg0 (colormap)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_colormap_alloc_color - arg0 (colormap)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_colormap_alloc_color - arg1 (color)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_colormap_alloc_color - arg1 (color)");
		validate_NULL_TYPETYPE(  arg2, "gdk_colormap_alloc_color - arg2 (writeable)");
		validate_NULL_TYPETYPE(  arg3, "gdk_colormap_alloc_color - arg3 (best_match)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

