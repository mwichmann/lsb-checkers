// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_cell_area_apply_attributes
static void(*funcptr) (GtkCellArea * , GtkTreeModel * , GtkTreeIter * , gboolean , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_cell_area_apply_attributes (GtkCellArea * arg0 , GtkTreeModel * arg1 , GtkTreeIter * arg2 , gboolean arg3 , gboolean arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_cell_area_apply_attributes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_area_apply_attributes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_area_apply_attributes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_area_apply_attributes() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_area_apply_attributes - arg0 (area)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_area_apply_attributes - arg0 (area)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cell_area_apply_attributes - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_area_apply_attributes - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_cell_area_apply_attributes - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_cell_area_apply_attributes - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_cell_area_apply_attributes - arg3");
		validate_NULL_TYPETYPE(  arg4, "gtk_cell_area_apply_attributes - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

