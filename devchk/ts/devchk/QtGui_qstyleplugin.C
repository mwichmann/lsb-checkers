/*
 * Test of QtGui/qstyleplugin
 */
#include "hdrchk.h"
#include "QtGui/qstyleplugin.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstyleplugin();
#else
int QtGui_qstyleplugin();
#endif
}


#ifdef TET_TEST
void QtGui_qstyleplugin()
{
#else
int QtGui_qstyleplugin()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstyleplugin types\n");
#define TYPE QStylePlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstyleplugin types\n\n",pcnt,cnt);
return cnt;
#endif

}
