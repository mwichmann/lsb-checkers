// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hash_table_get_keys
static GList *(*funcptr) (GHashTable * ) = 0;

extern int __lsb_check_params;
GList * g_hash_table_get_keys (GHashTable * arg0 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_hash_table_get_keys()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hash_table_get_keys");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hash_table_get_keys. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hash_table_get_keys() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hash_table_get_keys - arg0 (hash_table)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hash_table_get_keys - arg0 (hash_table)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

