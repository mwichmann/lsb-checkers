// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/gio/giotypes.h>
#undef gtk_numerable_icon_set_background_gicon
static void(*funcptr) (GtkNumerableIcon * , GIcon * ) = 0;

extern int __lsb_check_params;
void gtk_numerable_icon_set_background_gicon (GtkNumerableIcon * arg0 , GIcon * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_numerable_icon_set_background_gicon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_numerable_icon_set_background_gicon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_numerable_icon_set_background_gicon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_numerable_icon_set_background_gicon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_numerable_icon_set_background_gicon - arg0 (self)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_numerable_icon_set_background_gicon - arg0 (self)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_numerable_icon_set_background_gicon - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_numerable_icon_set_background_gicon - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

