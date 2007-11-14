/*
 * Test of cups/cups.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
/* No test for _CUPS_CUPS_H_ */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cupsLangDefault() */
#endif

#if 1
CheckTypeSize(cups_encoding_t,0, 29514, 1, 3.2, NULL, 29513, NULL)
#endif

#if 1
CheckTypeSize(cups_lang_t,0, 29516, 1, 3.2, NULL, 29511, NULL)
#endif

#if 1
CheckTypeSize(http_encryption_t,0, 29519, 1, 3.2, NULL, 29518, NULL)
#endif

#if 1
CheckTypeSize(cups_option_t,0, 29521, 1, 3.2, NULL, 29520, NULL)
#endif

#if 1
CheckTypeSize(cups_dest_t,0, 29524, 1, 3.2, NULL, 29523, NULL)
#endif

#if 1
CheckTypeSize(http_state_t,0, 29527, 1, 3.2, NULL, 29526, NULL)
#endif

#if 1
CheckTypeSize(http_status_t,0, 29529, 1, 3.2, NULL, 29528, NULL)
#endif

#if 1
CheckTypeSize(http_version_t,0, 29531, 1, 3.2, NULL, 29530, NULL)
#endif

#if 1
CheckTypeSize(http_keepalive_t,0, 29533, 1, 3.2, NULL, 29532, NULL)
#endif

#if 1
CheckTypeSize(http_encoding_t,0, 29536, 1, 3.2, NULL, 29535, NULL)
#endif

#if 1
CheckTypeSize(md5_word_t,0, 29539, 1, 3.2, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(md5_byte_t,0, 29542, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(md5_state_t,0, 29544, 1, 3.2, NULL, 29538, NULL)
#endif

#if 1
CheckTypeSize(ipp_jstate_t,0, 29551, 1, 3.2, NULL, 29550, NULL)
#endif

#if 1
CheckTypeSize(cups_job_t,0, 29553, 1, 3.2, NULL, 29552, NULL)
#endif

#if 1
CheckTypeSize(ipp_status_t,0, 29601, 1, 3.2, NULL, 29600, NULL)
#endif

#if 1
CheckTypeSize(http_t,0, 29548, 1, 3.2, NULL, 29547, NULL)
#endif

extern void cupsLangFree_db(cups_lang_t *);
CheckInterfacedef(cupsLangFree,cupsLangFree_db);
extern void cupsSetEncryption_db(http_encryption_t);
CheckInterfacedef(cupsSetEncryption,cupsSetEncryption_db);
extern cups_dest_t * cupsGetDest_db(const char *, const char *, int, cups_dest_t *);
CheckInterfacedef(cupsGetDest,cupsGetDest_db);
extern int cupsPrintFiles2_db(http_t *, const char *, int, const char * *, const char *, int, cups_option_t *);
CheckInterfacedef(cupsPrintFiles2,cupsPrintFiles2_db);
extern int cupsGetJobs_db(cups_job_t * *, const char *, int, int);
CheckInterfacedef(cupsGetJobs,cupsGetJobs_db);
extern http_encryption_t cupsEncryption_db(void);
CheckInterfacedef(cupsEncryption,cupsEncryption_db);
extern void cupsFreeJobs_db(int, cups_job_t *);
CheckInterfacedef(cupsFreeJobs,cupsFreeJobs_db);
extern void cupsFreeOptions_db(int, cups_option_t *);
CheckInterfacedef(cupsFreeOptions,cupsFreeOptions_db);
extern int cupsPrintFile2_db(http_t *, const char *, const char *, const char *, int, cups_option_t *);
CheckInterfacedef(cupsPrintFile2,cupsPrintFile2_db);
extern const char * cupsGetOption_db(const char *, int, cups_option_t *);
CheckInterfacedef(cupsGetOption,cupsGetOption_db);
extern int cupsSetDests2_db(http_t *, int, cups_dest_t *);
CheckInterfacedef(cupsSetDests2,cupsSetDests2_db);
extern http_status_t cupsGetFile_db(http_t *, const char *, const char *);
CheckInterfacedef(cupsGetFile,cupsGetFile_db);
extern int cupsMarkOptions_db(ppd_file_t *, int, cups_option_t *);
CheckInterfacedef(cupsMarkOptions,cupsMarkOptions_db);
extern int cupsAddOption_db(const char *, const char *, int, cups_option_t * *);
CheckInterfacedef(cupsAddOption,cupsAddOption_db);
extern const char * cupsGetDefault2_db(http_t *);
CheckInterfacedef(cupsGetDefault2,cupsGetDefault2_db);
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
extern void cupsSetPasswordCB_db(const char *(*fptr_cups_139)(const char *)
);
CheckInterfacedef(cupsSetPasswordCB,cupsSetPasswordCB_db);
extern void cupsSetUser_db(const char *);
CheckInterfacedef(cupsSetUser,cupsSetUser_db);
extern cups_lang_t * cupsLangGet_db(const char *);
CheckInterfacedef(cupsLangGet,cupsLangGet_db);
extern int cupsGetDests2_db(http_t *, cups_dest_t * *);
CheckInterfacedef(cupsGetDests2,cupsGetDests2_db);
extern int cupsGetJobs2_db(http_t *, cups_job_t * *, const char *, int, int);
CheckInterfacedef(cupsGetJobs2,cupsGetJobs2_db);
extern void cupsLangFlush_db(void);
CheckInterfacedef(cupsLangFlush,cupsLangFlush_db);
extern int cupsPrintFiles_db(const char *, int, const char * *, const char *, int, cups_option_t *);
CheckInterfacedef(cupsPrintFiles,cupsPrintFiles_db);
extern int cupsCancelJob_db(const char *, int);
CheckInterfacedef(cupsCancelJob,cupsCancelJob_db);
extern char * cupsLangEncoding_db(cups_lang_t *);
CheckInterfacedef(cupsLangEncoding,cupsLangEncoding_db);
extern void cupsFreeDests_db(int, cups_dest_t *);
CheckInterfacedef(cupsFreeDests,cupsFreeDests_db);
extern http_status_t cupsPutFile_db(http_t *, const char *, const char *);
CheckInterfacedef(cupsPutFile,cupsPutFile_db);
extern http_status_t cupsPutFd_db(http_t *, const char *, int);
CheckInterfacedef(cupsPutFd,cupsPutFd_db);
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
extern const char * cupsGetPPD2_db(http_t *, const char *);
CheckInterfacedef(cupsGetPPD2,cupsGetPPD2_db);
extern int cupsTempFd_db(char *, int);
CheckInterfacedef(cupsTempFd,cupsTempFd_db);
extern int cupsPrintFile_db(const char *, const char *, const char *, int, cups_option_t *);
CheckInterfacedef(cupsPrintFile,cupsPrintFile_db);
extern http_status_t cupsGetFd_db(http_t *, const char *, int);
CheckInterfacedef(cupsGetFd,cupsGetFd_db);
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
