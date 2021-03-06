// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#undef SmcInteractRequest
static int(*funcptr) (SmcConn , int , SmcInteractProc , SmPointer ) = 0;

extern int __lsb_check_params;
int SmcInteractRequest (SmcConn arg0 , int arg1 , SmcInteractProc arg2 , SmPointer arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for SmcInteractRequest()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcInteractRequest");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmcInteractRequest. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmcInteractRequest() - validating");
		validate_NULL_TYPETYPE(  arg0, "SmcInteractRequest - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcInteractRequest - arg1");
		validate_NULL_TYPETYPE(  arg2, "SmcInteractRequest - arg2");
		validate_NULL_TYPETYPE(  arg3, "SmcInteractRequest - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

