/*
 * Test of X11/Composite.h
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
#include "X11/Composite.h"



#ifdef TET_TEST
void X11_Composite_h()
{
#else
int X11_Composite_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Composite.h\n");
#endif

printf("Checking data structures in X11/Composite.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _XtComposite_h */
#endif

#if defined __s390x__
CheckTypeSize(XtDoChangeProc,8, 100410, 12, 1.3, NULL, 100409, NULL)
#elif defined __x86_64__
CheckTypeSize(XtDoChangeProc,8, 100410, 11, 2.0, NULL, 100409, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtDoChangeProc,4, 100410, 10, 1.3, NULL, 100409, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtDoChangeProc,8, 100410, 9, 2.0, NULL, 100409, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtDoChangeProc,4, 100410, 6, 1.2, NULL, 100409, NULL)
#elif defined __ia64__
CheckTypeSize(XtDoChangeProc,8, 100410, 3, 1.3, NULL, 100409, NULL)
#elif defined __i386__
CheckTypeSize(XtDoChangeProc,4, 100410, 2, 1.2, NULL, 100409, NULL)
#else
Msg("Find size of XtDoChangeProc (100410)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100409,NULL);\n",architecture,100410,0);
#endif

#if 1
CheckTypeSize(CompositeWidgetClass,0, 1008895, 1, 1.2, NULL, 1009240, NULL)
#endif

#if 1
CheckTypeSize(XtOrderProc,0, 1008897, 1, 1.2, NULL, 1008898, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XtDoChangeProc_db)(Widget, WidgetList, Cardinal *, WidgetList, Cardinal *, XtPointer);
CheckFunctionTypedef(XtDoChangeProc,XtDoChangeProc_db);
#endif

#if 1
/* All */
typedef Cardinal (*XtOrderProc_db)(Widget);
CheckFunctionTypedef(XtOrderProc,XtOrderProc_db);
#endif

extern void XtChangeManagedSet_db(WidgetList, Cardinal, XtDoChangeProc, XtPointer, WidgetList, Cardinal);
CheckInterfacedef(XtChangeManagedSet,XtChangeManagedSet_db);
extern void XtManageChild_db(Widget);
CheckInterfacedef(XtManageChild,XtManageChild_db);
extern void XtManageChildren_db(WidgetList, Cardinal);
CheckInterfacedef(XtManageChildren,XtManageChildren_db);
extern void XtUnmanageChild_db(Widget);
CheckInterfacedef(XtUnmanageChild,XtUnmanageChild_db);
extern void XtUnmanageChildren_db(WidgetList, Cardinal);
CheckInterfacedef(XtUnmanageChildren,XtUnmanageChildren_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Composite.h\n\n",pcnt,cnt);
return cnt;
#endif

}
