/*
 * Test of QtCore/qpoint
 */
#include "hdrchk.h"
#include "QtCore/qpoint.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qpoint();
#else
int QtCore_qpoint();
#endif
}


#ifdef TET_TEST
void QtCore_qpoint()
{
#else
int QtCore_qpoint()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qpoint types\n");
#define TYPE QPoint
#undef TYPE

#define TYPE QPointF
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qpoint types\n\n",pcnt,cnt);
return cnt;
#endif

}
