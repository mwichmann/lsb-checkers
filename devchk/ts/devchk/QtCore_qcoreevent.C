/*
 * Test of QtCore/qcoreevent
 */
#include "hdrchk.h"
#include "QtCore/qcoreevent.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qcoreevent();
#else
int QtCore_qcoreevent();
#endif
}


#ifdef TET_TEST
void QtCore_qcoreevent()
{
#else
int QtCore_qcoreevent()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qcoreevent types\n");
#define TYPE QEvent
#undef TYPE

#define TYPE QTimerEvent
#undef TYPE

#define TYPE QChildEvent
#undef TYPE

#define TYPE QCustomEvent
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qcoreevent types\n\n",pcnt,cnt);
return cnt;
#endif

}
