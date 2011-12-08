/*
 * Test of QtNetwork/qhttp
 */
#include "hdrchk.h"
#include "QtNetwork/qhttp.h"


extern "C" {
#ifdef TET_TEST
void QtNetwork_qhttp();
#else
int QtNetwork_qhttp();
#endif
}


#ifdef TET_TEST
void QtNetwork_qhttp()
{
#else
int QtNetwork_qhttp()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtNetwork/qhttp types\n");
#define TYPE QHttpHeader
#undef TYPE

#define TYPE QHttpResponseHeader
#undef TYPE

#define TYPE QHttpRequestHeader
#undef TYPE

#define TYPE QHttp
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtNetwork/qhttp types\n\n",pcnt,cnt);
return cnt;
#endif

}
