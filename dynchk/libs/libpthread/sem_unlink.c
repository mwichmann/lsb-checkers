// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *) = 0;

int sem_unlink(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_unlink");
	validate_NULL_TYPETYPE(arg0, "sem_unlink");
	return funcptr(arg0);
}

int lsb_sem_unlink(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_unlink");
	return funcptr(arg0);
}

