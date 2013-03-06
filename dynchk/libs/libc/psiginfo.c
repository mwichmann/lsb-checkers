// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <signal.h>
#undef psiginfo
static void(*funcptr) (const siginfo_t * , const char * ) = 0;

extern int __lsb_check_params;
void psiginfo (const siginfo_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for psiginfo()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "psiginfo", "GLIBC_2.10");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load psiginfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "psiginfo() - validating");
		validate_Rdaddress( arg0, "psiginfo - arg0 (pinfo)");
		validate_NULL_TYPETYPE(  arg0, "psiginfo - arg0 (pinfo)");
		validate_Rdaddress( arg1, "psiginfo - arg1 (message)");
		validate_NULL_TYPETYPE(  arg1, "psiginfo - arg1 (message)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

