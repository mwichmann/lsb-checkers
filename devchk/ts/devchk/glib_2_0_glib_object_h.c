/*
 * Test of glib-2.0/glib-object.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE

union _GTypeCValue {
};

struct _GParamSpecPool {
};

struct _GTypePlugin {
};

#include "glib-2.0/glib-object.h"



#ifdef TET_TEST
void glib_2_0_glib_object_h()
{
#else
int glib_2_0_glib_object_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/glib-object.h\n");
#endif

printf("Checking data structures in glib-2.0/glib-object.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FUNDAMENTAL(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FUNDAMENTAL_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INVALID */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_NONE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INTERFACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_UCHAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_BOOLEAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_UINT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_LONG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_ULONG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_UINT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_ENUM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FLOAT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_DOUBLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_POINTER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_BOXED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_OBJECT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FUNDAMENTAL_SHIFT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_MAKE_FUNDAMENTAL(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_RESERVED_GLIB_FIRST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_RESERVED_GLIB_LAST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_RESERVED_BSE_FIRST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_RESERVED_BSE_LAST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_RESERVED_USER_FIRST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_FUNDAMENTAL(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_DERIVED(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_INTERFACE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_CLASSED(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_INSTANTIATABLE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_DERIVABLE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_DEEP_DERIVABLE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_ABSTRACT(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_VALUE_ABSTRACT(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_VALUE_TYPE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_HAS_VALUE_TABLE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_INSTANCE(instance) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_INSTANCE_CAST(instance,g_type,c_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_INSTANCE_TYPE(instance,g_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INSTANCE_GET_CLASS(instance,g_type,c_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INSTANCE_GET_INTERFACE(instance,g_type,c_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_CLASS_CAST(g_class,g_type,c_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_CLASS_TYPE(g_class,g_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_VALUE(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CHECK_VALUE_TYPE(value,g_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FROM_INSTANCE(instance) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FROM_CLASS(g_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FROM_INTERFACE(g_iface) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_INSTANCE_GET_PRIVATE(instance,g_type,c_type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DEFINE_TYPE(TN,t_n,T_P) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DEFINE_TYPE_WITH_CODE(TN,t_n,T_P,_C_) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DEFINE_ABSTRACT_TYPE(TN,t_n,T_P) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN,t_n,T_P,_C_) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IMPLEMENT_INTERFACE(TYPE_IFACE,iface_init) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_DEFINE_TYPE_EXTENDED(TypeName,type_name,TYPE_PARENT,flags,CODE) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CIC(ip,gt,ct) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CCC(cp,gt,ct) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CHI(ip) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CHV(vl) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_IGC(ip,gt,ct) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_IGI(ip,gt,ct) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CIT(ip,gt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CCT(cp,gt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _G_TYPE_CVH(vl,gt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_FLAG_RESERVED_ID_BIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_BOXED(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_BOXED(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_CLOSURE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_VALUE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_VALUE_ARRAY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_STRV */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_GSTRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_ENUM(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ENUM_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_ENUM_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ENUM_CLASS_TYPE(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_ENUM_CLASS_TYPE_NAME(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_FLAGS(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_FLAGS_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_FLAGS_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_FLAGS_CLASS_TYPE(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_FLAGS_CLASS_TYPE_NAME(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_ENUM(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_FLAGS(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_VALUE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_VALUE(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_TYPE(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_TYPE_NAME(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS(value,type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_NOCOPY_CONTENTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_PARAM(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_CLASS(pclass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_CLASS(pclass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_GET_CLASS(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_TYPE(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_TYPE_NAME(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_VALUE_TYPE(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_PARAM(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_READWRITE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_USER_SHIFT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CLOSURE_NEEDS_MARSHAL(closure) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CLOSURE_N_NOTIFIERS(cl) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CCLOSURE_SWAP_DATA(cclosure) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_CALLBACK(f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_cclosure_marshal_BOOL__FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_SIGNAL_FLAGS_MASK
	CompareConstant(G_SIGNAL_FLAGS_MASK,0x7f,6258,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_SIGNAL_FLAGS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_SIGNAL_MATCH_MASK
	CompareConstant(G_SIGNAL_MATCH_MASK,0x3f,6259,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: G_SIGNAL_MATCH_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_SIGNAL_TYPE_STATIC_SCOPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_signal_connect(instance,detailed_signal,c_handler,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_signal_connect_after(instance,detailed_signal,c_handler,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_signal_connect_swapped(instance,detailed_signal,c_handler,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_signal_handlers_disconnect_by_func(instance,func,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_signal_handlers_block_by_func(instance,func,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for g_signal_handlers_unblock_by_func(instance,func,data) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IS_OBJECT(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_OBJECT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_OBJECT_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_GET_CLASS(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_TYPE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_TYPE_NAME(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_CLASS_TYPE(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_CLASS_NAME(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_OBJECT(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_WARN_INVALID_PSPEC(object,pname,property_id,pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_OBJECT_WARN_INVALID_PROPERTY_ID(object,property_id,pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_CHAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_CHAR(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_CHAR(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_UCHAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_UCHAR(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_UCHAR(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_BOOLEAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_BOOLEAN(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_BOOLEAN(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_INT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_INT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_INT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_UINT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_UINT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_UINT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_LONG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_LONG(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_LONG(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_ULONG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_ULONG(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_ULONG(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_INT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_INT64(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_INT64(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_UINT64 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_UINT64(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_UINT64(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_UNICHAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_UNICHAR(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_UNICHAR(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_ENUM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_ENUM(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_ENUM(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_FLAGS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_FLAGS(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_FLAGS(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_FLOAT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_FLOAT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_FLOAT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_DOUBLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_DOUBLE(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_DOUBLE(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_STRING(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_STRING(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_PARAM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_PARAM(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_PARAM(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_BOXED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_BOXED(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_BOXED(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_POINTER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_POINTER(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_POINTER(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_VALUE_ARRAY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_VALUE_ARRAY(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_VALUE_ARRAY(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_OBJECT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_OBJECT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_OBJECT(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PARAM_OVERRIDE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_PARAM_SPEC_OVERRIDE(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_PARAM_SPEC_OVERRIDE(pspec) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GOBJECT_VAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IO_CHANNEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_IO_CONDITION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_TYPE_MODULE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_MODULE(module) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_MODULE_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_TYPE_MODULE(module) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_TYPE_MODULE_CLASS(class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_MODULE_GET_CLASS(module) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_TYPE_PLUGIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PLUGIN(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PLUGIN_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_TYPE_PLUGIN(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_IS_TYPE_PLUGIN_CLASS(vtable) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_TYPE_PLUGIN_GET_CLASS(inst) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_CHAR(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_UCHAR(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_BOOLEAN(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_INT(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_UINT(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_LONG(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_ULONG(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_INT64(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_UINT64(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_FLOAT(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_DOUBLE(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_STRING(value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for G_VALUE_HOLDS_POINTER(value) */
#endif

#if defined __i386__
CheckTypeSize(GType,4, 11836, 2, 3.1, NULL, 11427, NULL)
#elif defined __x86_64__
CheckTypeSize(GType,8, 11836, 11, 3.1, NULL, 11427, NULL)
#elif defined __ia64__
CheckTypeSize(GType,8, 11836, 3, 3.1, NULL, 11427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GType,4, 11836, 6, 3.1, NULL, 11427, NULL)
#elif defined __powerpc64__
CheckTypeSize(GType,8, 11836, 9, 3.1, NULL, 11427, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GType,4, 11836, 10, 3.1, NULL, 11427, NULL)
#elif defined __s390x__
CheckTypeSize(GType,8, 11836, 12, 3.1, NULL, 11427, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11427,NULL);\n",architecture,11836,0);
Msg("Find size of GType (11836)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeClass,4, 11837, 2, 3.1, NULL, 11835, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeClass,8, 11837, 11, 3.1, NULL, 11835, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeClass,8, 11837, 3, 3.1, NULL, 11835, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeClass,4, 11837, 6, 3.1, NULL, 11835, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeClass,8, 11837, 9, 3.1, NULL, 11835, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeClass,4, 11837, 10, 3.1, NULL, 11835, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeClass,8, 11837, 12, 3.1, NULL, 11835, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11835,NULL);\n",architecture,11837,0);
Msg("Find size of GTypeClass (11837)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeInstance,4, 11839, 2, 3.1, NULL, 11834, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeInstance,8, 11839, 11, 3.1, NULL, 11834, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeInstance,8, 11839, 3, 3.1, NULL, 11834, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeInstance,4, 11839, 6, 3.1, NULL, 11834, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeInstance,8, 11839, 9, 3.1, NULL, 11834, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeInstance,4, 11839, 10, 3.1, NULL, 11834, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeInstance,8, 11839, 12, 3.1, NULL, 11834, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11834,NULL);\n",architecture,11839,0);
Msg("Find size of GTypeInstance (11839)\n");
#endif

#if defined __i386__
CheckTypeSize(GObject,12, 11840, 2, 3.1, NULL, 11833, NULL)
#elif defined __x86_64__
CheckTypeSize(GObject,24, 11840, 11, 3.1, NULL, 11833, NULL)
#elif defined __ia64__
CheckTypeSize(GObject,24, 11840, 3, 3.1, NULL, 11833, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GObject,12, 11840, 6, 3.1, NULL, 11833, NULL)
#elif defined __powerpc64__
CheckTypeSize(GObject,24, 11840, 9, 3.1, NULL, 11833, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GObject,12, 11840, 10, 3.1, NULL, 11833, NULL)
#elif defined __s390x__
CheckTypeSize(GObject,24, 11840, 12, 3.1, NULL, 11833, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11833,NULL);\n",architecture,11840,0);
Msg("Find size of GObject (11840)\n");
#endif

#if defined __i386__
CheckTypeSize(gfloat,4, 11843, 2, 3.1, NULL, 12, NULL)
#elif defined __x86_64__
CheckTypeSize(gfloat,4, 11843, 11, 3.1, NULL, 12, NULL)
#elif defined __ia64__
CheckTypeSize(gfloat,4, 11843, 3, 3.1, NULL, 12, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gfloat,4, 11843, 6, 3.1, NULL, 12, NULL)
#elif defined __powerpc64__
CheckTypeSize(gfloat,4, 11843, 9, 3.1, NULL, 12, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gfloat,4, 11843, 10, 3.1, NULL, 12, NULL)
#elif defined __s390x__
CheckTypeSize(gfloat,4, 11843, 12, 3.1, NULL, 12, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12,NULL);\n",architecture,11843,0);
Msg("Find size of gfloat (11843)\n");
#endif

#if defined __i386__
CheckTypeSize(GValue,20, 11846, 2, 3.1, NULL, 11842, NULL)
#elif defined __x86_64__
CheckTypeSize(GValue,24, 11846, 11, 3.1, NULL, 11842, NULL)
#elif defined __ia64__
CheckTypeSize(GValue,24, 11846, 3, 3.1, NULL, 11842, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GValue,24, 11846, 6, 3.1, NULL, 11842, NULL)
#elif defined __powerpc64__
CheckTypeSize(GValue,24, 11846, 9, 3.1, NULL, 11842, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GValue,24, 11846, 10, 3.1, NULL, 11842, NULL)
#elif defined __s390x__
CheckTypeSize(GValue,24, 11846, 12, 3.1, NULL, 11842, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11842,NULL);\n",architecture,11846,0);
Msg("Find size of GValue (11846)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamFlags,4, 11852, 2, 3.1, NULL, 11851, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamFlags,4, 11852, 11, 3.1, NULL, 11851, NULL)
#elif defined __ia64__
CheckTypeSize(GParamFlags,4, 11852, 3, 3.1, NULL, 11851, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamFlags,4, 11852, 6, 3.1, NULL, 11851, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamFlags,4, 11852, 9, 3.1, NULL, 11851, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamFlags,4, 11852, 10, 3.1, NULL, 11851, NULL)
#elif defined __s390x__
CheckTypeSize(GParamFlags,4, 11852, 12, 3.1, NULL, 11851, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11851,NULL);\n",architecture,11852,0);
Msg("Find size of GParamFlags (11852)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpec,40, 11853, 2, 3.1, NULL, 11850, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpec,72, 11853, 11, 3.1, NULL, 11850, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpec,72, 11853, 3, 3.1, NULL, 11850, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpec,40, 11853, 6, 3.1, NULL, 11850, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpec,72, 11853, 9, 3.1, NULL, 11850, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpec,40, 11853, 10, 3.1, NULL, 11850, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpec,72, 11853, 12, 3.1, NULL, 11850, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11850,NULL);\n",architecture,11853,0);
Msg("Find size of GParamSpec (11853)\n");
#endif

#if defined __i386__
CheckTypeSize(GObjectConstructParam,8, 11857, 2, 3.1, NULL, 11856, NULL)
#elif defined __x86_64__
CheckTypeSize(GObjectConstructParam,16, 11857, 11, 3.1, NULL, 11856, NULL)
#elif defined __ia64__
CheckTypeSize(GObjectConstructParam,16, 11857, 3, 3.1, NULL, 11856, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GObjectConstructParam,8, 11857, 6, 3.1, NULL, 11856, NULL)
#elif defined __powerpc64__
CheckTypeSize(GObjectConstructParam,16, 11857, 9, 3.1, NULL, 11856, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GObjectConstructParam,8, 11857, 10, 3.1, NULL, 11856, NULL)
#elif defined __s390x__
CheckTypeSize(GObjectConstructParam,16, 11857, 12, 3.1, NULL, 11856, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11856,NULL);\n",architecture,11857,0);
Msg("Find size of GObjectConstructParam (11857)\n");
#endif

#if defined __i386__
CheckTypeSize(GObjectClass,68, 11867, 2, 3.1, NULL, 11855, NULL)
#elif defined __x86_64__
CheckTypeSize(GObjectClass,136, 11867, 11, 3.1, NULL, 11855, NULL)
#elif defined __ia64__
CheckTypeSize(GObjectClass,136, 11867, 3, 3.1, NULL, 11855, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GObjectClass,68, 11867, 6, 3.1, NULL, 11855, NULL)
#elif defined __powerpc64__
CheckTypeSize(GObjectClass,136, 11867, 9, 3.1, NULL, 11855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GObjectClass,68, 11867, 10, 3.1, NULL, 11855, NULL)
#elif defined __s390x__
CheckTypeSize(GObjectClass,136, 11867, 12, 3.1, NULL, 11855, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11855,NULL);\n",architecture,11867,0);
Msg("Find size of GObjectClass (11867)\n");
#endif

#if defined __i386__
CheckTypeSize(GClosure,16, 11870, 2, 3.1, NULL, 11869, NULL)
#elif defined __x86_64__
CheckTypeSize(GClosure,32, 11870, 11, 3.1, NULL, 11869, NULL)
#elif defined __ia64__
CheckTypeSize(GClosure,32, 11870, 3, 3.1, NULL, 11869, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GClosure,16, 11870, 6, 3.1, NULL, 11869, NULL)
#elif defined __powerpc64__
CheckTypeSize(GClosure,32, 11870, 9, 3.1, NULL, 11869, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GClosure,16, 11870, 10, 3.1, NULL, 11869, NULL)
#elif defined __s390x__
CheckTypeSize(GClosure,32, 11870, 12, 3.1, NULL, 11869, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11869,NULL);\n",architecture,11870,0);
Msg("Find size of GClosure (11870)\n");
#endif

#if defined __i386__
CheckTypeSize(GClosureNotify,4, 11875, 2, 3.1, NULL, 11874, NULL)
#elif defined __x86_64__
CheckTypeSize(GClosureNotify,8, 11875, 11, 3.1, NULL, 11874, NULL)
#elif defined __ia64__
CheckTypeSize(GClosureNotify,8, 11875, 3, 3.1, NULL, 11874, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GClosureNotify,4, 11875, 6, 3.1, NULL, 11874, NULL)
#elif defined __powerpc64__
CheckTypeSize(GClosureNotify,8, 11875, 9, 3.1, NULL, 11874, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GClosureNotify,4, 11875, 10, 3.1, NULL, 11874, NULL)
#elif defined __s390x__
CheckTypeSize(GClosureNotify,8, 11875, 12, 3.1, NULL, 11874, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11874,NULL);\n",architecture,11875,0);
Msg("Find size of GClosureNotify (11875)\n");
#endif

#if defined __i386__
CheckTypeSize(GClosureNotifyData,8, 11876, 2, 3.1, NULL, 11873, NULL)
#elif defined __x86_64__
CheckTypeSize(GClosureNotifyData,16, 11876, 11, 3.1, NULL, 11873, NULL)
#elif defined __ia64__
CheckTypeSize(GClosureNotifyData,16, 11876, 3, 3.1, NULL, 11873, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GClosureNotifyData,8, 11876, 6, 3.1, NULL, 11873, NULL)
#elif defined __powerpc64__
CheckTypeSize(GClosureNotifyData,16, 11876, 9, 3.1, NULL, 11873, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GClosureNotifyData,8, 11876, 10, 3.1, NULL, 11873, NULL)
#elif defined __s390x__
CheckTypeSize(GClosureNotifyData,16, 11876, 12, 3.1, NULL, 11873, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11873,NULL);\n",architecture,11876,0);
Msg("Find size of GClosureNotifyData (11876)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeInterfaceCheckFunc,4, 11878, 2, 3.1, NULL, 11582, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 11, 3.1, NULL, 11582, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 3, 3.1, NULL, 11582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeInterfaceCheckFunc,4, 11878, 6, 3.1, NULL, 11582, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 9, 3.1, NULL, 11582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeInterfaceCheckFunc,4, 11878, 10, 3.1, NULL, 11582, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 12, 3.1, NULL, 11582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11582,NULL);\n",architecture,11878,0);
Msg("Find size of GTypeInterfaceCheckFunc (11878)\n");
#endif

#if defined __i386__
CheckTypeSize(GValueArray,12, 11880, 2, 3.1, NULL, 11879, NULL)
#elif defined __x86_64__
CheckTypeSize(GValueArray,24, 11880, 11, 3.1, NULL, 11879, NULL)
#elif defined __ia64__
CheckTypeSize(GValueArray,24, 11880, 3, 3.1, NULL, 11879, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GValueArray,12, 11880, 6, 3.1, NULL, 11879, NULL)
#elif defined __powerpc64__
CheckTypeSize(GValueArray,24, 11880, 9, 3.1, NULL, 11879, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GValueArray,12, 11880, 10, 3.1, NULL, 11879, NULL)
#elif defined __s390x__
CheckTypeSize(GValueArray,24, 11880, 12, 3.1, NULL, 11879, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11879,NULL);\n",architecture,11880,0);
Msg("Find size of GValueArray (11880)\n");
#endif

#if defined __i386__
CheckTypeSize(GEnumValue,12, 11883, 2, 3.1, NULL, 11882, NULL)
#elif defined __x86_64__
CheckTypeSize(GEnumValue,24, 11883, 11, 3.1, NULL, 11882, NULL)
#elif defined __ia64__
CheckTypeSize(GEnumValue,24, 11883, 3, 3.1, NULL, 11882, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GEnumValue,12, 11883, 6, 3.1, NULL, 11882, NULL)
#elif defined __powerpc64__
CheckTypeSize(GEnumValue,24, 11883, 9, 3.1, NULL, 11882, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GEnumValue,12, 11883, 10, 3.1, NULL, 11882, NULL)
#elif defined __s390x__
CheckTypeSize(GEnumValue,24, 11883, 12, 3.1, NULL, 11882, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11882,NULL);\n",architecture,11883,0);
Msg("Find size of GEnumValue (11883)\n");
#endif

#if defined __i386__
CheckTypeSize(GEnumClass,20, 11886, 2, 3.1, NULL, 11885, NULL)
#elif defined __x86_64__
CheckTypeSize(GEnumClass,32, 11886, 11, 3.1, NULL, 11885, NULL)
#elif defined __ia64__
CheckTypeSize(GEnumClass,32, 11886, 3, 3.1, NULL, 11885, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GEnumClass,20, 11886, 6, 3.1, NULL, 11885, NULL)
#elif defined __powerpc64__
CheckTypeSize(GEnumClass,32, 11886, 9, 3.1, NULL, 11885, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GEnumClass,20, 11886, 10, 3.1, NULL, 11885, NULL)
#elif defined __s390x__
CheckTypeSize(GEnumClass,32, 11886, 12, 3.1, NULL, 11885, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11885,NULL);\n",architecture,11886,0);
Msg("Find size of GEnumClass (11886)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeDebugFlags,4, 11892, 2, 3.1, NULL, 11891, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 11, 3.1, NULL, 11891, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 3, 3.1, NULL, 11891, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 6, 3.1, NULL, 11891, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 9, 3.1, NULL, 11891, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeDebugFlags,4, 11892, 10, 3.1, NULL, 11891, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeDebugFlags,4, 11892, 12, 3.1, NULL, 11891, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11891,NULL);\n",architecture,11892,0);
Msg("Find size of GTypeDebugFlags (11892)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalMatchType,4, 11905, 2, 3.1, NULL, 11904, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalMatchType,4, 11905, 11, 3.1, NULL, 11904, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalMatchType,4, 11905, 3, 3.1, NULL, 11904, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalMatchType,4, 11905, 6, 3.1, NULL, 11904, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalMatchType,4, 11905, 9, 3.1, NULL, 11904, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalMatchType,4, 11905, 10, 3.1, NULL, 11904, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalMatchType,4, 11905, 12, 3.1, NULL, 11904, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11904,NULL);\n",architecture,11905,0);
Msg("Find size of GSignalMatchType (11905)\n");
#endif

#if defined __i386__
CheckTypeSize(GFlagsValue,12, 11907, 2, 3.1, NULL, 11906, NULL)
#elif defined __x86_64__
CheckTypeSize(GFlagsValue,24, 11907, 11, 3.1, NULL, 11906, NULL)
#elif defined __ia64__
CheckTypeSize(GFlagsValue,24, 11907, 3, 3.1, NULL, 11906, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GFlagsValue,12, 11907, 6, 3.1, NULL, 11906, NULL)
#elif defined __powerpc64__
CheckTypeSize(GFlagsValue,24, 11907, 9, 3.1, NULL, 11906, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GFlagsValue,12, 11907, 10, 3.1, NULL, 11906, NULL)
#elif defined __s390x__
CheckTypeSize(GFlagsValue,24, 11907, 12, 3.1, NULL, 11906, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11906,NULL);\n",architecture,11907,0);
Msg("Find size of GFlagsValue (11907)\n");
#endif

#if defined __i386__
CheckTypeSize(GClosureMarshal,4, 11910, 2, 3.1, NULL, 11872, NULL)
#elif defined __x86_64__
CheckTypeSize(GClosureMarshal,8, 11910, 11, 3.1, NULL, 11872, NULL)
#elif defined __ia64__
CheckTypeSize(GClosureMarshal,8, 11910, 3, 3.1, NULL, 11872, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GClosureMarshal,4, 11910, 6, 3.1, NULL, 11872, NULL)
#elif defined __powerpc64__
CheckTypeSize(GClosureMarshal,8, 11910, 9, 3.1, NULL, 11872, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GClosureMarshal,4, 11910, 10, 3.1, NULL, 11872, NULL)
#elif defined __s390x__
CheckTypeSize(GClosureMarshal,8, 11910, 12, 3.1, NULL, 11872, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11872,NULL);\n",architecture,11910,0);
Msg("Find size of GClosureMarshal (11910)\n");
#endif

#if defined __i386__
CheckTypeSize(GCallback,4, 11911, 2, 3.1, NULL, 10318, NULL)
#elif defined __x86_64__
CheckTypeSize(GCallback,8, 11911, 11, 3.1, NULL, 10318, NULL)
#elif defined __ia64__
CheckTypeSize(GCallback,8, 11911, 3, 3.1, NULL, 10318, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCallback,4, 11911, 6, 3.1, NULL, 10318, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCallback,8, 11911, 9, 3.1, NULL, 10318, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCallback,4, 11911, 10, 3.1, NULL, 10318, NULL)
#elif defined __s390x__
CheckTypeSize(GCallback,8, 11911, 12, 3.1, NULL, 10318, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,10318,NULL);\n",architecture,11911,0);
Msg("Find size of GCallback (11911)\n");
#endif

#if defined __i386__
CheckTypeSize(GFlagsClass,16, 11914, 2, 3.1, NULL, 11913, NULL)
#elif defined __x86_64__
CheckTypeSize(GFlagsClass,24, 11914, 11, 3.1, NULL, 11913, NULL)
#elif defined __ia64__
CheckTypeSize(GFlagsClass,24, 11914, 3, 3.1, NULL, 11913, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GFlagsClass,16, 11914, 6, 3.1, NULL, 11913, NULL)
#elif defined __powerpc64__
CheckTypeSize(GFlagsClass,24, 11914, 9, 3.1, NULL, 11913, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GFlagsClass,16, 11914, 10, 3.1, NULL, 11913, NULL)
#elif defined __s390x__
CheckTypeSize(GFlagsClass,24, 11914, 12, 3.1, NULL, 11913, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11913,NULL);\n",architecture,11914,0);
Msg("Find size of GFlagsClass (11914)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeClassCacheFunc,4, 11917, 2, 3.1, NULL, 11916, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 11, 3.1, NULL, 11916, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 3, 3.1, NULL, 11916, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeClassCacheFunc,4, 11917, 6, 3.1, NULL, 11916, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 9, 3.1, NULL, 11916, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeClassCacheFunc,4, 11917, 10, 3.1, NULL, 11916, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 12, 3.1, NULL, 11916, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11916,NULL);\n",architecture,11917,0);
Msg("Find size of GTypeClassCacheFunc (11917)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalFlags,4, 11920, 2, 3.1, NULL, 11919, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalFlags,4, 11920, 11, 3.1, NULL, 11919, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalFlags,4, 11920, 3, 3.1, NULL, 11919, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalFlags,4, 11920, 6, 3.1, NULL, 11919, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalFlags,4, 11920, 9, 3.1, NULL, 11919, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalFlags,4, 11920, 10, 3.1, NULL, 11919, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalFlags,4, 11920, 12, 3.1, NULL, 11919, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11919,NULL);\n",architecture,11920,0);
Msg("Find size of GSignalFlags (11920)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalInvocationHint,12, 11921, 2, 3.1, NULL, 11918, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 11, 3.1, NULL, 11918, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 3, 3.1, NULL, 11918, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 6, 3.1, NULL, 11918, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 9, 3.1, NULL, 11918, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalInvocationHint,12, 11921, 10, 3.1, NULL, 11918, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalInvocationHint,12, 11921, 12, 3.1, NULL, 11918, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11918,NULL);\n",architecture,11921,0);
Msg("Find size of GSignalInvocationHint (11921)\n");
#endif

#if defined __i386__
CheckTypeSize(GWeakNotify,4, 11924, 2, 3.1, NULL, 11923, NULL)
#elif defined __x86_64__
CheckTypeSize(GWeakNotify,8, 11924, 11, 3.1, NULL, 11923, NULL)
#elif defined __ia64__
CheckTypeSize(GWeakNotify,8, 11924, 3, 3.1, NULL, 11923, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GWeakNotify,4, 11924, 6, 3.1, NULL, 11923, NULL)
#elif defined __powerpc64__
CheckTypeSize(GWeakNotify,8, 11924, 9, 3.1, NULL, 11923, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GWeakNotify,4, 11924, 10, 3.1, NULL, 11923, NULL)
#elif defined __s390x__
CheckTypeSize(GWeakNotify,8, 11924, 12, 3.1, NULL, 11923, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11923,NULL);\n",architecture,11924,0);
Msg("Find size of GWeakNotify (11924)\n");
#endif

#if defined __i386__
CheckTypeSize(GBaseInitFunc,4, 11926, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GBaseInitFunc,8, 11926, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GBaseInitFunc,8, 11926, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GBaseInitFunc,4, 11926, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GBaseInitFunc,8, 11926, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GBaseInitFunc,4, 11926, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GBaseInitFunc,8, 11926, 12, 3.1, NULL, 11438, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11926,0);
Msg("Find size of GBaseInitFunc (11926)\n");
#endif

#if defined __i386__
CheckTypeSize(GBaseFinalizeFunc,4, 11927, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GBaseFinalizeFunc,4, 11927, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GBaseFinalizeFunc,4, 11927, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 12, 3.1, NULL, 11438, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11927,0);
Msg("Find size of GBaseFinalizeFunc (11927)\n");
#endif

#if defined __i386__
CheckTypeSize(GClassInitFunc,4, 11928, 2, 3.1, NULL, 11582, NULL)
#elif defined __x86_64__
CheckTypeSize(GClassInitFunc,8, 11928, 11, 3.1, NULL, 11582, NULL)
#elif defined __ia64__
CheckTypeSize(GClassInitFunc,8, 11928, 3, 3.1, NULL, 11582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GClassInitFunc,4, 11928, 6, 3.1, NULL, 11582, NULL)
#elif defined __powerpc64__
CheckTypeSize(GClassInitFunc,8, 11928, 9, 3.1, NULL, 11582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GClassInitFunc,4, 11928, 10, 3.1, NULL, 11582, NULL)
#elif defined __s390x__
CheckTypeSize(GClassInitFunc,8, 11928, 12, 3.1, NULL, 11582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11582,NULL);\n",architecture,11928,0);
Msg("Find size of GClassInitFunc (11928)\n");
#endif

#if defined __i386__
CheckTypeSize(GClassFinalizeFunc,4, 11929, 2, 3.1, NULL, 11582, NULL)
#elif defined __x86_64__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 11, 3.1, NULL, 11582, NULL)
#elif defined __ia64__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 3, 3.1, NULL, 11582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GClassFinalizeFunc,4, 11929, 6, 3.1, NULL, 11582, NULL)
#elif defined __powerpc64__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 9, 3.1, NULL, 11582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GClassFinalizeFunc,4, 11929, 10, 3.1, NULL, 11582, NULL)
#elif defined __s390x__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 12, 3.1, NULL, 11582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11582,NULL);\n",architecture,11929,0);
Msg("Find size of GClassFinalizeFunc (11929)\n");
#endif

#if defined __i386__
CheckTypeSize(GInstanceInitFunc,4, 11931, 2, 3.1, NULL, 11930, NULL)
#elif defined __x86_64__
CheckTypeSize(GInstanceInitFunc,8, 11931, 11, 3.1, NULL, 11930, NULL)
#elif defined __ia64__
CheckTypeSize(GInstanceInitFunc,8, 11931, 3, 3.1, NULL, 11930, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GInstanceInitFunc,4, 11931, 6, 3.1, NULL, 11930, NULL)
#elif defined __powerpc64__
CheckTypeSize(GInstanceInitFunc,8, 11931, 9, 3.1, NULL, 11930, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GInstanceInitFunc,4, 11931, 10, 3.1, NULL, 11930, NULL)
#elif defined __s390x__
CheckTypeSize(GInstanceInitFunc,8, 11931, 12, 3.1, NULL, 11930, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11930,NULL);\n",architecture,11931,0);
Msg("Find size of GInstanceInitFunc (11931)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeValueTable,32, 11941, 2, 3.1, NULL, 11932, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeValueTable,64, 11941, 11, 3.1, NULL, 11932, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeValueTable,64, 11941, 3, 3.1, NULL, 11932, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeValueTable,32, 11941, 6, 3.1, NULL, 11932, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeValueTable,64, 11941, 9, 3.1, NULL, 11932, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeValueTable,32, 11941, 10, 3.1, NULL, 11932, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeValueTable,64, 11941, 12, 3.1, NULL, 11932, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11932,NULL);\n",architecture,11941,0);
Msg("Find size of GTypeValueTable (11941)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeInfo,36, 11944, 2, 3.1, NULL, 11925, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeInfo,72, 11944, 11, 3.1, NULL, 11925, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeInfo,72, 11944, 3, 3.1, NULL, 11925, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeInfo,36, 11944, 6, 3.1, NULL, 11925, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeInfo,72, 11944, 9, 3.1, NULL, 11925, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeInfo,36, 11944, 10, 3.1, NULL, 11925, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeInfo,72, 11944, 12, 3.1, NULL, 11925, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11925,NULL);\n",architecture,11944,0);
Msg("Find size of GTypeInfo (11944)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeFlags,4, 11948, 2, 3.1, NULL, 11947, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeFlags,4, 11948, 11, 3.1, NULL, 11947, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeFlags,4, 11948, 3, 3.1, NULL, 11947, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeFlags,4, 11948, 6, 3.1, NULL, 11947, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeFlags,4, 11948, 9, 3.1, NULL, 11947, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeFlags,4, 11948, 10, 3.1, NULL, 11947, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeFlags,4, 11948, 12, 3.1, NULL, 11947, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11947,NULL);\n",architecture,11948,0);
Msg("Find size of GTypeFlags (11948)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeModule,28, 11950, 2, 3.1, NULL, 11949, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeModule,56, 11950, 11, 3.1, NULL, 11949, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeModule,56, 11950, 3, 3.1, NULL, 11949, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeModule,28, 11950, 6, 3.1, NULL, 11949, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeModule,56, 11950, 9, 3.1, NULL, 11949, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeModule,28, 11950, 10, 3.1, NULL, 11949, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeModule,56, 11950, 12, 3.1, NULL, 11949, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11949,NULL);\n",architecture,11950,0);
Msg("Find size of GTypeModule (11950)\n");
#endif

#if defined __i386__
CheckTypeSize(GInterfaceInitFunc,4, 11955, 2, 3.1, NULL, 11582, NULL)
#elif defined __x86_64__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 11, 3.1, NULL, 11582, NULL)
#elif defined __ia64__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 3, 3.1, NULL, 11582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GInterfaceInitFunc,4, 11955, 6, 3.1, NULL, 11582, NULL)
#elif defined __powerpc64__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 9, 3.1, NULL, 11582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GInterfaceInitFunc,4, 11955, 10, 3.1, NULL, 11582, NULL)
#elif defined __s390x__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 12, 3.1, NULL, 11582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11582,NULL);\n",architecture,11955,0);
Msg("Find size of GInterfaceInitFunc (11955)\n");
#endif

#if defined __i386__
CheckTypeSize(GInterfaceFinalizeFunc,4, 11956, 2, 3.1, NULL, 11582, NULL)
#elif defined __x86_64__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 11, 3.1, NULL, 11582, NULL)
#elif defined __ia64__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 3, 3.1, NULL, 11582, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GInterfaceFinalizeFunc,4, 11956, 6, 3.1, NULL, 11582, NULL)
#elif defined __powerpc64__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 9, 3.1, NULL, 11582, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GInterfaceFinalizeFunc,4, 11956, 10, 3.1, NULL, 11582, NULL)
#elif defined __s390x__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 12, 3.1, NULL, 11582, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11582,NULL);\n",architecture,11956,0);
Msg("Find size of GInterfaceFinalizeFunc (11956)\n");
#endif

#if defined __i386__
CheckTypeSize(GInterfaceInfo,12, 11957, 2, 3.1, NULL, 11954, NULL)
#elif defined __x86_64__
CheckTypeSize(GInterfaceInfo,24, 11957, 11, 3.1, NULL, 11954, NULL)
#elif defined __ia64__
CheckTypeSize(GInterfaceInfo,24, 11957, 3, 3.1, NULL, 11954, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GInterfaceInfo,12, 11957, 6, 3.1, NULL, 11954, NULL)
#elif defined __powerpc64__
CheckTypeSize(GInterfaceInfo,24, 11957, 9, 3.1, NULL, 11954, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GInterfaceInfo,12, 11957, 10, 3.1, NULL, 11954, NULL)
#elif defined __s390x__
CheckTypeSize(GInterfaceInfo,24, 11957, 12, 3.1, NULL, 11954, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11954,NULL);\n",architecture,11957,0);
Msg("Find size of GInterfaceInfo (11957)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalAccumulator,4, 11960, 2, 3.1, NULL, 11959, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalAccumulator,8, 11960, 11, 3.1, NULL, 11959, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalAccumulator,8, 11960, 3, 3.1, NULL, 11959, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalAccumulator,4, 11960, 6, 3.1, NULL, 11959, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalAccumulator,8, 11960, 9, 3.1, NULL, 11959, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalAccumulator,4, 11960, 10, 3.1, NULL, 11959, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalAccumulator,8, 11960, 12, 3.1, NULL, 11959, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11959,NULL);\n",architecture,11960,0);
Msg("Find size of GSignalAccumulator (11960)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalCMarshaller,4, 11961, 2, 3.1, NULL, 11910, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalCMarshaller,8, 11961, 11, 3.1, NULL, 11910, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalCMarshaller,8, 11961, 3, 3.1, NULL, 11910, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalCMarshaller,4, 11961, 6, 3.1, NULL, 11910, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalCMarshaller,8, 11961, 9, 3.1, NULL, 11910, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalCMarshaller,4, 11961, 10, 3.1, NULL, 11910, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalCMarshaller,8, 11961, 12, 3.1, NULL, 11910, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11910,NULL);\n",architecture,11961,0);
Msg("Find size of GSignalCMarshaller (11961)\n");
#endif

#if defined __i386__
CheckTypeSize(GConnectFlags,4, 11963, 2, 3.1, NULL, 11962, NULL)
#elif defined __x86_64__
CheckTypeSize(GConnectFlags,4, 11963, 11, 3.1, NULL, 11962, NULL)
#elif defined __ia64__
CheckTypeSize(GConnectFlags,4, 11963, 3, 3.1, NULL, 11962, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GConnectFlags,4, 11963, 6, 3.1, NULL, 11962, NULL)
#elif defined __powerpc64__
CheckTypeSize(GConnectFlags,4, 11963, 9, 3.1, NULL, 11962, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GConnectFlags,4, 11963, 10, 3.1, NULL, 11962, NULL)
#elif defined __s390x__
CheckTypeSize(GConnectFlags,4, 11963, 12, 3.1, NULL, 11962, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11962,NULL);\n",architecture,11963,0);
Msg("Find size of GConnectFlags (11963)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 2, 3.1, NULL, 11965, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 11, 3.1, NULL, 11965, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 3, 3.1, NULL, 11965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 6, 3.1, NULL, 11965, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 9, 3.1, NULL, 11965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 10, 3.1, NULL, 11965, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 12, 3.1, NULL, 11965, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11965,NULL);\n",architecture,11966,0);
Msg("Find size of GTypeFundamentalFlags (11966)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 2, 3.1, NULL, 11964, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 11, 3.1, NULL, 11964, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 3, 3.1, NULL, 11964, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 6, 3.1, NULL, 11964, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 9, 3.1, NULL, 11964, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 10, 3.1, NULL, 11964, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 12, 3.1, NULL, 11964, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11964,NULL);\n",architecture,11967,0);
Msg("Find size of GTypeFundamentalInfo (11967)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeQuery,16, 11971, 2, 3.1, NULL, 11970, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeQuery,24, 11971, 11, 3.1, NULL, 11970, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeQuery,24, 11971, 3, 3.1, NULL, 11970, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeQuery,16, 11971, 6, 3.1, NULL, 11970, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeQuery,24, 11971, 9, 3.1, NULL, 11970, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeQuery,16, 11971, 10, 3.1, NULL, 11970, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeQuery,24, 11971, 12, 3.1, NULL, 11970, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11970,NULL);\n",architecture,11971,0);
Msg("Find size of GTypeQuery (11971)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalEmissionHook,4, 11974, 2, 3.1, NULL, 11973, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalEmissionHook,8, 11974, 11, 3.1, NULL, 11973, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalEmissionHook,8, 11974, 3, 3.1, NULL, 11973, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalEmissionHook,4, 11974, 6, 3.1, NULL, 11973, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalEmissionHook,8, 11974, 9, 3.1, NULL, 11973, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalEmissionHook,4, 11974, 10, 3.1, NULL, 11973, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalEmissionHook,8, 11974, 12, 3.1, NULL, 11973, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11973,NULL);\n",architecture,11974,0);
Msg("Find size of GSignalEmissionHook (11974)\n");
#endif

#if defined __i386__
CheckTypeSize(GValueTransform,4, 11975, 2, 3.1, NULL, 11934, NULL)
#elif defined __x86_64__
CheckTypeSize(GValueTransform,8, 11975, 11, 3.1, NULL, 11934, NULL)
#elif defined __ia64__
CheckTypeSize(GValueTransform,8, 11975, 3, 3.1, NULL, 11934, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GValueTransform,4, 11975, 6, 3.1, NULL, 11934, NULL)
#elif defined __powerpc64__
CheckTypeSize(GValueTransform,8, 11975, 9, 3.1, NULL, 11934, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GValueTransform,4, 11975, 10, 3.1, NULL, 11934, NULL)
#elif defined __s390x__
CheckTypeSize(GValueTransform,8, 11975, 12, 3.1, NULL, 11934, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11934,NULL);\n",architecture,11975,0);
Msg("Find size of GValueTransform (11975)\n");
#endif

#if defined __i386__
CheckTypeSize(GParameter,24, 11977, 2, 3.1, NULL, 11976, NULL)
#elif defined __x86_64__
CheckTypeSize(GParameter,32, 11977, 11, 3.1, NULL, 11976, NULL)
#elif defined __ia64__
CheckTypeSize(GParameter,32, 11977, 3, 3.1, NULL, 11976, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParameter,32, 11977, 6, 3.1, NULL, 11976, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParameter,32, 11977, 9, 3.1, NULL, 11976, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParameter,32, 11977, 10, 3.1, NULL, 11976, NULL)
#elif defined __s390x__
CheckTypeSize(GParameter,32, 11977, 12, 3.1, NULL, 11976, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11976,NULL);\n",architecture,11977,0);
Msg("Find size of GParameter (11977)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecTypeInfo,28, 11984, 2, 3.1, NULL, 11979, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 11, 3.1, NULL, 11979, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 3, 3.1, NULL, 11979, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecTypeInfo,28, 11984, 6, 3.1, NULL, 11979, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 9, 3.1, NULL, 11979, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecTypeInfo,28, 11984, 10, 3.1, NULL, 11979, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 12, 3.1, NULL, 11979, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11979,NULL);\n",architecture,11984,0);
Msg("Find size of GParamSpecTypeInfo (11984)\n");
#endif

#if defined __i386__
CheckTypeSize(GBoxedCopyFunc,4, 11989, 2, 3.1, NULL, 11405, NULL)
#elif defined __x86_64__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 11, 3.1, NULL, 11405, NULL)
#elif defined __ia64__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 3, 3.1, NULL, 11405, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GBoxedCopyFunc,4, 11989, 6, 3.1, NULL, 11405, NULL)
#elif defined __powerpc64__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 9, 3.1, NULL, 11405, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GBoxedCopyFunc,4, 11989, 10, 3.1, NULL, 11405, NULL)
#elif defined __s390x__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 12, 3.1, NULL, 11405, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11405,NULL);\n",architecture,11989,0);
Msg("Find size of GBoxedCopyFunc (11989)\n");
#endif

#if defined __i386__
CheckTypeSize(GBoxedFreeFunc,4, 11990, 2, 3.1, NULL, 11438, NULL)
#elif defined __x86_64__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 11, 3.1, NULL, 11438, NULL)
#elif defined __ia64__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 3, 3.1, NULL, 11438, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GBoxedFreeFunc,4, 11990, 6, 3.1, NULL, 11438, NULL)
#elif defined __powerpc64__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 9, 3.1, NULL, 11438, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GBoxedFreeFunc,4, 11990, 10, 3.1, NULL, 11438, NULL)
#elif defined __s390x__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 12, 3.1, NULL, 11438, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11438,NULL);\n",architecture,11990,0);
Msg("Find size of GBoxedFreeFunc (11990)\n");
#endif

#if defined __i386__
CheckTypeSize(GSignalQuery,28, 11994, 2, 3.1, NULL, 11991, NULL)
#elif defined __x86_64__
CheckTypeSize(GSignalQuery,56, 11994, 11, 3.1, NULL, 11991, NULL)
#elif defined __ia64__
CheckTypeSize(GSignalQuery,56, 11994, 3, 3.1, NULL, 11991, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GSignalQuery,28, 11994, 6, 3.1, NULL, 11991, NULL)
#elif defined __powerpc64__
CheckTypeSize(GSignalQuery,56, 11994, 9, 3.1, NULL, 11991, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GSignalQuery,28, 11994, 10, 3.1, NULL, 11991, NULL)
#elif defined __s390x__
CheckTypeSize(GSignalQuery,56, 11994, 12, 3.1, NULL, 11991, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11991,NULL);\n",architecture,11994,0);
Msg("Find size of GSignalQuery (11994)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeInterface,8, 11997, 2, 3.1, NULL, 11996, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeInterface,16, 11997, 11, 3.1, NULL, 11996, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeInterface,16, 11997, 3, 3.1, NULL, 11996, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeInterface,8, 11997, 6, 3.1, NULL, 11996, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeInterface,16, 11997, 9, 3.1, NULL, 11996, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeInterface,8, 11997, 10, 3.1, NULL, 11996, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeInterface,16, 11997, 12, 3.1, NULL, 11996, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11996,NULL);\n",architecture,11997,0);
Msg("Find size of GTypeInterface (11997)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,4, 11999, 2, 3.1, NULL, 11998, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 11, 3.1, NULL, 11998, NULL)
#elif defined __ia64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 3, 3.1, NULL, 11998, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,4, 11999, 6, 3.1, NULL, 11998, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 9, 3.1, NULL, 11998, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,4, 11999, 10, 3.1, NULL, 11998, NULL)
#elif defined __s390x__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 12, 3.1, NULL, 11998, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11998,NULL);\n",architecture,11999,0);
Msg("Find size of GTypePluginCompleteInterfaceInfo (11999)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecObject,40, 12001, 2, 3.1, NULL, 12000, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecObject,72, 12001, 11, 3.1, NULL, 12000, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecObject,72, 12001, 3, 3.1, NULL, 12000, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecObject,40, 12001, 6, 3.1, NULL, 12000, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecObject,72, 12001, 9, 3.1, NULL, 12000, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecObject,40, 12001, 10, 3.1, NULL, 12000, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecObject,72, 12001, 12, 3.1, NULL, 12000, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12000,NULL);\n",architecture,12001,0);
Msg("Find size of GParamSpecObject (12001)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypePluginUnuse,4, 12003, 2, 3.1, NULL, 12002, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypePluginUnuse,8, 12003, 11, 3.1, NULL, 12002, NULL)
#elif defined __ia64__
CheckTypeSize(GTypePluginUnuse,8, 12003, 3, 3.1, NULL, 12002, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypePluginUnuse,4, 12003, 6, 3.1, NULL, 12002, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypePluginUnuse,8, 12003, 9, 3.1, NULL, 12002, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypePluginUnuse,4, 12003, 10, 3.1, NULL, 12002, NULL)
#elif defined __s390x__
CheckTypeSize(GTypePluginUnuse,8, 12003, 12, 3.1, NULL, 12002, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12002,NULL);\n",architecture,12003,0);
Msg("Find size of GTypePluginUnuse (12003)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypePluginUse,4, 12005, 2, 3.1, NULL, 12002, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypePluginUse,8, 12005, 11, 3.1, NULL, 12002, NULL)
#elif defined __ia64__
CheckTypeSize(GTypePluginUse,8, 12005, 3, 3.1, NULL, 12002, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypePluginUse,4, 12005, 6, 3.1, NULL, 12002, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypePluginUse,8, 12005, 9, 3.1, NULL, 12002, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypePluginUse,4, 12005, 10, 3.1, NULL, 12002, NULL)
#elif defined __s390x__
CheckTypeSize(GTypePluginUse,8, 12005, 12, 3.1, NULL, 12002, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12002,NULL);\n",architecture,12005,0);
Msg("Find size of GTypePluginUse (12005)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypePluginCompleteTypeInfo,4, 12007, 2, 3.1, NULL, 12006, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 11, 3.1, NULL, 12006, NULL)
#elif defined __ia64__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 3, 3.1, NULL, 12006, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypePluginCompleteTypeInfo,4, 12007, 6, 3.1, NULL, 12006, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 9, 3.1, NULL, 12006, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypePluginCompleteTypeInfo,4, 12007, 10, 3.1, NULL, 12006, NULL)
#elif defined __s390x__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 12, 3.1, NULL, 12006, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12006,NULL);\n",architecture,12007,0);
Msg("Find size of GTypePluginCompleteTypeInfo (12007)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypePluginClass,24, 12008, 2, 3.1, NULL, 12004, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypePluginClass,48, 12008, 11, 3.1, NULL, 12004, NULL)
#elif defined __ia64__
CheckTypeSize(GTypePluginClass,48, 12008, 3, 3.1, NULL, 12004, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypePluginClass,24, 12008, 6, 3.1, NULL, 12004, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypePluginClass,48, 12008, 9, 3.1, NULL, 12004, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypePluginClass,24, 12008, 10, 3.1, NULL, 12004, NULL)
#elif defined __s390x__
CheckTypeSize(GTypePluginClass,48, 12008, 12, 3.1, NULL, 12004, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12004,NULL);\n",architecture,12008,0);
Msg("Find size of GTypePluginClass (12008)\n");
#endif

#if defined __i386__
CheckTypeSize(GCClosure,20, 12010, 2, 3.1, NULL, 12009, NULL)
#elif defined __x86_64__
CheckTypeSize(GCClosure,40, 12010, 11, 3.1, NULL, 12009, NULL)
#elif defined __ia64__
CheckTypeSize(GCClosure,40, 12010, 3, 3.1, NULL, 12009, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GCClosure,20, 12010, 6, 3.1, NULL, 12009, NULL)
#elif defined __powerpc64__
CheckTypeSize(GCClosure,40, 12010, 9, 3.1, NULL, 12009, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GCClosure,20, 12010, 10, 3.1, NULL, 12009, NULL)
#elif defined __s390x__
CheckTypeSize(GCClosure,40, 12010, 12, 3.1, NULL, 12009, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12009,NULL);\n",architecture,12010,0);
Msg("Find size of GCClosure (12010)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecUnichar,44, 12012, 2, 3.1, NULL, 12011, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecUnichar,80, 12012, 11, 3.1, NULL, 12011, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecUnichar,80, 12012, 3, 3.1, NULL, 12011, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecUnichar,44, 12012, 6, 3.1, NULL, 12011, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecUnichar,80, 12012, 9, 3.1, NULL, 12011, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecUnichar,44, 12012, 10, 3.1, NULL, 12011, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecUnichar,80, 12012, 12, 3.1, NULL, 12011, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12011,NULL);\n",architecture,12012,0);
Msg("Find size of GParamSpecUnichar (12012)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecUInt64,64, 12014, 2, 3.1, NULL, 12013, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecUInt64,96, 12014, 11, 3.1, NULL, 12013, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecUInt64,96, 12014, 3, 3.1, NULL, 12013, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecUInt64,64, 12014, 6, 3.1, NULL, 12013, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecUInt64,96, 12014, 9, 3.1, NULL, 12013, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecUInt64,64, 12014, 10, 3.1, NULL, 12013, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecUInt64,96, 12014, 12, 3.1, NULL, 12013, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12013,NULL);\n",architecture,12014,0);
Msg("Find size of GParamSpecUInt64 (12014)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecBoxed,40, 12016, 2, 3.1, NULL, 12015, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecBoxed,72, 12016, 11, 3.1, NULL, 12015, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecBoxed,72, 12016, 3, 3.1, NULL, 12015, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecBoxed,40, 12016, 6, 3.1, NULL, 12015, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecBoxed,72, 12016, 9, 3.1, NULL, 12015, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecBoxed,40, 12016, 10, 3.1, NULL, 12015, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecBoxed,72, 12016, 12, 3.1, NULL, 12015, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12015,NULL);\n",architecture,12016,0);
Msg("Find size of GParamSpecBoxed (12016)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecOverride,44, 12018, 2, 3.1, NULL, 12017, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecOverride,80, 12018, 11, 3.1, NULL, 12017, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecOverride,80, 12018, 3, 3.1, NULL, 12017, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecOverride,44, 12018, 6, 3.1, NULL, 12017, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecOverride,80, 12018, 9, 3.1, NULL, 12017, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecOverride,44, 12018, 10, 3.1, NULL, 12017, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecOverride,80, 12018, 12, 3.1, NULL, 12017, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12017,NULL);\n",architecture,12018,0);
Msg("Find size of GParamSpecOverride (12018)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecClass,40, 12021, 2, 3.1, NULL, 12019, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecClass,80, 12021, 11, 3.1, NULL, 12019, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecClass,80, 12021, 3, 3.1, NULL, 12019, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecClass,40, 12021, 6, 3.1, NULL, 12019, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecClass,80, 12021, 9, 3.1, NULL, 12019, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecClass,40, 12021, 10, 3.1, NULL, 12019, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecClass,80, 12021, 12, 3.1, NULL, 12019, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12019,NULL);\n",architecture,12021,0);
Msg("Find size of GParamSpecClass (12021)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecLong,52, 12023, 2, 3.1, NULL, 12022, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecLong,96, 12023, 11, 3.1, NULL, 12022, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecLong,96, 12023, 3, 3.1, NULL, 12022, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecLong,52, 12023, 6, 3.1, NULL, 12022, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecLong,96, 12023, 9, 3.1, NULL, 12022, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecLong,52, 12023, 10, 3.1, NULL, 12022, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecLong,96, 12023, 12, 3.1, NULL, 12022, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12022,NULL);\n",architecture,12023,0);
Msg("Find size of GParamSpecLong (12023)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecEnum,48, 12025, 2, 3.1, NULL, 12024, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecEnum,88, 12025, 11, 3.1, NULL, 12024, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecEnum,88, 12025, 3, 3.1, NULL, 12024, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecEnum,48, 12025, 6, 3.1, NULL, 12024, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecEnum,88, 12025, 9, 3.1, NULL, 12024, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecEnum,48, 12025, 10, 3.1, NULL, 12024, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecEnum,88, 12025, 12, 3.1, NULL, 12024, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12024,NULL);\n",architecture,12025,0);
Msg("Find size of GParamSpecEnum (12025)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecFloat,56, 12027, 2, 3.1, NULL, 12026, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecFloat,88, 12027, 11, 3.1, NULL, 12026, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecFloat,88, 12027, 3, 3.1, NULL, 12026, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecFloat,56, 12027, 6, 3.1, NULL, 12026, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecFloat,88, 12027, 9, 3.1, NULL, 12026, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecFloat,56, 12027, 10, 3.1, NULL, 12026, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecFloat,88, 12027, 12, 3.1, NULL, 12026, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12026,NULL);\n",architecture,12027,0);
Msg("Find size of GParamSpecFloat (12027)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecString,56, 12029, 2, 3.1, NULL, 12028, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecString,104, 12029, 11, 3.1, NULL, 12028, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecString,104, 12029, 3, 3.1, NULL, 12028, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecString,56, 12029, 6, 3.1, NULL, 12028, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecString,104, 12029, 9, 3.1, NULL, 12028, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecString,56, 12029, 10, 3.1, NULL, 12028, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecString,104, 12029, 12, 3.1, NULL, 12028, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12028,NULL);\n",architecture,12029,0);
Msg("Find size of GParamSpecString (12029)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecDouble,72, 12031, 2, 3.1, NULL, 12030, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecDouble,104, 12031, 11, 3.1, NULL, 12030, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecDouble,104, 12031, 3, 3.1, NULL, 12030, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecDouble,72, 12031, 6, 3.1, NULL, 12030, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecDouble,104, 12031, 9, 3.1, NULL, 12030, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecDouble,72, 12031, 10, 3.1, NULL, 12030, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecDouble,104, 12031, 12, 3.1, NULL, 12030, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12030,NULL);\n",architecture,12031,0);
Msg("Find size of GParamSpecDouble (12031)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecParam,40, 12033, 2, 3.1, NULL, 12032, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecParam,72, 12033, 11, 3.1, NULL, 12032, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecParam,72, 12033, 3, 3.1, NULL, 12032, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecParam,40, 12033, 6, 3.1, NULL, 12032, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecParam,72, 12033, 9, 3.1, NULL, 12032, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecParam,40, 12033, 10, 3.1, NULL, 12032, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecParam,72, 12033, 12, 3.1, NULL, 12032, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12032,NULL);\n",architecture,12033,0);
Msg("Find size of GParamSpecParam (12033)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecValueArray,48, 12035, 2, 3.1, NULL, 12034, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecValueArray,88, 12035, 11, 3.1, NULL, 12034, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecValueArray,88, 12035, 3, 3.1, NULL, 12034, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecValueArray,48, 12035, 6, 3.1, NULL, 12034, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecValueArray,88, 12035, 9, 3.1, NULL, 12034, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecValueArray,48, 12035, 10, 3.1, NULL, 12034, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecValueArray,88, 12035, 12, 3.1, NULL, 12034, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12034,NULL);\n",architecture,12035,0);
Msg("Find size of GParamSpecValueArray (12035)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecFlags,48, 12037, 2, 3.1, NULL, 12036, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecFlags,88, 12037, 11, 3.1, NULL, 12036, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecFlags,88, 12037, 3, 3.1, NULL, 12036, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecFlags,48, 12037, 6, 3.1, NULL, 12036, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecFlags,88, 12037, 9, 3.1, NULL, 12036, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecFlags,48, 12037, 10, 3.1, NULL, 12036, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecFlags,88, 12037, 12, 3.1, NULL, 12036, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12036,NULL);\n",architecture,12037,0);
Msg("Find size of GParamSpecFlags (12037)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecInt64,64, 12039, 2, 3.1, NULL, 12038, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecInt64,96, 12039, 11, 3.1, NULL, 12038, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecInt64,96, 12039, 3, 3.1, NULL, 12038, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecInt64,64, 12039, 6, 3.1, NULL, 12038, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecInt64,96, 12039, 9, 3.1, NULL, 12038, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecInt64,64, 12039, 10, 3.1, NULL, 12038, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecInt64,96, 12039, 12, 3.1, NULL, 12038, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12038,NULL);\n",architecture,12039,0);
Msg("Find size of GParamSpecInt64 (12039)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecPointer,40, 12041, 2, 3.1, NULL, 12040, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecPointer,72, 12041, 11, 3.1, NULL, 12040, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecPointer,72, 12041, 3, 3.1, NULL, 12040, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecPointer,40, 12041, 6, 3.1, NULL, 12040, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecPointer,72, 12041, 9, 3.1, NULL, 12040, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecPointer,40, 12041, 10, 3.1, NULL, 12040, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecPointer,72, 12041, 12, 3.1, NULL, 12040, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12040,NULL);\n",architecture,12041,0);
Msg("Find size of GParamSpecPointer (12041)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecInt,52, 12043, 2, 3.1, NULL, 12042, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecInt,88, 12043, 11, 3.1, NULL, 12042, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecInt,88, 12043, 3, 3.1, NULL, 12042, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecInt,52, 12043, 6, 3.1, NULL, 12042, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecInt,88, 12043, 9, 3.1, NULL, 12042, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecInt,52, 12043, 10, 3.1, NULL, 12042, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecInt,88, 12043, 12, 3.1, NULL, 12042, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12042,NULL);\n",architecture,12043,0);
Msg("Find size of GParamSpecInt (12043)\n");
#endif

#if defined __i386__
CheckTypeSize(GTypeModuleClass,92, 12047, 2, 3.1, NULL, 12044, NULL)
#elif defined __x86_64__
CheckTypeSize(GTypeModuleClass,184, 12047, 11, 3.1, NULL, 12044, NULL)
#elif defined __ia64__
CheckTypeSize(GTypeModuleClass,184, 12047, 3, 3.1, NULL, 12044, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GTypeModuleClass,92, 12047, 6, 3.1, NULL, 12044, NULL)
#elif defined __powerpc64__
CheckTypeSize(GTypeModuleClass,184, 12047, 9, 3.1, NULL, 12044, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GTypeModuleClass,92, 12047, 10, 3.1, NULL, 12044, NULL)
#elif defined __s390x__
CheckTypeSize(GTypeModuleClass,184, 12047, 12, 3.1, NULL, 12044, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12044,NULL);\n",architecture,12047,0);
Msg("Find size of GTypeModuleClass (12047)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecUInt,52, 12049, 2, 3.1, NULL, 12048, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecUInt,88, 12049, 11, 3.1, NULL, 12048, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecUInt,88, 12049, 3, 3.1, NULL, 12048, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecUInt,52, 12049, 6, 3.1, NULL, 12048, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecUInt,88, 12049, 9, 3.1, NULL, 12048, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecUInt,52, 12049, 10, 3.1, NULL, 12048, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecUInt,88, 12049, 12, 3.1, NULL, 12048, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12048,NULL);\n",architecture,12049,0);
Msg("Find size of GParamSpecUInt (12049)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecUChar,44, 12051, 2, 3.1, NULL, 12050, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecUChar,80, 12051, 11, 3.1, NULL, 12050, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecUChar,80, 12051, 3, 3.1, NULL, 12050, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecUChar,44, 12051, 6, 3.1, NULL, 12050, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecUChar,80, 12051, 9, 3.1, NULL, 12050, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecUChar,44, 12051, 10, 3.1, NULL, 12050, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecUChar,80, 12051, 12, 3.1, NULL, 12050, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12050,NULL);\n",architecture,12051,0);
Msg("Find size of GParamSpecUChar (12051)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecULong,52, 12053, 2, 3.1, NULL, 12052, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecULong,96, 12053, 11, 3.1, NULL, 12052, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecULong,96, 12053, 3, 3.1, NULL, 12052, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecULong,52, 12053, 6, 3.1, NULL, 12052, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecULong,96, 12053, 9, 3.1, NULL, 12052, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecULong,52, 12053, 10, 3.1, NULL, 12052, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecULong,96, 12053, 12, 3.1, NULL, 12052, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12052,NULL);\n",architecture,12053,0);
Msg("Find size of GParamSpecULong (12053)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecChar,44, 12055, 2, 3.1, NULL, 12054, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecChar,80, 12055, 11, 3.1, NULL, 12054, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecChar,80, 12055, 3, 3.1, NULL, 12054, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecChar,44, 12055, 6, 3.1, NULL, 12054, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecChar,80, 12055, 9, 3.1, NULL, 12054, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecChar,44, 12055, 10, 3.1, NULL, 12054, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecChar,80, 12055, 12, 3.1, NULL, 12054, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12054,NULL);\n",architecture,12055,0);
Msg("Find size of GParamSpecChar (12055)\n");
#endif

#if defined __i386__
CheckTypeSize(GParamSpecBoolean,44, 12057, 2, 3.1, NULL, 12056, NULL)
#elif defined __x86_64__
CheckTypeSize(GParamSpecBoolean,80, 12057, 11, 3.1, NULL, 12056, NULL)
#elif defined __ia64__
CheckTypeSize(GParamSpecBoolean,80, 12057, 3, 3.1, NULL, 12056, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GParamSpecBoolean,44, 12057, 6, 3.1, NULL, 12056, NULL)
#elif defined __powerpc64__
CheckTypeSize(GParamSpecBoolean,80, 12057, 9, 3.1, NULL, 12056, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GParamSpecBoolean,44, 12057, 10, 3.1, NULL, 12056, NULL)
#elif defined __s390x__
CheckTypeSize(GParamSpecBoolean,80, 12057, 12, 3.1, NULL, 12056, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12056,NULL);\n",architecture,12057,0);
Msg("Find size of GParamSpecBoolean (12057)\n");
#endif

#if defined __i386__
CheckTypeSize(GObjectFinalizeFunc,4, 12059, 2, 3.1, NULL, 12058, NULL)
#elif defined __ia64__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 3, 3.1, NULL, 12058, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GObjectFinalizeFunc,4, 12059, 6, 3.1, NULL, 12058, NULL)
#elif defined __powerpc64__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 9, 3.1, NULL, 12058, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GObjectFinalizeFunc,4, 12059, 10, 3.1, NULL, 12058, NULL)
#elif defined __s390x__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 12, 3.1, NULL, 12058, NULL)
#elif defined __x86_64__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 11, 3.1, NULL, 12058, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12058,NULL);\n",architecture,12059,0);
Msg("Find size of GObjectFinalizeFunc (12059)\n");
#endif

#if defined __i386__
CheckTypeSize(GObjectGetPropertyFunc,4, 12061, 2, 3.1, NULL, 12060, NULL)
#elif defined __ia64__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 3, 3.1, NULL, 12060, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GObjectGetPropertyFunc,4, 12061, 6, 3.1, NULL, 12060, NULL)
#elif defined __powerpc64__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 9, 3.1, NULL, 12060, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GObjectGetPropertyFunc,4, 12061, 10, 3.1, NULL, 12060, NULL)
#elif defined __s390x__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 12, 3.1, NULL, 12060, NULL)
#elif defined __x86_64__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 11, 3.1, NULL, 12060, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12060,NULL);\n",architecture,12061,0);
Msg("Find size of GObjectGetPropertyFunc (12061)\n");
#endif

#if defined __i386__
CheckTypeSize(GObjectSetPropertyFunc,4, 12063, 2, 3.1, NULL, 12062, NULL)
#elif defined __ia64__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 3, 3.1, NULL, 12062, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GObjectSetPropertyFunc,4, 12063, 6, 3.1, NULL, 12062, NULL)
#elif defined __powerpc64__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 9, 3.1, NULL, 12062, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GObjectSetPropertyFunc,4, 12063, 10, 3.1, NULL, 12062, NULL)
#elif defined __s390x__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 12, 3.1, NULL, 12062, NULL)
#elif defined __x86_64__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 11, 3.1, NULL, 12062, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12062,NULL);\n",architecture,12063,0);
Msg("Find size of GObjectSetPropertyFunc (12063)\n");
#endif

#if defined __i386__
CheckTypeSize(gchararray,4, 16219, 2, 3.1, NULL, 11415, NULL)
#elif defined __x86_64__
CheckTypeSize(gchararray,8, 16219, 11, 3.1, NULL, 11415, NULL)
#elif defined __ia64__
CheckTypeSize(gchararray,8, 16219, 3, 3.1, NULL, 11415, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gchararray,4, 16219, 6, 3.1, NULL, 11415, NULL)
#elif defined __powerpc64__
CheckTypeSize(gchararray,8, 16219, 9, 3.1, NULL, 11415, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(gchararray,4, 16219, 10, 3.1, NULL, 11415, NULL)
#elif defined __s390x__
CheckTypeSize(gchararray,8, 16219, 12, 3.1, NULL, 11415, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11415,NULL);\n",architecture,16219,0);
Msg("Find size of gchararray (16219)\n");
#endif

#if defined __i386__
CheckTypeSize(GStrv,4, 16220, 2, 3.1, NULL, 11485, NULL)
#elif defined __x86_64__
CheckTypeSize(GStrv,8, 16220, 11, 3.1, NULL, 11485, NULL)
#elif defined __ia64__
CheckTypeSize(GStrv,8, 16220, 3, 3.1, NULL, 11485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GStrv,4, 16220, 6, 3.1, NULL, 11485, NULL)
#elif defined __powerpc64__
CheckTypeSize(GStrv,8, 16220, 9, 3.1, NULL, 11485, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GStrv,4, 16220, 10, 3.1, NULL, 11485, NULL)
#elif defined __s390x__
CheckTypeSize(GStrv,8, 16220, 12, 3.1, NULL, 11485, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11485, NULL);\n",architecture,16220,0);
Msg("Find size of GStrv (16220)\n");
#endif

extern void g_object_set_property_db(GObject *, const gchar *, const GValue *);
CheckInterfacedef(g_object_set_property,g_object_set_property_db);
extern void g_value_set_param_db(GValue *, GParamSpec *);
CheckInterfacedef(g_value_set_param,g_value_set_param_db);
extern gpointer g_object_steal_qdata_db(GObject *, GQuark);
CheckInterfacedef(g_object_steal_qdata,g_object_steal_qdata_db);
extern void g_object_class_override_property_db(GObjectClass *, guint, const gchar *);
CheckInterfacedef(g_object_class_override_property,g_object_class_override_property_db);
extern void g_cclosure_marshal_VOID__INT_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__INT,g_cclosure_marshal_VOID__INT_db);
extern void g_closure_sink_db(GClosure *);
CheckInterfacedef(g_closure_sink,g_closure_sink_db);
extern gboolean g_type_check_value_holds_db(GValue *, GType);
CheckInterfacedef(g_type_check_value_holds,g_type_check_value_holds_db);
extern void g_type_remove_interface_check_db(gpointer, GTypeInterfaceCheckFunc);
CheckInterfacedef(g_type_remove_interface_check,g_type_remove_interface_check_db);
extern GValueArray * g_value_array_remove_db(GValueArray *, guint);
CheckInterfacedef(g_value_array_remove,g_value_array_remove_db);
extern gboolean g_param_value_defaults_db(GParamSpec *, GValue *);
CheckInterfacedef(g_param_value_defaults,g_param_value_defaults_db);
extern GParamSpec * g_param_spec_long_db(const gchar *, const gchar *, const gchar *, glong, glong, glong, GParamFlags);
CheckInterfacedef(g_param_spec_long,g_param_spec_long_db);
extern gpointer g_param_spec_internal_db(GType, const gchar *, const gchar *, const gchar *, GParamFlags);
CheckInterfacedef(g_param_spec_internal,g_param_spec_internal_db);
extern void g_cclosure_marshal_VOID__LONG_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__LONG,g_cclosure_marshal_VOID__LONG_db);
extern GType g_io_channel_get_type_db(void);
CheckInterfacedef(g_io_channel_get_type,g_io_channel_get_type_db);
extern GEnumValue * g_enum_get_value_db(GEnumClass *, gint);
CheckInterfacedef(g_enum_get_value,g_enum_get_value_db);
extern GParamSpec * g_param_spec_boolean_db(const gchar *, const gchar *, const gchar *, gboolean, GParamFlags);
CheckInterfacedef(g_param_spec_boolean,g_param_spec_boolean_db);
extern GParamSpec * g_param_spec_pointer_db(const gchar *, const gchar *, const gchar *, GParamFlags);
CheckInterfacedef(g_param_spec_pointer,g_param_spec_pointer_db);
extern GClosure * g_closure_new_object_db(guint, GObject *);
CheckInterfacedef(g_closure_new_object,g_closure_new_object_db);
extern void g_param_spec_pool_insert_db(GParamSpecPool *, GParamSpec *, GType);
CheckInterfacedef(g_param_spec_pool_insert,g_param_spec_pool_insert_db);
extern void g_type_init_with_debug_flags_db(GTypeDebugFlags);
CheckInterfacedef(g_type_init_with_debug_flags,g_type_init_with_debug_flags_db);
extern GType * g_type_interfaces_db(GType, guint *);
CheckInterfacedef(g_type_interfaces,g_type_interfaces_db);
extern GClosure * g_closure_new_simple_db(guint, gpointer);
CheckInterfacedef(g_closure_new_simple,g_closure_new_simple_db);
extern GParamSpec * g_param_spec_string_db(const gchar *, const gchar *, const gchar *, const gchar *, GParamFlags);
CheckInterfacedef(g_param_spec_string,g_param_spec_string_db);
extern GValueArray * g_value_array_copy_db(const GValueArray *);
CheckInterfacedef(g_value_array_copy,g_value_array_copy_db);
extern gpointer g_type_instance_get_private_db(GTypeInstance *, GType);
CheckInterfacedef(g_type_instance_get_private,g_type_instance_get_private_db);
extern void g_cclosure_marshal_VOID__FLAGS_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__FLAGS,g_cclosure_marshal_VOID__FLAGS_db);
extern GTypePlugin * g_type_get_plugin_db(GType);
CheckInterfacedef(g_type_get_plugin,g_type_get_plugin_db);
extern void g_param_spec_unref_db(GParamSpec *);
CheckInterfacedef(g_param_spec_unref,g_param_spec_unref_db);
extern gint g_param_values_cmp_db(GParamSpec *, const GValue *, const GValue *);
CheckInterfacedef(g_param_values_cmp,g_param_values_cmp_db);
extern void g_value_set_object_db(GValue *, gpointer);
CheckInterfacedef(g_value_set_object,g_value_set_object_db);
extern GParamSpec * g_param_spec_boxed_db(const gchar *, const gchar *, const gchar *, GType, GParamFlags);
CheckInterfacedef(g_param_spec_boxed,g_param_spec_boxed_db);
extern void g_value_set_int_db(GValue *, gint);
CheckInterfacedef(g_value_set_int,g_value_set_int_db);
extern gboolean g_signal_parse_name_db(const gchar *, GType, guint *, GQuark *, gboolean);
CheckInterfacedef(g_signal_parse_name,g_signal_parse_name_db);
extern GParamSpec * g_param_spec_pool_lookup_db(GParamSpecPool *, const gchar *, GType, gboolean);
CheckInterfacedef(g_param_spec_pool_lookup,g_param_spec_pool_lookup_db);
extern GTypeInstance * g_type_create_instance_db(GType);
CheckInterfacedef(g_type_create_instance,g_type_create_instance_db);
extern void g_signal_override_class_closure_db(guint, GType, GClosure *);
CheckInterfacedef(g_signal_override_class_closure,g_signal_override_class_closure_db);
extern gboolean g_param_value_validate_db(GParamSpec *, GValue *);
CheckInterfacedef(g_param_value_validate,g_param_value_validate_db);
extern void g_closure_add_invalidate_notifier_db(GClosure *, gpointer, GClosureNotify);
CheckInterfacedef(g_closure_add_invalidate_notifier,g_closure_add_invalidate_notifier_db);
extern gpointer g_type_interface_peek_db(gpointer, GType);
CheckInterfacedef(g_type_interface_peek,g_type_interface_peek_db);
extern gboolean g_type_test_flags_db(GType, guint);
CheckInterfacedef(g_type_test_flags,g_type_test_flags_db);
extern void g_signal_emit_by_name_db(gpointer, const gchar *, ...);
CheckInterfacedef(g_signal_emit_by_name,g_signal_emit_by_name_db);
extern void g_value_set_int64_db(GValue *, gint64);
CheckInterfacedef(g_value_set_int64,g_value_set_int64_db);
extern void g_cclosure_marshal_VOID__UINT_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__UINT,g_cclosure_marshal_VOID__UINT_db);
extern GType g_enum_register_static_db(const gchar *, const GEnumValue *);
CheckInterfacedef(g_enum_register_static,g_enum_register_static_db);
extern guint g_signal_handlers_disconnect_matched_db(gpointer, GSignalMatchType, guint, GQuark, GClosure *, gpointer, gpointer);
CheckInterfacedef(g_signal_handlers_disconnect_matched,g_signal_handlers_disconnect_matched_db);
extern gpointer g_value_get_pointer_db(const GValue *);
CheckInterfacedef(g_value_get_pointer,g_value_get_pointer_db);
extern GType g_flags_register_static_db(const gchar *, const GFlagsValue *);
CheckInterfacedef(g_flags_register_static,g_flags_register_static_db);
extern gboolean g_value_fits_pointer_db(const GValue *);
CheckInterfacedef(g_value_fits_pointer,g_value_fits_pointer_db);
extern void g_closure_set_marshal_db(GClosure *, GClosureMarshal);
CheckInterfacedef(g_closure_set_marshal,g_closure_set_marshal_db);
extern void g_value_set_float_db(GValue *, gfloat);
CheckInterfacedef(g_value_set_float,g_value_set_float_db);
extern void g_signal_emit_db(gpointer, guint, GQuark, ...);
CheckInterfacedef(g_signal_emit,g_signal_emit_db);
extern GParamSpec * g_param_spec_uint_db(const gchar *, const gchar *, const gchar *, guint, guint, guint, GParamFlags);
CheckInterfacedef(g_param_spec_uint,g_param_spec_uint_db);
extern GClosure * g_cclosure_new_object_swap_db(GCallback, GObject *);
CheckInterfacedef(g_cclosure_new_object_swap,g_cclosure_new_object_swap_db);
extern void g_param_spec_set_qdata_db(GParamSpec *, GQuark, gpointer);
CheckInterfacedef(g_param_spec_set_qdata,g_param_spec_set_qdata_db);
extern guint * g_signal_list_ids_db(GType, guint *);
CheckInterfacedef(g_signal_list_ids,g_signal_list_ids_db);
extern GFlagsValue * g_flags_get_first_value_db(GFlagsClass *, guint);
CheckInterfacedef(g_flags_get_first_value,g_flags_get_first_value_db);
extern void g_type_add_class_cache_func_db(gpointer, GTypeClassCacheFunc);
CheckInterfacedef(g_type_add_class_cache_func,g_type_add_class_cache_func_db);
extern void g_object_unref_db(gpointer);
CheckInterfacedef(g_object_unref,g_object_unref_db);
extern GParamSpec * g_value_dup_param_db(const GValue *);
CheckInterfacedef(g_value_dup_param,g_value_dup_param_db);
extern void g_object_get_db(gpointer, const gchar *, ...);
CheckInterfacedef(g_object_get,g_object_get_db);
extern void g_value_set_uint64_db(GValue *, guint64);
CheckInterfacedef(g_value_set_uint64,g_value_set_uint64_db);
extern void g_cclosure_marshal_VOID__OBJECT_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__OBJECT,g_cclosure_marshal_VOID__OBJECT_db);
extern guint64 g_value_get_uint64_db(const GValue *);
CheckInterfacedef(g_value_get_uint64,g_value_get_uint64_db);
extern GType * g_type_children_db(GType, guint *);
CheckInterfacedef(g_type_children,g_type_children_db);
extern const gchar * g_type_name_db(GType);
CheckInterfacedef(g_type_name,g_type_name_db);
extern GTypeClass * g_type_check_class_cast_db(GTypeClass *, GType);
CheckInterfacedef(g_type_check_class_cast,g_type_check_class_cast_db);
extern void g_cclosure_marshal_VOID__UCHAR_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__UCHAR,g_cclosure_marshal_VOID__UCHAR_db);
extern gpointer g_object_new_db(GType, const gchar *, ...);
CheckInterfacedef(g_object_new,g_object_new_db);
extern void g_type_class_unref_uncached_db(gpointer);
CheckInterfacedef(g_type_class_unref_uncached,g_type_class_unref_uncached_db);
extern const gchar * g_type_name_from_class_db(GTypeClass *);
CheckInterfacedef(g_type_name_from_class,g_type_name_from_class_db);
extern void g_object_set_db(gpointer, const gchar *, ...);
CheckInterfacedef(g_object_set,g_object_set_db);
extern void g_signal_emit_valist_db(gpointer, guint, GQuark, va_list);
CheckInterfacedef(g_signal_emit_valist,g_signal_emit_valist_db);
extern GSignalInvocationHint * g_signal_get_invocation_hint_db(gpointer);
CheckInterfacedef(g_signal_get_invocation_hint,g_signal_get_invocation_hint_db);
extern void g_closure_invalidate_db(GClosure *);
CheckInterfacedef(g_closure_invalidate,g_closure_invalidate_db);
extern void g_cclosure_marshal_VOID__FLOAT_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__FLOAT,g_cclosure_marshal_VOID__FLOAT_db);
extern void g_object_weak_unref_db(GObject *, GWeakNotify, gpointer);
CheckInterfacedef(g_object_weak_unref,g_object_weak_unref_db);
extern GParamSpec * g_param_spec_int_db(const gchar *, const gchar *, const gchar *, gint, gint, gint, GParamFlags);
CheckInterfacedef(g_param_spec_int,g_param_spec_int_db);
extern void g_value_set_char_db(GValue *, gchar);
CheckInterfacedef(g_value_set_char,g_value_set_char_db);
extern gpointer g_type_default_interface_ref_db(GType);
CheckInterfacedef(g_type_default_interface_ref,g_type_default_interface_ref_db);
extern GValueArray * g_value_array_sort_db(GValueArray *, GCompareFunc);
CheckInterfacedef(g_value_array_sort,g_value_array_sort_db);
extern void g_cclosure_marshal_VOID__VOID_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__VOID,g_cclosure_marshal_VOID__VOID_db);
extern GClosure * g_cclosure_new_object_db(GCallback, GObject *);
CheckInterfacedef(g_cclosure_new_object,g_cclosure_new_object_db);
extern GType g_type_register_static_db(GType, const gchar *, const GTypeInfo *, GTypeFlags);
CheckInterfacedef(g_type_register_static,g_type_register_static_db);
extern GEnumValue * g_enum_get_value_by_name_db(GEnumClass *, const gchar *);
CheckInterfacedef(g_enum_get_value_by_name,g_enum_get_value_by_name_db);
extern GFlagsValue * g_flags_get_value_by_nick_db(GFlagsClass *, const gchar *);
CheckInterfacedef(g_flags_get_value_by_nick,g_flags_get_value_by_nick_db);
extern guint g_type_depth_db(GType);
CheckInterfacedef(g_type_depth,g_type_depth_db);
extern void g_object_class_install_property_db(GObjectClass *, guint, GParamSpec *);
CheckInterfacedef(g_object_class_install_property,g_object_class_install_property_db);
extern void g_type_plugin_unuse_db(GTypePlugin *);
CheckInterfacedef(g_type_plugin_unuse,g_type_plugin_unuse_db);
extern void g_type_module_unuse_db(GTypeModule *);
CheckInterfacedef(g_type_module_unuse,g_type_module_unuse_db);
extern GParamSpec * g_param_spec_flags_db(const gchar *, const gchar *, const gchar *, GType, guint, GParamFlags);
CheckInterfacedef(g_param_spec_flags,g_param_spec_flags_db);
extern GParamSpec * g_param_spec_char_db(const gchar *, const gchar *, const gchar *, gint8, gint8, gint8, GParamFlags);
CheckInterfacedef(g_param_spec_char,g_param_spec_char_db);
extern void g_closure_remove_invalidate_notifier_db(GClosure *, gpointer, GClosureNotify);
CheckInterfacedef(g_closure_remove_invalidate_notifier,g_closure_remove_invalidate_notifier_db);
extern gint g_value_get_enum_db(const GValue *);
CheckInterfacedef(g_value_get_enum,g_value_get_enum_db);
extern GParamSpec * g_object_interface_find_property_db(gpointer, const gchar *);
CheckInterfacedef(g_object_interface_find_property,g_object_interface_find_property_db);
extern void g_value_copy_db(const GValue *, GValue *);
CheckInterfacedef(g_value_copy,g_value_copy_db);
extern gpointer g_type_get_qdata_db(GType, GQuark);
CheckInterfacedef(g_type_get_qdata,g_type_get_qdata_db);
extern void g_cclosure_marshal_VOID__DOUBLE_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__DOUBLE,g_cclosure_marshal_VOID__DOUBLE_db);
extern gboolean g_value_type_compatible_db(GType, GType);
CheckInterfacedef(g_value_type_compatible,g_value_type_compatible_db);
extern void g_object_set_data_full_db(GObject *, const gchar *, gpointer, GDestroyNotify);
CheckInterfacedef(g_object_set_data_full,g_object_set_data_full_db);
extern guint g_signal_handlers_block_matched_db(gpointer, GSignalMatchType, guint, GQuark, GClosure *, gpointer, gpointer);
CheckInterfacedef(g_signal_handlers_block_matched,g_signal_handlers_block_matched_db);
extern gpointer g_boxed_copy_db(GType, gconstpointer);
CheckInterfacedef(g_boxed_copy,g_boxed_copy_db);
extern const gchar * g_value_get_string_db(const GValue *);
CheckInterfacedef(g_value_get_string,g_value_get_string_db);
extern void g_object_thaw_notify_db(GObject *);
CheckInterfacedef(g_object_thaw_notify,g_object_thaw_notify_db);
extern void g_signal_handler_block_db(gpointer, gulong);
CheckInterfacedef(g_signal_handler_block,g_signal_handler_block_db);
extern void g_type_plugin_complete_type_info_db(GTypePlugin *, GType, GTypeInfo *, GTypeValueTable *);
CheckInterfacedef(g_type_plugin_complete_type_info,g_type_plugin_complete_type_info_db);
extern GTypeInstance * g_type_check_instance_cast_db(GTypeInstance *, GType);
CheckInterfacedef(g_type_check_instance_cast,g_type_check_instance_cast_db);
extern GEnumValue * g_enum_get_value_by_nick_db(GEnumClass *, const gchar *);
CheckInterfacedef(g_enum_get_value_by_nick,g_enum_get_value_by_nick_db);
extern GType g_type_from_name_db(const gchar *);
CheckInterfacedef(g_type_from_name,g_type_from_name_db);
extern gboolean g_signal_accumulator_true_handled_db(GSignalInvocationHint *, GValue *, const GValue *, gpointer);
CheckInterfacedef(g_signal_accumulator_true_handled,g_signal_accumulator_true_handled_db);
extern GType g_type_module_register_enum_db(GTypeModule *, const gchar *, const GEnumValue *);
CheckInterfacedef(g_type_module_register_enum,g_type_module_register_enum_db);
extern void g_closure_unref_db(GClosure *);
CheckInterfacedef(g_closure_unref,g_closure_unref_db);
extern void g_signal_chain_from_overridden_db(const GValue *, GValue *);
CheckInterfacedef(g_signal_chain_from_overridden,g_signal_chain_from_overridden_db);
extern gboolean g_param_value_convert_db(GParamSpec *, const GValue *, GValue *, gboolean);
CheckInterfacedef(g_param_value_convert,g_param_value_convert_db);
extern void g_type_class_add_private_db(gpointer, gsize);
CheckInterfacedef(g_type_class_add_private,g_type_class_add_private_db);
extern gpointer g_type_interface_peek_parent_db(gpointer);
CheckInterfacedef(g_type_interface_peek_parent,g_type_interface_peek_parent_db);
extern void g_type_add_interface_check_db(gpointer, GTypeInterfaceCheckFunc);
CheckInterfacedef(g_type_add_interface_check,g_type_add_interface_check_db);
extern void g_cclosure_marshal_VOID__POINTER_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__POINTER,g_cclosure_marshal_VOID__POINTER_db);
extern void g_cclosure_marshal_VOID__CHAR_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__CHAR,g_cclosure_marshal_VOID__CHAR_db);
extern GParamSpec * g_param_spec_float_db(const gchar *, const gchar *, const gchar *, gfloat, gfloat, gfloat, GParamFlags);
CheckInterfacedef(g_param_spec_float,g_param_spec_float_db);
extern gboolean g_type_is_a_db(GType, GType);
CheckInterfacedef(g_type_is_a,g_type_is_a_db);
extern GParamSpec * g_param_spec_object_db(const gchar *, const gchar *, const gchar *, GType, GParamFlags);
CheckInterfacedef(g_param_spec_object,g_param_spec_object_db);
extern gpointer g_type_class_peek_parent_db(gpointer);
CheckInterfacedef(g_type_class_peek_parent,g_type_class_peek_parent_db);
extern GType g_io_condition_get_type_db(void);
CheckInterfacedef(g_io_condition_get_type,g_io_condition_get_type_db);
extern guchar g_value_get_uchar_db(const GValue *);
CheckInterfacedef(g_value_get_uchar,g_value_get_uchar_db);
extern GParamSpec * g_param_spec_double_db(const gchar *, const gchar *, const gchar *, gdouble, gdouble, gdouble, GParamFlags);
CheckInterfacedef(g_param_spec_double,g_param_spec_double_db);
extern GType g_strv_get_type_db(void);
CheckInterfacedef(g_strv_get_type,g_strv_get_type_db);
extern void g_cclosure_marshal_STRING__OBJECT_POINTER_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_STRING__OBJECT_POINTER,g_cclosure_marshal_STRING__OBJECT_POINTER_db);
extern gulong g_signal_handler_find_db(gpointer, GSignalMatchType, guint, GQuark, GClosure *, gpointer, gpointer);
CheckInterfacedef(g_signal_handler_find,g_signal_handler_find_db);
extern GParamSpec * g_param_spec_ref_db(GParamSpec *);
CheckInterfacedef(g_param_spec_ref,g_param_spec_ref_db);
extern gboolean g_value_transform_db(const GValue *, GValue *);
CheckInterfacedef(g_value_transform,g_value_transform_db);
extern gpointer g_type_class_peek_static_db(GType);
CheckInterfacedef(g_type_class_peek_static,g_type_class_peek_static_db);
extern GObject * g_object_new_valist_db(GType, const gchar *, va_list);
CheckInterfacedef(g_object_new_valist,g_object_new_valist_db);
extern void g_value_unset_db(GValue *);
CheckInterfacedef(g_value_unset,g_value_unset_db);
extern gpointer g_value_dup_boxed_db(const GValue *);
CheckInterfacedef(g_value_dup_boxed,g_value_dup_boxed_db);
extern void g_cclosure_marshal_VOID__STRING_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__STRING,g_cclosure_marshal_VOID__STRING_db);
extern void g_param_spec_sink_db(GParamSpec *);
CheckInterfacedef(g_param_spec_sink,g_param_spec_sink_db);
extern void g_object_run_dispose_db(GObject *);
CheckInterfacedef(g_object_run_dispose,g_object_run_dispose_db);
extern GParamSpec * g_param_spec_override_db(const gchar *, GParamSpec *);
CheckInterfacedef(g_param_spec_override,g_param_spec_override_db);
extern void g_value_set_instance_db(GValue *, gpointer);
CheckInterfacedef(g_value_set_instance,g_value_set_instance_db);
extern gpointer g_value_peek_pointer_db(const GValue *);
CheckInterfacedef(g_value_peek_pointer,g_value_peek_pointer_db);
extern GType g_type_module_register_type_db(GTypeModule *, GType, const gchar *, const GTypeInfo *, GTypeFlags);
CheckInterfacedef(g_type_module_register_type,g_type_module_register_type_db);
extern void g_signal_handlers_destroy_db(gpointer);
CheckInterfacedef(g_signal_handlers_destroy,g_signal_handlers_destroy_db);
extern void g_value_set_boolean_db(GValue *, gboolean);
CheckInterfacedef(g_value_set_boolean,g_value_set_boolean_db);
extern void g_type_plugin_complete_interface_info_db(GTypePlugin *, GType, GType, GInterfaceInfo *);
CheckInterfacedef(g_type_plugin_complete_interface_info,g_type_plugin_complete_interface_info_db);
extern GParamSpec * g_param_spec_get_redirect_target_db(GParamSpec *);
CheckInterfacedef(g_param_spec_get_redirect_target,g_param_spec_get_redirect_target_db);
extern GParamSpec * * g_object_interface_list_properties_db(gpointer, guint *);
CheckInterfacedef(g_object_interface_list_properties,g_object_interface_list_properties_db);
extern gint64 g_value_get_int64_db(const GValue *);
CheckInterfacedef(g_value_get_int64,g_value_get_int64_db);
extern GType g_type_module_register_flags_db(GTypeModule *, const gchar *, const GFlagsValue *);
CheckInterfacedef(g_type_module_register_flags,g_type_module_register_flags_db);
extern void g_cclosure_marshal_BOOLEAN__FLAGS_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_BOOLEAN__FLAGS,g_cclosure_marshal_BOOLEAN__FLAGS_db);
extern gpointer g_param_spec_get_qdata_db(GParamSpec *, GQuark);
CheckInterfacedef(g_param_spec_get_qdata,g_param_spec_get_qdata_db);
extern void g_type_init_db(void);
CheckInterfacedef(g_type_init,g_type_init_db);
extern gulong g_value_get_ulong_db(const GValue *);
CheckInterfacedef(g_value_get_ulong,g_value_get_ulong_db);
extern gchar * g_strdup_value_contents_db(const GValue *);
CheckInterfacedef(g_strdup_value_contents,g_strdup_value_contents_db);
extern guint g_signal_new_valist_db(const gchar *, GType, GSignalFlags, GClosure *, GSignalAccumulator, gpointer, GSignalCMarshaller, GType, guint, va_list);
CheckInterfacedef(g_signal_new_valist,g_signal_new_valist_db);
extern void g_object_disconnect_db(gpointer, const gchar *, ...);
CheckInterfacedef(g_object_disconnect,g_object_disconnect_db);
extern void g_object_add_weak_pointer_db(GObject *, gpointer *);
CheckInterfacedef(g_object_add_weak_pointer,g_object_add_weak_pointer_db);
extern GParamSpec * g_param_spec_param_db(const gchar *, const gchar *, const gchar *, GType, GParamFlags);
CheckInterfacedef(g_param_spec_param,g_param_spec_param_db);
extern void g_signal_stop_emission_by_name_db(gpointer, const gchar *);
CheckInterfacedef(g_signal_stop_emission_by_name,g_signal_stop_emission_by_name_db);
extern GValueArray * g_value_array_sort_with_data_db(GValueArray *, GCompareDataFunc, gpointer);
CheckInterfacedef(g_value_array_sort_with_data,g_value_array_sort_with_data_db);
extern GType g_value_array_get_type_db(void);
CheckInterfacedef(g_value_array_get_type,g_value_array_get_type_db);
extern void g_value_take_string_db(GValue *, gchar *);
CheckInterfacedef(g_value_take_string,g_value_take_string_db);
extern GType g_closure_get_type_db(void);
CheckInterfacedef(g_closure_get_type,g_closure_get_type_db);
extern void g_signal_stop_emission_db(gpointer, guint, GQuark);
CheckInterfacedef(g_signal_stop_emission,g_signal_stop_emission_db);
extern void g_object_notify_db(GObject *, const gchar *);
CheckInterfacedef(g_object_notify,g_object_notify_db);
extern gfloat g_value_get_float_db(const GValue *);
CheckInterfacedef(g_value_get_float,g_value_get_float_db);
extern gchar g_value_get_char_db(const GValue *);
CheckInterfacedef(g_value_get_char,g_value_get_char_db);
extern void g_value_take_boxed_db(GValue *, gconstpointer);
CheckInterfacedef(g_value_take_boxed,g_value_take_boxed_db);
extern void g_cclosure_marshal_VOID__BOOLEAN_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__BOOLEAN,g_cclosure_marshal_VOID__BOOLEAN_db);
extern gulong g_signal_connect_data_db(gpointer, const gchar *, GCallback, gpointer, GClosureNotify, GConnectFlags);
CheckInterfacedef(g_signal_connect_data,g_signal_connect_data_db);
extern void g_object_set_data_db(GObject *, const gchar *, gpointer);
CheckInterfacedef(g_object_set_data,g_object_set_data_db);
extern GType g_type_register_fundamental_db(GType, const gchar *, const GTypeInfo *, const GTypeFundamentalInfo *, GTypeFlags);
CheckInterfacedef(g_type_register_fundamental,g_type_register_fundamental_db);
extern GParamSpec * * g_object_class_list_properties_db(GObjectClass *, guint *);
CheckInterfacedef(g_object_class_list_properties,g_object_class_list_properties_db);
extern void g_cclosure_marshal_VOID__UINT_POINTER_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__UINT_POINTER,g_cclosure_marshal_VOID__UINT_POINTER_db);
extern void g_type_class_unref_db(gpointer);
CheckInterfacedef(g_type_class_unref,g_type_class_unref_db);
extern void g_cclosure_marshal_VOID__BOXED_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__BOXED,g_cclosure_marshal_VOID__BOXED_db);
extern gboolean g_value_type_transformable_db(GType, GType);
CheckInterfacedef(g_value_type_transformable,g_value_type_transformable_db);
extern void g_signal_handler_unblock_db(gpointer, gulong);
CheckInterfacedef(g_signal_handler_unblock,g_signal_handler_unblock_db);
extern GValue * g_value_init_db(GValue *, GType);
CheckInterfacedef(g_value_init,g_value_init_db);
extern gpointer g_object_ref_db(gpointer);
CheckInterfacedef(g_object_ref,g_object_ref_db);
extern void g_object_get_valist_db(GObject *, const gchar *, va_list);
CheckInterfacedef(g_object_get_valist,g_object_get_valist_db);
extern gboolean g_value_get_boolean_db(const GValue *);
CheckInterfacedef(g_value_get_boolean,g_value_get_boolean_db);
extern void g_type_query_db(GType, GTypeQuery *);
CheckInterfacedef(g_type_query,g_type_query_db);
extern void g_type_interface_add_prerequisite_db(GType, GType);
CheckInterfacedef(g_type_interface_add_prerequisite,g_type_interface_add_prerequisite_db);
extern gint g_value_get_int_db(const GValue *);
CheckInterfacedef(g_value_get_int,g_value_get_int_db);
extern void g_cclosure_marshal_VOID__ENUM_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__ENUM,g_cclosure_marshal_VOID__ENUM_db);
extern GType g_type_fundamental_next_db(void);
CheckInterfacedef(g_type_fundamental_next,g_type_fundamental_next_db);
extern gboolean g_type_check_value_db(GValue *);
CheckInterfacedef(g_type_check_value,g_type_check_value_db);
extern gpointer g_value_get_boxed_db(const GValue *);
CheckInterfacedef(g_value_get_boxed,g_value_get_boxed_db);
extern GClosure * g_signal_type_cclosure_new_db(GType, guint);
CheckInterfacedef(g_signal_type_cclosure_new,g_signal_type_cclosure_new_db);
extern void g_value_set_static_boxed_db(GValue *, gconstpointer);
CheckInterfacedef(g_value_set_static_boxed,g_value_set_static_boxed_db);
extern GType g_type_plugin_get_type_db(void);
CheckInterfacedef(g_type_plugin_get_type,g_type_plugin_get_type_db);
extern GType * g_type_interface_prerequisites_db(GType, guint *);
CheckInterfacedef(g_type_interface_prerequisites,g_type_interface_prerequisites_db);
extern void g_boxed_free_db(GType, gpointer);
CheckInterfacedef(g_boxed_free,g_boxed_free_db);
extern GParamSpec * g_param_spec_uint64_db(const gchar *, const gchar *, const gchar *, guint64, guint64, guint64, GParamFlags);
CheckInterfacedef(g_param_spec_uint64,g_param_spec_uint64_db);
extern GType g_type_next_base_db(GType, GType);
CheckInterfacedef(g_type_next_base,g_type_next_base_db);
extern const gchar * g_type_name_from_instance_db(GTypeInstance *);
CheckInterfacedef(g_type_name_from_instance,g_type_name_from_instance_db);
extern const gchar * g_param_spec_get_name_db(GParamSpec *);
CheckInterfacedef(g_param_spec_get_name,g_param_spec_get_name_db);
extern gulong g_signal_add_emission_hook_db(guint, GQuark, GSignalEmissionHook, gpointer, GDestroyNotify);
CheckInterfacedef(g_signal_add_emission_hook,g_signal_add_emission_hook_db);
extern GParamSpec * g_object_class_find_property_db(GObjectClass *, const gchar *);
CheckInterfacedef(g_object_class_find_property,g_object_class_find_property_db);
extern void g_value_set_long_db(GValue *, glong);
CheckInterfacedef(g_value_set_long,g_value_set_long_db);
extern void g_param_spec_pool_remove_db(GParamSpecPool *, GParamSpec *);
CheckInterfacedef(g_param_spec_pool_remove,g_param_spec_pool_remove_db);
extern void g_signal_emitv_db(const GValue *, guint, GQuark, GValue *);
CheckInterfacedef(g_signal_emitv,g_signal_emitv_db);
extern GType g_type_module_get_type_db(void);
CheckInterfacedef(g_type_module_get_type,g_type_module_get_type_db);
extern GObject * g_value_dup_object_db(const GValue *);
CheckInterfacedef(g_value_dup_object,g_value_dup_object_db);
extern void g_flags_complete_type_info_db(GType, GTypeInfo *, const GFlagsValue *);
CheckInterfacedef(g_flags_complete_type_info,g_flags_complete_type_info_db);
extern gulong g_signal_connect_closure_by_id_db(gpointer, guint, GQuark, GClosure *, gboolean);
CheckInterfacedef(g_signal_connect_closure_by_id,g_signal_connect_closure_by_id_db);
extern GType g_value_get_type_db(void);
CheckInterfacedef(g_value_get_type,g_value_get_type_db);
extern gulong g_signal_connect_closure_db(gpointer, const gchar *, GClosure *, gboolean);
CheckInterfacedef(g_signal_connect_closure,g_signal_connect_closure_db);
extern gulong g_signal_connect_object_db(gpointer, const gchar *, GCallback, gpointer, GConnectFlags);
CheckInterfacedef(g_signal_connect_object,g_signal_connect_object_db);
extern void g_value_take_param_db(GValue *, GParamSpec *);
CheckInterfacedef(g_value_take_param,g_value_take_param_db);
extern void g_value_set_ulong_db(GValue *, gulong);
CheckInterfacedef(g_value_set_ulong,g_value_set_ulong_db);
extern void g_value_register_transform_func_db(GType, GType, GValueTransform);
CheckInterfacedef(g_value_register_transform_func,g_value_register_transform_func_db);
extern GType g_type_parent_db(GType);
CheckInterfacedef(g_type_parent,g_type_parent_db);
extern void g_type_plugin_use_db(GTypePlugin *);
CheckInterfacedef(g_type_plugin_use,g_type_plugin_use_db);
extern GType g_type_register_dynamic_db(GType, const gchar *, GTypePlugin *, GTypeFlags);
CheckInterfacedef(g_type_register_dynamic,g_type_register_dynamic_db);
extern GType g_pointer_type_register_static_db(const gchar *);
CheckInterfacedef(g_pointer_type_register_static,g_pointer_type_register_static_db);
extern void g_closure_add_finalize_notifier_db(GClosure *, gpointer, GClosureNotify);
CheckInterfacedef(g_closure_add_finalize_notifier,g_closure_add_finalize_notifier_db);
extern GFlagsValue * g_flags_get_value_by_name_db(GFlagsClass *, const gchar *);
CheckInterfacedef(g_flags_get_value_by_name,g_flags_get_value_by_name_db);
extern void g_cclosure_marshal_VOID__PARAM_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__PARAM,g_cclosure_marshal_VOID__PARAM_db);
extern gboolean g_signal_handler_is_connected_db(gpointer, gulong);
CheckInterfacedef(g_signal_handler_is_connected,g_signal_handler_is_connected_db);
extern void g_closure_set_meta_marshal_db(GClosure *, gpointer, GClosureMarshal);
CheckInterfacedef(g_closure_set_meta_marshal,g_closure_set_meta_marshal_db);
extern void g_value_set_uchar_db(GValue *, guchar);
CheckInterfacedef(g_value_set_uchar,g_value_set_uchar_db);
extern GValueArray * g_value_array_prepend_db(GValueArray *, const GValue *);
CheckInterfacedef(g_value_array_prepend,g_value_array_prepend_db);
extern void g_source_set_closure_db(GSource *, GClosure *);
CheckInterfacedef(g_source_set_closure,g_source_set_closure_db);
extern GParamSpec * * g_param_spec_pool_list_db(GParamSpecPool *, GType, guint *);
CheckInterfacedef(g_param_spec_pool_list,g_param_spec_pool_list_db);
extern GQuark g_type_qname_db(GType);
CheckInterfacedef(g_type_qname,g_type_qname_db);
extern gboolean g_type_module_use_db(GTypeModule *);
CheckInterfacedef(g_type_module_use,g_type_module_use_db);
extern void g_type_add_interface_dynamic_db(GType, GType, GTypePlugin *);
CheckInterfacedef(g_type_add_interface_dynamic,g_type_add_interface_dynamic_db);
extern gpointer g_type_class_ref_db(GType);
CheckInterfacedef(g_type_class_ref,g_type_class_ref_db);
extern void g_closure_remove_finalize_notifier_db(GClosure *, gpointer, GClosureNotify);
CheckInterfacedef(g_closure_remove_finalize_notifier,g_closure_remove_finalize_notifier_db);
extern gpointer g_object_connect_db(gpointer, const gchar *, ...);
CheckInterfacedef(g_object_connect,g_object_connect_db);
extern void g_type_remove_class_cache_func_db(gpointer, GTypeClassCacheFunc);
CheckInterfacedef(g_type_remove_class_cache_func,g_type_remove_class_cache_func_db);
extern gpointer g_object_newv_db(GType, guint, GParameter *);
CheckInterfacedef(g_object_newv,g_object_newv_db);
extern GValueArray * g_value_array_insert_db(GValueArray *, guint, const GValue *);
CheckInterfacedef(g_value_array_insert,g_value_array_insert_db);
extern gboolean g_signal_has_handler_pending_db(gpointer, guint, GQuark, gboolean);
CheckInterfacedef(g_signal_has_handler_pending,g_signal_has_handler_pending_db);
extern guint g_signal_lookup_db(const gchar *, GType);
CheckInterfacedef(g_signal_lookup,g_signal_lookup_db);
extern void g_type_free_instance_db(GTypeInstance *);
CheckInterfacedef(g_type_free_instance,g_type_free_instance_db);
extern void g_closure_invoke_db(GClosure *, GValue *, guint, const GValue *, gpointer);
CheckInterfacedef(g_closure_invoke,g_closure_invoke_db);
extern GType g_type_fundamental_db(GType);
CheckInterfacedef(g_type_fundamental,g_type_fundamental_db);
extern GTypeValueTable * g_type_value_table_peek_db(GType);
CheckInterfacedef(g_type_value_table_peek,g_type_value_table_peek_db);
extern GList * g_param_spec_pool_list_owned_db(GParamSpecPool *, GType);
CheckInterfacedef(g_param_spec_pool_list_owned,g_param_spec_pool_list_owned_db);
extern void g_value_set_enum_db(GValue *, gint);
CheckInterfacedef(g_value_set_enum,g_value_set_enum_db);
extern gchar * g_value_dup_string_db(const GValue *);
CheckInterfacedef(g_value_dup_string,g_value_dup_string_db);
extern void g_signal_handler_disconnect_db(gpointer, gulong);
CheckInterfacedef(g_signal_handler_disconnect,g_signal_handler_disconnect_db);
extern GType g_param_type_register_static_db(const gchar *, const GParamSpecTypeInfo *);
CheckInterfacedef(g_param_type_register_static,g_param_type_register_static_db);
extern void g_object_remove_weak_pointer_db(GObject *, gpointer *);
CheckInterfacedef(g_object_remove_weak_pointer,g_object_remove_weak_pointer_db);
extern glong g_value_get_long_db(const GValue *);
CheckInterfacedef(g_value_get_long,g_value_get_long_db);
extern gboolean g_type_check_is_value_type_db(GType);
CheckInterfacedef(g_type_check_is_value_type,g_type_check_is_value_type_db);
extern void g_value_set_double_db(GValue *, gdouble);
CheckInterfacedef(g_value_set_double,g_value_set_double_db);
extern void g_value_set_static_string_db(GValue *, const gchar *);
CheckInterfacedef(g_value_set_static_string,g_value_set_static_string_db);
extern const gchar * g_param_spec_get_nick_db(GParamSpec *);
CheckInterfacedef(g_param_spec_get_nick,g_param_spec_get_nick_db);
extern GClosure * g_cclosure_new_db(GCallback, gpointer, GClosureNotify);
CheckInterfacedef(g_cclosure_new,g_cclosure_new_db);
extern guint g_value_get_uint_db(const GValue *);
CheckInterfacedef(g_value_get_uint,g_value_get_uint_db);
extern GClosure * g_cclosure_new_swap_db(GCallback, gpointer, GClosureNotify);
CheckInterfacedef(g_cclosure_new_swap,g_cclosure_new_swap_db);
extern GValue * g_value_reset_db(GValue *);
CheckInterfacedef(g_value_reset,g_value_reset_db);
extern void g_object_set_qdata_db(GObject *, GQuark, gpointer);
CheckInterfacedef(g_object_set_qdata,g_object_set_qdata_db);
extern gpointer g_object_get_data_db(GObject *, const gchar *);
CheckInterfacedef(g_object_get_data,g_object_get_data_db);
extern gpointer g_object_get_qdata_db(GObject *, GQuark);
CheckInterfacedef(g_object_get_qdata,g_object_get_qdata_db);
extern void g_object_set_valist_db(GObject *, const gchar *, va_list);
CheckInterfacedef(g_object_set_valist,g_object_set_valist_db);
extern void g_object_freeze_notify_db(GObject *);
CheckInterfacedef(g_object_freeze_notify,g_object_freeze_notify_db);
extern void g_value_set_pointer_db(GValue *, gpointer);
CheckInterfacedef(g_value_set_pointer,g_value_set_pointer_db);
extern gpointer g_object_steal_data_db(GObject *, const gchar *);
CheckInterfacedef(g_object_steal_data,g_object_steal_data_db);
extern void g_object_interface_install_property_db(gpointer, GParamSpec *);
CheckInterfacedef(g_object_interface_install_property,g_object_interface_install_property_db);
extern void g_object_watch_closure_db(GObject *, GClosure *);
CheckInterfacedef(g_object_watch_closure,g_object_watch_closure_db);
extern void g_value_take_object_db(GValue *, gpointer);
CheckInterfacedef(g_value_take_object,g_value_take_object_db);
extern GValueArray * g_value_array_new_db(guint);
CheckInterfacedef(g_value_array_new,g_value_array_new_db);
extern GParamSpec * g_value_get_param_db(const GValue *);
CheckInterfacedef(g_value_get_param,g_value_get_param_db);
extern void g_param_value_set_default_db(GParamSpec *, GValue *);
CheckInterfacedef(g_param_value_set_default,g_param_value_set_default_db);
extern void g_closure_add_marshal_guards_db(GClosure *, gpointer, GClosureNotify, gpointer, GClosureNotify);
CheckInterfacedef(g_closure_add_marshal_guards,g_closure_add_marshal_guards_db);
extern gdouble g_value_get_double_db(const GValue *);
CheckInterfacedef(g_value_get_double,g_value_get_double_db);
extern GValue * g_value_array_get_nth_db(GValueArray *, guint);
CheckInterfacedef(g_value_array_get_nth,g_value_array_get_nth_db);
extern GTypePlugin * g_type_interface_get_plugin_db(GType, GType);
CheckInterfacedef(g_type_interface_get_plugin,g_type_interface_get_plugin_db);
extern void g_object_weak_ref_db(GObject *, GWeakNotify, gpointer);
CheckInterfacedef(g_object_weak_ref,g_object_weak_ref_db);
extern GType g_gstring_get_type_db(void);
CheckInterfacedef(g_gstring_get_type,g_gstring_get_type_db);
extern void g_value_set_flags_db(GValue *, guint);
CheckInterfacedef(g_value_set_flags,g_value_set_flags_db);
extern void g_object_get_property_db(GObject *, const gchar *, GValue *);
CheckInterfacedef(g_object_get_property,g_object_get_property_db);
extern GParamSpec * g_param_spec_unichar_db(const gchar *, const gchar *, const gchar *, gunichar, GParamFlags);
CheckInterfacedef(g_param_spec_unichar,g_param_spec_unichar_db);
extern void g_type_default_interface_unref_db(gpointer);
CheckInterfacedef(g_type_default_interface_unref,g_type_default_interface_unref_db);
extern GParamSpec * g_param_spec_uchar_db(const gchar *, const gchar *, const gchar *, guint8, guint8, guint8, GParamFlags);
CheckInterfacedef(g_param_spec_uchar,g_param_spec_uchar_db);
extern void g_object_set_qdata_full_db(GObject *, GQuark, gpointer, GDestroyNotify);
CheckInterfacedef(g_object_set_qdata_full,g_object_set_qdata_full_db);
extern void g_type_set_qdata_db(GType, GQuark, gpointer);
CheckInterfacedef(g_type_set_qdata,g_type_set_qdata_db);
extern void g_value_set_string_db(GValue *, const gchar *);
CheckInterfacedef(g_value_set_string,g_value_set_string_db);
extern gpointer g_type_class_peek_db(GType);
CheckInterfacedef(g_type_class_peek,g_type_class_peek_db);
extern void g_value_set_boxed_db(GValue *, gconstpointer);
CheckInterfacedef(g_value_set_boxed,g_value_set_boxed_db);
extern void g_type_module_set_name_db(GTypeModule *, const gchar *);
CheckInterfacedef(g_type_module_set_name,g_type_module_set_name_db);
extern GClosure * g_closure_ref_db(GClosure *);
CheckInterfacedef(g_closure_ref,g_closure_ref_db);
extern guint g_signal_handlers_unblock_matched_db(gpointer, GSignalMatchType, guint, GQuark, GClosure *, gpointer, gpointer);
CheckInterfacedef(g_signal_handlers_unblock_matched,g_signal_handlers_unblock_matched_db);
extern GParamSpec * g_param_spec_value_array_db(const gchar *, const gchar *, const gchar *, GParamSpec *, GParamFlags);
CheckInterfacedef(g_param_spec_value_array,g_param_spec_value_array_db);
extern GParamSpec * g_param_spec_enum_db(const gchar *, const gchar *, const gchar *, GType, gint, GParamFlags);
CheckInterfacedef(g_param_spec_enum,g_param_spec_enum_db);
extern void g_param_spec_set_qdata_full_db(GParamSpec *, GQuark, gpointer, GDestroyNotify);
CheckInterfacedef(g_param_spec_set_qdata_full,g_param_spec_set_qdata_full_db);
extern GParamSpec * g_param_spec_ulong_db(const gchar *, const gchar *, const gchar *, gulong, gulong, gulong, GParamFlags);
CheckInterfacedef(g_param_spec_ulong,g_param_spec_ulong_db);
extern guint g_value_get_flags_db(const GValue *);
CheckInterfacedef(g_value_get_flags,g_value_get_flags_db);
extern void g_type_module_add_interface_db(GTypeModule *, GType, GType, const GInterfaceInfo *);
CheckInterfacedef(g_type_module_add_interface,g_type_module_add_interface_db);
extern gboolean g_type_check_instance_db(GTypeInstance *);
CheckInterfacedef(g_type_check_instance,g_type_check_instance_db);
extern GValueArray * g_value_array_append_db(GValueArray *, const GValue *);
CheckInterfacedef(g_value_array_append,g_value_array_append_db);
extern void g_type_add_interface_static_db(GType, GType, const GInterfaceInfo *);
CheckInterfacedef(g_type_add_interface_static,g_type_add_interface_static_db);
extern gpointer g_param_spec_steal_qdata_db(GParamSpec *, GQuark);
CheckInterfacedef(g_param_spec_steal_qdata,g_param_spec_steal_qdata_db);
extern gboolean g_type_check_class_is_a_db(GTypeClass *, GType);
CheckInterfacedef(g_type_check_class_is_a,g_type_check_class_is_a_db);
extern const gchar * g_param_spec_get_blurb_db(GParamSpec *);
CheckInterfacedef(g_param_spec_get_blurb,g_param_spec_get_blurb_db);
extern void g_value_set_uint_db(GValue *, guint);
CheckInterfacedef(g_value_set_uint,g_value_set_uint_db);
extern GParamSpecPool * g_param_spec_pool_new_db(gboolean);
CheckInterfacedef(g_param_spec_pool_new,g_param_spec_pool_new_db);
extern const gchar * g_signal_name_db(guint);
CheckInterfacedef(g_signal_name,g_signal_name_db);
extern GParamSpec * g_param_spec_int64_db(const gchar *, const gchar *, const gchar *, gint64, gint64, gint64, GParamFlags);
CheckInterfacedef(g_param_spec_int64,g_param_spec_int64_db);
extern guint g_signal_newv_db(const gchar *, GType, GSignalFlags, GClosure *, GSignalAccumulator, gpointer, GSignalCMarshaller, GType, guint, GType *);
CheckInterfacedef(g_signal_newv,g_signal_newv_db);
extern guint g_signal_new_db(const gchar *, GType, GSignalFlags, guint, GSignalAccumulator, gpointer, GSignalCMarshaller, GType, guint, ...);
CheckInterfacedef(g_signal_new,g_signal_new_db);
extern GType g_boxed_type_register_static_db(const gchar *, GBoxedCopyFunc, GBoxedFreeFunc);
CheckInterfacedef(g_boxed_type_register_static,g_boxed_type_register_static_db);
extern void g_value_array_free_db(GValueArray *);
CheckInterfacedef(g_value_array_free,g_value_array_free_db);
extern void g_cclosure_marshal_VOID__ULONG_db(GClosure *, GValue *, guint, const GValue *, gpointer, gpointer);
CheckInterfacedef(g_cclosure_marshal_VOID__ULONG,g_cclosure_marshal_VOID__ULONG_db);
extern void g_signal_remove_emission_hook_db(guint, gulong);
CheckInterfacedef(g_signal_remove_emission_hook,g_signal_remove_emission_hook_db);
extern void g_enum_complete_type_info_db(GType, GTypeInfo *, const GEnumValue *);
CheckInterfacedef(g_enum_complete_type_info,g_enum_complete_type_info_db);
extern gpointer g_value_get_object_db(const GValue *);
CheckInterfacedef(g_value_get_object,g_value_get_object_db);
extern gpointer g_type_default_interface_peek_db(GType);
CheckInterfacedef(g_type_default_interface_peek,g_type_default_interface_peek_db);
extern void g_signal_query_db(guint, GSignalQuery *);
CheckInterfacedef(g_signal_query,g_signal_query_db);
extern gboolean g_type_check_instance_is_a_db(GTypeInstance *, GType);
CheckInterfacedef(g_type_check_instance_is_a,g_type_check_instance_is_a_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/glib-object.h\n\n",pcnt,cnt);
return cnt;
#endif

}
