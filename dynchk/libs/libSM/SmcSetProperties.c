// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmcSetProperties
static void(*funcptr) (SmcConn , int , SmProp * * ) = 0;

extern int __lsb_check_params;
void SmcSetProperties (SmcConn arg0 , int arg1 , SmProp * * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcSetProperties");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmcSetProperties()");
		validate_NULL_TYPETYPE(  arg0, "SmcSetProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcSetProperties - arg1");
		validate_RWaddress( arg2, "SmcSetProperties - arg2");
		validate_NULL_TYPETYPE(  arg2, "SmcSetProperties - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

