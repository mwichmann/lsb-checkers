#define _GNU_SOURCE
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dlfcn.h>
#include "elfchk.h"
#include "hdr.h"
#include "../tetj/tetj.h"

int
check_class_info(char *libname,struct classinfo *classes[], struct tetj_handle *journal)
{
int	i;
Dl_info	dlinfo;
void	*dlhndl;
void	*symp;
struct classtypeinfo	*rttip;
struct classvtable	*vtablep;

if( classes == NULL ) {
	return 0;
	}

dlhndl=dlopen(libname,RTLD_LAZY);

/* Examine each class here */


for(i=0;classes[i]!=NULL;i++) {
	printf("Checking class %s\n", classes[i]->name );
	vtablep=dlsym(dlhndl,classes[i]->vtablename);
	printf("%s found at %x\n",classes[i]->vtablename,vtablep);
	printf("\tbaseoffset: %x\n", vtablep->baseoffset);
	printf("\tRTTI ptr: %x\n", vtablep->typeinfo);
	dladdr(vtablep->typeinfo,&dlinfo);
	printf("\tRTTI name: %s\n", dlinfo.dli_sname);

	rttip=dlsym(dlhndl,classes[i]->rttiname);
	printf("%s found at %x\n",classes[i]->rttiname,rttip);
	printf("\tbasevtable: %x\n", rttip->basevtable);
	printf("\tbasevtable: %x\n", rttip->basevtable);
	dladdr(rttip->basevtable,&dlinfo);
	printf("\tbasevtable name: %s\n", dlinfo.dli_sname);
	printf("\tname: %s\n", rttip->name);
	}

dlclose(dlhndl);
return 0;
}
