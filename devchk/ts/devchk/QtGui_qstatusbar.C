/*
 * Test of QtGui/qstatusbar
 */
#include "hdrchk.h"
#include "QtGui/qstatusbar.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstatusbar();
#else
int QtGui_qstatusbar();
#endif
}


#ifdef TET_TEST
void QtGui_qstatusbar()
{
#else
int QtGui_qstatusbar()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstatusbar types\n");
#define TYPE QStatusBar
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstatusbar types\n\n",pcnt,cnt);
return cnt;
#endif

}
