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
CheckOffset(struct XDR,x_op,0,2,32162)
CheckOffset(struct XDR,x_ops,4,2,32193)
CheckOffset(struct XDR,x_public,8,2,32194)
CheckOffset(struct XDR,x_private,12,2,32195)
CheckOffset(struct XDR,x_base,16,2,32196)
CheckOffset(struct XDR,x_handy,20,2,32197)
#elif __s390__
CheckTypeSize(struct XDR,24, 9934, 10)
CheckOffset(struct XDR,x_ops,4,10,32193)
CheckOffset(struct XDR,x_public,8,10,32194)
CheckOffset(struct XDR,x_private,12,10,32195)
CheckOffset(struct XDR,x_base,16,10,32196)
CheckOffset(struct XDR,x_handy,20,10,32197)
#elif __ia64__
CheckTypeSize(struct XDR,48, 9934, 3)
CheckOffset(struct XDR,x_op,0,3,32162)
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
CheckTypeSize(XDR,24, 10412, 2)
#elif __ia64__
CheckTypeSize(XDR,48, 10412, 3)
#elif __s390__
CheckTypeSize(XDR,0, 10412, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10412,0);
Msg("Find size of XDR (10412)\n");
#endif

#ifdef __i386__
CheckTypeSize(xdrproc_t,4, 9948, 2)
#elif __ia64__
CheckTypeSize(xdrproc_t,8, 9948, 3)
#elif __s390__
CheckTypeSize(xdrproc_t,0, 9948, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9948,0);
Msg("Find size of xdrproc_t (9948)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct xdr_ops,40, 9935, 2)
CheckOffset(struct xdr_ops,x_getlong,0,2,32165)
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
CheckOffset(struct xdr_ops,x_putlong,4,10,32168)
CheckOffset(struct xdr_ops,x_getbytes,8,10,32172)
CheckOffset(struct xdr_ops,x_putbytes,12,10,32176)
CheckOffset(struct xdr_ops,x_getpostn,16,10,32178)
CheckOffset(struct xdr_ops,x_setpostn,20,10,32181)
CheckOffset(struct xdr_ops,x_inline,24,10,32184)
CheckOffset(struct xdr_ops,x_destroy,28,10,32186)
CheckOffset(struct xdr_ops,x_getint32,32,10,32189)
CheckOffset(struct xdr_ops,x_putint32,36,10,32192)
#elif __ia64__
CheckTypeSize(struct xdr_ops,80, 9935, 3)
CheckOffset(struct xdr_ops,x_getlong,0,3,32165)
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

#ifdef __i386__
CheckTypeSize(struct xdr_discrim,8, 9949, 2)
CheckOffset(struct xdr_discrim,proc,4,2,32199)
#elif __ia64__
CheckTypeSize(struct xdr_discrim,16, 9949, 3)
CheckOffset(struct xdr_discrim,proc,8,3,32199)
#elif __powerpc__
CheckTypeSize(struct xdr_discrim,8, 9949, 6)
Msg("Missing member data for xdr_discrim on PPC32\n");
CheckOffset(struct xdr_discrim,value,0,6,32198)
CheckOffset(struct xdr_discrim,proc,0,6,32199)
#elif __powerpc64__
CheckTypeSize(struct xdr_discrim,8, 9949, 9)
Msg("Missing member data for xdr_discrim on PPC64\n");
CheckOffset(struct xdr_discrim,value,0,9,32198)
CheckOffset(struct xdr_discrim,proc,0,9,32199)
#elif __s390__
CheckTypeSize(struct xdr_discrim,8, 9949, 10)
CheckOffset(struct xdr_discrim,proc,4,10,32199)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9949,0);
Msg("Find size of xdr_discrim (9949)\n");
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
