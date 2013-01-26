// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#include <stdarg.h>
#undef FcPatternVaBuild
static FcPattern *(*funcptr) (FcPattern * , va_list ) = 0;

extern int __lsb_check_params;
FcPattern * FcPatternVaBuild (FcPattern * arg0 , va_list arg1 )
{
	int reset_flag = __lsb_check_params;
	FcPattern * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcPatternVaBuild()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcPatternVaBuild");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcPatternVaBuild. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcPatternVaBuild() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcPatternVaBuild - arg0 (orig)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcPatternVaBuild - arg0 (orig)");
		validate_NULL_TYPETYPE(  arg1, "FcPatternVaBuild - arg1 (va)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
