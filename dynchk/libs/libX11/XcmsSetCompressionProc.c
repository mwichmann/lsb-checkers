// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#include <X11/Xlib.h>
#undef XcmsSetCompressionProc
static XcmsCompressionProc(*funcptr) (XcmsCCC , XcmsCompressionProc , XPointer ) = 0;

extern int __lsb_check_params;
XcmsCompressionProc XcmsSetCompressionProc (XcmsCCC arg0 , XcmsCompressionProc arg1 , XPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	XcmsCompressionProc ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsSetCompressionProc ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsSetCompressionProc()");
		validate_NULL_TYPETYPE(  arg0, "XcmsSetCompressionProc - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsSetCompressionProc - arg1");
		validate_NULL_TYPETYPE(  arg2, "XcmsSetCompressionProc - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

