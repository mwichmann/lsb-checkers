/*
 * Test of QtSql/qsqlerror
 */
#include "hdrchk.h"
#include "QtSql/qsqlerror.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlerror();
#else
int QtSql_qsqlerror();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlerror()
{
#else
int QtSql_qsqlerror()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlerror types\n");
#define TYPE QSqlError
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlerror types\n\n",pcnt,cnt);
return cnt;
#endif

}
