// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_cell_area_event
static gint(*funcptr) (GtkCellArea * , GtkCellAreaContext * , GtkWidget * , GdkEvent * , const GdkRectangle * , GtkCellRendererState ) = 0;

extern int __lsb_check_params;
gint gtk_cell_area_event (GtkCellArea * arg0 , GtkCellAreaContext * arg1 , GtkWidget * arg2 , GdkEvent * arg3 , const GdkRectangle * arg4 , GtkCellRendererState arg5 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_area_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_area_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_area_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_area_event() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_area_event - arg0 (area)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_area_event - arg0 (area)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cell_area_event - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_area_event - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_cell_area_event - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_cell_area_event - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_cell_area_event - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_cell_area_event - arg3");
		if( arg4 ) {
		validate_Rdaddress( arg4, "gtk_cell_area_event - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_cell_area_event - arg4");
		validate_NULL_TYPETYPE(  arg5, "gtk_cell_area_event - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

