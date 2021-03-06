// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_file_chooser_get_do_overwrite_confirmation
static gboolean(*funcptr) (GtkFileChooser * ) = 0;

extern int __lsb_check_params;
gboolean gtk_file_chooser_get_do_overwrite_confirmation (GtkFileChooser * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_file_chooser_get_do_overwrite_confirmation()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_chooser_get_do_overwrite_confirmation");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_chooser_get_do_overwrite_confirmation. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_chooser_get_do_overwrite_confirmation() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_file_chooser_get_do_overwrite_confirmation - arg0 (chooser)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_file_chooser_get_do_overwrite_confirmation - arg0 (chooser)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

