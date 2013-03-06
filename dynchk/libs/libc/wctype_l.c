// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <locale.h>
#include <wctype.h>
#undef wctype_l
static size_t(*funcptr) (const char * , locale_t ) = 0;

extern int __lsb_check_params;
size_t wctype_l (const char * arg0 , locale_t arg1 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for wctype_l()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "wctype_l", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wctype_l. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wctype_l() - validating");
		validate_Rdaddress( arg0, "wctype_l - arg0 (property)");
		validate_NULL_TYPETYPE(  arg0, "wctype_l - arg0 (property)");
		validate_NULL_TYPETYPE(  arg1, "wctype_l - arg1 (locale)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

