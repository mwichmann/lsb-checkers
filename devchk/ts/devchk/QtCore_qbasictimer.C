/*
 * Test of QtCore/qbasictimer
 */
#include "hdrchk.h"
#include "QtCore/qbasictimer.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qbasictimer();
#else
int QtCore_qbasictimer();
#endif
}


#ifdef TET_TEST
void QtCore_qbasictimer()
{
#else
int QtCore_qbasictimer()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qbasictimer types\n");
#define TYPE QBasicTimer
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qbasictimer types\n\n",pcnt,cnt);
return cnt;
#endif

}
