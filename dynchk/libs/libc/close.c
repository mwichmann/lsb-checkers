#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>
 
int close(int fd)
{
	static int(*funcptr)(int) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "close");
	validate_filedescriptor(fd, "close");
	return funcptr(fd);
}

int lsb_close(int fd)
{
	static int(*funcptr)(int) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "close");
	return funcptr(fd);
}
