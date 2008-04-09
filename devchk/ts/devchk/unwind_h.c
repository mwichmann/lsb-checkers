/*
 * Test of unwind.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "unwind.h"



#ifdef TET_TEST
void unwind_h()
{
#else
int unwind_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in unwind.h\n");
#endif

printf("Checking data structures in unwind.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef _UA_SEARCH_PHASE
	CompareConstant(_UA_SEARCH_PHASE,1,5080,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _UA_SEARCH_PHASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _UA_CLEANUP_PHASE
	CompareConstant(_UA_CLEANUP_PHASE,2,5081,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _UA_CLEANUP_PHASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _UA_HANDLER_FRAME
	CompareConstant(_UA_HANDLER_FRAME,4,5082,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _UA_HANDLER_FRAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _UA_FORCE_UNWIND
	CompareConstant(_UA_FORCE_UNWIND,8,5083,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _UA_FORCE_UNWIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _UA_END_OF_STACK
	CompareConstant(_UA_END_OF_STACK,16,5084,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _UA_END_OF_STACK\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(_Unwind_Ptr,0, 10379, 1, 1.3, NULL, 7, '((__mode__(__pointer__)))')
#endif

#if 1
CheckTypeSize(_Unwind_Word,0, 10380, 1, 1.3, NULL, 7, '((__mode__(__word__)))')
#endif

#if 1
CheckTypeSize(_Unwind_Exception_Class,0, 10382, 1, 1.3, NULL, 7, '((__mode__(__DI__)))')
#endif

#if 1
CheckTypeSize(_Unwind_Reason_Code,0, 10388, 1, 1.3, NULL, 10381, NULL)
#endif

#if 1
CheckTypeSize(struct _Unwind_Exception,0, 10377, 1, 1.3, NULL, 0, '(__aligned__(16))')
Msg("Missing member data for _Unwind_Exception on All\n");
CheckOffset(struct _Unwind_Exception,exception_class,0,1,34607)
CheckOffset(struct _Unwind_Exception,exception_cleanup,0,1,34608)
CheckOffset(struct _Unwind_Exception,private_1,0,1,34609)
CheckOffset(struct _Unwind_Exception,private_2,0,1,34610)
#endif

#if 1
CheckTypeSize(_Unwind_Action,0, 10385, 1, 1.3, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,0, 10384, 1, 1.3, NULL, 10383, NULL)
#endif

#if defined __s390x__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 12, 3.0, NULL, 11075, NULL)
#elif defined __x86_64__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 11, 3.0, NULL, 11075, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 10, 3.0, NULL, 11075, NULL)
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 9, 3.0, NULL, 11075, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 6, 3.0, NULL, 11075, NULL)
#elif defined __ia64__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 3, 3.0, NULL, 11075, NULL)
#elif defined __i386__
CheckTypeSize(_Unwind_Stop_Fn,0, 11074, 2, 3.0, NULL, 11075, NULL)
#endif

#if defined __ia64__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 3, 3.0, NULL, 11076, NULL)
#elif defined __i386__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 2, 3.0, NULL, 11076, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 6, 3.0, NULL, 11076, NULL)
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 9, 3.0, NULL, 11076, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 10, 3.0, NULL, 11076, NULL)
#elif defined __x86_64__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 11, 3.0, NULL, 11076, NULL)
#elif defined __s390x__
CheckTypeSize(_Unwind_Trace_Fn,0, 11077, 12, 3.0, NULL, 11076, NULL)
#endif

#if defined __i386__
/* IA32 */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __ia64__
/* IA64 */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __powerpc64__
/* PPC64 */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __s390x__
/* S390X */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern _Unwind_Reason_Code _Unwind_Backtrace_db(_Unwind_Trace_Fn, void *);
CheckInterfacedef(_Unwind_Backtrace,_Unwind_Backtrace_db);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __i386__
/* IA32 */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __ia64__
/* IA64 */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __powerpc64__
/* PPC64 */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __s390x__
/* S390X */
extern _Unwind_Reason_Code _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __i386__
/* IA32 */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __ia64__
/* IA64 */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __powerpc64__
/* PPC64 */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __s390x__
/* S390X */
extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow_db(struct _Unwind_Exception *);
CheckInterfacedef(_Unwind_Resume_or_Rethrow,_Unwind_Resume_or_Rethrow_db);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __i386__
/* IA32 */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __ia64__
/* IA64 */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __s390x__
/* S390X */
extern void * _Unwind_FindEnclosingFunction_db(void *);
CheckInterfacedef(_Unwind_FindEnclosingFunction,_Unwind_FindEnclosingFunction_db);
#endif
#if defined __ia64__
/* IA64 */
extern _Unwind_Word _Unwind_GetBSP_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetBSP,_Unwind_GetBSP_db);
#endif
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in unwind.h\n\n",pcnt,cnt);
return cnt;
#endif

}
