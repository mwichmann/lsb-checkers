// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static speed_t(*funcptr)(const struct termios *) = 0;

speed_t cfgetispeed(const struct termios * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfgetispeed");
	validate_NULL_TYPETYPE(arg0, "cfgetispeed");
	return funcptr(arg0);
}

speed_t lsb_cfgetispeed(const struct termios * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfgetispeed");
	return funcptr(arg0);
}

