// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(const char *, int, mode_t) = 0;

extern int __lsb_check_params;
int open(const char *pathname, int flags, ...)
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;

	va_list args;
	mode_t mode;

	va_start(args, flags);
	mode = va_arg(args,mode_t);

	if(!funcptr)
	    funcptr = lsb_dlvsym(RTLD_NEXT, "open", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
        	__lsb_output(4, "open()");

		validate_pathname_flags(pathname, flags, "open");
		//validate_flags
		if( flags & O_CREAT )
		{
			validate_filemode(mode, "open");
		}
	}

	va_end(args);

	ret_value = funcptr(pathname, flags, mode);
	__lsb_check_params = reset_flag;
	return ret_value;
}

