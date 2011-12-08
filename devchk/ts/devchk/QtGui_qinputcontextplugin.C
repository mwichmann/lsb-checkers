/*
 * Test of QtGui/qinputcontextplugin
 */
#include "hdrchk.h"
#include "QtGui/qinputcontextplugin.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qinputcontextplugin();
#else
int QtGui_qinputcontextplugin();
#endif
}


#ifdef TET_TEST
void QtGui_qinputcontextplugin()
{
#else
int QtGui_qinputcontextplugin()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qinputcontextplugin types\n");
#define TYPE QInputContextPlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qinputcontextplugin types\n\n",pcnt,cnt);
return cnt;
#endif

}
