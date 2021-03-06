// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_drag_status
static void(*funcptr) (GdkDragContext * , GdkDragAction , guint32 ) = 0;

extern int __lsb_check_params;
void gdk_drag_status (GdkDragContext * arg0 , GdkDragAction arg1 , guint32 arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_drag_status()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_drag_status");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_drag_status. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_drag_status() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_drag_status - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_drag_status - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "gdk_drag_status - arg1 (action)");
		validate_NULL_TYPETYPE(  arg2, "gdk_drag_status - arg2 (time_)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

