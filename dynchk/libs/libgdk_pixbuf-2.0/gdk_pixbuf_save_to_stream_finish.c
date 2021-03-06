// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_save_to_stream_finish
static gboolean(*funcptr) (GAsyncResult * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean gdk_pixbuf_save_to_stream_finish (GAsyncResult * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_save_to_stream_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_save_to_stream_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_save_to_stream_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_save_to_stream_finish() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_save_to_stream_finish - arg0 (async_result)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_save_to_stream_finish - arg0 (async_result)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_save_to_stream_finish - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_save_to_stream_finish - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

