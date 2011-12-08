/*
 * Test of QtGui/qstyle
 */
#include "hdrchk.h"
#include "QtGui/qstyle.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qstyle();
#else
int QtGui_qstyle();
#endif
}


#ifdef TET_TEST
void QtGui_qstyle()
{
#else
int QtGui_qstyle()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qstyle types\n");
#define TYPE QStyle
#undef TYPE

#define TYPE _Z286QFlagsIN6QStyle9StateFlagEE
#undef TYPE

#define TYPE _Z306QFlagsIN6QStyle10SubControlEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qstyle types\n\n",pcnt,cnt);
return cnt;
#endif

}
