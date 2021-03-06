// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_accelerator_name
static gchar *(*funcptr) (guint , GdkModifierType ) = 0;

extern int __lsb_check_params;
gchar * gtk_accelerator_name (guint arg0 , GdkModifierType arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_accelerator_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accelerator_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accelerator_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accelerator_name() - validating");
		validate_NULL_TYPETYPE(  arg0, "gtk_accelerator_name - arg0 (accelerator_key)");
		validate_NULL_TYPETYPE(  arg1, "gtk_accelerator_name - arg1 (accelerator_mods)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

