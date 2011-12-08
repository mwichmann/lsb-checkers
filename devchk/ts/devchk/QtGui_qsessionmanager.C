/*
 * Test of QtGui/qsessionmanager
 */
#include "hdrchk.h"
#include "QtGui/qsessionmanager.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsessionmanager();
#else
int QtGui_qsessionmanager();
#endif
}


#ifdef TET_TEST
void QtGui_qsessionmanager()
{
#else
int QtGui_qsessionmanager()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsessionmanager types\n");
#define TYPE QSessionManager
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsessionmanager types\n\n",pcnt,cnt);
return cnt;
#endif

}
