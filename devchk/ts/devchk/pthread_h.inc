extern int pthread_setschedprio (pthread_t __target_thread, int __prio);
extern int __register_atfork (void (*__prepare) (void),
                              void (*__parent) (void),
                              void (*__child) (void),
                              void *__dso_handle);

