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
void	**basetypes;
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
fprintf(stderr,"BASEO:%s:0:%d\n", classp->name,vtablep->baseoffset);
		}

	if( vtablep->baseoffset != 0 ) {
		printf("Non-zero baseoffset. Skipping checks 'cause this isn't fully understood yet,\n" );
		continue;
		}

	/*
	 * Check the pointer to the RTTI
	 */
	dladdr(vtablep->typeinfo,&dlinfo);
	if( dlinfo.dli_saddr!=vtablep->typeinfo ) {
		printf("Uhoh1. Not an exact match\n");
		}
	/*
	printf("\tRTTI ptr: %p\n", vtablep->typeinfo);
	printf("\tRTTI name: %s\n", dlinfo.dli_sname);
	*/
	if( strcmp(classp->vtable->typeinfo,dlinfo.dli_sname) ) {
		printf("RTTI Name %s (expected) doesn't match %s (found)\n", classp->vtable->typeinfo,dlinfo.dli_sname );
fprintf(stderr,"RTTI:%s:0:%s\n", classp->name,dlinfo.dli_sname);
			}

	/*
	 * Check the virtual function pointers
	 */
	for(j=0;j<classp->numvirtfuncs;j++) {
		symp=dlsym(dlhndl,classp->vtable->virtfuncs[j]);
		dladdr(vtablep->virtfuncs[j],&dlinfo);
		if( dlinfo.dli_saddr!=vtablep->virtfuncs[j] ) {
			printf("Uhoh2. Not an exact match %p %p\n", dlinfo.dli_saddr, vtablep->virtfuncs[j]);
			}
		/*
		printf("\tVfunc: %s\n", classp->vtable->virtfuncs[j]);
		printf("\tVfunc addr: %p\n", symp );
		printf("\tVfunc addr: %p\n", vtablep->virtfuncs[j] );
		printf("\tVfunc name: %s\n", dlinfo.dli_sname);
		*/
		if( ((classp->vtable->virtfuncs[j] && dlinfo.dli_sname) &&
		   strcmp(classp->vtable->virtfuncs[j],dlinfo.dli_sname)) ||
		   (dlinfo.dli_sname && !classp->vtable->virtfuncs[j]) ) {
			printf("Virtual Function[%d] %s (expected) doesn't match %s (found)\n", j, classp->vtable->virtfuncs[j],dlinfo.dli_sname );
fprintf(stderr,"VFUNC:%s:%d:%s\n", classp->name,j,dlinfo.dli_sname);
			}
		}
} else {
	char	str[256];
	
	sprintf(str,"_ZTV%s",&(classp->name[2]));
fprintf(stderr,"vtabl:%s:0:%s\n", classp->name,str);
	printf("Vtable name %s not found\n",classp->vtablename);
}

	/*
	 * Second, check the RTTI info
	 */
	rttip=dlsym(dlhndl,classp->rttiname);

if( rttip ) {
	/*
	 * Check the Vtable of the base class
	 */
	symp=dlsym(dlhndl,classp->typeinfo->basevtable);
	if( symp+8 != rttip->basevtable ) {
		dladdr(rttip->basevtable-8,&dlinfo);
		if( dlinfo.dli_saddr!=vtablep->typeinfo ) {
			printf("Uhoh3. Not an exact match\n");
			}
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

/*
 * The actual layout of the RTTI seems to vary based on it's type, so this
 * will have to get a LOT smarter to handle it.
 */
	/*
	 * There are 5 different possibel base types, each one implies a
	 * different RTTI layout. Here we have to identify each one, and
	 * check the fileds that are unique to each one.
	 */

	basetypes=NULL;
	/*
	 * abi::__fundamental_type_info
	 */
	if( strcmp(classp->typeinfo->basevtable,
			"_ZTVN10__cxxabiv123__fundamental_type_infoE") == 0 ) {
		/*
		 * No additional fields to check
		 */
		basetypes=rttip->basetypeinfo;
	}
	/*
	 * abi::__class_type_info
	 */
	if( strcmp(classp->typeinfo->basevtable,
			"_ZTVN10__cxxabiv117__class_type_infoE") == 0 ) {
		/*
		 * No additional fields to check
		 */
		basetypes=rttip->basetypeinfo;
	}
	/*
	 * abi::__si_class_type_info
	 */
	if( strcmp(classp->typeinfo->basevtable,
			"_ZTVN10__cxxabiv120__si_class_type_infoE") == 0 ) {
		/*
		 * One additional field to check
		 */
		basetypes=((struct si_classtypeinfo_mem*)rttip)->basetypeinfo;
	}
	/*
	 * abi::__vmi_class_type_info
	 */
	if( strcmp(classp->typeinfo->basevtable,
			"_ZTVN10__cxxabiv121__vmi_class_type_infoE") == 0 ) {
		/*
		 * Three additional fields to check
		 */
		struct vmi_classtypeinfo_mem *vmictip;

		vmictip=((struct vmi_classtypeinfo_mem*)rttip);
		basetypes=(void **)((char *)vmictip->base_info)+
			  (vmictip->base_count*sizeof(struct base_type_info));
	}
	/*
	 * abi::__pbase_type_info
	 */
	if( strcmp(classp->typeinfo->basevtable,
			"_ZTVN10__cxxabiv119__pointer_type_infoE") == 0 ) {
		/*
		 * Two additional fields to check
		 */
		basetypes=((struct pbasetypeinfo_mem*)rttip)->basetypeinfo;
	}

	/*
	 * Check the base types info
	 */
	if( !basetypes ) {
		printf("Aigghhh no basetypes!!\n");
		continue;
	}

	for(j=0;j<classp->numbaseinfo;j++) {
		symp=dlsym(dlhndl,classp->typeinfo->basetypeinfo[j]);
		dladdr(basetypes[j]-8,&dlinfo);
		if( dlinfo.dli_saddr+8!=basetypes[j] ) {
			printf("Uhoh4. Not an exact match %p %p\n", dlinfo.dli_saddr, basetypes[j]);
			}
		if( symp != basetypes[j] ) {
			printf("Basetype[%d] %p (expected) doesn't match %p (found)\n", j, symp, basetypes[j]);
fprintf(stderr,"BASET:%s:%d:%s\n", classp->name,j,dlinfo.dli_sname);
			}
		}
/*
	printf("%s found at %p\n",classp->rttiname,rttip);
	printf("\tbasevtable: %p\n", rttip->basevtable);
	dladdr(rttip->basevtable,&dlinfo);
	printf("\tbasevtable name: %s\n", dlinfo.dli_sname);
	printf("\tname: %s\n", rttip->name);
*/
	} else {
	printf("RTTI name %s not found\n",classp->rttiname);
}
	}

dlclose(dlhndl);
return 0;
}
