/*
 * Test of QtGui/qstackedwidget
 */
#include "hdrchk.h"
#include "QtGui/qstackedwidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstackedwidget();
#else
int QtGui_qstackedwidget();
#endif
}


#ifdef TET_TEST
void QtGui_qstackedwidget()
{
#else
int QtGui_qstackedwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstackedwidget types\n");
#define TYPE QStackedWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstackedwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
