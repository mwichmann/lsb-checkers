// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/http.h>
#undef httpHead
static int(*funcptr) (http_t * , const char * ) = 0;

extern int __lsb_check_params;
int httpHead (http_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for httpHead()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpHead");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpHead. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpHead() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "httpHead - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "httpHead - arg0 (http)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "httpHead - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "httpHead - arg1 (uri)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
