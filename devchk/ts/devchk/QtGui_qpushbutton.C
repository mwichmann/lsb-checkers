/*
 * Test of QtGui/qpushbutton
 */
#include "hdrchk.h"
#include "QtGui/qpushbutton.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpushbutton();
#else
int QtGui_qpushbutton();
#endif
}


#ifdef TET_TEST
void QtGui_qpushbutton()
{
#else
int QtGui_qpushbutton()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpushbutton types\n");
#define TYPE QPushButton
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpushbutton types\n\n",pcnt,cnt);
return cnt;
#endif

}
