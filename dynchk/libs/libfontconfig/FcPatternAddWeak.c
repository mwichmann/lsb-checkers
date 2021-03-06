// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternAddWeak
static FcBool(*funcptr) (FcPattern * , const char * , FcValue , FcBool ) = 0;

extern int __lsb_check_params;
FcBool FcPatternAddWeak (FcPattern * arg0 , const char * arg1 , FcValue arg2 , FcBool arg3 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternAddWeak()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternAddWeak");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternAddWeak. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternAddWeak() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternAddWeak - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternAddWeak - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternAddWeak - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternAddWeak - arg1 (object)");
		validate_NULL_TYPETYPE(  arg2, "FcPatternAddWeak - arg2 (value)");
		validate_NULL_TYPETYPE(  arg3, "FcPatternAddWeak - arg3 (append)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

