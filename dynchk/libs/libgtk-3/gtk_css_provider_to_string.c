// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_css_provider_to_string
static char *(*funcptr) (GtkCssProvider * ) = 0;

extern int __lsb_check_params;
char * gtk_css_provider_to_string (GtkCssProvider * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_css_provider_to_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_css_provider_to_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_css_provider_to_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_css_provider_to_string() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_css_provider_to_string - arg0 (provider)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_css_provider_to_string - arg0 (provider)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
