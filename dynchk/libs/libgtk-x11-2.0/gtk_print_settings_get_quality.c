// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_print_settings_get_quality
static GtkPrintQuality(*funcptr) (GtkPrintSettings * ) = 0;

extern int __lsb_check_params;
GtkPrintQuality gtk_print_settings_get_quality (GtkPrintSettings * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkPrintQuality ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_print_settings_get_quality()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_settings_get_quality");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_settings_get_quality. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_settings_get_quality() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_settings_get_quality - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_settings_get_quality - arg0 (settings)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

