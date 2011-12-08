/*
 * Test of QtCore/qreadwritelock
 */
#include "hdrchk.h"
#include "QtCore/qreadwritelock.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qreadwritelock();
#else
int QtCore_qreadwritelock();
#endif
}


#ifdef TET_TEST
void QtCore_qreadwritelock()
{
#else
int QtCore_qreadwritelock()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qreadwritelock types\n");
#define TYPE QReadWriteLock
#undef TYPE

#define TYPE QReadLocker
#undef TYPE

#define TYPE QWriteLocker
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qreadwritelock types\n\n",pcnt,cnt);
return cnt;
#endif

}
