/* Generated file */
#include <unistd.h>
#include "libs.h"
#include "libchk.h"

#include "../tetj/tetj.h"

struct modlib modlibs [] = { 
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libc.so.6.1",libc_so_6_1,libc_so_6_1_classinfo},
#endif
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __mc68000__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __arm__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
	{"LSB_Graphics","libGL.so.1",libGL_so_1,libGL_so_1_classinfo},
	{"LSB_Graphics","libICE.so.6",libICE_so_6,libICE_so_6_classinfo},
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libm.so.6.1",libm_so_6_1,libm_so_6_1_classinfo},
#endif
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __arm__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
	{"LSB_Core","libpam.so.0",libpam_so_0,libpam_so_0_classinfo},
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
	{"LSB_Graphics","libSM.so.6",libSM_so_6,libSM_so_6_classinfo},
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __arm__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
	{"LSB_Graphics","libX11.so.6",libX11_so_6,libX11_so_6_classinfo},
	{"LSB_Graphics","libXext.so.6",libXext_so_6,libXext_so_6_classinfo},
	{"LSB_Graphics","libXt.so.6",libXt_so_6,libXt_so_6_classinfo},
/* LSB_Core */
#if __s390x__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __x86_64__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __s390__ && !__s390x__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc64__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __powerpc__ && !__powerpc64__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __arm__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __ia64__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
/* LSB_Core */
#if __i386__
	{"LSB_Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
{NULL,NULL,NULL,NULL}
};
