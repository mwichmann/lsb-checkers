// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_new_from_stream
static GdkPixbuf *(*funcptr) (GInputStream * , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_new_from_stream (GInputStream * arg0 , GCancellable * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_new_from_stream()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_new_from_stream");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_new_from_stream. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_new_from_stream() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_new_from_stream - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_new_from_stream - arg0 (stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_new_from_stream - arg1 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_new_from_stream - arg1 (cancellable)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_pixbuf_new_from_stream - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_new_from_stream - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

