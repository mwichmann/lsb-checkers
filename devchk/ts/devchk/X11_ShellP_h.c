/*
 * Test of X11/ShellP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/ShellP.h"



#ifdef TET_TEST
void X11_ShellP_h()
{
#else
int X11_ShellP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ShellP.h\n");
#endif

printf("Checking data structures in X11/ShellP.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XtShellExtensionVersion */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritRootGeometryManager */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtShellPositionValid */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtShellNotReparented */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtShellPPositionOK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XtShellGeometryParsed */
#endif

#if 1
CheckTypeSize(ShellClassPart,0, 1009103, 1, 1.0, NULL, 1009102, NULL)
#endif

#if 1
CheckTypeSize(ShellClassExtensionRec,0, 1009105, 1, 1.0, NULL, 1009104, NULL)
#endif

#if 1
CheckTypeSize(ShellClassExtension,0, 1009106, 1, 1.0, NULL, 1009107, NULL)
#endif

#if 1
CheckTypeSize(ShellClassRec,0, 1009108, 1, 1.0, NULL, 9786, NULL)
#endif

#if 1
CheckTypeSize(ShellPart,0, 1009111, 1, 1.0, NULL, 1009110, NULL)
#endif

#if 1
CheckTypeSize(ShellRec,0, 1009113, 1, 1.0, NULL, 1009112, NULL)
#endif

#if 1
CheckTypeSize(ShellWidget,0, 1009114, 1, 1.0, NULL, 1009115, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellClassPart,0, 1009117, 1, 1.0, NULL, 1009116, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellClassRec,0, 1009118, 1, 1.0, NULL, 9789, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellPart,0, 1009120, 1, 1.0, NULL, 1009119, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellRec,0, 1009122, 1, 1.0, NULL, 1009121, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellWidget,0, 1009123, 1, 1.0, NULL, 1009124, NULL)
#endif

#if 1
CheckTypeSize(WMShellClassPart,0, 1009126, 1, 1.0, NULL, 1009125, NULL)
#endif

#if 1
CheckTypeSize(WMShellClassRec,0, 1009127, 1, 1.0, NULL, 9792, NULL)
#endif

#if 1
CheckTypeSize(WMShellPart,0, 1009131, 1, 1.0, NULL, 1009130, NULL)
#endif

#if 1
CheckTypeSize(WMShellRec,0, 1009133, 1, 1.0, NULL, 1009132, NULL)
#endif

#if 1
CheckTypeSize(WMShellWidget,0, 1009134, 1, 1.0, NULL, 1009135, NULL)
#endif

#if 1
CheckTypeSize(TransientShellClassPart,0, 1009137, 1, 1.0, NULL, 1009136, NULL)
#endif

#if 1
CheckTypeSize(TransientShellClassRec,0, 1009138, 1, 1.0, NULL, 9795, NULL)
#endif

#if 1
CheckTypeSize(TransientShellPart,0, 1009140, 1, 1.0, NULL, 1009139, NULL)
#endif

#if 1
CheckTypeSize(TransientShellRec,0, 1009142, 1, 1.0, NULL, 1009141, NULL)
#endif

#if 1
CheckTypeSize(TransientShellWidget,0, 1009143, 1, 1.0, NULL, 1009144, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellClassPart,0, 1009146, 1, 1.0, NULL, 1009145, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellClassRec,0, 1009147, 1, 1.0, NULL, 9798, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellPart,0, 1009149, 1, 1.0, NULL, 1009148, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellRec,0, 1009151, 1, 1.0, NULL, 1009150, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellWidget,0, 1009152, 1, 1.0, NULL, 1009153, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellClassPart,0, 1009155, 1, 1.0, NULL, 1009154, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellClassRec,0, 1009156, 1, 1.0, NULL, 9801, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellPart,0, 1009158, 1, 1.0, NULL, 1009157, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellRec,0, 1009160, 1, 1.0, NULL, 1009159, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellWidget,0, 1009161, 1, 1.0, NULL, 1009162, NULL)
#endif

#if 1
CheckTypeSize(SessionShellClassPart,0, 1009164, 1, 1.0, NULL, 1009163, NULL)
#endif

#if 1
CheckTypeSize(SessionShellClassRec,0, 1009165, 1, 1.0, NULL, 9804, NULL)
#endif

#if 1
CheckTypeSize(XtSaveYourself,0, 1009167, 1, 1.0, NULL, 1009168, NULL)
#endif

#if 1
CheckTypeSize(SessionShellPart,0, 1009170, 1, 1.0, NULL, 1009169, NULL)
#endif

#if 1
CheckTypeSize(SessionShellRec,0, 1009172, 1, 1.0, NULL, 1009171, NULL)
#endif

#if 1
CheckTypeSize(SessionShellWidget,0, 1009173, 1, 1.0, NULL, 1009174, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ShellP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
