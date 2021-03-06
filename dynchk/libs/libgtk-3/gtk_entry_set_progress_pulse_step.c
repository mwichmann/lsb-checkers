// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_entry_set_progress_pulse_step
static void(*funcptr) (GtkEntry * , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_entry_set_progress_pulse_step (GtkEntry * arg0 , gdouble arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_entry_set_progress_pulse_step()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_set_progress_pulse_step");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_set_progress_pulse_step. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_set_progress_pulse_step() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_set_progress_pulse_step - arg0 (entry)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_set_progress_pulse_step - arg0 (entry)");
		validate_NULL_TYPETYPE(  arg1, "gtk_entry_set_progress_pulse_step - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

