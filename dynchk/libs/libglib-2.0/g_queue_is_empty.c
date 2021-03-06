// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_queue_is_empty
static gboolean(*funcptr) (GQueue * ) = 0;

extern int __lsb_check_params;
gboolean g_queue_is_empty (GQueue * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_queue_is_empty()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_queue_is_empty");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_queue_is_empty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_queue_is_empty() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_queue_is_empty - arg0 (queue)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_queue_is_empty - arg0 (queue)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

