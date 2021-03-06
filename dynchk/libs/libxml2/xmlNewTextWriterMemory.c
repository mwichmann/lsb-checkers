// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlwriter.h>
#undef xmlNewTextWriterMemory
static xmlTextWriterPtr(*funcptr) (xmlBufferPtr , int ) = 0;

extern int __lsb_check_params;
xmlTextWriterPtr xmlNewTextWriterMemory (xmlBufferPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlTextWriterPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewTextWriterMemory()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewTextWriterMemory", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewTextWriterMemory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewTextWriterMemory() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNewTextWriterMemory - arg0 (buf)");
		validate_NULL_TYPETYPE(  arg1, "xmlNewTextWriterMemory - arg1 (compression)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

