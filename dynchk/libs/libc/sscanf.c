// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#undef sscanf
static int (*funcptr)(const char *str, const char *, ...) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int sscanf(const char *str, const char *format, ...)
{	
	int reset_flag = __lsb_check_params;
	int ret_value  ;

	va_list args;
	va_start(args, format);
	
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vsscanf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
        	__lsb_output(5-__lsb_check_params, "setkey()");
		validate_Rdaddress(str, "sscanf-1");
		validate_Rdaddress(format, "sscanf-2");
	}

	ret_value = funcptr(str, format, args);
	__lsb_check_params = reset_flag;
	return ret_value;
}

