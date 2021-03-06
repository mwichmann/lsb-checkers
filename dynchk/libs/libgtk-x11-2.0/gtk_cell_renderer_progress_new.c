// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_cell_renderer_progress_new
static GtkCellRenderer *(*funcptr) () = 0;

extern int __lsb_check_params;
GtkCellRenderer * gtk_cell_renderer_progress_new ()
{
	int reset_flag = __lsb_check_params;
	GtkCellRenderer * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_cell_renderer_progress_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cell_renderer_progress_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cell_renderer_progress_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cell_renderer_progress_new() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

