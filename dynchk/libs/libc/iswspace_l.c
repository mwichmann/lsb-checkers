// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/wchar.h>
#include <locale.h>
#include <wctype.h>
#undef iswspace_l
static int(*funcptr) (wint_t , locale_t ) = 0;

extern int __lsb_check_params;
int iswspace_l (wint_t arg0 , locale_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for iswspace_l()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "iswspace_l", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load iswspace_l. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "iswspace_l() - validating");
		validate_NULL_TYPETYPE(  arg0, "iswspace_l - arg0 (wc)");
		validate_NULL_TYPETYPE(  arg1, "iswspace_l - arg1 (locale)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

