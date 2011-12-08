/*
 * Test of QtGui/qdockwidget
 */
#include "hdrchk.h"
#include "QtGui/qdockwidget.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdockwidget();
#else
int QtGui_qdockwidget();
#endif
}


#ifdef TET_TEST
void QtGui_qdockwidget()
{
#else
int QtGui_qdockwidget()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdockwidget types\n");
#define TYPE QDockWidget
#undef TYPE

#define TYPE _Z436QFlagsIN11QDockWidget17DockWidgetFeatureEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdockwidget types\n\n",pcnt,cnt);
return cnt;
#endif

}
