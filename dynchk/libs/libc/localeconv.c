// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <locale.h>
#undef localeconv
static struct lconv *(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
struct lconv * localeconv ()
{
	int reset_flag = __lsb_check_params;
	struct lconv * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "localeconv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "localeconv()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

