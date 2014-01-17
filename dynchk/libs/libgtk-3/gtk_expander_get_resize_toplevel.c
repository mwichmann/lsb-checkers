// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_expander_get_resize_toplevel
static gboolean(*funcptr) (GtkExpander * ) = 0;

extern int __lsb_check_params;
gboolean gtk_expander_get_resize_toplevel (GtkExpander * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_expander_get_resize_toplevel()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_expander_get_resize_toplevel");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_expander_get_resize_toplevel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_expander_get_resize_toplevel() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_expander_get_resize_toplevel - arg0 (expander)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_expander_get_resize_toplevel - arg0 (expander)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

