/*
 * Test of QtGui/qstackedlayout
 */
#include "hdrchk.h"
#include "QtGui/qstackedlayout.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstackedlayout();
#else
int QtGui_qstackedlayout();
#endif
}


#ifdef TET_TEST
void QtGui_qstackedlayout()
{
#else
int QtGui_qstackedlayout()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstackedlayout types\n");
#define TYPE QStackedLayout
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstackedlayout types\n\n",pcnt,cnt);
return cnt;
#endif

}
