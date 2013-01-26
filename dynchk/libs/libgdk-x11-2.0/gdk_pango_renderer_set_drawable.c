// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_pango_renderer_set_drawable
static void(*funcptr) (GdkPangoRenderer * , GdkDrawable * ) = 0;

extern int __lsb_check_params;
void gdk_pango_renderer_set_drawable (GdkPangoRenderer * arg0 , GdkDrawable * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pango_renderer_set_drawable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pango_renderer_set_drawable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pango_renderer_set_drawable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pango_renderer_set_drawable() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pango_renderer_set_drawable - arg0 (gdk_renderer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pango_renderer_set_drawable - arg0 (gdk_renderer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pango_renderer_set_drawable - arg1 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pango_renderer_set_drawable - arg1 (drawable)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
