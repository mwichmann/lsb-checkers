#ifndef LSBCC_MODE
void _pthread_cleanup_pop(struct _pthread_cleanup_buffer *, int);
void _pthread_cleanup_push(struct _pthread_cleanup_buffer *, void(*fptr10)(void *), void *);
int __register_atfork_db(void(*)(void), void(*)(void), void(*)(void), void *);
#endif
