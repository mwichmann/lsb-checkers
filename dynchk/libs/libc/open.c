// Maintained by hand (Matt Elder, Stuart Anderson)

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <unistd.h>

static int(*funcptr)(const char *, int, mode_t) = 0;

int open(const char *pathname, int flags, ...)
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;

	va_list args;
	mode_t mode;

	va_start(args, flags);
	va_copy(args,mode);

	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "open");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;

		validate_pathname(pathname, "open");
		//validate_flags
		if( flags & O_CREAT )
			validate_filemode(mode, "open");
	}

	va_end(args);

	ret_value = funcptr(pathname, flags, mode);
	__lsb_check_params = reset_flag;
	return ret_value;
}

