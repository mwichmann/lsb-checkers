// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmsConn, int, int, int, int) = 0;

void SmsSaveYourself(SmsConn arg0, int arg1, int arg2, int arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsSaveYourself");
	validate_NULL_TYPETYPE(arg0, "SmsSaveYourself");
	validate_NULL_TYPETYPE(arg1, "SmsSaveYourself");
	validate_NULL_TYPETYPE(arg2, "SmsSaveYourself");
	validate_NULL_TYPETYPE(arg3, "SmsSaveYourself");
	validate_NULL_TYPETYPE(arg4, "SmsSaveYourself");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void lsb_SmsSaveYourself(SmsConn arg0, int arg1, int arg2, int arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsSaveYourself");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

