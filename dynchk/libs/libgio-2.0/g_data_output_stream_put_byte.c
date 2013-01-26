// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gdataoutputstream.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>
#undef g_data_output_stream_put_byte
static gboolean(*funcptr) (GDataOutputStream * , guchar , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_data_output_stream_put_byte (GDataOutputStream * arg0 , guchar arg1 , GCancellable * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_data_output_stream_put_byte()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_data_output_stream_put_byte");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_data_output_stream_put_byte. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_data_output_stream_put_byte() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_data_output_stream_put_byte - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_data_output_stream_put_byte - arg0 (stream)");
		validate_NULL_TYPETYPE(  arg1, "g_data_output_stream_put_byte - arg1 (data)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_data_output_stream_put_byte - arg2 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_data_output_stream_put_byte - arg2 (cancellable)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_data_output_stream_put_byte - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_data_output_stream_put_byte - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
