// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef pair_content
static int(*funcptr) (short , short * , short * ) = 0;

extern int __lsb_check_params;
int pair_content (short arg0 , short * arg1 , short * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pair_content");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pair_content()");
		validate_NULL_TYPETYPE(  arg0, "pair_content - arg0");
		validate_RWaddress( arg1, "pair_content - arg1");
		validate_NULL_TYPETYPE(  arg1, "pair_content - arg1");
		validate_RWaddress( arg2, "pair_content - arg2");
		validate_NULL_TYPETYPE(  arg2, "pair_content - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

