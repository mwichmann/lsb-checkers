// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_builder_close
static void(*funcptr) (GVariantBuilder * ) = 0;

extern int __lsb_check_params;
void g_variant_builder_close (GVariantBuilder * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_variant_builder_close()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_builder_close");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_builder_close. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_builder_close() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_variant_builder_close - arg0 (builder)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_builder_close - arg0 (builder)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

