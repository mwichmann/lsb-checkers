// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static pid_t(*funcptr)(int *, int, struct rusage *) = 0;

pid_t wait3(int * arg0, int arg1, struct rusage * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wait3");
	validate_NULL_TYPETYPE(arg0, "wait3");
	validate_NULL_TYPETYPE(arg1, "wait3");
	validate_NULL_TYPETYPE(arg2, "wait3");
	return funcptr(arg0, arg1, arg2);
}

pid_t lsb_wait3(int * arg0, int arg1, struct rusage * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wait3");
	return funcptr(arg0, arg1, arg2);
}

