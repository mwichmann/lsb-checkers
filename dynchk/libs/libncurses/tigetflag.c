// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <term.h>
#undef tigetflag
static int(*funcptr) (char * ) = 0;

extern int __lsb_check_params;
int tigetflag (char * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tigetflag");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "tigetflag()");
		validate_RWaddress( arg0, "tigetflag - arg0");
		validate_NULL_TYPETYPE(  arg0, "tigetflag - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

