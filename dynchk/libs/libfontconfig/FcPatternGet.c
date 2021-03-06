// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternGet
static FcResult(*funcptr) (const FcPattern * , const char * , int , FcValue * ) = 0;

extern int __lsb_check_params;
FcResult FcPatternGet (const FcPattern * arg0 , const char * arg1 , int arg2 , FcValue * arg3 )
{
	int reset_flag = __lsb_check_params;
	FcResult ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternGet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternGet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternGet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternGet() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcPatternGet - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternGet - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternGet - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternGet - arg1 (object)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternGet - arg2 (id)");
		if( arg3 ) {
		validate_RWaddress( arg3, "FcPatternGet - arg3 (v)");
		}
		validate_NULL_TYPETYPE(  arg3, "FcPatternGet - arg3 (v)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

