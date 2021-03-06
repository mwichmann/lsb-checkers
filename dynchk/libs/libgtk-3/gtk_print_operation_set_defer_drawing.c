// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_print_operation_set_defer_drawing
static void(*funcptr) (GtkPrintOperation * ) = 0;

extern int __lsb_check_params;
void gtk_print_operation_set_defer_drawing (GtkPrintOperation * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_print_operation_set_defer_drawing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_operation_set_defer_drawing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_operation_set_defer_drawing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_operation_set_defer_drawing() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_operation_set_defer_drawing - arg0 (op)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_operation_set_defer_drawing - arg0 (op)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

