#ifdef __cplusplus
extern "C"
{
#endif

/* Max length of macro value to be checked */
#define MAX_VALUE_LENGTH 2000

/* TET version */

#ifdef TET_TEST
#include <tet_api.h>
#define Msg tet_printf
#define Sql 
#define Log tet_printf
#define HDRCHKTEST_PASS pcnt++;
#define HDRCHKTEST_FAIL  /* no increment of pcnt */
#else
#define HDRCHKTEST_PASS pcnt++;
#define HDRCHKTEST_FAIL
int Msg(char *f, ...);
int Sql(char *f, ...);
int Log(char *f, ...);
#endif

/*
 * Macros to force preprocessor to process the comparison expression twice:
 * - first, replace 'xstr' with 'str' and target constant name with its value
 * - second, replace 'str' with quotas around the constant value
 */
#define str(a) # a
#define xstr(s) str(s)

/*
 * Utility macros used by the header tests
 */
#define CompareConstant(const,value,cid,aid,appearedin,withdrawnin) \
	cnt++; \
	Log("subtest %d\n", cnt); \
	Log("Purpose: Compare Constant "#const" has value  %d\n", value); \
	if( const != value ) {\
		Msg(#const " is %d instead of expected %d\n", const, value); \
		Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%d, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
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
		Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%ld, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
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
		Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%f, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
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
		Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%a, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
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
		Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d," #cid ",%La, '"#appearedin"', "#withdrawnin");\n", aid, const);  \
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
		Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d, #cid, %s, '"#appearedin"', "#withdrawnin");\n", aid, const); */ \
		HDRCHKTEST_FAIL \
	} \
	else { \
		HDRCHKTEST_PASS \
	} 

#define CompareMacro(const,value,printable_value,cid,aid,appearedin,withdrawnin) \
        cnt++; \
        Log("subtest %d\n", cnt); \
        Log("Purpose: Compare Accessor Constant "#const" has value  %s\n", #value); \
        if( strlen(xstr(#const)) > MAX_VALUE_LENGTH ) {\
                Msg("Warning: length for "#const" is greater than %d", MAX_VALUE_LENGTH); \
        } \
        strncpy(real_macro_value,xstr(const),MAX_VALUE_LENGTH); \
        stripped_value_ndx=0; \
        for( macro_ndx=0; macro_ndx < strlen(real_macro_value); macro_ndx++ ) {\
                if( real_macro_value[macro_ndx] != ' ' ) {\
                        stripped_macro_value[stripped_value_ndx] = real_macro_value[macro_ndx];\
                        stripped_value_ndx++;\
                }\
        }\
        stripped_macro_value[stripped_value_ndx] = '\0'; \
        if( strcmp(stripped_macro_value,xstr(value)) ) { \
                /*Msg(#const " is \"%s\" instead of expected %s\n", real_macro_value, xstr(#value));*/ \
                Msg(#const " is \"%s\" instead of expected \"%s\"\n", real_macro_value, #printable_value); \
                /*Sql("REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES(%d, #cid, %s, '"#appearedin"', "#withdrawnin");\n", aid, xstr(const));*/ \
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
		Sql("REPLACE INTO ArchType (ATtid,ATaid,ATsize,ATappearedin,ATwithdrawnin,ATbasetype,ATattribute) "); \
    		Sql("VALUES (%d, %d, '%d', '"#appearedin"', "#withdrawnin", %d, "#attribute");\n", tid, aid, sizeof(type), basetype); \
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
		Sql("REPLACE INTO TypeMemberExtras (TMEaid,TMEtmid,TMEsize,TMEoffset) "); \
		Sql("VALUES (%d,%d,%d,%d );\n",aid,tmid, (sizeof(foo.member)),(foom-foob)); \
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
		Sql("REPLACE INTO TypeMemberExtras (TMEaid,TMEtmid,TMEsize,TMEoffset) "); \
		Sql("VALUES (%d,%d,%d,%d );\n",aid,tmid, (sizeof(foo.member)),(foom-foob)); \
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
		Sql("UPDATE TypeMember Set TMbitfield="#bitvalue" WHERE TMid=%d ;\n",tmid); \
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
		Sql("UPDATE TypeMember Set TMvalue=%d WHERE TMid=%d ;\n",enumname,tmid); \
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

#define CheckFunctionTypedef(functype,dbfunctype) \
{                                                 \
	dbfunctype* pdbfunctype;  \
	functype* pfunctype;      \
	pdbfunctype = pfunctype;  \
}

#define CheckGlobalVar(funcname,dbfunc) \
{ \
	dbfunc=funcname; \
}

extern int architecture;

#ifdef __cplusplus
}
#endif
