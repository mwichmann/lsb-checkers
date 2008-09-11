/*
 * Test of X11/ObjectP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
/* No test for _XtObjectP_h_ */
#endif

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

#if 1
CheckTypeSize(ObjectPart,0, 1009045, 1, 1.2, NULL, 1009043, NULL)
#endif

#if 1
CheckTypeSize(ObjectRec,0, 1009046, 1, 1.2, NULL, 1009044, NULL)
#endif

#if 1
CheckTypeSize(ObjectClassPart,0, 1009048, 1, 1.2, NULL, 1009047, NULL)
#endif

#if 1
CheckTypeSize(ObjectClassExtensionRec,0, 1009050, 1, 1.2, NULL, 1009049, NULL)
#endif

#if 1
CheckTypeSize(ObjectClassExtension,0, 1009051, 1, 1.2, NULL, 1009052, NULL)
#endif

#if defined __s390x__
CheckTypeSize(ObjectClassRec,224, 10272, 12, 1.3, NULL, 10271, NULL)
#elif defined __x86_64__
CheckTypeSize(ObjectClassRec,224, 10272, 11, 2.0, NULL, 10271, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ObjectClassRec,116, 10272, 10, 1.3, NULL, 10271, NULL)
#elif defined __powerpc64__
CheckTypeSize(ObjectClassRec,224, 10272, 9, 2.0, NULL, 10271, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ObjectClassRec,116, 10272, 6, 1.2, NULL, 10271, NULL)
#elif defined __ia64__
CheckTypeSize(ObjectClassRec,224, 10272, 3, 1.3, NULL, 10271, NULL)
#elif defined __i386__
CheckTypeSize(ObjectClassRec,116, 10272, 2, 1.2, NULL, 10271, NULL)
#else
Msg("Find size of ObjectClassRec (10272)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10271, NULL);\n",architecture,10272,0);
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
