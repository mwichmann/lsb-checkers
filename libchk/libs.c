/* Generated file */
#include <unistd.h>
#include "libs.h"
#include "libchk.h"

#include "../tetj/tetj.h"

struct modlib modlibs [] = { 
#if __s390x__
	{"LSB-Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __i386__
	{"LSB-Core","libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libc.so.6.1",libc_so_6_1,libc_so_6_1_classinfo},
#endif
#if __s390x__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __i386__
	{"LSB-Core","libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __s390x__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __i386__
	{"LSB-Core","libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __s390x__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __mc68000__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __arm__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __i386__
	{"LSB-Core","libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
	{"LSB-Graphics","libGL.so.1",libGL_so_1,libGL_so_1_classinfo},
	{"LSB-Graphics","libICE.so.6",libICE_so_6,libICE_so_6_classinfo},
#if __s390x__
	{"LSB-Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __i386__
	{"LSB-Core","libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libm.so.6.1",libm_so_6_1,libm_so_6_1_classinfo},
#endif
#if __s390x__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __arm__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __i386__
	{"LSB-Core","libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
	{"LSB-Core","libpam.so.0",libpam_so_0,libpam_so_0_classinfo},
#if __s390x__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __i386__
	{"LSB-Core","libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
	{"LSB-Graphics","libSM.so.6",libSM_so_6,libSM_so_6_classinfo},
#if __s390x__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __i386__
	{"LSB-Core","libstdc++.so.5",libstdcxx_so_5,libstdcxx_so_5_classinfo},
#endif
#if __s390x__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __arm__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __i386__
	{"LSB-Core","libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
	{"LSB-Graphics","libX11.so.6",libX11_so_6,libX11_so_6_classinfo},
	{"LSB-Graphics","libXext.so.6",libXext_so_6,libXext_so_6_classinfo},
	{"LSB-Graphics","libXt.so.6",libXt_so_6,libXt_so_6_classinfo},
#if __s390x__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __x86_64__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __powerpc64__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __arm__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __ia64__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __i386__
	{"LSB-Core","libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
{NULL,NULL,NULL,NULL}
};
