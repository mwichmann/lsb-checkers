// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_gc_set_colormap
static void(*funcptr) (GdkGC * , GdkColormap * ) = 0;

extern int __lsb_check_params;
void gdk_gc_set_colormap (GdkGC * arg0 , GdkColormap * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_gc_set_colormap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_gc_set_colormap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_gc_set_colormap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_gc_set_colormap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_gc_set_colormap - arg0 (gc)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_gc_set_colormap - arg0 (gc)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_gc_set_colormap - arg1 (colormap)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_gc_set_colormap - arg1 (colormap)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
