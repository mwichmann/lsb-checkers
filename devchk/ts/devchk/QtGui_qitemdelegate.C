/*
 * Test of QtGui/qitemdelegate
 */
#include "hdrchk.h"
#include "QtGui/qitemdelegate.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qitemdelegate();
#else
int QtGui_qitemdelegate();
#endif
}


#ifdef TET_TEST
void QtGui_qitemdelegate()
{
#else
int QtGui_qitemdelegate()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qitemdelegate types\n");
#define TYPE QItemDelegate
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qitemdelegate types\n\n",pcnt,cnt);
return cnt;
#endif

}
