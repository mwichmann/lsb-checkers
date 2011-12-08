/*
 * Test of QtNetwork/qhostaddress
 */
#include "hdrchk.h"
#include "QtNetwork/qhostaddress.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qhostaddress();
#else
int QtNetwork_qhostaddress();
#endif
}


#ifdef TET_TEST
void QtNetwork_qhostaddress()
{
#else
int QtNetwork_qhostaddress()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qhostaddress types\n");
#define TYPE QIPv6Address
#undef TYPE

#define TYPE QHostAddress
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qhostaddress types\n\n",pcnt,cnt);
return cnt;
#endif

}
