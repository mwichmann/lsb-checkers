// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <libintl.h>
#undef dngettext
static char *(*funcptr) (const char * , const char * , const char * , unsigned long ) = 0;

extern int __lsb_check_params;
char * dngettext (const char * arg0 , const char * arg1 , const char * arg2 , unsigned long arg3 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dngettext");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "dngettext()");
		validate_Rdaddress( arg0, "dngettext - arg0");
		validate_NULL_TYPETYPE(  arg0, "dngettext - arg0");
		validate_Rdaddress( arg1, "dngettext - arg1");
		validate_NULL_TYPETYPE(  arg1, "dngettext - arg1");
		validate_Rdaddress( arg2, "dngettext - arg2");
		validate_NULL_TYPETYPE(  arg2, "dngettext - arg2");
		validate_NULL_TYPETYPE(  arg3, "dngettext - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

