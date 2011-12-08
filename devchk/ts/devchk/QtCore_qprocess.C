/*
 * Test of QtCore/qprocess
 */
#include "hdrchk.h"
#include "QtCore/qprocess.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qprocess();
#else
int QtCore_qprocess();
#endif
}


#ifdef TET_TEST
void QtCore_qprocess()
{
#else
int QtCore_qprocess()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qprocess types\n");
#define TYPE QProcess
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qprocess types\n\n",pcnt,cnt);
return cnt;
#endif

}
