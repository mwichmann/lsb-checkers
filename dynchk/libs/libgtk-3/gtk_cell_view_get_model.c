// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_cell_view_get_model
static GtkTreeModel *(*funcptr) (GtkCellView * ) = 0;

extern int __lsb_check_params;
GtkTreeModel * gtk_cell_view_get_model (GtkCellView * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkTreeModel * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_view_get_model()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_view_get_model");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_view_get_model. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_view_get_model() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_view_get_model - arg0 (cell_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_view_get_model - arg0 (cell_view)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
