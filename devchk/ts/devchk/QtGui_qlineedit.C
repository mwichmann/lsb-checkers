/*
 * Test of QtGui/qlineedit
 */
#include "hdrchk.h"
#include "QtGui/qlineedit.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlineedit();
#else
int QtGui_qlineedit();
#endif
}


#ifdef TET_TEST
void QtGui_qlineedit()
{
#else
int QtGui_qlineedit()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlineedit types\n");
#define TYPE QLineEdit
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlineedit types\n\n",pcnt,cnt);
return cnt;
#endif

}
