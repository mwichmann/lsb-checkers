// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_try_realloc_n
static void *(*funcptr) (void * , gsize , gsize ) = 0;

extern int __lsb_check_params;
void * g_try_realloc_n (void * arg0 , gsize arg1 , gsize arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_try_realloc_n()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_try_realloc_n");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_try_realloc_n. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_try_realloc_n() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_try_realloc_n - arg0 (mem)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_try_realloc_n - arg0 (mem)");
		validate_NULL_TYPETYPE(  arg1, "g_try_realloc_n - arg1 (n_blocks)");
		validate_NULL_TYPETYPE(  arg2, "g_try_realloc_n - arg2 (n_block_bytes)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

