#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

ssize_t read(int fd, void *buf, size_t count)
{
	static ssize_t(*funcptr)(int, void *, size_t) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "read");
	validate_filedescriptor(fd, "read");
	validate_RWaddress(buf, "read");
	return funcptr(fd, buf, count);
}

ssize_t lsb_read(int fd, void *buf, size_t count)
{
	static ssize_t(*funcptr)(int, void *, size_t) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "read");
	return funcptr(fd, buf, count);
}
