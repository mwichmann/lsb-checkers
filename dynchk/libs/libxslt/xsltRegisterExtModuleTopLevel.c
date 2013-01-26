// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/extensions.h>
#undef xsltRegisterExtModuleTopLevel
static int(*funcptr) (const unsigned char * , const unsigned char * , xsltTopLevelFunction ) = 0;

extern int __lsb_check_params;
int xsltRegisterExtModuleTopLevel (const unsigned char * arg0 , const unsigned char * arg1 , xsltTopLevelFunction arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltRegisterExtModuleTopLevel()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltRegisterExtModuleTopLevel", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltRegisterExtModuleTopLevel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltRegisterExtModuleTopLevel() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xsltRegisterExtModuleTopLevel - arg0 (name)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltRegisterExtModuleTopLevel - arg0 (name)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltRegisterExtModuleTopLevel - arg1 (URI)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltRegisterExtModuleTopLevel - arg1 (URI)");
		validate_NULL_TYPETYPE(  arg2, "xsltRegisterExtModuleTopLevel - arg2 (function)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
