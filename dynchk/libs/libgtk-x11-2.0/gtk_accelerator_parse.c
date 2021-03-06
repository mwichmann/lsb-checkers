// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_accelerator_parse
static void(*funcptr) (const gchar * , guint * , GdkModifierType * ) = 0;

extern int __lsb_check_params;
void gtk_accelerator_parse (const gchar * arg0 , guint * arg1 , GdkModifierType * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_accelerator_parse()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accelerator_parse");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accelerator_parse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accelerator_parse() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_accelerator_parse - arg0 (accelerator)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_accelerator_parse - arg0 (accelerator)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_accelerator_parse - arg1 (accelerator_key)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_accelerator_parse - arg1 (accelerator_key)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_accelerator_parse - arg2 (accelerator_mods)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_accelerator_parse - arg2 (accelerator_mods)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

