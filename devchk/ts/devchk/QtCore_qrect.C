/*
 * Test of QtCore/qrect
 */
#include "hdrchk.h"
#include "QtCore/qrect.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qrect();
#else
int QtCore_qrect();
#endif
}


#ifdef TET_TEST
void QtCore_qrect()
{
#else
int QtCore_qrect()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qrect types\n");
#define TYPE QRect
#undef TYPE

#define TYPE QRectF
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qrect types\n\n",pcnt,cnt);
return cnt;
#endif

}
