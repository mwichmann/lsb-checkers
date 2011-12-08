/*
 * Test of QtSql/qsqlquerymodel
 */
#include "hdrchk.h"
#include "QtSql/qsqlquerymodel.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlquerymodel();
#else
int QtSql_qsqlquerymodel();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlquerymodel()
{
#else
int QtSql_qsqlquerymodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlquerymodel types\n");
#define TYPE QSqlQueryModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlquerymodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
