// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_name
static const gchar *(*funcptr) (guint ) = 0;

extern int __lsb_check_params;
const gchar * g_signal_name (guint arg0 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_signal_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_name() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_name - arg0 (signal_id)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
