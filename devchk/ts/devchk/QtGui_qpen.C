/*
 * Test of QtGui/qpen
 */
#include "hdrchk.h"
#include "QtGui/qpen.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpen();
#else
int QtGui_qpen();
#endif
}


#ifdef TET_TEST
void QtGui_qpen()
{
#else
int QtGui_qpen()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpen types\n");
#define TYPE QPen
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpen types\n\n",pcnt,cnt);
return cnt;
#endif

}
