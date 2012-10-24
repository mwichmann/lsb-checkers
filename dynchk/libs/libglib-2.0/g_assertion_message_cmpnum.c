// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_assertion_message_cmpnum
static void(*funcptr) (const char * , const char * , int , const char * , const char * , long double , const char * , long double , char ) = 0;

extern int __lsb_check_params;
void g_assertion_message_cmpnum (const char * arg0 , const char * arg1 , int arg2 , const char * arg3 , const char * arg4 , long double arg5 , const char * arg6 , long double arg7 , char arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_assertion_message_cmpnum()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_assertion_message_cmpnum");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_assertion_message_cmpnum. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_assertion_message_cmpnum() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_assertion_message_cmpnum - arg0 (domain)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_assertion_message_cmpnum - arg0 (domain)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_assertion_message_cmpnum - arg1 (file)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_assertion_message_cmpnum - arg1 (file)");
		validate_NULL_TYPETYPE(  arg2, "g_assertion_message_cmpnum - arg2 (line)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_assertion_message_cmpnum - arg3 (func)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_assertion_message_cmpnum - arg3 (func)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "g_assertion_message_cmpnum - arg4 (expr)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_assertion_message_cmpnum - arg4 (expr)");
		validate_NULL_TYPETYPE(  arg5, "g_assertion_message_cmpnum - arg5 (arg1)");
		if( arg6 ) {
		validate_Rdaddress( arg6, "g_assertion_message_cmpnum - arg6 (cmp)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_assertion_message_cmpnum - arg6 (cmp)");
		validate_NULL_TYPETYPE(  arg7, "g_assertion_message_cmpnum - arg7 (arg2)");
		validate_NULL_TYPETYPE(  arg8, "g_assertion_message_cmpnum - arg8 (numtype)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

