// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ncursesw/curses.h>
#include <wctype.h>
#undef mvwget_wstr
static int(*funcptr) (WINDOW * , int , int , wint_t * ) = 0;

extern int __lsb_check_params;
int mvwget_wstr (WINDOW * arg0 , int arg1 , int arg2 , wint_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvwget_wstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwget_wstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvwget_wstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvwget_wstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "mvwget_wstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mvwget_wstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwget_wstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwget_wstr - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "mvwget_wstr - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "mvwget_wstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

