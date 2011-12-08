/*
 * Test of QtGui/qabstractitemdelegate
 */
#include "hdrchk.h"
#include "QtGui/qabstractitemdelegate.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractitemdelegate();
#else
int QtGui_qabstractitemdelegate();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractitemdelegate()
{
#else
int QtGui_qabstractitemdelegate()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractitemdelegate types\n");
#define TYPE QAbstractItemDelegate
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractitemdelegate types\n\n",pcnt,cnt);
return cnt;
#endif

}
