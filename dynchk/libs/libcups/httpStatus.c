// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cups/cups.h>
#include <cups/http.h>
#undef httpStatus
static const char *(*funcptr) (http_status_t ) = 0;

extern int __lsb_check_params;
const char * httpStatus (http_status_t arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for httpStatus()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "httpStatus");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load httpStatus. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "httpStatus() - validating");
		validate_NULL_TYPETYPE(  arg0, "httpStatus - arg0 (status)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

