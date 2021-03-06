// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_malloc0
static gpointer(*funcptr) (gulong ) = 0;

extern int __lsb_check_params;
gpointer g_malloc0 (gulong arg0 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_malloc0()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_malloc0");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_malloc0. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_malloc0() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_malloc0 - arg0 (n_bytes)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

