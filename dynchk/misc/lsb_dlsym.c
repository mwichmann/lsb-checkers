#define RETURN_ADDRESS(nr) \
  __builtin_extract_return_addr (__builtin_return_address (nr))

#include <dlfcn.h>

extern void *
_dl_sym (void *handle, const char *name, void *who);
extern void *
_dl_vsym (void *handle, const char *name, const char *version, void *who);
extern void * __libc_init_first;

void *lsb_dlsym(void *handle, const char *name)
{   
    return _dl_sym(handle, name, __libc_init_first);
}

void *lsb_dlvsym(void *handle, const char *name, const char *version)
{
    char here;
    return _dl_vsym(handle, name, version, __libc_init_first);
}
