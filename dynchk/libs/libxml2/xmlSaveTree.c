// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlsave.h>
#include <libxml2/libxml/tree.h>
#undef xmlSaveTree
static long int(*funcptr) (xmlSaveCtxtPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
long int xmlSaveTree (xmlSaveCtxtPtr arg0 , xmlNodePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	long int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSaveTree()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSaveTree", "LIBXML2_2.6.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSaveTree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSaveTree() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSaveTree - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlSaveTree - arg1 (node)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

