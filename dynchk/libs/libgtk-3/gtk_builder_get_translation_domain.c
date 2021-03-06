// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_builder_get_translation_domain
static const char *(*funcptr) (GtkBuilder * ) = 0;

extern int __lsb_check_params;
const char * gtk_builder_get_translation_domain (GtkBuilder * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_builder_get_translation_domain()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_builder_get_translation_domain");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_builder_get_translation_domain. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_builder_get_translation_domain() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_builder_get_translation_domain - arg0 (builder)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_builder_get_translation_domain - arg0 (builder)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

