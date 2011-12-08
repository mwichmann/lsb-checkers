/*
 * Test of QtCore/qpluginloader
 */
#include "hdrchk.h"
#include "QtCore/qpluginloader.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qpluginloader();
#else
int QtCore_qpluginloader();
#endif
}


#ifdef TET_TEST
void QtCore_qpluginloader()
{
#else
int QtCore_qpluginloader()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qpluginloader types\n");
#define TYPE QPluginLoader
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qpluginloader types\n\n",pcnt,cnt);
return cnt;
#endif

}
