// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_idle_add_full
static guint(*funcptr) (gint , GSourceFunc , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
guint g_idle_add_full (gint arg0 , GSourceFunc arg1 , gpointer arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_idle_add_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_idle_add_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_idle_add_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_idle_add_full() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_idle_add_full - arg0 (priority)");
		validate_NULL_TYPETYPE(  arg1, "g_idle_add_full - arg1 (function)");
		validate_NULL_TYPETYPE(  arg2, "g_idle_add_full - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "g_idle_add_full - arg3 (notify)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
