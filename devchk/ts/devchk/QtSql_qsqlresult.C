/*
 * Test of QtSql/qsqlresult
 */
#include "hdrchk.h"
#include "QtSql/qsqlresult.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlresult();
#else
int QtSql_qsqlresult();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlresult()
{
#else
int QtSql_qsqlresult()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlresult types\n");
#define TYPE QSqlResult
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlresult types\n\n",pcnt,cnt);
return cnt;
#endif

}
