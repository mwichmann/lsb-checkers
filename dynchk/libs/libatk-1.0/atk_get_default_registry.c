// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <atk-1.0/atk/atk.h>
#undef atk_get_default_registry
static AtkRegistry *(*funcptr) () = 0;

extern int __lsb_check_params;
AtkRegistry * atk_get_default_registry ()
{
	int reset_flag = __lsb_check_params;
	AtkRegistry * ret_value  ;
	__lsb_output(4, "Invoking wrapper for atk_get_default_registry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atk_get_default_registry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load atk_get_default_registry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atk_get_default_registry() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}
