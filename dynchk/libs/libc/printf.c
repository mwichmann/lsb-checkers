#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(const char *, ...) = 0;

int printf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vprintf");
	validate_RWaddress(format, "printf");
	return funcptr(format, args);
}

int lsb_printf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vprintf");
	return funcptr(format, args);
}
