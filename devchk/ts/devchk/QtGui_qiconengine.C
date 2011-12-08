/*
 * Test of QtGui/qiconengine
 */
#include "hdrchk.h"
#include "QtGui/qiconengine.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qiconengine();
#else
int QtGui_qiconengine();
#endif
}


#ifdef TET_TEST
void QtGui_qiconengine()
{
#else
int QtGui_qiconengine()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qiconengine types\n");
#define TYPE QIconEngine
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qiconengine types\n\n",pcnt,cnt);
return cnt;
#endif

}
