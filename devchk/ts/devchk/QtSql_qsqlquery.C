/*
 * Test of QtSql/qsqlquery
 */
#include "hdrchk.h"
#include "QtSql/qsqlquery.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlquery();
#else
int QtSql_qsqlquery();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlquery()
{
#else
int QtSql_qsqlquery()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlquery types\n");
#define TYPE QSqlQuery
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlquery types\n\n",pcnt,cnt);
return cnt;
#endif

}
