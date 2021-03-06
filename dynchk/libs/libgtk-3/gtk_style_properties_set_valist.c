// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <stdarg.h>
#undef gtk_style_properties_set_valist
static void(*funcptr) (GtkStyleProperties * , GtkStateFlags , va_list ) = 0;

extern int __lsb_check_params;
void gtk_style_properties_set_valist (GtkStyleProperties * arg0 , GtkStateFlags arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_style_properties_set_valist()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_style_properties_set_valist");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_style_properties_set_valist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_style_properties_set_valist() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_style_properties_set_valist - arg0 (props)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_style_properties_set_valist - arg0 (props)");
		validate_NULL_TYPETYPE(  arg1, "gtk_style_properties_set_valist - arg1 (state)");
		validate_NULL_TYPETYPE(  arg2, "gtk_style_properties_set_valist - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

