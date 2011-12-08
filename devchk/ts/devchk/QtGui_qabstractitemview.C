/*
 * Test of QtGui/qabstractitemview
 */
#include "hdrchk.h"
#include "QtGui/qabstractitemview.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractitemview();
#else
int QtGui_qabstractitemview();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractitemview()
{
#else
int QtGui_qabstractitemview()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractitemview types\n");
#define TYPE QAbstractItemView
#undef TYPE

#define TYPE _Z436QFlagsIN17QAbstractItemView11EditTriggerEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractitemview types\n\n",pcnt,cnt);
return cnt;
#endif

}
