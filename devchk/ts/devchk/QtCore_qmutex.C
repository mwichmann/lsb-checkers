/*
 * Test of QtCore/qmutex
 */
#include "hdrchk.h"
#include "QtCore/qmutex.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qmutex();
#else
int QtCore_qmutex();
#endif
}


#ifdef TET_TEST
void QtCore_qmutex()
{
#else
int QtCore_qmutex()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qmutex types\n");
#define TYPE QMutex
#undef TYPE

#define TYPE QMutexLocker
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qmutex types\n\n",pcnt,cnt);
return cnt;
#endif

}
