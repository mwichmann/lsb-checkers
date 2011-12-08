/*
 * Test of QtGui/qapplication
 */
#include "hdrchk.h"
#include "QtGui/qapplication.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qapplication();
#else
int QtGui_qapplication();
#endif
}


#ifdef TET_TEST
void QtGui_qapplication()
{
#else
int QtGui_qapplication()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qapplication types\n");
#define TYPE QApplication
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qapplication types\n\n",pcnt,cnt);
return cnt;
#endif

}
