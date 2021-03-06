// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/http.h>
#undef httpGetField
static const char *(*funcptr) (http_t * , http_field_t ) = 0;

extern int __lsb_check_params;
const char * httpGetField (http_t * arg0 , http_field_t arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for httpGetField()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpGetField");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpGetField. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpGetField() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "httpGetField - arg0 (http)");
		}
		validate_NULL_TYPETYPE(  arg0, "httpGetField - arg0 (http)");
		validate_NULL_TYPETYPE(  arg1, "httpGetField - arg1 (field)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

