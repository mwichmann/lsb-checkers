// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_cell_renderer_get_preferred_height
static void(*funcptr) (GtkCellRenderer * , GtkWidget * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gtk_cell_renderer_get_preferred_height (GtkCellRenderer * arg0 , GtkWidget * arg1 , gint * arg2 , gint * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_cell_renderer_get_preferred_height()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_renderer_get_preferred_height");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_renderer_get_preferred_height. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_renderer_get_preferred_height() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cell_renderer_get_preferred_height - arg0 (cell)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cell_renderer_get_preferred_height - arg0 (cell)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cell_renderer_get_preferred_height - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cell_renderer_get_preferred_height - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_cell_renderer_get_preferred_height - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_cell_renderer_get_preferred_height - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_cell_renderer_get_preferred_height - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_cell_renderer_get_preferred_height - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

