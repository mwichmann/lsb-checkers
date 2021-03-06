// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_time_equal
static gboolean(*funcptr) (gconstpointer , gconstpointer ) = 0;

extern int __lsb_check_params;
gboolean g_date_time_equal (gconstpointer arg0 , gconstpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_time_equal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_time_equal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_time_equal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_time_equal() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_date_time_equal - arg0 (dt1)");
		validate_NULL_TYPETYPE(  arg1, "g_date_time_equal - arg1 (dt2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

