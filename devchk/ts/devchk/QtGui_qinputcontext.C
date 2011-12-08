/*
 * Test of QtGui/qinputcontext
 */
#include "hdrchk.h"
#include "QtGui/qinputcontext.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qinputcontext();
#else
int QtGui_qinputcontext();
#endif
}


#ifdef TET_TEST
void QtGui_qinputcontext()
{
#else
int QtGui_qinputcontext()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qinputcontext types\n");
#define TYPE QInputContext
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qinputcontext types\n\n",pcnt,cnt);
return cnt;
#endif

}
