// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#include <stddef.h>
#undef getcchar
static int(*funcptr) (cchar_t * , wchar_t * , attr_t * , short * , void * ) = 0;

extern int __lsb_check_params;
int getcchar (cchar_t * arg0 , wchar_t * arg1 , attr_t * arg2 , short * arg3 , void * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getcchar()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getcchar");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getcchar. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getcchar() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "getcchar - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "getcchar - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "getcchar - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "getcchar - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "getcchar - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "getcchar - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "getcchar - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "getcchar - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "getcchar - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "getcchar - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

