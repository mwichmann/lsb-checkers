// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmcRelease
static char *(*funcptr) (SmcConn ) = 0;

extern int __lsb_check_params;
char * SmcRelease (SmcConn arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcRelease");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmcRelease()");
		validate_NULL_TYPETYPE(  arg0, "SmcRelease - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

