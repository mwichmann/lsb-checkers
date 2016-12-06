/* Legal e_machine values.
 * Used to convert values found to user-readable descriptions.
 *
 * Define the values here instead of including elf.h not to depend
 * on the system where elfchk is built, since elf.h evolves and 
 * can be different in different systems.
 *
 * Note: somewhere along the line, <elf.h> is getting included
 * anyway.  There doesn't seem a lot of reason to keep this file,
 * but for know we've hacked it down to a multiple-define proof
 * subset to get rid of problems that cropped up in 2016 (bug 4183)
 */

#undef EM_NONE
#define EM_NONE		 0	/* No machine */

#undef EM_386
#define EM_386		 3	/* Intel 80386 */

#undef EM_PPC
#define EM_PPC		20	/* PowerPC */

#undef EM_PPC64
#define EM_PPC64	21	/* PowerPC 64-bit */

#undef EM_S390
#define EM_S390		22	/* IBM S390 */

#undef EM_ARM
#define EM_ARM		40	/* ARM */

#undef EM_IA_64
#define EM_IA_64	50	/* Intel Merced */

#undef EM_X86_64
#define EM_X86_64	62	/* AMD x86-64 architecture */

#undef EM_AARCH64
#define EM_AARCH64	183	/* ARM AARCH64 */
