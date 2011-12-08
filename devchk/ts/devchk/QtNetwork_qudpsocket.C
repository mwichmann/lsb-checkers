/*
 * Test of QtNetwork/qudpsocket
 */
#include "hdrchk.h"
#include "QtNetwork/qudpsocket.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qudpsocket();
#else
int QtNetwork_qudpsocket();
#endif
}


#ifdef TET_TEST
void QtNetwork_qudpsocket()
{
#else
int QtNetwork_qudpsocket()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qudpsocket types\n");
#define TYPE QUdpSocket
#undef TYPE

#define TYPE _Z326QFlagsIN10QUdpSocket8BindFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qudpsocket types\n\n",pcnt,cnt);
return cnt;
#endif

}
