/*
 * Test of X11/ObjectP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ObjectP.h\n");
#endif

printf("Checking data structures in X11/ObjectP.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L,4944,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit),4945,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit),4946,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(ObjectPart,28, 10264, 2, 1.2, NULL, 10261, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectPart,48, 10264, 3, 1.3, NULL, 10261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectPart,28, 10264, 6, 1.2, NULL, 10261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectPart,28, 10264, 10, 1.3, NULL, 10261, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectPart,48, 10264, 9, 2.0, NULL, 10261, NULL)
#elif defined __s390x__
CheckTypeSize(ObjectPart,48, 10264, 12, 1.3, NULL, 10261, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectPart,48, 10264, 11, 2.0, NULL, 10261, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of ObjectPart (10264)\n");
%d,%d,%d,'""2.0""',NULL,10261,NULL);\n",architecture,10264,0);
#endif

#if defined __i386__
CheckTypeSize(ObjectRec,28, 10263, 2, 1.2, NULL, 10262, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectRec,48, 10263, 3, 1.3, NULL, 10262, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectRec,28, 10263, 6, 1.2, NULL, 10262, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectRec,28, 10263, 10, 1.3, NULL, 10262, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectRec,48, 10263, 9, 2.0, NULL, 10262, NULL)
#elif defined __s390x__
CheckTypeSize(ObjectRec,48, 10263, 12, 1.3, NULL, 10262, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectRec,48, 10263, 11, 2.0, NULL, 10262, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of ObjectRec (10263)\n");
%d,%d,%d,'""2.0""',NULL,10262,NULL);\n",architecture,10263,0);
#endif

#if defined __i386__
CheckTypeSize(ObjectClassPart,116, 10266, 2, 1.2, NULL, 10265, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectClassPart,224, 10266, 3, 1.3, NULL, 10265, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectClassPart,116, 10266, 6, 1.2, NULL, 10265, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectClassPart,116, 10266, 10, 1.3, NULL, 10265, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectClassPart,224, 10266, 9, 2.0, NULL, 10265, NULL)
#elif defined __s390x__
CheckTypeSize(ObjectClassPart,224, 10266, 12, 1.3, NULL, 10265, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectClassPart,224, 10266, 11, 2.0, NULL, 10265, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of ObjectClassPart (10266)\n");
%d,%d,%d,'""2.0""',NULL,10265,NULL);\n",architecture,10266,0);
#endif

#if defined __i386__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 2, 1.2, NULL, 10267, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 3, 1.3, NULL, 10267, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 6, 1.2, NULL, 10267, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectClassExtensionRec,24, 10268, 10, 1.3, NULL, 10267, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 9, 2.0, NULL, 10267, NULL)
#elif defined __s390x__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 12, 1.3, NULL, 10267, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectClassExtensionRec,48, 10268, 11, 2.0, NULL, 10267, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of ObjectClassExtensionRec (10268)\n");
%d,%d,%d,'""2.0""',NULL,10267,NULL);\n",architecture,10268,0);
#endif

#if defined __i386__
CheckTypeSize(ObjectClassExtension,4, 10270, 2, 1.2, NULL, 10269, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectClassExtension,8, 10270, 3, 1.3, NULL, 10269, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectClassExtension,4, 10270, 6, 1.2, NULL, 10269, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectClassExtension,4, 10270, 10, 1.3, NULL, 10269, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectClassExtension,8, 10270, 9, 2.0, NULL, 10269, NULL)
#elif defined __s390x__
CheckTypeSize(ObjectClassExtension,8, 10270, 12, 1.3, NULL, 10269, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectClassExtension,8, 10270, 11, 2.0, NULL, 10269, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of ObjectClassExtension (10270)\n");
%d,%d,%d,'""2.0""',NULL,10269,NULL);\n",architecture,10270,0);
#endif

#if defined __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2, 1.2, NULL, 10271, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3, 1.3, NULL, 10271, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectClassRec,116, 10272, 6, 1.2, NULL, 10271, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectClassRec,116, 10272, 10, 1.3, NULL, 10271, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectClassRec,224, 10272, 9, 2.0, NULL, 10271, NULL)
#elif defined __s390x__
CheckTypeSize(ObjectClassRec,224, 10272, 12, 1.3, NULL, 10271, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectClassRec,224, 10272, 11, 2.0, NULL, 10271, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of ObjectClassRec (10272)\n");
%d,%d,%d,'""2.0""',NULL,10271,NULL);\n",architecture,10272,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ObjectP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
