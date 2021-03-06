// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/globals.h>
#undef xmlThrDefParserInputBufferCreateFilenameDefault
static xmlParserInputBufferCreateFilenameFunc(*funcptr) (xmlParserInputBufferCreateFilenameFunc ) = 0;

extern int __lsb_check_params;
xmlParserInputBufferCreateFilenameFunc xmlThrDefParserInputBufferCreateFilenameDefault (xmlParserInputBufferCreateFilenameFunc arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlParserInputBufferCreateFilenameFunc ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlThrDefParserInputBufferCreateFilenameDefault()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlThrDefParserInputBufferCreateFilenameDefault", "LIBXML2_2.6.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlThrDefParserInputBufferCreateFilenameDefault. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlThrDefParserInputBufferCreateFilenameDefault() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlThrDefParserInputBufferCreateFilenameDefault - arg0 (func)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

