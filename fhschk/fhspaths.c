#include "limits.h"
#include "stdlib.h"
#include "string.h"
#include "fhschk.h"

#define FHS_PREFIX	0x01	/* Path is only a prefix */
#define FHS_FORMAT	0x02	/* Path is a format string permitting the app
				   name to be added as part of the path name */
#define FHS_READ	0x04	/* App may read from this path */
#define FHS_WRITE	0x10	/* App may write to this path */
#define FHS_EXEC	0x20	/* App may execute files from this path */
#define FHS_CREATE	0x40	/* App may create files in this path */

struct fhspath {
	char	*path;
	int	flags;
};

static struct fhspath fhspaths[] = {
	{ "/dev/null", FHS_READ|FHS_WRITE },
	{ "/dev/tty", FHS_READ|FHS_WRITE },
	{ "/dev/zero", FHS_READ|0 },
	{ "/dev/", FHS_PREFIX|FHS_READ|FHS_WRITE },
	{ "/opt/%s/", FHS_PREFIX|FHS_FORMAT|FHS_READ|FHS_WRITE|FHS_CREATE },
	{ "/etc/opt/%s/", FHS_PREFIX|FHS_FORMAT|FHS_READ },
	{ "/var/opt/%s/", FHS_PREFIX|FHS_FORMAT|FHS_READ|FHS_WRITE },
	{ "/usr/share/", FHS_PREFIX|FHS_READ},
	{ "/bin/", FHS_PREFIX|FHS_EXEC },
	{ "/usr/bin/", FHS_PREFIX|FHS_EXEC },
	{ "/tmp/", FHS_PREFIX|FHS_READ|FHS_WRITE|FHS_CREATE },
	{ "/usr/tmp/", FHS_PREFIX|FHS_READ|FHS_WRITE|FHS_CREATE },
	{ "/", FHS_PREFIX },
};

int numpaths = sizeof(fhspaths)/sizeof(struct fhspath);

/*
 * We need to determine the name of the application we are running so we
 * can use it to buid up some of the path names
 */

static char *myappname=NULL;

static
void get_myappname()
{
	/* use /proc/self/exe or something to figure this out */
	myappname="testapp";
}

/*
 * This is the engine for checking FHS things. It called only from the set
 * of wrapper functions further below that provied a more usage oritented
 * interface.
 */

static int
match_fhs_attributes(char *path, int flags)
{
char fhspath[PATH_MAX+1];
int i,match=0;

	if( !myappname ) get_myappname();

	/*
	 * First, we have to find the best match for the path we
	 * are testing
	 */
	for(i=0; i<numpaths; i++) {
		/* handle a FORMAT if we need to */
		if(fhspaths[i].flags&FHS_FORMAT)
			snprintf(fhspath,PATH_MAX,fhspaths[i].path,myappname);
		else
			strcpy(fhspath,fhspaths[i].path);

		/* Compare based on it beig a prefix or not */
		if(fhspaths[i].flags&FHS_PREFIX)
			match=strncmp(fhspath,path,
					strlen(fhspath));
		else
			match=strcmp(fhspath,path);
		if(match==0) break;
	}

	/*
	 * Second, compare the flags against the entry selected to determine
	 * if the desired action is permitted.
	 */
	if(fhspaths[i].flags&flags)
		return 1;
	else
		return 0;
}

/*
 * These are the user visible interfaces to the FHS code.
 */
int is_fhs_readable(char *path)
{
	return match_fhs_attributes(mkabsolutepath(path),FHS_READ);
}

int is_fhs_writable(char *path)
{
	return match_fhs_attributes(mkabsolutepath(path),FHS_WRITE);
}

int is_fhs_creatable(char *path)
{
	return match_fhs_attributes(mkabsolutepath(path),FHS_CREATE);
}

int is_fhs_execable(char *path)
{
	return match_fhs_attributes(mkabsolutepath(path),FHS_EXEC);
}

#ifdef TEST
struct fhstest {
	char	*path;
	char	rd:1,
		wr:1,
		cr:1,
		ex:1;
} testset[] = {
	{"/dev/null",1,1,0,0},
	{"/dev/zero",1,0,0,0},
	{"/dev/tty",1,1,0,0},
	{"/tmp/foo",1,1,1,0},
	{"/bin/ls",0,0,0,1},
	{"/usr/bin/vi",0,0,0,1},
	{"/sbin/init",0,0,0,0},
};

int numtests=sizeof(testset)/sizeof(struct fhstest);

main()
{
int i;
int r;

for(i=0;i<numtests;i++) {
        printf("%s->",testset[i].path);

        r =is_fhs_readable(testset[i].path);
        if( (r && testset[i].rd ) ||
	    ( !r && !testset[i].rd ) )
		printf("OK ");
	else
		printf("ERROR ");

        r =is_fhs_writable(testset[i].path);
        if( (r && testset[i].wr ) ||
	    ( !r && !testset[i].wr ) )
		printf("OK ");
	else
		printf("ERROR ");

        r =is_fhs_creatable(testset[i].path);
        if( (r && testset[i].cr ) ||
	    ( !r && !testset[i].cr ) )
		printf("OK ");
	else
		printf("ERROR ");

        r =is_fhs_execable(testset[i].path);
        if( (r && testset[i].ex ) ||
	    ( !r && !testset[i].ex ) )
		printf("OK ");
	else
		printf("ERROR ");

        printf("\n");
        }

return 0;
}
#endif
