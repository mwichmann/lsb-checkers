#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef tcgetattr
static int(*funcptr) (int , struct termios * ) = 0;

extern void __lsb_permit_ioctl();
extern void __lsb_forbid_ioctl();

int tcgetattr (int arg0 , struct termios * arg1 )
{
	int ret;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcgetattr");
	validate_NULL_TYPETYPE(arg0, "tcgetattr");
	validate_NULL_TYPETYPE(arg1, "tcgetattr");
	__lsb_permit_ioctl();
	ret = funcptr(arg0, arg1);
	__lsb_forbid_ioctl();
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

