/*
 * Test of QtGui/qmainwindow
 */
#include "hdrchk.h"
#include "QtGui/qmainwindow.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmainwindow();
#else
int QtGui_qmainwindow();
#endif
}


#ifdef TET_TEST
void QtGui_qmainwindow()
{
#else
int QtGui_qmainwindow()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmainwindow types\n");
#define TYPE QMainWindow
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmainwindow types\n\n",pcnt,cnt);
return cnt;
#endif

}
