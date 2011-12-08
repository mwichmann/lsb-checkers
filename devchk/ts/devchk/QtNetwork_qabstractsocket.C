/*
 * Test of QtNetwork/qabstractsocket
 */
#include "hdrchk.h"
#include "QtNetwork/qabstractsocket.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qabstractsocket();
#else
int QtNetwork_qabstractsocket();
#endif
}


#ifdef TET_TEST
void QtNetwork_qabstractsocket()
{
#else
int QtNetwork_qabstractsocket()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qabstractsocket types\n");
#define TYPE QAbstractSocket
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qabstractsocket types\n\n",pcnt,cnt);
return cnt;
#endif

}
