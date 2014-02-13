// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_numerable_icon_get_style_context
static GtkStyleContext *(*funcptr) (GtkNumerableIcon * ) = 0;

extern int __lsb_check_params;
GtkStyleContext * gtk_numerable_icon_get_style_context (GtkNumerableIcon * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkStyleContext * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_numerable_icon_get_style_context()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_numerable_icon_get_style_context");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_numerable_icon_get_style_context. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_numerable_icon_get_style_context() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_numerable_icon_get_style_context - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_numerable_icon_get_style_context - arg0 (self)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
