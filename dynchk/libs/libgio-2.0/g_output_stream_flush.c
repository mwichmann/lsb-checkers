// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/goutputstream.h>
#undef g_output_stream_flush
static gboolean(*funcptr) (GOutputStream * , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_output_stream_flush (GOutputStream * arg0 , GCancellable * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_output_stream_flush()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_output_stream_flush");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_output_stream_flush. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_output_stream_flush() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_output_stream_flush - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_output_stream_flush - arg0 (stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_output_stream_flush - arg1 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_output_stream_flush - arg1 (cancellable)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_output_stream_flush - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_output_stream_flush - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

