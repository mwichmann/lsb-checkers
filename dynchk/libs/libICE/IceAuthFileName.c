// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/ICE/ICEutil.h>
#undef IceAuthFileName
static char *(*funcptr) () = 0;

extern int __lsb_check_params;
char * IceAuthFileName ()
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " IceAuthFileName ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "IceAuthFileName()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

