/*
 * Test of QtGui/qtableview
 */
#include "hdrchk.h"
#include "QtGui/qtableview.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtableview();
#else
int QtGui_qtableview();
#endif
}


#ifdef TET_TEST
void QtGui_qtableview()
{
#else
int QtGui_qtableview()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtableview types\n");
#define TYPE QTableView
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtableview types\n\n",pcnt,cnt);
return cnt;
#endif

}
