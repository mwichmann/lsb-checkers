#include <stdio.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <net/if.h>
#include "../libs/__lsb_funcs.h"

int validate_ioctlreq(const int req, const char *name)
{
	switch(req) {
		/* Socket related icotl()s */
	case SIOCGIFCONF:
	case SIOCGIFFLAGS:
	case SIOCGIFADDR:
	case SIOCGIFNETMASK:
		break;
		/* file related icotl()s */
	case FIONREAD:
		break;
	default:
		__lsb_fprintf(stderr,"Illegal ioctl() request 0x%x\n", req );
		return 1;
	}
	return 0;
}
