// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdatainputstream.h>
#undef g_data_input_stream_read_line_finish_utf8
static char *(*funcptr) (GDataInputStream * , GAsyncResult * , gsize * , GError * * ) = 0;

extern int __lsb_check_params;
char * g_data_input_stream_read_line_finish_utf8 (GDataInputStream * arg0 , GAsyncResult * arg1 , gsize * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_data_input_stream_read_line_finish_utf8()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_data_input_stream_read_line_finish_utf8");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_data_input_stream_read_line_finish_utf8. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_data_input_stream_read_line_finish_utf8() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_data_input_stream_read_line_finish_utf8 - arg0 (stream)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_data_input_stream_read_line_finish_utf8 - arg0 (stream)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_data_input_stream_read_line_finish_utf8 - arg1 (result)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_data_input_stream_read_line_finish_utf8 - arg1 (result)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_data_input_stream_read_line_finish_utf8 - arg2 (length)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_data_input_stream_read_line_finish_utf8 - arg2 (length)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_data_input_stream_read_line_finish_utf8 - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_data_input_stream_read_line_finish_utf8 - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

