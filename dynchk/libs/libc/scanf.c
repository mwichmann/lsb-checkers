// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(const char *, ...) = 0;

extern int __lsb_check_params;
int scanf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);
	int reset_flag = __lsb_check_params;
	int ret_value;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vscanf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;	
		validate_RWaddress(format, "scanf");
	}
	ret_value = funcptr(format, args);
	__lsb_check_params = reset_flag;
	return ret_value;
}
