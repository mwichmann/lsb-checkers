/*
 * Test of security/pam_appl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in security/pam_appl.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PAM_CONV
	CompareConstant(PAM_CONV,5,5036,architecture)
#else
Msg( "Error: Constant not found: PAM_CONV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PAM_SERVICE
	CompareConstant(PAM_SERVICE,1,5032,architecture)
#else
Msg( "Error: Constant not found: PAM_SERVICE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PAM_USER
	CompareConstant(PAM_USER,2,5033,architecture)
#else
Msg( "Error: Constant not found: PAM_USER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PAM_TTY
	CompareConstant(PAM_TTY,3,5034,architecture)
#else
Msg( "Error: Constant not found: PAM_TTY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PAM_RHOST
	CompareConstant(PAM_RHOST,4,5035,architecture)
#else
Msg( "Error: Constant not found: PAM_RHOST\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct pam_conv,8, 10352, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10352,0);
Msg("Find size of pam_conv (10352)\n");
#endif

#ifdef __i386__
CheckTypeSize(pam_handle_t,4, 10354, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10354,0);
Msg("Find size of pam_handle_t (10354)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct pam_message,8, 10356, 2)
CheckOffset(struct pam_message,msg_style,0,2,34584)
CheckOffset(struct pam_message,msg,4,2,34585)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10356,0);
Msg("Find size of pam_message (10356)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct pam_response,8, 10358, 2)
CheckOffset(struct pam_response,resp,0,2,34586)
CheckOffset(struct pam_response,resp_retcode,4,2,34587)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10358,0);
Msg("Find size of pam_response (10358)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in security/pam_appl.h\n",cnt);
return cnt;
#endif

}
