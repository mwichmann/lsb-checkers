// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef LogLuv32fromXYZ
static uint32(*funcptr) (float * , int ) = 0;

extern int __lsb_check_params;
uint32 LogLuv32fromXYZ (float * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	uint32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for LogLuv32fromXYZ()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "LogLuv32fromXYZ");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load LogLuv32fromXYZ. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "LogLuv32fromXYZ() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "LogLuv32fromXYZ - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "LogLuv32fromXYZ - arg0");
		validate_NULL_TYPETYPE(  arg1, "LogLuv32fromXYZ - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

