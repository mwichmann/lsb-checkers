/*
 * Test of QtGui/qprinter
 */
#include "hdrchk.h"
#include "QtGui/qprinter.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qprinter();
#else
int QtGui_qprinter();
#endif
}


#ifdef TET_TEST
void QtGui_qprinter()
{
#else
int QtGui_qprinter()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qprinter types\n");
#define TYPE QPrinter
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qprinter types\n\n",pcnt,cnt);
return cnt;
#endif

}
