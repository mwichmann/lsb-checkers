// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_string_chunk_new
static GStringChunk *(*funcptr) (gsize ) = 0;

extern int __lsb_check_params;
GStringChunk * g_string_chunk_new (gsize arg0 )
{
	int reset_flag = __lsb_check_params;
	GStringChunk * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_string_chunk_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_string_chunk_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_string_chunk_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_string_chunk_new() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_string_chunk_new - arg0 (size)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

