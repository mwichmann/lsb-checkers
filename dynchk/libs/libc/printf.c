#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>
 
int printf(const char *format, ...)
{	
	va_list args;
	static ssize_t(*funcptr)(const char *, ...) = 0;
panic("printf called!!\n");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vprintf");
	validate_RWaddress(format, "printf");
	return funcptr(format, args);
}

int lsb_printf(const char *format, ...)
{	
	va_list args;
	static ssize_t(*funcptr)(const char *, ...) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vprintf");
	return funcptr(format, args);
}
