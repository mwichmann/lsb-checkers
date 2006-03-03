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
	CompareConstant(G_SIGNAL_FLAGS_MASK,0x7f,6258,architecture)
#else
Msg( "Error: Constant not found: G_SIGNAL_FLAGS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef G_SIGNAL_MATCH_MASK
	CompareConstant(G_SIGNAL_MATCH_MASK,0x3f,6259,architecture)
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

#if __i386__
CheckTypeSize(struct _GObject,12, 11833, 2)
CheckMemberSize(struct _GObject,ref_count,4,2,41991)
CheckOffset(struct _GObject,ref_count,4,2,41991)
CheckMemberSize(struct _GObject,qdata,4,2,41992)
CheckOffset(struct _GObject,qdata,8,2,41992)
#elif __x86_64__
CheckTypeSize(struct _GObject,24, 11833, 11)
CheckMemberSize(struct _GObject,ref_count,4,11,41991)
CheckOffset(struct _GObject,ref_count,8,11,41991)
CheckMemberSize(struct _GObject,qdata,8,11,41992)
CheckOffset(struct _GObject,qdata,16,11,41992)
#elif __ia64__
CheckTypeSize(struct _GObject,24, 11833, 3)
CheckMemberSize(struct _GObject,ref_count,4,3,41991)
CheckOffset(struct _GObject,ref_count,8,3,41991)
CheckMemberSize(struct _GObject,qdata,8,3,41992)
CheckOffset(struct _GObject,qdata,16,3,41992)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GObject,12, 11833, 6)
CheckMemberSize(struct _GObject,ref_count,4,6,41991)
CheckOffset(struct _GObject,ref_count,4,6,41991)
CheckMemberSize(struct _GObject,qdata,4,6,41992)
CheckOffset(struct _GObject,qdata,8,6,41992)
#elif __powerpc64__
CheckTypeSize(struct _GObject,24, 11833, 9)
CheckMemberSize(struct _GObject,ref_count,4,9,41991)
CheckOffset(struct _GObject,ref_count,8,9,41991)
CheckMemberSize(struct _GObject,qdata,8,9,41992)
CheckOffset(struct _GObject,qdata,16,9,41992)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GObject,12, 11833, 10)
CheckMemberSize(struct _GObject,ref_count,4,10,41991)
CheckOffset(struct _GObject,ref_count,4,10,41991)
CheckMemberSize(struct _GObject,qdata,4,10,41992)
CheckOffset(struct _GObject,qdata,8,10,41992)
#elif __s390x__
CheckTypeSize(struct _GObject,24, 11833, 12)
CheckMemberSize(struct _GObject,ref_count,4,12,41991)
CheckOffset(struct _GObject,ref_count,8,12,41991)
CheckMemberSize(struct _GObject,qdata,8,12,41992)
CheckOffset(struct _GObject,qdata,16,12,41992)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11833,0);
Msg("Find size of _GObject (11833)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeInstance,4, 11834, 2)
Msg("Missing member data for _GTypeInstance on IA32\n");
CheckOffset(struct _GTypeInstance,g_class,0,2,41989)
#elif __x86_64__
CheckTypeSize(struct _GTypeInstance,8, 11834, 11)
Msg("Missing member data for _GTypeInstance on x86-64\n");
CheckOffset(struct _GTypeInstance,g_class,0,11,41989)
#elif __ia64__
CheckTypeSize(struct _GTypeInstance,8, 11834, 3)
Msg("Missing member data for _GTypeInstance on IA64\n");
CheckOffset(struct _GTypeInstance,g_class,0,3,41989)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeInstance,4, 11834, 6)
Msg("Missing member data for _GTypeInstance on PPC32\n");
CheckOffset(struct _GTypeInstance,g_class,0,6,41989)
#elif __powerpc64__
CheckTypeSize(struct _GTypeInstance,8, 11834, 9)
Msg("Missing member data for _GTypeInstance on PPC64\n");
CheckOffset(struct _GTypeInstance,g_class,0,9,41989)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeInstance,4, 11834, 10)
Msg("Missing member data for _GTypeInstance on S390\n");
CheckOffset(struct _GTypeInstance,g_class,0,10,41989)
#elif __s390x__
CheckTypeSize(struct _GTypeInstance,8, 11834, 12)
Msg("Missing member data for _GTypeInstance on S390X\n");
CheckOffset(struct _GTypeInstance,g_class,0,12,41989)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11834,0);
Msg("Find size of _GTypeInstance (11834)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeClass,4, 11835, 2)
Msg("Missing member data for _GTypeClass on IA32\n");
CheckOffset(struct _GTypeClass,g_type,0,2,41988)
#elif __x86_64__
CheckTypeSize(struct _GTypeClass,8, 11835, 11)
Msg("Missing member data for _GTypeClass on x86-64\n");
CheckOffset(struct _GTypeClass,g_type,0,11,41988)
#elif __ia64__
CheckTypeSize(struct _GTypeClass,8, 11835, 3)
Msg("Missing member data for _GTypeClass on IA64\n");
CheckOffset(struct _GTypeClass,g_type,0,3,41988)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeClass,4, 11835, 6)
Msg("Missing member data for _GTypeClass on PPC32\n");
CheckOffset(struct _GTypeClass,g_type,0,6,41988)
#elif __powerpc64__
CheckTypeSize(struct _GTypeClass,8, 11835, 9)
Msg("Missing member data for _GTypeClass on PPC64\n");
CheckOffset(struct _GTypeClass,g_type,0,9,41988)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeClass,4, 11835, 10)
Msg("Missing member data for _GTypeClass on S390\n");
CheckOffset(struct _GTypeClass,g_type,0,10,41988)
#elif __s390x__
CheckTypeSize(struct _GTypeClass,8, 11835, 12)
Msg("Missing member data for _GTypeClass on S390X\n");
CheckOffset(struct _GTypeClass,g_type,0,12,41988)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11835,0);
Msg("Find size of _GTypeClass (11835)\n");
#endif

#if __i386__
CheckTypeSize(GType,4, 11836, 2)
#elif __x86_64__
CheckTypeSize(GType,8, 11836, 11)
#elif __ia64__
CheckTypeSize(GType,8, 11836, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GType,4, 11836, 6)
#elif __powerpc64__
CheckTypeSize(GType,8, 11836, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GType,4, 11836, 10)
#elif __s390x__
CheckTypeSize(GType,8, 11836, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11836,0);
Msg("Find size of GType (11836)\n");
#endif

#if __i386__
CheckTypeSize(GTypeClass,4, 11837, 2)
#elif __x86_64__
CheckTypeSize(GTypeClass,8, 11837, 11)
#elif __ia64__
CheckTypeSize(GTypeClass,8, 11837, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeClass,4, 11837, 6)
#elif __powerpc64__
CheckTypeSize(GTypeClass,8, 11837, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeClass,4, 11837, 10)
#elif __s390x__
CheckTypeSize(GTypeClass,8, 11837, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11837,0);
Msg("Find size of GTypeClass (11837)\n");
#endif

#if __i386__
CheckTypeSize(GTypeClass *,4, 11838, 2)
#elif __x86_64__
CheckTypeSize(GTypeClass *,8, 11838, 11)
#elif __ia64__
CheckTypeSize(GTypeClass *,8, 11838, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeClass *,4, 11838, 6)
#elif __powerpc64__
CheckTypeSize(GTypeClass *,8, 11838, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeClass *,4, 11838, 10)
#elif __s390x__
CheckTypeSize(GTypeClass *,8, 11838, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11838,0);
Msg("Find size of GTypeClass * (11838)\n");
#endif

#if __i386__
CheckTypeSize(GTypeInstance,4, 11839, 2)
#elif __x86_64__
CheckTypeSize(GTypeInstance,8, 11839, 11)
#elif __ia64__
CheckTypeSize(GTypeInstance,8, 11839, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeInstance,4, 11839, 6)
#elif __powerpc64__
CheckTypeSize(GTypeInstance,8, 11839, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeInstance,4, 11839, 10)
#elif __s390x__
CheckTypeSize(GTypeInstance,8, 11839, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11839,0);
Msg("Find size of GTypeInstance (11839)\n");
#endif

#if __i386__
CheckTypeSize(GObject,12, 11840, 2)
#elif __x86_64__
CheckTypeSize(GObject,24, 11840, 11)
#elif __ia64__
CheckTypeSize(GObject,24, 11840, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObject,12, 11840, 6)
#elif __powerpc64__
CheckTypeSize(GObject,24, 11840, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObject,12, 11840, 10)
#elif __s390x__
CheckTypeSize(GObject,24, 11840, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11840,0);
Msg("Find size of GObject (11840)\n");
#endif

#if __i386__
CheckTypeSize(GObject *,4, 11841, 2)
#elif __x86_64__
CheckTypeSize(GObject *,8, 11841, 11)
#elif __ia64__
CheckTypeSize(GObject *,8, 11841, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObject *,4, 11841, 6)
#elif __powerpc64__
CheckTypeSize(GObject *,8, 11841, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObject *,4, 11841, 10)
#elif __s390x__
CheckTypeSize(GObject *,8, 11841, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11841,0);
Msg("Find size of GObject * (11841)\n");
#endif

#if __i386__
CheckTypeSize(struct _GValue,20, 11842, 2)
CheckMemberSize(struct _GValue,data,16,2,42003)
CheckOffset(struct _GValue,data,4,2,42003)
#elif __x86_64__
CheckTypeSize(struct _GValue,24, 11842, 11)
CheckMemberSize(struct _GValue,data,16,11,42003)
CheckOffset(struct _GValue,data,8,11,42003)
#elif __ia64__
CheckTypeSize(struct _GValue,24, 11842, 3)
CheckMemberSize(struct _GValue,data,16,3,42003)
CheckOffset(struct _GValue,data,8,3,42003)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GValue,24, 11842, 6)
CheckMemberSize(struct _GValue,data,16,6,42003)
CheckOffset(struct _GValue,data,8,6,42003)
#elif __powerpc64__
CheckTypeSize(struct _GValue,24, 11842, 9)
CheckMemberSize(struct _GValue,data,16,9,42003)
CheckOffset(struct _GValue,data,8,9,42003)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GValue,24, 11842, 10)
CheckMemberSize(struct _GValue,data,16,10,42003)
CheckOffset(struct _GValue,data,8,10,42003)
#elif __s390x__
CheckTypeSize(struct _GValue,24, 11842, 12)
CheckMemberSize(struct _GValue,data,16,12,42003)
CheckOffset(struct _GValue,data,8,12,42003)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11842,0);
Msg("Find size of _GValue (11842)\n");
#endif

#if __i386__
CheckTypeSize(gfloat,4, 11843, 2)
#elif __x86_64__
CheckTypeSize(gfloat,4, 11843, 11)
#elif __ia64__
CheckTypeSize(gfloat,4, 11843, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gfloat,4, 11843, 6)
#elif __powerpc64__
CheckTypeSize(gfloat,4, 11843, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gfloat,4, 11843, 10)
#elif __s390x__
CheckTypeSize(gfloat,4, 11843, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11843,0);
Msg("Find size of gfloat (11843)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11844,0);
Msg("Find size of anon-glib-2.0/glib-object.h-12 (11844)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GValue,20, 11846, 2)
#elif __x86_64__
CheckTypeSize(GValue,24, 11846, 11)
#elif __ia64__
CheckTypeSize(GValue,24, 11846, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GValue,24, 11846, 6)
#elif __powerpc64__
CheckTypeSize(GValue,24, 11846, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GValue,24, 11846, 10)
#elif __s390x__
CheckTypeSize(GValue,24, 11846, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11846,0);
Msg("Find size of GValue (11846)\n");
#endif

#if __i386__
CheckTypeSize(const GValue,20, 11847, 2)
#elif __x86_64__
CheckTypeSize(const GValue,24, 11847, 11)
#elif __ia64__
CheckTypeSize(const GValue,24, 11847, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GValue,24, 11847, 6)
#elif __powerpc64__
CheckTypeSize(const GValue,24, 11847, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GValue,24, 11847, 10)
#elif __s390x__
CheckTypeSize(const GValue,24, 11847, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11847,0);
Msg("Find size of const GValue (11847)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11848,0);
Msg("Find size of const GValue * (11848)\n");
#endif

#if __i386__
CheckTypeSize(GValue *,4, 11849, 2)
#elif __x86_64__
CheckTypeSize(GValue *,8, 11849, 11)
#elif __ia64__
CheckTypeSize(GValue *,8, 11849, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GValue *,4, 11849, 6)
#elif __powerpc64__
CheckTypeSize(GValue *,8, 11849, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GValue *,4, 11849, 10)
#elif __s390x__
CheckTypeSize(GValue *,8, 11849, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11849,0);
Msg("Find size of GValue * (11849)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpec,40, 11850, 2)
CheckMemberSize(struct _GParamSpec,name,4,2,42005)
CheckOffset(struct _GParamSpec,name,4,2,42005)
CheckMemberSize(struct _GParamSpec,flags,4,2,42012)
CheckOffset(struct _GParamSpec,flags,8,2,42012)
CheckMemberSize(struct _GParamSpec,value_type,4,2,42013)
CheckOffset(struct _GParamSpec,value_type,12,2,42013)
CheckMemberSize(struct _GParamSpec,owner_type,4,2,42014)
CheckOffset(struct _GParamSpec,owner_type,16,2,42014)
CheckMemberSize(struct _GParamSpec,_nick,4,2,42015)
CheckOffset(struct _GParamSpec,_nick,20,2,42015)
CheckMemberSize(struct _GParamSpec,_blurb,4,2,42016)
CheckOffset(struct _GParamSpec,_blurb,24,2,42016)
CheckMemberSize(struct _GParamSpec,qdata,4,2,42017)
CheckOffset(struct _GParamSpec,qdata,28,2,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,2,42018)
CheckOffset(struct _GParamSpec,ref_count,32,2,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,2,42019)
CheckOffset(struct _GParamSpec,param_id,36,2,42019)
#elif __x86_64__
CheckTypeSize(struct _GParamSpec,72, 11850, 11)
CheckMemberSize(struct _GParamSpec,name,8,11,42005)
CheckOffset(struct _GParamSpec,name,8,11,42005)
CheckMemberSize(struct _GParamSpec,flags,4,11,42012)
CheckOffset(struct _GParamSpec,flags,16,11,42012)
CheckMemberSize(struct _GParamSpec,value_type,8,11,42013)
CheckOffset(struct _GParamSpec,value_type,24,11,42013)
CheckMemberSize(struct _GParamSpec,owner_type,8,11,42014)
CheckOffset(struct _GParamSpec,owner_type,32,11,42014)
CheckMemberSize(struct _GParamSpec,_nick,8,11,42015)
CheckOffset(struct _GParamSpec,_nick,40,11,42015)
CheckMemberSize(struct _GParamSpec,_blurb,8,11,42016)
CheckOffset(struct _GParamSpec,_blurb,48,11,42016)
CheckMemberSize(struct _GParamSpec,qdata,8,11,42017)
CheckOffset(struct _GParamSpec,qdata,56,11,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,11,42018)
CheckOffset(struct _GParamSpec,ref_count,64,11,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,11,42019)
CheckOffset(struct _GParamSpec,param_id,68,11,42019)
#elif __ia64__
CheckTypeSize(struct _GParamSpec,72, 11850, 3)
CheckMemberSize(struct _GParamSpec,name,8,3,42005)
CheckOffset(struct _GParamSpec,name,8,3,42005)
CheckMemberSize(struct _GParamSpec,flags,4,3,42012)
CheckOffset(struct _GParamSpec,flags,16,3,42012)
CheckMemberSize(struct _GParamSpec,value_type,8,3,42013)
CheckOffset(struct _GParamSpec,value_type,24,3,42013)
CheckMemberSize(struct _GParamSpec,owner_type,8,3,42014)
CheckOffset(struct _GParamSpec,owner_type,32,3,42014)
CheckMemberSize(struct _GParamSpec,_nick,8,3,42015)
CheckOffset(struct _GParamSpec,_nick,40,3,42015)
CheckMemberSize(struct _GParamSpec,_blurb,8,3,42016)
CheckOffset(struct _GParamSpec,_blurb,48,3,42016)
CheckMemberSize(struct _GParamSpec,qdata,8,3,42017)
CheckOffset(struct _GParamSpec,qdata,56,3,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,3,42018)
CheckOffset(struct _GParamSpec,ref_count,64,3,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,3,42019)
CheckOffset(struct _GParamSpec,param_id,68,3,42019)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpec,40, 11850, 6)
CheckMemberSize(struct _GParamSpec,name,4,6,42005)
CheckOffset(struct _GParamSpec,name,4,6,42005)
CheckMemberSize(struct _GParamSpec,flags,4,6,42012)
CheckOffset(struct _GParamSpec,flags,8,6,42012)
CheckMemberSize(struct _GParamSpec,value_type,4,6,42013)
CheckOffset(struct _GParamSpec,value_type,12,6,42013)
CheckMemberSize(struct _GParamSpec,owner_type,4,6,42014)
CheckOffset(struct _GParamSpec,owner_type,16,6,42014)
CheckMemberSize(struct _GParamSpec,_nick,4,6,42015)
CheckOffset(struct _GParamSpec,_nick,20,6,42015)
CheckMemberSize(struct _GParamSpec,_blurb,4,6,42016)
CheckOffset(struct _GParamSpec,_blurb,24,6,42016)
CheckMemberSize(struct _GParamSpec,qdata,4,6,42017)
CheckOffset(struct _GParamSpec,qdata,28,6,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,6,42018)
CheckOffset(struct _GParamSpec,ref_count,32,6,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,6,42019)
CheckOffset(struct _GParamSpec,param_id,36,6,42019)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpec,72, 11850, 9)
CheckMemberSize(struct _GParamSpec,name,8,9,42005)
CheckOffset(struct _GParamSpec,name,8,9,42005)
CheckMemberSize(struct _GParamSpec,flags,4,9,42012)
CheckOffset(struct _GParamSpec,flags,16,9,42012)
CheckMemberSize(struct _GParamSpec,value_type,8,9,42013)
CheckOffset(struct _GParamSpec,value_type,24,9,42013)
CheckMemberSize(struct _GParamSpec,owner_type,8,9,42014)
CheckOffset(struct _GParamSpec,owner_type,32,9,42014)
CheckMemberSize(struct _GParamSpec,_nick,8,9,42015)
CheckOffset(struct _GParamSpec,_nick,40,9,42015)
CheckMemberSize(struct _GParamSpec,_blurb,8,9,42016)
CheckOffset(struct _GParamSpec,_blurb,48,9,42016)
CheckMemberSize(struct _GParamSpec,qdata,8,9,42017)
CheckOffset(struct _GParamSpec,qdata,56,9,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,9,42018)
CheckOffset(struct _GParamSpec,ref_count,64,9,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,9,42019)
CheckOffset(struct _GParamSpec,param_id,68,9,42019)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpec,40, 11850, 10)
CheckMemberSize(struct _GParamSpec,name,4,10,42005)
CheckOffset(struct _GParamSpec,name,4,10,42005)
CheckMemberSize(struct _GParamSpec,flags,4,10,42012)
CheckOffset(struct _GParamSpec,flags,8,10,42012)
CheckMemberSize(struct _GParamSpec,value_type,4,10,42013)
CheckOffset(struct _GParamSpec,value_type,12,10,42013)
CheckMemberSize(struct _GParamSpec,owner_type,4,10,42014)
CheckOffset(struct _GParamSpec,owner_type,16,10,42014)
CheckMemberSize(struct _GParamSpec,_nick,4,10,42015)
CheckOffset(struct _GParamSpec,_nick,20,10,42015)
CheckMemberSize(struct _GParamSpec,_blurb,4,10,42016)
CheckOffset(struct _GParamSpec,_blurb,24,10,42016)
CheckMemberSize(struct _GParamSpec,qdata,4,10,42017)
CheckOffset(struct _GParamSpec,qdata,28,10,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,10,42018)
CheckOffset(struct _GParamSpec,ref_count,32,10,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,10,42019)
CheckOffset(struct _GParamSpec,param_id,36,10,42019)
#elif __s390x__
CheckTypeSize(struct _GParamSpec,72, 11850, 12)
CheckMemberSize(struct _GParamSpec,name,8,12,42005)
CheckOffset(struct _GParamSpec,name,8,12,42005)
CheckMemberSize(struct _GParamSpec,flags,4,12,42012)
CheckOffset(struct _GParamSpec,flags,16,12,42012)
CheckMemberSize(struct _GParamSpec,value_type,8,12,42013)
CheckOffset(struct _GParamSpec,value_type,24,12,42013)
CheckMemberSize(struct _GParamSpec,owner_type,8,12,42014)
CheckOffset(struct _GParamSpec,owner_type,32,12,42014)
CheckMemberSize(struct _GParamSpec,_nick,8,12,42015)
CheckOffset(struct _GParamSpec,_nick,40,12,42015)
CheckMemberSize(struct _GParamSpec,_blurb,8,12,42016)
CheckOffset(struct _GParamSpec,_blurb,48,12,42016)
CheckMemberSize(struct _GParamSpec,qdata,8,12,42017)
CheckOffset(struct _GParamSpec,qdata,56,12,42017)
CheckMemberSize(struct _GParamSpec,ref_count,4,12,42018)
CheckOffset(struct _GParamSpec,ref_count,64,12,42018)
CheckMemberSize(struct _GParamSpec,param_id,4,12,42019)
CheckOffset(struct _GParamSpec,param_id,68,12,42019)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11850,0);
Msg("Find size of _GParamSpec (11850)\n");
#endif

#if __i386__
CheckEnum("G_PARAM_READABLE",G_PARAM_READABLE,1);
CheckEnum("G_PARAM_WRITABLE",G_PARAM_WRITABLE,2);
CheckEnum("G_PARAM_CONSTRUCT",G_PARAM_CONSTRUCT,4);
CheckEnum("G_PARAM_CONSTRUCT_ONLY",G_PARAM_CONSTRUCT_ONLY,8);
CheckEnum("G_PARAM_LAX_VALIDATION",G_PARAM_LAX_VALIDATION,16);
CheckEnum("G_PARAM_PRIVATE",G_PARAM_PRIVATE,32);
#elif __x86_64__
CheckEnum("G_PARAM_READABLE",G_PARAM_READABLE,1);
CheckEnum("G_PARAM_WRITABLE",G_PARAM_WRITABLE,2);
CheckEnum("G_PARAM_CONSTRUCT",G_PARAM_CONSTRUCT,4);
CheckEnum("G_PARAM_CONSTRUCT_ONLY",G_PARAM_CONSTRUCT_ONLY,8);
CheckEnum("G_PARAM_LAX_VALIDATION",G_PARAM_LAX_VALIDATION,16);
CheckEnum("G_PARAM_PRIVATE",G_PARAM_PRIVATE,32);
#elif __ia64__
CheckEnum("G_PARAM_READABLE",G_PARAM_READABLE,1);
CheckEnum("G_PARAM_WRITABLE",G_PARAM_WRITABLE,2);
CheckEnum("G_PARAM_CONSTRUCT",G_PARAM_CONSTRUCT,4);
CheckEnum("G_PARAM_CONSTRUCT_ONLY",G_PARAM_CONSTRUCT_ONLY,8);
CheckEnum("G_PARAM_LAX_VALIDATION",G_PARAM_LAX_VALIDATION,16);
CheckEnum("G_PARAM_PRIVATE",G_PARAM_PRIVATE,32);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11851,0);
Msg("Find size of anon-glib-2.0/glib-object.h-22 (11851)\n");
#endif

