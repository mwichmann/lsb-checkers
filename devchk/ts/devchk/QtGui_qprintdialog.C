/*
 * Test of QtGui/qprintdialog
 */
#include "hdrchk.h"
#include "QtGui/qprintdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qprintdialog();
#else
int QtGui_qprintdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qprintdialog()
{
#else
int QtGui_qprintdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qprintdialog types\n");
#define TYPE QPrintDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qprintdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
