// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(wordexp_t *) = 0;

void wordfree(wordexp_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wordfree");
	validate_NULL_TYPETYPE(arg0, "wordfree");
	return funcptr(arg0);
}

void lsb_wordfree(wordexp_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wordfree");
	return funcptr(arg0);
}

