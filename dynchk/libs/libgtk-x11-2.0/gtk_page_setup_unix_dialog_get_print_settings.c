// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h>
#undef gtk_page_setup_unix_dialog_get_print_settings
static GtkPrintSettings *(*funcptr) (GtkPageSetupUnixDialog * ) = 0;

extern int __lsb_check_params;
GtkPrintSettings * gtk_page_setup_unix_dialog_get_print_settings (GtkPageSetupUnixDialog * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkPrintSettings * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_page_setup_unix_dialog_get_print_settings()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_page_setup_unix_dialog_get_print_settings");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_page_setup_unix_dialog_get_print_settings. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_page_setup_unix_dialog_get_print_settings() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_page_setup_unix_dialog_get_print_settings - arg0 (dialog)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_page_setup_unix_dialog_get_print_settings - arg0 (dialog)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

