/*
 * Test of cups/ppd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#ifndef LSBCC_MODE
#define ppd_group_s ppd_group_str
#endif
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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
#ifndef _CUPS_PPD_H_
Msg( "Error: Constant not found: _CUPS_PPD_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(ppd_cs_t,4, 29557, 1, 3.2, NULL, 29556, NULL)
#endif

#if defined __s390x__
CheckTypeSize(ppd_emul_t,64, 29560, 12, 3.2, NULL, 29559, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_emul_t,64, 29560, 11, 3.2, NULL, 29559, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_emul_t,52, 29560, 10, 3.2, NULL, 29559, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_emul_t,64, 29560, 9, 3.2, NULL, 29559, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_emul_t,52, 29560, 6, 3.2, NULL, 29559, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_emul_t,64, 29560, 3, 3.2, NULL, 29559, NULL)
#elif defined __i386__
CheckTypeSize(ppd_emul_t,52, 29560, 2, 3.2, NULL, 29559, NULL)
#else
Msg("Find size of ppd_emul_t (29560)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29559,NULL);\n",architecture,29560,0);
#endif

#if 1
CheckTypeSize(struct ppd_group_str,100, 29562, 1, , NULL, 0, NULL)
Msg("Missing member data for ppd_group_str on All\n");
CheckOffset(struct ppd_group_str,text,0,1,76434)
CheckOffset(struct ppd_group_str,name,0,1,76435)
CheckOffset(struct ppd_group_str,num_options,0,1,76436)
CheckOffset(struct ppd_group_str,options,0,1,76460)
CheckOffset(struct ppd_group_str,num_subgroups,0,1,76461)
CheckOffset(struct ppd_group_str,subgroups,0,1,76462)
#endif

#if 1
CheckTypeSize(ppd_ui_t,4, 29566, 1, 3.2, NULL, 29565, NULL)
#endif

#if 1
CheckTypeSize(ppd_section_t,4, 29568, 1, 3.2, NULL, 29567, NULL)
#endif

#if defined __s390x__
CheckTypeSize(ppd_choice_t,144, 29570, 12, 3.2, NULL, 29569, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_choice_t,144, 29570, 11, 3.2, NULL, 29569, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_choice_t,132, 29570, 10, 3.2, NULL, 29569, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_choice_t,144, 29570, 9, 3.2, NULL, 29569, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_choice_t,132, 29570, 6, 3.2, NULL, 29569, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_choice_t,144, 29570, 3, 3.2, NULL, 29569, NULL)
#elif defined __i386__
CheckTypeSize(ppd_choice_t,132, 29570, 2, 3.2, NULL, 29569, NULL)
#else
Msg("Find size of ppd_choice_t (29570)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29569,NULL);\n",architecture,29570,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_option_t,192, 29573, 12, 3.2, NULL, 29572, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_option_t,192, 29573, 11, 3.2, NULL, 29572, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_option_t,184, 29573, 10, 3.2, NULL, 29572, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_option_t,192, 29573, 9, 3.2, NULL, 29572, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_option_t,184, 29573, 6, 3.2, NULL, 29572, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_option_t,192, 29573, 3, 3.2, NULL, 29572, NULL)
#elif defined __i386__
CheckTypeSize(ppd_option_t,184, 29573, 2, 3.2, NULL, 29572, NULL)
#else
Msg("Find size of ppd_option_t (29573)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29572,NULL);\n",architecture,29573,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_group_t,112, 29576, 12, 3.2, NULL, 29562, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_group_t,112, 29576, 11, 3.2, NULL, 29562, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_group_t,100, 29576, 10, 3.2, NULL, 29562, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_group_t,112, 29576, 9, 3.2, NULL, 29562, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_group_t,100, 29576, 6, 3.2, NULL, 29562, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_group_t,112, 29576, 3, 3.2, NULL, 29562, NULL)
#elif defined __i386__
CheckTypeSize(ppd_group_t,100, 29576, 2, 3.2, NULL, 29562, NULL)
#else
Msg("Find size of ppd_group_t (29576)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29562,NULL);\n",architecture,29576,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_size_t,72, 29579, 12, 3.2, NULL, 29578, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_size_t,72, 29579, 11, 3.2, NULL, 29578, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_size_t,72, 29579, 10, 3.2, NULL, 29578, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_size_t,72, 29579, 9, 3.2, NULL, 29578, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_size_t,72, 29579, 6, 3.2, NULL, 29578, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_size_t,72, 29579, 3, 3.2, NULL, 29578, NULL)
#elif defined __i386__
CheckTypeSize(ppd_size_t,72, 29579, 2, 3.2, NULL, 29578, NULL)
#else
Msg("Find size of ppd_size_t (29579)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29578,NULL);\n",architecture,29579,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_const_t,164, 29584, 12, 3.2, NULL, 29583, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_const_t,164, 29584, 11, 3.2, NULL, 29583, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_const_t,164, 29584, 10, 3.2, NULL, 29583, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_const_t,164, 29584, 9, 3.2, NULL, 29583, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_const_t,164, 29584, 6, 3.2, NULL, 29583, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_const_t,164, 29584, 3, 3.2, NULL, 29583, NULL)
#elif defined __i386__
CheckTypeSize(ppd_const_t,164, 29584, 2, 3.2, NULL, 29583, NULL)
#else
Msg("Find size of ppd_const_t (29584)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29583,NULL);\n",architecture,29584,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_profile_t,128, 29588, 12, 3.2, NULL, 29587, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_profile_t,128, 29588, 11, 3.2, NULL, 29587, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_profile_t,128, 29588, 10, 3.2, NULL, 29587, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_profile_t,128, 29588, 9, 3.2, NULL, 29587, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_profile_t,128, 29588, 6, 3.2, NULL, 29587, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_profile_t,128, 29588, 3, 3.2, NULL, 29587, NULL)
#elif defined __i386__
CheckTypeSize(ppd_profile_t,128, 29588, 2, 3.2, NULL, 29587, NULL)
#else
Msg("Find size of ppd_profile_t (29588)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29587,NULL);\n",architecture,29588,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_attr_t,176, 29591, 12, 3.2, NULL, 29590, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_attr_t,176, 29591, 11, 3.2, NULL, 29590, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_attr_t,168, 29591, 10, 3.2, NULL, 29590, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_attr_t,176, 29591, 9, 3.2, NULL, 29590, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_attr_t,168, 29591, 6, 3.2, NULL, 29590, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_attr_t,176, 29591, 3, 3.2, NULL, 29590, NULL)
#elif defined __i386__
CheckTypeSize(ppd_attr_t,168, 29591, 2, 3.2, NULL, 29590, NULL)
#else
Msg("Find size of ppd_attr_t (29591)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29590,NULL);\n",architecture,29591,0);
#endif

#if defined __s390x__
CheckTypeSize(ppd_file_t,320, 29595, 12, 3.2, NULL, 29594, NULL)
#elif defined __x86_64__
CheckTypeSize(ppd_file_t,320, 29595, 11, 3.2, NULL, 29594, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ppd_file_t,200, 29595, 10, 3.2, NULL, 29594, NULL)
#elif defined __powerpc64__
CheckTypeSize(ppd_file_t,320, 29595, 9, 3.2, NULL, 29594, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ppd_file_t,200, 29595, 6, 3.2, NULL, 29594, NULL)
#elif defined __ia64__
CheckTypeSize(ppd_file_t,320, 29595, 3, 3.2, NULL, 29594, NULL)
#elif defined __i386__
CheckTypeSize(ppd_file_t,200, 29595, 2, 3.2, NULL, 29594, NULL)
#else
Msg("Find size of ppd_file_t (29595)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29594,NULL);\n",architecture,29595,0);
#endif

#if 1
CheckTypeSize(ppd_status_t,4, 29603, 1, 3.2, NULL, 29602, NULL)
#endif

#if 1
CheckTypeSize(ppd_conform_t,4, 29607, 1, 3.2, NULL, 29606, NULL)
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
