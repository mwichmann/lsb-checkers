// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_text_view_set_input_purpose
static void(*funcptr) (GtkTextView * , GtkInputPurpose ) = 0;

extern int __lsb_check_params;
void gtk_text_view_set_input_purpose (GtkTextView * arg0 , GtkInputPurpose arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_set_input_purpose()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_set_input_purpose");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_set_input_purpose. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_set_input_purpose() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_view_set_input_purpose - arg0 (text_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_set_input_purpose - arg0 (text_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_view_set_input_purpose - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

