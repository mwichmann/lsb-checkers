// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_progress_bar_get_show_text
static gboolean(*funcptr) (GtkProgressBar * ) = 0;

extern int __lsb_check_params;
gboolean gtk_progress_bar_get_show_text (GtkProgressBar * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_progress_bar_get_show_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_progress_bar_get_show_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_progress_bar_get_show_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_progress_bar_get_show_text() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_progress_bar_get_show_text - arg0 (pbar)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_progress_bar_get_show_text - arg0 (pbar)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

