// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#undef xmlCopyDoc
static xmlDocPtr(*funcptr) (xmlDocPtr , int ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlCopyDoc (xmlDocPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlCopyDoc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCopyDoc", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCopyDoc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCopyDoc() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlCopyDoc - arg0 (doc)");
		validate_NULL_TYPETYPE(  arg1, "xmlCopyDoc - arg1 (recursive)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

