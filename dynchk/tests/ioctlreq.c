#include <stdio.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <net/if.h>
#include "../misc/lsb_output.h"

int validate_ioctlreq(const int req, const char *name)
{
	switch(req) {
		/* Socket related icotl()s */
	case SIOCGIFCONF:
	case SIOCGIFFLAGS:
	case SIOCGIFADDR:
	case SIOCGIFNETMASK:
	case SIOCGIFBRDADDR:
	case SIOCGIFMTU:
		break;
		/* file related icotl()s */
	case FIONREAD:
		break;
		/* tty related icotl()s */
	case TIOCGWINSZ:
		break;
	default:
		__lsb_fail(name, "Illegal ioctl request %x", req);
		return 1;
	}
	return 0;
}
