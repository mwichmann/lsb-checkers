// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static off_t(*funcptr)(int, off_t, int) = 0;

off_t lseek(int arg0, off_t arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lseek");
	validate_NULL_TYPETYPE(arg0, "lseek");
	validate_NULL_TYPETYPE(arg1, "lseek");
	validate_NULL_TYPETYPE(arg2, "lseek");
	return funcptr(arg0, arg1, arg2);
}

off_t lsb_lseek(int arg0, off_t arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lseek");
	return funcptr(arg0, arg1, arg2);
}

