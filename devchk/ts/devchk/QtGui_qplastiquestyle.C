/*
 * Test of QtGui/qplastiquestyle
 */
#include "hdrchk.h"
#include "QtGui/qplastiquestyle.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qplastiquestyle();
#else
int QtGui_qplastiquestyle();
#endif
}


#ifdef TET_TEST
void QtGui_qplastiquestyle()
{
#else
int QtGui_qplastiquestyle()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qplastiquestyle types\n");
#define TYPE QPlastiqueStyle
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qplastiquestyle types\n\n",pcnt,cnt);
return cnt;
#endif

}
