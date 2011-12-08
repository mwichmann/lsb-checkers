/*
 * Test of QtGui/qsizepolicy
 */
#include "hdrchk.h"
#include "QtGui/qsizepolicy.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsizepolicy();
#else
int QtGui_qsizepolicy();
#endif
}


#ifdef TET_TEST
void QtGui_qsizepolicy()
{
#else
int QtGui_qsizepolicy()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsizepolicy types\n");
#define TYPE QSizePolicy
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsizepolicy types\n\n",pcnt,cnt);
return cnt;
#endif

}
