/*
 * Test of QtGui/qpictureformatplugin
 */
#include "hdrchk.h"
#include "QtGui/qpictureformatplugin.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpictureformatplugin();
#else
int QtGui_qpictureformatplugin();
#endif
}


#ifdef TET_TEST
void QtGui_qpictureformatplugin()
{
#else
int QtGui_qpictureformatplugin()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpictureformatplugin types\n");
#define TYPE QPictureFormatPlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpictureformatplugin types\n\n",pcnt,cnt);
return cnt;
#endif

}
