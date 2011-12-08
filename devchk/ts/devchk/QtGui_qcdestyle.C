/*
 * Test of QtGui/qcdestyle
 */
#include "hdrchk.h"
#include "QtGui/qcdestyle.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcdestyle();
#else
int QtGui_qcdestyle();
#endif
}


#ifdef TET_TEST
void QtGui_qcdestyle()
{
#else
int QtGui_qcdestyle()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcdestyle types\n");
#define TYPE QCDEStyle
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcdestyle types\n\n",pcnt,cnt);
return cnt;
#endif

}
