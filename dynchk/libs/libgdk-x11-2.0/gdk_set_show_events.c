// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_set_show_events
static void(*funcptr) (gboolean ) = 0;

extern int __lsb_check_params;
void gdk_set_show_events (gboolean arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_set_show_events()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_set_show_events");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_set_show_events. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_set_show_events() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_set_show_events - arg0 (show_events)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

