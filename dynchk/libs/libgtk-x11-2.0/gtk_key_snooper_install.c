// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_key_snooper_install
static guint(*funcptr) (GtkKeySnoopFunc , gpointer ) = 0;

extern int __lsb_check_params;
guint gtk_key_snooper_install (GtkKeySnoopFunc arg0 , gpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_key_snooper_install()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_key_snooper_install");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_key_snooper_install. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_key_snooper_install() - validating");
		validate_NULL_TYPETYPE(  arg0, "gtk_key_snooper_install - arg0 (snooper)");
		validate_NULL_TYPETYPE(  arg1, "gtk_key_snooper_install - arg1 (func_data)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

