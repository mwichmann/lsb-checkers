#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(const char *str, const char *, ...) = 0;

int sscanf(const char *str, const char *format, ...)
{	
	va_list args;
	va_start(args, format);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vsscanf");
	validate_Rdaddress(str, "sscanf-1");
	validate_Rdaddress(format, "sscanf-2");
	return funcptr(str, format, args);
}

int __lsb_sscanf(const char *str, const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vsscanf");
	return funcptr(str, format, args);
}