#if __i386__
CheckTypeSize(GParamFlags,4, 11852, 2)
#elif __x86_64__
CheckTypeSize(GParamFlags,4, 11852, 11)
#elif __ia64__
CheckTypeSize(GParamFlags,4, 11852, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamFlags,4, 11852, 6)
#elif __powerpc64__
CheckTypeSize(GParamFlags,4, 11852, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamFlags,4, 11852, 10)
#elif __s390x__
CheckTypeSize(GParamFlags,4, 11852, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11852,0);
Msg("Find size of GParamFlags (11852)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpec,40, 11853, 2)
#elif __x86_64__
CheckTypeSize(GParamSpec,72, 11853, 11)
#elif __ia64__
CheckTypeSize(GParamSpec,72, 11853, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpec,40, 11853, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpec,72, 11853, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpec,40, 11853, 10)
#elif __s390x__
CheckTypeSize(GParamSpec,72, 11853, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11853,0);
Msg("Find size of GParamSpec (11853)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpec *,4, 11854, 2)
#elif __x86_64__
CheckTypeSize(GParamSpec *,8, 11854, 11)
#elif __ia64__
CheckTypeSize(GParamSpec *,8, 11854, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpec *,4, 11854, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpec *,8, 11854, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpec *,4, 11854, 10)
#elif __s390x__
CheckTypeSize(GParamSpec *,8, 11854, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11854,0);
Msg("Find size of GParamSpec * (11854)\n");
#endif

#if __i386__
CheckTypeSize(struct _GObjectClass,68, 11855, 2)
CheckMemberSize(struct _GObjectClass,construct_properties,4,2,42021)
CheckOffset(struct _GObjectClass,construct_properties,4,2,42021)
CheckMemberSize(struct _GObjectClass,constructor,4,2,42027)
CheckOffset(struct _GObjectClass,constructor,8,2,42027)
CheckMemberSize(struct _GObjectClass,set_property,4,2,42032)
CheckOffset(struct _GObjectClass,set_property,12,2,42032)
CheckMemberSize(struct _GObjectClass,get_property,4,2,42037)
CheckOffset(struct _GObjectClass,get_property,16,2,42037)
CheckMemberSize(struct _GObjectClass,dispose,4,2,42039)
CheckOffset(struct _GObjectClass,dispose,20,2,42039)
CheckMemberSize(struct _GObjectClass,finalize,4,2,42040)
CheckOffset(struct _GObjectClass,finalize,24,2,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,4,2,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,28,2,42044)
CheckMemberSize(struct _GObjectClass,notify,4,2,42047)
CheckOffset(struct _GObjectClass,notify,32,2,42047)
CheckMemberSize(struct _GObjectClass,pdummy,32,2,42048)
CheckOffset(struct _GObjectClass,pdummy,36,2,42048)
#elif __x86_64__
CheckTypeSize(struct _GObjectClass,136, 11855, 11)
CheckMemberSize(struct _GObjectClass,construct_properties,8,11,42021)
CheckOffset(struct _GObjectClass,construct_properties,8,11,42021)
CheckMemberSize(struct _GObjectClass,constructor,8,11,42027)
CheckOffset(struct _GObjectClass,constructor,16,11,42027)
CheckMemberSize(struct _GObjectClass,set_property,8,11,42032)
CheckOffset(struct _GObjectClass,set_property,24,11,42032)
CheckMemberSize(struct _GObjectClass,get_property,8,11,42037)
CheckOffset(struct _GObjectClass,get_property,32,11,42037)
CheckMemberSize(struct _GObjectClass,dispose,8,11,42039)
CheckOffset(struct _GObjectClass,dispose,40,11,42039)
CheckMemberSize(struct _GObjectClass,finalize,8,11,42040)
CheckOffset(struct _GObjectClass,finalize,48,11,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,8,11,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,56,11,42044)
CheckMemberSize(struct _GObjectClass,notify,8,11,42047)
CheckOffset(struct _GObjectClass,notify,64,11,42047)
CheckMemberSize(struct _GObjectClass,pdummy,64,11,42048)
CheckOffset(struct _GObjectClass,pdummy,72,11,42048)
#elif __ia64__
CheckTypeSize(struct _GObjectClass,136, 11855, 3)
CheckMemberSize(struct _GObjectClass,construct_properties,8,3,42021)
CheckOffset(struct _GObjectClass,construct_properties,8,3,42021)
CheckMemberSize(struct _GObjectClass,constructor,8,3,42027)
CheckOffset(struct _GObjectClass,constructor,16,3,42027)
CheckMemberSize(struct _GObjectClass,set_property,8,3,42032)
CheckOffset(struct _GObjectClass,set_property,24,3,42032)
CheckMemberSize(struct _GObjectClass,get_property,8,3,42037)
CheckOffset(struct _GObjectClass,get_property,32,3,42037)
CheckMemberSize(struct _GObjectClass,dispose,8,3,42039)
CheckOffset(struct _GObjectClass,dispose,40,3,42039)
CheckMemberSize(struct _GObjectClass,finalize,8,3,42040)
CheckOffset(struct _GObjectClass,finalize,48,3,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,8,3,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,56,3,42044)
CheckMemberSize(struct _GObjectClass,notify,8,3,42047)
CheckOffset(struct _GObjectClass,notify,64,3,42047)
CheckMemberSize(struct _GObjectClass,pdummy,64,3,42048)
CheckOffset(struct _GObjectClass,pdummy,72,3,42048)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GObjectClass,68, 11855, 6)
CheckMemberSize(struct _GObjectClass,construct_properties,4,6,42021)
CheckOffset(struct _GObjectClass,construct_properties,4,6,42021)
CheckMemberSize(struct _GObjectClass,constructor,4,6,42027)
CheckOffset(struct _GObjectClass,constructor,8,6,42027)
CheckMemberSize(struct _GObjectClass,set_property,4,6,42032)
CheckOffset(struct _GObjectClass,set_property,12,6,42032)
CheckMemberSize(struct _GObjectClass,get_property,4,6,42037)
CheckOffset(struct _GObjectClass,get_property,16,6,42037)
CheckMemberSize(struct _GObjectClass,dispose,4,6,42039)
CheckOffset(struct _GObjectClass,dispose,20,6,42039)
CheckMemberSize(struct _GObjectClass,finalize,4,6,42040)
CheckOffset(struct _GObjectClass,finalize,24,6,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,4,6,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,28,6,42044)
CheckMemberSize(struct _GObjectClass,notify,4,6,42047)
CheckOffset(struct _GObjectClass,notify,32,6,42047)
CheckMemberSize(struct _GObjectClass,pdummy,32,6,42048)
CheckOffset(struct _GObjectClass,pdummy,36,6,42048)
#elif __powerpc64__
CheckTypeSize(struct _GObjectClass,136, 11855, 9)
CheckMemberSize(struct _GObjectClass,construct_properties,8,9,42021)
CheckOffset(struct _GObjectClass,construct_properties,8,9,42021)
CheckMemberSize(struct _GObjectClass,constructor,8,9,42027)
CheckOffset(struct _GObjectClass,constructor,16,9,42027)
CheckMemberSize(struct _GObjectClass,set_property,8,9,42032)
CheckOffset(struct _GObjectClass,set_property,24,9,42032)
CheckMemberSize(struct _GObjectClass,get_property,8,9,42037)
CheckOffset(struct _GObjectClass,get_property,32,9,42037)
CheckMemberSize(struct _GObjectClass,dispose,8,9,42039)
CheckOffset(struct _GObjectClass,dispose,40,9,42039)
CheckMemberSize(struct _GObjectClass,finalize,8,9,42040)
CheckOffset(struct _GObjectClass,finalize,48,9,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,8,9,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,56,9,42044)
CheckMemberSize(struct _GObjectClass,notify,8,9,42047)
CheckOffset(struct _GObjectClass,notify,64,9,42047)
CheckMemberSize(struct _GObjectClass,pdummy,64,9,42048)
CheckOffset(struct _GObjectClass,pdummy,72,9,42048)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GObjectClass,68, 11855, 10)
CheckMemberSize(struct _GObjectClass,construct_properties,4,10,42021)
CheckOffset(struct _GObjectClass,construct_properties,4,10,42021)
CheckMemberSize(struct _GObjectClass,constructor,4,10,42027)
CheckOffset(struct _GObjectClass,constructor,8,10,42027)
CheckMemberSize(struct _GObjectClass,set_property,4,10,42032)
CheckOffset(struct _GObjectClass,set_property,12,10,42032)
CheckMemberSize(struct _GObjectClass,get_property,4,10,42037)
CheckOffset(struct _GObjectClass,get_property,16,10,42037)
CheckMemberSize(struct _GObjectClass,dispose,4,10,42039)
CheckOffset(struct _GObjectClass,dispose,20,10,42039)
CheckMemberSize(struct _GObjectClass,finalize,4,10,42040)
CheckOffset(struct _GObjectClass,finalize,24,10,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,4,10,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,28,10,42044)
CheckMemberSize(struct _GObjectClass,notify,4,10,42047)
CheckOffset(struct _GObjectClass,notify,32,10,42047)
CheckMemberSize(struct _GObjectClass,pdummy,32,10,42048)
CheckOffset(struct _GObjectClass,pdummy,36,10,42048)
#elif __s390x__
CheckTypeSize(struct _GObjectClass,136, 11855, 12)
CheckMemberSize(struct _GObjectClass,construct_properties,8,12,42021)
CheckOffset(struct _GObjectClass,construct_properties,8,12,42021)
CheckMemberSize(struct _GObjectClass,constructor,8,12,42027)
CheckOffset(struct _GObjectClass,constructor,16,12,42027)
CheckMemberSize(struct _GObjectClass,set_property,8,12,42032)
CheckOffset(struct _GObjectClass,set_property,24,12,42032)
CheckMemberSize(struct _GObjectClass,get_property,8,12,42037)
CheckOffset(struct _GObjectClass,get_property,32,12,42037)
CheckMemberSize(struct _GObjectClass,dispose,8,12,42039)
CheckOffset(struct _GObjectClass,dispose,40,12,42039)
CheckMemberSize(struct _GObjectClass,finalize,8,12,42040)
CheckOffset(struct _GObjectClass,finalize,48,12,42040)
CheckMemberSize(struct _GObjectClass,dispatch_properties_changed,8,12,42044)
CheckOffset(struct _GObjectClass,dispatch_properties_changed,56,12,42044)
CheckMemberSize(struct _GObjectClass,notify,8,12,42047)
CheckOffset(struct _GObjectClass,notify,64,12,42047)
CheckMemberSize(struct _GObjectClass,pdummy,64,12,42048)
CheckOffset(struct _GObjectClass,pdummy,72,12,42048)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11855,0);
Msg("Find size of _GObjectClass (11855)\n");
#endif

#if __i386__
CheckTypeSize(struct _GObjectConstructParam,8, 11856, 2)
CheckMemberSize(struct _GObjectConstructParam,value,4,2,42023)
CheckOffset(struct _GObjectConstructParam,value,4,2,42023)
#elif __x86_64__
CheckTypeSize(struct _GObjectConstructParam,16, 11856, 11)
CheckMemberSize(struct _GObjectConstructParam,value,8,11,42023)
CheckOffset(struct _GObjectConstructParam,value,8,11,42023)
#elif __ia64__
CheckTypeSize(struct _GObjectConstructParam,16, 11856, 3)
CheckMemberSize(struct _GObjectConstructParam,value,8,3,42023)
CheckOffset(struct _GObjectConstructParam,value,8,3,42023)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GObjectConstructParam,8, 11856, 6)
CheckMemberSize(struct _GObjectConstructParam,value,4,6,42023)
CheckOffset(struct _GObjectConstructParam,value,4,6,42023)
#elif __powerpc64__
CheckTypeSize(struct _GObjectConstructParam,16, 11856, 9)
CheckMemberSize(struct _GObjectConstructParam,value,8,9,42023)
CheckOffset(struct _GObjectConstructParam,value,8,9,42023)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GObjectConstructParam,8, 11856, 10)
CheckMemberSize(struct _GObjectConstructParam,value,4,10,42023)
CheckOffset(struct _GObjectConstructParam,value,4,10,42023)
#elif __s390x__
CheckTypeSize(struct _GObjectConstructParam,16, 11856, 12)
CheckMemberSize(struct _GObjectConstructParam,value,8,12,42023)
CheckOffset(struct _GObjectConstructParam,value,8,12,42023)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11856,0);
Msg("Find size of _GObjectConstructParam (11856)\n");
#endif

#if __i386__
CheckTypeSize(GObjectConstructParam,8, 11857, 2)
#elif __x86_64__
CheckTypeSize(GObjectConstructParam,16, 11857, 11)
#elif __ia64__
CheckTypeSize(GObjectConstructParam,16, 11857, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectConstructParam,8, 11857, 6)
#elif __powerpc64__
CheckTypeSize(GObjectConstructParam,16, 11857, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectConstructParam,8, 11857, 10)
#elif __s390x__
CheckTypeSize(GObjectConstructParam,16, 11857, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11857,0);
Msg("Find size of GObjectConstructParam (11857)\n");
#endif

#if __i386__
CheckTypeSize(GObjectConstructParam *,4, 11858, 2)
#elif __x86_64__
CheckTypeSize(GObjectConstructParam *,8, 11858, 11)
#elif __ia64__
CheckTypeSize(GObjectConstructParam *,8, 11858, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectConstructParam *,4, 11858, 6)
#elif __powerpc64__
CheckTypeSize(GObjectConstructParam *,8, 11858, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectConstructParam *,4, 11858, 10)
#elif __s390x__
CheckTypeSize(GObjectConstructParam *,8, 11858, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11858,0);
Msg("Find size of GObjectConstructParam * (11858)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11859,0);
Msg("Find size of fptr_glib-object_75 (11859)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11860,0);
Msg("Find size of fptr_glib-object_99 (11860)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11861,0);
Msg("Find size of fptr_glib-object_62 (11861)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11862,0);
Msg("Find size of fptr_glib-object_74 (11862)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11863,0);
Msg("Find size of GParamSpec * * (11863)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11864,0);
Msg("Find size of fptr_glib-object_66 (11864)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11865,0);
Msg("Find size of fptr_glib-object_90 (11865)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GObjectClass,68, 11867, 2)
#elif __x86_64__
CheckTypeSize(GObjectClass,136, 11867, 11)
#elif __ia64__
CheckTypeSize(GObjectClass,136, 11867, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectClass,68, 11867, 6)
#elif __powerpc64__
CheckTypeSize(GObjectClass,136, 11867, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectClass,68, 11867, 10)
#elif __s390x__
CheckTypeSize(GObjectClass,136, 11867, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11867,0);
Msg("Find size of GObjectClass (11867)\n");
#endif

#if __i386__
CheckTypeSize(GObjectClass *,4, 11868, 2)
#elif __x86_64__
CheckTypeSize(GObjectClass *,8, 11868, 11)
#elif __ia64__
CheckTypeSize(GObjectClass *,8, 11868, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectClass *,4, 11868, 6)
#elif __powerpc64__
CheckTypeSize(GObjectClass *,8, 11868, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectClass *,4, 11868, 10)
#elif __s390x__
CheckTypeSize(GObjectClass *,8, 11868, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11868,0);
Msg("Find size of GObjectClass * (11868)\n");
#endif

#if __i386__
CheckTypeSize(struct _GClosure,16, 11869, 2)
CheckMemberSize(struct _GClosure,marshal,4,2,42065)
CheckOffset(struct _GClosure,marshal,4,2,42065)
CheckMemberSize(struct _GClosure,data,4,2,42066)
CheckOffset(struct _GClosure,data,8,2,42066)
CheckMemberSize(struct _GClosure,notifiers,4,2,42071)
CheckOffset(struct _GClosure,notifiers,12,2,42071)
#elif __x86_64__
CheckTypeSize(struct _GClosure,32, 11869, 11)
CheckMemberSize(struct _GClosure,marshal,8,11,42065)
CheckOffset(struct _GClosure,marshal,8,11,42065)
CheckMemberSize(struct _GClosure,data,8,11,42066)
CheckOffset(struct _GClosure,data,16,11,42066)
CheckMemberSize(struct _GClosure,notifiers,8,11,42071)
CheckOffset(struct _GClosure,notifiers,24,11,42071)
#elif __ia64__
CheckTypeSize(struct _GClosure,32, 11869, 3)
CheckMemberSize(struct _GClosure,marshal,8,3,42065)
CheckOffset(struct _GClosure,marshal,8,3,42065)
CheckMemberSize(struct _GClosure,data,8,3,42066)
CheckOffset(struct _GClosure,data,16,3,42066)
CheckMemberSize(struct _GClosure,notifiers,8,3,42071)
CheckOffset(struct _GClosure,notifiers,24,3,42071)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GClosure,16, 11869, 6)
CheckMemberSize(struct _GClosure,marshal,4,6,42065)
CheckOffset(struct _GClosure,marshal,4,6,42065)
CheckMemberSize(struct _GClosure,data,4,6,42066)
CheckOffset(struct _GClosure,data,8,6,42066)
CheckMemberSize(struct _GClosure,notifiers,4,6,42071)
CheckOffset(struct _GClosure,notifiers,12,6,42071)
#elif __powerpc64__
CheckTypeSize(struct _GClosure,32, 11869, 9)
CheckMemberSize(struct _GClosure,marshal,8,9,42065)
CheckOffset(struct _GClosure,marshal,8,9,42065)
CheckMemberSize(struct _GClosure,data,8,9,42066)
CheckOffset(struct _GClosure,data,16,9,42066)
CheckMemberSize(struct _GClosure,notifiers,8,9,42071)
CheckOffset(struct _GClosure,notifiers,24,9,42071)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GClosure,16, 11869, 10)
CheckMemberSize(struct _GClosure,marshal,4,10,42065)
CheckOffset(struct _GClosure,marshal,4,10,42065)
CheckMemberSize(struct _GClosure,data,4,10,42066)
CheckOffset(struct _GClosure,data,8,10,42066)
CheckMemberSize(struct _GClosure,notifiers,4,10,42071)
CheckOffset(struct _GClosure,notifiers,12,10,42071)
#elif __s390x__
CheckTypeSize(struct _GClosure,32, 11869, 12)
CheckMemberSize(struct _GClosure,marshal,8,12,42065)
CheckOffset(struct _GClosure,marshal,8,12,42065)
CheckMemberSize(struct _GClosure,data,8,12,42066)
CheckOffset(struct _GClosure,data,16,12,42066)
CheckMemberSize(struct _GClosure,notifiers,8,12,42071)
CheckOffset(struct _GClosure,notifiers,24,12,42071)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11869,0);
Msg("Find size of _GClosure (11869)\n");
#endif

#if __i386__
CheckTypeSize(GClosure,16, 11870, 2)
#elif __x86_64__
CheckTypeSize(GClosure,32, 11870, 11)
#elif __ia64__
CheckTypeSize(GClosure,32, 11870, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClosure,16, 11870, 6)
#elif __powerpc64__
CheckTypeSize(GClosure,32, 11870, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClosure,16, 11870, 10)
#elif __s390x__
CheckTypeSize(GClosure,32, 11870, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11870,0);
Msg("Find size of GClosure (11870)\n");
#endif

#if __i386__
CheckTypeSize(GClosure *,4, 11871, 2)
#elif __x86_64__
CheckTypeSize(GClosure *,8, 11871, 11)
#elif __ia64__
CheckTypeSize(GClosure *,8, 11871, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClosure *,4, 11871, 6)
#elif __powerpc64__
CheckTypeSize(GClosure *,8, 11871, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClosure *,4, 11871, 10)
#elif __s390x__
CheckTypeSize(GClosure *,8, 11871, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11871,0);
Msg("Find size of GClosure * (11871)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11872,0);
Msg("Find size of fptr_glib-object_71 (11872)\n");
#endif

#if __i386__
CheckTypeSize(struct _GClosureNotifyData,8, 11873, 2)
CheckMemberSize(struct _GClosureNotifyData,notify,4,2,42070)
CheckOffset(struct _GClosureNotifyData,notify,4,2,42070)
#elif __x86_64__
CheckTypeSize(struct _GClosureNotifyData,16, 11873, 11)
CheckMemberSize(struct _GClosureNotifyData,notify,8,11,42070)
CheckOffset(struct _GClosureNotifyData,notify,8,11,42070)
#elif __ia64__
CheckTypeSize(struct _GClosureNotifyData,16, 11873, 3)
CheckMemberSize(struct _GClosureNotifyData,notify,8,3,42070)
CheckOffset(struct _GClosureNotifyData,notify,8,3,42070)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GClosureNotifyData,8, 11873, 6)
CheckMemberSize(struct _GClosureNotifyData,notify,4,6,42070)
CheckOffset(struct _GClosureNotifyData,notify,4,6,42070)
#elif __powerpc64__
CheckTypeSize(struct _GClosureNotifyData,16, 11873, 9)
CheckMemberSize(struct _GClosureNotifyData,notify,8,9,42070)
CheckOffset(struct _GClosureNotifyData,notify,8,9,42070)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GClosureNotifyData,8, 11873, 10)
CheckMemberSize(struct _GClosureNotifyData,notify,4,10,42070)
CheckOffset(struct _GClosureNotifyData,notify,4,10,42070)
#elif __s390x__
CheckTypeSize(struct _GClosureNotifyData,16, 11873, 12)
CheckMemberSize(struct _GClosureNotifyData,notify,8,12,42070)
CheckOffset(struct _GClosureNotifyData,notify,8,12,42070)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11873,0);
Msg("Find size of _GClosureNotifyData (11873)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11874,0);
Msg("Find size of fptr_glib-object_211 (11874)\n");
#endif

#if __i386__
CheckTypeSize(GClosureNotify,4, 11875, 2)
#elif __x86_64__
CheckTypeSize(GClosureNotify,8, 11875, 11)
#elif __ia64__
CheckTypeSize(GClosureNotify,8, 11875, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClosureNotify,4, 11875, 6)
#elif __powerpc64__
CheckTypeSize(GClosureNotify,8, 11875, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClosureNotify,4, 11875, 10)
#elif __s390x__
CheckTypeSize(GClosureNotify,8, 11875, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11875,0);
Msg("Find size of GClosureNotify (11875)\n");
#endif

#if __i386__
CheckTypeSize(GClosureNotifyData,8, 11876, 2)
#elif __x86_64__
CheckTypeSize(GClosureNotifyData,16, 11876, 11)
#elif __ia64__
CheckTypeSize(GClosureNotifyData,16, 11876, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClosureNotifyData,8, 11876, 6)
#elif __powerpc64__
CheckTypeSize(GClosureNotifyData,16, 11876, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClosureNotifyData,8, 11876, 10)
#elif __s390x__
CheckTypeSize(GClosureNotifyData,16, 11876, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11876,0);
Msg("Find size of GClosureNotifyData (11876)\n");
#endif

#if __i386__
CheckTypeSize(GClosureNotifyData *,4, 11877, 2)
#elif __x86_64__
CheckTypeSize(GClosureNotifyData *,8, 11877, 11)
#elif __ia64__
CheckTypeSize(GClosureNotifyData *,8, 11877, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClosureNotifyData *,4, 11877, 6)
#elif __powerpc64__
CheckTypeSize(GClosureNotifyData *,8, 11877, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClosureNotifyData *,4, 11877, 10)
#elif __s390x__
CheckTypeSize(GClosureNotifyData *,8, 11877, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11877,0);
Msg("Find size of GClosureNotifyData * (11877)\n");
#endif

#if __i386__
CheckTypeSize(GTypeInterfaceCheckFunc,4, 11878, 2)
#elif __x86_64__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 11)
#elif __ia64__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeInterfaceCheckFunc,4, 11878, 6)
#elif __powerpc64__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeInterfaceCheckFunc,4, 11878, 10)
#elif __s390x__
CheckTypeSize(GTypeInterfaceCheckFunc,8, 11878, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11878,0);
Msg("Find size of GTypeInterfaceCheckFunc (11878)\n");
#endif

#if __i386__
CheckTypeSize(struct _GValueArray,12, 11879, 2)
CheckMemberSize(struct _GValueArray,values,4,2,42073)
CheckOffset(struct _GValueArray,values,4,2,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,2,42074)
CheckOffset(struct _GValueArray,n_prealloced,8,2,42074)
#elif __x86_64__
CheckTypeSize(struct _GValueArray,24, 11879, 11)
CheckMemberSize(struct _GValueArray,values,8,11,42073)
CheckOffset(struct _GValueArray,values,8,11,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,11,42074)
CheckOffset(struct _GValueArray,n_prealloced,16,11,42074)
#elif __ia64__
CheckTypeSize(struct _GValueArray,24, 11879, 3)
CheckMemberSize(struct _GValueArray,values,8,3,42073)
CheckOffset(struct _GValueArray,values,8,3,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,3,42074)
CheckOffset(struct _GValueArray,n_prealloced,16,3,42074)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GValueArray,12, 11879, 6)
CheckMemberSize(struct _GValueArray,values,4,6,42073)
CheckOffset(struct _GValueArray,values,4,6,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,6,42074)
CheckOffset(struct _GValueArray,n_prealloced,8,6,42074)
#elif __powerpc64__
CheckTypeSize(struct _GValueArray,24, 11879, 9)
CheckMemberSize(struct _GValueArray,values,8,9,42073)
CheckOffset(struct _GValueArray,values,8,9,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,9,42074)
CheckOffset(struct _GValueArray,n_prealloced,16,9,42074)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GValueArray,12, 11879, 10)
CheckMemberSize(struct _GValueArray,values,4,10,42073)
CheckOffset(struct _GValueArray,values,4,10,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,10,42074)
CheckOffset(struct _GValueArray,n_prealloced,8,10,42074)
#elif __s390x__
CheckTypeSize(struct _GValueArray,24, 11879, 12)
CheckMemberSize(struct _GValueArray,values,8,12,42073)
CheckOffset(struct _GValueArray,values,8,12,42073)
CheckMemberSize(struct _GValueArray,n_prealloced,4,12,42074)
CheckOffset(struct _GValueArray,n_prealloced,16,12,42074)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11879,0);
Msg("Find size of _GValueArray (11879)\n");
#endif

#if __i386__
CheckTypeSize(GValueArray,12, 11880, 2)
#elif __x86_64__
CheckTypeSize(GValueArray,24, 11880, 11)
#elif __ia64__
CheckTypeSize(GValueArray,24, 11880, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GValueArray,12, 11880, 6)
#elif __powerpc64__
CheckTypeSize(GValueArray,24, 11880, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GValueArray,12, 11880, 10)
#elif __s390x__
CheckTypeSize(GValueArray,24, 11880, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11880,0);
Msg("Find size of GValueArray (11880)\n");
#endif

#if __i386__
CheckTypeSize(GValueArray *,4, 11881, 2)
#elif __x86_64__
CheckTypeSize(GValueArray *,8, 11881, 11)
#elif __ia64__
CheckTypeSize(GValueArray *,8, 11881, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GValueArray *,4, 11881, 6)
#elif __powerpc64__
CheckTypeSize(GValueArray *,8, 11881, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GValueArray *,4, 11881, 10)
#elif __s390x__
CheckTypeSize(GValueArray *,8, 11881, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11881,0);
Msg("Find size of GValueArray * (11881)\n");
#endif

#if __i386__
CheckTypeSize(struct _GEnumValue,12, 11882, 2)
CheckMemberSize(struct _GEnumValue,value_name,4,2,42076)
CheckOffset(struct _GEnumValue,value_name,4,2,42076)
CheckMemberSize(struct _GEnumValue,value_nick,4,2,42077)
CheckOffset(struct _GEnumValue,value_nick,8,2,42077)
#elif __x86_64__
CheckTypeSize(struct _GEnumValue,24, 11882, 11)
CheckMemberSize(struct _GEnumValue,value_name,8,11,42076)
CheckOffset(struct _GEnumValue,value_name,8,11,42076)
CheckMemberSize(struct _GEnumValue,value_nick,8,11,42077)
CheckOffset(struct _GEnumValue,value_nick,16,11,42077)
#elif __ia64__
CheckTypeSize(struct _GEnumValue,24, 11882, 3)
CheckMemberSize(struct _GEnumValue,value_name,8,3,42076)
CheckOffset(struct _GEnumValue,value_name,8,3,42076)
CheckMemberSize(struct _GEnumValue,value_nick,8,3,42077)
CheckOffset(struct _GEnumValue,value_nick,16,3,42077)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GEnumValue,12, 11882, 6)
CheckMemberSize(struct _GEnumValue,value_name,4,6,42076)
CheckOffset(struct _GEnumValue,value_name,4,6,42076)
CheckMemberSize(struct _GEnumValue,value_nick,4,6,42077)
CheckOffset(struct _GEnumValue,value_nick,8,6,42077)
#elif __powerpc64__
CheckTypeSize(struct _GEnumValue,24, 11882, 9)
CheckMemberSize(struct _GEnumValue,value_name,8,9,42076)
CheckOffset(struct _GEnumValue,value_name,8,9,42076)
CheckMemberSize(struct _GEnumValue,value_nick,8,9,42077)
CheckOffset(struct _GEnumValue,value_nick,16,9,42077)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GEnumValue,12, 11882, 10)
CheckMemberSize(struct _GEnumValue,value_name,4,10,42076)
CheckOffset(struct _GEnumValue,value_name,4,10,42076)
CheckMemberSize(struct _GEnumValue,value_nick,4,10,42077)
CheckOffset(struct _GEnumValue,value_nick,8,10,42077)
#elif __s390x__
CheckTypeSize(struct _GEnumValue,24, 11882, 12)
CheckMemberSize(struct _GEnumValue,value_name,8,12,42076)
CheckOffset(struct _GEnumValue,value_name,8,12,42076)
CheckMemberSize(struct _GEnumValue,value_nick,8,12,42077)
CheckOffset(struct _GEnumValue,value_nick,16,12,42077)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11882,0);
Msg("Find size of _GEnumValue (11882)\n");
#endif

#if __i386__
CheckTypeSize(GEnumValue,12, 11883, 2)
#elif __x86_64__
CheckTypeSize(GEnumValue,24, 11883, 11)
#elif __ia64__
CheckTypeSize(GEnumValue,24, 11883, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GEnumValue,12, 11883, 6)
#elif __powerpc64__
CheckTypeSize(GEnumValue,24, 11883, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GEnumValue,12, 11883, 10)
#elif __s390x__
CheckTypeSize(GEnumValue,24, 11883, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11883,0);
Msg("Find size of GEnumValue (11883)\n");
#endif

#if __i386__
CheckTypeSize(GEnumValue *,4, 11884, 2)
#elif __x86_64__
CheckTypeSize(GEnumValue *,8, 11884, 11)
#elif __ia64__
CheckTypeSize(GEnumValue *,8, 11884, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GEnumValue *,4, 11884, 6)
#elif __powerpc64__
CheckTypeSize(GEnumValue *,8, 11884, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GEnumValue *,4, 11884, 10)
#elif __s390x__
CheckTypeSize(GEnumValue *,8, 11884, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11884,0);
Msg("Find size of GEnumValue * (11884)\n");
#endif

