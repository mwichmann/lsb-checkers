/*
 * Test of QtGui/qdirmodel
 */
#include "hdrchk.h"
#include "QtGui/qdirmodel.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdirmodel();
#else
int QtGui_qdirmodel();
#endif
}


#ifdef TET_TEST
void QtGui_qdirmodel()
{
#else
int QtGui_qdirmodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdirmodel types\n");
#define TYPE QFileIconProvider
#undef TYPE

#define TYPE QDirModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdirmodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
