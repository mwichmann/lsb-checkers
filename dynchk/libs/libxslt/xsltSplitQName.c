// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/dict.h>
#include <libxslt/xsltutils.h>
#undef xsltSplitQName
static const unsigned char *(*funcptr) (xmlDictPtr , const unsigned char * , const unsigned char * * ) = 0;

extern int __lsb_check_params;
const unsigned char * xsltSplitQName (xmlDictPtr arg0 , const unsigned char * arg1 , const unsigned char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	const unsigned char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltSplitQName()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltSplitQName", "LIBXML2_1.1.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSplitQName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSplitQName() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltSplitQName - arg0 (dict)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltSplitQName - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltSplitQName - arg1 (name)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltSplitQName - arg2 (prefix)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltSplitQName - arg2 (prefix)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

