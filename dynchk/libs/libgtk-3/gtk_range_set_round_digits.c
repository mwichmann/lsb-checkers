// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_range_set_round_digits
static void(*funcptr) (GtkRange * , gint ) = 0;

extern int __lsb_check_params;
void gtk_range_set_round_digits (GtkRange * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_range_set_round_digits()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_range_set_round_digits");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_range_set_round_digits. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_range_set_round_digits() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_range_set_round_digits - arg0 (range)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_range_set_round_digits - arg0 (range)");
		validate_NULL_TYPETYPE(  arg1, "gtk_range_set_round_digits - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
