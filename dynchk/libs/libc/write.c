#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>
 
ssize_t write(int fd, const void *buf, size_t count)
{	
	static ssize_t(*funcptr)(int, const void *, size_t) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "write");
	validate_filedescriptor(fd, "write");
	validate_RWaddress(buf, "write");
	return funcptr(fd, buf, count);
}

ssize_t lsb_write(int fd, const void *buf, size_t count)
{	
	static ssize_t(*funcptr)(int, const void *, size_t) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "write");
	return funcptr(fd, buf, count);
}
