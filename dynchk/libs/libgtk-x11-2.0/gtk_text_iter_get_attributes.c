// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_iter_get_attributes
static gboolean(*funcptr) (const GtkTextIter * , GtkTextAttributes * ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_iter_get_attributes (const GtkTextIter * arg0 , GtkTextAttributes * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_iter_get_attributes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_iter_get_attributes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_iter_get_attributes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_iter_get_attributes() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_text_iter_get_attributes - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_iter_get_attributes - arg0 (iter)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_text_iter_get_attributes - arg1 (values)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_iter_get_attributes - arg1 (values)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

