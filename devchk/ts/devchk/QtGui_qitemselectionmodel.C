/*
 * Test of QtGui/qitemselectionmodel
 */
#include "hdrchk.h"
#include "QtGui/qitemselectionmodel.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qitemselectionmodel();
#else
int QtGui_qitemselectionmodel();
#endif
}


#ifdef TET_TEST
void QtGui_qitemselectionmodel()
{
#else
int QtGui_qitemselectionmodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qitemselectionmodel types\n");
#define TYPE QItemSelectionRange
#undef TYPE

#define TYPE QItemSelectionModel
#undef TYPE

#define TYPE _Z476QFlagsIN19QItemSelectionModel13SelectionFlagEE
#undef TYPE

#define TYPE QItemSelection
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qitemselectionmodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
