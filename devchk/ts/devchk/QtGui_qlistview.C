/*
 * Test of QtGui/qlistview
 */
#include "hdrchk.h"
#include "QtGui/qlistview.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlistview();
#else
int QtGui_qlistview();
#endif
}


#ifdef TET_TEST
void QtGui_qlistview()
{
#else
int QtGui_qlistview()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlistview types\n");
#define TYPE QListView
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlistview types\n\n",pcnt,cnt);
return cnt;
#endif

}
