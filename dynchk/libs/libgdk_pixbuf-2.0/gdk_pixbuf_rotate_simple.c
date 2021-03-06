// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_rotate_simple
static GdkPixbuf *(*funcptr) (const GdkPixbuf * , GdkPixbufRotation ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_rotate_simple (const GdkPixbuf * arg0 , GdkPixbufRotation arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_rotate_simple()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_rotate_simple");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_rotate_simple. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_rotate_simple() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_rotate_simple - arg0 (src)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_rotate_simple - arg0 (src)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_rotate_simple - arg1 (angle)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

