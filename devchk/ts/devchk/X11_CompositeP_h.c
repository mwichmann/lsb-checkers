/*
 * Test of X11/CompositeP.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef XtCompositeExtensionVersion
	CompareConstant(XtCompositeExtensionVersion,2L)
#else
Msg( "Error: Constant not found: XtCompositeExtensionVersion\n");
cnt++;
#endif

/* No test for XtInheritGeometryManager */
/* No test for XtInheritInsertChild */
#ifdef XtInheritDeleteChild
	CompareConstant(XtInheritDeleteChild,((XtWidgetProc) _XtInherit))
#else
Msg( "Error: Constant not found: XtInheritDeleteChild\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(CompositeClassRec,136, 10240, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10240,0);
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
