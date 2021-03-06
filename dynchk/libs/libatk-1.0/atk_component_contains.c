// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#include <glib-2.0/glib.h>
#undef atk_component_contains
static gboolean(*funcptr) (AtkComponent * , gint , gint , AtkCoordType ) = 0;

extern int __lsb_check_params;
gboolean atk_component_contains (AtkComponent * arg0 , gint arg1 , gint arg2 , AtkCoordType arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_component_contains()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_component_contains");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_component_contains. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_component_contains() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_component_contains - arg0 (component)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_component_contains - arg0 (component)");
		validate_NULL_TYPETYPE(  arg1, "atk_component_contains - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "atk_component_contains - arg2 (y)");
		validate_NULL_TYPETYPE(  arg3, "atk_component_contains - arg3 (coord_type)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

