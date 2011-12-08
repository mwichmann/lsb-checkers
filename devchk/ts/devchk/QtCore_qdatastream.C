/*
 * Test of QtCore/qdatastream
 */
#include "hdrchk.h"
#include "QtCore/qdatastream.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qdatastream();
#else
int QtCore_qdatastream();
#endif
}


#ifdef TET_TEST
void QtCore_qdatastream()
{
#else
int QtCore_qdatastream()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qdatastream types\n");
#define TYPE QDataStream
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qdatastream types\n\n",pcnt,cnt);
return cnt;
#endif

}
