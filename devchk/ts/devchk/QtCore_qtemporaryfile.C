/*
 * Test of QtCore/qtemporaryfile
 */
#include "hdrchk.h"
#include "QtCore/qtemporaryfile.h"


extern "C" {
#ifdef TET_TEST
void QtCore_qtemporaryfile();
#else
int QtCore_qtemporaryfile();
#endif
}


#ifdef TET_TEST
void QtCore_qtemporaryfile()
{
#else
int QtCore_qtemporaryfile()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtCore/qtemporaryfile types\n");
#define TYPE QTemporaryFile
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtCore/qtemporaryfile types\n\n",pcnt,cnt);
return cnt;
#endif

}
