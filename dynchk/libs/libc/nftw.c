// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <ftw.h>
static int(*funcptr)(char *, __nftw_func_t, int, int) = 0;

int nftw(char * arg0, __nftw_func_t arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nftw");
	validate_NULL_TYPETYPE(arg0, "nftw");
	validate_NULL_TYPETYPE(arg1, "nftw");
	validate_NULL_TYPETYPE(arg2, "nftw");
	validate_NULL_TYPETYPE(arg3, "nftw");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_nftw(char * arg0, __nftw_func_t arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nftw");
	return funcptr(arg0, arg1, arg2, arg3);
}

