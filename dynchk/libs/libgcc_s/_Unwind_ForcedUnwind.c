// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_ForcedUnwind
static _Unwind_Ptr(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
_Unwind_Ptr _Unwind_ForcedUnwind ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Ptr ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_Unwind_ForcedUnwind");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "_Unwind_ForcedUnwind()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

