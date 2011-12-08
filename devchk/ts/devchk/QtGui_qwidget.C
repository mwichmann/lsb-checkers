/*
 * Test of QtGui/qwidget
 */
#include "hdrchk.h"
#include "QtGui/qwidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qwidget();
#else
int QtGui_qwidget();
#endif
}


#ifdef TET_TEST
void QtGui_qwidget()
{
#else
int QtGui_qwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qwidget types\n");
#define TYPE QWidgetData
#undef TYPE

#define TYPE QWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
