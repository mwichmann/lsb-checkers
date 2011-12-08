/*
 * Test of QtGui/qmenu
 */
#include "hdrchk.h"
#include "QtGui/qmenu.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmenu();
#else
int QtGui_qmenu();
#endif
}


#ifdef TET_TEST
void QtGui_qmenu()
{
#else
int QtGui_qmenu()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmenu types\n");
#define TYPE QMenu
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmenu types\n\n",pcnt,cnt);
return cnt;
#endif

}
