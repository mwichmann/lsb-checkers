// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <term.h>
#undef tgoto
static char *(*funcptr) (const char * , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * tgoto (const char * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgoto");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "tgoto()");
	validate_Rdaddress( arg0, "tgoto - arg0");
		validate_NULL_TYPETYPE(  arg0, "tgoto - arg0");
		validate_NULL_TYPETYPE(  arg1, "tgoto - arg1");
		validate_NULL_TYPETYPE(  arg2, "tgoto - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

