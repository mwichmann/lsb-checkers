// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>
#undef open64
static int(*funcptr)(const char *, int, mode_t) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int open64(const char *pathname, int flags, ...)
{
	va_list args;
	mode_t mode;

	va_start(args, flags);

	int reset_flag = __lsb_check_params;
	int ret_value  ;

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open64");

	if(__lsb_check_params)
	{
		__lsb_check_params=0;
        	__lsb_output(5-__lsb_check_params, "open64()");
		validate_pathname(pathname, "open64" );
		//validate_flags(flags, "open64");
		if( flags & O_CREAT )
		{
			mode = va_arg(args, mode_t);
			validate_filemode(mode, "open64");
		}
	}
	va_end(args);

	ret_value = funcptr(pathname, flags, mode);
	__lsb_check_params = reset_flag;
	return ret_value;
	
}
