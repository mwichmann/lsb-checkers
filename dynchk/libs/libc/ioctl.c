#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(int, unsigned long, ...) = 0;

/*
 * As long as an ioctl is hidden behind an LSB interface, it's OK for it
 * to be used. It's just an implementation detail. We need a way for an LSB
 * interface to let us know that it will be using ioctl() internally, and that
 * we shouldn't complain about it.
 */
static ioctlok=0;

void __lsb_permit_ioctl()
{
ioctlok=1;
}

void __lsb_forbid_ioctl()
{
ioctlok=0;
}

int ioctl(int fd, unsigned long request, ...)
{
	va_list arg;
	va_start(arg, request);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	if( ioctlok) {
		validate_filedescriptor(fd, "ioctl");
		validate_ioctlreq(request, "ioctl");
		validate_RWaddress(arg, "ioctl");
		}
	
	return funcptr(fd, request, arg);
}

int __lsb_ioctl(int fd, unsigned long request, ...)
{
	va_list arg;
	va_start(arg, request);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	return funcptr(fd, request, arg);
}

