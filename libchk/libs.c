/* Generated file */
#include <unistd.h>
#include "libs.h"
#include "libchk.h"

#include "../tetj/tetj.h"

struct modlib modlibs [] = { 
#if __ia64__
	{LSB_Core,"/lib/ld-lsb-ia64.so.3",ld_lsb_ia64_so_3,ld_lsb_ia64_so_3_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"/lib/ld-lsb-ppc32.so.3",ld_lsb_ppc32_so_3,ld_lsb_ppc32_so_3_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"/lib/ld-lsb-s390.so.3",ld_lsb_s390_so_3,ld_lsb_s390_so_3_classinfo},
#endif
#if __i386__
	{LSB_Core,"/lib/ld-lsb.so.3",ld_lsb_so_3,ld_lsb_so_3_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"/lib64/ld-lsb-ppc64.so.3",ld_lsb_ppc64_so_3,ld_lsb_ppc64_so_3_classinfo},
#endif
#if __s390x__
	{LSB_Core,"/lib64/ld-lsb-s390x.so.3",ld_lsb_s390x_so_3,ld_lsb_s390x_so_3_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"/lib64/ld-lsb-x86-64.so.3",ld_lsb_x86_64_so_3,ld_lsb_x86_64_so_3_classinfo},
#endif
#if __s390x__
	{LSB_Core,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __i386__
	{LSB_Core,"libc.so.6",libc_so_6,libc_so_6_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libc.so.6.1",libc_so_6_1,libc_so_6_1_classinfo},
#endif
#if __s390x__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __i386__
	{LSB_Core,"libcrypt.so.1",libcrypt_so_1,libcrypt_so_1_classinfo},
#endif
#if __s390x__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __i386__
	{LSB_Core,"libdl.so.2",libdl_so_2,libdl_so_2_classinfo},
#endif
#if __s390x__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __mc68000__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __arm__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
#if __i386__
	{LSB_Core,"libgcc_s.so.1",libgcc_s_so_1,libgcc_s_so_1_classinfo},
#endif
	{LSB_Graphics,"libGL.so.1",libGL_so_1,libGL_so_1_classinfo},
	{LSB_Graphics,"libICE.so.6",libICE_so_6,libICE_so_6_classinfo},
#if __s390x__
	{LSB_Core,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __i386__
	{LSB_Core,"libm.so.6",libm_so_6,libm_so_6_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libm.so.6.1",libm_so_6_1,libm_so_6_1_classinfo},
#endif
#if __s390x__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __arm__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
#if __i386__
	{LSB_Core,"libncurses.so.5",libncurses_so_5,libncurses_so_5_classinfo},
#endif
	{LSB_Core,"libpam.so.0",libpam_so_0,libpam_so_0_classinfo},
#if __s390x__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
#if __i386__
	{LSB_Core,"libpthread.so.0",libpthread_so_0,libpthread_so_0_classinfo},
#endif
	{LSB_Core,"librt.so.1",librt_so_1,librt_so_1_classinfo},
	{LSB_Graphics,"libSM.so.6",libSM_so_6,libSM_so_6_classinfo},
#if __s390x__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __x86_64__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __powerpc64__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __ia64__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __i386__
	{LSB_Cpp,"libstdc++.so.6",libstdcxx_so_6,libstdcxx_so_6_classinfo},
#endif
#if __s390x__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __arm__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
#if __i386__
	{LSB_Core,"libutil.so.1",libutil_so_1,libutil_so_1_classinfo},
#endif
	{LSB_Graphics,"libX11.so.6",libX11_so_6,libX11_so_6_classinfo},
	{LSB_Graphics,"libXext.so.6",libXext_so_6,libXext_so_6_classinfo},
	{LSB_Graphics,"libXt.so.6",libXt_so_6,libXt_so_6_classinfo},
#if __s390x__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __x86_64__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __s390__ && !__s390x__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __powerpc64__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __powerpc__ && !__powerpc64__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __arm__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __ia64__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
#if __i386__
	{LSB_Core,"libz.so.1",libz_so_1,libz_so_1_classinfo},
#endif
{NULL,NULL,NULL,NULL}
};
