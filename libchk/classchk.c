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

	/*
	 * First, check the Vtable info
	 */
	vtablep=dlsym(dlhndl,classp->vtablename);

if( vtablep ) {
	/*
	 * Check the baseoffset
	 */
	if( vtablep->baseoffset != classp->vtable->baseoffset ) {
		printf("Vtable baseoffset %d (expected) doesn't match %d (found)\n", classp->vtable->baseoffset,vtablep->baseoffset );
		}

	if( vtablep->baseoffset != 0 ) {
		printf("Non-zero baseoffset. Skipping checks 'cause this isn't fully understood yet,\n" );
		continue;
		}

	/*
	 * Check the pointer to the RTTI
	 */
	dladdr(vtablep->typeinfo,&dlinfo);
	/*
	printf("\tRTTI ptr: %p\n", vtablep->typeinfo);
	printf("\tRTTI name: %s\n", dlinfo.dli_sname);
	*/
	if( strcmp(classp->vtable->typeinfo,dlinfo.dli_sname) ) {
		printf("RTTI Name %s (expected) doesn't match %s (found)\n", classp->vtable->typeinfo,dlinfo.dli_sname );
			}

	/*
	 * Check the virtual function pointers
	 */
	for(j=0;j<classp->numvirtfuncs;j++) {
		symp=dlsym(dlhndl,classp->vtable->virtfuncs[j]);
		dladdr(vtablep->virtfuncs[j],&dlinfo);
		/*
		printf("\tVfunc: %s\n", classp->vtable->virtfuncs[j]);
		printf("\tVfunc addr: %p\n", symp );
		printf("\tVfunc addr: %p\n", vtablep->virtfuncs[j] );
		printf("\tVfunc name: %s\n", dlinfo.dli_sname);
		*/
		if( (classp->vtable->virtfuncs[j] && dlinfo.dli_sname) &&
		   strcmp(classp->vtable->virtfuncs[j],dlinfo.dli_sname) ) {
			printf("Virtual Function[%d] %s (expected) doesn't match %s (found)\n", j, classp->vtable->virtfuncs[j],dlinfo.dli_sname );
fprintf(stderr,"VFUNC:%s:%d:%s\n", classp->name,j,dlinfo.dli_sname);
			}
		}
}

	/*
	 * Second, check the RTTI info
	 */
	rttip=dlsym(dlhndl,classp->rttiname);

	/*
	 * Check the Vtable of the base class
	 */
	symp=dlsym(dlhndl,classp->typeinfo->basevtable);
	if( symp+8 != rttip->basevtable ) {
		dladdr(rttip->basevtable,&dlinfo);
		printf("Base vtype %p (expected) doesn't match %p %s (found)\n",
			symp, rttip->basevtable, dlinfo.dli_sname );
fprintf(stderr,"BASEV:%s:0:%s\n", classp->name,dlinfo.dli_sname);
		}

	/*
	 * Check the Name string for the type
	 */
		/*
		 * We store the class name ass _Zfoo, so we need to
		 * skip the _Z when comparing against the name is the object.
		 */
	if( strcmp(&(classp->name[2]),rttip->name) ) {
		printf("Class name %s (found) doesn't match %s (expected)\n",
			    rttip->name,		classp->name );
		}

#if 0
/*
 * The actual layout of the RTTI seems to vary based on it's type, so this
 * will have to get a LOT smarter to handle it.
 */
	/*
	 * Check the base types info
	 */
	for(j=0;j<classp->numbaseinfo;j++) {
		symp=dlsym(dlhndl,classp->typeinfo->basetypeinfo[j]);
		dladdr(rttip->basetypeinfo[j],&dlinfo);
		if( symp != rttip->basetypeinfo[j] ) {
			printf("Basetype %p (expected) doesn't match %p (found)\n", symp, rttip->basetypeinfo[j]);
fprintf(stderr,"BASET:%s:%d:%s\n", classp->name,j,dlinfo.dli_sname);
			}
		}
#endif
/*
	printf("%s found at %p\n",classp->rttiname,rttip);
	printf("\tbasevtable: %p\n", rttip->basevtable);
	dladdr(rttip->basevtable,&dlinfo);
	printf("\tbasevtable name: %s\n", dlinfo.dli_sname);
	printf("\tname: %s\n", rttip->name);
*/
	}

dlclose(dlhndl);
return 0;
}
