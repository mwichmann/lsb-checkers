#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
 
static int (*funcptr)(FILE *f, const char *, ...) = 0;

extern int __lsb_check_params;
int fscanf(FILE *f, const char *format, ...)
{	
	va_list args;
	int reset_flag = __lsb_check_params;
	int ret_value;
	va_start(args, format);
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfscanf");
	if(__lsb_check_params)
	{
		__lsb_check_params = 0;
		__lsb_output(5-reset_flag, "fscanf()");
	}
	ret_value = funcptr(f, format, args);
	__lsb_check_params = reset_flag;
	return ret_value;
}

