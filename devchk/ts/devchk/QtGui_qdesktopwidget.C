/*
 * Test of QtGui/qdesktopwidget
 */
#include "hdrchk.h"
#include "QtGui/qdesktopwidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdesktopwidget();
#else
int QtGui_qdesktopwidget();
#endif
}


#ifdef TET_TEST
void QtGui_qdesktopwidget()
{
#else
int QtGui_qdesktopwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdesktopwidget types\n");
#define TYPE QDesktopWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdesktopwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
