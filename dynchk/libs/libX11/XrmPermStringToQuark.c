// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xresource.h>
#undef XrmPermStringToQuark
static XrmQuark(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
XrmQuark XrmPermStringToQuark (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	XrmQuark ret_value  ;
	__lsb_output(4, "Invoking wrapper for XrmPermStringToQuark()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmPermStringToQuark");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XrmPermStringToQuark. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XrmPermStringToQuark() - validating");
		validate_Rdaddress( arg0, "XrmPermStringToQuark - arg0");
		validate_NULL_TYPETYPE(  arg0, "XrmPermStringToQuark - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

