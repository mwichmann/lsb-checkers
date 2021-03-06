// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_selection_send_notify_for_display
static void(*funcptr) (GdkDisplay * , guint32 , GdkAtom , GdkAtom , GdkAtom , guint32 ) = 0;

extern int __lsb_check_params;
void gdk_selection_send_notify_for_display (GdkDisplay * arg0 , guint32 arg1 , GdkAtom arg2 , GdkAtom arg3 , GdkAtom arg4 , guint32 arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_selection_send_notify_for_display()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_selection_send_notify_for_display");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_selection_send_notify_for_display. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_selection_send_notify_for_display() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_selection_send_notify_for_display - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_selection_send_notify_for_display - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_selection_send_notify_for_display - arg1 (requestor)");
		validate_NULL_TYPETYPE(  arg2, "gdk_selection_send_notify_for_display - arg2 (selection)");
		validate_NULL_TYPETYPE(  arg3, "gdk_selection_send_notify_for_display - arg3 (target)");
		validate_NULL_TYPETYPE(  arg4, "gdk_selection_send_notify_for_display - arg4 (property)");
		validate_NULL_TYPETYPE(  arg5, "gdk_selection_send_notify_for_display - arg5 (time_)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

