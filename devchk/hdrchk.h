
/*
 * Utility macros used by the header tests
 */
/*
 * Note, the SQL statments below are not for normal use. They are present
 * simply as an aid for the development of the LSB, and will be removed in
 * the final version of this tool.
 */
#define CompareConstant(const,value) \
	cnt++;if( const != value ) {\
		Msg(#const " is %d instead of expected %d\n", const, value); \
		/* Msg(#const " is %f instead of expected %f\n", const, value); \
		Msg(#const " is %g instead of expected %g\n", const, value); \
		Msg("UPDATE Constants SET Cvalue=%d WHERE Cname='" #const "';\n", const); */ \
		}

#define CheckTypeSize(type,size,tid) \
	cnt++;if( sizeof(type) != size ) { \
		Msg("sizeof(" #type ") is %d instead of " #size "\n",sizeof(type)); \
		Msg("UPDATE ArchType SET ATsize=%d WHERE ATtid=" #tid " AND ATaid=%d;\n", sizeof(type), architecture); \
	}

#define CheckOffset(str,member,offset) \
	{ \
	str foo; \
	char *foob=(char *)&foo; \
	char *foom=(char *)&(foo.member); \
	cnt++;if( (foom-foob) != offset ) { \
		Msg("offset(" #member ") is %d instead of " #offset "\n",(foom-foob)); \
		Msg("UPDATE TypeMember SET TMoffset=%d WHERE TMname='" #member "';\n", (foom-foob)); \
	} \
	}


extern int architecture;
