// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_source_set_can_recurse
static void(*funcptr) (GSource * , gboolean ) = 0;

extern int __lsb_check_params;
void g_source_set_can_recurse (GSource * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_source_set_can_recurse()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_source_set_can_recurse");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_source_set_can_recurse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_source_set_can_recurse() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_source_set_can_recurse - arg0 (source)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_source_set_can_recurse - arg0 (source)");
		validate_NULL_TYPETYPE(  arg1, "g_source_set_can_recurse - arg1 (can_recurse)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

