#include <stdio.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <net/if.h>
#include "../libs/lsb_funcs.h"

void validate_ioctlreq(const int req, const char *name)
{
	switch(req) {
	case SIOCGIFCONF:
	case SIOCGIFFLAGS:
	case SIOCGIFADDR:
	case SIOCGIFNETMASK:
		break;
	default:
		lsb_fprintf(stderr,"Illegal ioctl() request 0x%x\n", req );
	}
}
