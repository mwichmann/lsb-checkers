
/*
 * Utility macors used by the header tests
 */
#define CompareConstant(const,value) \
	cnt++;if( const != value ) {\
		Msg(#const " is %d instead of expected %d\n", const, value); \
		/* Msg(#const " is %f instead of expected %f\n", const, value); \
		Msg(#const " is %g instead of expected %g\n", const, value); \
		Msg("UPDATE Constants SET Cvalue=%d WHERE Cname='" #const "';\n", const); */ \
		}

#define CheckTypeSize(type,size) \
	cnt++;if( sizeof(type) != size ) \
		Msg("sizeof(" #type ") is %d instead of " #size "\n",sizeof(type));

#define CheckOffset(str,member,offset) \
	{ \
	str foo; \
	char *foob=(char *)&foo; \
	char *foom=(char *)&(foo.member); \
	cnt++;if( (foom-foob) != offset ) \
		Msg("offset(" #member ") is %d instead of " #offset "\n",(foom-foob)); \
	}

