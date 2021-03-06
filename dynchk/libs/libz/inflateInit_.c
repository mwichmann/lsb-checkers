// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef inflateInit_
static int(*funcptr) (z_streamp , const char * , int ) = 0;

extern int __lsb_check_params;
int inflateInit_ (z_streamp arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for inflateInit_()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateInit_");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load inflateInit_. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "inflateInit_() - validating");
		validate_NULL_TYPETYPE(  arg0, "inflateInit_ - arg0 (strm)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "inflateInit_ - arg1 (version)");
		}
		validate_NULL_TYPETYPE(  arg1, "inflateInit_ - arg1 (version)");
		validate_NULL_TYPETYPE(  arg2, "inflateInit_ - arg2 (stream_size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

