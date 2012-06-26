#include <sys/types.h>
#include <signal.h>
#include <errno.h>
#include "../misc/lsb_output.h" 

int validate_processid(pid_t id, const char *name)
{
        if(kill(0, id) == -1) {
    	    if(errno == ESRCH) {
    		__lsb_fail(name, "Illegal process id %d", id);
    		return 1;
    	    }
        }

        return 0;
}
