// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)(int, const char *) = 0;

void psignal(int arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "psignal");
	validate_NULL_TYPETYPE(arg0, "psignal");
	validate_NULL_TYPETYPE(arg1, "psignal");
	funcptr(arg0, arg1);
}

void lsb_psignal(int arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "psignal");
	funcptr(arg0, arg1);
}

