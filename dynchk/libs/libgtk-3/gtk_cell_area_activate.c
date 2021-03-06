// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_cell_area_activate
static gboolean(*funcptr) (GtkCellArea * , GtkCellAreaContext * , GtkWidget * , const GdkRectangle * , GtkCellRendererState , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gtk_cell_area_activate (GtkCellArea * arg0 , GtkCellAreaContext * arg1 , GtkWidget * arg2 , const GdkRectangle * arg3 , GtkCellRendererState arg4 , gboolean arg5 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_area_activate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_area_activate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_area_activate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_area_activate() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_area_activate - arg0 (area)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_area_activate - arg0 (area)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cell_area_activate - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_area_activate - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_cell_area_activate - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_cell_area_activate - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_cell_area_activate - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_cell_area_activate - arg3");
		validate_NULL_TYPETYPE(  arg4, "gtk_cell_area_activate - arg4");
		validate_NULL_TYPETYPE(  arg5, "gtk_cell_area_activate - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

