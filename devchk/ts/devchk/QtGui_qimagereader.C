/*
 * Test of QtGui/qimagereader
 */
#include "hdrchk.h"
#include "QtGui/qimagereader.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qimagereader();
#else
int QtGui_qimagereader();
#endif
}


#ifdef TET_TEST
void QtGui_qimagereader()
{
#else
int QtGui_qimagereader()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qimagereader types\n");
#define TYPE QImageReader
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qimagereader types\n\n",pcnt,cnt);
return cnt;
#endif

}
