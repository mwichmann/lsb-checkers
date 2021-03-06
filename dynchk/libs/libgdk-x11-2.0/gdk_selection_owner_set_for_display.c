// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_selection_owner_set_for_display
static gboolean(*funcptr) (GdkDisplay * , GdkWindow * , GdkAtom , guint32 , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gdk_selection_owner_set_for_display (GdkDisplay * arg0 , GdkWindow * arg1 , GdkAtom arg2 , guint32 arg3 , gboolean arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_selection_owner_set_for_display()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_selection_owner_set_for_display");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_selection_owner_set_for_display. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_selection_owner_set_for_display() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_selection_owner_set_for_display - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_selection_owner_set_for_display - arg0 (display)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_selection_owner_set_for_display - arg1 (owner)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_selection_owner_set_for_display - arg1 (owner)");
		validate_NULL_TYPETYPE(  arg2, "gdk_selection_owner_set_for_display - arg2 (selection)");
		validate_NULL_TYPETYPE(  arg3, "gdk_selection_owner_set_for_display - arg3 (time_)");
		validate_NULL_TYPETYPE(  arg4, "gdk_selection_owner_set_for_display - arg4 (send_event)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

