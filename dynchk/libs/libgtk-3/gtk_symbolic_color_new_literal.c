// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_symbolic_color_new_literal
static GtkSymbolicColor *(*funcptr) (const GdkRGBA * ) = 0;

extern int __lsb_check_params;
GtkSymbolicColor * gtk_symbolic_color_new_literal (const GdkRGBA * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkSymbolicColor * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_symbolic_color_new_literal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_symbolic_color_new_literal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_symbolic_color_new_literal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_symbolic_color_new_literal() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_symbolic_color_new_literal - arg0 (color)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_symbolic_color_new_literal - arg0 (color)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

