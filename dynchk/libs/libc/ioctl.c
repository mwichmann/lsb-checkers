#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(int, unsigned long, ...) = 0;

int ioctl(int fd, unsigned long request, ...)
{
	va_list arg;
	va_start(arg, request);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	validate_filedescriptor(fd, "ioctl");
	validate_ioctlreq(request, "ioctl");
	validate_RWaddress(arg, "ioctl");
	
	return funcptr(fd, request, arg);
}

int lsb_ioctl(int fd, unsigned long request, ...)
{
	va_list arg;
	va_start(arg, request);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	return funcptr(fd, request, arg);
}

