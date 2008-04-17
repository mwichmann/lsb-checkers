/*
 * Test of rpc/xdr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "rpc/xdr.h"



#ifdef TET_TEST
void rpc_xdr_h()
{
#else
int rpc_xdr_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/xdr.h\n");
#endif

printf("Checking data structures in rpc/xdr.h\n");
#if defined __i386__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#elif defined __s390__ && !defined __s390x__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#elif defined __ia64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#elif defined __powerpc64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#elif defined __s390x__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#elif defined __x86_64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159)
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160)
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161)
#else
Msg("Find size of xdr_op (9933)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9933,0);
#endif

#if defined __i386__
CheckTypeSize(XDR,24, 10412, 2, 1.3, NULL, 9934, NULL)
#elif defined __ia64__
CheckTypeSize(XDR,48, 10412, 3, 1.3, NULL, 9934, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XDR,24, 10412, 10, 1.3, NULL, 9934, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XDR,24, 10412, 6, 1.3, NULL, 9934, NULL)
#elif defined __powerpc64__
CheckTypeSize(XDR,48, 10412, 9, 2.0, NULL, 9934, NULL)
#elif defined __s390x__
CheckTypeSize(XDR,48, 10412, 12, 1.3, NULL, 9934, NULL)
#elif defined __x86_64__
CheckTypeSize(XDR,48, 10412, 11, 2.0, NULL, 9934, NULL)
#else
Msg("Find size of XDR (10412)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9934,NULL);\n",architecture,10412,0);
#endif

#if defined __i386__
CheckTypeSize(xdrproc_t,4, 9948, 2, 1.3, NULL, 9947, NULL)
#elif defined __ia64__
CheckTypeSize(xdrproc_t,8, 9948, 3, 1.3, NULL, 9947, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xdrproc_t,4, 9948, 10, 1.3, NULL, 9947, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xdrproc_t,4, 9948, 6, 1.3, NULL, 9947, NULL)
#elif defined __powerpc64__
CheckTypeSize(xdrproc_t,8, 9948, 9, 2.0, NULL, 9947, NULL)
#elif defined __s390x__
CheckTypeSize(xdrproc_t,8, 9948, 12, 1.3, NULL, 9947, NULL)
#elif defined __x86_64__
CheckTypeSize(xdrproc_t,8, 9948, 11, 2.0, NULL, 9947, NULL)
#else
Msg("Find size of xdrproc_t (9948)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9947,NULL);\n",architecture,9948,0);
#endif

#if defined __i386__
CheckTypeSize(struct xdr_ops,40, 9935, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_getlong,4,2,32165)
CheckOffset(struct xdr_ops,x_getlong,0,2,32165)
CheckMemberSize(struct xdr_ops,x_putlong,4,2,32168)
CheckOffset(struct xdr_ops,x_putlong,4,2,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,4,2,32172)
CheckOffset(struct xdr_ops,x_getbytes,8,2,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,4,2,32176)
CheckOffset(struct xdr_ops,x_putbytes,12,2,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,4,2,32178)
CheckOffset(struct xdr_ops,x_getpostn,16,2,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,4,2,32181)
CheckOffset(struct xdr_ops,x_setpostn,20,2,32181)
CheckMemberSize(struct xdr_ops,x_inline,4,2,32184)
CheckOffset(struct xdr_ops,x_inline,24,2,32184)
CheckMemberSize(struct xdr_ops,x_destroy,4,2,32186)
CheckOffset(struct xdr_ops,x_destroy,28,2,32186)
CheckMemberSize(struct xdr_ops,x_getint32,4,2,32189)
CheckOffset(struct xdr_ops,x_getint32,32,2,32189)
CheckMemberSize(struct xdr_ops,x_putint32,4,2,32192)
CheckOffset(struct xdr_ops,x_putint32,36,2,32192)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct xdr_ops,40, 9935, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_putlong,4,10,32168)
CheckOffset(struct xdr_ops,x_putlong,4,10,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,4,10,32172)
CheckOffset(struct xdr_ops,x_getbytes,8,10,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,4,10,32176)
CheckOffset(struct xdr_ops,x_putbytes,12,10,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,4,10,32178)
CheckOffset(struct xdr_ops,x_getpostn,16,10,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,4,10,32181)
CheckOffset(struct xdr_ops,x_setpostn,20,10,32181)
CheckMemberSize(struct xdr_ops,x_inline,4,10,32184)
CheckOffset(struct xdr_ops,x_inline,24,10,32184)
CheckMemberSize(struct xdr_ops,x_destroy,4,10,32186)
CheckOffset(struct xdr_ops,x_destroy,28,10,32186)
CheckMemberSize(struct xdr_ops,x_getint32,4,10,32189)
CheckOffset(struct xdr_ops,x_getint32,32,10,32189)
CheckMemberSize(struct xdr_ops,x_putint32,4,10,32192)
CheckOffset(struct xdr_ops,x_putint32,36,10,32192)
#elif defined __ia64__
CheckTypeSize(struct xdr_ops,80, 9935, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_getlong,8,3,32165)
CheckOffset(struct xdr_ops,x_getlong,0,3,32165)
CheckMemberSize(struct xdr_ops,x_putlong,8,3,32168)
CheckOffset(struct xdr_ops,x_putlong,8,3,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,8,3,32172)
CheckOffset(struct xdr_ops,x_getbytes,16,3,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,8,3,32176)
CheckOffset(struct xdr_ops,x_putbytes,24,3,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,8,3,32178)
CheckOffset(struct xdr_ops,x_getpostn,32,3,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,8,3,32181)
CheckOffset(struct xdr_ops,x_setpostn,40,3,32181)
CheckMemberSize(struct xdr_ops,x_inline,8,3,32184)
CheckOffset(struct xdr_ops,x_inline,48,3,32184)
CheckMemberSize(struct xdr_ops,x_destroy,8,3,32186)
CheckOffset(struct xdr_ops,x_destroy,56,3,32186)
CheckMemberSize(struct xdr_ops,x_getint32,8,3,32189)
CheckOffset(struct xdr_ops,x_getint32,64,3,32189)
CheckMemberSize(struct xdr_ops,x_putint32,8,3,32192)
CheckOffset(struct xdr_ops,x_putint32,72,3,32192)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct xdr_ops,40, 9935, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_putlong,4,6,32168)
CheckOffset(struct xdr_ops,x_putlong,4,6,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,4,6,32172)
CheckOffset(struct xdr_ops,x_getbytes,8,6,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,4,6,32176)
CheckOffset(struct xdr_ops,x_putbytes,12,6,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,4,6,32178)
CheckOffset(struct xdr_ops,x_getpostn,16,6,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,4,6,32181)
CheckOffset(struct xdr_ops,x_setpostn,20,6,32181)
CheckMemberSize(struct xdr_ops,x_inline,4,6,32184)
CheckOffset(struct xdr_ops,x_inline,24,6,32184)
CheckMemberSize(struct xdr_ops,x_destroy,4,6,32186)
CheckOffset(struct xdr_ops,x_destroy,28,6,32186)
CheckMemberSize(struct xdr_ops,x_getint32,4,6,32189)
CheckOffset(struct xdr_ops,x_getint32,32,6,32189)
CheckMemberSize(struct xdr_ops,x_putint32,4,6,32192)
CheckOffset(struct xdr_ops,x_putint32,36,6,32192)
#elif defined __powerpc64__
CheckTypeSize(struct xdr_ops,80, 9935, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_putlong,8,9,32168)
CheckOffset(struct xdr_ops,x_putlong,8,9,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,8,9,32172)
CheckOffset(struct xdr_ops,x_getbytes,16,9,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,8,9,32176)
CheckOffset(struct xdr_ops,x_putbytes,24,9,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,8,9,32178)
CheckOffset(struct xdr_ops,x_getpostn,32,9,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,8,9,32181)
CheckOffset(struct xdr_ops,x_setpostn,40,9,32181)
CheckMemberSize(struct xdr_ops,x_inline,8,9,32184)
CheckOffset(struct xdr_ops,x_inline,48,9,32184)
CheckMemberSize(struct xdr_ops,x_destroy,8,9,32186)
CheckOffset(struct xdr_ops,x_destroy,56,9,32186)
CheckMemberSize(struct xdr_ops,x_getint32,8,9,32189)
CheckOffset(struct xdr_ops,x_getint32,64,9,32189)
CheckMemberSize(struct xdr_ops,x_putint32,8,9,32192)
CheckOffset(struct xdr_ops,x_putint32,72,9,32192)
#elif defined __s390x__
CheckTypeSize(struct xdr_ops,80, 9935, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_putlong,8,12,32168)
CheckOffset(struct xdr_ops,x_putlong,8,12,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,8,12,32172)
CheckOffset(struct xdr_ops,x_getbytes,16,12,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,8,12,32176)
CheckOffset(struct xdr_ops,x_putbytes,24,12,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,8,12,32178)
CheckOffset(struct xdr_ops,x_getpostn,32,12,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,8,12,32181)
CheckOffset(struct xdr_ops,x_setpostn,40,12,32181)
CheckMemberSize(struct xdr_ops,x_inline,8,12,32184)
CheckOffset(struct xdr_ops,x_inline,48,12,32184)
CheckMemberSize(struct xdr_ops,x_destroy,8,12,32186)
CheckOffset(struct xdr_ops,x_destroy,56,12,32186)
CheckMemberSize(struct xdr_ops,x_getint32,8,12,32189)
CheckOffset(struct xdr_ops,x_getint32,64,12,32189)
CheckMemberSize(struct xdr_ops,x_putint32,8,12,32192)
CheckOffset(struct xdr_ops,x_putint32,72,12,32192)
#elif defined __x86_64__
CheckTypeSize(struct xdr_ops,80, 9935, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct xdr_ops,x_putlong,8,11,32168)
CheckOffset(struct xdr_ops,x_putlong,8,11,32168)
CheckMemberSize(struct xdr_ops,x_getbytes,8,11,32172)
CheckOffset(struct xdr_ops,x_getbytes,16,11,32172)
CheckMemberSize(struct xdr_ops,x_putbytes,8,11,32176)
CheckOffset(struct xdr_ops,x_putbytes,24,11,32176)
CheckMemberSize(struct xdr_ops,x_getpostn,8,11,32178)
CheckOffset(struct xdr_ops,x_getpostn,32,11,32178)
CheckMemberSize(struct xdr_ops,x_setpostn,8,11,32181)
CheckOffset(struct xdr_ops,x_setpostn,40,11,32181)
CheckMemberSize(struct xdr_ops,x_inline,8,11,32184)
CheckOffset(struct xdr_ops,x_inline,48,11,32184)
CheckMemberSize(struct xdr_ops,x_destroy,8,11,32186)
CheckOffset(struct xdr_ops,x_destroy,56,11,32186)
CheckMemberSize(struct xdr_ops,x_getint32,8,11,32189)
CheckOffset(struct xdr_ops,x_getint32,64,11,32189)
CheckMemberSize(struct xdr_ops,x_putint32,8,11,32192)
CheckOffset(struct xdr_ops,x_putint32,72,11,32192)
#else
Msg("Find size of xdr_ops (9935)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9935,0);
#endif

#if defined __i386__
CheckTypeSize(struct xdr_discrim,8, 9949, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,4,2,32199)
CheckOffset(struct xdr_discrim,proc,4,2,32199)
#elif defined __ia64__
CheckTypeSize(struct xdr_discrim,16, 9949, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,8,3,32199)
CheckOffset(struct xdr_discrim,proc,8,3,32199)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct xdr_discrim,8, 9949, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,4,6,32199)
CheckOffset(struct xdr_discrim,proc,4,6,32199)
#elif defined __powerpc64__
CheckTypeSize(struct xdr_discrim,16, 9949, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,8,9,32199)
CheckOffset(struct xdr_discrim,proc,8,9,32199)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct xdr_discrim,8, 9949, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,4,10,32199)
CheckOffset(struct xdr_discrim,proc,4,10,32199)
#elif defined __s390x__
CheckTypeSize(struct xdr_discrim,16, 9949, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,8,12,32199)
CheckOffset(struct xdr_discrim,proc,8,12,32199)
#elif defined __x86_64__
CheckTypeSize(struct xdr_discrim,16, 9949, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct xdr_discrim,proc,8,11,32199)
CheckOffset(struct xdr_discrim,proc,8,11,32199)
#else
Msg("Find size of xdr_discrim (9949)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9949,0);
#endif

extern void xdrstdio_create_db(XDR *, FILE *, enum xdr_op);
CheckInterfacedef(xdrstdio_create,xdrstdio_create_db);
extern bool_t xdr_array_db(XDR *, caddr_t *, u_int *, u_int, u_int, xdrproc_t);
CheckInterfacedef(xdr_array,xdr_array_db);
extern bool_t xdr_bool_db(XDR *, bool_t *);
CheckInterfacedef(xdr_bool,xdr_bool_db);
extern bool_t xdr_bytes_db(XDR *, char * *, u_int *, u_int);
CheckInterfacedef(xdr_bytes,xdr_bytes_db);
extern bool_t xdr_char_db(XDR *, char *);
CheckInterfacedef(xdr_char,xdr_char_db);
extern bool_t xdr_double_db(XDR *, double *);
CheckInterfacedef(xdr_double,xdr_double_db);
extern bool_t xdr_enum_db(XDR *, enum_t *);
CheckInterfacedef(xdr_enum,xdr_enum_db);
extern bool_t xdr_float_db(XDR *, float *);
CheckInterfacedef(xdr_float,xdr_float_db);
extern void xdr_free_db(xdrproc_t, char *);
CheckInterfacedef(xdr_free,xdr_free_db);
extern bool_t xdr_int_db(XDR *, int *);
CheckInterfacedef(xdr_int,xdr_int_db);
extern bool_t xdr_long_db(XDR *, long int *);
CheckInterfacedef(xdr_long,xdr_long_db);
extern bool_t xdr_opaque_db(XDR *, caddr_t, u_int);
CheckInterfacedef(xdr_opaque,xdr_opaque_db);
extern bool_t xdr_pointer_db(XDR *, char * *, u_int, xdrproc_t);
CheckInterfacedef(xdr_pointer,xdr_pointer_db);
extern bool_t xdr_reference_db(XDR *, caddr_t *, u_int, xdrproc_t);
CheckInterfacedef(xdr_reference,xdr_reference_db);
extern bool_t xdr_short_db(XDR *, short *);
CheckInterfacedef(xdr_short,xdr_short_db);
extern bool_t xdr_string_db(XDR *, char * *, u_int);
CheckInterfacedef(xdr_string,xdr_string_db);
extern bool_t xdr_u_char_db(XDR *, u_char *);
CheckInterfacedef(xdr_u_char,xdr_u_char_db);
extern bool_t xdr_u_int_db(XDR *, u_int *);
CheckInterfacedef(xdr_u_int,xdr_u_int_db);
extern bool_t xdr_u_long_db(XDR *, u_long *);
CheckInterfacedef(xdr_u_long,xdr_u_long_db);
extern bool_t xdr_u_short_db(XDR *, u_short *);
CheckInterfacedef(xdr_u_short,xdr_u_short_db);
extern bool_t xdr_union_db(XDR *, enum_t *, char *, const struct xdr_discrim *, xdrproc_t);
CheckInterfacedef(xdr_union,xdr_union_db);
extern bool_t xdr_vector_db(XDR *, char *, u_int, u_int, xdrproc_t);
CheckInterfacedef(xdr_vector,xdr_vector_db);
extern bool_t xdr_void_db(void);
CheckInterfacedef(xdr_void,xdr_void_db);
extern bool_t xdr_wrapstring_db(XDR *, char * *);
CheckInterfacedef(xdr_wrapstring,xdr_wrapstring_db);
extern void xdrmem_create_db(XDR *, caddr_t, u_int, enum xdr_op);
CheckInterfacedef(xdrmem_create,xdrmem_create_db);
extern void xdrrec_create_db(XDR *, u_int, u_int, caddr_t, int(*fptr13)(char *,char *,int)
, int(*fptr14)(char *,char *,int)
);
CheckInterfacedef(xdrrec_create,xdrrec_create_db);
extern bool_t xdrrec_eof_db(XDR *);
CheckInterfacedef(xdrrec_eof,xdrrec_eof_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/xdr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
