/*
 * Test of QtGui/qpainterpath
 */
#include "hdrchk.h"
#include "QtGui/qpainterpath.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpainterpath();
#else
int QtGui_qpainterpath();
#endif
}


#ifdef TET_TEST
void QtGui_qpainterpath()
{
#else
int QtGui_qpainterpath()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpainterpath types\n");
#define TYPE QPainterPath
#undef TYPE

#define TYPE QPainterPath::Element
#undef TYPE

#define TYPE QPainterPathPrivate
#undef TYPE

#define TYPE QPainterPathStroker
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpainterpath types\n\n",pcnt,cnt);
return cnt;
#endif

}
