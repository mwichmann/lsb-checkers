#include <stdlib.h>
#include "elfchk.h"
struct versym libgcc_s_so_1[] = {
#if __i386__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_Backtrace","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __ia64__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc64__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __x86_64__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390x__
	{"_Unwind_DeleteException","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __i386__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_FindEnclosingFunction","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_Find_FDE","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_Find_FDE","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_Find_FDE","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_Find_FDE","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_Find_FDE","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_Find_FDE","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_ForcedUnwind","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetBSP","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetDataRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetDataRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetDataRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetDataRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetDataRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetDataRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetGR","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetIP","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetLanguageSpecificData","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetRegionStart","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_GetTextRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_GetTextRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_GetTextRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_GetTextRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_GetTextRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_GetTextRelBase","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_RaiseException","GCC_3.0",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __ia64__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc64__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __x86_64__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390x__
	{"_Unwind_Resume","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __i386__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __ia64__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __powerpc64__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __x86_64__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __s390x__
	{"_Unwind_Resume_or_Rethrow","GCC_3.3",0,LSB_Core,0,1},
#endif
#if __i386__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __ia64__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc64__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __x86_64__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390x__
	{"_Unwind_SetGR","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __i386__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __ia64__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc__ && !__powerpc64__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __powerpc64__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390__ && !__s390x__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __x86_64__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
#if __s390x__
	{"_Unwind_SetIP","GCC_3.0",0,LSB_Core,1,1},
#endif
	{0,0}};

struct classinfo *libgcc_s_so_1_classinfo[] = {

	NULL	};
