#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef tcsetattr
static int(*funcptr) (int , int, const struct termios * ) = 0;

extern void __lsb_permit_ioctl();
extern void __lsb_forbid_ioctl();

int tcsetattr (int arg0 , int arg1, const struct termios * arg2 )
{
	int ret;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcsetattr");
	validate_NULL_TYPETYPE(arg0, "tcsetattr");
	validate_NULL_TYPETYPE(arg1, "tcsetattr");
	validate_NULL_TYPETYPE(arg2, "tcsetattr");
	__lsb_permit_ioctl();
	ret = funcptr(arg0, arg1,arg2);
	__lsb_forbid_ioctl();
	return ret;
}

int lsb_tcsetattr (int arg0 , int arg1, const struct termios * arg2 )
{
	int ret;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcsetattr");
	__lsb_permit_ioctl();
	ret = funcptr(arg0, arg1,arg2);
	__lsb_forbid_ioctl();
	return ret;
}

