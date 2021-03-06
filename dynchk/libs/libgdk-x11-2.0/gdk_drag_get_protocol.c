// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_drag_get_protocol
static guint32(*funcptr) (guint32 , GdkDragProtocol * ) = 0;

extern int __lsb_check_params;
guint32 gdk_drag_get_protocol (guint32 arg0 , GdkDragProtocol * arg1 )
{
	int reset_flag = __lsb_check_params;
	guint32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_drag_get_protocol()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_drag_get_protocol");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_drag_get_protocol. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_drag_get_protocol() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_drag_get_protocol - arg0 (xid)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_drag_get_protocol - arg1 (protocol)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_drag_get_protocol - arg1 (protocol)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

