#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#undef fprintf 
static int (*funcptr)(FILE *f, const char *, ...) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int fprintf(FILE *f, const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	int reset_flag = __lsb_check_params;
	size_t ret_value;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfprintf");
	if(__lsb_check_params)
	{
		__lsb_check_params = 0;
        	__lsb_output(5-__lsb_check_params, "setkey()");
		// validate_stuff(?)
	}
	ret_value = funcptr(f, format, args);
	__lsb_check_params = reset_flag;
	return ret_value;
}

