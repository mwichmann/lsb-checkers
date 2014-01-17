// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef _gtk_scrolled_window_get_scrollbar_spacing
static gint(*funcptr) (GtkScrolledWindow * ) = 0;

extern int __lsb_check_params;
gint _gtk_scrolled_window_get_scrollbar_spacing (GtkScrolledWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for _gtk_scrolled_window_get_scrollbar_spacing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_gtk_scrolled_window_get_scrollbar_spacing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _gtk_scrolled_window_get_scrollbar_spacing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_gtk_scrolled_window_get_scrollbar_spacing() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_gtk_scrolled_window_get_scrollbar_spacing - arg0 (scrolled_window)");
		}
		validate_NULL_TYPETYPE(  arg0, "_gtk_scrolled_window_get_scrollbar_spacing - arg0 (scrolled_window)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

