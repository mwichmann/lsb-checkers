/*
 * Test of X11/CompositeP.h
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
#include "X11/CompositeP.h"



#ifdef TET_TEST
void X11_CompositeP_h()
{
#else
int X11_CompositeP_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/CompositeP.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCompositeExtensionVersion
	CompareConstant(XtCompositeExtensionVersion,2L,4931,architecture)
#else
Msg( "Error: Constant not found: XtCompositeExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritGeometryManager */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritInsertChild */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtInheritDeleteChild
	CompareConstant(XtInheritDeleteChild,((XtWidgetProc) _XtInherit),4934,architecture)
#else
Msg( "Error: Constant not found: XtInheritDeleteChild\n");
cnt++;
#endif

#endif

#if __ia64__
CheckTypeSize(CompositeClassPart,40, 10244, 3)
#elif __i386__
CheckTypeSize(CompositeClassPart,20, 10244, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(CompositeClassPart,20, 10244, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(CompositeClassPart,20, 10244, 10)
#elif __powerpc64__
CheckTypeSize(CompositeClassPart,40, 10244, 9)
#elif __s390x__
CheckTypeSize(CompositeClassPart,0, 10244, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10244,0);
Msg("Find size of CompositeClassPart (10244)\n");
#endif

#if __ia64__
CheckTypeSize(CompositeClassRec,264, 10240, 3)
#elif __i386__
CheckTypeSize(CompositeClassRec,136, 10240, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(CompositeClassRec,136, 10240, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(CompositeClassRec,136, 10240, 10)
#elif __powerpc64__
CheckTypeSize(CompositeClassRec,264, 10240, 9)
#elif __s390x__
CheckTypeSize(CompositeClassRec,0, 10240, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10240,0);
Msg("Find size of CompositeClassRec (10240)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/CompositeP.h\n",cnt);
return cnt;
#endif

}
