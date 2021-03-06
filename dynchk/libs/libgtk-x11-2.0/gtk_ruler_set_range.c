// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_ruler_set_range
static void(*funcptr) (GtkRuler * , gdouble , gdouble , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_ruler_set_range (GtkRuler * arg0 , gdouble arg1 , gdouble arg2 , gdouble arg3 , gdouble arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_ruler_set_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_ruler_set_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_ruler_set_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_ruler_set_range() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_ruler_set_range - arg0 (ruler)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_ruler_set_range - arg0 (ruler)");
		validate_NULL_TYPETYPE(  arg1, "gtk_ruler_set_range - arg1 (lower)");
		validate_NULL_TYPETYPE(  arg2, "gtk_ruler_set_range - arg2 (upper)");
		validate_NULL_TYPETYPE(  arg3, "gtk_ruler_set_range - arg3 (position)");
		validate_NULL_TYPETYPE(  arg4, "gtk_ruler_set_range - arg4 (max_size)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

