// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
static int(*funcptr)(struct termios *, speed_t) = 0;

int cfsetospeed(struct termios * arg0, speed_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfsetospeed");
	validate_NULL_TYPETYPE(arg0, "cfsetospeed");
	validate_NULL_TYPETYPE(arg1, "cfsetospeed");
	return funcptr(arg0, arg1);
}

int lsb_cfsetospeed(struct termios * arg0, speed_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfsetospeed");
	return funcptr(arg0, arg1);
}

