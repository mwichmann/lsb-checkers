/*
 * Test of freetype/ftmodapi.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftmodapi.h"



#ifdef TET_TEST
void freetype_ftmodapi_h()
{
#else
int freetype_ftmodapi_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmodapi.h\n");
#endif

printf("Checking data structures in freetype/ftmodapi.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_HAS_HINTER
	CompareConstant(FT_MODULE_DRIVER_HAS_HINTER,0x400,10446,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_HAS_HINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_NO_OUTLINES
	CompareConstant(FT_MODULE_DRIVER_NO_OUTLINES,0x200,10447,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_NO_OUTLINES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_SCALABLE
	CompareConstant(FT_MODULE_DRIVER_SCALABLE,0x100,10448,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_SCALABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_FONT_DRIVER
	CompareConstant(FT_MODULE_FONT_DRIVER,1,10449,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_FONT_DRIVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_HINTER
	CompareConstant(FT_MODULE_HINTER,4,10450,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_HINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_RENDERER
	CompareConstant(FT_MODULE_RENDERER,2,10451,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_RENDERER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_STYLER
	CompareConstant(FT_MODULE_STYLER,8,10452,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_STYLER\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(struct FT_Module_Class_,72, 16753, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,8,12,53975)
CheckOffset(struct FT_Module_Class_,module_size,8,12,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,8,12,53976)
CheckOffset(struct FT_Module_Class_,module_name,16,12,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,8,12,53977)
CheckOffset(struct FT_Module_Class_,module_version,24,12,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,8,12,53978)
CheckOffset(struct FT_Module_Class_,module_requires,32,12,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,8,12,53979)
CheckOffset(struct FT_Module_Class_,module_interface,40,12,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,8,12,53981)
CheckOffset(struct FT_Module_Class_,module_init,48,12,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,8,12,53983)
CheckOffset(struct FT_Module_Class_,module_done,56,12,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,8,12,53986)
CheckOffset(struct FT_Module_Class_,get_interface,64,12,53986)
#elif defined __x86_64__
CheckTypeSize(struct FT_Module_Class_,72, 16753, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,8,11,53975)
CheckOffset(struct FT_Module_Class_,module_size,8,11,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,8,11,53976)
CheckOffset(struct FT_Module_Class_,module_name,16,11,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,8,11,53977)
CheckOffset(struct FT_Module_Class_,module_version,24,11,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,8,11,53978)
CheckOffset(struct FT_Module_Class_,module_requires,32,11,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,8,11,53979)
CheckOffset(struct FT_Module_Class_,module_interface,40,11,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,8,11,53981)
CheckOffset(struct FT_Module_Class_,module_init,48,11,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,8,11,53983)
CheckOffset(struct FT_Module_Class_,module_done,56,11,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,8,11,53986)
CheckOffset(struct FT_Module_Class_,get_interface,64,11,53986)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Module_Class_,36, 16753, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,4,10,53975)
CheckOffset(struct FT_Module_Class_,module_size,4,10,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,4,10,53976)
CheckOffset(struct FT_Module_Class_,module_name,8,10,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,4,10,53977)
CheckOffset(struct FT_Module_Class_,module_version,12,10,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,4,10,53978)
CheckOffset(struct FT_Module_Class_,module_requires,16,10,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,4,10,53979)
CheckOffset(struct FT_Module_Class_,module_interface,20,10,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,4,10,53981)
CheckOffset(struct FT_Module_Class_,module_init,24,10,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,4,10,53983)
CheckOffset(struct FT_Module_Class_,module_done,28,10,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,4,10,53986)
CheckOffset(struct FT_Module_Class_,get_interface,32,10,53986)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Module_Class_,72, 16753, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,8,9,53975)
CheckOffset(struct FT_Module_Class_,module_size,8,9,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,8,9,53976)
CheckOffset(struct FT_Module_Class_,module_name,16,9,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,8,9,53977)
CheckOffset(struct FT_Module_Class_,module_version,24,9,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,8,9,53978)
CheckOffset(struct FT_Module_Class_,module_requires,32,9,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,8,9,53979)
CheckOffset(struct FT_Module_Class_,module_interface,40,9,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,8,9,53981)
CheckOffset(struct FT_Module_Class_,module_init,48,9,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,8,9,53983)
CheckOffset(struct FT_Module_Class_,module_done,56,9,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,8,9,53986)
CheckOffset(struct FT_Module_Class_,get_interface,64,9,53986)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Module_Class_,36, 16753, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,4,6,53975)
CheckOffset(struct FT_Module_Class_,module_size,4,6,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,4,6,53976)
CheckOffset(struct FT_Module_Class_,module_name,8,6,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,4,6,53977)
CheckOffset(struct FT_Module_Class_,module_version,12,6,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,4,6,53978)
CheckOffset(struct FT_Module_Class_,module_requires,16,6,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,4,6,53979)
CheckOffset(struct FT_Module_Class_,module_interface,20,6,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,4,6,53981)
CheckOffset(struct FT_Module_Class_,module_init,24,6,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,4,6,53983)
CheckOffset(struct FT_Module_Class_,module_done,28,6,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,4,6,53986)
CheckOffset(struct FT_Module_Class_,get_interface,32,6,53986)
#elif defined __ia64__
CheckTypeSize(struct FT_Module_Class_,72, 16753, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,8,3,53975)
CheckOffset(struct FT_Module_Class_,module_size,8,3,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,8,3,53976)
CheckOffset(struct FT_Module_Class_,module_name,16,3,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,8,3,53977)
CheckOffset(struct FT_Module_Class_,module_version,24,3,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,8,3,53978)
CheckOffset(struct FT_Module_Class_,module_requires,32,3,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,8,3,53979)
CheckOffset(struct FT_Module_Class_,module_interface,40,3,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,8,3,53981)
CheckOffset(struct FT_Module_Class_,module_init,48,3,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,8,3,53983)
CheckOffset(struct FT_Module_Class_,module_done,56,3,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,8,3,53986)
CheckOffset(struct FT_Module_Class_,get_interface,64,3,53986)
#elif defined __i386__
CheckTypeSize(struct FT_Module_Class_,36, 16753, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Module_Class_,module_size,4,2,53975)
CheckOffset(struct FT_Module_Class_,module_size,4,2,53975)
CheckMemberSize(struct FT_Module_Class_,module_name,4,2,53976)
CheckOffset(struct FT_Module_Class_,module_name,8,2,53976)
CheckMemberSize(struct FT_Module_Class_,module_version,4,2,53977)
CheckOffset(struct FT_Module_Class_,module_version,12,2,53977)
CheckMemberSize(struct FT_Module_Class_,module_requires,4,2,53978)
CheckOffset(struct FT_Module_Class_,module_requires,16,2,53978)
CheckMemberSize(struct FT_Module_Class_,module_interface,4,2,53979)
CheckOffset(struct FT_Module_Class_,module_interface,20,2,53979)
CheckMemberSize(struct FT_Module_Class_,module_init,4,2,53981)
CheckOffset(struct FT_Module_Class_,module_init,24,2,53981)
CheckMemberSize(struct FT_Module_Class_,module_done,4,2,53983)
CheckOffset(struct FT_Module_Class_,module_done,28,2,53983)
CheckMemberSize(struct FT_Module_Class_,get_interface,4,2,53986)
CheckOffset(struct FT_Module_Class_,get_interface,32,2,53986)
#else
Msg("Find size of FT_Module_Class_ (16753)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16753,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Module_Constructor,8, 16763, 12, 3.2, NULL, 16762, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Module_Constructor,8, 16763, 11, 3.2, NULL, 16762, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Module_Constructor,4, 16763, 10, 3.2, NULL, 16762, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Module_Constructor,8, 16763, 9, 3.2, NULL, 16762, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Module_Constructor,4, 16763, 6, 3.2, NULL, 16762, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Module_Constructor,8, 16763, 3, 3.2, NULL, 16762, NULL)
#elif defined __i386__
CheckTypeSize(FT_Module_Constructor,4, 16763, 2, 3.2, NULL, 16762, NULL)
#else
Msg("Find size of FT_Module_Constructor (16763)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16762,NULL);\n",architecture,16763,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Module_Destructor,8, 16765, 12, 3.2, NULL, 16764, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Module_Destructor,8, 16765, 11, 3.2, NULL, 16764, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Module_Destructor,4, 16765, 10, 3.2, NULL, 16764, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Module_Destructor,8, 16765, 9, 3.2, NULL, 16764, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Module_Destructor,4, 16765, 6, 3.2, NULL, 16764, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Module_Destructor,8, 16765, 3, 3.2, NULL, 16764, NULL)
#elif defined __i386__
CheckTypeSize(FT_Module_Destructor,4, 16765, 2, 3.2, NULL, 16764, NULL)
#else
Msg("Find size of FT_Module_Destructor (16765)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16764,NULL);\n",architecture,16765,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Module_Interface,8, 16767, 12, 3.2, NULL, 16766, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Module_Interface,8, 16767, 11, 3.2, NULL, 16766, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Module_Interface,4, 16767, 10, 3.2, NULL, 16766, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Module_Interface,8, 16767, 9, 3.2, NULL, 16766, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Module_Interface,4, 16767, 6, 3.2, NULL, 16766, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Module_Interface,8, 16767, 3, 3.2, NULL, 16766, NULL)
#elif defined __i386__
CheckTypeSize(FT_Module_Interface,4, 16767, 2, 3.2, NULL, 16766, NULL)
#else
Msg("Find size of FT_Module_Interface (16767)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16766,NULL);\n",architecture,16767,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Module_Requester,8, 16769, 12, 3.2, NULL, 16768, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Module_Requester,8, 16769, 11, 3.2, NULL, 16768, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Module_Requester,4, 16769, 10, 3.2, NULL, 16768, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Module_Requester,8, 16769, 9, 3.2, NULL, 16768, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Module_Requester,4, 16769, 6, 3.2, NULL, 16768, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Module_Requester,8, 16769, 3, 3.2, NULL, 16768, NULL)
#elif defined __i386__
CheckTypeSize(FT_Module_Requester,4, 16769, 2, 3.2, NULL, 16768, NULL)
#else
Msg("Find size of FT_Module_Requester (16769)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16768,NULL);\n",architecture,16769,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Module_Class,72, 16770, 12, 3.2, NULL, 16753, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Module_Class,72, 16770, 11, 3.2, NULL, 16753, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Module_Class,36, 16770, 10, 3.2, NULL, 16753, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Module_Class,72, 16770, 9, 3.2, NULL, 16753, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Module_Class,36, 16770, 6, 3.2, NULL, 16753, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Module_Class,72, 16770, 3, 3.2, NULL, 16753, NULL)
#elif defined __i386__
CheckTypeSize(FT_Module_Class,36, 16770, 2, 3.2, NULL, 16753, NULL)
#else
Msg("Find size of FT_Module_Class (16770)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16753,NULL);\n",architecture,16770,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_DebugHook_Func,8, 16868, 12, 3.2, NULL, 6988, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_DebugHook_Func,8, 16868, 11, 3.2, NULL, 6988, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_DebugHook_Func,4, 16868, 10, 3.2, NULL, 6988, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_DebugHook_Func,8, 16868, 9, 3.2, NULL, 6988, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_DebugHook_Func,4, 16868, 6, 3.2, NULL, 6988, NULL)
#elif defined __ia64__
CheckTypeSize(FT_DebugHook_Func,8, 16868, 3, 3.2, NULL, 6988, NULL)
#elif defined __i386__
CheckTypeSize(FT_DebugHook_Func,4, 16868, 2, 3.2, NULL, 6988, NULL)
#else
Msg("Find size of FT_DebugHook_Func (16868)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,6988, NULL);\n",architecture,16868,0);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Module_Constructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Constructor,FT_Module_Constructor_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Module_Destructor_db)(FT_Module);
CheckFunctionTypedef(FT_Module_Destructor,FT_Module_Destructor_db);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#elif defined __i386__
/* IA32 */
typedef FT_Module_Interface (*FT_Module_Requester_db)(FT_Module, const char *);
CheckFunctionTypedef(FT_Module_Requester,FT_Module_Requester_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_DebugHook_Func_db)(void *);
CheckFunctionTypedef(FT_DebugHook_Func,FT_DebugHook_Func_db);
#endif

extern FT_Module FT_Get_Module_db(FT_Library, const char *);
CheckInterfacedef(FT_Get_Module,FT_Get_Module_db);
extern FT_Error FT_Done_Library_db(FT_Library);
CheckInterfacedef(FT_Done_Library,FT_Done_Library_db);
extern void FT_Set_Debug_Hook_db(FT_Library, FT_UInt, FT_DebugHook_Func);
CheckInterfacedef(FT_Set_Debug_Hook,FT_Set_Debug_Hook_db);
extern void FT_Add_Default_Modules_db(FT_Library);
CheckInterfacedef(FT_Add_Default_Modules,FT_Add_Default_Modules_db);
extern FT_Error FT_New_Library_db(FT_Memory, FT_Library *);
CheckInterfacedef(FT_New_Library,FT_New_Library_db);
extern FT_Error FT_Remove_Module_db(FT_Library, FT_Module);
CheckInterfacedef(FT_Remove_Module,FT_Remove_Module_db);
extern FT_Error FT_Add_Module_db(FT_Library, const FT_Module_Class *);
CheckInterfacedef(FT_Add_Module,FT_Add_Module_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftmodapi.h\n\n",pcnt,cnt);
return cnt;
#endif

}
