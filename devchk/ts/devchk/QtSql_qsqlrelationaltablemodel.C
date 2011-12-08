/*
 * Test of QtSql/qsqlrelationaltablemodel
 */
#include "hdrchk.h"
#include "QtSql/qsqlrelationaltablemodel.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlrelationaltablemodel();
#else
int QtSql_qsqlrelationaltablemodel();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlrelationaltablemodel()
{
#else
int QtSql_qsqlrelationaltablemodel()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlrelationaltablemodel types\n");
#define TYPE QSqlRelation
#undef TYPE

#define TYPE QSqlRelationalTableModel
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlrelationaltablemodel types\n\n",pcnt,cnt);
return cnt;
#endif

}
