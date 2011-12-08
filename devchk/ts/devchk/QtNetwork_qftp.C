/*
 * Test of QtNetwork/qftp
 */
#include "hdrchk.h"
#include "QtNetwork/qftp.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qftp();
#else
int QtNetwork_qftp();
#endif
}


#ifdef TET_TEST
void QtNetwork_qftp()
{
#else
int QtNetwork_qftp()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qftp types\n");
#define TYPE QFtp
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qftp types\n\n",pcnt,cnt);
return cnt;
#endif

}
