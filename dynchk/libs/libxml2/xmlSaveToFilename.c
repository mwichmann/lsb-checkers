// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlsave.h>
#undef xmlSaveToFilename
static xmlSaveCtxtPtr(*funcptr) (const char * , const char * , int ) = 0;

extern int __lsb_check_params;
xmlSaveCtxtPtr xmlSaveToFilename (const char * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlSaveCtxtPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSaveToFilename()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSaveToFilename", "LIBXML2_2.6.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSaveToFilename. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSaveToFilename() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlSaveToFilename - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlSaveToFilename - arg0 (filename)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlSaveToFilename - arg1 (encoding)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlSaveToFilename - arg1 (encoding)");
		validate_NULL_TYPETYPE(  arg2, "xmlSaveToFilename - arg2 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

