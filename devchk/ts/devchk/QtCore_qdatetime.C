/*
 * Test of QtCore/qdatetime
 */
#include "hdrchk.h"
#include "QtCore/qdatetime.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qdatetime();
#else
int QtCore_qdatetime();
#endif
}


#ifdef TET_TEST
void QtCore_qdatetime()
{
#else
int QtCore_qdatetime()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qdatetime types\n");
#define TYPE QDate
#undef TYPE

#define TYPE QTime
#undef TYPE

#define TYPE QDateTime
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qdatetime types\n\n",pcnt,cnt);
return cnt;
#endif

}
