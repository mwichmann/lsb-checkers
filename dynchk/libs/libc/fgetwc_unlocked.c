// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static wint_t(*funcptr)(FILE *) = 0;

wint_t fgetwc_unlocked(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetwc_unlocked");
	validate_NULL_TYPETYPE(arg0, "fgetwc_unlocked");
	return funcptr(arg0);
}

wint_t lsb_fgetwc_unlocked(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fgetwc_unlocked");
	return funcptr(arg0);
}

