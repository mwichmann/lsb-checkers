/*
 * Test of locale.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "locale.h"



int locale_h()
{
int cnt=0;
#ifdef NULL
CompareConstant(NULL,0)
#else
Msg( "Warning: Constant not found: NULL\n");
#endif
#ifdef LC_TIME
CompareConstant(LC_TIME,2)
#else
Msg( "Warning: Constant not found: LC_TIME\n");
#endif
#ifdef LC_NUMERIC
CompareConstant(LC_NUMERIC,1)
#else
Msg( "Warning: Constant not found: LC_NUMERIC\n");
#endif
#ifdef LC_MONETARY
CompareConstant(LC_MONETARY,4)
#else
Msg( "Warning: Constant not found: LC_MONETARY\n");
#endif
#ifdef LC_MESSAGES
CompareConstant(LC_MESSAGES,5)
#else
Msg( "Warning: Constant not found: LC_MESSAGES\n");
#endif
#ifdef LC_CTYPE
CompareConstant(LC_CTYPE,0)
#else
Msg( "Warning: Constant not found: LC_CTYPE\n");
#endif
#ifdef LC_COLLATE
CompareConstant(LC_COLLATE,3)
#else
Msg( "Warning: Constant not found: LC_COLLATE\n");
#endif
#ifdef LC_ALL
CompareConstant(LC_ALL,6)
#else
Msg( "Warning: Constant not found: LC_ALL\n");
#endif
printf("%d tests in locale.h\n",cnt);
return cnt;
}
