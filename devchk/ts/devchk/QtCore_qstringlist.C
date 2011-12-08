/*
 * Test of QtCore/qstringlist
 */
#include "hdrchk.h"
#include "QtCore/qstringlist.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qstringlist();
#else
int QtCore_qstringlist();
#endif
}


#ifdef TET_TEST
void QtCore_qstringlist()
{
#else
int QtCore_qstringlist()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qstringlist types\n");
#define TYPE QStringList
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qstringlist types\n\n",pcnt,cnt);
return cnt;
#endif

}
