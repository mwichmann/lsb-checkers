// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

int login_tty(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "login_tty");
	validate_NULL_TYPETYPE(arg0, "login_tty");
	return funcptr(arg0);
}

int lsb_login_tty(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "login_tty");
	return funcptr(arg0);
}

