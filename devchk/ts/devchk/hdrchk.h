#ifdef __cplusplus
extern "C"
{
#endif

/* TET version */

#ifdef TET_TEST
#include <tet_api.h>
#define Msg tet_printf
#define Log tet_printf
#define HDRCHKTEST_PASS pcnt++;
#define HDRCHKTEST_FAIL  /* no increment of pcnt */
#else
#define HDRCHKTEST_PASS pcnt++;
#define HDRCHKTEST_FAIL
int Msg(char *f, ...);
int Log(char *f, ...);
#endif

/*
 * Utility macros used by the header tests
 */
#define CompareConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %d\n", value); \
	if( const != value ) {\
		Msg(#const " is %d instead of expected %d\n", const, value); \
		Msg("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%d, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 

#define CompareLongConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %ld\n", value); \
	if( (long)const != value ) {\
		Msg(#const " is %ld instead of expected %ld\n", const, value); \
		Msg("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%ld, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 

#define CompareFloatConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %f\n", value); \
	if( (float)const != value ) {\
		Msg(#const " is %f instead of expected %f\n", const, value); \
		Msg("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%f, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 

#define CompareDoubleConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %a\n", value); \
	if( (double)const != value ) {\
		Msg(#const " is %a instead of expected %a\n", const, value); \
		Msg("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%a, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 

#define CompareLongDoubleConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %La\n", value); \
	if( (long double)const != value ) {\
		Msg(#const " is %La instead of expected %La\n", const, value); \
		Msg("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%La, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 

#define CompareStringConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare String Constant "#const" has value  %s\n", value); \
	if( strcmp(const,value) != 0 ) {\
		Msg(#const " is %s instead of expected %s\n", const, value); \
		/* Msg(#const " is %f instead of expected %f\n", const, value); \
		Msg(#const " is %g instead of expected %g\n", const, value); \
		Msg("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d, #cid, %s, '"#appearedin"', "#withdrawnin");\n", aid, const); */ \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 


#define CheckTypeSize(type,size,tid,aid,appearedin,withdrawnin,basetype,attribute) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Check sizeof( "#type" ) is %d\n", size); \
	if( sizeof(type) != size ) { \
		Msg("sizeof(" #type ") found %d instead of " #size "\n",sizeof(type)); \
		Msg("REPLACE INTO ArchType (ATtid,ATaid,ATsize,ATappearedin,ATwithdrawnin,ATbasetype,ATattribute) "); \
    		Msg("VALUES (%d, %d, %d, '"#appearedin"', "#withdrawnin", %d, "#attribute");\n", tid, aid, sizeof(type), basetype); \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	}

#define CheckMemberSize(str,member,size,aid, tmid) \
{ \
	str foo; \
	char *foob=(char *)&foo; \
	char *foom=(char *)&(foo.member); \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Check sizeof of ( foo."#member ") is %d\n", size); \
	if( sizeof(foo.member) != size ) { \
		Msg("sizeof( " #str "." #member ") found %d instead of " #size "\n",(sizeof(foo.member))); \
		Msg("REPLACE INTO TypeMemberExtras (TMEaid,TMEtmid,TMEsize,TMEoffset) "); \
		Msg("VALUES (%d,%d,%d,%d );\n",aid,tmid, (sizeof(foo.member)),(foom-foob)); \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} \
}

#define CheckOffset(str,member,offset,aid, tmid) \
{ \
	str foo; \
	char *foob=(char *)&foo; \
	char *foom=(char *)&(foo.member); \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Check offset of (" #member ") is %d\n", offset); \
	if( (foom-foob) != offset ) { \
		Msg("offset(" #str "." #member ") found %d instead of " #offset "\n",(foom-foob)); \
		Msg("REPLACE INTO TypeMemberExtras (TMEaid,TMEtmid,TMEsize,TMEoffset) "); \
		Msg("VALUES (%d,%d,%d,%d );\n",aid,tmid, (sizeof(foo.member)),(foom-foob)); \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} \
}

#define CheckBitField(str,member,bitvalue,aid, tmid) \
{ \
	str foo; \
        int bitfield;               \
        foo.member=1;       \
        for(bitfield=1; ;bitfield++) {       \
            if((foo.member<<=1)==0) break;  \
         } \
         cnt++; \
         Log("subtest %d\n", cnt); \
         Log("Purpose: Check bitfield of  foo."#member " is %d\n", bitfield); \
         if( bitfield != bitvalue ) { \
                Msg("Bit-field for "#str"." #member " found %d instead of " #bitvalue " \n",bitfield); \
		Msg("UPDATE TypeMember Set TMbitfield="#bitvalue" WHERE TMid=%d ;\n",tmid); \
                HDRCHKTEST_FAIL \
         } \
         else { \
                HDRCHKTEST_PASS \
         } \
}

#define CheckEnum(enumnm,enumname,enumvalue,tmid) \
{ \
	cnt++; \
	if(enumname != enumvalue ) { \
		Msg( "%s enumerator has value %d instead of expected %d\n",enumnm,enumvalue,enumname); \
		Msg("UPDATE TypeMember Set TMarray=%d WHERE TMid=%d ;\n",enumname,tmid); \
			HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} \
}	

#define CheckInterfacedef(funcname,dbfunc) \
{ \
			typedef typeof(dbfunc) dbt; \
			typedef typeof(funcname) st; \
		        dbt * test2;  \
			st * test3; \
		        test2=test3; \
}

extern int architecture;

#ifdef __cplusplus
}
#endif
