// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <libintl.h>
#undef ngettext
static char *(*funcptr) (const char * , const char * , unsigned long ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * ngettext (const char * arg0 , const char * arg1 , unsigned long arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ngettext");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "ngettext()");
	validate_Rdaddress( arg0, "ngettext - arg0");
		validate_NULL_TYPETYPE(  arg0, "ngettext - arg0");
	validate_Rdaddress( arg1, "ngettext - arg1");
		validate_NULL_TYPETYPE(  arg1, "ngettext - arg1");
		validate_NULL_TYPETYPE(  arg2, "ngettext - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

