#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fhschk.h"

#define FHS_PREFIX	0x01	/* Path is only a prefix */
#define FHS_FORMAT	0x02	/* Path is a format string permitting the app
				   name to be added as part of the path name */
#define FHS_READ	0x04	/* App may read from this path */
#define FHS_WRITE	0x10	/* App may write to this path */
#define FHS_EXEC	0x20	/* App may execute files from this path */
#define FHS_CREATE	0x40	/* App may create files in this path */
#define FHS_INSTALL	0x80	/* Package may install files in this path */

struct fhspath {
    char *path;
    int flags;
    char *fhssect;
};

static struct fhspath fhspaths[] = {
    {"/bin/", FHS_PREFIX | FHS_EXEC, "3.4"},
    {"/dev/null", FHS_READ | FHS_WRITE, "6.1.3"},
    {"/dev/tty", FHS_READ | FHS_WRITE, "6.1.3"},
    {"/dev/zero", FHS_READ, "6.1.3"},
    {"/dev/", FHS_PREFIX | FHS_READ | FHS_WRITE, "3.6"},
    {"/etc/init.d/", FHS_PREFIX | FHS_READ | FHS_INSTALL, "LSB 16.2"}, /* bug 1368 */
    {"/etc/opt/%s/", FHS_PREFIX | FHS_FORMAT | FHS_READ | FHS_INSTALL, "3.7.4"},
    {"/etc/opt/%s", FHS_FORMAT | FHS_READ | FHS_INSTALL, "3.7.4"},
    {"/etc/profile.d/", FHS_PREFIX | FHS_READ | FHS_INSTALL, "LSB 16.2"}, /* bug 1368 */
    {"/etc/", FHS_PREFIX, "3.7"},
    {"/home/", FHS_PREFIX, "3.8"},
    {"/lib/cpp", FHS_PREFIX | FHS_EXEC, "3.9.2"},
    {"/lib/", FHS_PREFIX, "3.9"},
    {"/lib32/", FHS_PREFIX, "3.10"},
    {"/lib64/", FHS_PREFIX, "3.10"},
    {"/media/floppy", FHS_PREFIX | FHS_READ | FHS_WRITE, "3.11.2"},
    {"/media/cdrom", FHS_PREFIX | FHS_READ | FHS_WRITE, "3.11.2"},
    {"/media/cdrecorder", FHS_PREFIX | FHS_READ | FHS_WRITE, "3.11.2"},
    {"/media/zip", FHS_PREFIX | FHS_READ | FHS_WRITE, "3.11.2"},
    {"/media/", FHS_PREFIX, "3.11"},
    {"/opt/%s/bin/", FHS_PREFIX | FHS_FORMAT | FHS_EXEC | FHS_INSTALL,"3.13.2"},
    {"/opt/%s/share/man/", FHS_PREFIX | FHS_FORMAT | FHS_READ | FHS_INSTALL, "3.13.2"},
    {"/opt/%s/", FHS_PREFIX | FHS_FORMAT | FHS_READ | FHS_WRITE | FHS_CREATE | FHS_INSTALL, "3.13"},
    {"/opt/%s", FHS_FORMAT | FHS_READ | FHS_WRITE | FHS_CREATE | FHS_INSTALL, "3.13"},
    {"/root/", FHS_PREFIX, "3.14"},
    {"/sbin/", FHS_PREFIX | FHS_EXEC, "3.15"},
    {"/srv/", FHS_PREFIX, "3.16"},
    {"/tmp/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "3.17"},
    {"/usr/bin/", FHS_PREFIX | FHS_EXEC, "4.5"},
    {"/usr/include/", FHS_PREFIX | FHS_READ, "4.6"},
    {"/usr/lib/", FHS_PREFIX, "4.7"},
    {"/usr/lib32/", FHS_PREFIX, "4.8"},
    {"/usr/lib64/", FHS_PREFIX, "4.8"},
    {"/usr/local/", FHS_PREFIX, "4.8.2"},
    {"/usr/sbin/", FHS_PREFIX | FHS_EXEC, "4.10"},
    {"/usr/share/", FHS_PREFIX | FHS_READ, "4.11"},
    {"/var/cache/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.5"},
    {"/var/games/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.7"},
    {"/var/lib/%s/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.8"},
    {"/var/lock/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.9"},
    {"/var/log/%s/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.10"},
    {"/var/mail/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.11"},
    {"/var/opt/%s/", FHS_PREFIX | FHS_FORMAT | FHS_READ | FHS_WRITE | FHS_INSTALL, "5.12"},
    {"/var/opt/%s", FHS_FORMAT | FHS_READ | FHS_WRITE | FHS_INSTALL, "5.12"},
    {"/var/run/%s.pid", FHS_FORMAT | FHS_READ | FHS_WRITE, "5.13"},
    {"/var/run/%s/", FHS_PREFIX | FHS_FORMAT | FHS_READ | FHS_WRITE, "5.13"},
    {"/var/spool/%s/", FHS_PREFIX | FHS_FORMAT | FHS_READ | FHS_WRITE, "5.14"},
    {"/var/tmp/", FHS_PREFIX | FHS_READ | FHS_WRITE | FHS_CREATE, "5.15"},
    {"/proc", FHS_PREFIX, "6.1.6"},
    {"/", FHS_PREFIX, "3.1"},
};

int numpaths = sizeof(fhspaths) / sizeof(struct fhspath);

/*
 * We need to determine the name of the application we are running so we
 * can use it to buid up some of the path names
 */
static char *myappname = NULL;

static void
get_myappname()
{
    /* use /proc/self/exe or something to figure this out */
    myappname = "testapp";
}

void 
set_myappname(char *app)
{
    /* use /proc/self/exe or something to figure this out */
    myappname = strdup(app);
}

/*
 * This is the engine for checking FHS things. It called only from the set
 * of wrapper functions further below that provied a more usage oritented
 * interface.
 */
static int
match_fhs_attributes(char *path, int flags)
{
    char fhspath[PATH_MAX + 1];
    int i, match = 0;

    if (!myappname)
	get_myappname();

    /*
     * First, we have to find the best match for the path we
     * are testing
     */
    for (i = 0; i < numpaths; i++) {
	/* handle a FORMAT if we need to */
	if (fhspaths[i].flags & FHS_FORMAT)
	    snprintf(fhspath, PATH_MAX, fhspaths[i].path, myappname);
	else
	    strcpy(fhspath, fhspaths[i].path);

	/* Compare based on it beig a prefix or not */
	if (fhspaths[i].flags & FHS_PREFIX)
	    match = strncmp(fhspath, path, strlen(fhspath));
	else
	    match = strcmp(fhspath, path);
	if (match == 0)
	    break;
    }

    /*
     * Second, compare the flags against the entry selected to determine
     * if the desired action is permitted.
     */
    if (fhspaths[i].flags & flags)
	return 1;
    else
	return 0;
}

/*
 * These are the user visible interfaces to the FHS code.
 */
int 
is_fhs_readable(char *path)
{
    return match_fhs_attributes(mkabsolutepath(path), FHS_READ);
}

int is_fhs_writable(char *path)
{
    return match_fhs_attributes(mkabsolutepath(path), FHS_WRITE);
}

int 
is_fhs_creatable(char *path)
{
    return match_fhs_attributes(mkabsolutepath(path), FHS_CREATE);
}

int 
is_fhs_installable(char *path)
{
    return match_fhs_attributes(_mkabsolutepath("/", path), FHS_INSTALL);
}

int is_fhs_execable(char *path)
{
    return match_fhs_attributes(mkabsolutepath(path), FHS_EXEC);
}

#ifdef TEST
struct fhstest {
    char *path;
    char rd:1, wr:1, cr:1, ex:1;
} testset[] = {
    {"/dev/null", 1, 1, 0, 0}, 
    {"/dev/zero", 1, 0, 0, 0}, 
    {"/dev/tty", 1, 1, 0, 0}, 
    {"/tmp/foo", 1, 1, 1, 0}, 
    {"/bin/ls", 0, 0, 0, 1}, 
    {"/usr/bin/vi", 0, 0, 0, 1}, 
    {"/sbin/init", 0, 0, 0, 1},
};

int numtests = sizeof(testset) / sizeof(struct fhstest);

main()
{
    int i;
    int r;

    for (i = 0; i < numtests; i++) {
	printf("%s->", testset[i].path);

	r = is_fhs_readable(testset[i].path);
	if ((r && testset[i].rd) || (!r && !testset[i].rd))
	    printf("OK ");
	else
	    printf("ERROR ");

	r = is_fhs_writable(testset[i].path);
	if ((r && testset[i].wr) || (!r && !testset[i].wr))
	    printf("OK ");
	else
	    printf("ERROR ");

	r = is_fhs_creatable(testset[i].path);
	if ((r && testset[i].cr) || (!r && !testset[i].cr))
	    printf("OK ");
	else
	    printf("ERROR ");

	r = is_fhs_execable(testset[i].path);
	if ((r && testset[i].ex) || (!r && !testset[i].ex))
	    printf("OK ");
	else
	    printf("ERROR ");

	printf("\n");
    }

    return 0;
}
#endif
