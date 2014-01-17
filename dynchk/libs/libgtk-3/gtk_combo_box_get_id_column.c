// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_combo_box_get_id_column
static gint(*funcptr) (GtkComboBox * ) = 0;

extern int __lsb_check_params;
gint gtk_combo_box_get_id_column (GtkComboBox * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_combo_box_get_id_column()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_combo_box_get_id_column");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_combo_box_get_id_column. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_combo_box_get_id_column() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_combo_box_get_id_column - arg0 (combo_box)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_combo_box_get_id_column - arg0 (combo_box)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

