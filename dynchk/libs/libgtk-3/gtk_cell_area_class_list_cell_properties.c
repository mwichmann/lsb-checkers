// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_cell_area_class_list_cell_properties
static GParamSpec * *(*funcptr) (GtkCellAreaClass * , guint * ) = 0;

extern int __lsb_check_params;
GParamSpec * * gtk_cell_area_class_list_cell_properties (GtkCellAreaClass * arg0 , guint * arg1 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_area_class_list_cell_properties()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_area_class_list_cell_properties");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_area_class_list_cell_properties. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_area_class_list_cell_properties() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_area_class_list_cell_properties - arg0 (aclass)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_area_class_list_cell_properties - arg0 (aclass)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cell_area_class_list_cell_properties - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_area_class_list_cell_properties - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

