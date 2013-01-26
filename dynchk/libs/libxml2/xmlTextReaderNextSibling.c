// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlreader.h>
#undef xmlTextReaderNextSibling
static int(*funcptr) (xmlTextReaderPtr ) = 0;

extern int __lsb_check_params;
int xmlTextReaderNextSibling (xmlTextReaderPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextReaderNextSibling()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextReaderNextSibling", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextReaderNextSibling. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextReaderNextSibling() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextReaderNextSibling - arg0 (reader)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
