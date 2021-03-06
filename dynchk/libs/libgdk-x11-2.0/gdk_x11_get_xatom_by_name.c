// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdk_x11_get_xatom_by_name
static Atom(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
Atom gdk_x11_get_xatom_by_name (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	Atom ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_x11_get_xatom_by_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_get_xatom_by_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_get_xatom_by_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_get_xatom_by_name() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_x11_get_xatom_by_name - arg0 (atom_name)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_get_xatom_by_name - arg0 (atom_name)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

