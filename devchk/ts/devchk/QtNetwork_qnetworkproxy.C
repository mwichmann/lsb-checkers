/*
 * Test of QtNetwork/qnetworkproxy
 */
#include "hdrchk.h"
#include "QtNetwork/qnetworkproxy.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qnetworkproxy();
#else
int QtNetwork_qnetworkproxy();
#endif
}


#ifdef TET_TEST
void QtNetwork_qnetworkproxy()
{
#else
int QtNetwork_qnetworkproxy()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qnetworkproxy types\n");
#define TYPE QNetworkProxy
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qnetworkproxy types\n\n",pcnt,cnt);
return cnt;
#endif

}
