/*
 * Test of X11/CompositeP.h
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
#include <X11/xpm.h>
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
/* No test for _XtCompositeP_h */
#endif

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

#if defined __s390x__
CheckTypeSize(struct _CompositeClassPart,40, 100647, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,12,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,12,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,12,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,12,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,12,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,12,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,12,78449)
CheckOffset(struct _CompositeClassPart,extension,32,12,78449)
#elif defined __x86_64__
CheckTypeSize(struct _CompositeClassPart,40, 100647, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,11,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,11,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,11,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,11,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,11,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,11,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,11,78449)
CheckOffset(struct _CompositeClassPart,extension,32,11,78449)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _CompositeClassPart,20, 100647, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,4,10,78446)
CheckOffset(struct _CompositeClassPart,change_managed,4,10,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,4,10,78447)
CheckOffset(struct _CompositeClassPart,insert_child,8,10,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,4,10,78448)
CheckOffset(struct _CompositeClassPart,delete_child,12,10,78448)
CheckMemberSize(struct _CompositeClassPart,extension,4,10,78449)
CheckOffset(struct _CompositeClassPart,extension,16,10,78449)
#elif defined __powerpc64__
CheckTypeSize(struct _CompositeClassPart,40, 100647, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,9,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,9,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,9,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,9,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,9,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,9,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,9,78449)
CheckOffset(struct _CompositeClassPart,extension,32,9,78449)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _CompositeClassPart,20, 100647, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,4,6,78446)
CheckOffset(struct _CompositeClassPart,change_managed,4,6,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,4,6,78447)
CheckOffset(struct _CompositeClassPart,insert_child,8,6,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,4,6,78448)
CheckOffset(struct _CompositeClassPart,delete_child,12,6,78448)
CheckMemberSize(struct _CompositeClassPart,extension,4,6,78449)
CheckOffset(struct _CompositeClassPart,extension,16,6,78449)
#elif defined __ia64__
CheckTypeSize(struct _CompositeClassPart,40, 100647, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,8,3,78446)
CheckOffset(struct _CompositeClassPart,change_managed,8,3,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,8,3,78447)
CheckOffset(struct _CompositeClassPart,insert_child,16,3,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,8,3,78448)
CheckOffset(struct _CompositeClassPart,delete_child,24,3,78448)
CheckMemberSize(struct _CompositeClassPart,extension,8,3,78449)
CheckOffset(struct _CompositeClassPart,extension,32,3,78449)
#elif defined __i386__
CheckTypeSize(struct _CompositeClassPart,20, 100647, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _CompositeClassPart,change_managed,4,2,78446)
CheckOffset(struct _CompositeClassPart,change_managed,4,2,78446)
CheckMemberSize(struct _CompositeClassPart,insert_child,4,2,78447)
CheckOffset(struct _CompositeClassPart,insert_child,8,2,78447)
CheckMemberSize(struct _CompositeClassPart,delete_child,4,2,78448)
CheckOffset(struct _CompositeClassPart,delete_child,12,2,78448)
CheckMemberSize(struct _CompositeClassPart,extension,4,2,78449)
CheckOffset(struct _CompositeClassPart,extension,16,2,78449)
#else
Msg("Find size of _CompositeClassPart (100647)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100647,0);
#endif

#if defined __s390x__
CheckTypeSize(CompositeClassPart,40, 100648, 12, 1.3, NULL, 100647, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeClassPart,40, 100648, 11, 2.0, NULL, 100647, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeClassPart,20, 100648, 10, 1.3, NULL, 100647, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeClassPart,40, 100648, 9, 2.0, NULL, 100647, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeClassPart,20, 100648, 6, 1.2, NULL, 100647, NULL)
#elif defined __ia64__
CheckTypeSize(CompositeClassPart,40, 100648, 3, 1.3, NULL, 100647, NULL)
#elif defined __i386__
CheckTypeSize(CompositeClassPart,20, 100648, 2, 1.2, NULL, 100647, NULL)
#else
Msg("Find size of CompositeClassPart (100648)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100647,NULL);\n",architecture,100648,0);
#endif

#if defined __s390x__
CheckTypeSize(CompositeClassRec,264, 10240, 12, 1.3, NULL, 10239, NULL)
#elif defined __x86_64__
CheckTypeSize(CompositeClassRec,264, 10240, 11, 2.0, NULL, 10239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CompositeClassRec,136, 10240, 10, 1.3, NULL, 10239, NULL)
#elif defined __powerpc64__
CheckTypeSize(CompositeClassRec,264, 10240, 9, 2.0, NULL, 10239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CompositeClassRec,136, 10240, 6, 1.2, NULL, 10239, NULL)
#elif defined __ia64__
CheckTypeSize(CompositeClassRec,264, 10240, 3, 1.3, NULL, 10239, NULL)
#elif defined __i386__
CheckTypeSize(CompositeClassRec,136, 10240, 2, 1.2, NULL, 10239, NULL)
#else
Msg("Find size of CompositeClassRec (10240)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10239, NULL);\n",architecture,10240,0);
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
