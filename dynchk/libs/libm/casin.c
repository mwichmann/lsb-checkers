// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)() = 0;

double casin()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "casin");
	return funcptr();
}

double lsb_casin()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "casin");
	return funcptr();
}

