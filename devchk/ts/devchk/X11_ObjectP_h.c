/*
 * Test of X11/ObjectP.h
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

#ifdef XtObjectExtensionVersion
	CompareConstant(XtObjectExtensionVersion,1L)
#else
Msg( "Error: Constant not found: XtObjectExtensionVersion\n");
cnt++;
#endif

#ifdef XtInheritAllocate
	CompareConstant(XtInheritAllocate,((XtAllocateProc) _XtInherit))
#else
Msg( "Error: Constant not found: XtInheritAllocate\n");
cnt++;
#endif

#ifdef XtInheritDeallocate
	CompareConstant(XtInheritDeallocate,((XtDeallocateProc) _XtInherit))
#else
Msg( "Error: Constant not found: XtInheritDeallocate\n");
cnt++;
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
