// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_print_operation_set_track_print_status
static void(*funcptr) (GtkPrintOperation * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_print_operation_set_track_print_status (GtkPrintOperation * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_print_operation_set_track_print_status()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_operation_set_track_print_status");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_operation_set_track_print_status. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_operation_set_track_print_status() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_operation_set_track_print_status - arg0 (op)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_operation_set_track_print_status - arg0 (op)");
		validate_NULL_TYPETYPE(  arg1, "gtk_print_operation_set_track_print_status - arg1 (track_status)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

