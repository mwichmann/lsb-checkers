// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static int(*funcptr)(int, const char *, mode_t, dev_t *) = 0;

int __xmknod(int arg0, const char * arg1, mode_t arg2, dev_t * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__xmknod");
	validate_filedescriptor(arg0, "__xmknod");
	validate_NULL_TYPETYPE(arg1, "__xmknod");
	validate_filemode(arg2, "__xmknod");
	validate_RWaddress(arg3, "__xmknod");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb___xmknod(int arg0, const char * arg1, mode_t arg2, dev_t * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__xmknod");
	return funcptr(arg0, arg1, arg2, arg3);
}

