/*
 * Test of QtGui/qprintengine
 */
#include "hdrchk.h"
#include "QtGui/qprintengine.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qprintengine();
#else
int QtGui_qprintengine();
#endif
}


#ifdef TET_TEST
void QtGui_qprintengine()
{
#else
int QtGui_qprintengine()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qprintengine types\n");
#define TYPE QPrintEngine
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qprintengine types\n\n",pcnt,cnt);
return cnt;
#endif

}
