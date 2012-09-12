// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/templates.h>
#undef xsltAttrListTemplateProcess
static xmlAttrPtr(*funcptr) (xsltTransformContextPtr , xmlNode * , xmlAttrPtr ) = 0;

extern int __lsb_check_params;
xmlAttrPtr xsltAttrListTemplateProcess (xsltTransformContextPtr arg0 , xmlNode * arg1 , xmlAttrPtr arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlAttrPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltAttrListTemplateProcess()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltAttrListTemplateProcess", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltAttrListTemplateProcess. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltAttrListTemplateProcess() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltAttrListTemplateProcess - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xsltAttrListTemplateProcess - arg1 (target)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltAttrListTemplateProcess - arg1 (target)");
		validate_NULL_TYPETYPE(  arg2, "xsltAttrListTemplateProcess - arg2 (cur)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

