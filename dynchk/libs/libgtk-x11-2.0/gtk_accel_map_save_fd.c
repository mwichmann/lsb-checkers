// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_accel_map_save_fd
static void(*funcptr) (gint ) = 0;

extern int __lsb_check_params;
void gtk_accel_map_save_fd (gint arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_accel_map_save_fd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accel_map_save_fd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accel_map_save_fd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accel_map_save_fd() - validating");
		validate_NULL_TYPETYPE(  arg0, "gtk_accel_map_save_fd - arg0 (fd)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

