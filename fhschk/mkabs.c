#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*
 * The main routine here, mkabsolutepath() is used to turn a path into
 * a 'normalized' absolute path. This means making relative paths absolute,
 * and eliminating '..' path elements.
 *
 * A normalize path can then be more easily tested elsewhere in this library.
 */

#define moveelemsdown(dst, src) \
{ \
    int d, s; \
    for (s = src, d = (dst >= 0 ? dst : 0); s < numelems; s++, d++) \
	pathelems[d] = pathelems[s]; \
}

char *
_mkabsolutepath(char *cwd, char *path)
{
    char localpath[PATH_MAX + 1];
    char returnpath[PATH_MAX + 1];
    char *tmppath;
    char **pathelems;
    int i, numelems = 0, copied;

    /* 
     * First, convert the path into an absolute path if needed.
     */
    if (path[0] != '/') {
	/* A relative path */
	char joinedpath[PATH_MAX + 1];

	strncpy(joinedpath, cwd, PATH_MAX);
	strncat(joinedpath, "/", PATH_MAX);
	strncat(joinedpath, path, PATH_MAX - strlen(joinedpath));
	strcpy(localpath, joinedpath);
    } else {
	/* An absolute path */
	strcpy(localpath, path);
    }

    /* 
     * Now we need to parse localpath into the path elements
     */
    for (tmppath = localpath; *tmppath; tmppath++)
	if (*tmppath == '/')
	    numelems++;

    pathelems = calloc(numelems, sizeof(char *));

    for (i = 0, tmppath = localpath; *tmppath; tmppath++)
	if (*tmppath == '/') {
	    *tmppath = '\0';
	    pathelems[i++] = &tmppath[1];
	}
#ifdef TRACE
    printf("%d path elements\n", numelems);
    for (i = 0; i < numelems; i++)
	printf("%s\n", pathelems[i]);
#endif

    for (i = 0; i < numelems; i++) {
	/* Check for empty path elements which come from '//' */
	if (pathelems[i][0] == '\0') {
	    moveelemsdown(i, i + 1);
	    i--;
	    numelems--;
	    continue;
	}

	/* Check for curdir path elements '.' */
	if (pathelems[i][0] == '.' && pathelems[i][1] == '\0') {
	    moveelemsdown(i, i + 1);
	    i--;
	    numelems--;
	    continue;
	}

	/* Check for curdir path elements '..' */
	if (pathelems[i][0] == '.' && pathelems[i][1] == '.') {
	    moveelemsdown(i - 1, i + 1);
	    numelems -= (i == 0) ? 1 : 2;
	    i -= 2;
	    if (i < -1)
		i = -1;
	    continue;
	}
    }

#ifdef TRACE
    printf("%d path elements\n", numelems);
    for (i = 0; i < numelems; i++)
	printf("%s\n", pathelems[i]);
#endif

    returnpath[0] = '\0';
    copied = 0;		/* check for overflow */
    for (i = 0; i < numelems; i++) {
	strcat(returnpath, "/");
	copied += 1;
	if (copied + strlen(pathelems[i]) > sizeof(returnpath)) {
	    strncpy (returnpath, pathelems[i], (sizeof(returnpath)-1)-copied);
	    break;	/* not ideal, but for now just truncate it */
	} else {
	    strcat(returnpath, pathelems[i]);
	    copied += strlen(pathelems[i]);
	}
    }

    free(pathelems);
    return strdup(returnpath);
}

char *
mkabsolutepath(char *path)
{
    char cwd[PATH_MAX + 1];
    getcwd(cwd, PATH_MAX);
    return _mkabsolutepath(cwd, path);

}


#ifdef TEST
struct foo {
    char *cwd;
    char *path;
    char *result;
} testset[] = {
    {"/tmp", "p1", "/tmp/p1"}, 
    {"/tmp/", "p1", "/tmp/p1"}, 
    {"/tmp", "/p1", "/p1"}, 
    {"/tmp", "./p1", "/tmp/p1"}, 
    {"/tmp", "../p1", "/p1"}, 
    {"/tmp", "p1/p2", "/tmp/p1/p2"}, 
    {"/tmp/", "p1/p2", "/tmp/p1/p2"}, 
    {"/tmp", "/p1/p2", "/p1/p2"}, 
    {"/tmp", "./p1/p2", "/tmp/p1/p2"}, 
    {"/tmp", "../p1/p2", "/p1/p2"}, 
    {"/tmp", "../../p1/p2", "/p1/p2"}, 
    {"/", "p1/../../p2", "/p2"}, 
    {"/tmp/tmp2", "p1/../..", "/tmp"},
};

int numtests = sizeof(testset) / sizeof(struct foo);

main()
{
    int i;
    char *p;

    for (i = 0; i < numtests; i++) {
	printf("%s %s->", testset[i].cwd, testset[i].path);
	p = _mkabsolutepath(testset[i].cwd, testset[i].path);
	printf("%s", p);
	if (strcmp(p, testset[i].result) != 0)
	    printf(" -- Failure!!!!");
	printf("\n");
	free(p);
    }

    return 0;
}
#endif
