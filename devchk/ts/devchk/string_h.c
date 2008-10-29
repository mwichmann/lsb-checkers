/*
 * Test of string.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "string.h"



#ifdef TET_TEST
void string_h()
{
#else
int string_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in string.h\n");
#endif

printf("Checking data structures in string.h\n");
extern void * __mempcpy_db(void *, const void *, size_t);
CheckInterfacedef(__mempcpy,__mempcpy_db);
extern char * __stpcpy_db(char *, const char *);
CheckInterfacedef(__stpcpy,__stpcpy_db);
extern char * __strtok_r_db(char *, const char *, char * *);
CheckInterfacedef(__strtok_r,__strtok_r_db);
extern void * memchr_db(const void *, int, size_t);
CheckInterfacedef(memchr,memchr_db);
extern int memcmp_db(const void *, const void *, size_t);
CheckInterfacedef(memcmp,memcmp_db);
extern void * memcpy_db(void *, const void *, size_t);
CheckInterfacedef(memcpy,memcpy_db);
extern void * memmem_db(const void *, size_t, const void *, size_t);
CheckInterfacedef(memmem,memmem_db);
extern void * memmove_db(void *, const void *, size_t);
CheckInterfacedef(memmove,memmove_db);
extern void * memset_db(void *, int, size_t);
CheckInterfacedef(memset,memset_db);
extern char * strcat_db(char *, const char *);
CheckInterfacedef(strcat,strcat_db);
extern char * strchr_db(const char *, int);
CheckInterfacedef(strchr,strchr_db);
extern int strcmp_db(const char *, const char *);
CheckInterfacedef(strcmp,strcmp_db);
extern int strcoll_db(const char *, const char *);
CheckInterfacedef(strcoll,strcoll_db);
extern char * strcpy_db(char *, const char *);
CheckInterfacedef(strcpy,strcpy_db);
extern size_t strcspn_db(const char *, const char *);
CheckInterfacedef(strcspn,strcspn_db);
extern char * strerror_db(int);
CheckInterfacedef(strerror,strerror_db);
extern size_t strlen_db(const char *);
CheckInterfacedef(strlen,strlen_db);
extern char * strncat_db(char *, const char *, size_t);
CheckInterfacedef(strncat,strncat_db);
extern int strncmp_db(const char *, const char *, size_t);
CheckInterfacedef(strncmp,strncmp_db);
extern char * strncpy_db(char *, const char *, size_t);
CheckInterfacedef(strncpy,strncpy_db);
extern char * strpbrk_db(const char *, const char *);
CheckInterfacedef(strpbrk,strpbrk_db);
extern char * strrchr_db(const char *, int);
CheckInterfacedef(strrchr,strrchr_db);
extern char * strsignal_db(int);
CheckInterfacedef(strsignal,strsignal_db);
extern size_t strspn_db(const char *, const char *);
CheckInterfacedef(strspn,strspn_db);
extern char * strstr_db(const char *, const char *);
CheckInterfacedef(strstr,strstr_db);
extern char * strtok_db(char *, const char *);
CheckInterfacedef(strtok,strtok_db);
extern size_t strxfrm_db(char *, const char *, size_t);
CheckInterfacedef(strxfrm,strxfrm_db);
extern void * memccpy_db(void *, const void *, int, size_t);
CheckInterfacedef(memccpy,memccpy_db);
extern char * strdup_db(const char *);
CheckInterfacedef(strdup,strdup_db);
extern char * strndup_db(const char *, size_t);
CheckInterfacedef(strndup,strndup_db);
extern size_t strnlen_db(const char *, size_t);
CheckInterfacedef(strnlen,strnlen_db);
extern char * strsep_db(char * *, const char *);
CheckInterfacedef(strsep,strsep_db);
extern char * strerror_r_db(int, char *, size_t);
CheckInterfacedef(strerror_r,strerror_r_db);
extern char * strtok_r_db(char *, const char *, char * *);
CheckInterfacedef(strtok_r,strtok_r_db);
extern char * strcasestr_db(const char *, const char *);
CheckInterfacedef(strcasestr,strcasestr_db);
extern char * stpcpy_db(char *, const char *);
CheckInterfacedef(stpcpy,stpcpy_db);
extern char * stpncpy_db(char *, const char *, size_t);
CheckInterfacedef(stpncpy,stpncpy_db);
extern void * memrchr_db(const void *, int, size_t);
CheckInterfacedef(memrchr,memrchr_db);
extern void * __memmove_chk_db(void *, const void *, size_t, size_t);
CheckInterfacedef(__memmove_chk,__memmove_chk_db);
extern char * __stpncpy_chk_db(char *, const char *, size_t, size_t);
CheckInterfacedef(__stpncpy_chk,__stpncpy_chk_db);
extern char * __strcat_chk_db(char *, const char *, size_t);
CheckInterfacedef(__strcat_chk,__strcat_chk_db);
extern char * __strncat_chk_db(char *, const char *, size_t, size_t);
CheckInterfacedef(__strncat_chk,__strncat_chk_db);
extern char * __strncpy_chk_db(char *, const char *, size_t, size_t);
CheckInterfacedef(__strncpy_chk,__strncpy_chk_db);
extern char * __stpcpy_chk_db(char *, const char *, size_t);
CheckInterfacedef(__stpcpy_chk,__stpcpy_chk_db);
extern char * __strcpy_chk_db(char *, const char *, size_t);
CheckInterfacedef(__strcpy_chk,__strcpy_chk_db);
extern void * __memset_chk_db(void *, int, size_t, size_t);
CheckInterfacedef(__memset_chk,__memset_chk_db);
extern void * __mempcpy_chk_db(void *, const void *, size_t, size_t);
CheckInterfacedef(__mempcpy_chk,__mempcpy_chk_db);
extern void * __memcpy_chk_db(void *, const void *, size_t, size_t);
CheckInterfacedef(__memcpy_chk,__memcpy_chk_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in string.h\n\n",pcnt,cnt);
return cnt;
#endif

}
