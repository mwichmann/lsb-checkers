// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/io.h>
#undef ioperm
static int(*funcptr) (unsigned long int , unsigned long int , int ) = 0;

extern int __lsb_check_params;
int ioperm (unsigned long int arg0 , unsigned long int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for ioperm()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "ioperm", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "ioperm", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "ioperm", "GLIBC_2.2.5");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load ioperm. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ioperm() - validating");
		validate_NULL_TYPETYPE(  arg0, "ioperm - arg0 (from)");
		validate_NULL_TYPETYPE(  arg1, "ioperm - arg1 (num)");
		validate_NULL_TYPETYPE(  arg2, "ioperm - arg2 (turn_on)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

