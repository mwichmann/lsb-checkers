/*
 * Test of QtNetwork/qhostinfo
 */
#include "hdrchk.h"
#include "QtNetwork/qhostinfo.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qhostinfo();
#else
int QtNetwork_qhostinfo();
#endif
}


#ifdef TET_TEST
void QtNetwork_qhostinfo()
{
#else
int QtNetwork_qhostinfo()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qhostinfo types\n");
#define TYPE QHostInfo
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qhostinfo types\n\n",pcnt,cnt);
return cnt;
#endif

}
