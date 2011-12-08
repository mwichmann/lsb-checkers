/*
 * Test of QtCore/qthread
 */
#include "hdrchk.h"
#include "QtCore/qthread.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qthread();
#else
int QtCore_qthread();
#endif
}


#ifdef TET_TEST
void QtCore_qthread()
{
#else
int QtCore_qthread()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qthread types\n");
#define TYPE QThread
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qthread types\n\n",pcnt,cnt);
return cnt;
#endif

}
