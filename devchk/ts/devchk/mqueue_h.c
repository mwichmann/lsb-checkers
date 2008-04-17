/*
 * Test of mqueue.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
CheckTypeSize(struct mq_attr,32, 16575, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,4,2,53757)
CheckOffset(struct mq_attr,mq_flags,0,2,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,4,2,53758)
CheckOffset(struct mq_attr,mq_maxmsg,4,2,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,4,2,53759)
CheckOffset(struct mq_attr,mq_msgsize,8,2,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,4,2,53760)
CheckOffset(struct mq_attr,mq_curmsgs,12,2,53760)
CheckMemberSize(struct mq_attr,__pad,16,2,53761)
CheckOffset(struct mq_attr,__pad,16,2,53761)
#elif defined __s390x__
CheckTypeSize(struct mq_attr,64, 16575, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,8,12,53757)
CheckOffset(struct mq_attr,mq_flags,0,12,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,8,12,53758)
CheckOffset(struct mq_attr,mq_maxmsg,8,12,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,8,12,53759)
CheckOffset(struct mq_attr,mq_msgsize,16,12,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,8,12,53760)
CheckOffset(struct mq_attr,mq_curmsgs,24,12,53760)
CheckMemberSize(struct mq_attr,__pad,32,12,53761)
CheckOffset(struct mq_attr,__pad,32,12,53761)
#elif defined __x86_64__
CheckTypeSize(struct mq_attr,64, 16575, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,8,11,53757)
CheckOffset(struct mq_attr,mq_flags,0,11,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,8,11,53758)
CheckOffset(struct mq_attr,mq_maxmsg,8,11,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,8,11,53759)
CheckOffset(struct mq_attr,mq_msgsize,16,11,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,8,11,53760)
CheckOffset(struct mq_attr,mq_curmsgs,24,11,53760)
CheckMemberSize(struct mq_attr,__pad,32,11,53761)
CheckOffset(struct mq_attr,__pad,32,11,53761)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct mq_attr,32, 16575, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,4,10,53757)
CheckOffset(struct mq_attr,mq_flags,0,10,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,4,10,53758)
CheckOffset(struct mq_attr,mq_maxmsg,4,10,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,4,10,53759)
CheckOffset(struct mq_attr,mq_msgsize,8,10,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,4,10,53760)
CheckOffset(struct mq_attr,mq_curmsgs,12,10,53760)
CheckMemberSize(struct mq_attr,__pad,16,10,53761)
CheckOffset(struct mq_attr,__pad,16,10,53761)
#elif defined __powerpc64__
CheckTypeSize(struct mq_attr,64, 16575, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,8,9,53757)
CheckOffset(struct mq_attr,mq_flags,0,9,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,8,9,53758)
CheckOffset(struct mq_attr,mq_maxmsg,8,9,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,8,9,53759)
CheckOffset(struct mq_attr,mq_msgsize,16,9,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,8,9,53760)
CheckOffset(struct mq_attr,mq_curmsgs,24,9,53760)
CheckMemberSize(struct mq_attr,__pad,32,9,53761)
CheckOffset(struct mq_attr,__pad,32,9,53761)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct mq_attr,32, 16575, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,4,6,53757)
CheckOffset(struct mq_attr,mq_flags,0,6,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,4,6,53758)
CheckOffset(struct mq_attr,mq_maxmsg,4,6,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,4,6,53759)
CheckOffset(struct mq_attr,mq_msgsize,8,6,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,4,6,53760)
CheckOffset(struct mq_attr,mq_curmsgs,12,6,53760)
CheckMemberSize(struct mq_attr,__pad,16,6,53761)
CheckOffset(struct mq_attr,__pad,16,6,53761)
#elif defined __ia64__
CheckTypeSize(struct mq_attr,64, 16575, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct mq_attr,mq_flags,8,3,53757)
CheckOffset(struct mq_attr,mq_flags,0,3,53757)
CheckMemberSize(struct mq_attr,mq_maxmsg,8,3,53758)
CheckOffset(struct mq_attr,mq_maxmsg,8,3,53758)
CheckMemberSize(struct mq_attr,mq_msgsize,8,3,53759)
CheckOffset(struct mq_attr,mq_msgsize,16,3,53759)
CheckMemberSize(struct mq_attr,mq_curmsgs,8,3,53760)
CheckOffset(struct mq_attr,mq_curmsgs,24,3,53760)
CheckMemberSize(struct mq_attr,__pad,32,3,53761)
CheckOffset(struct mq_attr,__pad,32,3,53761)
#else
Msg("Find size of mq_attr (16575)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0, NULL);\n",architecture,16575,0);
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
