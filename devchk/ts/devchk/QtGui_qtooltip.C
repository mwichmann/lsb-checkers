/*
 * Test of QtGui/qtooltip
 */
#include "hdrchk.h"
#include "QtGui/qtooltip.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtooltip();
#else
int QtGui_qtooltip();
#endif
}


#ifdef TET_TEST
void QtGui_qtooltip()
{
#else
int QtGui_qtooltip()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtooltip types\n");
#define TYPE QToolTip
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtooltip types\n\n",pcnt,cnt);
return cnt;
#endif

}