#if __i386__
CheckTypeSize(struct _GEnumClass,20, 11885, 2)
CheckMemberSize(struct _GEnumClass,minimum,4,2,42079)
CheckOffset(struct _GEnumClass,minimum,4,2,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,2,42080)
CheckOffset(struct _GEnumClass,maximum,8,2,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,2,42081)
CheckOffset(struct _GEnumClass,n_values,12,2,42081)
CheckMemberSize(struct _GEnumClass,values,4,2,42082)
CheckOffset(struct _GEnumClass,values,16,2,42082)
#elif __x86_64__
CheckTypeSize(struct _GEnumClass,32, 11885, 11)
CheckMemberSize(struct _GEnumClass,minimum,4,11,42079)
CheckOffset(struct _GEnumClass,minimum,8,11,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,11,42080)
CheckOffset(struct _GEnumClass,maximum,12,11,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,11,42081)
CheckOffset(struct _GEnumClass,n_values,16,11,42081)
CheckMemberSize(struct _GEnumClass,values,8,11,42082)
CheckOffset(struct _GEnumClass,values,24,11,42082)
#elif __ia64__
CheckTypeSize(struct _GEnumClass,32, 11885, 3)
CheckMemberSize(struct _GEnumClass,minimum,4,3,42079)
CheckOffset(struct _GEnumClass,minimum,8,3,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,3,42080)
CheckOffset(struct _GEnumClass,maximum,12,3,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,3,42081)
CheckOffset(struct _GEnumClass,n_values,16,3,42081)
CheckMemberSize(struct _GEnumClass,values,8,3,42082)
CheckOffset(struct _GEnumClass,values,24,3,42082)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GEnumClass,20, 11885, 6)
CheckMemberSize(struct _GEnumClass,minimum,4,6,42079)
CheckOffset(struct _GEnumClass,minimum,4,6,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,6,42080)
CheckOffset(struct _GEnumClass,maximum,8,6,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,6,42081)
CheckOffset(struct _GEnumClass,n_values,12,6,42081)
CheckMemberSize(struct _GEnumClass,values,4,6,42082)
CheckOffset(struct _GEnumClass,values,16,6,42082)
#elif __powerpc64__
CheckTypeSize(struct _GEnumClass,32, 11885, 9)
CheckMemberSize(struct _GEnumClass,minimum,4,9,42079)
CheckOffset(struct _GEnumClass,minimum,8,9,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,9,42080)
CheckOffset(struct _GEnumClass,maximum,12,9,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,9,42081)
CheckOffset(struct _GEnumClass,n_values,16,9,42081)
CheckMemberSize(struct _GEnumClass,values,8,9,42082)
CheckOffset(struct _GEnumClass,values,24,9,42082)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GEnumClass,20, 11885, 10)
CheckMemberSize(struct _GEnumClass,minimum,4,10,42079)
CheckOffset(struct _GEnumClass,minimum,4,10,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,10,42080)
CheckOffset(struct _GEnumClass,maximum,8,10,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,10,42081)
CheckOffset(struct _GEnumClass,n_values,12,10,42081)
CheckMemberSize(struct _GEnumClass,values,4,10,42082)
CheckOffset(struct _GEnumClass,values,16,10,42082)
#elif __s390x__
CheckTypeSize(struct _GEnumClass,32, 11885, 12)
CheckMemberSize(struct _GEnumClass,minimum,4,12,42079)
CheckOffset(struct _GEnumClass,minimum,8,12,42079)
CheckMemberSize(struct _GEnumClass,maximum,4,12,42080)
CheckOffset(struct _GEnumClass,maximum,12,12,42080)
CheckMemberSize(struct _GEnumClass,n_values,4,12,42081)
CheckOffset(struct _GEnumClass,n_values,16,12,42081)
CheckMemberSize(struct _GEnumClass,values,8,12,42082)
CheckOffset(struct _GEnumClass,values,24,12,42082)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11885,0);
Msg("Find size of _GEnumClass (11885)\n");
#endif

#if __i386__
CheckTypeSize(GEnumClass,20, 11886, 2)
#elif __x86_64__
CheckTypeSize(GEnumClass,32, 11886, 11)
#elif __ia64__
CheckTypeSize(GEnumClass,32, 11886, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GEnumClass,20, 11886, 6)
#elif __powerpc64__
CheckTypeSize(GEnumClass,32, 11886, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GEnumClass,20, 11886, 10)
#elif __s390x__
CheckTypeSize(GEnumClass,32, 11886, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11886,0);
Msg("Find size of GEnumClass (11886)\n");
#endif

#if __i386__
CheckTypeSize(GEnumClass *,4, 11887, 2)
#elif __x86_64__
CheckTypeSize(GEnumClass *,8, 11887, 11)
#elif __ia64__
CheckTypeSize(GEnumClass *,8, 11887, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GEnumClass *,4, 11887, 6)
#elif __powerpc64__
CheckTypeSize(GEnumClass *,8, 11887, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GEnumClass *,4, 11887, 10)
#elif __s390x__
CheckTypeSize(GEnumClass *,8, 11887, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11887,0);
Msg("Find size of GEnumClass * (11887)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecPool,0, 11889, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecPool,0, 11889, 11)
#elif __ia64__
CheckTypeSize(GParamSpecPool,0, 11889, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11889,0);
Msg("Find size of GParamSpecPool (11889)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecPool *,4, 11890, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecPool *,8, 11890, 11)
#elif __ia64__
CheckTypeSize(GParamSpecPool *,8, 11890, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecPool *,4, 11890, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecPool *,8, 11890, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecPool *,4, 11890, 10)
#elif __s390x__
CheckTypeSize(GParamSpecPool *,8, 11890, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11890,0);
Msg("Find size of GParamSpecPool * (11890)\n");
#endif

#if __i386__
CheckEnum("G_TYPE_DEBUG_NONE",G_TYPE_DEBUG_NONE,0);
CheckEnum("G_TYPE_DEBUG_OBJECTS",G_TYPE_DEBUG_OBJECTS,1);
CheckEnum("G_TYPE_DEBUG_SIGNALS",G_TYPE_DEBUG_SIGNALS,2);
CheckEnum("G_TYPE_DEBUG_MASK",G_TYPE_DEBUG_MASK,3);
#elif __x86_64__
CheckEnum("G_TYPE_DEBUG_NONE",G_TYPE_DEBUG_NONE,0);
CheckEnum("G_TYPE_DEBUG_OBJECTS",G_TYPE_DEBUG_OBJECTS,1);
CheckEnum("G_TYPE_DEBUG_SIGNALS",G_TYPE_DEBUG_SIGNALS,2);
CheckEnum("G_TYPE_DEBUG_MASK",G_TYPE_DEBUG_MASK,3);
#elif __ia64__
CheckEnum("G_TYPE_DEBUG_NONE",G_TYPE_DEBUG_NONE,0);
CheckEnum("G_TYPE_DEBUG_OBJECTS",G_TYPE_DEBUG_OBJECTS,1);
CheckEnum("G_TYPE_DEBUG_SIGNALS",G_TYPE_DEBUG_SIGNALS,2);
CheckEnum("G_TYPE_DEBUG_MASK",G_TYPE_DEBUG_MASK,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11891,0);
Msg("Find size of anon-glib-2.0/glib-object.h-47 (11891)\n");
#endif

#if __i386__
CheckTypeSize(GTypeDebugFlags,4, 11892, 2)
#elif __x86_64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 11)
#elif __ia64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 6)
#elif __powerpc64__
CheckTypeSize(GTypeDebugFlags,4, 11892, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeDebugFlags,4, 11892, 10)
#elif __s390x__
CheckTypeSize(GTypeDebugFlags,4, 11892, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11892,0);
Msg("Find size of GTypeDebugFlags (11892)\n");
#endif

#if __i386__
CheckTypeSize(GType *,4, 11893, 2)
#elif __x86_64__
CheckTypeSize(GType *,8, 11893, 11)
#elif __ia64__
CheckTypeSize(GType *,8, 11893, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GType *,4, 11893, 6)
#elif __powerpc64__
CheckTypeSize(GType *,8, 11893, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GType *,4, 11893, 10)
#elif __s390x__
CheckTypeSize(GType *,8, 11893, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11893,0);
Msg("Find size of GType * (11893)\n");
#endif

#if __i386__
CheckTypeSize(guint *,4, 11894, 2)
#elif __x86_64__
CheckTypeSize(guint *,8, 11894, 11)
#elif __ia64__
CheckTypeSize(guint *,8, 11894, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(guint *,4, 11894, 6)
#elif __powerpc64__
CheckTypeSize(guint *,8, 11894, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(guint *,4, 11894, 10)
#elif __s390x__
CheckTypeSize(guint *,8, 11894, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11894,0);
Msg("Find size of guint * (11894)\n");
#endif

#if __i386__
CheckTypeSize(const GValueArray,12, 11895, 2)
#elif __x86_64__
CheckTypeSize(const GValueArray,24, 11895, 11)
#elif __ia64__
CheckTypeSize(const GValueArray,24, 11895, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GValueArray,12, 11895, 6)
#elif __powerpc64__
CheckTypeSize(const GValueArray,24, 11895, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GValueArray,12, 11895, 10)
#elif __s390x__
CheckTypeSize(const GValueArray,24, 11895, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11895,0);
Msg("Find size of const GValueArray (11895)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11896,0);
Msg("Find size of const GValueArray * (11896)\n");
#endif

#if __i386__
CheckTypeSize(GTypeInstance *,4, 11897, 2)
#elif __x86_64__
CheckTypeSize(GTypeInstance *,8, 11897, 11)
#elif __ia64__
CheckTypeSize(GTypeInstance *,8, 11897, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeInstance *,4, 11897, 6)
#elif __powerpc64__
CheckTypeSize(GTypeInstance *,8, 11897, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeInstance *,4, 11897, 10)
#elif __s390x__
CheckTypeSize(GTypeInstance *,8, 11897, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11897,0);
Msg("Find size of GTypeInstance * (11897)\n");
#endif

#if __i386__
CheckTypeSize(GTypePlugin,0, 11899, 2)
#elif __x86_64__
CheckTypeSize(GTypePlugin,0, 11899, 11)
#elif __ia64__
CheckTypeSize(GTypePlugin,0, 11899, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11899,0);
Msg("Find size of GTypePlugin (11899)\n");
#endif

#if __i386__
CheckTypeSize(GTypePlugin *,4, 11900, 2)
#elif __x86_64__
CheckTypeSize(GTypePlugin *,8, 11900, 11)
#elif __ia64__
CheckTypeSize(GTypePlugin *,8, 11900, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypePlugin *,4, 11900, 6)
#elif __powerpc64__
CheckTypeSize(GTypePlugin *,8, 11900, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypePlugin *,4, 11900, 10)
#elif __s390x__
CheckTypeSize(GTypePlugin *,8, 11900, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11900,0);
Msg("Find size of GTypePlugin * (11900)\n");
#endif

#if __i386__
CheckTypeSize(GQuark *,4, 11901, 2)
#elif __x86_64__
CheckTypeSize(GQuark *,8, 11901, 11)
#elif __ia64__
CheckTypeSize(GQuark *,8, 11901, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GQuark *,4, 11901, 6)
#elif __powerpc64__
CheckTypeSize(GQuark *,8, 11901, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GQuark *,4, 11901, 10)
#elif __s390x__
CheckTypeSize(GQuark *,8, 11901, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11901,0);
Msg("Find size of GQuark * (11901)\n");
#endif

#if __i386__
CheckTypeSize(const GEnumValue,12, 11902, 2)
#elif __x86_64__
CheckTypeSize(const GEnumValue,24, 11902, 11)
#elif __ia64__
CheckTypeSize(const GEnumValue,24, 11902, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GEnumValue,12, 11902, 6)
#elif __powerpc64__
CheckTypeSize(const GEnumValue,24, 11902, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GEnumValue,12, 11902, 10)
#elif __s390x__
CheckTypeSize(const GEnumValue,24, 11902, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11902,0);
Msg("Find size of const GEnumValue (11902)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11903,0);
Msg("Find size of const GEnumValue * (11903)\n");
#endif

#if __i386__
CheckEnum("G_SIGNAL_MATCH_ID",G_SIGNAL_MATCH_ID,1);
CheckEnum("G_SIGNAL_MATCH_DETAIL",G_SIGNAL_MATCH_DETAIL,2);
CheckEnum("G_SIGNAL_MATCH_CLOSURE",G_SIGNAL_MATCH_CLOSURE,4);
CheckEnum("G_SIGNAL_MATCH_FUNC",G_SIGNAL_MATCH_FUNC,8);
CheckEnum("G_SIGNAL_MATCH_DATA",G_SIGNAL_MATCH_DATA,16);
CheckEnum("G_SIGNAL_MATCH_UNBLOCKED",G_SIGNAL_MATCH_UNBLOCKED,32);
#elif __x86_64__
CheckEnum("G_SIGNAL_MATCH_ID",G_SIGNAL_MATCH_ID,1);
CheckEnum("G_SIGNAL_MATCH_DETAIL",G_SIGNAL_MATCH_DETAIL,2);
CheckEnum("G_SIGNAL_MATCH_CLOSURE",G_SIGNAL_MATCH_CLOSURE,4);
CheckEnum("G_SIGNAL_MATCH_FUNC",G_SIGNAL_MATCH_FUNC,8);
CheckEnum("G_SIGNAL_MATCH_DATA",G_SIGNAL_MATCH_DATA,16);
CheckEnum("G_SIGNAL_MATCH_UNBLOCKED",G_SIGNAL_MATCH_UNBLOCKED,32);
#elif __ia64__
CheckEnum("G_SIGNAL_MATCH_ID",G_SIGNAL_MATCH_ID,1);
CheckEnum("G_SIGNAL_MATCH_DETAIL",G_SIGNAL_MATCH_DETAIL,2);
CheckEnum("G_SIGNAL_MATCH_CLOSURE",G_SIGNAL_MATCH_CLOSURE,4);
CheckEnum("G_SIGNAL_MATCH_FUNC",G_SIGNAL_MATCH_FUNC,8);
CheckEnum("G_SIGNAL_MATCH_DATA",G_SIGNAL_MATCH_DATA,16);
CheckEnum("G_SIGNAL_MATCH_UNBLOCKED",G_SIGNAL_MATCH_UNBLOCKED,32);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11904,0);
Msg("Find size of anon-glib-2.0/glib-object.h-32 (11904)\n");
#endif

#if __i386__
CheckTypeSize(GSignalMatchType,4, 11905, 2)
#elif __x86_64__
CheckTypeSize(GSignalMatchType,4, 11905, 11)
#elif __ia64__
CheckTypeSize(GSignalMatchType,4, 11905, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalMatchType,4, 11905, 6)
#elif __powerpc64__
CheckTypeSize(GSignalMatchType,4, 11905, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalMatchType,4, 11905, 10)
#elif __s390x__
CheckTypeSize(GSignalMatchType,4, 11905, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11905,0);
Msg("Find size of GSignalMatchType (11905)\n");
#endif

#if __i386__
CheckTypeSize(struct _GFlagsValue,12, 11906, 2)
CheckMemberSize(struct _GFlagsValue,value_name,4,2,42094)
CheckOffset(struct _GFlagsValue,value_name,4,2,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,4,2,42095)
CheckOffset(struct _GFlagsValue,value_nick,8,2,42095)
#elif __x86_64__
CheckTypeSize(struct _GFlagsValue,24, 11906, 11)
CheckMemberSize(struct _GFlagsValue,value_name,8,11,42094)
CheckOffset(struct _GFlagsValue,value_name,8,11,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,8,11,42095)
CheckOffset(struct _GFlagsValue,value_nick,16,11,42095)
#elif __ia64__
CheckTypeSize(struct _GFlagsValue,24, 11906, 3)
CheckMemberSize(struct _GFlagsValue,value_name,8,3,42094)
CheckOffset(struct _GFlagsValue,value_name,8,3,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,8,3,42095)
CheckOffset(struct _GFlagsValue,value_nick,16,3,42095)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GFlagsValue,12, 11906, 6)
CheckMemberSize(struct _GFlagsValue,value_name,4,6,42094)
CheckOffset(struct _GFlagsValue,value_name,4,6,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,4,6,42095)
CheckOffset(struct _GFlagsValue,value_nick,8,6,42095)
#elif __powerpc64__
CheckTypeSize(struct _GFlagsValue,24, 11906, 9)
CheckMemberSize(struct _GFlagsValue,value_name,8,9,42094)
CheckOffset(struct _GFlagsValue,value_name,8,9,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,8,9,42095)
CheckOffset(struct _GFlagsValue,value_nick,16,9,42095)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GFlagsValue,12, 11906, 10)
CheckMemberSize(struct _GFlagsValue,value_name,4,10,42094)
CheckOffset(struct _GFlagsValue,value_name,4,10,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,4,10,42095)
CheckOffset(struct _GFlagsValue,value_nick,8,10,42095)
#elif __s390x__
CheckTypeSize(struct _GFlagsValue,24, 11906, 12)
CheckMemberSize(struct _GFlagsValue,value_name,8,12,42094)
CheckOffset(struct _GFlagsValue,value_name,8,12,42094)
CheckMemberSize(struct _GFlagsValue,value_nick,8,12,42095)
CheckOffset(struct _GFlagsValue,value_nick,16,12,42095)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11906,0);
Msg("Find size of _GFlagsValue (11906)\n");
#endif

#if __i386__
CheckTypeSize(GFlagsValue,12, 11907, 2)
#elif __x86_64__
CheckTypeSize(GFlagsValue,24, 11907, 11)
#elif __ia64__
CheckTypeSize(GFlagsValue,24, 11907, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFlagsValue,12, 11907, 6)
#elif __powerpc64__
CheckTypeSize(GFlagsValue,24, 11907, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFlagsValue,12, 11907, 10)
#elif __s390x__
CheckTypeSize(GFlagsValue,24, 11907, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11907,0);
Msg("Find size of GFlagsValue (11907)\n");
#endif

#if __i386__
CheckTypeSize(const GFlagsValue,12, 11908, 2)
#elif __x86_64__
CheckTypeSize(const GFlagsValue,24, 11908, 11)
#elif __ia64__
CheckTypeSize(const GFlagsValue,24, 11908, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GFlagsValue,12, 11908, 6)
#elif __powerpc64__
CheckTypeSize(const GFlagsValue,24, 11908, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GFlagsValue,12, 11908, 10)
#elif __s390x__
CheckTypeSize(const GFlagsValue,24, 11908, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11908,0);
Msg("Find size of const GFlagsValue (11908)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11909,0);
Msg("Find size of const GFlagsValue * (11909)\n");
#endif

#if __i386__
CheckTypeSize(GClosureMarshal,4, 11910, 2)
#elif __x86_64__
CheckTypeSize(GClosureMarshal,8, 11910, 11)
#elif __ia64__
CheckTypeSize(GClosureMarshal,8, 11910, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClosureMarshal,4, 11910, 6)
#elif __powerpc64__
CheckTypeSize(GClosureMarshal,8, 11910, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClosureMarshal,4, 11910, 10)
#elif __s390x__
CheckTypeSize(GClosureMarshal,8, 11910, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11910,0);
Msg("Find size of GClosureMarshal (11910)\n");
#endif

#if __i386__
CheckTypeSize(GCallback,4, 11911, 2)
#elif __x86_64__
CheckTypeSize(GCallback,8, 11911, 11)
#elif __ia64__
CheckTypeSize(GCallback,8, 11911, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCallback,4, 11911, 6)
#elif __powerpc64__
CheckTypeSize(GCallback,8, 11911, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCallback,4, 11911, 10)
#elif __s390x__
CheckTypeSize(GCallback,8, 11911, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11911,0);
Msg("Find size of GCallback (11911)\n");
#endif

#if __i386__
CheckTypeSize(GFlagsValue *,4, 11912, 2)
#elif __x86_64__
CheckTypeSize(GFlagsValue *,8, 11912, 11)
#elif __ia64__
CheckTypeSize(GFlagsValue *,8, 11912, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFlagsValue *,4, 11912, 6)
#elif __powerpc64__
CheckTypeSize(GFlagsValue *,8, 11912, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFlagsValue *,4, 11912, 10)
#elif __s390x__
CheckTypeSize(GFlagsValue *,8, 11912, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11912,0);
Msg("Find size of GFlagsValue * (11912)\n");
#endif

#if __i386__
CheckTypeSize(struct _GFlagsClass,16, 11913, 2)
CheckMemberSize(struct _GFlagsClass,mask,4,2,42097)
CheckOffset(struct _GFlagsClass,mask,4,2,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,2,42098)
CheckOffset(struct _GFlagsClass,n_values,8,2,42098)
CheckMemberSize(struct _GFlagsClass,values,4,2,42099)
CheckOffset(struct _GFlagsClass,values,12,2,42099)
#elif __x86_64__
CheckTypeSize(struct _GFlagsClass,24, 11913, 11)
CheckMemberSize(struct _GFlagsClass,mask,4,11,42097)
CheckOffset(struct _GFlagsClass,mask,8,11,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,11,42098)
CheckOffset(struct _GFlagsClass,n_values,12,11,42098)
CheckMemberSize(struct _GFlagsClass,values,8,11,42099)
CheckOffset(struct _GFlagsClass,values,16,11,42099)
#elif __ia64__
CheckTypeSize(struct _GFlagsClass,24, 11913, 3)
CheckMemberSize(struct _GFlagsClass,mask,4,3,42097)
CheckOffset(struct _GFlagsClass,mask,8,3,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,3,42098)
CheckOffset(struct _GFlagsClass,n_values,12,3,42098)
CheckMemberSize(struct _GFlagsClass,values,8,3,42099)
CheckOffset(struct _GFlagsClass,values,16,3,42099)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GFlagsClass,16, 11913, 6)
CheckMemberSize(struct _GFlagsClass,mask,4,6,42097)
CheckOffset(struct _GFlagsClass,mask,4,6,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,6,42098)
CheckOffset(struct _GFlagsClass,n_values,8,6,42098)
CheckMemberSize(struct _GFlagsClass,values,4,6,42099)
CheckOffset(struct _GFlagsClass,values,12,6,42099)
#elif __powerpc64__
CheckTypeSize(struct _GFlagsClass,24, 11913, 9)
CheckMemberSize(struct _GFlagsClass,mask,4,9,42097)
CheckOffset(struct _GFlagsClass,mask,8,9,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,9,42098)
CheckOffset(struct _GFlagsClass,n_values,12,9,42098)
CheckMemberSize(struct _GFlagsClass,values,8,9,42099)
CheckOffset(struct _GFlagsClass,values,16,9,42099)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GFlagsClass,16, 11913, 10)
CheckMemberSize(struct _GFlagsClass,mask,4,10,42097)
CheckOffset(struct _GFlagsClass,mask,4,10,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,10,42098)
CheckOffset(struct _GFlagsClass,n_values,8,10,42098)
CheckMemberSize(struct _GFlagsClass,values,4,10,42099)
CheckOffset(struct _GFlagsClass,values,12,10,42099)
#elif __s390x__
CheckTypeSize(struct _GFlagsClass,24, 11913, 12)
CheckMemberSize(struct _GFlagsClass,mask,4,12,42097)
CheckOffset(struct _GFlagsClass,mask,8,12,42097)
CheckMemberSize(struct _GFlagsClass,n_values,4,12,42098)
CheckOffset(struct _GFlagsClass,n_values,12,12,42098)
CheckMemberSize(struct _GFlagsClass,values,8,12,42099)
CheckOffset(struct _GFlagsClass,values,16,12,42099)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11913,0);
Msg("Find size of _GFlagsClass (11913)\n");
#endif

#if __i386__
CheckTypeSize(GFlagsClass,16, 11914, 2)
#elif __x86_64__
CheckTypeSize(GFlagsClass,24, 11914, 11)
#elif __ia64__
CheckTypeSize(GFlagsClass,24, 11914, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFlagsClass,16, 11914, 6)
#elif __powerpc64__
CheckTypeSize(GFlagsClass,24, 11914, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFlagsClass,16, 11914, 10)
#elif __s390x__
CheckTypeSize(GFlagsClass,24, 11914, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11914,0);
Msg("Find size of GFlagsClass (11914)\n");
#endif

#if __i386__
CheckTypeSize(GFlagsClass *,4, 11915, 2)
#elif __x86_64__
CheckTypeSize(GFlagsClass *,8, 11915, 11)
#elif __ia64__
CheckTypeSize(GFlagsClass *,8, 11915, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GFlagsClass *,4, 11915, 6)
#elif __powerpc64__
CheckTypeSize(GFlagsClass *,8, 11915, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GFlagsClass *,4, 11915, 10)
#elif __s390x__
CheckTypeSize(GFlagsClass *,8, 11915, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11915,0);
Msg("Find size of GFlagsClass * (11915)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11916,0);
Msg("Find size of fptr_glib-object_91 (11916)\n");
#endif

#if __i386__
CheckTypeSize(GTypeClassCacheFunc,4, 11917, 2)
#elif __x86_64__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 11)
#elif __ia64__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeClassCacheFunc,4, 11917, 6)
#elif __powerpc64__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeClassCacheFunc,4, 11917, 10)
#elif __s390x__
CheckTypeSize(GTypeClassCacheFunc,8, 11917, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11917,0);
Msg("Find size of GTypeClassCacheFunc (11917)\n");
#endif

#if __i386__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 2)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,2,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,2,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,2,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,2,42111)
#elif __x86_64__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 11)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,11,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,11,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,11,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,11,42111)
#elif __ia64__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 3)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,3,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,3,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,3,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,3,42111)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 6)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,6,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,6,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,6,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,6,42111)
#elif __powerpc64__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 9)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,9,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,9,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,9,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,9,42111)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 10)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,10,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,10,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,10,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,10,42111)
#elif __s390x__
CheckTypeSize(struct _GSignalInvocationHint,12, 11918, 12)
CheckMemberSize(struct _GSignalInvocationHint,detail,4,12,42103)
CheckOffset(struct _GSignalInvocationHint,detail,4,12,42103)
CheckMemberSize(struct _GSignalInvocationHint,run_type,4,12,42111)
CheckOffset(struct _GSignalInvocationHint,run_type,8,12,42111)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11918,0);
Msg("Find size of _GSignalInvocationHint (11918)\n");
#endif

