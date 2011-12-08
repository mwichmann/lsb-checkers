/*
 * Test of QtGui/qpixmap
 */
#include "hdrchk.h"
#include "QtGui/qpixmap.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpixmap();
#else
int QtGui_qpixmap();
#endif
}


#ifdef TET_TEST
void QtGui_qpixmap()
{
#else
int QtGui_qpixmap()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpixmap types\n");
#define TYPE QPixmap
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpixmap types\n\n",pcnt,cnt);
return cnt;
#endif

}
