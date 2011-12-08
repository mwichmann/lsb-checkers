/*
 * Test of QtCore/qdebug
 */
#include "hdrchk.h"
#include "QtCore/qdebug.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qdebug();
#else
int QtCore_qdebug();
#endif
}


#ifdef TET_TEST
void QtCore_qdebug()
{
#else
int QtCore_qdebug()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qdebug types\n");
#define TYPE QDebug
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qdebug types\n\n",pcnt,cnt);
return cnt;
#endif

}
