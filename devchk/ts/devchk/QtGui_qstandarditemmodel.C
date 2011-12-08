/*
 * Test of QtGui/qstandarditemmodel
 */
#include "hdrchk.h"
#include "QtGui/qstandarditemmodel.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstandarditemmodel();
#else
int QtGui_qstandarditemmodel();
#endif
}


#ifdef TET_TEST
void QtGui_qstandarditemmodel()
{
#else
int QtGui_qstandarditemmodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstandarditemmodel types\n");
#define TYPE QStandardItemModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstandarditemmodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
