// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-unix-print-2.0/gtk/gtkprinter.h>
#undef gtk_printer_compare
static gint(*funcptr) (GtkPrinter * , GtkPrinter * ) = 0;

extern int __lsb_check_params;
gint gtk_printer_compare (GtkPrinter * arg0 , GtkPrinter * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_printer_compare()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_printer_compare");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_printer_compare. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_printer_compare() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_printer_compare - arg0 (a)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_printer_compare - arg0 (a)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_printer_compare - arg1 (b)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_printer_compare - arg1 (b)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

