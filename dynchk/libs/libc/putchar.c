// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef putchar
static int(*funcptr) (int ) = 0;

int putchar (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putchar");
	validate_NULL_TYPETYPE(arg0, "putchar");
	return funcptr(arg0);
}

int lsb_putchar (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putchar");
	return funcptr(arg0);
}

