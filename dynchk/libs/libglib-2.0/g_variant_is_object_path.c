// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_is_object_path
static gboolean(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
gboolean g_variant_is_object_path (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_is_object_path()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_is_object_path");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_is_object_path. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_is_object_path() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_variant_is_object_path - arg0 (string)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_is_object_path - arg0 (string)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

