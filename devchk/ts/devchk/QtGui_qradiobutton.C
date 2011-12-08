/*
 * Test of QtGui/qradiobutton
 */
#include "hdrchk.h"
#include "QtGui/qradiobutton.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qradiobutton();
#else
int QtGui_qradiobutton();
#endif
}


#ifdef TET_TEST
void QtGui_qradiobutton()
{
#else
int QtGui_qradiobutton()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qradiobutton types\n");
#define TYPE QRadioButton
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qradiobutton types\n\n",pcnt,cnt);
return cnt;
#endif

}
