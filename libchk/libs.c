/* Generated file */
#include <unistd.h>
#include "libs.h"
#include "libchk.h"

#include "../tetj/tetj.h"

void check_libs(struct tetj_handle *journal)
{
#if __ia64__
check_lib("/lib/ld-lsb-ia64.so.1",ld_lsb_ia64_so_1,ld_lsb_ia64_so_1_classinfo,journal);
#endif
#if __powerpc__ && !__powerpc64__
check_lib("/lib/ld-lsb-ppc32.so.1",ld_lsb_ppc32_so_1,ld_lsb_ppc32_so_1_classinfo,journal);
#endif
#if __s390__ && !__s390x__
check_lib("/lib/ld-lsb-s390.so.1",ld_lsb_s390_so_1,ld_lsb_s390_so_1_classinfo,journal);
#endif
#if __i386__
check_lib("/lib/ld-lsb.so.1",ld_lsb_so_1,ld_lsb_so_1_classinfo,journal);
#endif
#if __powerpc64__
check_lib("/lib64/ld-lsb-ppc64.so.1",ld_lsb_ppc64_so_1,ld_lsb_ppc64_so_1_classinfo,journal);
#endif
#if __s390x__
check_lib("/lib64/ld-lsb-s390x.so.1",ld_lsb_s390x_so_1,ld_lsb_s390x_so_1_classinfo,journal);
#endif
#if __x86_64__
check_lib("/lib64/ld-lsb-x86_64.so.1",ld_lsb_x86_64_so_1,ld_lsb_x86_64_so_1_classinfo,journal);
#endif
#if __i386__
check_lib("libc.so.6",libc_so_6,libc_so_6_classinfo,journal);
#endif
#if __powerpc__ && !__powerpc64__
check_lib("libc.so.6",libc_so_6,libc_so_6_classinfo,journal);
#endif
#if __powerpc64__
check_lib("libc.so.6",libc_so_6,libc_so_6_classinfo,journal);
#endif
#if __s390__ && !__s390x__
check_lib("libc.so.6",libc_so_6,libc_so_6_classinfo,journal);
#endif
#if __x86_64__
check_lib("libc.so.6",libc_so_6,libc_so_6_classinfo,journal);
#endif
#if __s390x__
check_lib("libc.so.6",libc_so_6,libc_so_6_classinfo,journal);
#endif
#if __ia64__
check_lib("libc.so.6.1",libc_so_6_1,libc_so_6_1_classinfo,journal);
#endif
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#if __i386__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
#if __ia64__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
#if __powerpc__ && !__powerpc64__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
#if __powerpc64__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
#if __s390__ && !__s390x__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
#if __x86_64__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
#if __s390x__
check_lib("libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo,journal);
#endif
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#if __i386__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
#if __ia64__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
#if __powerpc__ && !__powerpc64__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
#if __powerpc64__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
#if __s390__ && !__s390x__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
#if __x86_64__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
#if __s390x__
check_lib("libdl.so.2",libdl_so_2,libdl_so_2_classinfo,journal);
#endif
check_lib("libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo,journal);
check_lib("libGL.so.1",libGL_so_1,libGL_so_1_classinfo,journal);
check_lib("libICE.so.6",libICE_so_6,libICE_so_6_classinfo,journal);
#if __i386__
check_lib("libm.so.6",libm_so_6,libm_so_6_classinfo,journal);
#endif
#if __powerpc__ && !__powerpc64__
check_lib("libm.so.6",libm_so_6,libm_so_6_classinfo,journal);
#endif
#if __powerpc64__
check_lib("libm.so.6",libm_so_6,libm_so_6_classinfo,journal);
#endif
#if __s390__ && !__s390x__
check_lib("libm.so.6",libm_so_6,libm_so_6_classinfo,journal);
#endif
#if __x86_64__
check_lib("libm.so.6",libm_so_6,libm_so_6_classinfo,journal);
#endif
#if __s390x__
check_lib("libm.so.6",libm_so_6,libm_so_6_classinfo,journal);
#endif
#if __ia64__
check_lib("libm.so.6.1",libm_so_6_1,libm_so_6_1_classinfo,journal);
#endif
check_lib("libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo,journal);
check_lib("libpam.so.0",libpam_so_0,libpam_so_0_classinfo,journal);
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#if __i386__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
#if __ia64__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
#if __powerpc__ && !__powerpc64__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
#if __powerpc64__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
#if __s390__ && !__s390x__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
#if __x86_64__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
#if __s390x__
check_lib("libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo,journal);
#endif
check_lib("libSM.so.6",libSM_so_6,libSM_so_6_classinfo,journal);
check_lib("libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo,journal);
check_lib("libutil.so.1",libutil_so_1,libutil_so_1_classinfo,journal);
check_lib("libX11.so.6",libX11_so_6,libX11_so_6_classinfo,journal);
check_lib("libXext.so.6",libXext_so_6,libXext_so_6_classinfo,journal);
check_lib("libXt.so.6",libXt_so_6,libXt_so_6_classinfo,journal);
check_lib("libz.so.1",libz_so_1,libz_so_1_classinfo,journal);
}
