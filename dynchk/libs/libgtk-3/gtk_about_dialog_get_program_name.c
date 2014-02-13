// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_about_dialog_get_program_name
static const char *(*funcptr) (GtkAboutDialog * ) = 0;

extern int __lsb_check_params;
const char * gtk_about_dialog_get_program_name (GtkAboutDialog * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_about_dialog_get_program_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_about_dialog_get_program_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_about_dialog_get_program_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_about_dialog_get_program_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_about_dialog_get_program_name - arg0 (about)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_about_dialog_get_program_name - arg0 (about)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
