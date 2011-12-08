/*
 * Test of QtGui/qtextoption
 */
#include "hdrchk.h"
#include "QtGui/qtextoption.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qtextoption();
#else
int QtGui_qtextoption();
#endif
}


#ifdef TET_TEST
void QtGui_qtextoption()
{
#else
int QtGui_qtextoption()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qtextoption types\n");
#define TYPE QTextOption
#undef TYPE

#define TYPE _Z296QFlagsIN11QTextOption4FlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qtextoption types\n\n",pcnt,cnt);
return cnt;
#endif

}
