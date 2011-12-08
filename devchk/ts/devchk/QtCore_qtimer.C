/*
 * Test of QtCore/qtimer
 */
#include "hdrchk.h"
#include "QtCore/qtimer.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qtimer();
#else
int QtCore_qtimer();
#endif
}


#ifdef TET_TEST
void QtCore_qtimer()
{
#else
int QtCore_qtimer()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qtimer types\n");
#define TYPE QTimer
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qtimer types\n\n",pcnt,cnt);
return cnt;
#endif

}
