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
#include "tetj.h"

/*
 * Some architectures treat function pointers as structures which contains the
 * address of the function, plus some adjustment value which must be taken into
 * consideration. This is visible in the structures we are using (ie vtables),
 * so we use this function to make the adjustment when neccessary.
 */

void *
fptr2ptr(fptr fptr)
{
#if defined(__ia64__)
return fptr.func;
#else
return (void *)fptr;
#endif
}

/*
 * check_class_info() examines the data objects associated with a class. Each
 * class has several data objects associated with it, so each type of object
 * needs to be checked. A set of data structures representing each of these
 * data types is produced from the information stored in the database. This
 * function walks through the table of classs produced from the DB, and checks
 * the shared object to ensure the data objects match with the description
 * from the DB. Note that the data structures that represent the in memory
 * format and the data in the DB are not identicle, but generally contain
 * the same information, just expressed differently.
 * 
 * Note that stuff which is output to stderr is mostly used by the maintainer
 * to facilitate DB updates when mismatches are detected.
 */

int
check_class_info(char *libname, struct classinfo *classes[], 
								 struct tetj_handle *journal)
{
	int	i,j;
	Dl_info	dlinfo;
	void	*dlhndl;
	void	*symp;
	void	**basetypes;
	struct classtypeinfo_mem *rttip;
	union classvtable_mem	*vtablep;
	struct classinfo	*classp;
	unsigned long vtvcalloffset, vtbaseoffset;
	const char *vttypeinfo;
	fptr *vtvirtfuncs;

	if (classes == NULL) 
		return 0;

	dlhndl = dlopen(libname, RTLD_LAZY);
	if (dlhndl==NULL)
	{
		fprintf(stderr, "Failed to dlopen %s\n", libname);
		return 1;
	}

