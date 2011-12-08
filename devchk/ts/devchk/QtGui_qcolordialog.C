/*
 * Test of QtGui/qcolordialog
 */
#include "hdrchk.h"
#include "QtGui/qcolordialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcolordialog();
#else
int QtGui_qcolordialog();
#endif
}


#ifdef TET_TEST
void QtGui_qcolordialog()
{
#else
int QtGui_qcolordialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcolordialog types\n");
#define TYPE QColorDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcolordialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
