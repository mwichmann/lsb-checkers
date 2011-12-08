/*
 * Test of QtSvg/qsvgrenderer
 */
#include "hdrchk.h"
#include "QtSvg/qsvgrenderer.h"


extern "C" {
#ifdef TET_TEST
void QtSvg_qsvgrenderer();
#else
int QtSvg_qsvgrenderer();
#endif
}


#ifdef TET_TEST
void QtSvg_qsvgrenderer()
{
#else
int QtSvg_qsvgrenderer()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSvg/qsvgrenderer types\n");
#define TYPE QSvgRenderer
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSvg/qsvgrenderer types\n\n",pcnt,cnt);
return cnt;
#endif

}
