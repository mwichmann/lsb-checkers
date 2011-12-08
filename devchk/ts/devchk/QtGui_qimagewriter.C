/*
 * Test of QtGui/qimagewriter
 */
#include "hdrchk.h"
#include "QtGui/qimagewriter.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qimagewriter();
#else
int QtGui_qimagewriter();
#endif
}


#ifdef TET_TEST
void QtGui_qimagewriter()
{
#else
int QtGui_qimagewriter()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qimagewriter types\n");
#define TYPE QImageWriter
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qimagewriter types\n\n",pcnt,cnt);
return cnt;
#endif

}