	/* Examine each class here */
	for (i=0; classes[i]!=NULL; i++) 
	{
		classp = classes[i];
		printf("Checking class %s\n", classp->name);

		/*
		 * 1) First, check the Vtable info
		 */
		if (*classp->vtablename)
		{
		vtablep=dlsym(dlhndl,classp->vtablename);
		if (vtablep)
		{

		switch( classp->vtcategory ) {
			case 1:
				vtvcalloffset = 0;
				vtbaseoffset  = vtablep->cat1.baseoffset;
				vttypeinfo    = vtablep->cat1.typeinfo;
				vtvirtfuncs   = vtablep->cat1.virtfuncs;
				break;
			case 2:
				vtvcalloffset = vtablep->cat2.vcalloffset;
				vtbaseoffset  = vtablep->cat2.baseoffset;
				vttypeinfo    = vtablep->cat2.typeinfo;
				vtvirtfuncs   = vtablep->cat2.virtfuncs;
				break;
			default:
				fprintf(stderr,"Unhandled VT category %d\n",
						classp->vtcategory );
				break;
		}

		/*
		 * 1.1) Check the baseoffset
		 */
		if (vtbaseoffset != classp->vtable->baseoffset) 
		{
			printf("Vtable baseoffset %ld (expected) doesn't match %ld (found)\n",
						 classp->vtable->baseoffset, vtbaseoffset);
			fprintf(stderr,"BASEO:%s:0:%ld\n", classp->name,vtbaseoffset);
		}

		/*
		 * 1.2) Check the vcalloffset
		 */
		if (vtvcalloffset != classp->vtable->vcalloffset) 
		{
			printf("Vtable vcalloffset %ld (expected) doesn't match %ld (found)\n",
						 classp->vtable->vcalloffset, vtvcalloffset);
			fprintf(stderr,"BASEVO:%s:0:%ld\n", classp->name,vtvcalloffset);
		}

		/*
		 * 1.3) Check the pointer to the RTTI, both by value and by name
		 */
		dladdr(vttypeinfo,&dlinfo);
		if (dlinfo.dli_saddr != vttypeinfo) 
		{
			printf("Uhoh1. Not an exact match %p %p\n",
					dlinfo.dli_saddr, vttypeinfo);
		}
	
		if (strcmp(classp->vtable->typeinfo,dlinfo.dli_sname)) 
		{
			printf("RTTI Name %s (expected) doesn't match %s (found)\n",
						 classp->vtable->typeinfo,dlinfo.dli_sname);
			fprintf(stderr,"RTTI:%s:0:%s\n", classp->name,dlinfo.dli_sname);
		}

		/*
		 * 1.4) Check the virtual function pointers
		 */
		for (j=0;j<classp->numvirtfuncs;j++) 
		{
			/* Hmm... this doesn't seem to be used anywhere
			symp=dlsym(dlhndl, classp->vtable->virtfuncs[j]);
			*/
			dladdr(fptr2ptr(vtvirtfuncs[j]), &dlinfo);
			if (dlinfo.dli_saddr!=fptr2ptr(vtvirtfuncs[j])) 
			{
				printf("Uhoh2. Not an exact match %p %p\n",
							 dlinfo.dli_saddr, fptr2ptr(vtvirtfuncs[j]));
				printf("Uhoh2. Not an exact match %s %s\n",
							 dlinfo.dli_sname, classp->vtable->virtfuncs[j]);
			}

			if (((classp->vtable->virtfuncs[j] && dlinfo.dli_sname) &&
					 strcmp(classp->vtable->virtfuncs[j], dlinfo.dli_sname)) ||
					(dlinfo.dli_sname && !classp->vtable->virtfuncs[j])) 
			{
				printf("Virtual Function[%d] %s (expected) ",
							 j, classp->vtable->virtfuncs[j]);
				printf("doesn't match %s (found)\n", dlinfo.dli_sname);
				fprintf(stderr,"VFUNC:%s:%d:%s\n", classp->name,j, dlinfo.dli_sname);
			}
		}
		} /* (vtablep) */
		else {
			fprintf(stderr,"No vtable found in library for %s\n",classp->name);
		}
		} /* (*classp->vtablename) */
		else {
			printf("No vtable name for %s\n",classp->name);
		}

		/*
		 * 2) Second, check the RTTI info
		 */
		rttip = dlsym(dlhndl, classp->rttiname);

		if (rttip) 
		{
		/*
		 * 2.1) Check the Vtable of the base class
		 */
		symp = dlsym(dlhndl, classp->typeinfo->basevtable);
		if (symp+(2*sizeof(long)) != rttip->basevtable) 
		{
			dladdr(rttip->basevtable-8, &dlinfo);
			if (vtablep && dlinfo.dli_saddr != vttypeinfo) 
			{
				printf("Uhoh3. Not an exact match\n");
			}
			printf("Base vtype %p (expected) doesn't match %p %s (found)\n",
						 symp, rttip->basevtable, dlinfo.dli_sname);
			fprintf(stderr,"BASEV:%s:0:%s\n", classp->name, dlinfo.dli_sname);
		}

		/*
		 * 2.2) Check the Name string for the type
		 */
		/*
		 * We store the class name as _Zfoo, so we need to
		 * skip the _Z when comparing against the name is the object.
		 */
		if (strcmp(&(classp->name[2]),rttip->name)) 
		{
			printf("Class name %s (found) doesn't match %s (expected)\n",
						 rttip->name,	classp->name);
		}

		/*
		 * 2.3) Check the Rest of the RTTI fields
		 *
		 * There are 5 different possible base types, each one implies a
		 * different RTTI layout. Here we have to identify each one, and
		 * check the fields that are unique to each one.
		 */

		basetypes = NULL;
		/*
		 * abi::__fundamental_type_info
		 */
		if (strcmp(classp->typeinfo->basevtable,
							 "_ZTVN10__cxxabiv123__fundamental_type_infoE") == 0) 
		{
			/*
			 * No additional fields to check
			 */
			basetypes = rttip->basetypeinfo;
			if( classp->numbaseinfo )
				fprintf(stderr,"fundamental_type_info & baseinfos\n");
		}
		/*
		 * abi::__class_type_info
		 */
		if (strcmp(classp->typeinfo->basevtable,
							 "_ZTVN10__cxxabiv117__class_type_infoE") == 0) 
		{
			/*
			 * No additional fields to check
			 */
			basetypes = rttip->basetypeinfo;
			if( classp->numbaseinfo )
				fprintf(stderr,"class_type_info & baseinfos\n");
		}
		/*
		 * abi::__si_class_type_info
		 */
		if (strcmp(classp->typeinfo->basevtable,
							 "_ZTVN10__cxxabiv120__si_class_type_infoE") == 0) 
		{
			struct si_classtypeinfo_mem *si_rttip;

			si_rttip = (struct si_classtypeinfo_mem*)rttip;
			/*
			 * Check the basename.
			 */
			symp = dlsym(dlhndl,classp->basename);
			dladdr(si_rttip->basetype, &dlinfo);
			if (symp != si_rttip->basetype)
			{
				printf("Base type %p (expected) doesn't match %p %s (found)\n",
							 symp, si_rttip->basetype, dlinfo.dli_sname);
				fprintf(stderr,"BASEN:%s:0:%s\n", classp->name, dlinfo.dli_sname);
			}
			basetypes = si_rttip->basetypeinfo;
			if( classp->numbaseinfo )
				fprintf(stderr,"si_class_type_info & baseinfos\n");
		}
		/*
		 * abi::__vmi_class_type_info
		 */
		if (strcmp(classp->typeinfo->basevtable,
							 "_ZTVN10__cxxabiv121__vmi_class_type_infoE") == 0) 
		{
			struct vmi_classtypeinfo_mem *vmi_rttip;
			struct base_type_info_mem *btip;

			vmi_rttip = (struct vmi_classtypeinfo_mem*)rttip;
			/*
			 * Three additional fields to check
			 */
			if (vmi_rttip->flags != classp->flags) 
			{
				fprintf(stderr,"VMIF:%s:0:%d\n",
								classp->name, vmi_rttip->flags);
			}
			if (vmi_rttip->base_count != classp->numvmitypes) 
			{
				fprintf(stderr,"NVMI:%s:0:%d\n",
								classp->name,vmi_rttip->base_count);
			}
			for (j=0; j<classp->numvmitypes; j++)
			{
				btip = &(vmi_rttip->base_info[j]);
				dladdr(btip->base_type, &dlinfo);
				symp = dlsym(dlhndl, classp->btinfo[j].base_type);
				if (symp != btip->base_type) 
				{
					fprintf(stderr,"BTIB:%s:%d:%s\n",
									classp->name, j, dlinfo.dli_sname);
				}
				if (btip->offset_flags !=	classp->btinfo[j].offset_flags) 
				{
					fprintf(stderr,"BTIF:%s:%d:%ld\n",
									classp->name, j, btip->offset_flags);
				}
			}
			basetypes = (void **)((char *)vmi_rttip->base_info)+
			  (vmi_rttip->base_count*sizeof(struct base_type_info_mem));
		}
		/*
		 * abi::__pbase_type_info
		 */
		if (strcmp(classp->typeinfo->basevtable,
							 "_ZTVN10__cxxabiv119__pointer_type_infoE") == 0) {
			struct pbasetypeinfo_mem *p_rttip;

			p_rttip = (struct pbasetypeinfo_mem*)rttip;
			/*
			 * Two additional fields to check
			 */
			/*
			 * Check the basename.
			 */
			symp = dlsym(dlhndl,classp->basename);
			dladdr(p_rttip->pointee, &dlinfo);
			if (symp != p_rttip->pointee) {
				printf("Base type %p (expected) doesn't match %p %s (found)\n",
							 symp, p_rttip->pointee, dlinfo.dli_sname);
				fprintf(stderr,"BASEN:%s:0:%s\n", classp->name, dlinfo.dli_sname);
			}
			if (p_rttip->offset_flags != classp->flags) {
				fprintf(stderr,"VMIF:%s:0:%d\n",
								classp->name,p_rttip->offset_flags);
			}
			basetypes = ((struct pbasetypeinfo_mem*)rttip)->basetypeinfo;
			if( classp->numbaseinfo )
				fprintf(stderr,"pbase_type_info & baseinfos\n");
		}

		/*
		 * Check the base types info
		 */
		if (classp->numbaseinfo && !basetypes) {
			printf("Aigghhh no basetypes!!\n");
			continue;
		}

		for (j=0; j<classp->numbaseinfo; j++) 
		{
			symp = dlsym(dlhndl, classp->typeinfo->basetypeinfo[j]);
			dladdr(basetypes[j]-8, &dlinfo);
			if (dlinfo.dli_saddr+8 != basetypes[j])
			{
				printf("Uhoh4. Not an exact match %p %p\n", 
							 dlinfo.dli_saddr, basetypes[j]);
			}
			if (symp != basetypes[j])
			{
				printf("Basetype[%d] %p (expected) doesn't match %p (found)\n", j, 
							 symp, basetypes[j]);
				fprintf(stderr,"BASET:%s:%d:%s\n", classp->name,j,dlinfo.dli_sname);
			}
		}

		} else { /* (rttip) */
			char	str[256];
			sprintf(str, "_ZTI%s", &(classp->name[2]));
			fprintf(stderr, "RTTI:%s:0:%s\n", classp->name,str);
			printf("No RTTI name for %s\n", str);
		}
	}

	dlclose(dlhndl);
	return 0;
}
