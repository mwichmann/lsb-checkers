// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_atom_intern
static GdkAtom(*funcptr) (const gchar * , gboolean ) = 0;

extern int __lsb_check_params;
GdkAtom gdk_atom_intern (const gchar * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkAtom ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_atom_intern()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_atom_intern");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_atom_intern. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_atom_intern() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_atom_intern - arg0 (atom_name)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_atom_intern - arg0 (atom_name)");
		validate_NULL_TYPETYPE(  arg1, "gdk_atom_intern - arg1 (only_if_exists)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

