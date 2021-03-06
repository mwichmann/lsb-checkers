// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XWriteBitmapFile
static int(*funcptr) (Display * , const char * , Pixmap , unsigned int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
int XWriteBitmapFile (Display * arg0 , const char * arg1 , Pixmap arg2 , unsigned int arg3 , unsigned int arg4 , int arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XWriteBitmapFile()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XWriteBitmapFile");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XWriteBitmapFile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XWriteBitmapFile() - validating");
		validate_RWaddress( arg0, "XWriteBitmapFile - arg0");
		validate_NULL_TYPETYPE(  arg0, "XWriteBitmapFile - arg0");
		validate_Rdaddress( arg1, "XWriteBitmapFile - arg1");
		validate_NULL_TYPETYPE(  arg1, "XWriteBitmapFile - arg1");
		validate_NULL_TYPETYPE(  arg2, "XWriteBitmapFile - arg2");
		validate_NULL_TYPETYPE(  arg3, "XWriteBitmapFile - arg3");
		validate_NULL_TYPETYPE(  arg4, "XWriteBitmapFile - arg4");
		validate_NULL_TYPETYPE(  arg5, "XWriteBitmapFile - arg5");
		validate_NULL_TYPETYPE(  arg6, "XWriteBitmapFile - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

