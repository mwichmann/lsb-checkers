// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *) = 0;

XtTranslations XtParseTranslationTable(char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtParseTranslationTable");
	validate_NULL_TYPETYPE(arg0, "XtParseTranslationTable");
	return funcptr(arg0);
}

XtTranslations lsb_XtParseTranslationTable(char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtParseTranslationTable");
	return funcptr(arg0);
}

