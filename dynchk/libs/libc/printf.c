#include "type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(const char *, ...) = 0;

int printf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);

lsb_printf("printf called!! funcptr=%p\n",funcptr);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vprintf");
	validate_RWaddress(format, "printf");
lsb_printf("printf calling %p\n",funcptr);
	return funcptr(format, args);
}

int lsb_printf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	//static int (*funcptr)(const char *, ...) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vprintf");
	return funcptr(format, args);
}
