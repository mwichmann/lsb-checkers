// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef tcgetattr
static int(*funcptr) (int , struct termios * ) = 0;

extern void __lsb_permit_ioctl();
extern void __lsb_forbid_ioctl();

extern int __lsb_check_params;
int tcgetattr (int arg0 , struct termios * arg1 )
{
	int ret;
	int reset_flag = __lsb_check_params;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcgetattr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(arg0, "tcgetattr");
		validate_NULL_TYPETYPE(arg1, "tcgetattr");
	}
	__lsb_permit_ioctl();
	ret = funcptr(arg0, arg1);
	__lsb_forbid_ioctl();
	__lsb_check_params = reset_flag;
	return ret;
}

int __lsb_tcgetattr (int arg0 , struct termios * arg1 )
{
	int ret;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcgetattr");
	__lsb_permit_ioctl();
	ret = funcptr(arg0, arg1);
	__lsb_forbid_ioctl();
	return ret;
}

