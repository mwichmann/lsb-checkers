// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_colormap_get_screen
static GdkScreen *(*funcptr) (GdkColormap * ) = 0;

extern int __lsb_check_params;
GdkScreen * gdk_colormap_get_screen (GdkColormap * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkScreen * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_colormap_get_screen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_colormap_get_screen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_colormap_get_screen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_colormap_get_screen() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_colormap_get_screen - arg0 (cmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_colormap_get_screen - arg0 (cmap)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

