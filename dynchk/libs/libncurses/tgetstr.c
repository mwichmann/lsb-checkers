// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <term.h>
#undef tgetstr
static char *(*funcptr) (char * , char * * ) = 0;

extern int __lsb_check_params;
char * tgetstr (char * arg0 , char * * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for tgetstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgetstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load tgetstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "tgetstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "tgetstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "tgetstr - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "tgetstr - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "tgetstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

