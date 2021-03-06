// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcCharSetNextPage
static FcChar32(*funcptr) (const FcCharSet * , FcChar32 * , FcChar32 * ) = 0;

extern int __lsb_check_params;
FcChar32 FcCharSetNextPage (const FcCharSet * arg0 , FcChar32 * arg1 , FcChar32 * arg2 )
{
	int reset_flag = __lsb_check_params;
	FcChar32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcCharSetNextPage()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcCharSetNextPage");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcCharSetNextPage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcCharSetNextPage() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcCharSetNextPage - arg0 (a)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcCharSetNextPage - arg0 (a)");
		if( arg1 ) {
		validate_RWaddress( arg1, "FcCharSetNextPage - arg1 (map)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcCharSetNextPage - arg1 (map)");
		if( arg2 ) {
		validate_RWaddress( arg2, "FcCharSetNextPage - arg2 (next)");
		}
		validate_NULL_TYPETYPE(  arg2, "FcCharSetNextPage - arg2 (next)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

