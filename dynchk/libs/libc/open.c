#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(const char *, int, mode_t) = 0;

int open(const char *pathname, int flags, ...)
{
	va_list args;
	mode_t mode;

	va_start(args, flags);
	va_copy(args,mode);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open");

	validate_pathname(pathname, "open");
	//validate_flags
	if( flags & O_CREAT )
		validate_filemode(mode, "open");

	va_end(args);
	
	return funcptr(pathname, flags, mode);
}

int lsb_open(const char *pathname, int flags, mode_t mode)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open");

	return funcptr(pathname, flags, mode);
}

