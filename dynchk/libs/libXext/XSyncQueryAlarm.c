// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
static int(*funcptr)(Display *, XSyncAlarm, XSyncAlarmAttributes *) = 0;

int XSyncQueryAlarm(Display * arg0, XSyncAlarm arg1, XSyncAlarmAttributes * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncQueryAlarm");
	validate_NULL_TYPETYPE(arg0, "XSyncQueryAlarm");
	validate_NULL_TYPETYPE(arg1, "XSyncQueryAlarm");
	validate_NULL_TYPETYPE(arg2, "XSyncQueryAlarm");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XSyncQueryAlarm(Display * arg0, XSyncAlarm arg1, XSyncAlarmAttributes * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncQueryAlarm");
	return funcptr(arg0, arg1, arg2);
}

