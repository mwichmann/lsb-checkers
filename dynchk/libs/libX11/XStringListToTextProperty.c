// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xutil.h>
#undef XStringListToTextProperty
static int(*funcptr) (char * * , int , XTextProperty * ) = 0;

extern int __lsb_check_params;
int XStringListToTextProperty (char * * arg0 , int arg1 , XTextProperty * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XStringListToTextProperty()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XStringListToTextProperty");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XStringListToTextProperty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XStringListToTextProperty() - validating");
		validate_RWaddress( arg0, "XStringListToTextProperty - arg0");
		validate_NULL_TYPETYPE(  arg0, "XStringListToTextProperty - arg0");
		validate_NULL_TYPETYPE(  arg1, "XStringListToTextProperty - arg1");
		validate_RWaddress( arg2, "XStringListToTextProperty - arg2");
		validate_NULL_TYPETYPE(  arg2, "XStringListToTextProperty - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

