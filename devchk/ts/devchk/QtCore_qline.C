/*
 * Test of QtCore/qline
 */
#include "hdrchk.h"
#include "QtCore/qline.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qline();
#else
int QtCore_qline();
#endif
}


#ifdef TET_TEST
void QtCore_qline()
{
#else
int QtCore_qline()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qline types\n");
#define TYPE QLine
#undef TYPE

#define TYPE QLineF
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qline types\n\n",pcnt,cnt);
return cnt;
#endif

}
