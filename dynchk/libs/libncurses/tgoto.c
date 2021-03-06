// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <term.h>
#undef tgoto
static char *(*funcptr) (const char * , int , int ) = 0;

extern int __lsb_check_params;
char * tgoto (const char * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for tgoto()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgoto");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load tgoto. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "tgoto() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "tgoto - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "tgoto - arg0");
		validate_NULL_TYPETYPE(  arg1, "tgoto - arg1");
		validate_NULL_TYPETYPE(  arg2, "tgoto - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

