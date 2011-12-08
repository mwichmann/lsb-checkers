/*
 * Test of QtGui/qtreewidget
 */
#include "hdrchk.h"
#include "QtGui/qtreewidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtreewidget();
#else
int QtGui_qtreewidget();
#endif
}


#ifdef TET_TEST
void QtGui_qtreewidget()
{
#else
int QtGui_qtreewidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtreewidget types\n");
#define TYPE QTreeWidgetItem
#undef TYPE

#define TYPE QTreeWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtreewidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
