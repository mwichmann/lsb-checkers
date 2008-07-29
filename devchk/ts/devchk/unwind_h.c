/*
 * Test of unwind.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

#if defined __s390x__
CheckTypeSize(_Unwind_Ptr,8, 10379, 12, 1.3, NULL, 7, '(__mode__(__pointer__))')
#elif defined __x86_64__
CheckTypeSize(_Unwind_Ptr,8, 10379, 11, 2.0, NULL, 7, '(__mode__(__pointer__))')
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Ptr,4, 10379, 10, 1.3, NULL, 7, '(__mode__(__pointer__))')
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Ptr,8, 10379, 9, 2.0, NULL, 7, '(__mode__(__pointer__))')
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Ptr,4, 10379, 6, 1.3, NULL, 7, '(__mode__(__pointer__))')
#elif defined __ia64__
CheckTypeSize(_Unwind_Ptr,8, 10379, 3, 1.3, NULL, 7, '(__mode__(__pointer__))')
#elif defined __i386__
CheckTypeSize(_Unwind_Ptr,4, 10379, 2, 1.3, NULL, 7, '(__mode__(__pointer__))')
#else
Msg("Find size of _Unwind_Ptr (10379)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,7,'""(__mode__(__pointer__))""');\n",architecture,10379,0);
#endif

#if defined __s390x__
CheckTypeSize(_Unwind_Word,8, 10380, 12, 1.3, NULL, 7, '(__mode__(__word__))')
#elif defined __x86_64__
CheckTypeSize(_Unwind_Word,8, 10380, 11, 2.0, NULL, 7, '(__mode__(__word__))')
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Word,4, 10380, 10, 1.3, NULL, 7, '(__mode__(__word__))')
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Word,8, 10380, 9, 2.0, NULL, 7, '(__mode__(__word__))')
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Word,4, 10380, 6, 1.3, NULL, 7, '(__mode__(__word__))')
#elif defined __ia64__
CheckTypeSize(_Unwind_Word,8, 10380, 3, 1.3, NULL, 7, '(__mode__(__word__))')
#elif defined __i386__
CheckTypeSize(_Unwind_Word,4, 10380, 2, 1.3, NULL, 7, '(__mode__(__word__))')
#else
Msg("Find size of _Unwind_Word (10380)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,7,'""(__mode__(__word__))""');\n",architecture,10380,0);
#endif

#if 1
CheckTypeSize(_Unwind_Exception_Class,8, 10382, 1, 1.3, NULL, 7, '(__mode__(__DI__))')
#endif

#if 1
CheckTypeSize(_Unwind_Reason_Code,4, 10388, 1, 1.3, NULL, 10381, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _Unwind_Exception,32, 10377, 12, 1.3, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,8,12,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,12,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,8,12,34609)
CheckOffset(struct _Unwind_Exception,private_1,16,12,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,8,12,34610)
CheckOffset(struct _Unwind_Exception,private_2,24,12,34610)
#elif defined __x86_64__
CheckTypeSize(struct _Unwind_Exception,32, 10377, 11, 2.0, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,8,11,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,11,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,8,11,34609)
CheckOffset(struct _Unwind_Exception,private_1,16,11,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,8,11,34610)
CheckOffset(struct _Unwind_Exception,private_2,24,11,34610)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _Unwind_Exception,24, 10377, 10, 1.3, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,4,10,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,10,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,4,10,34609)
CheckOffset(struct _Unwind_Exception,private_1,12,10,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,4,10,34610)
CheckOffset(struct _Unwind_Exception,private_2,16,10,34610)
#elif defined __powerpc64__
CheckTypeSize(struct _Unwind_Exception,32, 10377, 9, 2.0, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,8,9,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,9,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,8,9,34609)
CheckOffset(struct _Unwind_Exception,private_1,16,9,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,8,9,34610)
CheckOffset(struct _Unwind_Exception,private_2,24,9,34610)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _Unwind_Exception,32, 10377, 6, 1.3, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,4,6,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,6,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,4,6,34609)
CheckOffset(struct _Unwind_Exception,private_1,12,6,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,4,6,34610)
CheckOffset(struct _Unwind_Exception,private_2,16,6,34610)
#elif defined __ia64__
CheckTypeSize(struct _Unwind_Exception,32, 10377, 3, 1.3, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,8,3,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,3,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,8,3,34609)
CheckOffset(struct _Unwind_Exception,private_1,16,3,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,8,3,34610)
CheckOffset(struct _Unwind_Exception,private_2,24,3,34610)
#elif defined __i386__
CheckTypeSize(struct _Unwind_Exception,32, 10377, 2, 1.3, NULL, 0, '(__aligned__)')
CheckMemberSize(struct _Unwind_Exception,exception_cleanup,4,2,34608)
CheckOffset(struct _Unwind_Exception,exception_cleanup,8,2,34608)
CheckMemberSize(struct _Unwind_Exception,private_1,4,2,34609)
CheckOffset(struct _Unwind_Exception,private_1,12,2,34609)
CheckMemberSize(struct _Unwind_Exception,private_2,4,2,34610)
CheckOffset(struct _Unwind_Exception,private_2,16,2,34610)
#else
Msg("Find size of _Unwind_Exception (10377)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,'""(__aligned__)""');\n",architecture,10377,0);
#endif

#if 1
CheckTypeSize(_Unwind_Action,4, 10385, 1, 1.3, NULL, 6, NULL)
#endif

#if defined __s390x__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,8, 10384, 12, 1.3, NULL, 10383, NULL)
#elif defined __x86_64__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,8, 10384, 11, 2.0, NULL, 10383, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,4, 10384, 10, 1.3, NULL, 10383, NULL)
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,8, 10384, 9, 2.0, NULL, 10383, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,4, 10384, 6, 1.3, NULL, 10383, NULL)
#elif defined __ia64__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,8, 10384, 3, 1.3, NULL, 10383, NULL)
#elif defined __i386__
CheckTypeSize(_Unwind_Exception_Cleanup_Fn,4, 10384, 2, 1.3, NULL, 10383, NULL)
#else
Msg("Find size of _Unwind_Exception_Cleanup_Fn (10384)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,10383,NULL);\n",architecture,10384,0);
#endif

#if defined __s390x__
CheckTypeSize(_Unwind_Stop_Fn,8, 11074, 12, 3.0, NULL, 11075, NULL)
#elif defined __x86_64__
CheckTypeSize(_Unwind_Stop_Fn,8, 11074, 11, 3.0, NULL, 11075, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Stop_Fn,4, 11074, 10, 3.0, NULL, 11075, NULL)
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Stop_Fn,8, 11074, 9, 3.0, NULL, 11075, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Stop_Fn,4, 11074, 6, 3.0, NULL, 11075, NULL)
#elif defined __ia64__
CheckTypeSize(_Unwind_Stop_Fn,8, 11074, 3, 3.0, NULL, 11075, NULL)
#elif defined __i386__
CheckTypeSize(_Unwind_Stop_Fn,4, 11074, 2, 3.0, NULL, 11075, NULL)
#endif

#if defined __s390x__
CheckTypeSize(_Unwind_Trace_Fn,8, 11077, 12, 3.0, NULL, 11076, NULL)
#elif defined __x86_64__
CheckTypeSize(_Unwind_Trace_Fn,8, 11077, 11, 3.0, NULL, 11076, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_Unwind_Trace_Fn,4, 11077, 10, 3.0, NULL, 11076, NULL)
#elif defined __powerpc64__
CheckTypeSize(_Unwind_Trace_Fn,8, 11077, 9, 3.0, NULL, 11076, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_Unwind_Trace_Fn,4, 11077, 6, 3.0, NULL, 11076, NULL)
#elif defined __ia64__
CheckTypeSize(_Unwind_Trace_Fn,8, 11077, 3, 3.0, NULL, 11076, NULL)
#elif defined __i386__
CheckTypeSize(_Unwind_Trace_Fn,4, 11077, 2, 3.0, NULL, 11076, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#elif defined __ia64__
/* IA64 */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#elif defined __i386__
/* IA32 */
typedef void (*_Unwind_Exception_Cleanup_Fn_db)(_Unwind_Reason_Code, struct _Unwind_Exception *);
CheckFunctionTypedef(_Unwind_Exception_Cleanup_Fn,_Unwind_Exception_Cleanup_Fn_db);
#endif

