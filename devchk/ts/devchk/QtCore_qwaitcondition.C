/*
 * Test of QtCore/qwaitcondition
 */
#include "hdrchk.h"
#include "QtCore/qwaitcondition.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qwaitcondition();
#else
int QtCore_qwaitcondition();
#endif
}


#ifdef TET_TEST
void QtCore_qwaitcondition()
{
#else
int QtCore_qwaitcondition()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qwaitcondition types\n");
#define TYPE QWaitCondition
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qwaitcondition types\n\n",pcnt,cnt);
return cnt;
#endif

}
