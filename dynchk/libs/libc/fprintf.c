#include "type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(FILE *f, const char *, ...) = 0;

int fprintf(FILE *f, const char *format, ...)
{	
	va_list args;
	va_start(args, format);
lsb_printf("fprintf called!! funcptr=%p\n",funcptr);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfprintf");
lsb_printf("fprintf calling %p!!\n",funcptr);
	return funcptr(f, format, args);
}

int lsb_fprintf(FILE *f, const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	//static int (*funcptr)(FILE *f, const char *, ...) = 0;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfprintf");
	return funcptr(f, format, args);
}
