/*
 * Test of QtGui/qabstractprintdialog
 */
#include "hdrchk.h"
#include "QtGui/qabstractprintdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractprintdialog();
#else
int QtGui_qabstractprintdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractprintdialog()
{
#else
int QtGui_qabstractprintdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractprintdialog types\n");
#define TYPE QAbstractPrintDialog
#undef TYPE

#define TYPE _Z526QFlagsIN20QAbstractPrintDialog17PrintDialogOptionEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractprintdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
