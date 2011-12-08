/*
 * Test of QtCore/qeventloop
 */
#include "hdrchk.h"
#include "QtCore/qeventloop.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qeventloop();
#else
int QtCore_qeventloop();
#endif
}


#ifdef TET_TEST
void QtCore_qeventloop()
{
#else
int QtCore_qeventloop()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qeventloop types\n");
#define TYPE QEventLoop
#undef TYPE

#define TYPE _Z426QFlagsIN10QEventLoop17ProcessEventsFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qeventloop types\n\n",pcnt,cnt);
return cnt;
#endif

}
