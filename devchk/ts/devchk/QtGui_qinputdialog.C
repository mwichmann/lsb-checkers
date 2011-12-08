/*
 * Test of QtGui/qinputdialog
 */
#include "hdrchk.h"
#include "QtGui/qinputdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qinputdialog();
#else
int QtGui_qinputdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qinputdialog()
{
#else
int QtGui_qinputdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qinputdialog types\n");
#define TYPE QInputDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qinputdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
