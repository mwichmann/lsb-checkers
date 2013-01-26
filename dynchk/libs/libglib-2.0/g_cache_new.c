// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_cache_new
static GCache *(*funcptr) (GCacheNewFunc , GCacheDestroyFunc , GCacheDupFunc , GCacheDestroyFunc , GHashFunc , GHashFunc , GEqualFunc ) = 0;

extern int __lsb_check_params;
GCache * g_cache_new (GCacheNewFunc arg0 , GCacheDestroyFunc arg1 , GCacheDupFunc arg2 , GCacheDestroyFunc arg3 , GHashFunc arg4 , GHashFunc arg5 , GEqualFunc arg6 )
{
	int reset_flag = __lsb_check_params;
	GCache * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_cache_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cache_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cache_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cache_new() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_cache_new - arg0 (value_new_func)");
		validate_NULL_TYPETYPE(  arg1, "g_cache_new - arg1 (value_destroy_func)");
		validate_NULL_TYPETYPE(  arg2, "g_cache_new - arg2 (key_dup_func)");
		validate_NULL_TYPETYPE(  arg3, "g_cache_new - arg3 (key_destroy_func)");
		validate_NULL_TYPETYPE(  arg4, "g_cache_new - arg4 (hash_key_func)");
		validate_NULL_TYPETYPE(  arg5, "g_cache_new - arg5 (hash_value_func)");
		validate_NULL_TYPETYPE(  arg6, "g_cache_new - arg6 (key_equal_func)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}
