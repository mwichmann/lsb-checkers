/*
 * Test of QtCore/qthreadstorage
 */
#include "hdrchk.h"
#include "QtCore/qthreadstorage.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qthreadstorage();
#else
int QtCore_qthreadstorage();
#endif
}


#ifdef TET_TEST
void QtCore_qthreadstorage()
{
#else
int QtCore_qthreadstorage()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qthreadstorage types\n");
#define TYPE QThreadStorageData
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qthreadstorage types\n\n",pcnt,cnt);
return cnt;
#endif

}
