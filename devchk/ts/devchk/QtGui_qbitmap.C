/*
 * Test of QtGui/qbitmap
 */
#include "hdrchk.h"
#include "QtGui/qbitmap.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qbitmap();
#else
int QtGui_qbitmap();
#endif
}


#ifdef TET_TEST
void QtGui_qbitmap()
{
#else
int QtGui_qbitmap()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qbitmap types\n");
#define TYPE QBitmap
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qbitmap types\n\n",pcnt,cnt);
return cnt;
#endif

}
