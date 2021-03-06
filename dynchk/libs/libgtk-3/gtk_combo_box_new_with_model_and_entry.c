// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_combo_box_new_with_model_and_entry
static GtkWidget *(*funcptr) (GtkTreeModel * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_combo_box_new_with_model_and_entry (GtkTreeModel * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_combo_box_new_with_model_and_entry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_combo_box_new_with_model_and_entry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_combo_box_new_with_model_and_entry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_combo_box_new_with_model_and_entry() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_combo_box_new_with_model_and_entry - arg0 (model)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_combo_box_new_with_model_and_entry - arg0 (model)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

