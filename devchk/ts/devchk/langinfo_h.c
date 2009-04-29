/*
 * Test of langinfo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "langinfo.h"



#ifdef TET_TEST
void langinfo_h()
{
#else
int langinfo_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in langinfo.h\n");
#endif

printf("Checking data structures in langinfo.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_1
	CompareConstant(ABDAY_1,0x20000,1411,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_2
	CompareConstant(ABDAY_2,0x20001,1412,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_3
	CompareConstant(ABDAY_3,0x20002,1413,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_4
	CompareConstant(ABDAY_4,0x20003,1414,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_5
	CompareConstant(ABDAY_5,0x20004,1415,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_6
	CompareConstant(ABDAY_6,0x20005,1416,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABDAY_7
	CompareConstant(ABDAY_7,0x20006,1417,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABDAY_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_1
	CompareConstant(DAY_1,0x20007,1418,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_2
	CompareConstant(DAY_2,0x20008,1419,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_3
	CompareConstant(DAY_3,0x20009,1420,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_4
	CompareConstant(DAY_4,0x2000A,1421,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_5
	CompareConstant(DAY_5,0x2000B,1422,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_6
	CompareConstant(DAY_6,0x2000C,1423,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DAY_7
	CompareConstant(DAY_7,0x2000D,1424,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DAY_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_1
	CompareConstant(ABMON_1,0x2000E,1425,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_2
	CompareConstant(ABMON_2,0x2000F,1426,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_3
	CompareConstant(ABMON_3,0x20010,1427,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_4
	CompareConstant(ABMON_4,0x20011,1428,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_5
	CompareConstant(ABMON_5,0x20012,1429,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_6
	CompareConstant(ABMON_6,0x20013,1430,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_7
	CompareConstant(ABMON_7,0x20014,1431,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_8
	CompareConstant(ABMON_8,0x20015,1432,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_9
	CompareConstant(ABMON_9,0x20016,1433,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_10
	CompareConstant(ABMON_10,0x20017,1434,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_11
	CompareConstant(ABMON_11,0x20018,1435,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ABMON_12
	CompareConstant(ABMON_12,0x20019,1436,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ABMON_12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_1
	CompareConstant(MON_1,0x2001A,1437,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_2
	CompareConstant(MON_2,0x2001B,1438,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_3
	CompareConstant(MON_3,0x2001C,1439,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_4
	CompareConstant(MON_4,0x2001D,1440,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_5
	CompareConstant(MON_5,0x2001E,1441,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_6
	CompareConstant(MON_6,0x2001F,1442,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_7
	CompareConstant(MON_7,0x20020,1443,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_8
	CompareConstant(MON_8,0x20021,1444,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_9
	CompareConstant(MON_9,0x20022,1445,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_10
	CompareConstant(MON_10,0x20023,1446,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_11
	CompareConstant(MON_11,0x20024,1447,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MON_12
	CompareConstant(MON_12,0x20025,1448,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MON_12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AM_STR
	CompareConstant(AM_STR,0x20026,1449,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AM_STR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PM_STR
	CompareConstant(PM_STR,0x20027,1450,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PM_STR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef D_T_FMT
	CompareConstant(D_T_FMT,0x20028,1451,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: D_T_FMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef D_FMT
	CompareConstant(D_FMT,0x20029,1452,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: D_FMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T_FMT
	CompareConstant(T_FMT,0x2002A,1453,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: T_FMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T_FMT_AMPM
	CompareConstant(T_FMT_AMPM,0x2002B,1454,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: T_FMT_AMPM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERA
	CompareConstant(ERA,0x2002C,1455,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ERA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERA_D_FMT
	CompareConstant(ERA_D_FMT,0x2002E,1456,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ERA_D_FMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ALT_DIGITS
	CompareConstant(ALT_DIGITS,0x2002F,1457,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ALT_DIGITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERA_D_T_FMT
	CompareConstant(ERA_D_T_FMT,0x20030,1458,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ERA_D_T_FMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERA_T_FMT
	CompareConstant(ERA_T_FMT,0x20031,1459,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ERA_T_FMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CODESET
	CompareConstant(CODESET,14,1461,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CODESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CRNCYSTR
	CompareConstant(CRNCYSTR,0x4000F,1462,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CRNCYSTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RADIXCHAR
	CompareConstant(RADIXCHAR,0x10000,1463,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RADIXCHAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef THOUSEP
	CompareConstant(THOUSEP,0x10001,1464,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: THOUSEP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YESEXPR
	CompareConstant(YESEXPR,0x50000,1465,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YESEXPR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NOEXPR
	CompareConstant(NOEXPR,0x50001,1466,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NOEXPR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NOSTR
	CompareConstant(NOSTR,0x50003,5000,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NOSTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YESSTR
	CompareConstant(YESSTR,0x50002,5001,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YESSTR\n");
cnt++;
#endif

#endif

extern char * nl_langinfo_db(nl_item);
CheckInterfacedef(nl_langinfo,nl_langinfo_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in langinfo.h\n\n",pcnt,cnt);
return cnt;
#endif

}
