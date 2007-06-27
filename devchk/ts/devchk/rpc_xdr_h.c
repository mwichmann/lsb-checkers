/*
 * Test of rpc/xdr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/xdr.h\n");
#endif

printf("Checking data structures in rpc/xdr.h\n");
#if defined __i386__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#elif defined __s390__ && !defined __s390x__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#elif defined __ia64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#elif defined __powerpc64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#elif defined __s390x__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#elif defined __x86_64__
CheckEnum("XDR_ENCODE",XDR_ENCODE,0,32159);
CheckEnum("XDR_DECODE",XDR_DECODE,(0) + 1,32160);
CheckEnum("XDR_FREE",XDR_FREE,((0) + 1) + 1,32161);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9933,0);
Msg("Find size of xdr_op (9933)\n");
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9934,NULL);\n",architecture,10412,0);
Msg("Find size of XDR (10412)\n");
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9947,NULL);\n",architecture,9948,0);
Msg("Find size of xdrproc_t (9948)\n");
#endif

#if defined __i386__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9935,0);
Msg("Find size of xdr_ops (9935)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9949,0);
Msg("Find size of xdr_discrim (9949)\n");
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
extern void xdrrec_create_db(XDR *, u_int, u_int, caddr_t, int(*__readit)(char *,char *,int)
, int(*__writeit)(char *,char *,int)
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
