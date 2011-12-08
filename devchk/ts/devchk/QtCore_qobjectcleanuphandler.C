/*
 * Test of QtCore/qobjectcleanuphandler
 */
#include "hdrchk.h"
#include "QtCore/qobjectcleanuphandler.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qobjectcleanuphandler();
#else
int QtCore_qobjectcleanuphandler();
#endif
}


#ifdef TET_TEST
void QtCore_qobjectcleanuphandler()
{
#else
int QtCore_qobjectcleanuphandler()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qobjectcleanuphandler types\n");
#define TYPE QObjectCleanupHandler
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qobjectcleanuphandler types\n\n",pcnt,cnt);
return cnt;
#endif

}
