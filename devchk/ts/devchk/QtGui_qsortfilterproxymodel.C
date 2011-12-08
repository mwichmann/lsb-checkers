/*
 * Test of QtGui/qsortfilterproxymodel
 */
#include "hdrchk.h"
#include "QtGui/qsortfilterproxymodel.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qsortfilterproxymodel();
#else
int QtGui_qsortfilterproxymodel();
#endif
}


#ifdef TET_TEST
void QtGui_qsortfilterproxymodel()
{
#else
int QtGui_qsortfilterproxymodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qsortfilterproxymodel types\n");
#define TYPE QSortFilterProxyModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qsortfilterproxymodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
