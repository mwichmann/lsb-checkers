#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(int, int, const void *) = 0;

int ioctl(int fd, int request, const void *arg)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	validate_filedescriptor(fd, "ioctl");
	validate_ioctlreq(request, "ioctl");
	validate_RWaddress(arg, "ioctl");
	
	return funcptr(fd, request, arg);
}

int lsb_ioctl(int fd, int flags, int request, const void *arg)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	return funcptr(fd, request, arg);
}

