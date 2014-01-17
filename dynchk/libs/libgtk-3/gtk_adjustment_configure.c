// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_adjustment_configure
static void(*funcptr) (GtkAdjustment * , gdouble , gdouble , gdouble , gdouble , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_adjustment_configure (GtkAdjustment * arg0 , gdouble arg1 , gdouble arg2 , gdouble arg3 , gdouble arg4 , gdouble arg5 , gdouble arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_adjustment_configure()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_adjustment_configure");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_adjustment_configure. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_adjustment_configure() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_adjustment_configure - arg0 (adjustment)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_adjustment_configure - arg0 (adjustment)");
		validate_NULL_TYPETYPE(  arg1, "gtk_adjustment_configure - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_adjustment_configure - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_adjustment_configure - arg3");
		validate_NULL_TYPETYPE(  arg4, "gtk_adjustment_configure - arg4");
		validate_NULL_TYPETYPE(  arg5, "gtk_adjustment_configure - arg5");
		validate_NULL_TYPETYPE(  arg6, "gtk_adjustment_configure - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

