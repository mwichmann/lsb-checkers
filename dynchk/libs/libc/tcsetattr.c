// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef tcsetattr
static int(*funcptr) (int , int, const struct termios * ) = 0;

extern void __lsb_permit_ioctl();
extern void __lsb_forbid_ioctl();

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int tcsetattr (int arg0 , int arg1, const struct termios * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcsetattr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
        	__lsb_output(5-__lsb_check_params, "setkey()");
		validate_NULL_TYPETYPE(arg0, "tcsetattr");
		validate_NULL_TYPETYPE(arg1, "tcsetattr");
		validate_NULL_TYPETYPE(arg2, "tcsetattr");
	}
	__lsb_permit_ioctl();
	ret_value = funcptr(arg0, arg1,arg2);
	__lsb_forbid_ioctl();
	return ret_value;
}

