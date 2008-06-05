/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <sys/stat.h>
#include "ftw.h"



#ifdef TET_TEST
void ftw_h()
{
#else
int ftw_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in ftw.h\n");
#endif

printf("Checking data structures in ftw.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FTW_F
	CompareConstant(FTW_F,FTW_F,1230,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_D
	CompareConstant(FTW_D,FTW_D,1231,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_DNR
	CompareConstant(FTW_DNR,FTW_DNR,1232,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_DNR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_NS
	CompareConstant(FTW_NS,FTW_NS,1233,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_NS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_SL
	CompareConstant(FTW_SL,FTW_SL,1234,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_SL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_DP
	CompareConstant(FTW_DP,FTW_DP,3060,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_DP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FTW_SLN
	CompareConstant(FTW_SLN,FTW_SLN,3061,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FTW_SLN\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#elif defined __x86_64__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#elif defined __s390__ && !defined __s390x__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#elif defined __powerpc64__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#elif defined __ia64__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#elif defined __i386__
CheckEnum("FTW_F",FTW_F,0,29747)
CheckEnum("FTW_D",FTW_D,(0) + 1,29748)
CheckEnum("FTW_DNR",FTW_DNR,((0) + 1) + 1,29749)
CheckEnum("FTW_NS",FTW_NS,(((0) + 1) + 1) + 1,29750)
CheckEnum("FTW_SL",FTW_SL,((((0) + 1) + 1) + 1) + 1,29751)
CheckEnum("FTW_DP",FTW_DP,(((((0) + 1) + 1) + 1) + 1) + 1,29752)
CheckEnum("FTW_SLN",FTW_SLN,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,29753)
#else
Msg("Find size of anon-ftw.h-13 (8989)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8989,0);
#endif

#if defined __s390x__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#elif defined __x86_64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#elif defined __s390__ && !defined __s390x__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#elif defined __powerpc64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#elif defined __ia64__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#elif defined __i386__
CheckEnum("FTW_PHYS",FTW_PHYS,1,29754)
CheckEnum("FTW_MOUNT",FTW_MOUNT,2,29755)
CheckEnum("FTW_CHDIR",FTW_CHDIR,4,29756)
CheckEnum("FTW_DEPTH",FTW_DEPTH,8,29757)
#else
Msg("Find size of anon-ftw.h-34 (8990)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8990,0);
#endif

#if defined __s390x__
CheckTypeSize(struct FTW,8, 8691, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct FTW,level,4,12,29759)
CheckOffset(struct FTW,level,4,12,29759)
#elif defined __x86_64__
CheckTypeSize(struct FTW,8, 8691, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct FTW,level,4,11,29759)
CheckOffset(struct FTW,level,4,11,29759)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FTW,8, 8691, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct FTW,base,4,10,29758)
CheckOffset(struct FTW,base,0,10,29758)
CheckMemberSize(struct FTW,level,4,10,29759)
CheckOffset(struct FTW,level,4,10,29759)
#elif defined __powerpc64__
CheckTypeSize(struct FTW,8, 8691, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct FTW,base,4,9,29758)
CheckOffset(struct FTW,base,0,9,29758)
CheckMemberSize(struct FTW,level,4,9,29759)
CheckOffset(struct FTW,level,4,9,29759)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FTW,8, 8691, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct FTW,base,4,6,29758)
CheckOffset(struct FTW,base,0,6,29758)
CheckMemberSize(struct FTW,level,4,6,29759)
CheckOffset(struct FTW,level,4,6,29759)
#elif defined __ia64__
CheckTypeSize(struct FTW,8, 8691, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct FTW,base,4,3,29758)
CheckOffset(struct FTW,base,0,3,29758)
CheckMemberSize(struct FTW,level,4,3,29759)
CheckOffset(struct FTW,level,4,3,29759)
#elif defined __i386__
CheckTypeSize(struct FTW,8, 8691, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct FTW,base,4,2,29758)
CheckOffset(struct FTW,base,0,2,29758)
CheckMemberSize(struct FTW,level,4,2,29759)
CheckOffset(struct FTW,level,4,2,29759)
#else
Msg("Find size of FTW (8691)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8691,0);
#endif

#if defined __s390x__
CheckTypeSize(__ftw_func_t,8, 8992, 12, 1.3, NULL, 8991, NULL)
#elif defined __x86_64__
CheckTypeSize(__ftw_func_t,8, 8992, 11, 2.0, NULL, 8991, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__ftw_func_t,4, 8992, 10, 1.3, NULL, 8991, NULL)
#elif defined __powerpc64__
CheckTypeSize(__ftw_func_t,8, 8992, 9, 2.0, NULL, 8991, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__ftw_func_t,4, 8992, 6, 1.2, NULL, 8991, NULL)
#elif defined __ia64__
CheckTypeSize(__ftw_func_t,8, 8992, 3, 1.3, NULL, 8991, NULL)
#elif defined __i386__
CheckTypeSize(__ftw_func_t,4, 8992, 2, 1.0, NULL, 8991, NULL)
#else
Msg("Find size of __ftw_func_t (8992)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8991,NULL);\n",architecture,8992,0);
#endif

#if defined __s390x__
CheckTypeSize(__ftw64_func_t,8, 8994, 12, 1.3, NULL, 8993, NULL)
#elif defined __x86_64__
CheckTypeSize(__ftw64_func_t,8, 8994, 11, 2.0, NULL, 8993, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__ftw64_func_t,4, 8994, 10, 1.3, NULL, 8993, NULL)
#elif defined __powerpc64__
CheckTypeSize(__ftw64_func_t,8, 8994, 9, 2.0, NULL, 8993, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__ftw64_func_t,4, 8994, 6, 1.2, NULL, 8993, NULL)
#elif defined __ia64__
CheckTypeSize(__ftw64_func_t,8, 8994, 3, 1.3, NULL, 8993, NULL)
#elif defined __i386__
CheckTypeSize(__ftw64_func_t,4, 8994, 2, 1.0, NULL, 8993, NULL)
#else
Msg("Find size of __ftw64_func_t (8994)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8993,NULL);\n",architecture,8994,0);
#endif

#if defined __s390x__
CheckTypeSize(__nftw_func_t,8, 8996, 12, 1.3, NULL, 8995, NULL)
#elif defined __x86_64__
CheckTypeSize(__nftw_func_t,8, 8996, 11, 2.0, NULL, 8995, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__nftw_func_t,4, 8996, 10, 1.3, NULL, 8995, NULL)
#elif defined __powerpc64__
CheckTypeSize(__nftw_func_t,8, 8996, 9, 2.0, NULL, 8995, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__nftw_func_t,4, 8996, 6, 1.2, NULL, 8995, NULL)
#elif defined __ia64__
CheckTypeSize(__nftw_func_t,8, 8996, 3, 1.3, NULL, 8995, NULL)
#elif defined __i386__
CheckTypeSize(__nftw_func_t,4, 8996, 2, 1.0, NULL, 8995, NULL)
#else
Msg("Find size of __nftw_func_t (8996)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8995,NULL);\n",architecture,8996,0);
#endif

#if defined __s390x__
CheckTypeSize(__nftw64_func_t,8, 8998, 12, 1.3, NULL, 8997, NULL)
#elif defined __x86_64__
CheckTypeSize(__nftw64_func_t,8, 8998, 11, 2.0, NULL, 8997, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__nftw64_func_t,4, 8998, 10, 1.3, NULL, 8997, NULL)
#elif defined __powerpc64__
CheckTypeSize(__nftw64_func_t,8, 8998, 9, 2.0, NULL, 8997, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__nftw64_func_t,4, 8998, 6, 1.2, NULL, 8997, NULL)
#elif defined __ia64__
CheckTypeSize(__nftw64_func_t,8, 8998, 3, 1.3, NULL, 8997, NULL)
#elif defined __i386__
CheckTypeSize(__nftw64_func_t,4, 8998, 2, 1.0, NULL, 8997, NULL)
#else
Msg("Find size of __nftw64_func_t (8998)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,8997, NULL);\n",architecture,8998,0);
#endif

extern int ftw_db(const char *, __ftw_func_t, int);
CheckInterfacedef(ftw,ftw_db);
extern int ftw64_db(const char *, __ftw64_func_t, int);
CheckInterfacedef(ftw64,ftw64_db);
extern int nftw_db(const char *, __nftw_func_t, int, int);
CheckInterfacedef(nftw,nftw_db);
extern int nftw64_db(const char *, __nftw64_func_t, int, int);
CheckInterfacedef(nftw64,nftw64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in ftw.h\n\n",pcnt,cnt);
return cnt;
#endif

}
