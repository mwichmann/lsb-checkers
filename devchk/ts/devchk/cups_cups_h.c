/*
 * Test of cups/cups.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#define cups_lang_s cups_lang_str
#include <cups/language.h>
#endif
#include "cups/cups.h"



#ifdef TET_TEST
void cups_cups_h()
{
#else
int cups_cups_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cups/cups.h\n");
#endif

printf("Checking data structures in cups/cups.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef CUPS_VERSION
	CompareConstant(CUPS_VERSION,1.0123,11884,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CUPS_VERSION_MAJOR
	CompareConstant(CUPS_VERSION_MAJOR,1,11885,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_VERSION_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CUPS_VERSION_MINOR
	CompareConstant(CUPS_VERSION_MINOR,1,11886,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_VERSION_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CUPS_VERSION_PATCH
	CompareConstant(CUPS_VERSION_PATCH,23,11887,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_VERSION_PATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _CUPS_CUPS_H_
Msg( "Error: Constant not found: _CUPS_CUPS_H_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for cupsLangDefault() */
#endif

#if 1
CheckTypeSize(struct cups_lang_str,2052, 29511, 1, , NULL, 0, NULL)
Msg("Missing member data for cups_lang_str on All\n");
CheckOffset(struct cups_lang_str,next,0,1,76271)
CheckOffset(struct cups_lang_str,used,0,1,76272)
CheckOffset(struct cups_lang_str,encoding,0,1,76301)
CheckOffset(struct cups_lang_str,language,0,1,76302)
CheckOffset(struct cups_lang_str,messages,0,1,76303)
#endif

#if 1
CheckTypeSize(cups_encoding_t,4, 29514, 1, 3.2, NULL, 29513, NULL)
#endif

#if defined __s390x__
CheckTypeSize(cups_lang_t,4080, 29516, 12, 3.2, NULL, 29511, NULL)
#elif defined __x86_64__
CheckTypeSize(cups_lang_t,4080, 29516, 11, 3.2, NULL, 29511, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cups_lang_t,2052, 29516, 10, 3.2, NULL, 29511, NULL)
#elif defined __powerpc64__
CheckTypeSize(cups_lang_t,4080, 29516, 9, 3.2, NULL, 29511, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cups_lang_t,2052, 29516, 6, 3.2, NULL, 29511, NULL)
#elif defined __ia64__
CheckTypeSize(cups_lang_t,4080, 29516, 3, 3.2, NULL, 29511, NULL)
#elif defined __i386__
CheckTypeSize(cups_lang_t,2052, 29516, 2, 3.2, NULL, 29511, NULL)
#else
Msg("Find size of cups_lang_t (29516)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29511,NULL);\n",architecture,29516,0);
#endif

#if 1
CheckTypeSize(http_encryption_t,4, 29519, 1, 3.2, NULL, 29518, NULL)
#endif

#if defined __s390x__
CheckTypeSize(cups_option_t,16, 29521, 12, 3.2, NULL, 29520, NULL)
#elif defined __x86_64__
CheckTypeSize(cups_option_t,16, 29521, 11, 3.2, NULL, 29520, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cups_option_t,8, 29521, 10, 3.2, NULL, 29520, NULL)
#elif defined __powerpc64__
CheckTypeSize(cups_option_t,16, 29521, 9, 3.2, NULL, 29520, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cups_option_t,8, 29521, 6, 3.2, NULL, 29520, NULL)
#elif defined __ia64__
CheckTypeSize(cups_option_t,16, 29521, 3, 3.2, NULL, 29520, NULL)
#elif defined __i386__
CheckTypeSize(cups_option_t,8, 29521, 2, 3.2, NULL, 29520, NULL)
#else
Msg("Find size of cups_option_t (29521)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29520,NULL);\n",architecture,29521,0);
#endif

#if defined __s390x__
CheckTypeSize(cups_dest_t,32, 29524, 12, 3.2, NULL, 29523, NULL)
#elif defined __x86_64__
CheckTypeSize(cups_dest_t,32, 29524, 11, 3.2, NULL, 29523, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cups_dest_t,20, 29524, 10, 3.2, NULL, 29523, NULL)
#elif defined __powerpc64__
CheckTypeSize(cups_dest_t,32, 29524, 9, 3.2, NULL, 29523, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cups_dest_t,20, 29524, 6, 3.2, NULL, 29523, NULL)
#elif defined __ia64__
CheckTypeSize(cups_dest_t,32, 29524, 3, 3.2, NULL, 29523, NULL)
#elif defined __i386__
CheckTypeSize(cups_dest_t,20, 29524, 2, 3.2, NULL, 29523, NULL)
#else
Msg("Find size of cups_dest_t (29524)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29523,NULL);\n",architecture,29524,0);
#endif

#if 1
CheckTypeSize(http_state_t,4, 29527, 1, 3.2, NULL, 29526, NULL)
#endif

#if 1
CheckTypeSize(http_status_t,4, 29529, 1, 3.2, NULL, 29528, NULL)
#endif

#if 1
CheckTypeSize(http_version_t,4, 29531, 1, 3.2, NULL, 29530, NULL)
#endif

#if 1
CheckTypeSize(http_keepalive_t,4, 29533, 1, 3.2, NULL, 29532, NULL)
#endif

#if 1
CheckTypeSize(http_encoding_t,4, 29536, 1, 3.2, NULL, 29535, NULL)
#endif

#if 1
CheckTypeSize(ipp_jstate_t,4, 29551, 1, 3.2, NULL, 29550, NULL)
#endif

