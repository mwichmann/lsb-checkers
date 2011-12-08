/*
 * Test of QtCore/qsemaphore
 */
#include "hdrchk.h"
#include "QtCore/qsemaphore.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qsemaphore();
#else
int QtCore_qsemaphore();
#endif
}


#ifdef TET_TEST
void QtCore_qsemaphore()
{
#else
int QtCore_qsemaphore()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qsemaphore types\n");
#define TYPE QSemaphore
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qsemaphore types\n\n",pcnt,cnt);
return cnt;
#endif

}
