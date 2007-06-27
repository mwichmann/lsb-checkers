/*
 * Test of X11/CompositeP.h
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
#include "X11/CompositeP.h"



#ifdef TET_TEST
void X11_CompositeP_h()
{
#else
int X11_CompositeP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/CompositeP.h\n");
#endif

printf("Checking data structures in X11/CompositeP.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XtCompositeExtensionVersion
	CompareConstant(XtCompositeExtensionVersion,2L,4931,architecture,1.2,NULL)
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
	CompareConstant(XtInheritDeleteChild,((XtWidgetProc) _XtInherit),4934,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XtInheritDeleteChild\n");
cnt++;
#endif

#endif

#if defined __ia64__
CheckTypeSize(CompositeClassPart,40, 10244, 3, 1.3, NULL, 10242, NULL)
#elif defined __i386__
CheckTypeSize(CompositeClassPart,20, 10244, 2, 1.2, NULL, 10242, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeClassPart,20, 10244, 6, 1.2, NULL, 10242, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeClassPart,20, 10244, 10, 1.3, NULL, 10242, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeClassPart,40, 10244, 9, 2.0, NULL, 10242, NULL)
#elif defined __s390x__
CheckTypeSize(CompositeClassPart,40, 10244, 12, 1.3, NULL, 10242, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeClassPart,40, 10244, 11, 2.0, NULL, 10242, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10242,NULL);\n",architecture,10244,0);
Msg("Find size of CompositeClassPart (10244)\n");
#endif

#if defined __ia64__
CheckTypeSize(CompositeClassRec,264, 10240, 3, 1.3, NULL, 10239, NULL)
#elif defined __i386__
CheckTypeSize(CompositeClassRec,136, 10240, 2, 1.2, NULL, 10239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeClassRec,136, 10240, 6, 1.2, NULL, 10239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeClassRec,136, 10240, 10, 1.3, NULL, 10239, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeClassRec,264, 10240, 9, 2.0, NULL, 10239, NULL)
#elif defined __s390x__
CheckTypeSize(CompositeClassRec,264, 10240, 12, 1.3, NULL, 10239, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeClassRec,264, 10240, 11, 2.0, NULL, 10239, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10239, NULL);\n",architecture,10240,0);
Msg("Find size of CompositeClassRec (10240)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/CompositeP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
