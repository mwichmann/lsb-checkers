#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(FILE *f, const char *, ...) = 0;

int fscanf(FILE *f, const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfscanf");
	return funcptr(f, format, args);
}

int __lsb_fscanf(FILE *f, const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfscanf");
	return funcptr(f, format, args);
}
