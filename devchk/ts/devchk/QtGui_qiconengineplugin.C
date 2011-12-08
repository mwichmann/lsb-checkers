/*
 * Test of QtGui/qiconengineplugin
 */
#include "hdrchk.h"
#include "QtGui/qiconengineplugin.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qiconengineplugin();
#else
int QtGui_qiconengineplugin();
#endif
}


#ifdef TET_TEST
void QtGui_qiconengineplugin()
{
#else
int QtGui_qiconengineplugin()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qiconengineplugin types\n");
#define TYPE QIconEnginePlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qiconengineplugin types\n\n",pcnt,cnt);
return cnt;
#endif

}