#if defined __s390x__
CheckTypeSize(cups_job_t,80, 29553, 12, 3.2, NULL, 29552, NULL)
#elif defined __x86_64__
CheckTypeSize(cups_job_t,80, 29553, 11, 3.2, NULL, 29552, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cups_job_t,44, 29553, 10, 3.2, NULL, 29552, NULL)
#elif defined __powerpc64__
CheckTypeSize(cups_job_t,80, 29553, 9, 3.2, NULL, 29552, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cups_job_t,44, 29553, 6, 3.2, NULL, 29552, NULL)
#elif defined __ia64__
CheckTypeSize(cups_job_t,80, 29553, 3, 3.2, NULL, 29552, NULL)
#elif defined __i386__
CheckTypeSize(cups_job_t,44, 29553, 2, 3.2, NULL, 29552, NULL)
#else
Msg("Find size of cups_job_t (29553)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29552,NULL);\n",architecture,29553,0);
#endif

#if 1
CheckTypeSize(ipp_status_t,4, 29601, 1, 3.2, NULL, 29600, NULL)
#endif

extern void cupsLangFree_db(cups_lang_t *);
CheckInterfacedef(cupsLangFree,cupsLangFree_db);
extern void cupsSetEncryption_db(http_encryption_t);
CheckInterfacedef(cupsSetEncryption,cupsSetEncryption_db);
extern cups_dest_t * cupsGetDest_db(const char *, const char *, int, cups_dest_t *);
CheckInterfacedef(cupsGetDest,cupsGetDest_db);
extern int cupsGetJobs_db(cups_job_t * *, const char *, int, int);
CheckInterfacedef(cupsGetJobs,cupsGetJobs_db);
extern http_encryption_t cupsEncryption_db(void);
CheckInterfacedef(cupsEncryption,cupsEncryption_db);
extern void cupsFreeJobs_db(int, cups_job_t *);
CheckInterfacedef(cupsFreeJobs,cupsFreeJobs_db);
extern void cupsFreeOptions_db(int, cups_option_t *);
CheckInterfacedef(cupsFreeOptions,cupsFreeOptions_db);
extern const char * cupsGetOption_db(const char *, int, cups_option_t *);
CheckInterfacedef(cupsGetOption,cupsGetOption_db);
extern int cupsMarkOptions_db(ppd_file_t *, int, cups_option_t *);
CheckInterfacedef(cupsMarkOptions,cupsMarkOptions_db);
extern int cupsAddOption_db(const char *, const char *, int, cups_option_t * *);
CheckInterfacedef(cupsAddOption,cupsAddOption_db);
extern int cupsGetDests_db(cups_dest_t * *);
CheckInterfacedef(cupsGetDests,cupsGetDests_db);
extern void cupsSetServer_db(const char *);
CheckInterfacedef(cupsSetServer,cupsSetServer_db);
extern const char * cupsGetPassword_db(const char *);
CheckInterfacedef(cupsGetPassword,cupsGetPassword_db);
extern void cupsSetDests_db(int, cups_dest_t *);
CheckInterfacedef(cupsSetDests,cupsSetDests_db);
extern int cupsParseOptions_db(const char *, int, cups_option_t * *);
CheckInterfacedef(cupsParseOptions,cupsParseOptions_db);
extern void cupsSetPasswordCB_db(const char *(*fptr0)(const char *)
);
CheckInterfacedef(cupsSetPasswordCB,cupsSetPasswordCB_db);
extern void cupsSetUser_db(const char *);
CheckInterfacedef(cupsSetUser,cupsSetUser_db);
extern cups_lang_t * cupsLangGet_db(const char *);
CheckInterfacedef(cupsLangGet,cupsLangGet_db);
extern void cupsLangFlush_db(void);
CheckInterfacedef(cupsLangFlush,cupsLangFlush_db);
extern int cupsPrintFiles_db(const char *, int, const char * *, const char *, int, cups_option_t *);
CheckInterfacedef(cupsPrintFiles,cupsPrintFiles_db);
extern int cupsCancelJob_db(const char *, int);
CheckInterfacedef(cupsCancelJob,cupsCancelJob_db);
extern const char * cupsLangEncoding_db(cups_lang_t *);
CheckInterfacedef(cupsLangEncoding,cupsLangEncoding_db);
extern void cupsFreeDests_db(int, cups_dest_t *);
CheckInterfacedef(cupsFreeDests,cupsFreeDests_db);
extern ipp_status_t cupsLastError_db(void);
CheckInterfacedef(cupsLastError,cupsLastError_db);
extern const char * cupsGetDefault_db(void);
CheckInterfacedef(cupsGetDefault,cupsGetDefault_db);
extern const char * cupsGetPPD_db(const char *);
CheckInterfacedef(cupsGetPPD,cupsGetPPD_db);
extern const char * cupsServer_db(void);
CheckInterfacedef(cupsServer,cupsServer_db);
extern const char * cupsUser_db(void);
CheckInterfacedef(cupsUser,cupsUser_db);
extern int cupsTempFd_db(char *, int);
CheckInterfacedef(cupsTempFd,cupsTempFd_db);
extern int cupsPrintFile_db(const char *, const char *, const char *, int, cups_option_t *);
CheckInterfacedef(cupsPrintFile,cupsPrintFile_db);
extern int cupsAddDest_db(const char *, const char *, int, cups_dest_t * *);
CheckInterfacedef(cupsAddDest,cupsAddDest_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cups/cups.h\n\n",pcnt,cnt);
return cnt;
#endif

}