#if __i386__
CheckEnum("G_SIGNAL_RUN_FIRST",G_SIGNAL_RUN_FIRST,1);
CheckEnum("G_SIGNAL_RUN_LAST",G_SIGNAL_RUN_LAST,2);
CheckEnum("G_SIGNAL_RUN_CLEANUP",G_SIGNAL_RUN_CLEANUP,4);
CheckEnum("G_SIGNAL_NO_RECURSE",G_SIGNAL_NO_RECURSE,8);
CheckEnum("G_SIGNAL_DETAILED",G_SIGNAL_DETAILED,16);
CheckEnum("G_SIGNAL_ACTION",G_SIGNAL_ACTION,32);
CheckEnum("G_SIGNAL_NO_HOOKS",G_SIGNAL_NO_HOOKS,64);
#elif __x86_64__
CheckEnum("G_SIGNAL_RUN_FIRST",G_SIGNAL_RUN_FIRST,1);
CheckEnum("G_SIGNAL_RUN_LAST",G_SIGNAL_RUN_LAST,2);
CheckEnum("G_SIGNAL_RUN_CLEANUP",G_SIGNAL_RUN_CLEANUP,4);
CheckEnum("G_SIGNAL_NO_RECURSE",G_SIGNAL_NO_RECURSE,8);
CheckEnum("G_SIGNAL_DETAILED",G_SIGNAL_DETAILED,16);
CheckEnum("G_SIGNAL_ACTION",G_SIGNAL_ACTION,32);
CheckEnum("G_SIGNAL_NO_HOOKS",G_SIGNAL_NO_HOOKS,64);
#elif __ia64__
CheckEnum("G_SIGNAL_RUN_FIRST",G_SIGNAL_RUN_FIRST,1);
CheckEnum("G_SIGNAL_RUN_LAST",G_SIGNAL_RUN_LAST,2);
CheckEnum("G_SIGNAL_RUN_CLEANUP",G_SIGNAL_RUN_CLEANUP,4);
CheckEnum("G_SIGNAL_NO_RECURSE",G_SIGNAL_NO_RECURSE,8);
CheckEnum("G_SIGNAL_DETAILED",G_SIGNAL_DETAILED,16);
CheckEnum("G_SIGNAL_ACTION",G_SIGNAL_ACTION,32);
CheckEnum("G_SIGNAL_NO_HOOKS",G_SIGNAL_NO_HOOKS,64);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11919,0);
Msg("Find size of anon-glib-2.0/glib-object.h-30 (11919)\n");
#endif

#if __i386__
CheckTypeSize(GSignalFlags,4, 11920, 2)
#elif __x86_64__
CheckTypeSize(GSignalFlags,4, 11920, 11)
#elif __ia64__
CheckTypeSize(GSignalFlags,4, 11920, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalFlags,4, 11920, 6)
#elif __powerpc64__
CheckTypeSize(GSignalFlags,4, 11920, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalFlags,4, 11920, 10)
#elif __s390x__
CheckTypeSize(GSignalFlags,4, 11920, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11920,0);
Msg("Find size of GSignalFlags (11920)\n");
#endif

#if __i386__
CheckTypeSize(GSignalInvocationHint,12, 11921, 2)
#elif __x86_64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 11)
#elif __ia64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 6)
#elif __powerpc64__
CheckTypeSize(GSignalInvocationHint,12, 11921, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalInvocationHint,12, 11921, 10)
#elif __s390x__
CheckTypeSize(GSignalInvocationHint,12, 11921, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11921,0);
Msg("Find size of GSignalInvocationHint (11921)\n");
#endif

#if __i386__
CheckTypeSize(GSignalInvocationHint *,4, 11922, 2)
#elif __x86_64__
CheckTypeSize(GSignalInvocationHint *,8, 11922, 11)
#elif __ia64__
CheckTypeSize(GSignalInvocationHint *,8, 11922, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalInvocationHint *,4, 11922, 6)
#elif __powerpc64__
CheckTypeSize(GSignalInvocationHint *,8, 11922, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalInvocationHint *,4, 11922, 10)
#elif __s390x__
CheckTypeSize(GSignalInvocationHint *,8, 11922, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11922,0);
Msg("Find size of GSignalInvocationHint * (11922)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11923,0);
Msg("Find size of fptr_glib-object_174 (11923)\n");
#endif

#if __i386__
CheckTypeSize(GWeakNotify,4, 11924, 2)
#elif __x86_64__
CheckTypeSize(GWeakNotify,8, 11924, 11)
#elif __ia64__
CheckTypeSize(GWeakNotify,8, 11924, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GWeakNotify,4, 11924, 6)
#elif __powerpc64__
CheckTypeSize(GWeakNotify,8, 11924, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GWeakNotify,4, 11924, 10)
#elif __s390x__
CheckTypeSize(GWeakNotify,8, 11924, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11924,0);
Msg("Find size of GWeakNotify (11924)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeInfo,36, 11925, 2)
CheckMemberSize(struct _GTypeInfo,base_init,4,2,42115)
CheckOffset(struct _GTypeInfo,base_init,4,2,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,4,2,42116)
CheckOffset(struct _GTypeInfo,base_finalize,8,2,42116)
CheckMemberSize(struct _GTypeInfo,class_init,4,2,42117)
CheckOffset(struct _GTypeInfo,class_init,12,2,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,4,2,42118)
CheckOffset(struct _GTypeInfo,class_finalize,16,2,42118)
CheckMemberSize(struct _GTypeInfo,class_data,4,2,42119)
CheckOffset(struct _GTypeInfo,class_data,20,2,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,2,42120)
CheckOffset(struct _GTypeInfo,instance_size,24,2,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,2,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,26,2,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,4,2,42124)
CheckOffset(struct _GTypeInfo,instance_init,28,2,42124)
CheckMemberSize(struct _GTypeInfo,value_table,4,2,42145)
CheckOffset(struct _GTypeInfo,value_table,32,2,42145)
#elif __x86_64__
CheckTypeSize(struct _GTypeInfo,72, 11925, 11)
CheckMemberSize(struct _GTypeInfo,base_init,8,11,42115)
CheckOffset(struct _GTypeInfo,base_init,8,11,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,8,11,42116)
CheckOffset(struct _GTypeInfo,base_finalize,16,11,42116)
CheckMemberSize(struct _GTypeInfo,class_init,8,11,42117)
CheckOffset(struct _GTypeInfo,class_init,24,11,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,8,11,42118)
CheckOffset(struct _GTypeInfo,class_finalize,32,11,42118)
CheckMemberSize(struct _GTypeInfo,class_data,8,11,42119)
CheckOffset(struct _GTypeInfo,class_data,40,11,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,11,42120)
CheckOffset(struct _GTypeInfo,instance_size,48,11,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,11,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,50,11,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,8,11,42124)
CheckOffset(struct _GTypeInfo,instance_init,56,11,42124)
CheckMemberSize(struct _GTypeInfo,value_table,8,11,42145)
CheckOffset(struct _GTypeInfo,value_table,64,11,42145)
#elif __ia64__
CheckTypeSize(struct _GTypeInfo,72, 11925, 3)
CheckMemberSize(struct _GTypeInfo,base_init,8,3,42115)
CheckOffset(struct _GTypeInfo,base_init,8,3,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,8,3,42116)
CheckOffset(struct _GTypeInfo,base_finalize,16,3,42116)
CheckMemberSize(struct _GTypeInfo,class_init,8,3,42117)
CheckOffset(struct _GTypeInfo,class_init,24,3,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,8,3,42118)
CheckOffset(struct _GTypeInfo,class_finalize,32,3,42118)
CheckMemberSize(struct _GTypeInfo,class_data,8,3,42119)
CheckOffset(struct _GTypeInfo,class_data,40,3,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,3,42120)
CheckOffset(struct _GTypeInfo,instance_size,48,3,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,3,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,50,3,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,8,3,42124)
CheckOffset(struct _GTypeInfo,instance_init,56,3,42124)
CheckMemberSize(struct _GTypeInfo,value_table,8,3,42145)
CheckOffset(struct _GTypeInfo,value_table,64,3,42145)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeInfo,36, 11925, 6)
CheckMemberSize(struct _GTypeInfo,base_init,4,6,42115)
CheckOffset(struct _GTypeInfo,base_init,4,6,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,4,6,42116)
CheckOffset(struct _GTypeInfo,base_finalize,8,6,42116)
CheckMemberSize(struct _GTypeInfo,class_init,4,6,42117)
CheckOffset(struct _GTypeInfo,class_init,12,6,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,4,6,42118)
CheckOffset(struct _GTypeInfo,class_finalize,16,6,42118)
CheckMemberSize(struct _GTypeInfo,class_data,4,6,42119)
CheckOffset(struct _GTypeInfo,class_data,20,6,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,6,42120)
CheckOffset(struct _GTypeInfo,instance_size,24,6,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,6,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,26,6,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,4,6,42124)
CheckOffset(struct _GTypeInfo,instance_init,28,6,42124)
CheckMemberSize(struct _GTypeInfo,value_table,4,6,42145)
CheckOffset(struct _GTypeInfo,value_table,32,6,42145)
#elif __powerpc64__
CheckTypeSize(struct _GTypeInfo,72, 11925, 9)
CheckMemberSize(struct _GTypeInfo,base_init,8,9,42115)
CheckOffset(struct _GTypeInfo,base_init,8,9,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,8,9,42116)
CheckOffset(struct _GTypeInfo,base_finalize,16,9,42116)
CheckMemberSize(struct _GTypeInfo,class_init,8,9,42117)
CheckOffset(struct _GTypeInfo,class_init,24,9,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,8,9,42118)
CheckOffset(struct _GTypeInfo,class_finalize,32,9,42118)
CheckMemberSize(struct _GTypeInfo,class_data,8,9,42119)
CheckOffset(struct _GTypeInfo,class_data,40,9,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,9,42120)
CheckOffset(struct _GTypeInfo,instance_size,48,9,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,9,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,50,9,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,8,9,42124)
CheckOffset(struct _GTypeInfo,instance_init,56,9,42124)
CheckMemberSize(struct _GTypeInfo,value_table,8,9,42145)
CheckOffset(struct _GTypeInfo,value_table,64,9,42145)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeInfo,36, 11925, 10)
CheckMemberSize(struct _GTypeInfo,base_init,4,10,42115)
CheckOffset(struct _GTypeInfo,base_init,4,10,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,4,10,42116)
CheckOffset(struct _GTypeInfo,base_finalize,8,10,42116)
CheckMemberSize(struct _GTypeInfo,class_init,4,10,42117)
CheckOffset(struct _GTypeInfo,class_init,12,10,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,4,10,42118)
CheckOffset(struct _GTypeInfo,class_finalize,16,10,42118)
CheckMemberSize(struct _GTypeInfo,class_data,4,10,42119)
CheckOffset(struct _GTypeInfo,class_data,20,10,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,10,42120)
CheckOffset(struct _GTypeInfo,instance_size,24,10,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,10,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,26,10,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,4,10,42124)
CheckOffset(struct _GTypeInfo,instance_init,28,10,42124)
CheckMemberSize(struct _GTypeInfo,value_table,4,10,42145)
CheckOffset(struct _GTypeInfo,value_table,32,10,42145)
#elif __s390x__
CheckTypeSize(struct _GTypeInfo,72, 11925, 12)
CheckMemberSize(struct _GTypeInfo,base_init,8,12,42115)
CheckOffset(struct _GTypeInfo,base_init,8,12,42115)
CheckMemberSize(struct _GTypeInfo,base_finalize,8,12,42116)
CheckOffset(struct _GTypeInfo,base_finalize,16,12,42116)
CheckMemberSize(struct _GTypeInfo,class_init,8,12,42117)
CheckOffset(struct _GTypeInfo,class_init,24,12,42117)
CheckMemberSize(struct _GTypeInfo,class_finalize,8,12,42118)
CheckOffset(struct _GTypeInfo,class_finalize,32,12,42118)
CheckMemberSize(struct _GTypeInfo,class_data,8,12,42119)
CheckOffset(struct _GTypeInfo,class_data,40,12,42119)
CheckMemberSize(struct _GTypeInfo,instance_size,2,12,42120)
CheckOffset(struct _GTypeInfo,instance_size,48,12,42120)
CheckMemberSize(struct _GTypeInfo,n_preallocs,2,12,42121)
CheckOffset(struct _GTypeInfo,n_preallocs,50,12,42121)
CheckMemberSize(struct _GTypeInfo,instance_init,8,12,42124)
CheckOffset(struct _GTypeInfo,instance_init,56,12,42124)
CheckMemberSize(struct _GTypeInfo,value_table,8,12,42145)
CheckOffset(struct _GTypeInfo,value_table,64,12,42145)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11925,0);
Msg("Find size of _GTypeInfo (11925)\n");
#endif

#if __i386__
CheckTypeSize(GBaseInitFunc,4, 11926, 2)
#elif __x86_64__
CheckTypeSize(GBaseInitFunc,8, 11926, 11)
#elif __ia64__
CheckTypeSize(GBaseInitFunc,8, 11926, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GBaseInitFunc,4, 11926, 6)
#elif __powerpc64__
CheckTypeSize(GBaseInitFunc,8, 11926, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GBaseInitFunc,4, 11926, 10)
#elif __s390x__
CheckTypeSize(GBaseInitFunc,8, 11926, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11926,0);
Msg("Find size of GBaseInitFunc (11926)\n");
#endif

#if __i386__
CheckTypeSize(GBaseFinalizeFunc,4, 11927, 2)
#elif __x86_64__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 11)
#elif __ia64__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GBaseFinalizeFunc,4, 11927, 6)
#elif __powerpc64__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GBaseFinalizeFunc,4, 11927, 10)
#elif __s390x__
CheckTypeSize(GBaseFinalizeFunc,8, 11927, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11927,0);
Msg("Find size of GBaseFinalizeFunc (11927)\n");
#endif

#if __i386__
CheckTypeSize(GClassInitFunc,4, 11928, 2)
#elif __x86_64__
CheckTypeSize(GClassInitFunc,8, 11928, 11)
#elif __ia64__
CheckTypeSize(GClassInitFunc,8, 11928, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClassInitFunc,4, 11928, 6)
#elif __powerpc64__
CheckTypeSize(GClassInitFunc,8, 11928, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClassInitFunc,4, 11928, 10)
#elif __s390x__
CheckTypeSize(GClassInitFunc,8, 11928, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11928,0);
Msg("Find size of GClassInitFunc (11928)\n");
#endif

#if __i386__
CheckTypeSize(GClassFinalizeFunc,4, 11929, 2)
#elif __x86_64__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 11)
#elif __ia64__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GClassFinalizeFunc,4, 11929, 6)
#elif __powerpc64__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GClassFinalizeFunc,4, 11929, 10)
#elif __s390x__
CheckTypeSize(GClassFinalizeFunc,8, 11929, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11929,0);
Msg("Find size of GClassFinalizeFunc (11929)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11930,0);
Msg("Find size of fptr_glib-object_142 (11930)\n");
#endif

#if __i386__
CheckTypeSize(GInstanceInitFunc,4, 11931, 2)
#elif __x86_64__
CheckTypeSize(GInstanceInitFunc,8, 11931, 11)
#elif __ia64__
CheckTypeSize(GInstanceInitFunc,8, 11931, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GInstanceInitFunc,4, 11931, 6)
#elif __powerpc64__
CheckTypeSize(GInstanceInitFunc,8, 11931, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GInstanceInitFunc,4, 11931, 10)
#elif __s390x__
CheckTypeSize(GInstanceInitFunc,8, 11931, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11931,0);
Msg("Find size of GInstanceInitFunc (11931)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeValueTable,32, 11932, 2)
CheckMemberSize(struct _GTypeValueTable,value_free,4,2,42127)
CheckOffset(struct _GTypeValueTable,value_free,4,2,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,4,2,42130)
CheckOffset(struct _GTypeValueTable,value_copy,8,2,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,4,2,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,12,2,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,4,2,42133)
CheckOffset(struct _GTypeValueTable,collect_format,16,2,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,4,2,42138)
CheckOffset(struct _GTypeValueTable,collect_value,20,2,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,4,2,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,24,2,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,4,2,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,28,2,42144)
#elif __x86_64__
CheckTypeSize(struct _GTypeValueTable,64, 11932, 11)
CheckMemberSize(struct _GTypeValueTable,value_free,8,11,42127)
CheckOffset(struct _GTypeValueTable,value_free,8,11,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,8,11,42130)
CheckOffset(struct _GTypeValueTable,value_copy,16,11,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,8,11,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,24,11,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,8,11,42133)
CheckOffset(struct _GTypeValueTable,collect_format,32,11,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,8,11,42138)
CheckOffset(struct _GTypeValueTable,collect_value,40,11,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,8,11,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,48,11,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,8,11,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,56,11,42144)
#elif __ia64__
CheckTypeSize(struct _GTypeValueTable,64, 11932, 3)
CheckMemberSize(struct _GTypeValueTable,value_free,8,3,42127)
CheckOffset(struct _GTypeValueTable,value_free,8,3,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,8,3,42130)
CheckOffset(struct _GTypeValueTable,value_copy,16,3,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,8,3,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,24,3,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,8,3,42133)
CheckOffset(struct _GTypeValueTable,collect_format,32,3,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,8,3,42138)
CheckOffset(struct _GTypeValueTable,collect_value,40,3,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,8,3,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,48,3,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,8,3,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,56,3,42144)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeValueTable,32, 11932, 6)
CheckMemberSize(struct _GTypeValueTable,value_free,4,6,42127)
CheckOffset(struct _GTypeValueTable,value_free,4,6,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,4,6,42130)
CheckOffset(struct _GTypeValueTable,value_copy,8,6,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,4,6,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,12,6,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,4,6,42133)
CheckOffset(struct _GTypeValueTable,collect_format,16,6,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,4,6,42138)
CheckOffset(struct _GTypeValueTable,collect_value,20,6,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,4,6,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,24,6,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,4,6,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,28,6,42144)
#elif __powerpc64__
CheckTypeSize(struct _GTypeValueTable,64, 11932, 9)
CheckMemberSize(struct _GTypeValueTable,value_free,8,9,42127)
CheckOffset(struct _GTypeValueTable,value_free,8,9,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,8,9,42130)
CheckOffset(struct _GTypeValueTable,value_copy,16,9,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,8,9,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,24,9,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,8,9,42133)
CheckOffset(struct _GTypeValueTable,collect_format,32,9,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,8,9,42138)
CheckOffset(struct _GTypeValueTable,collect_value,40,9,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,8,9,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,48,9,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,8,9,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,56,9,42144)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeValueTable,32, 11932, 10)
CheckMemberSize(struct _GTypeValueTable,value_free,4,10,42127)
CheckOffset(struct _GTypeValueTable,value_free,4,10,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,4,10,42130)
CheckOffset(struct _GTypeValueTable,value_copy,8,10,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,4,10,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,12,10,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,4,10,42133)
CheckOffset(struct _GTypeValueTable,collect_format,16,10,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,4,10,42138)
CheckOffset(struct _GTypeValueTable,collect_value,20,10,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,4,10,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,24,10,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,4,10,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,28,10,42144)
#elif __s390x__
CheckTypeSize(struct _GTypeValueTable,64, 11932, 12)
CheckMemberSize(struct _GTypeValueTable,value_free,8,12,42127)
CheckOffset(struct _GTypeValueTable,value_free,8,12,42127)
CheckMemberSize(struct _GTypeValueTable,value_copy,8,12,42130)
CheckOffset(struct _GTypeValueTable,value_copy,16,12,42130)
CheckMemberSize(struct _GTypeValueTable,value_peek_pointer,8,12,42132)
CheckOffset(struct _GTypeValueTable,value_peek_pointer,24,12,42132)
CheckMemberSize(struct _GTypeValueTable,collect_format,8,12,42133)
CheckOffset(struct _GTypeValueTable,collect_format,32,12,42133)
CheckMemberSize(struct _GTypeValueTable,collect_value,8,12,42138)
CheckOffset(struct _GTypeValueTable,collect_value,40,12,42138)
CheckMemberSize(struct _GTypeValueTable,lcopy_format,8,12,42139)
CheckOffset(struct _GTypeValueTable,lcopy_format,48,12,42139)
CheckMemberSize(struct _GTypeValueTable,lcopy_value,8,12,42144)
CheckOffset(struct _GTypeValueTable,lcopy_value,56,12,42144)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11932,0);
Msg("Find size of _GTypeValueTable (11932)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11933,0);
Msg("Find size of fptr_glib-object_32 (11933)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11934,0);
Msg("Find size of fptr_glib-object_175 (11934)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11935,0);
Msg("Find size of fptr_glib-object_96 (11935)\n");
#endif

#if __i386__
CheckTypeSize(GTypeCValue,0, 11937, 2)
#elif __x86_64__
CheckTypeSize(GTypeCValue,0, 11937, 11)
#elif __ia64__
CheckTypeSize(GTypeCValue,0, 11937, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11937,0);
Msg("Find size of GTypeCValue (11937)\n");
#endif

#if __i386__
CheckTypeSize(GTypeCValue *,4, 11938, 2)
#elif __x86_64__
CheckTypeSize(GTypeCValue *,8, 11938, 11)
#elif __ia64__
CheckTypeSize(GTypeCValue *,8, 11938, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeCValue *,4, 11938, 6)
#elif __powerpc64__
CheckTypeSize(GTypeCValue *,8, 11938, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeCValue *,4, 11938, 10)
#elif __s390x__
CheckTypeSize(GTypeCValue *,8, 11938, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11938,0);
Msg("Find size of GTypeCValue * (11938)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11939,0);
Msg("Find size of fptr_glib-object_197 (11939)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11940,0);
Msg("Find size of fptr_glib-object_196 (11940)\n");
#endif

#if __i386__
CheckTypeSize(GTypeValueTable,32, 11941, 2)
#elif __x86_64__
CheckTypeSize(GTypeValueTable,64, 11941, 11)
#elif __ia64__
CheckTypeSize(GTypeValueTable,64, 11941, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeValueTable,32, 11941, 6)
#elif __powerpc64__
CheckTypeSize(GTypeValueTable,64, 11941, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeValueTable,32, 11941, 10)
#elif __s390x__
CheckTypeSize(GTypeValueTable,64, 11941, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11941,0);
Msg("Find size of GTypeValueTable (11941)\n");
#endif

#if __i386__
CheckTypeSize(const GTypeValueTable,32, 11942, 2)
#elif __x86_64__
CheckTypeSize(const GTypeValueTable,64, 11942, 11)
#elif __ia64__
CheckTypeSize(const GTypeValueTable,64, 11942, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GTypeValueTable,32, 11942, 6)
#elif __powerpc64__
CheckTypeSize(const GTypeValueTable,64, 11942, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GTypeValueTable,32, 11942, 10)
#elif __s390x__
CheckTypeSize(const GTypeValueTable,64, 11942, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11942,0);
Msg("Find size of const GTypeValueTable (11942)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11943,0);
Msg("Find size of const GTypeValueTable * (11943)\n");
#endif

#if __i386__
CheckTypeSize(GTypeInfo,36, 11944, 2)
#elif __x86_64__
CheckTypeSize(GTypeInfo,72, 11944, 11)
#elif __ia64__
CheckTypeSize(GTypeInfo,72, 11944, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeInfo,36, 11944, 6)
#elif __powerpc64__
CheckTypeSize(GTypeInfo,72, 11944, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeInfo,36, 11944, 10)
#elif __s390x__
CheckTypeSize(GTypeInfo,72, 11944, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11944,0);
Msg("Find size of GTypeInfo (11944)\n");
#endif

#if __i386__
CheckTypeSize(const GTypeInfo,36, 11945, 2)
#elif __x86_64__
CheckTypeSize(const GTypeInfo,72, 11945, 11)
#elif __ia64__
CheckTypeSize(const GTypeInfo,72, 11945, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GTypeInfo,36, 11945, 6)
#elif __powerpc64__
CheckTypeSize(const GTypeInfo,72, 11945, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GTypeInfo,36, 11945, 10)
#elif __s390x__
CheckTypeSize(const GTypeInfo,72, 11945, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11945,0);
Msg("Find size of const GTypeInfo (11945)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11946,0);
Msg("Find size of const GTypeInfo * (11946)\n");
#endif

#if __i386__
CheckEnum("G_TYPE_FLAG_ABSTRACT",G_TYPE_FLAG_ABSTRACT,16);
CheckEnum("G_TYPE_FLAG_VALUE_ABSTRACT",G_TYPE_FLAG_VALUE_ABSTRACT,32);
#elif __x86_64__
CheckEnum("G_TYPE_FLAG_ABSTRACT",G_TYPE_FLAG_ABSTRACT,16);
CheckEnum("G_TYPE_FLAG_VALUE_ABSTRACT",G_TYPE_FLAG_VALUE_ABSTRACT,32);
#elif __ia64__
CheckEnum("G_TYPE_FLAG_ABSTRACT",G_TYPE_FLAG_ABSTRACT,16);
CheckEnum("G_TYPE_FLAG_VALUE_ABSTRACT",G_TYPE_FLAG_VALUE_ABSTRACT,32);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11947,0);
Msg("Find size of anon-glib-2.0/glib-object.h-49 (11947)\n");
#endif

#if __i386__
CheckTypeSize(GTypeFlags,4, 11948, 2)
#elif __x86_64__
CheckTypeSize(GTypeFlags,4, 11948, 11)
#elif __ia64__
CheckTypeSize(GTypeFlags,4, 11948, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeFlags,4, 11948, 6)
#elif __powerpc64__
CheckTypeSize(GTypeFlags,4, 11948, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeFlags,4, 11948, 10)
#elif __s390x__
CheckTypeSize(GTypeFlags,4, 11948, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11948,0);
Msg("Find size of GTypeFlags (11948)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeModule,28, 11949, 2)
CheckMemberSize(struct _GTypeModule,use_count,4,2,42149)
CheckOffset(struct _GTypeModule,use_count,12,2,42149)
CheckMemberSize(struct _GTypeModule,type_infos,4,2,42150)
CheckOffset(struct _GTypeModule,type_infos,16,2,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,4,2,42151)
CheckOffset(struct _GTypeModule,interface_infos,20,2,42151)
CheckMemberSize(struct _GTypeModule,name,4,2,42152)
CheckOffset(struct _GTypeModule,name,24,2,42152)
#elif __x86_64__
CheckTypeSize(struct _GTypeModule,56, 11949, 11)
CheckMemberSize(struct _GTypeModule,use_count,4,11,42149)
CheckOffset(struct _GTypeModule,use_count,24,11,42149)
CheckMemberSize(struct _GTypeModule,type_infos,8,11,42150)
CheckOffset(struct _GTypeModule,type_infos,32,11,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,8,11,42151)
CheckOffset(struct _GTypeModule,interface_infos,40,11,42151)
CheckMemberSize(struct _GTypeModule,name,8,11,42152)
CheckOffset(struct _GTypeModule,name,48,11,42152)
#elif __ia64__
CheckTypeSize(struct _GTypeModule,56, 11949, 3)
CheckMemberSize(struct _GTypeModule,use_count,4,3,42149)
CheckOffset(struct _GTypeModule,use_count,24,3,42149)
CheckMemberSize(struct _GTypeModule,type_infos,8,3,42150)
CheckOffset(struct _GTypeModule,type_infos,32,3,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,8,3,42151)
CheckOffset(struct _GTypeModule,interface_infos,40,3,42151)
CheckMemberSize(struct _GTypeModule,name,8,3,42152)
CheckOffset(struct _GTypeModule,name,48,3,42152)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeModule,28, 11949, 6)
CheckMemberSize(struct _GTypeModule,use_count,4,6,42149)
CheckOffset(struct _GTypeModule,use_count,12,6,42149)
CheckMemberSize(struct _GTypeModule,type_infos,4,6,42150)
CheckOffset(struct _GTypeModule,type_infos,16,6,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,4,6,42151)
CheckOffset(struct _GTypeModule,interface_infos,20,6,42151)
CheckMemberSize(struct _GTypeModule,name,4,6,42152)
CheckOffset(struct _GTypeModule,name,24,6,42152)
#elif __powerpc64__
CheckTypeSize(struct _GTypeModule,56, 11949, 9)
CheckMemberSize(struct _GTypeModule,use_count,4,9,42149)
CheckOffset(struct _GTypeModule,use_count,24,9,42149)
CheckMemberSize(struct _GTypeModule,type_infos,8,9,42150)
CheckOffset(struct _GTypeModule,type_infos,32,9,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,8,9,42151)
CheckOffset(struct _GTypeModule,interface_infos,40,9,42151)
CheckMemberSize(struct _GTypeModule,name,8,9,42152)
CheckOffset(struct _GTypeModule,name,48,9,42152)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeModule,28, 11949, 10)
CheckMemberSize(struct _GTypeModule,use_count,4,10,42149)
CheckOffset(struct _GTypeModule,use_count,12,10,42149)
CheckMemberSize(struct _GTypeModule,type_infos,4,10,42150)
CheckOffset(struct _GTypeModule,type_infos,16,10,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,4,10,42151)
CheckOffset(struct _GTypeModule,interface_infos,20,10,42151)
CheckMemberSize(struct _GTypeModule,name,4,10,42152)
CheckOffset(struct _GTypeModule,name,24,10,42152)
#elif __s390x__
CheckTypeSize(struct _GTypeModule,56, 11949, 12)
CheckMemberSize(struct _GTypeModule,use_count,4,12,42149)
CheckOffset(struct _GTypeModule,use_count,24,12,42149)
CheckMemberSize(struct _GTypeModule,type_infos,8,12,42150)
CheckOffset(struct _GTypeModule,type_infos,32,12,42150)
CheckMemberSize(struct _GTypeModule,interface_infos,8,12,42151)
CheckOffset(struct _GTypeModule,interface_infos,40,12,42151)
CheckMemberSize(struct _GTypeModule,name,8,12,42152)
CheckOffset(struct _GTypeModule,name,48,12,42152)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11949,0);
Msg("Find size of _GTypeModule (11949)\n");
#endif

#if __i386__
CheckTypeSize(GTypeModule,28, 11950, 2)
#elif __x86_64__
CheckTypeSize(GTypeModule,56, 11950, 11)
#elif __ia64__
CheckTypeSize(GTypeModule,56, 11950, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeModule,28, 11950, 6)
#elif __powerpc64__
CheckTypeSize(GTypeModule,56, 11950, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeModule,28, 11950, 10)
#elif __s390x__
CheckTypeSize(GTypeModule,56, 11950, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11950,0);
Msg("Find size of GTypeModule (11950)\n");
#endif

#if __i386__
CheckTypeSize(GTypeModule *,4, 11951, 2)
#elif __x86_64__
CheckTypeSize(GTypeModule *,8, 11951, 11)
#elif __ia64__
CheckTypeSize(GTypeModule *,8, 11951, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeModule *,4, 11951, 6)
#elif __powerpc64__
CheckTypeSize(GTypeModule *,8, 11951, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeModule *,4, 11951, 10)
#elif __s390x__
CheckTypeSize(GTypeModule *,8, 11951, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11951,0);
Msg("Find size of GTypeModule * (11951)\n");
#endif

#if __i386__
CheckTypeSize(GTypeInfo *,4, 11952, 2)
#elif __x86_64__
CheckTypeSize(GTypeInfo *,8, 11952, 11)
#elif __ia64__
CheckTypeSize(GTypeInfo *,8, 11952, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeInfo *,4, 11952, 6)
#elif __powerpc64__
CheckTypeSize(GTypeInfo *,8, 11952, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeInfo *,4, 11952, 10)
#elif __s390x__
CheckTypeSize(GTypeInfo *,8, 11952, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11952,0);
Msg("Find size of GTypeInfo * (11952)\n");
#endif

#if __i386__
CheckTypeSize(GTypeValueTable *,4, 11953, 2)
#elif __x86_64__
CheckTypeSize(GTypeValueTable *,8, 11953, 11)
#elif __ia64__
CheckTypeSize(GTypeValueTable *,8, 11953, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeValueTable *,4, 11953, 6)
#elif __powerpc64__
CheckTypeSize(GTypeValueTable *,8, 11953, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeValueTable *,4, 11953, 10)
#elif __s390x__
CheckTypeSize(GTypeValueTable *,8, 11953, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11953,0);
Msg("Find size of GTypeValueTable * (11953)\n");
#endif

#if __i386__
CheckTypeSize(struct _GInterfaceInfo,12, 11954, 2)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,4,2,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,4,2,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,4,2,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,8,2,42155)
#elif __x86_64__
CheckTypeSize(struct _GInterfaceInfo,24, 11954, 11)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,8,11,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,8,11,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,8,11,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,16,11,42155)
#elif __ia64__
CheckTypeSize(struct _GInterfaceInfo,24, 11954, 3)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,8,3,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,8,3,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,8,3,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,16,3,42155)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GInterfaceInfo,12, 11954, 6)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,4,6,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,4,6,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,4,6,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,8,6,42155)
#elif __powerpc64__
CheckTypeSize(struct _GInterfaceInfo,24, 11954, 9)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,8,9,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,8,9,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,8,9,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,16,9,42155)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GInterfaceInfo,12, 11954, 10)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,4,10,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,4,10,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,4,10,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,8,10,42155)
#elif __s390x__
CheckTypeSize(struct _GInterfaceInfo,24, 11954, 12)
CheckMemberSize(struct _GInterfaceInfo,interface_finalize,8,12,42154)
CheckOffset(struct _GInterfaceInfo,interface_finalize,8,12,42154)
CheckMemberSize(struct _GInterfaceInfo,interface_data,8,12,42155)
CheckOffset(struct _GInterfaceInfo,interface_data,16,12,42155)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11954,0);
Msg("Find size of _GInterfaceInfo (11954)\n");
#endif

