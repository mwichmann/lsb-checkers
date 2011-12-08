/*
 * Test of QtGui/qsizegrip
 */
#include "hdrchk.h"
#include "QtGui/qsizegrip.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsizegrip();
#else
int QtGui_qsizegrip();
#endif
}


#ifdef TET_TEST
void QtGui_qsizegrip()
{
#else
int QtGui_qsizegrip()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsizegrip types\n");
#define TYPE QSizeGrip
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsizegrip types\n\n",pcnt,cnt);
return cnt;
#endif

}
