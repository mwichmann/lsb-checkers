#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

int open(const char *pathname, int flags, mode_t mode)
{
	static int(*funcptr)(const char *, int, mode_t) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open");

	validate_pathname(pathname, "open");
	//validate_flags
	validate_filemode(mode, "open");
	
	return funcptr(pathname, flags, mode);
}

int lsb_open(const char *pathname, int flags, mode_t mode)
{
	static int(*funcptr)(const char *, int, mode_t) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open");

	return funcptr(pathname, flags, mode);
}

