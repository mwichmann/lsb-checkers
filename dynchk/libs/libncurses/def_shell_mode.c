// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <curses.h>
#undef def_shell_mode
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int def_shell_mode ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "def_shell_mode");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "def_shell_mode()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

