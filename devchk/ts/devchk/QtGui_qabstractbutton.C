/*
 * Test of QtGui/qabstractbutton
 */
#include "hdrchk.h"
#include "QtGui/qabstractbutton.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractbutton();
#else
int QtGui_qabstractbutton();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractbutton()
{
#else
int QtGui_qabstractbutton()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractbutton types\n");
#define TYPE QAbstractButton
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractbutton types\n\n",pcnt,cnt);
return cnt;
#endif

}
