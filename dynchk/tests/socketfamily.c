#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>

int validate_socketfamily(sa_family_t input, const char *name)
{
	switch( input ) {
	case AF_UNIX:
		break;
	case AF_INET:
		break;
	case AF_INET6:
		break;
	default:
		fprintf(stderr,"Unexpected socket family %d\n", input );
		return 1;
	}
	return 0;
}
