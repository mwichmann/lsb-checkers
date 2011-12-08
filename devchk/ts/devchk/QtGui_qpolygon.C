/*
 * Test of QtGui/qpolygon
 */
#include "hdrchk.h"
#include "QtGui/qpolygon.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qpolygon();
#else
int QtGui_qpolygon();
#endif
}


#ifdef TET_TEST
void QtGui_qpolygon()
{
#else
int QtGui_qpolygon()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qpolygon types\n");
#define TYPE QPolygon
#undef TYPE

#define TYPE QPolygonF
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qpolygon types\n\n",pcnt,cnt);
return cnt;
#endif

}
