#include "nspr4/prinit.h"
#if !defined LSBCC_MODE && (PR_VMAJOR < 4 || (PR_VMAJOR == 4 && PR_VMINOR < 7))
#include "nspr4/prio.h"
typedef PRInt32 PROsfd;
#endif
