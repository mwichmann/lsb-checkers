// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternAddBool
static FcBool(*funcptr) (FcPattern * , const char * , FcBool ) = 0;

extern int __lsb_check_params;
FcBool FcPatternAddBool (FcPattern * arg0 , const char * arg1 , FcBool arg2 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternAddBool()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternAddBool");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternAddBool. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternAddBool() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternAddBool - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternAddBool - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternAddBool - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternAddBool - arg1 (object)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternAddBool - arg2 (b)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

