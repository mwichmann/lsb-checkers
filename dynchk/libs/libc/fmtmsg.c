// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <fmtmsg.h>
#undef fmtmsg
static int(*funcptr) (long , const char * , int , const char * , const char * , const char * ) = 0;

int fmtmsg (long arg0 , const char * arg1 , int arg2 , const char * arg3 , const char * arg4 , const char * arg5 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmtmsg");
	validate_NULL_TYPETYPE(  arg0, "fmtmsg - arg0");
	validate_Rdaddress( arg1, "fmtmsg - arg1");
	validate_NULL_TYPETYPE(  arg1, "fmtmsg - arg1");
	validate_NULL_TYPETYPE(  arg2, "fmtmsg - arg2");
	validate_Rdaddress( arg3, "fmtmsg - arg3");
	validate_NULL_TYPETYPE(  arg3, "fmtmsg - arg3");
	validate_Rdaddress( arg4, "fmtmsg - arg4");
	validate_NULL_TYPETYPE(  arg4, "fmtmsg - arg4");
	validate_Rdaddress( arg5, "fmtmsg - arg5");
	validate_NULL_TYPETYPE(  arg5, "fmtmsg - arg5");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int __lsb_fmtmsg (long arg0 , const char * arg1 , int arg2 , const char * arg3 , const char * arg4 , const char * arg5 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmtmsg");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

