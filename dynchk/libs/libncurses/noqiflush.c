// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef noqiflush
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void noqiflush ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "noqiflush");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "noqiflush()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

