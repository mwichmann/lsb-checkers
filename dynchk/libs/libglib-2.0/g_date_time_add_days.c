// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_time_add_days
static GDateTime *(*funcptr) (GDateTime * , gint ) = 0;

extern int __lsb_check_params;
GDateTime * g_date_time_add_days (GDateTime * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	GDateTime * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_time_add_days()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_time_add_days");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_time_add_days. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_time_add_days() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_date_time_add_days - arg0 (datetime)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_date_time_add_days - arg0 (datetime)");
		validate_NULL_TYPETYPE(  arg1, "g_date_time_add_days - arg1 (days)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

