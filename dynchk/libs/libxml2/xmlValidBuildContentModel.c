// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#undef xmlValidBuildContentModel
static int(*funcptr) (xmlValidCtxtPtr , xmlElementPtr ) = 0;

extern int __lsb_check_params;
int xmlValidBuildContentModel (xmlValidCtxtPtr arg0 , xmlElementPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidBuildContentModel()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidBuildContentModel", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidBuildContentModel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidBuildContentModel() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlValidBuildContentModel - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlValidBuildContentModel - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

