// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcPatternDel
static FcBool(*funcptr) (FcPattern * , const char * ) = 0;

extern int __lsb_check_params;
FcBool FcPatternDel (FcPattern * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternDel()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternDel");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternDel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternDel() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternDel - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternDel - arg0 (p)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FcPatternDel - arg1 (object)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcPatternDel - arg1 (object)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

