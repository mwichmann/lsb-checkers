// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/wchar.h>
#include <ncursesw/curses.h>
#undef getn_wstr
static int(*funcptr) (wint_t * , int ) = 0;

extern int __lsb_check_params;
int getn_wstr (wint_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getn_wstr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getn_wstr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getn_wstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getn_wstr() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "getn_wstr - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "getn_wstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "getn_wstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

