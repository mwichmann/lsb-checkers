#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(const char *, int, mode_t) = 0;

int open64(const char *pathname, int flags, mode_t mode)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open64");

	validate_pathname(pathname, "open64" );
	//validate_flags(flags, "open64");
	validate_filemode(mode, "open64");
		
	return funcptr(pathname, flags, mode);
}

int lsb_open64(const char *pathname, int flags, mode_t mode)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open64");
	return funcptr(pathname, flags, mode);
}
