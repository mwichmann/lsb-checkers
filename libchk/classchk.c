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
int	i,j;
Dl_info	dlinfo;
void	*dlhndl;
void	*symp;
struct classtypeinfo_mem *rttip;
struct classvtable_mem	*vtablep;
struct classinfo	*classp;

if( classes == NULL ) {
	return 0;
	}

dlhndl=dlopen(libname,RTLD_LAZY);

/* Examine each class here */


for(i=0;classes[i]!=NULL;i++) {
	classp=classes[i];
	printf("Checking class %s\n", classp->name );

	vtablep=dlsym(dlhndl,classp->vtablename);
	/*
	printf("%s found at %x\n",classp->vtablename,vtablep);
	printf("\tbaseoffset: %x\n", vtablep->baseoffset);
	*/
	if( vtablep->baseoffset != classp->vtable->baseoffset ) {
			printf("Vtable baseoffset %d (expected) doesn't match %d (found)\n", classp->vtable->baseoffset,vtablep->baseoffset );
		}
	dladdr(vtablep->typeinfo,&dlinfo);
	/*
	printf("\tRTTI ptr: %x\n", vtablep->typeinfo);
	printf("\tRTTI name: %s\n", dlinfo.dli_sname);
	*/
	if( strcmp(classp->vtable->typeinfo,dlinfo.dli_sname) ) {
		printf("RTTI Name %s (expected) doesn't match %s (found)\n", classp->vtable->typeinfo,dlinfo.dli_sname );
			}
	for(j=0;j<classp->numvirtfuncs;j++) {
		symp=dlsym(dlhndl,classp->vtable->virtfuncs[j]);
		dladdr(vtablep->virtfuncs[j],&dlinfo);
		/*
		printf("\tVfunc: %s\n", classp->vtable->virtfuncs[j]);
		printf("\tVfunc addr: %x\n", symp );
		printf("\tVfunc addr: %x\n", vtablep->virtfuncs[j] );
		printf("\tVfunc name: %s\n", dlinfo.dli_sname);
		*/
		if( (classp->vtable->virtfuncs[j] && dlinfo.dli_sname) &&
		   strcmp(classp->vtable->virtfuncs[j],dlinfo.dli_sname) ) {
			printf("Virtual Function %s (expected) doesn't match %s (found)\n", classp->vtable->virtfuncs[j],dlinfo.dli_sname );
			}
		}

	rttip=dlsym(dlhndl,classp->rttiname);
	printf("%s found at %p\n",classp->rttiname,rttip);
	printf("\tbasevtable: %p\n", rttip->basevtable);
	printf("\tbasevtable: %p\n", rttip->basevtable);
	dladdr(rttip->basevtable,&dlinfo);
	printf("\tbasevtable name: %s\n", dlinfo.dli_sname);
	printf("\tname: %s\n", rttip->name);
	}

dlclose(dlhndl);
return 0;
}
