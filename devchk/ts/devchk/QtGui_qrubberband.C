/*
 * Test of QtGui/qrubberband
 */
#include "hdrchk.h"
#include "QtGui/qrubberband.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qrubberband();
#else
int QtGui_qrubberband();
#endif
}


#ifdef TET_TEST
void QtGui_qrubberband()
{
#else
int QtGui_qrubberband()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qrubberband types\n");
#define TYPE QRubberBand
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qrubberband types\n\n",pcnt,cnt);
return cnt;
#endif

}
