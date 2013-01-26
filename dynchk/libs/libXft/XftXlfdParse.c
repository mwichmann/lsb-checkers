// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#include <X11/Xft/Xft.h>
#undef XftXlfdParse
static FcPattern *(*funcptr) (const char * , FcBool , FcBool ) = 0;

extern int __lsb_check_params;
FcPattern * XftXlfdParse (const char * arg0 , FcBool arg1 , FcBool arg2 )
{
	int reset_flag = __lsb_check_params;
	FcPattern * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftXlfdParse()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftXlfdParse");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftXlfdParse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftXlfdParse() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "XftXlfdParse - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftXlfdParse - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftXlfdParse - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftXlfdParse - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
