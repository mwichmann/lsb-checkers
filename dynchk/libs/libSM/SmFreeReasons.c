// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#undef SmFreeReasons
static void(*funcptr) (int , char * * ) = 0;

extern int __lsb_check_params;
void SmFreeReasons (int arg0 , char * * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for SmFreeReasons()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmFreeReasons");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmFreeReasons. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmFreeReasons() - validating");
		validate_NULL_TYPETYPE(  arg0, "SmFreeReasons - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "SmFreeReasons - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "SmFreeReasons - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

