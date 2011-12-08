/*
 * Test of QtGui/qmatrix
 */
#include "hdrchk.h"
#include "QtGui/qmatrix.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmatrix();
#else
int QtGui_qmatrix();
#endif
}


#ifdef TET_TEST
void QtGui_qmatrix()
{
#else
int QtGui_qmatrix()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmatrix types\n");
#define TYPE QMatrix
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmatrix types\n\n",pcnt,cnt);
return cnt;
#endif

}
