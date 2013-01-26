// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo-pdf.h>
#undef cairo_pdf_version_to_string
static const char *(*funcptr) (cairo_pdf_version_t ) = 0;

extern int __lsb_check_params;
const char * cairo_pdf_version_to_string (cairo_pdf_version_t arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_pdf_version_to_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_pdf_version_to_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_pdf_version_to_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_pdf_version_to_string() - validating");
		validate_NULL_TYPETYPE(  arg0, "cairo_pdf_version_to_string - arg0 (version)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
