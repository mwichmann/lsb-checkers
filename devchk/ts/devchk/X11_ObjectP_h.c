/*
 * Test of X11/ObjectP.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/ObjectP.h"



#ifdef TET_TEST
void X11_ObjectP_h()
{
#else
int X11_ObjectP_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ObjectP.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L,4944,architecture)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit),4945,architecture)
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit),4946,architecture)
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(ObjectPart,28, 10264, 2)
#elif __ia64__
CheckTypeSize(ObjectPart,48, 10264, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectPart,28, 10264, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectPart,28, 10264, 10)
#elif __powerpc64__
CheckTypeSize(ObjectPart,48, 10264, 9)
#elif __s390x__
CheckTypeSize(ObjectPart,48, 10264, 12)
#elif __x86_64__
CheckTypeSize(ObjectPart,48, 10264, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10264,0);
Msg("Find size of ObjectPart (10264)\n");
#endif

#if __i386__
CheckTypeSize(ObjectRec,28, 10263, 2)
#elif __ia64__
CheckTypeSize(ObjectRec,48, 10263, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectRec,28, 10263, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectRec,28, 10263, 10)
#elif __powerpc64__
CheckTypeSize(ObjectRec,48, 10263, 9)
#elif __s390x__
CheckTypeSize(ObjectRec,48, 10263, 12)
#elif __x86_64__
CheckTypeSize(ObjectRec,48, 10263, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10263,0);
Msg("Find size of ObjectRec (10263)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassPart,116, 10266, 2)
#elif __ia64__
CheckTypeSize(ObjectClassPart,224, 10266, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassPart,116, 10266, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassPart,116, 10266, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassPart,224, 10266, 9)
#elif __s390x__
CheckTypeSize(ObjectClassPart,224, 10266, 12)
#elif __x86_64__
CheckTypeSize(ObjectClassPart,224, 10266, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10266,0);
Msg("Find size of ObjectClassPart (10266)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 9)
#elif __s390x__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 12)
#elif __x86_64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10268,0);
Msg("Find size of ObjectClassExtensionRec (10268)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassExtension,4, 10270, 2)
#elif __ia64__
CheckTypeSize(ObjectClassExtension,8, 10270, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassExtension,4, 10270, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassExtension,4, 10270, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassExtension,8, 10270, 9)
#elif __s390x__
CheckTypeSize(ObjectClassExtension,8, 10270, 12)
#elif __x86_64__
CheckTypeSize(ObjectClassExtension,8, 10270, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10270,0);
Msg("Find size of ObjectClassExtension (10270)\n");
#endif

#if __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2)
#elif __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ObjectClassRec,116, 10272, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ObjectClassRec,116, 10272, 10)
#elif __powerpc64__
CheckTypeSize(ObjectClassRec,224, 10272, 9)
#elif __s390x__
CheckTypeSize(ObjectClassRec,224, 10272, 12)
#elif __x86_64__
CheckTypeSize(ObjectClassRec,224, 10272, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10272,0);
Msg("Find size of ObjectClassRec (10272)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10267,0);
Msg("Find size of anon-_ObjectClassExtensionRec (10267)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ObjectP.h\n",cnt);
return cnt;
#endif

}
