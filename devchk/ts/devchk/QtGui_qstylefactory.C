/*
 * Test of QtGui/qstylefactory
 */
#include "hdrchk.h"
#include "QtGui/qstylefactory.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstylefactory();
#else
int QtGui_qstylefactory();
#endif
}


#ifdef TET_TEST
void QtGui_qstylefactory()
{
#else
int QtGui_qstylefactory()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstylefactory types\n");
#define TYPE QStyleFactory
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstylefactory types\n\n",pcnt,cnt);
return cnt;
#endif

}
