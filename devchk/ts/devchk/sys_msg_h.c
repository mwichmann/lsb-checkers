/*
 * Test of sys/msg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/msg.h"



#ifdef TET_TEST
void sys_msg_h()
{
#else
int sys_msg_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/msg.h\n");
#endif

printf("Checking data structures in sys/msg.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef MSG_NOERROR
	CompareConstant(MSG_NOERROR,010000,3457,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_NOERROR\n");
cnt++;
#endif

#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(msgqnum_t,4, 10213, 10, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(msgqnum_t,4, 10213, 2, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(msgqnum_t,4, 10213, 6, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(msgqnum_t,8, 10213, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(msgqnum_t,8, 10213, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(msgqnum_t,8, 10213, 9, 2.0, NULL, 9, NULL)
#endif

#if defined __i386__
CheckTypeSize(msglen_t,4, 10214, 2, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(msglen_t,4, 10214, 10, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(msglen_t,4, 10214, 6, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(msglen_t,8, 10214, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(msglen_t,8, 10214, 11, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(msglen_t,8, 10214, 9, 2.0, NULL, 9, NULL)
#endif

#if defined __i386__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#elif defined __powerpc64__
#endif

extern int msgctl_db(int, int, struct msqid_ds *);
CheckInterfacedef(msgctl,msgctl_db);
extern int msgget_db(key_t, int);
CheckInterfacedef(msgget,msgget_db);
extern ssize_t msgrcv_db(int, void *, size_t, long int, int);
CheckInterfacedef(msgrcv,msgrcv_db);
extern int msgsnd_db(int, const void *, size_t, int);
CheckInterfacedef(msgsnd,msgsnd_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/msg.h\n\n",pcnt,cnt);
return cnt;
#endif

}
