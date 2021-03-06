// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xresource.h>
#undef XrmQGetSearchResource
static int(*funcptr) (XrmSearchList , XrmName , XrmClass , XrmRepresentation * , XrmValue * ) = 0;

extern int __lsb_check_params;
int XrmQGetSearchResource (XrmSearchList arg0 , XrmName arg1 , XrmClass arg2 , XrmRepresentation * arg3 , XrmValue * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XrmQGetSearchResource()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmQGetSearchResource");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XrmQGetSearchResource. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XrmQGetSearchResource() - validating");
		validate_NULL_TYPETYPE(  arg0, "XrmQGetSearchResource - arg0");
		validate_NULL_TYPETYPE(  arg1, "XrmQGetSearchResource - arg1");
		validate_NULL_TYPETYPE(  arg2, "XrmQGetSearchResource - arg2");
		validate_RWaddress( arg3, "XrmQGetSearchResource - arg3");
		validate_NULL_TYPETYPE(  arg3, "XrmQGetSearchResource - arg3");
		validate_RWaddress( arg4, "XrmQGetSearchResource - arg4");
		validate_NULL_TYPETYPE(  arg4, "XrmQGetSearchResource - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

