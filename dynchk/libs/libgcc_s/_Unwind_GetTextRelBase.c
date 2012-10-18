// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <unwind.h>
#undef _Unwind_GetTextRelBase
static _Unwind_Ptr(*funcptr) (struct _Unwind_Context * ) = 0;

extern int __lsb_check_params;
_Unwind_Ptr _Unwind_GetTextRelBase (struct _Unwind_Context * arg0 )
{
	int reset_flag = __lsb_check_params;
	_Unwind_Ptr ret_value  ;
	__lsb_output(4, "Invoking wrapper for _Unwind_GetTextRelBase()");
	if(!funcptr)
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "_Unwind_GetTextRelBase", "GCC_3.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "_Unwind_GetTextRelBase", "GCC_3.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "_Unwind_GetTextRelBase", "GCC_3.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "_Unwind_GetTextRelBase", "GCC_3.0");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "_Unwind_GetTextRelBase", "GCC_3.0");
		#endif
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "_Unwind_GetTextRelBase", "GCC_3.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _Unwind_GetTextRelBase. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_Unwind_GetTextRelBase() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_Unwind_GetTextRelBase - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "_Unwind_GetTextRelBase - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

