// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmcGetProperties
static int(*funcptr) (SmcConn , SmcPropReplyProc , SmPointer ) = 0;

extern int __lsb_check_params;
int SmcGetProperties (SmcConn arg0 , SmcPropReplyProc arg1 , SmPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcGetProperties");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmcGetProperties()");
		validate_NULL_TYPETYPE(  arg0, "SmcGetProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcGetProperties - arg1");
		validate_NULL_TYPETYPE(  arg2, "SmcGetProperties - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

