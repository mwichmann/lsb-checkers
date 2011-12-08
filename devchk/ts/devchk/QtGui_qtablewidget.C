/*
 * Test of QtGui/qtablewidget
 */
#include "hdrchk.h"
#include "QtGui/qtablewidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtablewidget();
#else
int QtGui_qtablewidget();
#endif
}


#ifdef TET_TEST
void QtGui_qtablewidget()
{
#else
int QtGui_qtablewidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtablewidget types\n");
#define TYPE QTableWidgetSelectionRange
#undef TYPE

#define TYPE QTableWidgetItem
#undef TYPE

#define TYPE QTableWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtablewidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
