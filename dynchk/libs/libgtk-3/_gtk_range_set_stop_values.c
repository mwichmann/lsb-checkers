// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef _gtk_range_set_stop_values
static void(*funcptr) (GtkRange * , gdouble * , gint ) = 0;

extern int __lsb_check_params;
void _gtk_range_set_stop_values (GtkRange * arg0 , gdouble * arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for _gtk_range_set_stop_values()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_gtk_range_set_stop_values");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _gtk_range_set_stop_values. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_gtk_range_set_stop_values() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_gtk_range_set_stop_values - arg0 (range)");
		}
		validate_NULL_TYPETYPE(  arg0, "_gtk_range_set_stop_values - arg0 (range)");
		if( arg1 ) {
		validate_RWaddress( arg1, "_gtk_range_set_stop_values - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "_gtk_range_set_stop_values - arg1");
		validate_NULL_TYPETYPE(  arg2, "_gtk_range_set_stop_values - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