#if defined __s390x__
/* S390X */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#elif defined __x86_64__
/* x86-64 */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#elif defined __powerpc64__
/* PPC64 */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#elif defined __ia64__
/* IA64 */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#elif defined __i386__
/* IA32 */
typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn_db)(int, _Unwind_Action, _Unwind_Exception_Class, struct _Unwind_Exception *, struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Stop_Fn,_Unwind_Stop_Fn_db);
#endif

#if defined __s390x__
/* S390X */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
#elif defined __x86_64__
/* x86-64 */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
#elif defined __powerpc64__
/* PPC64 */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
#elif defined __ia64__
/* IA64 */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
#elif defined __i386__
/* IA32 */
typedef _Unwind_Reason_Code (*_Unwind_Trace_Fn_db)(struct _Unwind_Context *, void *);
CheckFunctionTypedef(_Unwind_Trace_Fn,_Unwind_Trace_Fn_db);
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
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __i386__
/* IA32 */
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __ia64__
/* IA64 */
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __powerpc64__
/* PPC64 */
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
CheckInterfacedef(_Unwind_GetCFA,_Unwind_GetCFA_db);
#endif
#if defined __s390x__
/* S390X */
extern _Unwind_Word _Unwind_GetCFA_db(struct _Unwind_Context *);
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
