// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_malloc_n
static void *(*funcptr) (gsize , gsize ) = 0;

extern int __lsb_check_params;
void * g_malloc_n (gsize arg0 , gsize arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_malloc_n()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_malloc_n");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_malloc_n. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_malloc_n() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_malloc_n - arg0 (n_blocks)");
		validate_NULL_TYPETYPE(  arg1, "g_malloc_n - arg1 (n_block_bytes)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

