/*
 * Test of rpc/xdr.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "rpc/xdr.h"



#ifdef TET_TEST
void rpc_xdr_h()
{
#else
int rpc_xdr_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/xdr.h\n");
#endif

#ifdef __i386__
#elif __s390__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9933,0);
Msg("Find size of xdr_op (9933)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct XDR,24, 9934, 2)
CheckOffset(struct XDR,x_ops,4,2,32193)
CheckOffset(struct XDR,x_public,8,2,32194)
CheckOffset(struct XDR,x_private,12,2,32195)
CheckOffset(struct XDR,x_base,16,2,32196)
CheckOffset(struct XDR,x_handy,20,2,32197)
#elif __s390__
CheckTypeSize(struct XDR,24, 9934, 10)
Msg("Missing member data for XDR on S390\n");
CheckOffset(struct XDR,x_op,0,10,32162)
CheckOffset(struct XDR,x_ops,0,10,32193)
CheckOffset(struct XDR,x_public,0,10,32194)
CheckOffset(struct XDR,x_private,0,10,32195)
CheckOffset(struct XDR,x_base,0,10,32196)
CheckOffset(struct XDR,x_handy,0,10,32197)
#elif __ia64__
CheckTypeSize(struct XDR,48, 9934, 3)
CheckOffset(struct XDR,x_ops,8,3,32193)
CheckOffset(struct XDR,x_public,16,3,32194)
CheckOffset(struct XDR,x_private,24,3,32195)
CheckOffset(struct XDR,x_base,32,3,32196)
CheckOffset(struct XDR,x_handy,40,3,32197)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9934,0);
Msg("Find size of XDR (9934)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct xdr_ops,40, 9935, 2)
CheckOffset(struct xdr_ops,x_putlong,4,2,32168)
CheckOffset(struct xdr_ops,x_getbytes,8,2,32172)
CheckOffset(struct xdr_ops,x_putbytes,12,2,32176)
CheckOffset(struct xdr_ops,x_getpostn,16,2,32178)
CheckOffset(struct xdr_ops,x_setpostn,20,2,32181)
CheckOffset(struct xdr_ops,x_inline,24,2,32184)
CheckOffset(struct xdr_ops,x_destroy,28,2,32186)
CheckOffset(struct xdr_ops,x_getint32,32,2,32189)
CheckOffset(struct xdr_ops,x_putint32,36,2,32192)
#elif __s390__
CheckTypeSize(struct xdr_ops,40, 9935, 10)
Msg("Missing member data for xdr_ops on S390\n");
CheckOffset(struct xdr_ops,x_getlong,0,10,32165)
CheckOffset(struct xdr_ops,x_putlong,0,10,32168)
CheckOffset(struct xdr_ops,x_getbytes,0,10,32172)
CheckOffset(struct xdr_ops,x_putbytes,0,10,32176)
CheckOffset(struct xdr_ops,x_getpostn,0,10,32178)
CheckOffset(struct xdr_ops,x_setpostn,0,10,32181)
CheckOffset(struct xdr_ops,x_inline,0,10,32184)
CheckOffset(struct xdr_ops,x_destroy,0,10,32186)
CheckOffset(struct xdr_ops,x_getint32,0,10,32189)
CheckOffset(struct xdr_ops,x_putint32,0,10,32192)
#elif __ia64__
CheckTypeSize(struct xdr_ops,80, 9935, 3)
CheckOffset(struct xdr_ops,x_putlong,8,3,32168)
CheckOffset(struct xdr_ops,x_getbytes,16,3,32172)
CheckOffset(struct xdr_ops,x_putbytes,24,3,32176)
CheckOffset(struct xdr_ops,x_getpostn,32,3,32178)
CheckOffset(struct xdr_ops,x_setpostn,40,3,32181)
CheckOffset(struct xdr_ops,x_inline,48,3,32184)
CheckOffset(struct xdr_ops,x_destroy,56,3,32186)
CheckOffset(struct xdr_ops,x_getint32,64,3,32189)
CheckOffset(struct xdr_ops,x_putint32,72,3,32192)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9935,0);
Msg("Find size of xdr_ops (9935)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/xdr.h\n",cnt);
return cnt;
#endif

}
