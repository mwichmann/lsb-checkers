/*
 * Test of QtGui/qgroupbox
 */
#include "hdrchk.h"
#include "QtGui/qgroupbox.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qgroupbox();
#else
int QtGui_qgroupbox();
#endif
}


#ifdef TET_TEST
void QtGui_qgroupbox()
{
#else
int QtGui_qgroupbox()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qgroupbox types\n");
#define TYPE QGroupBox
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qgroupbox types\n\n",pcnt,cnt);
return cnt;
#endif

}
