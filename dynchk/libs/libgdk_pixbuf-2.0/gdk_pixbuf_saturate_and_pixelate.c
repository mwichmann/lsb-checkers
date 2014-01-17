// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <glib-2.0/glib.h>
#undef gdk_pixbuf_saturate_and_pixelate
static void(*funcptr) (const GdkPixbuf * , GdkPixbuf * , gfloat , gboolean ) = 0;

extern int __lsb_check_params;
void gdk_pixbuf_saturate_and_pixelate (const GdkPixbuf * arg0 , GdkPixbuf * arg1 , gfloat arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_saturate_and_pixelate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_saturate_and_pixelate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_saturate_and_pixelate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_saturate_and_pixelate() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_saturate_and_pixelate - arg0 (src)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_saturate_and_pixelate - arg0 (src)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_saturate_and_pixelate - arg1 (dest)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_saturate_and_pixelate - arg1 (dest)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_saturate_and_pixelate - arg2 (saturation)");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_saturate_and_pixelate - arg3 (pixelate)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

