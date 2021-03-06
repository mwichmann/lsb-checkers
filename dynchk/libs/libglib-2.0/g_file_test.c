// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_file_test
static gboolean(*funcptr) (const gchar * , GFileTest ) = 0;

extern int __lsb_check_params;
gboolean g_file_test (const gchar * arg0 , GFileTest arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_test()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_test");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_test. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_test() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_file_test - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_test - arg0 (filename)");
		validate_NULL_TYPETYPE(  arg1, "g_file_test - arg1 (test)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

