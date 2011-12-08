/*
 * Test of QtGui/qproxymodel
 */
#include "hdrchk.h"
#include "QtGui/qproxymodel.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qproxymodel();
#else
int QtGui_qproxymodel();
#endif
}


#ifdef TET_TEST
void QtGui_qproxymodel()
{
#else
int QtGui_qproxymodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qproxymodel types\n");
#define TYPE QProxyModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qproxymodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
