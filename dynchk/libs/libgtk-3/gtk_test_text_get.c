// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_test_text_get
static gchar *(*funcptr) (GtkWidget * ) = 0;

extern int __lsb_check_params;
gchar * gtk_test_text_get (GtkWidget * arg0 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_test_text_get()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_test_text_get");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_test_text_get. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_test_text_get() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_test_text_get - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_test_text_get - arg0 (widget)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

