/*
 * Test of security/pam_appl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
/*
 * This structure is not visible int he headers, so a dummy here keeps
 * the test happy. Note that this is NOT the real structure.
 */
struct pam_handle {
	int	foo;
	};
#include "security/pam_appl.h"



#ifdef TET_TEST
void security_pam_appl_h()
{
#else
int security_pam_appl_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in security/pam_appl.h\n");
#endif

printf("Checking data structures in security/pam_appl.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef PAM_SERVICE
	CompareConstant(PAM_SERVICE,1,5032,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SERVICE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_USER
	CompareConstant(PAM_USER,2,5033,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_TTY
	CompareConstant(PAM_TTY,3,5034,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_TTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_RHOST
	CompareConstant(PAM_RHOST,4,5035,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_RHOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CONV
	CompareConstant(PAM_CONV,5,5036,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CONV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_RUSER
	CompareConstant(PAM_RUSER,8,5039,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_RUSER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_SUCCESS
	CompareConstant(PAM_SUCCESS,0,5040,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SUCCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_OPEN_ERR
	CompareConstant(PAM_OPEN_ERR,1,5041,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_OPEN_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_SYMBOL_ERR
	CompareConstant(PAM_SYMBOL_ERR,2,5042,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SYMBOL_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_ABORT
	CompareConstant(PAM_ABORT,26,5043,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_ABORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_MAXTRIES
	CompareConstant(PAM_MAXTRIES,11,5044,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_MAXTRIES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_SESSION_ERR
	CompareConstant(PAM_SESSION_ERR,14,5045,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SESSION_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_PERM_DENIED
	CompareConstant(PAM_PERM_DENIED,6,5046,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_PERM_DENIED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_BUF_ERR
	CompareConstant(PAM_BUF_ERR,5,5047,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_BUF_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_BAD_ITEM
	CompareConstant(PAM_BAD_ITEM,29,5048,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_BAD_ITEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTH_ERR
	CompareConstant(PAM_AUTH_ERR,7,5049,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTH_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CRED_INSUFFICIENT
	CompareConstant(PAM_CRED_INSUFFICIENT,8,5050,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CRED_INSUFFICIENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTHINFO_UNAVAIL
	CompareConstant(PAM_AUTHINFO_UNAVAIL,9,5051,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTHINFO_UNAVAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_USER_UNKNOWN
	CompareConstant(PAM_USER_UNKNOWN,10,5052,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_USER_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CRED_UNAVAIL
	CompareConstant(PAM_CRED_UNAVAIL,15,5053,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CRED_UNAVAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CRED_EXPIRED
	CompareConstant(PAM_CRED_EXPIRED,16,5054,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CRED_EXPIRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CRED_ERR
	CompareConstant(PAM_CRED_ERR,17,5055,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CRED_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTHTOK_EXPIRED
	CompareConstant(PAM_AUTHTOK_EXPIRED,27,5057,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTHTOK_EXPIRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_ACCT_EXPIRED
	CompareConstant(PAM_ACCT_EXPIRED,13,5058,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_ACCT_EXPIRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTHTOK_ERR
	CompareConstant(PAM_AUTHTOK_ERR,20,5059,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTHTOK_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTHTOK_RECOVER_ERR
	CompareConstant(PAM_AUTHTOK_RECOVER_ERR,21,5060,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTHTOK_RECOVER_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTHTOK_LOCK_BUSY
	CompareConstant(PAM_AUTHTOK_LOCK_BUSY,22,5061,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTHTOK_LOCK_BUSY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_AUTHTOK_DISABLE_AGING
	CompareConstant(PAM_AUTHTOK_DISABLE_AGING,23,5062,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_AUTHTOK_DISABLE_AGING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_TRY_AGAIN
	CompareConstant(PAM_TRY_AGAIN,24,5063,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_TRY_AGAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_USER_PROMPT
	CompareConstant(PAM_USER_PROMPT,9,5064,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_USER_PROMPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_PROMPT_ECHO_OFF
	CompareConstant(PAM_PROMPT_ECHO_OFF,1,5065,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_PROMPT_ECHO_OFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_PROMPT_ECHO_ON
	CompareConstant(PAM_PROMPT_ECHO_ON,2,5066,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_PROMPT_ECHO_ON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_ERROR_MSG
	CompareConstant(PAM_ERROR_MSG,3,5067,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_ERROR_MSG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_TEXT_INFO
	CompareConstant(PAM_TEXT_INFO,4,5068,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_TEXT_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CONV_ERR
	CompareConstant(PAM_CONV_ERR,19,5069,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CONV_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_SILENT
	CompareConstant(PAM_SILENT,0x8000U,5070,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SILENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_DISALLOW_NULL_AUTHTOK
	CompareConstant(PAM_DISALLOW_NULL_AUTHTOK,0x0001U,5071,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_DISALLOW_NULL_AUTHTOK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_ESTABLISH_CRED
	CompareConstant(PAM_ESTABLISH_CRED,0x0002U,5072,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_ESTABLISH_CRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_DELETE_CRED
	CompareConstant(PAM_DELETE_CRED,0x0004U,5073,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_DELETE_CRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_REINITIALIZE_CRED
	CompareConstant(PAM_REINITIALIZE_CRED,0x0008U,5074,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_REINITIALIZE_CRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_REFRESH_CRED
	CompareConstant(PAM_REFRESH_CRED,0x0010U,5075,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_REFRESH_CRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_CHANGE_EXPIRED_AUTHTOK
	CompareConstant(PAM_CHANGE_EXPIRED_AUTHTOK,0x0020U,5076,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_CHANGE_EXPIRED_AUTHTOK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_SERVICE_ERR
	CompareConstant(PAM_SERVICE_ERR,3,5077,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SERVICE_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_SYSTEM_ERR
	CompareConstant(PAM_SYSTEM_ERR,4,5078,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_SYSTEM_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAM_NEW_AUTHTOK_REQD
	CompareConstant(PAM_NEW_AUTHTOK_REQD,12,5079,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PAM_NEW_AUTHTOK_REQD\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(struct pam_conv,8, 10352, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,conv,4,2,34588)
CheckOffset(struct pam_conv,conv,0,2,34588)
CheckMemberSize(struct pam_conv,appdata_ptr,4,2,34589)
CheckOffset(struct pam_conv,appdata_ptr,4,2,34589)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct pam_conv,8, 10352, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,appdata_ptr,4,10,34589)
CheckOffset(struct pam_conv,appdata_ptr,4,10,34589)
#elif defined __ia64__
CheckTypeSize(struct pam_conv,16, 10352, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,appdata_ptr,8,3,34589)
CheckOffset(struct pam_conv,appdata_ptr,8,3,34589)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct pam_conv,8, 10352, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,appdata_ptr,4,6,34589)
CheckOffset(struct pam_conv,appdata_ptr,4,6,34589)
#elif defined __powerpc64__
CheckTypeSize(struct pam_conv,16, 10352, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,appdata_ptr,8,9,34589)
CheckOffset(struct pam_conv,appdata_ptr,8,9,34589)
#elif defined __s390x__
CheckTypeSize(struct pam_conv,16, 10352, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,appdata_ptr,8,12,34589)
CheckOffset(struct pam_conv,appdata_ptr,8,12,34589)
#elif defined __x86_64__
CheckTypeSize(struct pam_conv,16, 10352, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pam_conv,appdata_ptr,8,11,34589)
CheckOffset(struct pam_conv,appdata_ptr,8,11,34589)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10352,0);
Msg("Find size of pam_conv (10352)\n");
#endif

#if defined __i386__
CheckTypeSize(pam_handle_t,4, 10354, 2, 1.3, NULL, 10353, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pam_handle_t,4, 10354, 10, 1.3, NULL, 10353, NULL)
#elif defined __ia64__
CheckTypeSize(pam_handle_t,4, 10354, 3, 1.3, NULL, 10353, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pam_handle_t,4, 10354, 6, 1.3, NULL, 10353, NULL)
#elif defined __powerpc64__
CheckTypeSize(pam_handle_t,4, 10354, 9, 2.0, NULL, 10353, NULL)
#elif defined __s390x__
CheckTypeSize(pam_handle_t,4, 10354, 12, 1.3, NULL, 10353, NULL)
#elif defined __x86_64__
CheckTypeSize(pam_handle_t,4, 10354, 11, 2.0, NULL, 10353, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10353,NULL);\n",architecture,10354,0);
Msg("Find size of pam_handle_t (10354)\n");
#endif

#if defined __i386__
CheckTypeSize(struct pam_message,8, 10356, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg_style,4,2,34584)
CheckOffset(struct pam_message,msg_style,0,2,34584)
CheckMemberSize(struct pam_message,msg,4,2,34585)
CheckOffset(struct pam_message,msg,4,2,34585)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct pam_message,8, 10356, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg,4,10,34585)
CheckOffset(struct pam_message,msg,4,10,34585)
#elif defined __ia64__
CheckTypeSize(struct pam_message,16, 10356, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg,8,3,34585)
CheckOffset(struct pam_message,msg,8,3,34585)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct pam_message,8, 10356, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg,4,6,34585)
CheckOffset(struct pam_message,msg,4,6,34585)
#elif defined __powerpc64__
CheckTypeSize(struct pam_message,16, 10356, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg,8,9,34585)
CheckOffset(struct pam_message,msg,8,9,34585)
#elif defined __s390x__
CheckTypeSize(struct pam_message,16, 10356, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg,8,12,34585)
CheckOffset(struct pam_message,msg,8,12,34585)
#elif defined __x86_64__
CheckTypeSize(struct pam_message,16, 10356, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pam_message,msg,8,11,34585)
CheckOffset(struct pam_message,msg,8,11,34585)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10356,0);
Msg("Find size of pam_message (10356)\n");
#endif

#if defined __i386__
CheckTypeSize(struct pam_response,8, 10358, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp,4,2,34586)
CheckOffset(struct pam_response,resp,0,2,34586)
CheckMemberSize(struct pam_response,resp_retcode,4,2,34587)
CheckOffset(struct pam_response,resp_retcode,4,2,34587)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct pam_response,8, 10358, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp_retcode,4,10,34587)
CheckOffset(struct pam_response,resp_retcode,4,10,34587)
#elif defined __ia64__
CheckTypeSize(struct pam_response,16, 10358, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp,8,3,34586)
CheckOffset(struct pam_response,resp,0,3,34586)
CheckMemberSize(struct pam_response,resp_retcode,4,3,34587)
CheckOffset(struct pam_response,resp_retcode,8,3,34587)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct pam_response,8, 10358, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp,4,6,34586)
CheckOffset(struct pam_response,resp,0,6,34586)
CheckMemberSize(struct pam_response,resp_retcode,4,6,34587)
CheckOffset(struct pam_response,resp_retcode,4,6,34587)
#elif defined __powerpc64__
CheckTypeSize(struct pam_response,16, 10358, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp_retcode,4,9,34587)
CheckOffset(struct pam_response,resp_retcode,8,9,34587)
#elif defined __s390x__
CheckTypeSize(struct pam_response,16, 10358, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp_retcode,4,12,34587)
CheckOffset(struct pam_response,resp_retcode,8,12,34587)
#elif defined __x86_64__
CheckTypeSize(struct pam_response,16, 10358, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pam_response,resp_retcode,4,11,34587)
CheckOffset(struct pam_response,resp_retcode,8,11,34587)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,10358,0);
Msg("Find size of pam_response (10358)\n");
#endif

extern int pam_set_item_db(pam_handle_t *, int, const void *);
CheckInterfacedef(pam_set_item,pam_set_item_db);
extern int pam_get_item_db(const pam_handle_t *, int, const void * *);
CheckInterfacedef(pam_get_item,pam_get_item_db);
extern const char * pam_strerror_db(pam_handle_t *, int);
CheckInterfacedef(pam_strerror,pam_strerror_db);
extern char * * pam_getenvlist_db(pam_handle_t *);
CheckInterfacedef(pam_getenvlist,pam_getenvlist_db);
extern int pam_fail_delay_db(pam_handle_t *, unsigned int);
CheckInterfacedef(pam_fail_delay,pam_fail_delay_db);
extern int pam_start_db(const char *, const char *, const struct pam_conv *, pam_handle_t * *);
CheckInterfacedef(pam_start,pam_start_db);
extern int pam_end_db(pam_handle_t *, int);
CheckInterfacedef(pam_end,pam_end_db);
extern int pam_authenticate_db(pam_handle_t *, int);
CheckInterfacedef(pam_authenticate,pam_authenticate_db);
extern int pam_setcred_db(pam_handle_t *, int);
CheckInterfacedef(pam_setcred,pam_setcred_db);
extern int pam_acct_mgmt_db(pam_handle_t *, int);
CheckInterfacedef(pam_acct_mgmt,pam_acct_mgmt_db);
extern int pam_open_session_db(pam_handle_t *, int);
CheckInterfacedef(pam_open_session,pam_open_session_db);
extern int pam_close_session_db(pam_handle_t *, int);
CheckInterfacedef(pam_close_session,pam_close_session_db);
extern int pam_chauthtok_db(pam_handle_t *, int);
CheckInterfacedef(pam_chauthtok,pam_chauthtok_db);
extern int pam_putenv_db(const pam_handle_t *, const char *);
CheckInterfacedef(pam_putenv,pam_putenv_db);
extern const char * pam_getenv_db(const pam_handle_t *, const char *);
CheckInterfacedef(pam_getenv,pam_getenv_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in security/pam_appl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
