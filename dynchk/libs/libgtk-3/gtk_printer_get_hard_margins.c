// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtkunixprint.h>
#include <glib-2.0/glib.h>
#undef gtk_printer_get_hard_margins
static gboolean(*funcptr) (GtkPrinter * , gdouble * , gdouble * , gdouble * , gdouble * ) = 0;

extern int __lsb_check_params;
gboolean gtk_printer_get_hard_margins (GtkPrinter * arg0 , gdouble * arg1 , gdouble * arg2 , gdouble * arg3 , gdouble * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_printer_get_hard_margins()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_printer_get_hard_margins");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_printer_get_hard_margins. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_printer_get_hard_margins() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_printer_get_hard_margins - arg0 (printer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_printer_get_hard_margins - arg0 (printer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_printer_get_hard_margins - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_printer_get_hard_margins - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_printer_get_hard_margins - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_printer_get_hard_margins - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_printer_get_hard_margins - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_printer_get_hard_margins - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_printer_get_hard_margins - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_printer_get_hard_margins - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

