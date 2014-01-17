// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_gradient_new_linear
static GtkGradient *(*funcptr) (gdouble , gdouble , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
GtkGradient * gtk_gradient_new_linear (gdouble arg0 , gdouble arg1 , gdouble arg2 , gdouble arg3 )
{
	int reset_flag = __lsb_check_params;
	GtkGradient * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_gradient_new_linear()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_gradient_new_linear");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_gradient_new_linear. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_gradient_new_linear() - validating");
		validate_NULL_TYPETYPE(  arg0, "gtk_gradient_new_linear - arg0 (x0)");
		validate_NULL_TYPETYPE(  arg1, "gtk_gradient_new_linear - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_gradient_new_linear - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_gradient_new_linear - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

