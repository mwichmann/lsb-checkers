/*
 * Test of QtGui/qlistwidget
 */
#include "hdrchk.h"
#include "QtGui/qlistwidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlistwidget();
#else
int QtGui_qlistwidget();
#endif
}


#ifdef TET_TEST
void QtGui_qlistwidget()
{
#else
int QtGui_qlistwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlistwidget types\n");
#define TYPE QListWidgetItem
#undef TYPE

#define TYPE QListWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlistwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
