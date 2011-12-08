/*
 * Test of QtCore/qurl
 */
#include "hdrchk.h"
#include "QtCore/qurl.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qurl();
#else
int QtCore_qurl();
#endif
}


#ifdef TET_TEST
void QtCore_qurl()
{
#else
int QtCore_qurl()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qurl types\n");
#define TYPE QUrl
#undef TYPE

#define TYPE _Z346QFlagsIN4QUrl16FormattingOptionEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qurl types\n\n",pcnt,cnt);
return cnt;
#endif

}
