#if defined(__i386__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__i386__)*/
#if defined(__ia64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__ia64__)*/
#if defined(__arm__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__arm__)*/
#if defined(__mc68000__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__mc68000__)*/
#if defined(__powerpc__) && !defined(__powerpc64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__powerpc__) && !defined(__powerpc64__)*/
#if defined(__alpha__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__alpha__)*/
#if defined(__not_def__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) (struct _Unwind_Context * , int ) = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR (struct _Unwind_Context * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
		validate_RWaddress( arg0, "_Unwind_GetGR - arg0");
		validate_NULL_TYPETYPE(  arg0, "_Unwind_GetGR - arg0");
		validate_NULL_TYPETYPE(  arg1, "_Unwind_GetGR - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__not_def__)*/
#if defined(__powerpc64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__powerpc64__)*/
#if defined(__s390__) && !defined(__s390x__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__s390__) && !defined(__s390x__)*/
#if defined(__x86_64__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__x86_64__)*/
#if defined(__s390x__)
// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unwind.h>
#undef _Unwind_GetGR
static _Unwind_Word(*funcptr) () = 0;

extern int __lsb_check_params;
_Unwind_Word _Unwind_GetGR ()
{
	int reset_flag = __lsb_check_params;
	_Unwind_Word ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " _Unwind_GetGR ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "_Unwind_GetGR()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

#endif /*defined(__s390x__)*/
