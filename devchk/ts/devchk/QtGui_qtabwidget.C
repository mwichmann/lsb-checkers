/*
 * Test of QtGui/qtabwidget
 */
#include "hdrchk.h"
#include "QtGui/qtabwidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtabwidget();
#else
int QtGui_qtabwidget();
#endif
}


#ifdef TET_TEST
void QtGui_qtabwidget()
{
#else
int QtGui_qtabwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtabwidget types\n");
#define TYPE QTabWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtabwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
