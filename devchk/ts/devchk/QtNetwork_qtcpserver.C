/*
 * Test of QtNetwork/qtcpserver
 */
#include "hdrchk.h"
#include "QtNetwork/qtcpserver.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qtcpserver();
#else
int QtNetwork_qtcpserver();
#endif
}


#ifdef TET_TEST
void QtNetwork_qtcpserver()
{
#else
int QtNetwork_qtcpserver()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qtcpserver types\n");
#define TYPE QTcpServer
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qtcpserver types\n\n",pcnt,cnt);
return cnt;
#endif

}
