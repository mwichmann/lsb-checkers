// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_cell_area_focus
static gboolean(*funcptr) (GtkCellArea * , GtkDirectionType ) = 0;

extern int __lsb_check_params;
gboolean gtk_cell_area_focus (GtkCellArea * arg0 , GtkDirectionType arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_area_focus()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_area_focus");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_area_focus. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_area_focus() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_area_focus - arg0 (area)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_area_focus - arg0 (area)");
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_area_focus - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
