/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <stdlib.h>
#include "inttypes.h"



#ifdef TET_TEST
void inttypes_h()
{
#else
int inttypes_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in inttypes.h\n");
#if defined __powerpc64__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"l","l",1251,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"ll","ll",1251,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"l","l",1251,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"ll","ll",1251,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"l","l",1251,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"l","l",1251,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __PRI64_PREFIX
	CompareMacro(__PRI64_PREFIX,"ll","ll",1251,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __PRI64_PREFIX\n");
cnt++;
#endif

#else
Msg( "No definition for __PRI64_PREFIX (1251, literal) in db for this architecture\n");
#ifdef __PRI64_PREFIX
#endif
#endif
#if defined __powerpc64__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,"l","l",1252,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,,,1252,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,"l","l",1252,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,,,1252,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,"l","l",1252,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,"l","l",1252,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __PRIPTR_PREFIX
	CompareMacro(__PRIPTR_PREFIX,,,1252,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: __PRIPTR_PREFIX\n");
cnt++;
#endif

#else
Msg( "No definition for __PRIPTR_PREFIX (1252, literal) in db for this architecture\n");
#ifdef __PRIPTR_PREFIX
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef PRId8
	CompareConstant(PRId8,"d",1253,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRId8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRId16
	CompareConstant(PRId16,"d",1254,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRId16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRId32
	CompareConstant(PRId32,"d",1255,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRId32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRId64
	CompareMacro(PRId64,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1256,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRId64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdLEAST8
	CompareConstant(PRIdLEAST8,"d",1257,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdLEAST16
	CompareConstant(PRIdLEAST16,"d",1258,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdLEAST32
	CompareConstant(PRIdLEAST32,"d",1259,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdLEAST64
	CompareMacro(PRIdLEAST64,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1260,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdFAST8
	CompareConstant(PRIdFAST8,"d",1261,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdFAST16
	CompareMacro(PRIdFAST16,__PRIPTR_PREFIX"d",__PRIPTR_PREFIX"d",1262,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdFAST32
	CompareMacro(PRIdFAST32,__PRIPTR_PREFIX"d",__PRIPTR_PREFIX"d",1263,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdFAST64
	CompareMacro(PRIdFAST64,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1264,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIi8
	CompareConstant(PRIi8,"i",1265,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIi8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIi16
	CompareConstant(PRIi16,"i",1266,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIi16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIi32
	CompareConstant(PRIi32,"i",1267,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIi32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIi64
	CompareMacro(PRIi64,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1268,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIi64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiLEAST8
	CompareConstant(PRIiLEAST8,"i",1269,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiLEAST16
	CompareConstant(PRIiLEAST16,"i",1270,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiLEAST32
	CompareConstant(PRIiLEAST32,"i",1271,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiLEAST64
	CompareMacro(PRIiLEAST64,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1272,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiFAST8
	CompareConstant(PRIiFAST8,"i",1273,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiFAST16
	CompareMacro(PRIiFAST16,__PRIPTR_PREFIX"i",__PRIPTR_PREFIX"i",1274,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiFAST32
	CompareMacro(PRIiFAST32,__PRIPTR_PREFIX"i",__PRIPTR_PREFIX"i",1275,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiFAST64
	CompareMacro(PRIiFAST64,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1276,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIo8
	CompareConstant(PRIo8,"o",1277,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIo8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIo16
	CompareConstant(PRIo16,"o",1278,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIo16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIo32
	CompareConstant(PRIo32,"o",1279,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIo32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIo64
	CompareMacro(PRIo64,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1280,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIo64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoLEAST8
	CompareConstant(PRIoLEAST8,"o",1281,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoLEAST16
	CompareConstant(PRIoLEAST16,"o",1282,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoLEAST32
	CompareConstant(PRIoLEAST32,"o",1283,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoLEAST64
	CompareMacro(PRIoLEAST64,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1284,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoFAST8
	CompareConstant(PRIoFAST8,"o",1285,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoFAST16
	CompareMacro(PRIoFAST16,__PRIPTR_PREFIX"o",__PRIPTR_PREFIX"o",1286,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoFAST32
	CompareMacro(PRIoFAST32,__PRIPTR_PREFIX"o",__PRIPTR_PREFIX"o",1287,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoFAST64
	CompareMacro(PRIoFAST64,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1288,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIu8
	CompareConstant(PRIu8,"u",1289,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIu8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIu16
	CompareConstant(PRIu16,"u",1290,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIu16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIu32
	CompareConstant(PRIu32,"u",1291,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIu32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIu64
	CompareMacro(PRIu64,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1292,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIu64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuLEAST8
	CompareConstant(PRIuLEAST8,"u",1293,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuLEAST16
	CompareConstant(PRIuLEAST16,"u",1294,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuLEAST32
	CompareConstant(PRIuLEAST32,"u",1295,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuLEAST64
	CompareMacro(PRIuLEAST64,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1296,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuFAST8
	CompareConstant(PRIuFAST8,"u",1297,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuFAST16
	CompareMacro(PRIuFAST16,__PRIPTR_PREFIX"u",__PRIPTR_PREFIX"u",1298,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuFAST32
	CompareMacro(PRIuFAST32,__PRIPTR_PREFIX"u",__PRIPTR_PREFIX"u",1299,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuFAST64
	CompareMacro(PRIuFAST64,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1300,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIx8
	CompareConstant(PRIx8,"x",1301,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIx8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIx16
	CompareConstant(PRIx16,"x",1302,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIx16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIx32
	CompareConstant(PRIx32,"x",1303,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIx32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIx64
	CompareMacro(PRIx64,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1304,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIx64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxLEAST8
	CompareConstant(PRIxLEAST8,"x",1305,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxLEAST16
	CompareConstant(PRIxLEAST16,"x",1306,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxLEAST32
	CompareConstant(PRIxLEAST32,"x",1307,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxLEAST64
	CompareMacro(PRIxLEAST64,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1308,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxFAST8
	CompareConstant(PRIxFAST8,"x",1309,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxFAST16
	CompareMacro(PRIxFAST16,__PRIPTR_PREFIX"x",__PRIPTR_PREFIX"x",1310,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxFAST32
	CompareMacro(PRIxFAST32,__PRIPTR_PREFIX"x",__PRIPTR_PREFIX"x",1311,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxFAST64
	CompareMacro(PRIxFAST64,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1312,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIX8
	CompareConstant(PRIX8,"X",1313,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIX8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIX16
	CompareConstant(PRIX16,"X",1314,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIX16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIX32
	CompareConstant(PRIX32,"X",1315,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIX32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIX64
	CompareMacro(PRIX64,__PRI64_PREFIX"X",__PRI64_PREFIX"X",1316,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIX64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXLEAST8
	CompareConstant(PRIXLEAST8,"X",1317,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXLEAST16
	CompareConstant(PRIXLEAST16,"X",1318,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXLEAST32
	CompareConstant(PRIXLEAST32,"X",1319,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXLEAST64
	CompareMacro(PRIXLEAST64,__PRI64_PREFIX"X",__PRI64_PREFIX"X",1320,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXFAST8
	CompareConstant(PRIXFAST8,"X",1321,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXFAST16
	CompareMacro(PRIXFAST16,__PRIPTR_PREFIX"X",__PRIPTR_PREFIX"X",1322,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXFAST32
	CompareMacro(PRIXFAST32,__PRIPTR_PREFIX"X",__PRIPTR_PREFIX"X",1323,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXFAST64
	CompareMacro(PRIXFAST64,__PRI64_PREFIX"X",__PRI64_PREFIX"X",1324,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdMAX
	CompareMacro(PRIdMAX,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1325,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiMAX
	CompareMacro(PRIiMAX,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1326,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoMAX
	CompareMacro(PRIoMAX,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1327,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuMAX
	CompareMacro(PRIuMAX,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1328,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxMAX
	CompareMacro(PRIxMAX,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1329,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXMAX
	CompareMacro(PRIXMAX,__PRI64_PREFIX"X",__PRI64_PREFIX"X",1330,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIdPTR
	CompareMacro(PRIdPTR,__PRIPTR_PREFIX"d",__PRIPTR_PREFIX"d",1331,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIdPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIiPTR
	CompareMacro(PRIiPTR,__PRIPTR_PREFIX"i",__PRIPTR_PREFIX"i",1332,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIiPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIoPTR
	CompareMacro(PRIoPTR,__PRIPTR_PREFIX"o",__PRIPTR_PREFIX"o",1333,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIoPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIuPTR
	CompareMacro(PRIuPTR,__PRIPTR_PREFIX"u",__PRIPTR_PREFIX"u",1334,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIuPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIxPTR
	CompareMacro(PRIxPTR,__PRIPTR_PREFIX"x",__PRIPTR_PREFIX"x",1335,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIxPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIXPTR
	CompareMacro(PRIXPTR,__PRIPTR_PREFIX"X",__PRIPTR_PREFIX"X",1336,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PRIXPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNd8
	CompareConstant(SCNd8,"hhd",1337,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNd8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNd16
	CompareConstant(SCNd16,"hd",1338,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNd16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNd32
	CompareConstant(SCNd32,"d",1339,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNd32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNd64
	CompareMacro(SCNd64,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1340,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNd64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdLEAST8
	CompareConstant(SCNdLEAST8,"hhd",1341,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdLEAST16
	CompareConstant(SCNdLEAST16,"hd",1342,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdLEAST32
	CompareConstant(SCNdLEAST32,"d",1343,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdLEAST64
	CompareMacro(SCNdLEAST64,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1344,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdFAST8
	CompareConstant(SCNdFAST8,"hhd",1345,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdFAST16
	CompareMacro(SCNdFAST16,__PRIPTR_PREFIX"d",__PRIPTR_PREFIX"d",1346,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdFAST32
	CompareMacro(SCNdFAST32,__PRIPTR_PREFIX"d",__PRIPTR_PREFIX"d",1347,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdFAST64
	CompareMacro(SCNdFAST64,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1348,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNi8
	CompareConstant(SCNi8,"hhi",1349,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNi8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNi16
	CompareConstant(SCNi16,"hi",1350,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNi16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNi32
	CompareConstant(SCNi32,"i",1351,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNi32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNi64
	CompareMacro(SCNi64,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1352,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNi64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiLEAST8
	CompareConstant(SCNiLEAST8,"hhi",1353,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiLEAST16
	CompareConstant(SCNiLEAST16,"hi",1354,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiLEAST32
	CompareConstant(SCNiLEAST32,"i",1355,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiLEAST64
	CompareMacro(SCNiLEAST64,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1356,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiFAST8
	CompareConstant(SCNiFAST8,"hhi",1357,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiFAST16
	CompareMacro(SCNiFAST16,__PRIPTR_PREFIX"i",__PRIPTR_PREFIX"i",1358,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiFAST32
	CompareMacro(SCNiFAST32,__PRIPTR_PREFIX"i",__PRIPTR_PREFIX"i",1359,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiFAST64
	CompareMacro(SCNiFAST64,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1360,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNu8
	CompareConstant(SCNu8,"hhu",1361,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNu8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNu16
	CompareConstant(SCNu16,"hu",1362,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNu16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNu32
	CompareConstant(SCNu32,"u",1363,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNu32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNu64
	CompareMacro(SCNu64,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1364,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNu64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuLEAST8
	CompareConstant(SCNuLEAST8,"hhu",1365,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuLEAST16
	CompareConstant(SCNuLEAST16,"hu",1366,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuLEAST32
	CompareConstant(SCNuLEAST32,"u",1367,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuLEAST64
	CompareMacro(SCNuLEAST64,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1368,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuFAST8
	CompareConstant(SCNuFAST8,"hhu",1369,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuFAST16
	CompareMacro(SCNuFAST16,__PRIPTR_PREFIX"u",__PRIPTR_PREFIX"u",1370,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuFAST32
	CompareMacro(SCNuFAST32,__PRIPTR_PREFIX"u",__PRIPTR_PREFIX"u",1371,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuFAST64
	CompareMacro(SCNuFAST64,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1372,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNo8
	CompareConstant(SCNo8,"hho",1373,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNo8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNo16
	CompareConstant(SCNo16,"ho",1374,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNo16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNo32
	CompareConstant(SCNo32,"o",1375,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNo32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNo64
	CompareMacro(SCNo64,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1376,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNo64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoLEAST8
	CompareConstant(SCNoLEAST8,"hho",1377,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoLEAST16
	CompareConstant(SCNoLEAST16,"ho",1378,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoLEAST32
	CompareConstant(SCNoLEAST32,"o",1379,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoLEAST64
	CompareMacro(SCNoLEAST64,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1380,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoFAST8
	CompareConstant(SCNoFAST8,"hho",1381,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoFAST16
	CompareMacro(SCNoFAST16,__PRIPTR_PREFIX"o",__PRIPTR_PREFIX"o",1382,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoFAST32
	CompareMacro(SCNoFAST32,__PRIPTR_PREFIX"o",__PRIPTR_PREFIX"o",1383,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoFAST64
	CompareMacro(SCNoFAST64,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1384,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNx8
	CompareConstant(SCNx8,"hhx",1385,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNx8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNx16
	CompareConstant(SCNx16,"hx",1386,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNx16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNx32
	CompareConstant(SCNx32,"x",1387,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNx32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNx64
	CompareMacro(SCNx64,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1388,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNx64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxLEAST8
	CompareConstant(SCNxLEAST8,"hhx",1389,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxLEAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxLEAST16
	CompareConstant(SCNxLEAST16,"hx",1390,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxLEAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxLEAST32
	CompareConstant(SCNxLEAST32,"x",1391,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxLEAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxLEAST64
	CompareMacro(SCNxLEAST64,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1392,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxLEAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxFAST8
	CompareConstant(SCNxFAST8,"hhx",1393,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxFAST8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxFAST16
	CompareMacro(SCNxFAST16,__PRIPTR_PREFIX"x",__PRIPTR_PREFIX"x",1394,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxFAST16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxFAST32
	CompareMacro(SCNxFAST32,__PRIPTR_PREFIX"x",__PRIPTR_PREFIX"x",1395,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxFAST32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxFAST64
	CompareMacro(SCNxFAST64,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1396,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxFAST64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdMAX
	CompareMacro(SCNdMAX,__PRI64_PREFIX"d",__PRI64_PREFIX"d",1397,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiMAX
	CompareMacro(SCNiMAX,__PRI64_PREFIX"i",__PRI64_PREFIX"i",1398,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoMAX
	CompareMacro(SCNoMAX,__PRI64_PREFIX"o",__PRI64_PREFIX"o",1399,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuMAX
	CompareMacro(SCNuMAX,__PRI64_PREFIX"u",__PRI64_PREFIX"u",1400,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxMAX
	CompareMacro(SCNxMAX,__PRI64_PREFIX"x",__PRI64_PREFIX"x",1401,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNdPTR
	CompareMacro(SCNdPTR,__PRIPTR_PREFIX"d",__PRIPTR_PREFIX"d",1402,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNdPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNiPTR
	CompareMacro(SCNiPTR,__PRIPTR_PREFIX"i",__PRIPTR_PREFIX"i",1403,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNiPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNoPTR
	CompareMacro(SCNoPTR,__PRIPTR_PREFIX"o",__PRIPTR_PREFIX"o",1404,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNoPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNuPTR
	CompareMacro(SCNuPTR,__PRIPTR_PREFIX"u",__PRIPTR_PREFIX"u",1405,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNuPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCNxPTR
	CompareMacro(SCNxPTR,__PRIPTR_PREFIX"x",__PRIPTR_PREFIX"x",1406,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCNxPTR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __PDP_ENDIAN
	CompareConstant(__PDP_ENDIAN,3412,4385,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: __PDP_ENDIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PDP_ENDIAN
	CompareConstant(PDP_ENDIAN,__PDP_ENDIAN,4390,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PDP_ENDIAN\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 12, 1.3, NULL, 6975, NULL)
#elif defined __x86_64__
CheckTypeSize(imaxdiv_t,16, 6898, 11, 2.0, NULL, 6975, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 10, 1.3, NULL, 6897, NULL)
#elif defined __powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 9, 2.0, NULL, 6975, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 6, 1.2, NULL, 6897, NULL)
#elif defined __ia64__
CheckTypeSize(imaxdiv_t,16, 6898, 3, 1.3, NULL, 6975, NULL)
#elif defined __i386__
CheckTypeSize(imaxdiv_t,16, 6898, 2, 1.0, NULL, 6897, NULL)
#endif

extern intmax_t strtoimax_db(const char *, char * *, int);
CheckInterfacedef(strtoimax,strtoimax_db);
extern uintmax_t strtoumax_db(const char *, char * *, int);
CheckInterfacedef(strtoumax,strtoumax_db);
extern intmax_t wcstoimax_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoimax,wcstoimax_db);
extern uintmax_t wcstoumax_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoumax,wcstoumax_db);
extern intmax_t imaxabs_db(intmax_t);
CheckInterfacedef(imaxabs,imaxabs_db);
extern imaxdiv_t imaxdiv_db(intmax_t, intmax_t);
CheckInterfacedef(imaxdiv,imaxdiv_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in inttypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
