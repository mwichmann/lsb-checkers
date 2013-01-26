// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hash_table_remove
static gboolean(*funcptr) (GHashTable * , gconstpointer ) = 0;

extern int __lsb_check_params;
gboolean g_hash_table_remove (GHashTable * arg0 , gconstpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_hash_table_remove()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hash_table_remove");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hash_table_remove. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hash_table_remove() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hash_table_remove - arg0 (hash_table)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hash_table_remove - arg0 (hash_table)");
		validate_NULL_TYPETYPE(  arg1, "g_hash_table_remove - arg1 (key)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
