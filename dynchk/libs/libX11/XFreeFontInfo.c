// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char * *, XFontStruct *, int) = 0;

int XFreeFontInfo(char * * arg0, XFontStruct * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFreeFontInfo");
	validate_NULL_TYPETYPE(arg0, "XFreeFontInfo");
	validate_NULL_TYPETYPE(arg1, "XFreeFontInfo");
	validate_NULL_TYPETYPE(arg2, "XFreeFontInfo");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XFreeFontInfo(char * * arg0, XFontStruct * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFreeFontInfo");
	return funcptr(arg0, arg1, arg2);
}

