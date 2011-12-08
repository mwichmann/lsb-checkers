/*
 * Test of QtGui/qbrush
 */
#include "hdrchk.h"
#include "QtGui/qbrush.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qbrush();
#else
int QtGui_qbrush();
#endif
}


#ifdef TET_TEST
void QtGui_qbrush()
{
#else
int QtGui_qbrush()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qbrush types\n");
#define TYPE QBrush
#undef TYPE

#define TYPE QGradient
#undef TYPE

#define TYPE QLinearGradient
#undef TYPE

#define TYPE QRadialGradient
#undef TYPE

#define TYPE QConicalGradient
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qbrush types\n\n",pcnt,cnt);
return cnt;
#endif

}
