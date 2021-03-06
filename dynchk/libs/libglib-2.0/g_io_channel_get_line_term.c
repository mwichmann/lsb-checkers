// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_io_channel_get_line_term
static const gchar *(*funcptr) (GIOChannel * , gint * ) = 0;

extern int __lsb_check_params;
const gchar * g_io_channel_get_line_term (GIOChannel * arg0 , gint * arg1 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_channel_get_line_term()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_channel_get_line_term");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_channel_get_line_term. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_channel_get_line_term() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_io_channel_get_line_term - arg0 (channel)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_io_channel_get_line_term - arg0 (channel)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_io_channel_get_line_term - arg1 (length)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_io_channel_get_line_term - arg1 (length)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

