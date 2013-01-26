// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <unistd.h>
#undef readlinkat
static ssize_t(*funcptr) (int , const char * , char * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t readlinkat (int arg0 , const char * arg1 , char * arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for readlinkat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "readlinkat", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load readlinkat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "readlinkat() - validating");
		validate_NULL_TYPETYPE(  arg0, "readlinkat - arg0 (__fd)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "readlinkat - arg1 (__path)");
		}
		validate_NULL_TYPETYPE(  arg1, "readlinkat - arg1 (__path)");
		if( arg2 ) {
		validate_RWaddress( arg2, "readlinkat - arg2 (__buf)");
		}
		validate_NULL_TYPETYPE(  arg2, "readlinkat - arg2 (__buf)");
		validate_NULL_TYPETYPE(  arg3, "readlinkat - arg3 (__len)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
