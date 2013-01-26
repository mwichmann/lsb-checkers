// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_weak_ref_clear
static void(*funcptr) (struct GWeakRef * ) = 0;

extern int __lsb_check_params;
void g_weak_ref_clear (struct GWeakRef * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_weak_ref_clear()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_weak_ref_clear");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_weak_ref_clear. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_weak_ref_clear() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_weak_ref_clear - arg0 (weak_ref)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_weak_ref_clear - arg0 (weak_ref)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
