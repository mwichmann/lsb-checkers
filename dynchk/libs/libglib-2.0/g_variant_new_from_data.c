// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_new_from_data
static GVariant *(*funcptr) (const GVariantType * , gconstpointer , gsize , gboolean , GDestroyNotify , void * ) = 0;

extern int __lsb_check_params;
GVariant * g_variant_new_from_data (const GVariantType * arg0 , gconstpointer arg1 , gsize arg2 , gboolean arg3 , GDestroyNotify arg4 , void * arg5 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_new_from_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_new_from_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_new_from_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_new_from_data() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_variant_new_from_data - arg0 (type)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_new_from_data - arg0 (type)");
		validate_NULL_TYPETYPE(  arg1, "g_variant_new_from_data - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_variant_new_from_data - arg2 (size)");
		validate_NULL_TYPETYPE(  arg3, "g_variant_new_from_data - arg3 (trusted)");
		validate_NULL_TYPETYPE(  arg4, "g_variant_new_from_data - arg4 (notify)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_variant_new_from_data - arg5 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_variant_new_from_data - arg5 (user_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
