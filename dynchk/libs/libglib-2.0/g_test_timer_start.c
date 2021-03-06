// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_test_timer_start
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void g_test_timer_start ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_test_timer_start()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_test_timer_start");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_test_timer_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_test_timer_start() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

