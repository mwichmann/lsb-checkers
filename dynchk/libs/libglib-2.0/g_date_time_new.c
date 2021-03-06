// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_date_time_new
static GDateTime *(*funcptr) (GTimeZone * , gint , gint , gint , gint , gint , gdouble ) = 0;

extern int __lsb_check_params;
GDateTime * g_date_time_new (GTimeZone * arg0 , gint arg1 , gint arg2 , gint arg3 , gint arg4 , gint arg5 , gdouble arg6 )
{
	int reset_flag = __lsb_check_params;
	GDateTime * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_date_time_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_date_time_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_date_time_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_date_time_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_date_time_new - arg0 (tz)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_date_time_new - arg0 (tz)");
		validate_NULL_TYPETYPE(  arg1, "g_date_time_new - arg1 (year)");
		validate_NULL_TYPETYPE(  arg2, "g_date_time_new - arg2 (month)");
		validate_NULL_TYPETYPE(  arg3, "g_date_time_new - arg3 (day)");
		validate_NULL_TYPETYPE(  arg4, "g_date_time_new - arg4 (hour)");
		validate_NULL_TYPETYPE(  arg5, "g_date_time_new - arg5 (minute)");
		validate_NULL_TYPETYPE(  arg6, "g_date_time_new - arg6 (seconds)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

