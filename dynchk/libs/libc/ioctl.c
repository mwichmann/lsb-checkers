// Maintained by hand (Stuart Anderson, Matt Elder)

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
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

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int ioctl(int fd, unsigned long request, ...)
{
	int reset_flag = __lsb_check_params;
	int ret_value;
	void *argp;
	
	va_list arg;
	va_start(arg, request);
	argp=va_arg(arg,void *);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ioctl");

	if( ioctlok)
	{
		if(__lsb_check_params)
		{
        		__lsb_output(5-reset_flag, "ioctl()");
			__lsb_check_params=0;
			validate_filedescriptor(fd, "ioctl");
			validate_ioctlreq(request, "ioctl");
			validate_RWaddress(argp, "ioctl");
		}
	}
	ret_value = funcptr(fd, request, argp);
	__lsb_check_params = reset_flag;
	return ret_value;
}


