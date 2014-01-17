// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_orientable_set_orientation
static void(*funcptr) (GtkOrientable * , GtkOrientation ) = 0;

extern int __lsb_check_params;
void gtk_orientable_set_orientation (GtkOrientable * arg0 , GtkOrientation arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_orientable_set_orientation()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_orientable_set_orientation");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_orientable_set_orientation. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_orientable_set_orientation() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_orientable_set_orientation - arg0 (orientable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_orientable_set_orientation - arg0 (orientable)");
		validate_NULL_TYPETYPE(  arg1, "gtk_orientable_set_orientation - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

