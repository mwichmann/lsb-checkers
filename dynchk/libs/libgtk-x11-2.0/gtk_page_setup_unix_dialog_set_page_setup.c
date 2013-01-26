// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_page_setup_unix_dialog_set_page_setup
static void(*funcptr) (GtkPageSetupUnixDialog * , GtkPageSetup * ) = 0;

extern int __lsb_check_params;
void gtk_page_setup_unix_dialog_set_page_setup (GtkPageSetupUnixDialog * arg0 , GtkPageSetup * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_page_setup_unix_dialog_set_page_setup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_page_setup_unix_dialog_set_page_setup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_page_setup_unix_dialog_set_page_setup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_page_setup_unix_dialog_set_page_setup() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_page_setup_unix_dialog_set_page_setup - arg0 (dialog)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_page_setup_unix_dialog_set_page_setup - arg0 (dialog)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_page_setup_unix_dialog_set_page_setup - arg1 (page_setup)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_page_setup_unix_dialog_set_page_setup - arg1 (page_setup)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
