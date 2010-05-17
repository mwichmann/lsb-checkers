/* Legal e_machine values.
 * Used to convert values found to user-readable descriptions.
 *
 * Define the values here instead of including elf.h not to depend
 * on the system where elfchk is built, since elf.h evolves and 
 * can be different in different systems.
 */
#define EM_NONE          0              /* No machine */
#define EM_M32           1              /* AT&T WE 32100 */
#define EM_SPARC         2              /* SUN SPARC */
#define EM_386           3              /* Intel 80386 */
#define EM_68K           4              /* Motorola m68k family */
#define EM_88K           5              /* Motorola m88k family */
#define EM_860           7              /* Intel 80860 */
#define EM_MIPS          8              /* MIPS R3000 big-endian */
#define EM_S370          9              /* IBM System/370 */
#define EM_MIPS_RS3_LE  10              /* MIPS R3000 little-endian */
#define EM_PARISC       15              /* HPPA */
#define EM_VPP500       17              /* Fujitsu VPP500 */
#define EM_SPARC32PLUS  18              /* Sun's "v8plus" */
#define EM_960          19              /* Intel 80960 */
#define EM_PPC          20              /* PowerPC */
#define EM_PPC64        21              /* PowerPC 64-bit */
#define EM_S390         22              /* IBM S390 */
#define EM_V800         36              /* NEC V800 series */
#define EM_FR20         37              /* Fujitsu FR20 */
#define EM_RH32         38              /* TRW RH-32 */
#define EM_RCE          39              /* Motorola RCE */
#define EM_ARM          40              /* ARM */
#define EM_FAKE_ALPHA   41              /* Digital Alpha */
#define EM_SH           42              /* Hitachi SH */
#define EM_SPARCV9      43              /* SPARC v9 64-bit */
#define EM_TRICORE      44              /* Siemens Tricore */
#define EM_ARC          45              /* Argonaut RISC Core */
#define EM_H8_300       46              /* Hitachi H8/300 */
#define EM_H8_300H      47              /* Hitachi H8/300H */
#define EM_H8S          48              /* Hitachi H8S */
#define EM_H8_500       49              /* Hitachi H8/500 */
#define EM_IA_64        50              /* Intel Merced */
#define EM_MIPS_X       51              /* Stanford MIPS-X */
#define EM_COLDFIRE     52              /* Motorola Coldfire */
#define EM_68HC12       53              /* Motorola M68HC12 */
#define EM_MMA          54              /* Fujitsu MMA Multimedia Accelerator*/
#define EM_PCP          55              /* Siemens PCP */
#define EM_NCPU         56              /* Sony nCPU embeeded RISC */
#define EM_NDR1         57              /* Denso NDR1 microprocessor */
#define EM_STARCORE     58              /* Motorola Start*Core processor */
#define EM_ME16         59              /* Toyota ME16 processor */
#define EM_ST100        60              /* STMicroelectronic ST100 processor */
#define EM_TINYJ        61              /* Advanced Logic Corp. Tinyj emb.fam*/
#define EM_X86_64       62              /* AMD x86-64 architecture */
#define EM_PDSP         63              /* Sony DSP Processor */
#define EM_FX66         66              /* Siemens FX66 microcontroller */
#define EM_ST9PLUS      67              /* STMicroelectronics ST9+ 8/16 mc */
#define EM_ST7          68              /* STmicroelectronics ST7 8 bit mc */
#define EM_68HC16       69              /* Motorola MC68HC16 microcontroller */
#define EM_68HC11       70              /* Motorola MC68HC11 microcontroller */
#define EM_68HC08       71              /* Motorola MC68HC08 microcontroller */
#define EM_68HC05       72              /* Motorola MC68HC05 microcontroller */
#define EM_SVX          73              /* Silicon Graphics SVx */
#define EM_ST19         74              /* STMicroelectronics ST19 8 bit mc */
#define EM_VAX          75              /* Digital VAX */
#define EM_CRIS         76              /* Axis Communications 32-bit embedded processor */
#define EM_JAVELIN      77              /* Infineon Technologies 32-bit embedded processor */
#define EM_FIREPATH     78              /* Element 14 64-bit DSP Processor */
#define EM_ZSP          79              /* LSI Logic 16-bit DSP Processor */
#define EM_MMIX         80              /* Donald Knuth's educational 64-bit processor */
#define EM_HUANY        81              /* Harvard University machine-independent object files */
#define EM_PRISM        82              /* SiTera Prism */
#define EM_AVR          83              /* Atmel AVR 8-bit microcontroller */
#define EM_FR30         84              /* Fujitsu FR30 */
#define EM_D10V         85              /* Mitsubishi D10V */
#define EM_D30V         86              /* Mitsubishi D30V */
#define EM_V850         87              /* NEC v850 */
#define EM_M32R         88              /* Mitsubishi M32R */
#define EM_MN10300      89              /* Matsushita MN10300 */
#define EM_MN10200      90              /* Matsushita MN10200 */
#define EM_PJ           91              /* picoJava */
#define EM_OPENRISC     92              /* OpenRISC 32-bit embedded processor */
#define EM_ARC_A5       93              /* ARC Cores Tangent-A5 */
#define EM_XTENSA       94              /* Tensilica Xtensa Architecture */
#define EM_ALPHA        0x9026          /* Alpha */
