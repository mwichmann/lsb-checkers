// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_grid_insert_next_to
static void(*funcptr) (GtkGrid * , GtkWidget * , GtkPositionType ) = 0;

extern int __lsb_check_params;
void gtk_grid_insert_next_to (GtkGrid * arg0 , GtkWidget * arg1 , GtkPositionType arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_grid_insert_next_to()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_grid_insert_next_to");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_grid_insert_next_to. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_grid_insert_next_to() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_grid_insert_next_to - arg0 (grid)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_grid_insert_next_to - arg0 (grid)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_grid_insert_next_to - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_grid_insert_next_to - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_grid_insert_next_to - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

