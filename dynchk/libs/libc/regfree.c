// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)(regex_t *) = 0;

void regfree(regex_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regfree");
	validate_NULL_TYPETYPE(arg0, "regfree");
	funcptr(arg0);
}

void lsb_regfree(regex_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regfree");
	funcptr(arg0);
}