#if __i386__
CheckTypeSize(GInterfaceInitFunc,4, 11955, 2)
#elif __x86_64__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 11)
#elif __ia64__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GInterfaceInitFunc,4, 11955, 6)
#elif __powerpc64__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GInterfaceInitFunc,4, 11955, 10)
#elif __s390x__
CheckTypeSize(GInterfaceInitFunc,8, 11955, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11955,0);
Msg("Find size of GInterfaceInitFunc (11955)\n");
#endif

#if __i386__
CheckTypeSize(GInterfaceFinalizeFunc,4, 11956, 2)
#elif __x86_64__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 11)
#elif __ia64__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GInterfaceFinalizeFunc,4, 11956, 6)
#elif __powerpc64__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GInterfaceFinalizeFunc,4, 11956, 10)
#elif __s390x__
CheckTypeSize(GInterfaceFinalizeFunc,8, 11956, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11956,0);
Msg("Find size of GInterfaceFinalizeFunc (11956)\n");
#endif

#if __i386__
CheckTypeSize(GInterfaceInfo,12, 11957, 2)
#elif __x86_64__
CheckTypeSize(GInterfaceInfo,24, 11957, 11)
#elif __ia64__
CheckTypeSize(GInterfaceInfo,24, 11957, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GInterfaceInfo,12, 11957, 6)
#elif __powerpc64__
CheckTypeSize(GInterfaceInfo,24, 11957, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GInterfaceInfo,12, 11957, 10)
#elif __s390x__
CheckTypeSize(GInterfaceInfo,24, 11957, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11957,0);
Msg("Find size of GInterfaceInfo (11957)\n");
#endif

