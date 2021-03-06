// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtMergeArgLists
static ArgList(*funcptr) (ArgList , Cardinal , ArgList , Cardinal ) = 0;

extern int __lsb_check_params;
ArgList XtMergeArgLists (ArgList arg0 , Cardinal arg1 , ArgList arg2 , Cardinal arg3 )
{
	int reset_flag = __lsb_check_params;
	ArgList ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtMergeArgLists()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMergeArgLists");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtMergeArgLists. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtMergeArgLists() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtMergeArgLists - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtMergeArgLists - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtMergeArgLists - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtMergeArgLists - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

