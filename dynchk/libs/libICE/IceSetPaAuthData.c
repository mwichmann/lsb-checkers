// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/ICE/ICEutil.h>
#undef IceSetPaAuthData
static void(*funcptr) (int , IceAuthDataEntry * ) = 0;

extern int __lsb_check_params;
void IceSetPaAuthData (int arg0 , IceAuthDataEntry * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " IceSetPaAuthData ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "IceSetPaAuthData()");
		validate_NULL_TYPETYPE(  arg0, "IceSetPaAuthData - arg0");
		validate_RWaddress( arg1, "IceSetPaAuthData - arg1");
		validate_NULL_TYPETYPE(  arg1, "IceSetPaAuthData - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

