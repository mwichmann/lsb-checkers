// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, const char *) = 0;

int tgetent(char * arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetent");
	validate_NULL_TYPETYPE(arg0, "tgetent");
	validate_NULL_TYPETYPE(arg1, "tgetent");
	return funcptr(arg0, arg1);
}

int lsb_tgetent(char * arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetent");
	return funcptr(arg0, arg1);
}

