// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XParseGeometry
static int(*funcptr) (const char * , int * , int * , unsigned int * , unsigned int * ) = 0;

extern int __lsb_check_params;
int XParseGeometry (const char * arg0 , int * arg1 , int * arg2 , unsigned int * arg3 , unsigned int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XParseGeometry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XParseGeometry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XParseGeometry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XParseGeometry() - validating");
		validate_Rdaddress( arg0, "XParseGeometry - arg0");
		validate_NULL_TYPETYPE(  arg0, "XParseGeometry - arg0");
		validate_RWaddress( arg1, "XParseGeometry - arg1");
		validate_NULL_TYPETYPE(  arg1, "XParseGeometry - arg1");
		validate_RWaddress( arg2, "XParseGeometry - arg2");
		validate_NULL_TYPETYPE(  arg2, "XParseGeometry - arg2");
		validate_RWaddress( arg3, "XParseGeometry - arg3");
		validate_NULL_TYPETYPE(  arg3, "XParseGeometry - arg3");
		validate_RWaddress( arg4, "XParseGeometry - arg4");
		validate_NULL_TYPETYPE(  arg4, "XParseGeometry - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