#if __i386__
CheckTypeSize(GInterfaceInfo *,4, 11958, 2)
#elif __x86_64__
CheckTypeSize(GInterfaceInfo *,8, 11958, 11)
#elif __ia64__
CheckTypeSize(GInterfaceInfo *,8, 11958, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GInterfaceInfo *,4, 11958, 6)
#elif __powerpc64__
CheckTypeSize(GInterfaceInfo *,8, 11958, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GInterfaceInfo *,4, 11958, 10)
#elif __s390x__
CheckTypeSize(GInterfaceInfo *,8, 11958, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11958,0);
Msg("Find size of GInterfaceInfo * (11958)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11959,0);
Msg("Find size of fptr_glib-object_115 (11959)\n");
#endif

#if __i386__
CheckTypeSize(GSignalAccumulator,4, 11960, 2)
#elif __x86_64__
CheckTypeSize(GSignalAccumulator,8, 11960, 11)
#elif __ia64__
CheckTypeSize(GSignalAccumulator,8, 11960, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalAccumulator,4, 11960, 6)
#elif __powerpc64__
CheckTypeSize(GSignalAccumulator,8, 11960, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalAccumulator,4, 11960, 10)
#elif __s390x__
CheckTypeSize(GSignalAccumulator,8, 11960, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11960,0);
Msg("Find size of GSignalAccumulator (11960)\n");
#endif

#if __i386__
CheckTypeSize(GSignalCMarshaller,4, 11961, 2)
#elif __x86_64__
CheckTypeSize(GSignalCMarshaller,8, 11961, 11)
#elif __ia64__
CheckTypeSize(GSignalCMarshaller,8, 11961, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalCMarshaller,4, 11961, 6)
#elif __powerpc64__
CheckTypeSize(GSignalCMarshaller,8, 11961, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalCMarshaller,4, 11961, 10)
#elif __s390x__
CheckTypeSize(GSignalCMarshaller,8, 11961, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11961,0);
Msg("Find size of GSignalCMarshaller (11961)\n");
#endif

#if __i386__
CheckEnum("G_CONNECT_AFTER",G_CONNECT_AFTER,1);
CheckEnum("G_CONNECT_SWAPPED",G_CONNECT_SWAPPED,2);
#elif __x86_64__
CheckEnum("G_CONNECT_AFTER",G_CONNECT_AFTER,1);
CheckEnum("G_CONNECT_SWAPPED",G_CONNECT_SWAPPED,2);
#elif __ia64__
CheckEnum("G_CONNECT_AFTER",G_CONNECT_AFTER,1);
CheckEnum("G_CONNECT_SWAPPED",G_CONNECT_SWAPPED,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11962,0);
Msg("Find size of anon-glib-2.0/glib-object.h-31 (11962)\n");
#endif

#if __i386__
CheckTypeSize(GConnectFlags,4, 11963, 2)
#elif __x86_64__
CheckTypeSize(GConnectFlags,4, 11963, 11)
#elif __ia64__
CheckTypeSize(GConnectFlags,4, 11963, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GConnectFlags,4, 11963, 6)
#elif __powerpc64__
CheckTypeSize(GConnectFlags,4, 11963, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GConnectFlags,4, 11963, 10)
#elif __s390x__
CheckTypeSize(GConnectFlags,4, 11963, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11963,0);
Msg("Find size of GConnectFlags (11963)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 2)
Msg("Missing member data for _GTypeFundamentalInfo on IA32\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,2,42166)
#elif __x86_64__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 11)
Msg("Missing member data for _GTypeFundamentalInfo on x86-64\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,11,42166)
#elif __ia64__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 3)
Msg("Missing member data for _GTypeFundamentalInfo on IA64\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,3,42166)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 6)
Msg("Missing member data for _GTypeFundamentalInfo on PPC32\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,6,42166)
#elif __powerpc64__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 9)
Msg("Missing member data for _GTypeFundamentalInfo on PPC64\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,9,42166)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 10)
Msg("Missing member data for _GTypeFundamentalInfo on S390\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,10,42166)
#elif __s390x__
CheckTypeSize(struct _GTypeFundamentalInfo,4, 11964, 12)
Msg("Missing member data for _GTypeFundamentalInfo on S390X\n");
CheckOffset(struct _GTypeFundamentalInfo,type_flags,0,12,42166)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11964,0);
Msg("Find size of _GTypeFundamentalInfo (11964)\n");
#endif

#if __i386__
CheckEnum("G_TYPE_FLAG_CLASSED",G_TYPE_FLAG_CLASSED,1);
CheckEnum("G_TYPE_FLAG_INSTANTIATABLE",G_TYPE_FLAG_INSTANTIATABLE,2);
CheckEnum("G_TYPE_FLAG_DERIVABLE",G_TYPE_FLAG_DERIVABLE,4);
CheckEnum("G_TYPE_FLAG_DEEP_DERIVABLE",G_TYPE_FLAG_DEEP_DERIVABLE,8);
#elif __x86_64__
CheckEnum("G_TYPE_FLAG_CLASSED",G_TYPE_FLAG_CLASSED,1);
CheckEnum("G_TYPE_FLAG_INSTANTIATABLE",G_TYPE_FLAG_INSTANTIATABLE,2);
CheckEnum("G_TYPE_FLAG_DERIVABLE",G_TYPE_FLAG_DERIVABLE,4);
CheckEnum("G_TYPE_FLAG_DEEP_DERIVABLE",G_TYPE_FLAG_DEEP_DERIVABLE,8);
#elif __ia64__
CheckEnum("G_TYPE_FLAG_CLASSED",G_TYPE_FLAG_CLASSED,1);
CheckEnum("G_TYPE_FLAG_INSTANTIATABLE",G_TYPE_FLAG_INSTANTIATABLE,2);
CheckEnum("G_TYPE_FLAG_DERIVABLE",G_TYPE_FLAG_DERIVABLE,4);
CheckEnum("G_TYPE_FLAG_DEEP_DERIVABLE",G_TYPE_FLAG_DEEP_DERIVABLE,8);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11965,0);
Msg("Find size of anon-glib-2.0/glib-object.h-48 (11965)\n");
#endif

#if __i386__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 2)
#elif __x86_64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 11)
#elif __ia64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 6)
#elif __powerpc64__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 10)
#elif __s390x__
CheckTypeSize(GTypeFundamentalFlags,4, 11966, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11966,0);
Msg("Find size of GTypeFundamentalFlags (11966)\n");
#endif

#if __i386__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 2)
#elif __x86_64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 11)
#elif __ia64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 6)
#elif __powerpc64__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 10)
#elif __s390x__
CheckTypeSize(GTypeFundamentalInfo,4, 11967, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11967,0);
Msg("Find size of GTypeFundamentalInfo (11967)\n");
#endif

#if __i386__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 2)
#elif __x86_64__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 11)
#elif __ia64__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 6)
#elif __powerpc64__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 10)
#elif __s390x__
CheckTypeSize(const GTypeFundamentalInfo,4, 11968, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11968,0);
Msg("Find size of const GTypeFundamentalInfo (11968)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11969,0);
Msg("Find size of const GTypeFundamentalInfo * (11969)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeQuery,16, 11970, 2)
CheckMemberSize(struct _GTypeQuery,type_name,4,2,42168)
CheckOffset(struct _GTypeQuery,type_name,4,2,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,2,42169)
CheckOffset(struct _GTypeQuery,class_size,8,2,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,2,42170)
CheckOffset(struct _GTypeQuery,instance_size,12,2,42170)
#elif __x86_64__
CheckTypeSize(struct _GTypeQuery,24, 11970, 11)
CheckMemberSize(struct _GTypeQuery,type_name,8,11,42168)
CheckOffset(struct _GTypeQuery,type_name,8,11,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,11,42169)
CheckOffset(struct _GTypeQuery,class_size,16,11,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,11,42170)
CheckOffset(struct _GTypeQuery,instance_size,20,11,42170)
#elif __ia64__
CheckTypeSize(struct _GTypeQuery,24, 11970, 3)
CheckMemberSize(struct _GTypeQuery,type_name,8,3,42168)
CheckOffset(struct _GTypeQuery,type_name,8,3,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,3,42169)
CheckOffset(struct _GTypeQuery,class_size,16,3,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,3,42170)
CheckOffset(struct _GTypeQuery,instance_size,20,3,42170)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeQuery,16, 11970, 6)
CheckMemberSize(struct _GTypeQuery,type_name,4,6,42168)
CheckOffset(struct _GTypeQuery,type_name,4,6,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,6,42169)
CheckOffset(struct _GTypeQuery,class_size,8,6,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,6,42170)
CheckOffset(struct _GTypeQuery,instance_size,12,6,42170)
#elif __powerpc64__
CheckTypeSize(struct _GTypeQuery,24, 11970, 9)
CheckMemberSize(struct _GTypeQuery,type_name,8,9,42168)
CheckOffset(struct _GTypeQuery,type_name,8,9,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,9,42169)
CheckOffset(struct _GTypeQuery,class_size,16,9,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,9,42170)
CheckOffset(struct _GTypeQuery,instance_size,20,9,42170)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeQuery,16, 11970, 10)
CheckMemberSize(struct _GTypeQuery,type_name,4,10,42168)
CheckOffset(struct _GTypeQuery,type_name,4,10,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,10,42169)
CheckOffset(struct _GTypeQuery,class_size,8,10,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,10,42170)
CheckOffset(struct _GTypeQuery,instance_size,12,10,42170)
#elif __s390x__
CheckTypeSize(struct _GTypeQuery,24, 11970, 12)
CheckMemberSize(struct _GTypeQuery,type_name,8,12,42168)
CheckOffset(struct _GTypeQuery,type_name,8,12,42168)
CheckMemberSize(struct _GTypeQuery,class_size,4,12,42169)
CheckOffset(struct _GTypeQuery,class_size,16,12,42169)
CheckMemberSize(struct _GTypeQuery,instance_size,4,12,42170)
CheckOffset(struct _GTypeQuery,instance_size,20,12,42170)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11970,0);
Msg("Find size of _GTypeQuery (11970)\n");
#endif

#if __i386__
CheckTypeSize(GTypeQuery,16, 11971, 2)
#elif __x86_64__
CheckTypeSize(GTypeQuery,24, 11971, 11)
#elif __ia64__
CheckTypeSize(GTypeQuery,24, 11971, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeQuery,16, 11971, 6)
#elif __powerpc64__
CheckTypeSize(GTypeQuery,24, 11971, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeQuery,16, 11971, 10)
#elif __s390x__
CheckTypeSize(GTypeQuery,24, 11971, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11971,0);
Msg("Find size of GTypeQuery (11971)\n");
#endif

#if __i386__
CheckTypeSize(GTypeQuery *,4, 11972, 2)
#elif __x86_64__
CheckTypeSize(GTypeQuery *,8, 11972, 11)
#elif __ia64__
CheckTypeSize(GTypeQuery *,8, 11972, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeQuery *,4, 11972, 6)
#elif __powerpc64__
CheckTypeSize(GTypeQuery *,8, 11972, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeQuery *,4, 11972, 10)
#elif __s390x__
CheckTypeSize(GTypeQuery *,8, 11972, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11972,0);
Msg("Find size of GTypeQuery * (11972)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11973,0);
Msg("Find size of fptr_glib-object_22 (11973)\n");
#endif

#if __i386__
CheckTypeSize(GSignalEmissionHook,4, 11974, 2)
#elif __x86_64__
CheckTypeSize(GSignalEmissionHook,8, 11974, 11)
#elif __ia64__
CheckTypeSize(GSignalEmissionHook,8, 11974, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalEmissionHook,4, 11974, 6)
#elif __powerpc64__
CheckTypeSize(GSignalEmissionHook,8, 11974, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalEmissionHook,4, 11974, 10)
#elif __s390x__
CheckTypeSize(GSignalEmissionHook,8, 11974, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11974,0);
Msg("Find size of GSignalEmissionHook (11974)\n");
#endif

#if __i386__
CheckTypeSize(GValueTransform,4, 11975, 2)
#elif __x86_64__
CheckTypeSize(GValueTransform,8, 11975, 11)
#elif __ia64__
CheckTypeSize(GValueTransform,8, 11975, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GValueTransform,4, 11975, 6)
#elif __powerpc64__
CheckTypeSize(GValueTransform,8, 11975, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GValueTransform,4, 11975, 10)
#elif __s390x__
CheckTypeSize(GValueTransform,8, 11975, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11975,0);
Msg("Find size of GValueTransform (11975)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParameter,24, 11976, 2)
CheckMemberSize(struct _GParameter,value,20,2,42176)
CheckOffset(struct _GParameter,value,4,2,42176)
#elif __x86_64__
CheckTypeSize(struct _GParameter,32, 11976, 11)
CheckMemberSize(struct _GParameter,value,24,11,42176)
CheckOffset(struct _GParameter,value,8,11,42176)
#elif __ia64__
CheckTypeSize(struct _GParameter,32, 11976, 3)
CheckMemberSize(struct _GParameter,value,24,3,42176)
CheckOffset(struct _GParameter,value,8,3,42176)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParameter,32, 11976, 6)
CheckMemberSize(struct _GParameter,value,24,6,42176)
CheckOffset(struct _GParameter,value,8,6,42176)
#elif __powerpc64__
CheckTypeSize(struct _GParameter,32, 11976, 9)
CheckMemberSize(struct _GParameter,value,24,9,42176)
CheckOffset(struct _GParameter,value,8,9,42176)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParameter,32, 11976, 10)
CheckMemberSize(struct _GParameter,value,24,10,42176)
CheckOffset(struct _GParameter,value,8,10,42176)
#elif __s390x__
CheckTypeSize(struct _GParameter,32, 11976, 12)
CheckMemberSize(struct _GParameter,value,24,12,42176)
CheckOffset(struct _GParameter,value,8,12,42176)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11976,0);
Msg("Find size of _GParameter (11976)\n");
#endif

#if __i386__
CheckTypeSize(GParameter,24, 11977, 2)
#elif __x86_64__
CheckTypeSize(GParameter,32, 11977, 11)
#elif __ia64__
CheckTypeSize(GParameter,32, 11977, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParameter,32, 11977, 6)
#elif __powerpc64__
CheckTypeSize(GParameter,32, 11977, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParameter,32, 11977, 10)
#elif __s390x__
CheckTypeSize(GParameter,32, 11977, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11977,0);
Msg("Find size of GParameter (11977)\n");
#endif

#if __i386__
CheckTypeSize(GParameter *,4, 11978, 2)
#elif __x86_64__
CheckTypeSize(GParameter *,8, 11978, 11)
#elif __ia64__
CheckTypeSize(GParameter *,8, 11978, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParameter *,4, 11978, 6)
#elif __powerpc64__
CheckTypeSize(GParameter *,8, 11978, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParameter *,4, 11978, 10)
#elif __s390x__
CheckTypeSize(GParameter *,8, 11978, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11978,0);
Msg("Find size of GParameter * (11978)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecTypeInfo,28, 11979, 2)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,2,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,2,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,4,2,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,4,2,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,4,2,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,8,2,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,4,2,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,12,2,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,4,2,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,16,2,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,4,2,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,20,2,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,4,2,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,24,2,42192)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecTypeInfo,56, 11979, 11)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,11,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,11,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,8,11,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,8,11,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,8,11,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,16,11,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,8,11,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,24,11,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,8,11,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,32,11,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,8,11,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,40,11,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,8,11,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,48,11,42192)
#elif __ia64__
CheckTypeSize(struct _GParamSpecTypeInfo,56, 11979, 3)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,3,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,3,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,8,3,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,8,3,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,8,3,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,16,3,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,8,3,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,24,3,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,8,3,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,32,3,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,8,3,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,40,3,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,8,3,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,48,3,42192)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecTypeInfo,28, 11979, 6)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,6,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,6,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,4,6,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,4,6,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,4,6,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,8,6,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,4,6,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,12,6,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,4,6,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,16,6,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,4,6,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,20,6,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,4,6,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,24,6,42192)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecTypeInfo,56, 11979, 9)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,9,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,9,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,8,9,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,8,9,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,8,9,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,16,9,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,8,9,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,24,9,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,8,9,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,32,9,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,8,9,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,40,9,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,8,9,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,48,9,42192)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecTypeInfo,28, 11979, 10)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,10,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,10,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,4,10,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,4,10,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,4,10,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,8,10,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,4,10,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,12,10,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,4,10,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,16,10,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,4,10,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,20,10,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,4,10,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,24,10,42192)
#elif __s390x__
CheckTypeSize(struct _GParamSpecTypeInfo,56, 11979, 12)
CheckMemberSize(struct _GParamSpecTypeInfo,n_preallocs,2,12,42178)
CheckOffset(struct _GParamSpecTypeInfo,n_preallocs,2,12,42178)
CheckMemberSize(struct _GParamSpecTypeInfo,instance_init,8,12,42180)
CheckOffset(struct _GParamSpecTypeInfo,instance_init,8,12,42180)
CheckMemberSize(struct _GParamSpecTypeInfo,value_type,8,12,42181)
CheckOffset(struct _GParamSpecTypeInfo,value_type,16,12,42181)
CheckMemberSize(struct _GParamSpecTypeInfo,finalize,8,12,42182)
CheckOffset(struct _GParamSpecTypeInfo,finalize,24,12,42182)
CheckMemberSize(struct _GParamSpecTypeInfo,value_set_default,8,12,42185)
CheckOffset(struct _GParamSpecTypeInfo,value_set_default,32,12,42185)
CheckMemberSize(struct _GParamSpecTypeInfo,value_validate,8,12,42188)
CheckOffset(struct _GParamSpecTypeInfo,value_validate,40,12,42188)
CheckMemberSize(struct _GParamSpecTypeInfo,values_cmp,8,12,42192)
CheckOffset(struct _GParamSpecTypeInfo,values_cmp,48,12,42192)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11979,0);
Msg("Find size of _GParamSpecTypeInfo (11979)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11980,0);
Msg("Find size of fptr_glib-object_15 (11980)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11981,0);
Msg("Find size of fptr_glib-object_145 (11981)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11982,0);
Msg("Find size of fptr_glib-object_57 (11982)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11983,0);
Msg("Find size of fptr_glib-object_31 (11983)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecTypeInfo,28, 11984, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 11)
#elif __ia64__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecTypeInfo,28, 11984, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecTypeInfo,28, 11984, 10)
#elif __s390x__
CheckTypeSize(GParamSpecTypeInfo,56, 11984, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11984,0);
Msg("Find size of GParamSpecTypeInfo (11984)\n");
#endif

#if __i386__
CheckTypeSize(const GParamSpecTypeInfo,28, 11985, 2)
#elif __x86_64__
CheckTypeSize(const GParamSpecTypeInfo,56, 11985, 11)
#elif __ia64__
CheckTypeSize(const GParamSpecTypeInfo,56, 11985, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GParamSpecTypeInfo,28, 11985, 6)
#elif __powerpc64__
CheckTypeSize(const GParamSpecTypeInfo,56, 11985, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GParamSpecTypeInfo,28, 11985, 10)
#elif __s390x__
CheckTypeSize(const GParamSpecTypeInfo,56, 11985, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11985,0);
Msg("Find size of const GParamSpecTypeInfo (11985)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11986,0);
Msg("Find size of const GParamSpecTypeInfo * (11986)\n");
#endif

#if __i386__
CheckTypeSize(const GInterfaceInfo,12, 11987, 2)
#elif __x86_64__
CheckTypeSize(const GInterfaceInfo,24, 11987, 11)
#elif __ia64__
CheckTypeSize(const GInterfaceInfo,24, 11987, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GInterfaceInfo,12, 11987, 6)
#elif __powerpc64__
CheckTypeSize(const GInterfaceInfo,24, 11987, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GInterfaceInfo,12, 11987, 10)
#elif __s390x__
CheckTypeSize(const GInterfaceInfo,24, 11987, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11987,0);
Msg("Find size of const GInterfaceInfo (11987)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11988,0);
Msg("Find size of const GInterfaceInfo * (11988)\n");
#endif

#if __i386__
CheckTypeSize(GBoxedCopyFunc,4, 11989, 2)
#elif __x86_64__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 11)
#elif __ia64__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GBoxedCopyFunc,4, 11989, 6)
#elif __powerpc64__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GBoxedCopyFunc,4, 11989, 10)
#elif __s390x__
CheckTypeSize(GBoxedCopyFunc,8, 11989, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11989,0);
Msg("Find size of GBoxedCopyFunc (11989)\n");
#endif

#if __i386__
CheckTypeSize(GBoxedFreeFunc,4, 11990, 2)
#elif __x86_64__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 11)
#elif __ia64__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GBoxedFreeFunc,4, 11990, 6)
#elif __powerpc64__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GBoxedFreeFunc,4, 11990, 10)
#elif __s390x__
CheckTypeSize(GBoxedFreeFunc,8, 11990, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11990,0);
Msg("Find size of GBoxedFreeFunc (11990)\n");
#endif

#if __i386__
CheckTypeSize(struct _GSignalQuery,28, 11991, 2)
CheckMemberSize(struct _GSignalQuery,signal_name,4,2,42194)
CheckOffset(struct _GSignalQuery,signal_name,4,2,42194)
CheckMemberSize(struct _GSignalQuery,itype,4,2,42195)
CheckOffset(struct _GSignalQuery,itype,8,2,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,2,42196)
CheckOffset(struct _GSignalQuery,signal_flags,12,2,42196)
CheckMemberSize(struct _GSignalQuery,return_type,4,2,42197)
CheckOffset(struct _GSignalQuery,return_type,16,2,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,2,42198)
CheckOffset(struct _GSignalQuery,n_params,20,2,42198)
CheckMemberSize(struct _GSignalQuery,param_types,4,2,42199)
CheckOffset(struct _GSignalQuery,param_types,24,2,42199)
#elif __x86_64__
CheckTypeSize(struct _GSignalQuery,56, 11991, 11)
CheckMemberSize(struct _GSignalQuery,signal_name,8,11,42194)
CheckOffset(struct _GSignalQuery,signal_name,8,11,42194)
CheckMemberSize(struct _GSignalQuery,itype,8,11,42195)
CheckOffset(struct _GSignalQuery,itype,16,11,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,11,42196)
CheckOffset(struct _GSignalQuery,signal_flags,24,11,42196)
CheckMemberSize(struct _GSignalQuery,return_type,8,11,42197)
CheckOffset(struct _GSignalQuery,return_type,32,11,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,11,42198)
CheckOffset(struct _GSignalQuery,n_params,40,11,42198)
CheckMemberSize(struct _GSignalQuery,param_types,8,11,42199)
CheckOffset(struct _GSignalQuery,param_types,48,11,42199)
#elif __ia64__
CheckTypeSize(struct _GSignalQuery,56, 11991, 3)
CheckMemberSize(struct _GSignalQuery,signal_name,8,3,42194)
CheckOffset(struct _GSignalQuery,signal_name,8,3,42194)
CheckMemberSize(struct _GSignalQuery,itype,8,3,42195)
CheckOffset(struct _GSignalQuery,itype,16,3,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,3,42196)
CheckOffset(struct _GSignalQuery,signal_flags,24,3,42196)
CheckMemberSize(struct _GSignalQuery,return_type,8,3,42197)
CheckOffset(struct _GSignalQuery,return_type,32,3,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,3,42198)
CheckOffset(struct _GSignalQuery,n_params,40,3,42198)
CheckMemberSize(struct _GSignalQuery,param_types,8,3,42199)
CheckOffset(struct _GSignalQuery,param_types,48,3,42199)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GSignalQuery,28, 11991, 6)
CheckMemberSize(struct _GSignalQuery,signal_name,4,6,42194)
CheckOffset(struct _GSignalQuery,signal_name,4,6,42194)
CheckMemberSize(struct _GSignalQuery,itype,4,6,42195)
CheckOffset(struct _GSignalQuery,itype,8,6,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,6,42196)
CheckOffset(struct _GSignalQuery,signal_flags,12,6,42196)
CheckMemberSize(struct _GSignalQuery,return_type,4,6,42197)
CheckOffset(struct _GSignalQuery,return_type,16,6,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,6,42198)
CheckOffset(struct _GSignalQuery,n_params,20,6,42198)
CheckMemberSize(struct _GSignalQuery,param_types,4,6,42199)
CheckOffset(struct _GSignalQuery,param_types,24,6,42199)
#elif __powerpc64__
CheckTypeSize(struct _GSignalQuery,56, 11991, 9)
CheckMemberSize(struct _GSignalQuery,signal_name,8,9,42194)
CheckOffset(struct _GSignalQuery,signal_name,8,9,42194)
CheckMemberSize(struct _GSignalQuery,itype,8,9,42195)
CheckOffset(struct _GSignalQuery,itype,16,9,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,9,42196)
CheckOffset(struct _GSignalQuery,signal_flags,24,9,42196)
CheckMemberSize(struct _GSignalQuery,return_type,8,9,42197)
CheckOffset(struct _GSignalQuery,return_type,32,9,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,9,42198)
CheckOffset(struct _GSignalQuery,n_params,40,9,42198)
CheckMemberSize(struct _GSignalQuery,param_types,8,9,42199)
CheckOffset(struct _GSignalQuery,param_types,48,9,42199)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GSignalQuery,28, 11991, 10)
CheckMemberSize(struct _GSignalQuery,signal_name,4,10,42194)
CheckOffset(struct _GSignalQuery,signal_name,4,10,42194)
CheckMemberSize(struct _GSignalQuery,itype,4,10,42195)
CheckOffset(struct _GSignalQuery,itype,8,10,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,10,42196)
CheckOffset(struct _GSignalQuery,signal_flags,12,10,42196)
CheckMemberSize(struct _GSignalQuery,return_type,4,10,42197)
CheckOffset(struct _GSignalQuery,return_type,16,10,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,10,42198)
CheckOffset(struct _GSignalQuery,n_params,20,10,42198)
CheckMemberSize(struct _GSignalQuery,param_types,4,10,42199)
CheckOffset(struct _GSignalQuery,param_types,24,10,42199)
#elif __s390x__
CheckTypeSize(struct _GSignalQuery,56, 11991, 12)
CheckMemberSize(struct _GSignalQuery,signal_name,8,12,42194)
CheckOffset(struct _GSignalQuery,signal_name,8,12,42194)
CheckMemberSize(struct _GSignalQuery,itype,8,12,42195)
CheckOffset(struct _GSignalQuery,itype,16,12,42195)
CheckMemberSize(struct _GSignalQuery,signal_flags,4,12,42196)
CheckOffset(struct _GSignalQuery,signal_flags,24,12,42196)
CheckMemberSize(struct _GSignalQuery,return_type,8,12,42197)
CheckOffset(struct _GSignalQuery,return_type,32,12,42197)
CheckMemberSize(struct _GSignalQuery,n_params,4,12,42198)
CheckOffset(struct _GSignalQuery,n_params,40,12,42198)
CheckMemberSize(struct _GSignalQuery,param_types,8,12,42199)
CheckOffset(struct _GSignalQuery,param_types,48,12,42199)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11991,0);
Msg("Find size of _GSignalQuery (11991)\n");
#endif

#if __i386__
CheckTypeSize(const GType,4, 11992, 2)
#elif __x86_64__
CheckTypeSize(const GType,8, 11992, 11)
#elif __ia64__
CheckTypeSize(const GType,8, 11992, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GType,4, 11992, 6)
#elif __powerpc64__
CheckTypeSize(const GType,8, 11992, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GType,4, 11992, 10)
#elif __s390x__
CheckTypeSize(const GType,8, 11992, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11992,0);
Msg("Find size of const GType (11992)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11993,0);
Msg("Find size of const GType * (11993)\n");
#endif

#if __i386__
CheckTypeSize(GSignalQuery,28, 11994, 2)
#elif __x86_64__
CheckTypeSize(GSignalQuery,56, 11994, 11)
#elif __ia64__
CheckTypeSize(GSignalQuery,56, 11994, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalQuery,28, 11994, 6)
#elif __powerpc64__
CheckTypeSize(GSignalQuery,56, 11994, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalQuery,28, 11994, 10)
#elif __s390x__
CheckTypeSize(GSignalQuery,56, 11994, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11994,0);
Msg("Find size of GSignalQuery (11994)\n");
#endif

#if __i386__
CheckTypeSize(GSignalQuery *,4, 11995, 2)
#elif __x86_64__
CheckTypeSize(GSignalQuery *,8, 11995, 11)
#elif __ia64__
CheckTypeSize(GSignalQuery *,8, 11995, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GSignalQuery *,4, 11995, 6)
#elif __powerpc64__
CheckTypeSize(GSignalQuery *,8, 11995, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GSignalQuery *,4, 11995, 10)
#elif __s390x__
CheckTypeSize(GSignalQuery *,8, 11995, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11995,0);
Msg("Find size of GSignalQuery * (11995)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeInterface,8, 11996, 2)
CheckMemberSize(struct _GTypeInterface,g_instance_type,4,2,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,4,2,42201)
#elif __x86_64__
CheckTypeSize(struct _GTypeInterface,16, 11996, 11)
CheckMemberSize(struct _GTypeInterface,g_instance_type,8,11,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,8,11,42201)
#elif __ia64__
CheckTypeSize(struct _GTypeInterface,16, 11996, 3)
CheckMemberSize(struct _GTypeInterface,g_instance_type,8,3,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,8,3,42201)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeInterface,8, 11996, 6)
CheckMemberSize(struct _GTypeInterface,g_instance_type,4,6,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,4,6,42201)
#elif __powerpc64__
CheckTypeSize(struct _GTypeInterface,16, 11996, 9)
CheckMemberSize(struct _GTypeInterface,g_instance_type,8,9,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,8,9,42201)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeInterface,8, 11996, 10)
CheckMemberSize(struct _GTypeInterface,g_instance_type,4,10,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,4,10,42201)
#elif __s390x__
CheckTypeSize(struct _GTypeInterface,16, 11996, 12)
CheckMemberSize(struct _GTypeInterface,g_instance_type,8,12,42201)
CheckOffset(struct _GTypeInterface,g_instance_type,8,12,42201)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11996,0);
Msg("Find size of _GTypeInterface (11996)\n");
#endif

#if __i386__
CheckTypeSize(GTypeInterface,8, 11997, 2)
#elif __x86_64__
CheckTypeSize(GTypeInterface,16, 11997, 11)
#elif __ia64__
CheckTypeSize(GTypeInterface,16, 11997, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeInterface,8, 11997, 6)
#elif __powerpc64__
CheckTypeSize(GTypeInterface,16, 11997, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeInterface,8, 11997, 10)
#elif __s390x__
CheckTypeSize(GTypeInterface,16, 11997, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11997,0);
Msg("Find size of GTypeInterface (11997)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11998,0);
Msg("Find size of fptr_glib-object_33 (11998)\n");
#endif

#if __i386__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,4, 11999, 2)
#elif __x86_64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 11)
#elif __ia64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,4, 11999, 6)
#elif __powerpc64__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,4, 11999, 10)
#elif __s390x__
CheckTypeSize(GTypePluginCompleteInterfaceInfo,8, 11999, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11999,0);
Msg("Find size of GTypePluginCompleteInterfaceInfo (11999)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecObject,40, 12000, 2)
Msg("Missing member data for _GParamSpecObject on IA32\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,2,42206)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecObject,72, 12000, 11)
Msg("Missing member data for _GParamSpecObject on x86-64\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,11,42206)
#elif __ia64__
CheckTypeSize(struct _GParamSpecObject,72, 12000, 3)
Msg("Missing member data for _GParamSpecObject on IA64\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,3,42206)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecObject,40, 12000, 6)
Msg("Missing member data for _GParamSpecObject on PPC32\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,6,42206)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecObject,72, 12000, 9)
Msg("Missing member data for _GParamSpecObject on PPC64\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,9,42206)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecObject,40, 12000, 10)
Msg("Missing member data for _GParamSpecObject on S390\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,10,42206)
#elif __s390x__
CheckTypeSize(struct _GParamSpecObject,72, 12000, 12)
Msg("Missing member data for _GParamSpecObject on S390X\n");
CheckOffset(struct _GParamSpecObject,parent_instance,0,12,42206)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12000,0);
Msg("Find size of _GParamSpecObject (12000)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecObject,40, 12001, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecObject,72, 12001, 11)
#elif __ia64__
CheckTypeSize(GParamSpecObject,72, 12001, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecObject,40, 12001, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecObject,72, 12001, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecObject,40, 12001, 10)
#elif __s390x__
CheckTypeSize(GParamSpecObject,72, 12001, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12001,0);
Msg("Find size of GParamSpecObject (12001)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12002,0);
Msg("Find size of fptr_glib-object_165 (12002)\n");
#endif

#if __i386__
CheckTypeSize(GTypePluginUnuse,4, 12003, 2)
#elif __x86_64__
CheckTypeSize(GTypePluginUnuse,8, 12003, 11)
#elif __ia64__
CheckTypeSize(GTypePluginUnuse,8, 12003, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypePluginUnuse,4, 12003, 6)
#elif __powerpc64__
CheckTypeSize(GTypePluginUnuse,8, 12003, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypePluginUnuse,4, 12003, 10)
#elif __s390x__
CheckTypeSize(GTypePluginUnuse,8, 12003, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12003,0);
Msg("Find size of GTypePluginUnuse (12003)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypePluginClass,24, 12004, 2)
CheckMemberSize(struct _GTypePluginClass,use_plugin,4,2,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,8,2,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,4,2,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,12,2,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,4,2,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,16,2,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,4,2,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,20,2,42216)
#elif __x86_64__
CheckTypeSize(struct _GTypePluginClass,48, 12004, 11)
CheckMemberSize(struct _GTypePluginClass,use_plugin,8,11,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,16,11,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,8,11,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,24,11,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,8,11,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,32,11,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,8,11,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,40,11,42216)
#elif __ia64__
CheckTypeSize(struct _GTypePluginClass,48, 12004, 3)
CheckMemberSize(struct _GTypePluginClass,use_plugin,8,3,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,16,3,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,8,3,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,24,3,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,8,3,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,32,3,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,8,3,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,40,3,42216)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypePluginClass,24, 12004, 6)
CheckMemberSize(struct _GTypePluginClass,use_plugin,4,6,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,8,6,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,4,6,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,12,6,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,4,6,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,16,6,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,4,6,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,20,6,42216)
#elif __powerpc64__
CheckTypeSize(struct _GTypePluginClass,48, 12004, 9)
CheckMemberSize(struct _GTypePluginClass,use_plugin,8,9,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,16,9,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,8,9,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,24,9,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,8,9,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,32,9,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,8,9,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,40,9,42216)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypePluginClass,24, 12004, 10)
CheckMemberSize(struct _GTypePluginClass,use_plugin,4,10,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,8,10,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,4,10,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,12,10,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,4,10,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,16,10,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,4,10,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,20,10,42216)
#elif __s390x__
CheckTypeSize(struct _GTypePluginClass,48, 12004, 12)
CheckMemberSize(struct _GTypePluginClass,use_plugin,8,12,42209)
CheckOffset(struct _GTypePluginClass,use_plugin,16,12,42209)
CheckMemberSize(struct _GTypePluginClass,unuse_plugin,8,12,42210)
CheckOffset(struct _GTypePluginClass,unuse_plugin,24,12,42210)
CheckMemberSize(struct _GTypePluginClass,complete_type_info,8,12,42215)
CheckOffset(struct _GTypePluginClass,complete_type_info,32,12,42215)
CheckMemberSize(struct _GTypePluginClass,complete_interface_info,8,12,42216)
CheckOffset(struct _GTypePluginClass,complete_interface_info,40,12,42216)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12004,0);
Msg("Find size of _GTypePluginClass (12004)\n");
#endif

#if __i386__
CheckTypeSize(GTypePluginUse,4, 12005, 2)
#elif __x86_64__
CheckTypeSize(GTypePluginUse,8, 12005, 11)
#elif __ia64__
CheckTypeSize(GTypePluginUse,8, 12005, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypePluginUse,4, 12005, 6)
#elif __powerpc64__
CheckTypeSize(GTypePluginUse,8, 12005, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypePluginUse,4, 12005, 10)
#elif __s390x__
CheckTypeSize(GTypePluginUse,8, 12005, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12005,0);
Msg("Find size of GTypePluginUse (12005)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12006,0);
Msg("Find size of fptr_glib-object_30 (12006)\n");
#endif

#if __i386__
CheckTypeSize(GTypePluginCompleteTypeInfo,4, 12007, 2)
#elif __x86_64__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 11)
#elif __ia64__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypePluginCompleteTypeInfo,4, 12007, 6)
#elif __powerpc64__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypePluginCompleteTypeInfo,4, 12007, 10)
#elif __s390x__
CheckTypeSize(GTypePluginCompleteTypeInfo,8, 12007, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12007,0);
Msg("Find size of GTypePluginCompleteTypeInfo (12007)\n");
#endif

#if __i386__
CheckTypeSize(GTypePluginClass,24, 12008, 2)
#elif __x86_64__
CheckTypeSize(GTypePluginClass,48, 12008, 11)
#elif __ia64__
CheckTypeSize(GTypePluginClass,48, 12008, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypePluginClass,24, 12008, 6)
#elif __powerpc64__
CheckTypeSize(GTypePluginClass,48, 12008, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypePluginClass,24, 12008, 10)
#elif __s390x__
CheckTypeSize(GTypePluginClass,48, 12008, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12008,0);
Msg("Find size of GTypePluginClass (12008)\n");
#endif

#if __i386__
CheckTypeSize(struct _GCClosure,20, 12009, 2)
CheckMemberSize(struct _GCClosure,callback,4,2,42218)
CheckOffset(struct _GCClosure,callback,16,2,42218)
#elif __x86_64__
CheckTypeSize(struct _GCClosure,40, 12009, 11)
CheckMemberSize(struct _GCClosure,callback,8,11,42218)
CheckOffset(struct _GCClosure,callback,32,11,42218)
#elif __ia64__
CheckTypeSize(struct _GCClosure,40, 12009, 3)
CheckMemberSize(struct _GCClosure,callback,8,3,42218)
CheckOffset(struct _GCClosure,callback,32,3,42218)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GCClosure,20, 12009, 6)
CheckMemberSize(struct _GCClosure,callback,4,6,42218)
CheckOffset(struct _GCClosure,callback,16,6,42218)
#elif __powerpc64__
CheckTypeSize(struct _GCClosure,40, 12009, 9)
CheckMemberSize(struct _GCClosure,callback,8,9,42218)
CheckOffset(struct _GCClosure,callback,32,9,42218)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GCClosure,20, 12009, 10)
CheckMemberSize(struct _GCClosure,callback,4,10,42218)
CheckOffset(struct _GCClosure,callback,16,10,42218)
#elif __s390x__
CheckTypeSize(struct _GCClosure,40, 12009, 12)
CheckMemberSize(struct _GCClosure,callback,8,12,42218)
CheckOffset(struct _GCClosure,callback,32,12,42218)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12009,0);
Msg("Find size of _GCClosure (12009)\n");
#endif

#if __i386__
CheckTypeSize(GCClosure,20, 12010, 2)
#elif __x86_64__
CheckTypeSize(GCClosure,40, 12010, 11)
#elif __ia64__
CheckTypeSize(GCClosure,40, 12010, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GCClosure,20, 12010, 6)
#elif __powerpc64__
CheckTypeSize(GCClosure,40, 12010, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GCClosure,20, 12010, 10)
#elif __s390x__
CheckTypeSize(GCClosure,40, 12010, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12010,0);
Msg("Find size of GCClosure (12010)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecUnichar,44, 12011, 2)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,2,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,40,2,42220)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecUnichar,80, 12011, 11)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,11,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,72,11,42220)
#elif __ia64__
CheckTypeSize(struct _GParamSpecUnichar,80, 12011, 3)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,3,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,72,3,42220)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecUnichar,44, 12011, 6)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,6,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,40,6,42220)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecUnichar,80, 12011, 9)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,9,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,72,9,42220)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecUnichar,44, 12011, 10)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,10,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,40,10,42220)
#elif __s390x__
CheckTypeSize(struct _GParamSpecUnichar,80, 12011, 12)
CheckMemberSize(struct _GParamSpecUnichar,default_value,4,12,42220)
CheckOffset(struct _GParamSpecUnichar,default_value,72,12,42220)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12011,0);
Msg("Find size of _GParamSpecUnichar (12011)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecUnichar,44, 12012, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecUnichar,80, 12012, 11)
#elif __ia64__
CheckTypeSize(GParamSpecUnichar,80, 12012, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecUnichar,44, 12012, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecUnichar,80, 12012, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecUnichar,44, 12012, 10)
#elif __s390x__
CheckTypeSize(GParamSpecUnichar,80, 12012, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12012,0);
Msg("Find size of GParamSpecUnichar (12012)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecUInt64,64, 12013, 2)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,2,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,40,2,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,2,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,48,2,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,2,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,56,2,42224)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecUInt64,96, 12013, 11)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,11,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,72,11,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,11,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,80,11,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,11,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,88,11,42224)
#elif __ia64__
CheckTypeSize(struct _GParamSpecUInt64,96, 12013, 3)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,3,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,72,3,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,3,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,80,3,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,3,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,88,3,42224)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecUInt64,64, 12013, 6)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,6,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,40,6,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,6,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,48,6,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,6,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,56,6,42224)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecUInt64,96, 12013, 9)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,9,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,72,9,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,9,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,80,9,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,9,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,88,9,42224)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecUInt64,64, 12013, 10)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,10,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,40,10,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,10,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,48,10,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,10,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,56,10,42224)
#elif __s390x__
CheckTypeSize(struct _GParamSpecUInt64,96, 12013, 12)
CheckMemberSize(struct _GParamSpecUInt64,minimum,8,12,42222)
CheckOffset(struct _GParamSpecUInt64,minimum,72,12,42222)
CheckMemberSize(struct _GParamSpecUInt64,maximum,8,12,42223)
CheckOffset(struct _GParamSpecUInt64,maximum,80,12,42223)
CheckMemberSize(struct _GParamSpecUInt64,default_value,8,12,42224)
CheckOffset(struct _GParamSpecUInt64,default_value,88,12,42224)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12013,0);
Msg("Find size of _GParamSpecUInt64 (12013)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecUInt64,64, 12014, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecUInt64,96, 12014, 11)
#elif __ia64__
CheckTypeSize(GParamSpecUInt64,96, 12014, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecUInt64,64, 12014, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecUInt64,96, 12014, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecUInt64,64, 12014, 10)
#elif __s390x__
CheckTypeSize(GParamSpecUInt64,96, 12014, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12014,0);
Msg("Find size of GParamSpecUInt64 (12014)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecBoxed,40, 12015, 2)
Msg("Missing member data for _GParamSpecBoxed on IA32\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,2,42225)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecBoxed,72, 12015, 11)
Msg("Missing member data for _GParamSpecBoxed on x86-64\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,11,42225)
#elif __ia64__
CheckTypeSize(struct _GParamSpecBoxed,72, 12015, 3)
Msg("Missing member data for _GParamSpecBoxed on IA64\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,3,42225)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecBoxed,40, 12015, 6)
Msg("Missing member data for _GParamSpecBoxed on PPC32\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,6,42225)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecBoxed,72, 12015, 9)
Msg("Missing member data for _GParamSpecBoxed on PPC64\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,9,42225)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecBoxed,40, 12015, 10)
Msg("Missing member data for _GParamSpecBoxed on S390\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,10,42225)
#elif __s390x__
CheckTypeSize(struct _GParamSpecBoxed,72, 12015, 12)
Msg("Missing member data for _GParamSpecBoxed on S390X\n");
CheckOffset(struct _GParamSpecBoxed,parent_instance,0,12,42225)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12015,0);
Msg("Find size of _GParamSpecBoxed (12015)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecBoxed,40, 12016, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecBoxed,72, 12016, 11)
#elif __ia64__
CheckTypeSize(GParamSpecBoxed,72, 12016, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecBoxed,40, 12016, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecBoxed,72, 12016, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecBoxed,40, 12016, 10)
#elif __s390x__
CheckTypeSize(GParamSpecBoxed,72, 12016, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12016,0);
Msg("Find size of GParamSpecBoxed (12016)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecOverride,44, 12017, 2)
CheckMemberSize(struct _GParamSpecOverride,overridden,4,2,42227)
CheckOffset(struct _GParamSpecOverride,overridden,40,2,42227)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecOverride,80, 12017, 11)
CheckMemberSize(struct _GParamSpecOverride,overridden,8,11,42227)
CheckOffset(struct _GParamSpecOverride,overridden,72,11,42227)
#elif __ia64__
CheckTypeSize(struct _GParamSpecOverride,80, 12017, 3)
CheckMemberSize(struct _GParamSpecOverride,overridden,8,3,42227)
CheckOffset(struct _GParamSpecOverride,overridden,72,3,42227)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecOverride,44, 12017, 6)
CheckMemberSize(struct _GParamSpecOverride,overridden,4,6,42227)
CheckOffset(struct _GParamSpecOverride,overridden,40,6,42227)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecOverride,80, 12017, 9)
CheckMemberSize(struct _GParamSpecOverride,overridden,8,9,42227)
CheckOffset(struct _GParamSpecOverride,overridden,72,9,42227)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecOverride,44, 12017, 10)
CheckMemberSize(struct _GParamSpecOverride,overridden,4,10,42227)
CheckOffset(struct _GParamSpecOverride,overridden,40,10,42227)
#elif __s390x__
CheckTypeSize(struct _GParamSpecOverride,80, 12017, 12)
CheckMemberSize(struct _GParamSpecOverride,overridden,8,12,42227)
CheckOffset(struct _GParamSpecOverride,overridden,72,12,42227)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12017,0);
Msg("Find size of _GParamSpecOverride (12017)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecOverride,44, 12018, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecOverride,80, 12018, 11)
#elif __ia64__
CheckTypeSize(GParamSpecOverride,80, 12018, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecOverride,44, 12018, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecOverride,80, 12018, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecOverride,44, 12018, 10)
#elif __s390x__
CheckTypeSize(GParamSpecOverride,80, 12018, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12018,0);
Msg("Find size of GParamSpecOverride (12018)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecClass,40, 12019, 2)
CheckMemberSize(struct _GParamSpecClass,value_type,4,2,42229)
CheckOffset(struct _GParamSpecClass,value_type,4,2,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,4,2,42230)
CheckOffset(struct _GParamSpecClass,finalize,8,2,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,4,2,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,12,2,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,4,2,42232)
CheckOffset(struct _GParamSpecClass,value_validate,16,2,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,4,2,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,20,2,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,16,2,42234)
CheckOffset(struct _GParamSpecClass,dummy,24,2,42234)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecClass,80, 12019, 11)
CheckMemberSize(struct _GParamSpecClass,value_type,8,11,42229)
CheckOffset(struct _GParamSpecClass,value_type,8,11,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,8,11,42230)
CheckOffset(struct _GParamSpecClass,finalize,16,11,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,8,11,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,24,11,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,8,11,42232)
CheckOffset(struct _GParamSpecClass,value_validate,32,11,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,8,11,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,40,11,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,32,11,42234)
CheckOffset(struct _GParamSpecClass,dummy,48,11,42234)
#elif __ia64__
CheckTypeSize(struct _GParamSpecClass,80, 12019, 3)
CheckMemberSize(struct _GParamSpecClass,value_type,8,3,42229)
CheckOffset(struct _GParamSpecClass,value_type,8,3,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,8,3,42230)
CheckOffset(struct _GParamSpecClass,finalize,16,3,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,8,3,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,24,3,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,8,3,42232)
CheckOffset(struct _GParamSpecClass,value_validate,32,3,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,8,3,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,40,3,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,32,3,42234)
CheckOffset(struct _GParamSpecClass,dummy,48,3,42234)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecClass,40, 12019, 6)
CheckMemberSize(struct _GParamSpecClass,value_type,4,6,42229)
CheckOffset(struct _GParamSpecClass,value_type,4,6,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,4,6,42230)
CheckOffset(struct _GParamSpecClass,finalize,8,6,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,4,6,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,12,6,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,4,6,42232)
CheckOffset(struct _GParamSpecClass,value_validate,16,6,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,4,6,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,20,6,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,16,6,42234)
CheckOffset(struct _GParamSpecClass,dummy,24,6,42234)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecClass,80, 12019, 9)
CheckMemberSize(struct _GParamSpecClass,value_type,8,9,42229)
CheckOffset(struct _GParamSpecClass,value_type,8,9,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,8,9,42230)
CheckOffset(struct _GParamSpecClass,finalize,16,9,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,8,9,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,24,9,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,8,9,42232)
CheckOffset(struct _GParamSpecClass,value_validate,32,9,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,8,9,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,40,9,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,32,9,42234)
CheckOffset(struct _GParamSpecClass,dummy,48,9,42234)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecClass,40, 12019, 10)
CheckMemberSize(struct _GParamSpecClass,value_type,4,10,42229)
CheckOffset(struct _GParamSpecClass,value_type,4,10,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,4,10,42230)
CheckOffset(struct _GParamSpecClass,finalize,8,10,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,4,10,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,12,10,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,4,10,42232)
CheckOffset(struct _GParamSpecClass,value_validate,16,10,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,4,10,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,20,10,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,16,10,42234)
CheckOffset(struct _GParamSpecClass,dummy,24,10,42234)
#elif __s390x__
CheckTypeSize(struct _GParamSpecClass,80, 12019, 12)
CheckMemberSize(struct _GParamSpecClass,value_type,8,12,42229)
CheckOffset(struct _GParamSpecClass,value_type,8,12,42229)
CheckMemberSize(struct _GParamSpecClass,finalize,8,12,42230)
CheckOffset(struct _GParamSpecClass,finalize,16,12,42230)
CheckMemberSize(struct _GParamSpecClass,value_set_default,8,12,42231)
CheckOffset(struct _GParamSpecClass,value_set_default,24,12,42231)
CheckMemberSize(struct _GParamSpecClass,value_validate,8,12,42232)
CheckOffset(struct _GParamSpecClass,value_validate,32,12,42232)
CheckMemberSize(struct _GParamSpecClass,values_cmp,8,12,42233)
CheckOffset(struct _GParamSpecClass,values_cmp,40,12,42233)
CheckMemberSize(struct _GParamSpecClass,dummy,32,12,42234)
CheckOffset(struct _GParamSpecClass,dummy,48,12,42234)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12019,0);
Msg("Find size of _GParamSpecClass (12019)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(GParamSpecClass,40, 12021, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecClass,80, 12021, 11)
#elif __ia64__
CheckTypeSize(GParamSpecClass,80, 12021, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecClass,40, 12021, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecClass,80, 12021, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecClass,40, 12021, 10)
#elif __s390x__
CheckTypeSize(GParamSpecClass,80, 12021, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12021,0);
Msg("Find size of GParamSpecClass (12021)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecLong,52, 12022, 2)
CheckMemberSize(struct _GParamSpecLong,minimum,4,2,42236)
CheckOffset(struct _GParamSpecLong,minimum,40,2,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,4,2,42237)
CheckOffset(struct _GParamSpecLong,maximum,44,2,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,4,2,42238)
CheckOffset(struct _GParamSpecLong,default_value,48,2,42238)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecLong,96, 12022, 11)
CheckMemberSize(struct _GParamSpecLong,minimum,8,11,42236)
CheckOffset(struct _GParamSpecLong,minimum,72,11,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,8,11,42237)
CheckOffset(struct _GParamSpecLong,maximum,80,11,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,8,11,42238)
CheckOffset(struct _GParamSpecLong,default_value,88,11,42238)
#elif __ia64__
CheckTypeSize(struct _GParamSpecLong,96, 12022, 3)
CheckMemberSize(struct _GParamSpecLong,minimum,8,3,42236)
CheckOffset(struct _GParamSpecLong,minimum,72,3,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,8,3,42237)
CheckOffset(struct _GParamSpecLong,maximum,80,3,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,8,3,42238)
CheckOffset(struct _GParamSpecLong,default_value,88,3,42238)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecLong,52, 12022, 6)
CheckMemberSize(struct _GParamSpecLong,minimum,4,6,42236)
CheckOffset(struct _GParamSpecLong,minimum,40,6,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,4,6,42237)
CheckOffset(struct _GParamSpecLong,maximum,44,6,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,4,6,42238)
CheckOffset(struct _GParamSpecLong,default_value,48,6,42238)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecLong,96, 12022, 9)
CheckMemberSize(struct _GParamSpecLong,minimum,8,9,42236)
CheckOffset(struct _GParamSpecLong,minimum,72,9,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,8,9,42237)
CheckOffset(struct _GParamSpecLong,maximum,80,9,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,8,9,42238)
CheckOffset(struct _GParamSpecLong,default_value,88,9,42238)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecLong,52, 12022, 10)
CheckMemberSize(struct _GParamSpecLong,minimum,4,10,42236)
CheckOffset(struct _GParamSpecLong,minimum,40,10,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,4,10,42237)
CheckOffset(struct _GParamSpecLong,maximum,44,10,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,4,10,42238)
CheckOffset(struct _GParamSpecLong,default_value,48,10,42238)
#elif __s390x__
CheckTypeSize(struct _GParamSpecLong,96, 12022, 12)
CheckMemberSize(struct _GParamSpecLong,minimum,8,12,42236)
CheckOffset(struct _GParamSpecLong,minimum,72,12,42236)
CheckMemberSize(struct _GParamSpecLong,maximum,8,12,42237)
CheckOffset(struct _GParamSpecLong,maximum,80,12,42237)
CheckMemberSize(struct _GParamSpecLong,default_value,8,12,42238)
CheckOffset(struct _GParamSpecLong,default_value,88,12,42238)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12022,0);
Msg("Find size of _GParamSpecLong (12022)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecLong,52, 12023, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecLong,96, 12023, 11)
#elif __ia64__
CheckTypeSize(GParamSpecLong,96, 12023, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecLong,52, 12023, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecLong,96, 12023, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecLong,52, 12023, 10)
#elif __s390x__
CheckTypeSize(GParamSpecLong,96, 12023, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12023,0);
Msg("Find size of GParamSpecLong (12023)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecEnum,48, 12024, 2)
CheckMemberSize(struct _GParamSpecEnum,enum_class,4,2,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,40,2,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,2,42241)
CheckOffset(struct _GParamSpecEnum,default_value,44,2,42241)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecEnum,88, 12024, 11)
CheckMemberSize(struct _GParamSpecEnum,enum_class,8,11,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,72,11,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,11,42241)
CheckOffset(struct _GParamSpecEnum,default_value,80,11,42241)
#elif __ia64__
CheckTypeSize(struct _GParamSpecEnum,88, 12024, 3)
CheckMemberSize(struct _GParamSpecEnum,enum_class,8,3,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,72,3,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,3,42241)
CheckOffset(struct _GParamSpecEnum,default_value,80,3,42241)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecEnum,48, 12024, 6)
CheckMemberSize(struct _GParamSpecEnum,enum_class,4,6,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,40,6,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,6,42241)
CheckOffset(struct _GParamSpecEnum,default_value,44,6,42241)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecEnum,88, 12024, 9)
CheckMemberSize(struct _GParamSpecEnum,enum_class,8,9,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,72,9,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,9,42241)
CheckOffset(struct _GParamSpecEnum,default_value,80,9,42241)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecEnum,48, 12024, 10)
CheckMemberSize(struct _GParamSpecEnum,enum_class,4,10,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,40,10,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,10,42241)
CheckOffset(struct _GParamSpecEnum,default_value,44,10,42241)
#elif __s390x__
CheckTypeSize(struct _GParamSpecEnum,88, 12024, 12)
CheckMemberSize(struct _GParamSpecEnum,enum_class,8,12,42240)
CheckOffset(struct _GParamSpecEnum,enum_class,72,12,42240)
CheckMemberSize(struct _GParamSpecEnum,default_value,4,12,42241)
CheckOffset(struct _GParamSpecEnum,default_value,80,12,42241)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12024,0);
Msg("Find size of _GParamSpecEnum (12024)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecEnum,48, 12025, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecEnum,88, 12025, 11)
#elif __ia64__
CheckTypeSize(GParamSpecEnum,88, 12025, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecEnum,48, 12025, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecEnum,88, 12025, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecEnum,48, 12025, 10)
#elif __s390x__
CheckTypeSize(GParamSpecEnum,88, 12025, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12025,0);
Msg("Find size of GParamSpecEnum (12025)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecFloat,56, 12026, 2)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,2,42243)
CheckOffset(struct _GParamSpecFloat,minimum,40,2,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,2,42244)
CheckOffset(struct _GParamSpecFloat,maximum,44,2,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,2,42245)
CheckOffset(struct _GParamSpecFloat,default_value,48,2,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,2,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,52,2,42246)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecFloat,88, 12026, 11)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,11,42243)
CheckOffset(struct _GParamSpecFloat,minimum,72,11,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,11,42244)
CheckOffset(struct _GParamSpecFloat,maximum,76,11,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,11,42245)
CheckOffset(struct _GParamSpecFloat,default_value,80,11,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,11,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,84,11,42246)
#elif __ia64__
CheckTypeSize(struct _GParamSpecFloat,88, 12026, 3)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,3,42243)
CheckOffset(struct _GParamSpecFloat,minimum,72,3,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,3,42244)
CheckOffset(struct _GParamSpecFloat,maximum,76,3,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,3,42245)
CheckOffset(struct _GParamSpecFloat,default_value,80,3,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,3,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,84,3,42246)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecFloat,56, 12026, 6)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,6,42243)
CheckOffset(struct _GParamSpecFloat,minimum,40,6,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,6,42244)
CheckOffset(struct _GParamSpecFloat,maximum,44,6,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,6,42245)
CheckOffset(struct _GParamSpecFloat,default_value,48,6,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,6,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,52,6,42246)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecFloat,88, 12026, 9)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,9,42243)
CheckOffset(struct _GParamSpecFloat,minimum,72,9,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,9,42244)
CheckOffset(struct _GParamSpecFloat,maximum,76,9,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,9,42245)
CheckOffset(struct _GParamSpecFloat,default_value,80,9,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,9,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,84,9,42246)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecFloat,56, 12026, 10)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,10,42243)
CheckOffset(struct _GParamSpecFloat,minimum,40,10,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,10,42244)
CheckOffset(struct _GParamSpecFloat,maximum,44,10,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,10,42245)
CheckOffset(struct _GParamSpecFloat,default_value,48,10,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,10,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,52,10,42246)
#elif __s390x__
CheckTypeSize(struct _GParamSpecFloat,88, 12026, 12)
CheckMemberSize(struct _GParamSpecFloat,minimum,4,12,42243)
CheckOffset(struct _GParamSpecFloat,minimum,72,12,42243)
CheckMemberSize(struct _GParamSpecFloat,maximum,4,12,42244)
CheckOffset(struct _GParamSpecFloat,maximum,76,12,42244)
CheckMemberSize(struct _GParamSpecFloat,default_value,4,12,42245)
CheckOffset(struct _GParamSpecFloat,default_value,80,12,42245)
CheckMemberSize(struct _GParamSpecFloat,epsilon,4,12,42246)
CheckOffset(struct _GParamSpecFloat,epsilon,84,12,42246)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12026,0);
Msg("Find size of _GParamSpecFloat (12026)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecFloat,56, 12027, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecFloat,88, 12027, 11)
#elif __ia64__
CheckTypeSize(GParamSpecFloat,88, 12027, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecFloat,56, 12027, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecFloat,88, 12027, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecFloat,56, 12027, 10)
#elif __s390x__
CheckTypeSize(GParamSpecFloat,88, 12027, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12027,0);
Msg("Find size of GParamSpecFloat (12027)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecString,56, 12028, 2)
CheckMemberSize(struct _GParamSpecString,default_value,4,2,42248)
CheckOffset(struct _GParamSpecString,default_value,40,2,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,4,2,42249)
CheckOffset(struct _GParamSpecString,cset_first,44,2,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,4,2,42250)
CheckOffset(struct _GParamSpecString,cset_nth,48,2,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,2,42251)
CheckOffset(struct _GParamSpecString,substitutor,52,2,42251)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecString,104, 12028, 11)
CheckMemberSize(struct _GParamSpecString,default_value,8,11,42248)
CheckOffset(struct _GParamSpecString,default_value,72,11,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,8,11,42249)
CheckOffset(struct _GParamSpecString,cset_first,80,11,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,8,11,42250)
CheckOffset(struct _GParamSpecString,cset_nth,88,11,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,11,42251)
CheckOffset(struct _GParamSpecString,substitutor,96,11,42251)
#elif __ia64__
CheckTypeSize(struct _GParamSpecString,104, 12028, 3)
CheckMemberSize(struct _GParamSpecString,default_value,8,3,42248)
CheckOffset(struct _GParamSpecString,default_value,72,3,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,8,3,42249)
CheckOffset(struct _GParamSpecString,cset_first,80,3,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,8,3,42250)
CheckOffset(struct _GParamSpecString,cset_nth,88,3,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,3,42251)
CheckOffset(struct _GParamSpecString,substitutor,96,3,42251)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecString,56, 12028, 6)
CheckMemberSize(struct _GParamSpecString,default_value,4,6,42248)
CheckOffset(struct _GParamSpecString,default_value,40,6,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,4,6,42249)
CheckOffset(struct _GParamSpecString,cset_first,44,6,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,4,6,42250)
CheckOffset(struct _GParamSpecString,cset_nth,48,6,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,6,42251)
CheckOffset(struct _GParamSpecString,substitutor,52,6,42251)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecString,104, 12028, 9)
CheckMemberSize(struct _GParamSpecString,default_value,8,9,42248)
CheckOffset(struct _GParamSpecString,default_value,72,9,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,8,9,42249)
CheckOffset(struct _GParamSpecString,cset_first,80,9,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,8,9,42250)
CheckOffset(struct _GParamSpecString,cset_nth,88,9,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,9,42251)
CheckOffset(struct _GParamSpecString,substitutor,96,9,42251)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecString,56, 12028, 10)
CheckMemberSize(struct _GParamSpecString,default_value,4,10,42248)
CheckOffset(struct _GParamSpecString,default_value,40,10,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,4,10,42249)
CheckOffset(struct _GParamSpecString,cset_first,44,10,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,4,10,42250)
CheckOffset(struct _GParamSpecString,cset_nth,48,10,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,10,42251)
CheckOffset(struct _GParamSpecString,substitutor,52,10,42251)
#elif __s390x__
CheckTypeSize(struct _GParamSpecString,104, 12028, 12)
CheckMemberSize(struct _GParamSpecString,default_value,8,12,42248)
CheckOffset(struct _GParamSpecString,default_value,72,12,42248)
CheckMemberSize(struct _GParamSpecString,cset_first,8,12,42249)
CheckOffset(struct _GParamSpecString,cset_first,80,12,42249)
CheckMemberSize(struct _GParamSpecString,cset_nth,8,12,42250)
CheckOffset(struct _GParamSpecString,cset_nth,88,12,42250)
CheckMemberSize(struct _GParamSpecString,substitutor,1,12,42251)
CheckOffset(struct _GParamSpecString,substitutor,96,12,42251)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12028,0);
Msg("Find size of _GParamSpecString (12028)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecString,56, 12029, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecString,104, 12029, 11)
#elif __ia64__
CheckTypeSize(GParamSpecString,104, 12029, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecString,56, 12029, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecString,104, 12029, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecString,56, 12029, 10)
#elif __s390x__
CheckTypeSize(GParamSpecString,104, 12029, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12029,0);
Msg("Find size of GParamSpecString (12029)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecDouble,72, 12030, 2)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,2,42255)
CheckOffset(struct _GParamSpecDouble,minimum,40,2,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,2,42256)
CheckOffset(struct _GParamSpecDouble,maximum,48,2,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,2,42257)
CheckOffset(struct _GParamSpecDouble,default_value,56,2,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,2,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,64,2,42258)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecDouble,104, 12030, 11)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,11,42255)
CheckOffset(struct _GParamSpecDouble,minimum,72,11,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,11,42256)
CheckOffset(struct _GParamSpecDouble,maximum,80,11,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,11,42257)
CheckOffset(struct _GParamSpecDouble,default_value,88,11,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,11,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,96,11,42258)
#elif __ia64__
CheckTypeSize(struct _GParamSpecDouble,104, 12030, 3)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,3,42255)
CheckOffset(struct _GParamSpecDouble,minimum,72,3,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,3,42256)
CheckOffset(struct _GParamSpecDouble,maximum,80,3,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,3,42257)
CheckOffset(struct _GParamSpecDouble,default_value,88,3,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,3,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,96,3,42258)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecDouble,72, 12030, 6)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,6,42255)
CheckOffset(struct _GParamSpecDouble,minimum,40,6,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,6,42256)
CheckOffset(struct _GParamSpecDouble,maximum,48,6,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,6,42257)
CheckOffset(struct _GParamSpecDouble,default_value,56,6,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,6,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,64,6,42258)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecDouble,104, 12030, 9)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,9,42255)
CheckOffset(struct _GParamSpecDouble,minimum,72,9,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,9,42256)
CheckOffset(struct _GParamSpecDouble,maximum,80,9,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,9,42257)
CheckOffset(struct _GParamSpecDouble,default_value,88,9,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,9,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,96,9,42258)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecDouble,72, 12030, 10)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,10,42255)
CheckOffset(struct _GParamSpecDouble,minimum,40,10,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,10,42256)
CheckOffset(struct _GParamSpecDouble,maximum,48,10,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,10,42257)
CheckOffset(struct _GParamSpecDouble,default_value,56,10,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,10,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,64,10,42258)
#elif __s390x__
CheckTypeSize(struct _GParamSpecDouble,104, 12030, 12)
CheckMemberSize(struct _GParamSpecDouble,minimum,8,12,42255)
CheckOffset(struct _GParamSpecDouble,minimum,72,12,42255)
CheckMemberSize(struct _GParamSpecDouble,maximum,8,12,42256)
CheckOffset(struct _GParamSpecDouble,maximum,80,12,42256)
CheckMemberSize(struct _GParamSpecDouble,default_value,8,12,42257)
CheckOffset(struct _GParamSpecDouble,default_value,88,12,42257)
CheckMemberSize(struct _GParamSpecDouble,epsilon,8,12,42258)
CheckOffset(struct _GParamSpecDouble,epsilon,96,12,42258)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12030,0);
Msg("Find size of _GParamSpecDouble (12030)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecDouble,72, 12031, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecDouble,104, 12031, 11)
#elif __ia64__
CheckTypeSize(GParamSpecDouble,104, 12031, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecDouble,72, 12031, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecDouble,104, 12031, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecDouble,72, 12031, 10)
#elif __s390x__
CheckTypeSize(GParamSpecDouble,104, 12031, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12031,0);
Msg("Find size of GParamSpecDouble (12031)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecParam,40, 12032, 2)
Msg("Missing member data for _GParamSpecParam on IA32\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,2,42259)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecParam,72, 12032, 11)
Msg("Missing member data for _GParamSpecParam on x86-64\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,11,42259)
#elif __ia64__
CheckTypeSize(struct _GParamSpecParam,72, 12032, 3)
Msg("Missing member data for _GParamSpecParam on IA64\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,3,42259)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecParam,40, 12032, 6)
Msg("Missing member data for _GParamSpecParam on PPC32\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,6,42259)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecParam,72, 12032, 9)
Msg("Missing member data for _GParamSpecParam on PPC64\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,9,42259)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecParam,40, 12032, 10)
Msg("Missing member data for _GParamSpecParam on S390\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,10,42259)
#elif __s390x__
CheckTypeSize(struct _GParamSpecParam,72, 12032, 12)
Msg("Missing member data for _GParamSpecParam on S390X\n");
CheckOffset(struct _GParamSpecParam,parent_instance,0,12,42259)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12032,0);
Msg("Find size of _GParamSpecParam (12032)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecParam,40, 12033, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecParam,72, 12033, 11)
#elif __ia64__
CheckTypeSize(GParamSpecParam,72, 12033, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecParam,40, 12033, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecParam,72, 12033, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecParam,40, 12033, 10)
#elif __s390x__
CheckTypeSize(GParamSpecParam,72, 12033, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12033,0);
Msg("Find size of GParamSpecParam (12033)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecValueArray,48, 12034, 2)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,4,2,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,40,2,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,2,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,44,2,42262)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecValueArray,88, 12034, 11)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,8,11,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,72,11,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,11,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,80,11,42262)
#elif __ia64__
CheckTypeSize(struct _GParamSpecValueArray,88, 12034, 3)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,8,3,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,72,3,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,3,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,80,3,42262)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecValueArray,48, 12034, 6)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,4,6,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,40,6,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,6,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,44,6,42262)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecValueArray,88, 12034, 9)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,8,9,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,72,9,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,9,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,80,9,42262)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecValueArray,48, 12034, 10)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,4,10,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,40,10,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,10,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,44,10,42262)
#elif __s390x__
CheckTypeSize(struct _GParamSpecValueArray,88, 12034, 12)
CheckMemberSize(struct _GParamSpecValueArray,element_spec,8,12,42261)
CheckOffset(struct _GParamSpecValueArray,element_spec,72,12,42261)
CheckMemberSize(struct _GParamSpecValueArray,fixed_n_elements,4,12,42262)
CheckOffset(struct _GParamSpecValueArray,fixed_n_elements,80,12,42262)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12034,0);
Msg("Find size of _GParamSpecValueArray (12034)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecValueArray,48, 12035, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecValueArray,88, 12035, 11)
#elif __ia64__
CheckTypeSize(GParamSpecValueArray,88, 12035, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecValueArray,48, 12035, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecValueArray,88, 12035, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecValueArray,48, 12035, 10)
#elif __s390x__
CheckTypeSize(GParamSpecValueArray,88, 12035, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12035,0);
Msg("Find size of GParamSpecValueArray (12035)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecFlags,48, 12036, 2)
CheckMemberSize(struct _GParamSpecFlags,flags_class,4,2,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,40,2,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,2,42265)
CheckOffset(struct _GParamSpecFlags,default_value,44,2,42265)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecFlags,88, 12036, 11)
CheckMemberSize(struct _GParamSpecFlags,flags_class,8,11,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,72,11,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,11,42265)
CheckOffset(struct _GParamSpecFlags,default_value,80,11,42265)
#elif __ia64__
CheckTypeSize(struct _GParamSpecFlags,88, 12036, 3)
CheckMemberSize(struct _GParamSpecFlags,flags_class,8,3,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,72,3,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,3,42265)
CheckOffset(struct _GParamSpecFlags,default_value,80,3,42265)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecFlags,48, 12036, 6)
CheckMemberSize(struct _GParamSpecFlags,flags_class,4,6,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,40,6,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,6,42265)
CheckOffset(struct _GParamSpecFlags,default_value,44,6,42265)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecFlags,88, 12036, 9)
CheckMemberSize(struct _GParamSpecFlags,flags_class,8,9,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,72,9,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,9,42265)
CheckOffset(struct _GParamSpecFlags,default_value,80,9,42265)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecFlags,48, 12036, 10)
CheckMemberSize(struct _GParamSpecFlags,flags_class,4,10,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,40,10,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,10,42265)
CheckOffset(struct _GParamSpecFlags,default_value,44,10,42265)
#elif __s390x__
CheckTypeSize(struct _GParamSpecFlags,88, 12036, 12)
CheckMemberSize(struct _GParamSpecFlags,flags_class,8,12,42264)
CheckOffset(struct _GParamSpecFlags,flags_class,72,12,42264)
CheckMemberSize(struct _GParamSpecFlags,default_value,4,12,42265)
CheckOffset(struct _GParamSpecFlags,default_value,80,12,42265)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12036,0);
Msg("Find size of _GParamSpecFlags (12036)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecFlags,48, 12037, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecFlags,88, 12037, 11)
#elif __ia64__
CheckTypeSize(GParamSpecFlags,88, 12037, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecFlags,48, 12037, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecFlags,88, 12037, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecFlags,48, 12037, 10)
#elif __s390x__
CheckTypeSize(GParamSpecFlags,88, 12037, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12037,0);
Msg("Find size of GParamSpecFlags (12037)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecInt64,64, 12038, 2)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,2,42267)
CheckOffset(struct _GParamSpecInt64,minimum,40,2,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,2,42268)
CheckOffset(struct _GParamSpecInt64,maximum,48,2,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,2,42269)
CheckOffset(struct _GParamSpecInt64,default_value,56,2,42269)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecInt64,96, 12038, 11)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,11,42267)
CheckOffset(struct _GParamSpecInt64,minimum,72,11,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,11,42268)
CheckOffset(struct _GParamSpecInt64,maximum,80,11,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,11,42269)
CheckOffset(struct _GParamSpecInt64,default_value,88,11,42269)
#elif __ia64__
CheckTypeSize(struct _GParamSpecInt64,96, 12038, 3)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,3,42267)
CheckOffset(struct _GParamSpecInt64,minimum,72,3,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,3,42268)
CheckOffset(struct _GParamSpecInt64,maximum,80,3,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,3,42269)
CheckOffset(struct _GParamSpecInt64,default_value,88,3,42269)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecInt64,64, 12038, 6)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,6,42267)
CheckOffset(struct _GParamSpecInt64,minimum,40,6,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,6,42268)
CheckOffset(struct _GParamSpecInt64,maximum,48,6,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,6,42269)
CheckOffset(struct _GParamSpecInt64,default_value,56,6,42269)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecInt64,96, 12038, 9)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,9,42267)
CheckOffset(struct _GParamSpecInt64,minimum,72,9,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,9,42268)
CheckOffset(struct _GParamSpecInt64,maximum,80,9,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,9,42269)
CheckOffset(struct _GParamSpecInt64,default_value,88,9,42269)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecInt64,64, 12038, 10)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,10,42267)
CheckOffset(struct _GParamSpecInt64,minimum,40,10,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,10,42268)
CheckOffset(struct _GParamSpecInt64,maximum,48,10,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,10,42269)
CheckOffset(struct _GParamSpecInt64,default_value,56,10,42269)
#elif __s390x__
CheckTypeSize(struct _GParamSpecInt64,96, 12038, 12)
CheckMemberSize(struct _GParamSpecInt64,minimum,8,12,42267)
CheckOffset(struct _GParamSpecInt64,minimum,72,12,42267)
CheckMemberSize(struct _GParamSpecInt64,maximum,8,12,42268)
CheckOffset(struct _GParamSpecInt64,maximum,80,12,42268)
CheckMemberSize(struct _GParamSpecInt64,default_value,8,12,42269)
CheckOffset(struct _GParamSpecInt64,default_value,88,12,42269)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12038,0);
Msg("Find size of _GParamSpecInt64 (12038)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecInt64,64, 12039, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecInt64,96, 12039, 11)
#elif __ia64__
CheckTypeSize(GParamSpecInt64,96, 12039, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecInt64,64, 12039, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecInt64,96, 12039, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecInt64,64, 12039, 10)
#elif __s390x__
CheckTypeSize(GParamSpecInt64,96, 12039, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12039,0);
Msg("Find size of GParamSpecInt64 (12039)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecPointer,40, 12040, 2)
Msg("Missing member data for _GParamSpecPointer on IA32\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,2,42270)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecPointer,72, 12040, 11)
Msg("Missing member data for _GParamSpecPointer on x86-64\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,11,42270)
#elif __ia64__
CheckTypeSize(struct _GParamSpecPointer,72, 12040, 3)
Msg("Missing member data for _GParamSpecPointer on IA64\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,3,42270)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecPointer,40, 12040, 6)
Msg("Missing member data for _GParamSpecPointer on PPC32\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,6,42270)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecPointer,72, 12040, 9)
Msg("Missing member data for _GParamSpecPointer on PPC64\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,9,42270)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecPointer,40, 12040, 10)
Msg("Missing member data for _GParamSpecPointer on S390\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,10,42270)
#elif __s390x__
CheckTypeSize(struct _GParamSpecPointer,72, 12040, 12)
Msg("Missing member data for _GParamSpecPointer on S390X\n");
CheckOffset(struct _GParamSpecPointer,parent_instance,0,12,42270)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12040,0);
Msg("Find size of _GParamSpecPointer (12040)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecPointer,40, 12041, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecPointer,72, 12041, 11)
#elif __ia64__
CheckTypeSize(GParamSpecPointer,72, 12041, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecPointer,40, 12041, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecPointer,72, 12041, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecPointer,40, 12041, 10)
#elif __s390x__
CheckTypeSize(GParamSpecPointer,72, 12041, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12041,0);
Msg("Find size of GParamSpecPointer (12041)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecInt,52, 12042, 2)
CheckMemberSize(struct _GParamSpecInt,minimum,4,2,42272)
CheckOffset(struct _GParamSpecInt,minimum,40,2,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,2,42273)
CheckOffset(struct _GParamSpecInt,maximum,44,2,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,2,42274)
CheckOffset(struct _GParamSpecInt,default_value,48,2,42274)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecInt,88, 12042, 11)
CheckMemberSize(struct _GParamSpecInt,minimum,4,11,42272)
CheckOffset(struct _GParamSpecInt,minimum,72,11,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,11,42273)
CheckOffset(struct _GParamSpecInt,maximum,76,11,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,11,42274)
CheckOffset(struct _GParamSpecInt,default_value,80,11,42274)
#elif __ia64__
CheckTypeSize(struct _GParamSpecInt,88, 12042, 3)
CheckMemberSize(struct _GParamSpecInt,minimum,4,3,42272)
CheckOffset(struct _GParamSpecInt,minimum,72,3,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,3,42273)
CheckOffset(struct _GParamSpecInt,maximum,76,3,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,3,42274)
CheckOffset(struct _GParamSpecInt,default_value,80,3,42274)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecInt,52, 12042, 6)
CheckMemberSize(struct _GParamSpecInt,minimum,4,6,42272)
CheckOffset(struct _GParamSpecInt,minimum,40,6,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,6,42273)
CheckOffset(struct _GParamSpecInt,maximum,44,6,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,6,42274)
CheckOffset(struct _GParamSpecInt,default_value,48,6,42274)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecInt,88, 12042, 9)
CheckMemberSize(struct _GParamSpecInt,minimum,4,9,42272)
CheckOffset(struct _GParamSpecInt,minimum,72,9,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,9,42273)
CheckOffset(struct _GParamSpecInt,maximum,76,9,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,9,42274)
CheckOffset(struct _GParamSpecInt,default_value,80,9,42274)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecInt,52, 12042, 10)
CheckMemberSize(struct _GParamSpecInt,minimum,4,10,42272)
CheckOffset(struct _GParamSpecInt,minimum,40,10,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,10,42273)
CheckOffset(struct _GParamSpecInt,maximum,44,10,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,10,42274)
CheckOffset(struct _GParamSpecInt,default_value,48,10,42274)
#elif __s390x__
CheckTypeSize(struct _GParamSpecInt,88, 12042, 12)
CheckMemberSize(struct _GParamSpecInt,minimum,4,12,42272)
CheckOffset(struct _GParamSpecInt,minimum,72,12,42272)
CheckMemberSize(struct _GParamSpecInt,maximum,4,12,42273)
CheckOffset(struct _GParamSpecInt,maximum,76,12,42273)
CheckMemberSize(struct _GParamSpecInt,default_value,4,12,42274)
CheckOffset(struct _GParamSpecInt,default_value,80,12,42274)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12042,0);
Msg("Find size of _GParamSpecInt (12042)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecInt,52, 12043, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecInt,88, 12043, 11)
#elif __ia64__
CheckTypeSize(GParamSpecInt,88, 12043, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecInt,52, 12043, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecInt,88, 12043, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecInt,52, 12043, 10)
#elif __s390x__
CheckTypeSize(GParamSpecInt,88, 12043, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12043,0);
Msg("Find size of GParamSpecInt (12043)\n");
#endif

#if __i386__
CheckTypeSize(struct _GTypeModuleClass,92, 12044, 2)
CheckMemberSize(struct _GTypeModuleClass,load,4,2,42277)
CheckOffset(struct _GTypeModuleClass,load,68,2,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,4,2,42279)
CheckOffset(struct _GTypeModuleClass,unload,72,2,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,4,2,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,76,2,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,4,2,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,80,2,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,4,2,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,84,2,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,4,2,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,88,2,42283)
#elif __x86_64__
CheckTypeSize(struct _GTypeModuleClass,184, 12044, 11)
CheckMemberSize(struct _GTypeModuleClass,load,8,11,42277)
CheckOffset(struct _GTypeModuleClass,load,136,11,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,8,11,42279)
CheckOffset(struct _GTypeModuleClass,unload,144,11,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,8,11,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,152,11,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,8,11,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,160,11,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,8,11,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,168,11,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,8,11,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,176,11,42283)
#elif __ia64__
CheckTypeSize(struct _GTypeModuleClass,184, 12044, 3)
CheckMemberSize(struct _GTypeModuleClass,load,8,3,42277)
CheckOffset(struct _GTypeModuleClass,load,136,3,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,8,3,42279)
CheckOffset(struct _GTypeModuleClass,unload,144,3,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,8,3,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,152,3,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,8,3,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,160,3,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,8,3,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,168,3,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,8,3,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,176,3,42283)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GTypeModuleClass,92, 12044, 6)
CheckMemberSize(struct _GTypeModuleClass,load,4,6,42277)
CheckOffset(struct _GTypeModuleClass,load,68,6,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,4,6,42279)
CheckOffset(struct _GTypeModuleClass,unload,72,6,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,4,6,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,76,6,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,4,6,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,80,6,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,4,6,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,84,6,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,4,6,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,88,6,42283)
#elif __powerpc64__
CheckTypeSize(struct _GTypeModuleClass,184, 12044, 9)
CheckMemberSize(struct _GTypeModuleClass,load,8,9,42277)
CheckOffset(struct _GTypeModuleClass,load,136,9,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,8,9,42279)
CheckOffset(struct _GTypeModuleClass,unload,144,9,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,8,9,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,152,9,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,8,9,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,160,9,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,8,9,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,168,9,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,8,9,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,176,9,42283)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GTypeModuleClass,92, 12044, 10)
CheckMemberSize(struct _GTypeModuleClass,load,4,10,42277)
CheckOffset(struct _GTypeModuleClass,load,68,10,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,4,10,42279)
CheckOffset(struct _GTypeModuleClass,unload,72,10,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,4,10,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,76,10,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,4,10,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,80,10,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,4,10,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,84,10,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,4,10,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,88,10,42283)
#elif __s390x__
CheckTypeSize(struct _GTypeModuleClass,184, 12044, 12)
CheckMemberSize(struct _GTypeModuleClass,load,8,12,42277)
CheckOffset(struct _GTypeModuleClass,load,136,12,42277)
CheckMemberSize(struct _GTypeModuleClass,unload,8,12,42279)
CheckOffset(struct _GTypeModuleClass,unload,144,12,42279)
CheckMemberSize(struct _GTypeModuleClass,reserved1,8,12,42280)
CheckOffset(struct _GTypeModuleClass,reserved1,152,12,42280)
CheckMemberSize(struct _GTypeModuleClass,reserved2,8,12,42281)
CheckOffset(struct _GTypeModuleClass,reserved2,160,12,42281)
CheckMemberSize(struct _GTypeModuleClass,reserved3,8,12,42282)
CheckOffset(struct _GTypeModuleClass,reserved3,168,12,42282)
CheckMemberSize(struct _GTypeModuleClass,reserved4,8,12,42283)
CheckOffset(struct _GTypeModuleClass,reserved4,176,12,42283)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12044,0);
Msg("Find size of _GTypeModuleClass (12044)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12045,0);
Msg("Find size of fptr_glib-object_55 (12045)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12046,0);
Msg("Find size of fptr_glib-object_81 (12046)\n");
#endif

#if __i386__
CheckTypeSize(GTypeModuleClass,92, 12047, 2)
#elif __x86_64__
CheckTypeSize(GTypeModuleClass,184, 12047, 11)
#elif __ia64__
CheckTypeSize(GTypeModuleClass,184, 12047, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GTypeModuleClass,92, 12047, 6)
#elif __powerpc64__
CheckTypeSize(GTypeModuleClass,184, 12047, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GTypeModuleClass,92, 12047, 10)
#elif __s390x__
CheckTypeSize(GTypeModuleClass,184, 12047, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12047,0);
Msg("Find size of GTypeModuleClass (12047)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecUInt,52, 12048, 2)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,2,42285)
CheckOffset(struct _GParamSpecUInt,minimum,40,2,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,2,42286)
CheckOffset(struct _GParamSpecUInt,maximum,44,2,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,2,42287)
CheckOffset(struct _GParamSpecUInt,default_value,48,2,42287)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecUInt,88, 12048, 11)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,11,42285)
CheckOffset(struct _GParamSpecUInt,minimum,72,11,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,11,42286)
CheckOffset(struct _GParamSpecUInt,maximum,76,11,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,11,42287)
CheckOffset(struct _GParamSpecUInt,default_value,80,11,42287)
#elif __ia64__
CheckTypeSize(struct _GParamSpecUInt,88, 12048, 3)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,3,42285)
CheckOffset(struct _GParamSpecUInt,minimum,72,3,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,3,42286)
CheckOffset(struct _GParamSpecUInt,maximum,76,3,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,3,42287)
CheckOffset(struct _GParamSpecUInt,default_value,80,3,42287)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecUInt,52, 12048, 6)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,6,42285)
CheckOffset(struct _GParamSpecUInt,minimum,40,6,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,6,42286)
CheckOffset(struct _GParamSpecUInt,maximum,44,6,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,6,42287)
CheckOffset(struct _GParamSpecUInt,default_value,48,6,42287)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecUInt,88, 12048, 9)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,9,42285)
CheckOffset(struct _GParamSpecUInt,minimum,72,9,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,9,42286)
CheckOffset(struct _GParamSpecUInt,maximum,76,9,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,9,42287)
CheckOffset(struct _GParamSpecUInt,default_value,80,9,42287)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecUInt,52, 12048, 10)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,10,42285)
CheckOffset(struct _GParamSpecUInt,minimum,40,10,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,10,42286)
CheckOffset(struct _GParamSpecUInt,maximum,44,10,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,10,42287)
CheckOffset(struct _GParamSpecUInt,default_value,48,10,42287)
#elif __s390x__
CheckTypeSize(struct _GParamSpecUInt,88, 12048, 12)
CheckMemberSize(struct _GParamSpecUInt,minimum,4,12,42285)
CheckOffset(struct _GParamSpecUInt,minimum,72,12,42285)
CheckMemberSize(struct _GParamSpecUInt,maximum,4,12,42286)
CheckOffset(struct _GParamSpecUInt,maximum,76,12,42286)
CheckMemberSize(struct _GParamSpecUInt,default_value,4,12,42287)
CheckOffset(struct _GParamSpecUInt,default_value,80,12,42287)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12048,0);
Msg("Find size of _GParamSpecUInt (12048)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecUInt,52, 12049, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecUInt,88, 12049, 11)
#elif __ia64__
CheckTypeSize(GParamSpecUInt,88, 12049, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecUInt,52, 12049, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecUInt,88, 12049, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecUInt,52, 12049, 10)
#elif __s390x__
CheckTypeSize(GParamSpecUInt,88, 12049, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12049,0);
Msg("Find size of GParamSpecUInt (12049)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecUChar,44, 12050, 2)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,2,42289)
CheckOffset(struct _GParamSpecUChar,minimum,40,2,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,2,42290)
CheckOffset(struct _GParamSpecUChar,maximum,41,2,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,2,42291)
CheckOffset(struct _GParamSpecUChar,default_value,42,2,42291)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecUChar,80, 12050, 11)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,11,42289)
CheckOffset(struct _GParamSpecUChar,minimum,72,11,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,11,42290)
CheckOffset(struct _GParamSpecUChar,maximum,73,11,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,11,42291)
CheckOffset(struct _GParamSpecUChar,default_value,74,11,42291)
#elif __ia64__
CheckTypeSize(struct _GParamSpecUChar,80, 12050, 3)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,3,42289)
CheckOffset(struct _GParamSpecUChar,minimum,72,3,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,3,42290)
CheckOffset(struct _GParamSpecUChar,maximum,73,3,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,3,42291)
CheckOffset(struct _GParamSpecUChar,default_value,74,3,42291)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecUChar,44, 12050, 6)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,6,42289)
CheckOffset(struct _GParamSpecUChar,minimum,40,6,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,6,42290)
CheckOffset(struct _GParamSpecUChar,maximum,41,6,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,6,42291)
CheckOffset(struct _GParamSpecUChar,default_value,42,6,42291)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecUChar,80, 12050, 9)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,9,42289)
CheckOffset(struct _GParamSpecUChar,minimum,72,9,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,9,42290)
CheckOffset(struct _GParamSpecUChar,maximum,73,9,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,9,42291)
CheckOffset(struct _GParamSpecUChar,default_value,74,9,42291)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecUChar,44, 12050, 10)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,10,42289)
CheckOffset(struct _GParamSpecUChar,minimum,40,10,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,10,42290)
CheckOffset(struct _GParamSpecUChar,maximum,41,10,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,10,42291)
CheckOffset(struct _GParamSpecUChar,default_value,42,10,42291)
#elif __s390x__
CheckTypeSize(struct _GParamSpecUChar,80, 12050, 12)
CheckMemberSize(struct _GParamSpecUChar,minimum,1,12,42289)
CheckOffset(struct _GParamSpecUChar,minimum,72,12,42289)
CheckMemberSize(struct _GParamSpecUChar,maximum,1,12,42290)
CheckOffset(struct _GParamSpecUChar,maximum,73,12,42290)
CheckMemberSize(struct _GParamSpecUChar,default_value,1,12,42291)
CheckOffset(struct _GParamSpecUChar,default_value,74,12,42291)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12050,0);
Msg("Find size of _GParamSpecUChar (12050)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecUChar,44, 12051, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecUChar,80, 12051, 11)
#elif __ia64__
CheckTypeSize(GParamSpecUChar,80, 12051, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecUChar,44, 12051, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecUChar,80, 12051, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecUChar,44, 12051, 10)
#elif __s390x__
CheckTypeSize(GParamSpecUChar,80, 12051, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12051,0);
Msg("Find size of GParamSpecUChar (12051)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecULong,52, 12052, 2)
CheckMemberSize(struct _GParamSpecULong,minimum,4,2,42293)
CheckOffset(struct _GParamSpecULong,minimum,40,2,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,4,2,42294)
CheckOffset(struct _GParamSpecULong,maximum,44,2,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,4,2,42295)
CheckOffset(struct _GParamSpecULong,default_value,48,2,42295)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecULong,96, 12052, 11)
CheckMemberSize(struct _GParamSpecULong,minimum,8,11,42293)
CheckOffset(struct _GParamSpecULong,minimum,72,11,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,8,11,42294)
CheckOffset(struct _GParamSpecULong,maximum,80,11,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,8,11,42295)
CheckOffset(struct _GParamSpecULong,default_value,88,11,42295)
#elif __ia64__
CheckTypeSize(struct _GParamSpecULong,96, 12052, 3)
CheckMemberSize(struct _GParamSpecULong,minimum,8,3,42293)
CheckOffset(struct _GParamSpecULong,minimum,72,3,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,8,3,42294)
CheckOffset(struct _GParamSpecULong,maximum,80,3,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,8,3,42295)
CheckOffset(struct _GParamSpecULong,default_value,88,3,42295)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecULong,52, 12052, 6)
CheckMemberSize(struct _GParamSpecULong,minimum,4,6,42293)
CheckOffset(struct _GParamSpecULong,minimum,40,6,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,4,6,42294)
CheckOffset(struct _GParamSpecULong,maximum,44,6,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,4,6,42295)
CheckOffset(struct _GParamSpecULong,default_value,48,6,42295)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecULong,96, 12052, 9)
CheckMemberSize(struct _GParamSpecULong,minimum,8,9,42293)
CheckOffset(struct _GParamSpecULong,minimum,72,9,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,8,9,42294)
CheckOffset(struct _GParamSpecULong,maximum,80,9,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,8,9,42295)
CheckOffset(struct _GParamSpecULong,default_value,88,9,42295)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecULong,52, 12052, 10)
CheckMemberSize(struct _GParamSpecULong,minimum,4,10,42293)
CheckOffset(struct _GParamSpecULong,minimum,40,10,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,4,10,42294)
CheckOffset(struct _GParamSpecULong,maximum,44,10,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,4,10,42295)
CheckOffset(struct _GParamSpecULong,default_value,48,10,42295)
#elif __s390x__
CheckTypeSize(struct _GParamSpecULong,96, 12052, 12)
CheckMemberSize(struct _GParamSpecULong,minimum,8,12,42293)
CheckOffset(struct _GParamSpecULong,minimum,72,12,42293)
CheckMemberSize(struct _GParamSpecULong,maximum,8,12,42294)
CheckOffset(struct _GParamSpecULong,maximum,80,12,42294)
CheckMemberSize(struct _GParamSpecULong,default_value,8,12,42295)
CheckOffset(struct _GParamSpecULong,default_value,88,12,42295)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12052,0);
Msg("Find size of _GParamSpecULong (12052)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecULong,52, 12053, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecULong,96, 12053, 11)
#elif __ia64__
CheckTypeSize(GParamSpecULong,96, 12053, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecULong,52, 12053, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecULong,96, 12053, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecULong,52, 12053, 10)
#elif __s390x__
CheckTypeSize(GParamSpecULong,96, 12053, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12053,0);
Msg("Find size of GParamSpecULong (12053)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecChar,44, 12054, 2)
CheckMemberSize(struct _GParamSpecChar,minimum,1,2,42297)
CheckOffset(struct _GParamSpecChar,minimum,40,2,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,2,42298)
CheckOffset(struct _GParamSpecChar,maximum,41,2,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,2,42299)
CheckOffset(struct _GParamSpecChar,default_value,42,2,42299)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecChar,80, 12054, 11)
CheckMemberSize(struct _GParamSpecChar,minimum,1,11,42297)
CheckOffset(struct _GParamSpecChar,minimum,72,11,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,11,42298)
CheckOffset(struct _GParamSpecChar,maximum,73,11,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,11,42299)
CheckOffset(struct _GParamSpecChar,default_value,74,11,42299)
#elif __ia64__
CheckTypeSize(struct _GParamSpecChar,80, 12054, 3)
CheckMemberSize(struct _GParamSpecChar,minimum,1,3,42297)
CheckOffset(struct _GParamSpecChar,minimum,72,3,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,3,42298)
CheckOffset(struct _GParamSpecChar,maximum,73,3,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,3,42299)
CheckOffset(struct _GParamSpecChar,default_value,74,3,42299)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecChar,44, 12054, 6)
CheckMemberSize(struct _GParamSpecChar,minimum,1,6,42297)
CheckOffset(struct _GParamSpecChar,minimum,40,6,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,6,42298)
CheckOffset(struct _GParamSpecChar,maximum,41,6,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,6,42299)
CheckOffset(struct _GParamSpecChar,default_value,42,6,42299)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecChar,80, 12054, 9)
CheckMemberSize(struct _GParamSpecChar,minimum,1,9,42297)
CheckOffset(struct _GParamSpecChar,minimum,72,9,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,9,42298)
CheckOffset(struct _GParamSpecChar,maximum,73,9,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,9,42299)
CheckOffset(struct _GParamSpecChar,default_value,74,9,42299)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecChar,44, 12054, 10)
CheckMemberSize(struct _GParamSpecChar,minimum,1,10,42297)
CheckOffset(struct _GParamSpecChar,minimum,40,10,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,10,42298)
CheckOffset(struct _GParamSpecChar,maximum,41,10,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,10,42299)
CheckOffset(struct _GParamSpecChar,default_value,42,10,42299)
#elif __s390x__
CheckTypeSize(struct _GParamSpecChar,80, 12054, 12)
CheckMemberSize(struct _GParamSpecChar,minimum,1,12,42297)
CheckOffset(struct _GParamSpecChar,minimum,72,12,42297)
CheckMemberSize(struct _GParamSpecChar,maximum,1,12,42298)
CheckOffset(struct _GParamSpecChar,maximum,73,12,42298)
CheckMemberSize(struct _GParamSpecChar,default_value,1,12,42299)
CheckOffset(struct _GParamSpecChar,default_value,74,12,42299)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12054,0);
Msg("Find size of _GParamSpecChar (12054)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecChar,44, 12055, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecChar,80, 12055, 11)
#elif __ia64__
CheckTypeSize(GParamSpecChar,80, 12055, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecChar,44, 12055, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecChar,80, 12055, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecChar,44, 12055, 10)
#elif __s390x__
CheckTypeSize(GParamSpecChar,80, 12055, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12055,0);
Msg("Find size of GParamSpecChar (12055)\n");
#endif

#if __i386__
CheckTypeSize(struct _GParamSpecBoolean,44, 12056, 2)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,2,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,40,2,42301)
#elif __x86_64__
CheckTypeSize(struct _GParamSpecBoolean,80, 12056, 11)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,11,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,72,11,42301)
#elif __ia64__
CheckTypeSize(struct _GParamSpecBoolean,80, 12056, 3)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,3,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,72,3,42301)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GParamSpecBoolean,44, 12056, 6)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,6,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,40,6,42301)
#elif __powerpc64__
CheckTypeSize(struct _GParamSpecBoolean,80, 12056, 9)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,9,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,72,9,42301)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GParamSpecBoolean,44, 12056, 10)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,10,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,40,10,42301)
#elif __s390x__
CheckTypeSize(struct _GParamSpecBoolean,80, 12056, 12)
CheckMemberSize(struct _GParamSpecBoolean,default_value,4,12,42301)
CheckOffset(struct _GParamSpecBoolean,default_value,72,12,42301)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12056,0);
Msg("Find size of _GParamSpecBoolean (12056)\n");
#endif

