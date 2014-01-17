// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtkunixprint.h>
#undef gtk_printer_get_capabilities
static GtkPrintCapabilities(*funcptr) (GtkPrinter * ) = 0;

extern int __lsb_check_params;
GtkPrintCapabilities gtk_printer_get_capabilities (GtkPrinter * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkPrintCapabilities ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_printer_get_capabilities()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_printer_get_capabilities");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_printer_get_capabilities. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_printer_get_capabilities() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_printer_get_capabilities - arg0 (printer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_printer_get_capabilities - arg0 (printer)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

