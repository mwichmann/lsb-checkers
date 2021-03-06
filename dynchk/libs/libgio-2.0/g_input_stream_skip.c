// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/ginputstream.h>
#undef g_input_stream_skip
static gssize(*funcptr) (GInputStream * , gsize , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gssize g_input_stream_skip (GInputStream * arg0 , gsize arg1 , GCancellable * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gssize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_input_stream_skip()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_input_stream_skip");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_input_stream_skip. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_input_stream_skip() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_input_stream_skip - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_input_stream_skip - arg0 (stream)");
		validate_NULL_TYPETYPE(  arg1, "g_input_stream_skip - arg1 (count)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_input_stream_skip - arg2 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_input_stream_skip - arg2 (cancellable)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_input_stream_skip - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_input_stream_skip - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

