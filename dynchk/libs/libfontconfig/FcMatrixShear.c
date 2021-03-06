// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcMatrixShear
static void(*funcptr) (FcMatrix * , double , double ) = 0;

extern int __lsb_check_params;
void FcMatrixShear (FcMatrix * arg0 , double arg1 , double arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcMatrixShear()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcMatrixShear");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcMatrixShear. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcMatrixShear() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcMatrixShear - arg0 (m)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcMatrixShear - arg0 (m)");
		validate_NULL_TYPETYPE(  arg1, "FcMatrixShear - arg1 (sh)");
		validate_NULL_TYPETYPE(  arg2, "FcMatrixShear - arg2 (sv)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

