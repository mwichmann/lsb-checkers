// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_settings_install_property_parser
static void(*funcptr) (GParamSpec * , GtkRcPropertyParser ) = 0;

extern int __lsb_check_params;
void gtk_settings_install_property_parser (GParamSpec * arg0 , GtkRcPropertyParser arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_settings_install_property_parser()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_settings_install_property_parser");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_settings_install_property_parser. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_settings_install_property_parser() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_settings_install_property_parser - arg0 (pspec)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_settings_install_property_parser - arg0 (pspec)");
		validate_NULL_TYPETYPE(  arg1, "gtk_settings_install_property_parser - arg1 (parser)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
