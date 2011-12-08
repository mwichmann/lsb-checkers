/*
 * Test of QtGui/qcolormap
 */
#include "hdrchk.h"
#include "QtGui/qcolormap.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcolormap();
#else
int QtGui_qcolormap();
#endif
}


#ifdef TET_TEST
void QtGui_qcolormap()
{
#else
int QtGui_qcolormap()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcolormap types\n");
#define TYPE QColormap
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcolormap types\n\n",pcnt,cnt);
return cnt;
#endif

}
