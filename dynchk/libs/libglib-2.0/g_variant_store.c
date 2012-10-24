// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_store
static void(*funcptr) (GVariant * , void * ) = 0;

extern int __lsb_check_params;
void g_variant_store (GVariant * arg0 , void * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_variant_store()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_store");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_store. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_store() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_variant_store - arg0 (value)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_store - arg0 (value)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_variant_store - arg1 (data)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_variant_store - arg1 (data)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

