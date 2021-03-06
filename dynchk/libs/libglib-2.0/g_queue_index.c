// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_queue_index
static gint(*funcptr) (GQueue * , gconstpointer ) = 0;

extern int __lsb_check_params;
gint g_queue_index (GQueue * arg0 , gconstpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_queue_index()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_queue_index");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_queue_index. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_queue_index() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_queue_index - arg0 (queue)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_queue_index - arg0 (queue)");
		validate_NULL_TYPETYPE(  arg1, "g_queue_index - arg1 (data)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

