// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcCharSetFirstPage
static FcChar32(*funcptr) (const FcCharSet * , FcChar32 * , FcChar32 * ) = 0;

extern int __lsb_check_params;
FcChar32 FcCharSetFirstPage (const FcCharSet * arg0 , FcChar32 * arg1 , FcChar32 * arg2 )
{
	int reset_flag = __lsb_check_params;
	FcChar32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcCharSetFirstPage()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcCharSetFirstPage");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcCharSetFirstPage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcCharSetFirstPage() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcCharSetFirstPage - arg0 (a)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcCharSetFirstPage - arg0 (a)");
		if( arg1 ) {
		validate_RWaddress( arg1, "FcCharSetFirstPage - arg1 (map)");
		}
		validate_NULL_TYPETYPE(  arg1, "FcCharSetFirstPage - arg1 (map)");
		if( arg2 ) {
		validate_RWaddress( arg2, "FcCharSetFirstPage - arg2 (next)");
		}
		validate_NULL_TYPETYPE(  arg2, "FcCharSetFirstPage - arg2 (next)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

