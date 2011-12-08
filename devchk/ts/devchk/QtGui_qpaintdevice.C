/*
 * Test of QtGui/qpaintdevice
 */
#include "hdrchk.h"
#include "QtGui/qpaintdevice.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpaintdevice();
#else
int QtGui_qpaintdevice();
#endif
}


#ifdef TET_TEST
void QtGui_qpaintdevice()
{
#else
int QtGui_qpaintdevice()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpaintdevice types\n");
#define TYPE QPaintDevice
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpaintdevice types\n\n",pcnt,cnt);
return cnt;
#endif

}
