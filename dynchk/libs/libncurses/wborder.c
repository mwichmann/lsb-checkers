// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#include <curses.h>
#include <curses.h>
#include <curses.h>
#include <curses.h>
#include <curses.h>
#include <curses.h>
#include <curses.h>
static int(*funcptr)(WINDOW *, chtype, chtype, chtype, chtype, chtype, chtype, chtype, chtype) = 0;

int wborder(WINDOW * arg0, chtype arg1, chtype arg2, chtype arg3, chtype arg4, chtype arg5, chtype arg6, chtype arg7, chtype arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wborder");
	validate_NULL_TYPETYPE(arg0, "wborder");
	validate_NULL_TYPETYPE(arg1, "wborder");
	validate_NULL_TYPETYPE(arg2, "wborder");
	validate_NULL_TYPETYPE(arg3, "wborder");
	validate_NULL_TYPETYPE(arg4, "wborder");
	validate_NULL_TYPETYPE(arg5, "wborder");
	validate_NULL_TYPETYPE(arg6, "wborder");
	validate_NULL_TYPETYPE(arg7, "wborder");
	validate_NULL_TYPETYPE(arg8, "wborder");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

int lsb_wborder(WINDOW * arg0, chtype arg1, chtype arg2, chtype arg3, chtype arg4, chtype arg5, chtype arg6, chtype arg7, chtype arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wborder");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

