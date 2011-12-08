/*
 * Test of QtCore/qshareddata
 */
#include "hdrchk.h"
#include "QtCore/qshareddata.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qshareddata();
#else
int QtCore_qshareddata();
#endif
}


#ifdef TET_TEST
void QtCore_qshareddata()
{
#else
int QtCore_qshareddata()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qshareddata types\n");
#define TYPE QSharedData
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qshareddata types\n\n",pcnt,cnt);
return cnt;
#endif

}
