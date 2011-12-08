/*
 * Test of QtGui/qgridlayout
 */
#include "hdrchk.h"
#include "QtGui/qgridlayout.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qgridlayout();
#else
int QtGui_qgridlayout();
#endif
}


#ifdef TET_TEST
void QtGui_qgridlayout()
{
#else
int QtGui_qgridlayout()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qgridlayout types\n");
#define TYPE QGridLayout
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qgridlayout types\n\n",pcnt,cnt);
return cnt;
#endif

}
