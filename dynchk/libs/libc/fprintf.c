#include "type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>
 
int fprintf(FILE *f, const char *format, ...)
{	
	va_list args;
	static ssize_t(*funcptr)(FILE *f, const char *, ...) = 0;
lsb_printf("fprintf called!!\n");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfprintf");
	return funcptr(f, format, args);
}

int lsb_fprintf(FILE *f, const char *format, ...)
{	
	va_list args;
	static ssize_t(*funcptr)(FILE *f, const char *, ...) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfprintf");
	return funcptr(f, format, args);
}
