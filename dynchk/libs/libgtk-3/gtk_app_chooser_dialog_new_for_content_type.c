// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_app_chooser_dialog_new_for_content_type
static GtkWidget *(*funcptr) (GtkWindow * , GtkDialogFlags , const char * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_app_chooser_dialog_new_for_content_type (GtkWindow * arg0 , GtkDialogFlags arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_app_chooser_dialog_new_for_content_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_app_chooser_dialog_new_for_content_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_app_chooser_dialog_new_for_content_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_app_chooser_dialog_new_for_content_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_app_chooser_dialog_new_for_content_type - arg0 (parent)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_app_chooser_dialog_new_for_content_type - arg0 (parent)");
		validate_NULL_TYPETYPE(  arg1, "gtk_app_chooser_dialog_new_for_content_type - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_app_chooser_dialog_new_for_content_type - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_app_chooser_dialog_new_for_content_type - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

