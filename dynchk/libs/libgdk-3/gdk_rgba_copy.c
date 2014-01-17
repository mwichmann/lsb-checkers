// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_rgba_copy
static GdkRGBA *(*funcptr) (const struct _GdkRGBA * ) = 0;

extern int __lsb_check_params;
GdkRGBA * gdk_rgba_copy (const struct _GdkRGBA * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkRGBA * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_rgba_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_rgba_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_rgba_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_rgba_copy() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_rgba_copy - arg0 (rgba)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_rgba_copy - arg0 (rgba)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

