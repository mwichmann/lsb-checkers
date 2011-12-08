/*
 * Test of QtCore/qchar
 */
#include "hdrchk.h"
#include "QtCore/qchar.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qchar();
#else
int QtCore_qchar();
#endif
}


#ifdef TET_TEST
void QtCore_qchar()
{
#else
int QtCore_qchar()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qchar types\n");
#define TYPE QChar
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qchar types\n\n",pcnt,cnt);
return cnt;
#endif

}
