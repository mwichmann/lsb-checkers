/*
 * Test of QtGui/qaccessiblewidget
 */
#include "hdrchk.h"
#include "QtGui/qaccessiblewidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qaccessiblewidget();
#else
int QtGui_qaccessiblewidget();
#endif
}


#ifdef TET_TEST
void QtGui_qaccessiblewidget()
{
#else
int QtGui_qaccessiblewidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qaccessiblewidget types\n");
#define TYPE QAccessibleWidget
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qaccessiblewidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
