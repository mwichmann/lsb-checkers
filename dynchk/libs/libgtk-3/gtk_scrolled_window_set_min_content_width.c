// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_scrolled_window_set_min_content_width
static void(*funcptr) (GtkScrolledWindow * , gint ) = 0;

extern int __lsb_check_params;
void gtk_scrolled_window_set_min_content_width (GtkScrolledWindow * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_scrolled_window_set_min_content_width()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_scrolled_window_set_min_content_width");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_scrolled_window_set_min_content_width. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_scrolled_window_set_min_content_width() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_scrolled_window_set_min_content_width - arg0 (scrolled_window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_scrolled_window_set_min_content_width - arg0 (scrolled_window)");
		validate_NULL_TYPETYPE(  arg1, "gtk_scrolled_window_set_min_content_width - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

