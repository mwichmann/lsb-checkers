/*
 * Test of QtGui/qmenubar
 */
#include "hdrchk.h"
#include "QtGui/qmenubar.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qmenubar();
#else
int QtGui_qmenubar();
#endif
}


#ifdef TET_TEST
void QtGui_qmenubar()
{
#else
int QtGui_qmenubar()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qmenubar types\n");
#define TYPE QMenuBar
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qmenubar types\n\n",pcnt,cnt);
return cnt;
#endif

}
