/*
 * Test of cpio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "cpio.h"



#ifdef TET_TEST
void cpio_h()
{
#else
int cpio_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cpio.h\n");
#endif

printf("Checking data structures in cpio.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef MAGIC
	CompareStringConstant(MAGIC,"070707",1096,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MAGIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IRUSR
	CompareConstant(C_IRUSR,000400,1097,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IRUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IWUSR
	CompareConstant(C_IWUSR,000200,1098,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IWUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IXUSR
	CompareConstant(C_IXUSR,000100,1099,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IXUSR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IRGRP
	CompareConstant(C_IRGRP,000040,1100,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IRGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IWGRP
	CompareConstant(C_IWGRP,000020,1101,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IWGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IXGRP
	CompareConstant(C_IXGRP,000010,1102,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IXGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IROTH
	CompareConstant(C_IROTH,000004,1103,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IROTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IWOTH
	CompareConstant(C_IWOTH,000002,1104,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IWOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_IXOTH
	CompareConstant(C_IXOTH,000001,1105,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_IXOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISUID
	CompareConstant(C_ISUID,004000,1106,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISUID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISGID
	CompareConstant(C_ISGID,002000,1107,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISGID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISVTX
	CompareConstant(C_ISVTX,001000,1108,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISVTX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISBLK
	CompareConstant(C_ISBLK,060000,1109,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISBLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISCHR
	CompareConstant(C_ISCHR,020000,1110,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISCHR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISDIR
	CompareConstant(C_ISDIR,040000,1111,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISFIFO
	CompareConstant(C_ISFIFO,010000,1112,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISFIFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISSOCK
	CompareConstant(C_ISSOCK,0140000,1113,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISSOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISLNK
	CompareConstant(C_ISLNK,0120000,1114,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISLNK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISCTG
	CompareConstant(C_ISCTG,0110000,1115,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISCTG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef C_ISREG
	CompareConstant(C_ISREG,0100000,1116,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: C_ISREG\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cpio.h\n\n",pcnt,cnt);
return cnt;
#endif

}
