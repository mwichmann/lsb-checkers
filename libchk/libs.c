/* Generated file */
#include "libs.h"

extern void check_lib(char *libname, struct versym entries[]);
void check_libs()
{
#if defined(__ia64__)
check_lib("ld-lsb-ia64.so.1",ld_lsb_ia64_so_1);
#endif
#if defined(__i386__)
check_lib("ld-lsb.so.1",ld_lsb_so_1);
#endif
check_lib("libGL.so.1",libGL_so_1);
check_lib("libICE.so.6",libICE_so_6);
check_lib("libSM.so.6",libSM_so_6);
check_lib("libX11.so.6",libX11_so_6);
check_lib("libXext.so.6",libXext_so_6);
check_lib("libXt.so.6",libXt_so_6);
#if defined(__i386__)
check_lib("libc.so.6",libc_so_6);
#endif
#if defined(__ia64__)
check_lib("libc.so.6.1",libc_so_6_1);
#endif
check_lib("libcrypt.so.1",libcrypt_so_1);
check_lib("libdl.so.2",libdl_so_2);
#if defined(__i386__)
check_lib("libm.so.6",libm_so_6);
#endif
check_lib("libncurses.so.5",libncurses_so_5);
#if defined(__i386__)
check_lib("libpthread.so.0",libpthread_so_0);
#endif
#if defined(__i386__)
check_lib("librt.so.1",librt_so_1);
#endif
#if defined(__i386__)
check_lib("libutil.so.1",libutil_so_1);
#endif
check_lib("libz.so.1",libz_so_1);
}
