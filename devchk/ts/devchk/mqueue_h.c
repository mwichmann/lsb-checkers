/*
 * Test of mqueue.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "mqueue.h"



#ifdef TET_TEST
void mqueue_h()
{
#else
int mqueue_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in mqueue.h\n");
#endif

printf("Checking data structures in mqueue.h\n");
#if 1
CheckTypeSize(mqd_t,4, 16573, 1, 3.2, NULL, 6, NULL)
#endif

#if defined __i386__
#elif defined __s390x__
#elif defined __x86_64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16575,0);
Msg("Find size of mq_attr (16575)\n");
#endif

#if 1
#endif

extern int mq_close_db(mqd_t);
CheckInterfacedef(mq_close,mq_close_db);
extern int mq_getattr_db(mqd_t, struct mq_attr *);
CheckInterfacedef(mq_getattr,mq_getattr_db);
extern int mq_notify_db(mqd_t, const struct sigevent *);
CheckInterfacedef(mq_notify,mq_notify_db);
extern mqd_t mq_open_db(const char *, int, ...);
CheckInterfacedef(mq_open,mq_open_db);
extern ssize_t mq_receive_db(mqd_t, char *, size_t, unsigned int *);
CheckInterfacedef(mq_receive,mq_receive_db);
extern int mq_send_db(mqd_t, const char *, size_t, unsigned int);
CheckInterfacedef(mq_send,mq_send_db);
extern int mq_setattr_db(mqd_t, const struct mq_attr *, struct mq_attr *);
CheckInterfacedef(mq_setattr,mq_setattr_db);
extern ssize_t mq_timedreceive_db(mqd_t, char *, size_t, unsigned int *, const struct timespec *);
CheckInterfacedef(mq_timedreceive,mq_timedreceive_db);
extern int mq_timedsend_db(mqd_t, const char *, size_t, unsigned int, const struct timespec *);
CheckInterfacedef(mq_timedsend,mq_timedsend_db);
extern int mq_unlink_db(const char *);
CheckInterfacedef(mq_unlink,mq_unlink_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in mqueue.h\n\n",pcnt,cnt);
return cnt;
#endif

}
