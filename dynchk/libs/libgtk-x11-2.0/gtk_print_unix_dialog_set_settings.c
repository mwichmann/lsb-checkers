// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-unix-print-2.0/gtk/gtkprintunixdialog.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_print_unix_dialog_set_settings
static void(*funcptr) (GtkPrintUnixDialog * , GtkPrintSettings * ) = 0;

extern int __lsb_check_params;
void gtk_print_unix_dialog_set_settings (GtkPrintUnixDialog * arg0 , GtkPrintSettings * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_print_unix_dialog_set_settings()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_unix_dialog_set_settings");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_unix_dialog_set_settings. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_unix_dialog_set_settings() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_unix_dialog_set_settings - arg0 (dialog)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_unix_dialog_set_settings - arg0 (dialog)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_print_unix_dialog_set_settings - arg1 (settings)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_print_unix_dialog_set_settings - arg1 (settings)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

