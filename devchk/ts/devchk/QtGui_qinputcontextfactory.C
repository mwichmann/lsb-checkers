/*
 * Test of QtGui/qinputcontextfactory
 */
#include "hdrchk.h"
#include "QtGui/qinputcontextfactory.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qinputcontextfactory();
#else
int QtGui_qinputcontextfactory();
#endif
}


#ifdef TET_TEST
void QtGui_qinputcontextfactory()
{
#else
int QtGui_qinputcontextfactory()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qinputcontextfactory types\n");
#define TYPE QInputContextFactory
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qinputcontextfactory types\n\n",pcnt,cnt);
return cnt;
#endif

}
