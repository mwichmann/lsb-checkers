/*
 * Test of QtCore/qsocketnotifier
 */
#include "hdrchk.h"
#include "QtCore/qsocketnotifier.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qsocketnotifier();
#else
int QtCore_qsocketnotifier();
#endif
}


#ifdef TET_TEST
void QtCore_qsocketnotifier()
{
#else
int QtCore_qsocketnotifier()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qsocketnotifier types\n");
#define TYPE QSocketNotifier
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qsocketnotifier types\n\n",pcnt,cnt);
return cnt;
#endif

}
