/*
 * Test of QtCore/qbytearraymatcher
 */
#include "hdrchk.h"
#include "QtCore/qbytearraymatcher.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qbytearraymatcher();
#else
int QtCore_qbytearraymatcher();
#endif
}


#ifdef TET_TEST
void QtCore_qbytearraymatcher()
{
#else
int QtCore_qbytearraymatcher()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qbytearraymatcher types\n");
#define TYPE QByteArrayMatcher
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qbytearraymatcher types\n\n",pcnt,cnt);
return cnt;
#endif

}
