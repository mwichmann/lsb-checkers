/*
 * Test of QtGui/qpaintengine
 */
#include "hdrchk.h"
#include "QtGui/qpaintengine.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpaintengine();
#else
int QtGui_qpaintengine();
#endif
}


#ifdef TET_TEST
void QtGui_qpaintengine()
{
#else
int QtGui_qpaintengine()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpaintengine types\n");
#define TYPE QTextItem
#undef TYPE

#define TYPE _Z336QFlagsIN9QTextItem10RenderFlagEE
#undef TYPE

#define TYPE QPaintEngine
#undef TYPE

#define TYPE _Z456QFlagsIN12QPaintEngine18PaintEngineFeatureEE
#undef TYPE

#define TYPE _Z356QFlagsIN12QPaintEngine9DirtyFlagEE
#undef TYPE

#define TYPE QPaintEngineState
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpaintengine types\n\n",pcnt,cnt);
return cnt;
#endif

}
