/*
 * Test of QtGui/qprogressbar
 */
#include "hdrchk.h"
#include "QtGui/qprogressbar.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qprogressbar();
#else
int QtGui_qprogressbar();
#endif
}


#ifdef TET_TEST
void QtGui_qprogressbar()
{
#else
int QtGui_qprogressbar()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qprogressbar types\n");
#define TYPE QProgressBar
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qprogressbar types\n\n",pcnt,cnt);
return cnt;
#endif

}
