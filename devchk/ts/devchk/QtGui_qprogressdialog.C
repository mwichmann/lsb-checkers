/*
 * Test of QtGui/qprogressdialog
 */
#include "hdrchk.h"
#include "QtGui/qprogressdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qprogressdialog();
#else
int QtGui_qprogressdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qprogressdialog()
{
#else
int QtGui_qprogressdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qprogressdialog types\n");
#define TYPE QProgressDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qprogressdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
