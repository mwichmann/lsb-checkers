#ifndef LSBCC_MODE
#define __USE_UNIX98
struct _pthread_cleanup_buffer;
void _pthread_cleanup_pop(struct _pthread_cleanup_buffer *, int);
void _pthread_cleanup_push(struct _pthread_cleanup_buffer *, void(*fptr10)(void *), void *);
int __register_atfork(void (*)(void), void (*)(void), void (*)(void), void *);
/* These are now defined as enum members in upstream */
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_DEFAULT
#define PTHREAD_MUTEX_ERRORCHECK PTHREAD_MUTEX_ERRORCHECK
#define PTHREAD_MUTEX_NORMAL PTHREAD_MUTEX_NORMAL
#define PTHREAD_MUTEX_RECURSIVE PTHREAD_MUTEX_RECURSIVE
#define PTHREAD_RWLOCK_DEFAULT_NP PTHREAD_RWLOCK_DEFAULT_NP
#endif
