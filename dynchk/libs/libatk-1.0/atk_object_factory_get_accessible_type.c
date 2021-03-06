// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_object_factory_get_accessible_type
static GType(*funcptr) (AtkObjectFactory * ) = 0;

extern int __lsb_check_params;
GType atk_object_factory_get_accessible_type (AtkObjectFactory * arg0 )
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_object_factory_get_accessible_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_object_factory_get_accessible_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_object_factory_get_accessible_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_object_factory_get_accessible_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "atk_object_factory_get_accessible_type - arg0 (factory)");
		}
		validate_NULL_TYPETYPE(  arg0, "atk_object_factory_get_accessible_type - arg0 (factory)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

