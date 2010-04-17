/*
 * Test of X11/VendorP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "X11/IntrinsicP.h"
#include "X11/ShellP.h"
#include "X11/VendorP.h"



#ifdef TET_TEST
void X11_VendorP_h()
{
#else
int X11_VendorP_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/VendorP.h\n");
#endif

printf("Checking data structures in X11/VendorP.h\n");
#if 1
CheckTypeSize(VendorShellClassPart,0, 36983, 1, 1.0, NULL, 36982, NULL)
#endif

#if 1
CheckTypeSize(struct _VendorShellClassRec,0, 36984, 1, , NULL, 0, NULL)
Msg("Missing member data for _VendorShellClassRec on All\n");
CheckOffset(struct _VendorShellClassRec,core_class,0,1,216874)
CheckOffset(struct _VendorShellClassRec,composite_class,0,1,216875)
CheckOffset(struct _VendorShellClassRec,shell_class,0,1,216876)
CheckOffset(struct _VendorShellClassRec,wm_shell_class,0,1,216877)
CheckOffset(struct _VendorShellClassRec,vendor_shell_class,0,1,216878)
#endif

#if 1
CheckTypeSize(VendorShellClassRec,0, 36985, 1, 1.0, NULL, 36984, NULL)
#endif

#if 1
CheckTypeSize(VendorShellPart,0, 36987, 1, 1.0, NULL, 36986, NULL)
#endif

#if 1
CheckTypeSize(VendorShellRec,0, 36989, 1, 1.0, NULL, 36988, NULL)
#endif

#if 1
CheckTypeSize(VendorShellWidget,0, 36990, 1, 1.0, NULL, 36991, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/VendorP.h\n\n",pcnt,cnt);
return cnt;
#endif

}
