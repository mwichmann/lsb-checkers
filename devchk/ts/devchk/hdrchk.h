/* TET version */

#ifdef TET_TEST
#include <tet_api.h>
#define Msg tet_printf
#define Log tet_printf
#define HDRCHKTEST_PASS pcnt++;
#define HDRCHKTEST_FAIL  /* no increment of pcnt */
#else
#define HDRCHKTEST_PASS
#define HDRCHKTEST_FAIL
#endif

/*
 * Utility macors used by the header tests
 */
#define CompareConstant(const,value) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %d\n", value); \
	if( const != value ) {\
		Msg(#const " is %d instead of expected %d\n", const, value); \
		/* Msg(#const " is %f instead of expected %f\n", const, value); \
		Msg(#const " is %g instead of expected %g\n", const, value); \
		Msg("UPDATE Constants SET Cvalue=%d WHERE Cname='" #const "';\n", const); */ \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 


#define CheckTypeSize(type,size,tid,aid) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Check sizeof( "#type" ) is %d\n", size); \
	if( sizeof(type) != size ) { \
		Msg("sizeof(" #type ") is %d instead of " #size "\n",sizeof(type)); \
		Msg("REPLACE INTO ArchType (ATtid,ATaid,ATsize) "); \
		Msg("VALUES (%d, %d, %d);\n", tid, aid, sizeof(type)); \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	}

#define CheckOffset(str,member,offset) \
{ \
	str foo; \
	char *foob=(char *)&foo; \
	char *foom=(char *)&(foo.member); \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Check offset of (\" #member \") is %d\n", offset); \
	if( (foom-foob) != offset ) { \
		Msg("offset(" #member ") is %d instead of " #offset "\n",(foom-foob)); \
		Msg("UPDATE TypeMember SET TMoffset=%d WHERE TMname='" #member "';\n", (foom-foob)); \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} \
}

extern int architecture;
