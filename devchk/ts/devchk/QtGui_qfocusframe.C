/*
 * Test of QtGui/qfocusframe
 */
#include "hdrchk.h"
#include "QtGui/qfocusframe.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qfocusframe();
#else
int QtGui_qfocusframe();
#endif
}


#ifdef TET_TEST
void QtGui_qfocusframe()
{
#else
int QtGui_qfocusframe()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qfocusframe types\n");
#define TYPE QFocusFrame
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qfocusframe types\n\n",pcnt,cnt);
return cnt;
#endif

}
