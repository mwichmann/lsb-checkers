// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/SM/SMlib.h>
#undef SmcRequestSaveYourselfPhase2
static int(*funcptr) (SmcConn , SmcSaveYourselfPhase2Proc , SmPointer ) = 0;

extern int __lsb_check_params;
int SmcRequestSaveYourselfPhase2 (SmcConn arg0 , SmcSaveYourselfPhase2Proc arg1 , SmPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "SmcRequestSaveYourselfPhase2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmcRequestSaveYourselfPhase2()");
		validate_NULL_TYPETYPE(  arg0, "SmcRequestSaveYourselfPhase2 - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcRequestSaveYourselfPhase2 - arg1");
		validate_NULL_TYPETYPE(  arg2, "SmcRequestSaveYourselfPhase2 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

