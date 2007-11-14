/*
 * Test of cups/ppd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "cups/ppd.h"



#ifdef TET_TEST
void cups_ppd_h()
{
#else
int cups_ppd_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in cups/ppd.h\n");
#endif

printf("Checking data structures in cups/ppd.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef PPD_MAX_LINE
	CompareConstant(PPD_MAX_LINE,256,11890,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PPD_MAX_LINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PPD_MAX_NAME
	CompareConstant(PPD_MAX_NAME,41,11891,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PPD_MAX_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PPD_MAX_TEXT
	CompareConstant(PPD_MAX_TEXT,81,11892,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PPD_MAX_TEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PPD_VERSION
	CompareConstant(PPD_VERSION,4.3,11893,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PPD_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _CUPS_PPD_H_ */
#endif

#if 1
CheckTypeSize(ppd_cs_t,0, 29557, 1, 3.2, NULL, 29556, NULL)
#endif

#if 1
CheckTypeSize(ppd_emul_t,0, 29560, 1, 3.2, NULL, 29559, NULL)
#endif

#if 1
CheckTypeSize(ppd_ui_t,0, 29566, 1, 3.2, NULL, 29565, NULL)
#endif

#if 1
CheckTypeSize(ppd_section_t,0, 29568, 1, 3.2, NULL, 29567, NULL)
#endif

#if 1
CheckTypeSize(ppd_choice_t,0, 29570, 1, 3.2, NULL, 29569, NULL)
#endif

#if 1
CheckTypeSize(ppd_option_t,0, 29573, 1, 3.2, NULL, 29572, NULL)
#endif

#if 1
CheckTypeSize(ppd_group_t,0, 29576, 1, 3.2, NULL, 29562, NULL)
#endif

#if 1
CheckTypeSize(ppd_size_t,0, 29579, 1, 3.2, NULL, 29578, NULL)
#endif

#if 1
CheckTypeSize(ppd_const_t,0, 29584, 1, 3.2, NULL, 29583, NULL)
#endif

#if 1
CheckTypeSize(ppd_profile_t,0, 29588, 1, 3.2, NULL, 29587, NULL)
#endif

#if 1
CheckTypeSize(ppd_attr_t,0, 29591, 1, 3.2, NULL, 29590, NULL)
#endif

#if 1
CheckTypeSize(ppd_file_t,0, 29595, 1, 3.2, NULL, 29594, NULL)
#endif

#if 1
CheckTypeSize(ppd_status_t,0, 29603, 1, 3.2, NULL, 29602, NULL)
#endif

#if 1
CheckTypeSize(ppd_conform_t,0, 29607, 1, 3.2, NULL, 29606, NULL)
#endif

extern float ppdPageLength_db(ppd_file_t *, const char *);
CheckInterfacedef(ppdPageLength,ppdPageLength_db);
extern ppd_status_t ppdLastError_db(int *);
CheckInterfacedef(ppdLastError,ppdLastError_db);
extern int ppdEmitFd_db(ppd_file_t *, int, ppd_section_t);
CheckInterfacedef(ppdEmitFd,ppdEmitFd_db);
extern int ppdMarkOption_db(ppd_file_t *, const char *, const char *);
CheckInterfacedef(ppdMarkOption,ppdMarkOption_db);
extern int ppdEmitJCL_db(ppd_file_t *, FILE *, int, const char *, const char *);
CheckInterfacedef(ppdEmitJCL,ppdEmitJCL_db);
extern ppd_choice_t * ppdFindChoice_db(ppd_option_t *, const char *);
CheckInterfacedef(ppdFindChoice,ppdFindChoice_db);
extern ppd_file_t * ppdOpenFile_db(const char *);
CheckInterfacedef(ppdOpenFile,ppdOpenFile_db);
extern int ppdEmit_db(ppd_file_t *, FILE *, ppd_section_t);
CheckInterfacedef(ppdEmit,ppdEmit_db);
extern int ppdCollect_db(ppd_file_t *, ppd_section_t, ppd_choice_t * * *);
CheckInterfacedef(ppdCollect,ppdCollect_db);
extern ppd_option_t * ppdFindOption_db(ppd_file_t *, const char *);
CheckInterfacedef(ppdFindOption,ppdFindOption_db);
extern void ppdMarkDefaults_db(ppd_file_t *);
CheckInterfacedef(ppdMarkDefaults,ppdMarkDefaults_db);
extern ppd_file_t * ppdOpenFd_db(int);
CheckInterfacedef(ppdOpenFd,ppdOpenFd_db);
extern ppd_attr_t * ppdFindNextAttr_db(ppd_file_t *, const char *, const char *);
CheckInterfacedef(ppdFindNextAttr,ppdFindNextAttr_db);
extern const char * ppdErrorString_db(ppd_status_t);
CheckInterfacedef(ppdErrorString,ppdErrorString_db);
extern ppd_attr_t * ppdFindAttr_db(ppd_file_t *, const char *, const char *);
CheckInterfacedef(ppdFindAttr,ppdFindAttr_db);
extern ppd_size_t * ppdPageSize_db(ppd_file_t *, const char *);
CheckInterfacedef(ppdPageSize,ppdPageSize_db);
extern ppd_file_t * ppdOpen_db(FILE *);
CheckInterfacedef(ppdOpen,ppdOpen_db);
extern int ppdIsMarked_db(ppd_file_t *, const char *, const char *);
CheckInterfacedef(ppdIsMarked,ppdIsMarked_db);
extern float ppdPageWidth_db(ppd_file_t *, const char *);
CheckInterfacedef(ppdPageWidth,ppdPageWidth_db);
extern int ppdConflicts_db(ppd_file_t *);
CheckInterfacedef(ppdConflicts,ppdConflicts_db);
extern ppd_choice_t * ppdFindMarkedChoice_db(ppd_file_t *, const char *);
CheckInterfacedef(ppdFindMarkedChoice,ppdFindMarkedChoice_db);
extern void ppdClose_db(ppd_file_t *);
CheckInterfacedef(ppdClose,ppdClose_db);
extern void ppdSetConformance_db(ppd_conform_t);
CheckInterfacedef(ppdSetConformance,ppdSetConformance_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cups/ppd.h\n\n",pcnt,cnt);
return cnt;
#endif

}
