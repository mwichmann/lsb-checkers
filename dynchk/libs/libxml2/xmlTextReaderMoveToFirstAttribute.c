// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlreader.h>
#undef xmlTextReaderMoveToFirstAttribute
static int(*funcptr) (xmlTextReaderPtr ) = 0;

extern int __lsb_check_params;
int xmlTextReaderMoveToFirstAttribute (xmlTextReaderPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextReaderMoveToFirstAttribute()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextReaderMoveToFirstAttribute", "LIBXML2_2.5.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextReaderMoveToFirstAttribute. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextReaderMoveToFirstAttribute() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextReaderMoveToFirstAttribute - arg0 (reader)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

