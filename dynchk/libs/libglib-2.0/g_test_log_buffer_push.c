// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_test_log_buffer_push
static void(*funcptr) (GTestLogBuffer * , guint , const unsigned char * ) = 0;

extern int __lsb_check_params;
void g_test_log_buffer_push (GTestLogBuffer * arg0 , guint arg1 , const unsigned char * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_test_log_buffer_push()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_test_log_buffer_push");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_test_log_buffer_push. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_test_log_buffer_push() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_test_log_buffer_push - arg0 (tbuffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_test_log_buffer_push - arg0 (tbuffer)");
		validate_NULL_TYPETYPE(  arg1, "g_test_log_buffer_push - arg1 (n_bytes)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_test_log_buffer_push - arg2 (bytes)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_test_log_buffer_push - arg2 (bytes)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

