// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_base64_encode_step
static gsize(*funcptr) (const unsigned char * , gsize , gboolean , gchar * , gint * , gint * ) = 0;

extern int __lsb_check_params;
gsize g_base64_encode_step (const unsigned char * arg0 , gsize arg1 , gboolean arg2 , gchar * arg3 , gint * arg4 , gint * arg5 )
{
	int reset_flag = __lsb_check_params;
	gsize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_base64_encode_step()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_base64_encode_step");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_base64_encode_step. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_base64_encode_step() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_base64_encode_step - arg0 (in)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_base64_encode_step - arg0 (in)");
		validate_NULL_TYPETYPE(  arg1, "g_base64_encode_step - arg1 (len)");
		validate_NULL_TYPETYPE(  arg2, "g_base64_encode_step - arg2 (break_lines)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_base64_encode_step - arg3 (out)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_base64_encode_step - arg3 (out)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_base64_encode_step - arg4 (state)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_base64_encode_step - arg4 (state)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_base64_encode_step - arg5 (save)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_base64_encode_step - arg5 (save)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
