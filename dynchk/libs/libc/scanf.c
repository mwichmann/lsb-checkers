#include "type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(const char *, ...) = 0;

int scanf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vscanf");
	validate_RWaddress(format, "scanf");
	return funcptr(format, args);
}

int lsb_scanf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vscanf");
	return funcptr(format, args);
}
