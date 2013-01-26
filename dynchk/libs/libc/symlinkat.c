// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <unistd.h>
#undef symlinkat
static int(*funcptr) (const char * , int , const char * ) = 0;

extern int __lsb_check_params;
int symlinkat (const char * arg0 , int arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for symlinkat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "symlinkat", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load symlinkat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "symlinkat() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "symlinkat - arg0 (__from)");
		}
		validate_NULL_TYPETYPE(  arg0, "symlinkat - arg0 (__from)");
		validate_NULL_TYPETYPE(  arg1, "symlinkat - arg1 (__tofd)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "symlinkat - arg2 (__to)");
		}
		validate_NULL_TYPETYPE(  arg2, "symlinkat - arg2 (__to)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
