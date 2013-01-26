// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#include <atk-1.0/atk/atk.h>
#undef atk_add_global_event_listener
static guint(*funcptr) (GSignalEmissionHook , const gchar * ) = 0;

extern int __lsb_check_params;
guint atk_add_global_event_listener (GSignalEmissionHook arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_add_global_event_listener()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_add_global_event_listener");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_add_global_event_listener. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_add_global_event_listener() - validating");
		validate_NULL_TYPETYPE(  arg0, "atk_add_global_event_listener - arg0 (listener)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "atk_add_global_event_listener - arg1 (event_type)");
		}
		validate_NULL_TYPETYPE(  arg1, "atk_add_global_event_listener - arg1 (event_type)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