#if __i386__
CheckTypeSize(GParamSpecBoolean,44, 12057, 2)
#elif __x86_64__
CheckTypeSize(GParamSpecBoolean,80, 12057, 11)
#elif __ia64__
CheckTypeSize(GParamSpecBoolean,80, 12057, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GParamSpecBoolean,44, 12057, 6)
#elif __powerpc64__
CheckTypeSize(GParamSpecBoolean,80, 12057, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GParamSpecBoolean,44, 12057, 10)
#elif __s390x__
CheckTypeSize(GParamSpecBoolean,80, 12057, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12057,0);
Msg("Find size of GParamSpecBoolean (12057)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12058,0);
Msg("Find size of fptr_anonymous-glib-object.h.types-0 (12058)\n");
#endif

#if __i386__
CheckTypeSize(GObjectFinalizeFunc,4, 12059, 2)
#elif __ia64__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectFinalizeFunc,4, 12059, 6)
#elif __powerpc64__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectFinalizeFunc,4, 12059, 10)
#elif __s390x__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 12)
#elif __x86_64__
CheckTypeSize(GObjectFinalizeFunc,8, 12059, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12059,0);
Msg("Find size of GObjectFinalizeFunc (12059)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12060,0);
Msg("Find size of fptr_anonymous-glib-object.h.types-2 (12060)\n");
#endif

#if __i386__
CheckTypeSize(GObjectGetPropertyFunc,4, 12061, 2)
#elif __ia64__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectGetPropertyFunc,4, 12061, 6)
#elif __powerpc64__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectGetPropertyFunc,4, 12061, 10)
#elif __s390x__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 12)
#elif __x86_64__
CheckTypeSize(GObjectGetPropertyFunc,8, 12061, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12061,0);
Msg("Find size of GObjectGetPropertyFunc (12061)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12062,0);
Msg("Find size of fptr_anonymous-glib-object.h.types-4 (12062)\n");
#endif

#if __i386__
CheckTypeSize(GObjectSetPropertyFunc,4, 12063, 2)
#elif __ia64__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GObjectSetPropertyFunc,4, 12063, 6)
#elif __powerpc64__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GObjectSetPropertyFunc,4, 12063, 10)
#elif __s390x__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 12)
#elif __x86_64__
CheckTypeSize(GObjectSetPropertyFunc,8, 12063, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12063,0);
Msg("Find size of GObjectSetPropertyFunc (12063)\n");
#endif

#if __i386__
CheckTypeSize(gchararray,4, 16219, 2)
#elif __x86_64__
CheckTypeSize(gchararray,8, 16219, 11)
#elif __ia64__
CheckTypeSize(gchararray,8, 16219, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gchararray,4, 16219, 6)
#elif __powerpc64__
CheckTypeSize(gchararray,8, 16219, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(gchararray,4, 16219, 10)
#elif __s390x__
CheckTypeSize(gchararray,8, 16219, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16219,0);
Msg("Find size of gchararray (16219)\n");
#endif

#if __i386__
CheckTypeSize(GStrv,4, 16220, 2)
#elif __x86_64__
CheckTypeSize(GStrv,8, 16220, 11)
#elif __ia64__
CheckTypeSize(GStrv,8, 16220, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GStrv,4, 16220, 6)
#elif __powerpc64__
CheckTypeSize(GStrv,8, 16220, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GStrv,4, 16220, 10)
#elif __s390x__
CheckTypeSize(GStrv,8, 16220, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16220,0);
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
