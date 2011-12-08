/*
 * Test of QtNetwork/qurlinfo
 */
#include "hdrchk.h"
#include "QtNetwork/qurlinfo.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qurlinfo();
#else
int QtNetwork_qurlinfo();
#endif
}


#ifdef TET_TEST
void QtNetwork_qurlinfo()
{
#else
int QtNetwork_qurlinfo()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qurlinfo types\n");
#define TYPE QUrlInfo
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qurlinfo types\n\n",pcnt,cnt);
return cnt;
#endif

}
