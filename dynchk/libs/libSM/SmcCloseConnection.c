// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmcCloseConnection
static SmcCloseStatus(*funcptr) (SmcConn , int , char * * ) = 0;

extern int __lsb_check_params;
SmcCloseStatus SmcCloseConnection (SmcConn arg0 , int arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	SmcCloseStatus ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcCloseConnection");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "SmcCloseConnection()");
		validate_NULL_TYPETYPE(  arg0, "SmcCloseConnection - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcCloseConnection - arg1");
		validate_RWaddress( arg2, "SmcCloseConnection - arg2");
		validate_NULL_TYPETYPE(  arg2, "SmcCloseConnection - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

