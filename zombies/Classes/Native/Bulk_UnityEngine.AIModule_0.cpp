#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.AI.NavMeshData
struct NavMeshData_t1084598030;
// UnityEngine.Object
struct Object_t631007953;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t1580782682;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>
struct List_1_t2785658607;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_t2160260967;
// UnityEngine.AI.NavMeshBuildMarkup[]
struct NavMeshBuildMarkupU5BU5D_t3844975876;
// UnityEngine.AI.NavMeshBuildSource[]
struct NavMeshBuildSourceU5BU5D_t2809533356;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AI.NavMeshBuildSource>
struct IEnumerable_1_t3963006410;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Component
struct Component_t1923634451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3320302194;
extern const uint32_t NavMesh_AddNavMeshData_m3251627004_MetadataUsageId;
extern const uint32_t NavMesh_AddNavMeshData_m1391221680_MetadataUsageId;
extern RuntimeClass* NavMesh_t1865600375_il2cpp_TypeInfo_var;
extern const uint32_t NavMesh_Internal_CallOnNavMeshPreUpdate_m3135297503_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_ToArray_m827541566_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1060961220_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2521234691_RuntimeMethod_var;
extern String_t* _stringLiteral2672144621;
extern String_t* _stringLiteral2001578372;
extern const uint32_t NavMeshBuilder_CollectSources_m553736863_MetadataUsageId;
extern const uint32_t NavMeshBuilder_CollectSources_m1517047385_MetadataUsageId;
extern RuntimeClass* NavMeshData_t1084598030_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1887279536;
extern const uint32_t NavMeshBuilder_BuildNavMeshData_m2250664010_MetadataUsageId;
extern String_t* _stringLiteral2037252866;
extern const uint32_t NavMeshBuilder_UpdateNavMeshData_m3498158452_MetadataUsageId;
extern const uint32_t NavMeshBuilder_UpdateNavMeshDataAsync_m159354334_MetadataUsageId;
extern const uint32_t NavMeshBuildMarkup_set_root_m518958946_MetadataUsageId;
extern const uint32_t NavMeshBuildSource_set_sourceObject_m1573220770_MetadataUsageId;
extern const uint32_t NavMeshData__ctor_m4164090663_MetadataUsageId;
extern const uint32_t NavMeshData__ctor_m4156228563_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3541627765;
extern const uint32_t NavMeshDataInstance_set_owner_m70396501_MetadataUsageId;
extern String_t* _stringLiteral2692804195;
extern const uint32_t NavMeshLinkInstance_set_owner_m1819110525_MetadataUsageId;

struct NavMeshBuildSourceU5BU5D_t2809533356;
struct NavMeshBuildMarkupU5BU5D_t3844975876;


#ifndef U3CMODULEU3E_T692745537_H
#define U3CMODULEU3E_T692745537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745537 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745537_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef NAVMESHBUILDER_T3198400893_H
#define NAVMESHBUILDER_T3198400893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshBuilder
struct  NavMeshBuilder_t3198400893  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHBUILDER_T3198400893_H
#ifndef LIST_1_T2785658607_H
#define LIST_1_T2785658607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>
struct  List_1_t2785658607  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NavMeshBuildMarkupU5BU5D_t3844975876* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2785658607, ____items_1)); }
	inline NavMeshBuildMarkupU5BU5D_t3844975876* get__items_1() const { return ____items_1; }
	inline NavMeshBuildMarkupU5BU5D_t3844975876** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NavMeshBuildMarkupU5BU5D_t3844975876* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2785658607, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2785658607, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2785658607_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	NavMeshBuildMarkupU5BU5D_t3844975876* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2785658607_StaticFields, ___EmptyArray_4)); }
	inline NavMeshBuildMarkupU5BU5D_t3844975876* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline NavMeshBuildMarkupU5BU5D_t3844975876** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(NavMeshBuildMarkupU5BU5D_t3844975876* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2785658607_H
#ifndef LIST_1_T2160260967_H
#define LIST_1_T2160260967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct  List_1_t2160260967  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NavMeshBuildSourceU5BU5D_t2809533356* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2160260967, ____items_1)); }
	inline NavMeshBuildSourceU5BU5D_t2809533356* get__items_1() const { return ____items_1; }
	inline NavMeshBuildSourceU5BU5D_t2809533356** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NavMeshBuildSourceU5BU5D_t2809533356* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2160260967, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2160260967, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2160260967_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	NavMeshBuildSourceU5BU5D_t2809533356* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2160260967_StaticFields, ___EmptyArray_4)); }
	inline NavMeshBuildSourceU5BU5D_t2809533356* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline NavMeshBuildSourceU5BU5D_t2809533356** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(NavMeshBuildSourceU5BU5D_t2809533356* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2160260967_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef NAVMESH_T1865600375_H
#define NAVMESH_T1865600375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh
struct  NavMesh_t1865600375  : public RuntimeObject
{
public:

public:
};

struct NavMesh_t1865600375_StaticFields
{
public:
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t1580782682 * ___onPreUpdate_0;

public:
	inline static int32_t get_offset_of_onPreUpdate_0() { return static_cast<int32_t>(offsetof(NavMesh_t1865600375_StaticFields, ___onPreUpdate_0)); }
	inline OnNavMeshPreUpdate_t1580782682 * get_onPreUpdate_0() const { return ___onPreUpdate_0; }
	inline OnNavMeshPreUpdate_t1580782682 ** get_address_of_onPreUpdate_0() { return &___onPreUpdate_0; }
	inline void set_onPreUpdate_0(OnNavMeshPreUpdate_t1580782682 * value)
	{
		___onPreUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onPreUpdate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESH_T1865600375_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef NAVMESHBUILDDEBUGSETTINGS_T1257292354_H
#define NAVMESHBUILDDEBUGSETTINGS_T1257292354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshBuildDebugSettings
struct  NavMeshBuildDebugSettings_t1257292354 
{
public:
	// System.Byte UnityEngine.AI.NavMeshBuildDebugSettings::m_Flags
	uint8_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(NavMeshBuildDebugSettings_t1257292354, ___m_Flags_0)); }
	inline uint8_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline uint8_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(uint8_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHBUILDDEBUGSETTINGS_T1257292354_H
#ifndef NAVMESHBUILDMARKUP_T1313583865_H
#define NAVMESHBUILDMARKUP_T1313583865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshBuildMarkup
struct  NavMeshBuildMarkup_t1313583865 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshBuildMarkup::m_OverrideArea
	int32_t ___m_OverrideArea_0;
	// System.Int32 UnityEngine.AI.NavMeshBuildMarkup::m_Area
	int32_t ___m_Area_1;
	// System.Int32 UnityEngine.AI.NavMeshBuildMarkup::m_IgnoreFromBuild
	int32_t ___m_IgnoreFromBuild_2;
	// System.Int32 UnityEngine.AI.NavMeshBuildMarkup::m_InstanceID
	int32_t ___m_InstanceID_3;

public:
	inline static int32_t get_offset_of_m_OverrideArea_0() { return static_cast<int32_t>(offsetof(NavMeshBuildMarkup_t1313583865, ___m_OverrideArea_0)); }
	inline int32_t get_m_OverrideArea_0() const { return ___m_OverrideArea_0; }
	inline int32_t* get_address_of_m_OverrideArea_0() { return &___m_OverrideArea_0; }
	inline void set_m_OverrideArea_0(int32_t value)
	{
		___m_OverrideArea_0 = value;
	}

	inline static int32_t get_offset_of_m_Area_1() { return static_cast<int32_t>(offsetof(NavMeshBuildMarkup_t1313583865, ___m_Area_1)); }
	inline int32_t get_m_Area_1() const { return ___m_Area_1; }
	inline int32_t* get_address_of_m_Area_1() { return &___m_Area_1; }
	inline void set_m_Area_1(int32_t value)
	{
		___m_Area_1 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreFromBuild_2() { return static_cast<int32_t>(offsetof(NavMeshBuildMarkup_t1313583865, ___m_IgnoreFromBuild_2)); }
	inline int32_t get_m_IgnoreFromBuild_2() const { return ___m_IgnoreFromBuild_2; }
	inline int32_t* get_address_of_m_IgnoreFromBuild_2() { return &___m_IgnoreFromBuild_2; }
	inline void set_m_IgnoreFromBuild_2(int32_t value)
	{
		___m_IgnoreFromBuild_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(NavMeshBuildMarkup_t1313583865, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHBUILDMARKUP_T1313583865_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef NAVMESHDATAINSTANCE_T1498462893_H
#define NAVMESHDATAINSTANCE_T1498462893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshDataInstance
struct  NavMeshDataInstance_t1498462893 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshDataInstance::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(NavMeshDataInstance_t1498462893, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHDATAINSTANCE_T1498462893_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef NAVMESHLINKINSTANCE_T3753324387_H
#define NAVMESHLINKINSTANCE_T3753324387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshLinkInstance
struct  NavMeshLinkInstance_t3753324387 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshLinkInstance::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(NavMeshLinkInstance_t3753324387, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHLINKINSTANCE_T3753324387_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef NAVMESHBUILDSOURCESHAPE_T3460247977_H
#define NAVMESHBUILDSOURCESHAPE_T3460247977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshBuildSourceShape
struct  NavMeshBuildSourceShape_t3460247977 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshBuildSourceShape::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NavMeshBuildSourceShape_t3460247977, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHBUILDSOURCESHAPE_T3460247977_H
#ifndef OFFMESHLINKTYPE_T3251975667_H
#define OFFMESHLINKTYPE_T3251975667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.OffMeshLinkType
struct  OffMeshLinkType_t3251975667 
{
public:
	// System.Int32 UnityEngine.AI.OffMeshLinkType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OffMeshLinkType_t3251975667, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OFFMESHLINKTYPE_T3251975667_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef NAVMESHLINKDATA_T3788091180_H
#define NAVMESHLINKDATA_T3788091180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshLinkData
struct  NavMeshLinkData_t3788091180 
{
public:
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshLinkData::m_StartPosition
	Vector3_t3722313464  ___m_StartPosition_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshLinkData::m_EndPosition
	Vector3_t3722313464  ___m_EndPosition_1;
	// System.Single UnityEngine.AI.NavMeshLinkData::m_CostModifier
	float ___m_CostModifier_2;
	// System.Int32 UnityEngine.AI.NavMeshLinkData::m_Bidirectional
	int32_t ___m_Bidirectional_3;
	// System.Single UnityEngine.AI.NavMeshLinkData::m_Width
	float ___m_Width_4;
	// System.Int32 UnityEngine.AI.NavMeshLinkData::m_Area
	int32_t ___m_Area_5;
	// System.Int32 UnityEngine.AI.NavMeshLinkData::m_AgentTypeID
	int32_t ___m_AgentTypeID_6;

public:
	inline static int32_t get_offset_of_m_StartPosition_0() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_StartPosition_0)); }
	inline Vector3_t3722313464  get_m_StartPosition_0() const { return ___m_StartPosition_0; }
	inline Vector3_t3722313464 * get_address_of_m_StartPosition_0() { return &___m_StartPosition_0; }
	inline void set_m_StartPosition_0(Vector3_t3722313464  value)
	{
		___m_StartPosition_0 = value;
	}

	inline static int32_t get_offset_of_m_EndPosition_1() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_EndPosition_1)); }
	inline Vector3_t3722313464  get_m_EndPosition_1() const { return ___m_EndPosition_1; }
	inline Vector3_t3722313464 * get_address_of_m_EndPosition_1() { return &___m_EndPosition_1; }
	inline void set_m_EndPosition_1(Vector3_t3722313464  value)
	{
		___m_EndPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_CostModifier_2() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_CostModifier_2)); }
	inline float get_m_CostModifier_2() const { return ___m_CostModifier_2; }
	inline float* get_address_of_m_CostModifier_2() { return &___m_CostModifier_2; }
	inline void set_m_CostModifier_2(float value)
	{
		___m_CostModifier_2 = value;
	}

	inline static int32_t get_offset_of_m_Bidirectional_3() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_Bidirectional_3)); }
	inline int32_t get_m_Bidirectional_3() const { return ___m_Bidirectional_3; }
	inline int32_t* get_address_of_m_Bidirectional_3() { return &___m_Bidirectional_3; }
	inline void set_m_Bidirectional_3(int32_t value)
	{
		___m_Bidirectional_3 = value;
	}

	inline static int32_t get_offset_of_m_Width_4() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_Width_4)); }
	inline float get_m_Width_4() const { return ___m_Width_4; }
	inline float* get_address_of_m_Width_4() { return &___m_Width_4; }
	inline void set_m_Width_4(float value)
	{
		___m_Width_4 = value;
	}

	inline static int32_t get_offset_of_m_Area_5() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_Area_5)); }
	inline int32_t get_m_Area_5() const { return ___m_Area_5; }
	inline int32_t* get_address_of_m_Area_5() { return &___m_Area_5; }
	inline void set_m_Area_5(int32_t value)
	{
		___m_Area_5 = value;
	}

	inline static int32_t get_offset_of_m_AgentTypeID_6() { return static_cast<int32_t>(offsetof(NavMeshLinkData_t3788091180, ___m_AgentTypeID_6)); }
	inline int32_t get_m_AgentTypeID_6() const { return ___m_AgentTypeID_6; }
	inline int32_t* get_address_of_m_AgentTypeID_6() { return &___m_AgentTypeID_6; }
	inline void set_m_AgentTypeID_6(int32_t value)
	{
		___m_AgentTypeID_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHLINKDATA_T3788091180_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef NAVMESHCOLLECTGEOMETRY_T1778480714_H
#define NAVMESHCOLLECTGEOMETRY_T1778480714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshCollectGeometry
struct  NavMeshCollectGeometry_t1778480714 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshCollectGeometry::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NavMeshCollectGeometry_t1778480714, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHCOLLECTGEOMETRY_T1778480714_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef NAVMESHBUILDSETTINGS_T1985378544_H
#define NAVMESHBUILDSETTINGS_T1985378544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshBuildSettings
struct  NavMeshBuildSettings_t1985378544 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AgentTypeID
	int32_t ___m_AgentTypeID_0;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentRadius
	float ___m_AgentRadius_1;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentHeight
	float ___m_AgentHeight_2;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentSlope
	float ___m_AgentSlope_3;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentClimb
	float ___m_AgentClimb_4;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_LedgeDropHeight
	float ___m_LedgeDropHeight_5;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MaxJumpAcrossDistance
	float ___m_MaxJumpAcrossDistance_6;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MinRegionArea
	float ___m_MinRegionArea_7;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideVoxelSize
	int32_t ___m_OverrideVoxelSize_8;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_VoxelSize
	float ___m_VoxelSize_9;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideTileSize
	int32_t ___m_OverrideTileSize_10;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_TileSize
	int32_t ___m_TileSize_11;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AccuratePlacement
	int32_t ___m_AccuratePlacement_12;
	// UnityEngine.AI.NavMeshBuildDebugSettings UnityEngine.AI.NavMeshBuildSettings::m_Debug
	NavMeshBuildDebugSettings_t1257292354  ___m_Debug_13;

public:
	inline static int32_t get_offset_of_m_AgentTypeID_0() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_AgentTypeID_0)); }
	inline int32_t get_m_AgentTypeID_0() const { return ___m_AgentTypeID_0; }
	inline int32_t* get_address_of_m_AgentTypeID_0() { return &___m_AgentTypeID_0; }
	inline void set_m_AgentTypeID_0(int32_t value)
	{
		___m_AgentTypeID_0 = value;
	}

	inline static int32_t get_offset_of_m_AgentRadius_1() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_AgentRadius_1)); }
	inline float get_m_AgentRadius_1() const { return ___m_AgentRadius_1; }
	inline float* get_address_of_m_AgentRadius_1() { return &___m_AgentRadius_1; }
	inline void set_m_AgentRadius_1(float value)
	{
		___m_AgentRadius_1 = value;
	}

	inline static int32_t get_offset_of_m_AgentHeight_2() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_AgentHeight_2)); }
	inline float get_m_AgentHeight_2() const { return ___m_AgentHeight_2; }
	inline float* get_address_of_m_AgentHeight_2() { return &___m_AgentHeight_2; }
	inline void set_m_AgentHeight_2(float value)
	{
		___m_AgentHeight_2 = value;
	}

	inline static int32_t get_offset_of_m_AgentSlope_3() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_AgentSlope_3)); }
	inline float get_m_AgentSlope_3() const { return ___m_AgentSlope_3; }
	inline float* get_address_of_m_AgentSlope_3() { return &___m_AgentSlope_3; }
	inline void set_m_AgentSlope_3(float value)
	{
		___m_AgentSlope_3 = value;
	}

	inline static int32_t get_offset_of_m_AgentClimb_4() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_AgentClimb_4)); }
	inline float get_m_AgentClimb_4() const { return ___m_AgentClimb_4; }
	inline float* get_address_of_m_AgentClimb_4() { return &___m_AgentClimb_4; }
	inline void set_m_AgentClimb_4(float value)
	{
		___m_AgentClimb_4 = value;
	}

	inline static int32_t get_offset_of_m_LedgeDropHeight_5() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_LedgeDropHeight_5)); }
	inline float get_m_LedgeDropHeight_5() const { return ___m_LedgeDropHeight_5; }
	inline float* get_address_of_m_LedgeDropHeight_5() { return &___m_LedgeDropHeight_5; }
	inline void set_m_LedgeDropHeight_5(float value)
	{
		___m_LedgeDropHeight_5 = value;
	}

	inline static int32_t get_offset_of_m_MaxJumpAcrossDistance_6() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_MaxJumpAcrossDistance_6)); }
	inline float get_m_MaxJumpAcrossDistance_6() const { return ___m_MaxJumpAcrossDistance_6; }
	inline float* get_address_of_m_MaxJumpAcrossDistance_6() { return &___m_MaxJumpAcrossDistance_6; }
	inline void set_m_MaxJumpAcrossDistance_6(float value)
	{
		___m_MaxJumpAcrossDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_MinRegionArea_7() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_MinRegionArea_7)); }
	inline float get_m_MinRegionArea_7() const { return ___m_MinRegionArea_7; }
	inline float* get_address_of_m_MinRegionArea_7() { return &___m_MinRegionArea_7; }
	inline void set_m_MinRegionArea_7(float value)
	{
		___m_MinRegionArea_7 = value;
	}

	inline static int32_t get_offset_of_m_OverrideVoxelSize_8() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_OverrideVoxelSize_8)); }
	inline int32_t get_m_OverrideVoxelSize_8() const { return ___m_OverrideVoxelSize_8; }
	inline int32_t* get_address_of_m_OverrideVoxelSize_8() { return &___m_OverrideVoxelSize_8; }
	inline void set_m_OverrideVoxelSize_8(int32_t value)
	{
		___m_OverrideVoxelSize_8 = value;
	}

	inline static int32_t get_offset_of_m_VoxelSize_9() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_VoxelSize_9)); }
	inline float get_m_VoxelSize_9() const { return ___m_VoxelSize_9; }
	inline float* get_address_of_m_VoxelSize_9() { return &___m_VoxelSize_9; }
	inline void set_m_VoxelSize_9(float value)
	{
		___m_VoxelSize_9 = value;
	}

	inline static int32_t get_offset_of_m_OverrideTileSize_10() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_OverrideTileSize_10)); }
	inline int32_t get_m_OverrideTileSize_10() const { return ___m_OverrideTileSize_10; }
	inline int32_t* get_address_of_m_OverrideTileSize_10() { return &___m_OverrideTileSize_10; }
	inline void set_m_OverrideTileSize_10(int32_t value)
	{
		___m_OverrideTileSize_10 = value;
	}

	inline static int32_t get_offset_of_m_TileSize_11() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_TileSize_11)); }
	inline int32_t get_m_TileSize_11() const { return ___m_TileSize_11; }
	inline int32_t* get_address_of_m_TileSize_11() { return &___m_TileSize_11; }
	inline void set_m_TileSize_11(int32_t value)
	{
		___m_TileSize_11 = value;
	}

	inline static int32_t get_offset_of_m_AccuratePlacement_12() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_AccuratePlacement_12)); }
	inline int32_t get_m_AccuratePlacement_12() const { return ___m_AccuratePlacement_12; }
	inline int32_t* get_address_of_m_AccuratePlacement_12() { return &___m_AccuratePlacement_12; }
	inline void set_m_AccuratePlacement_12(int32_t value)
	{
		___m_AccuratePlacement_12 = value;
	}

	inline static int32_t get_offset_of_m_Debug_13() { return static_cast<int32_t>(offsetof(NavMeshBuildSettings_t1985378544, ___m_Debug_13)); }
	inline NavMeshBuildDebugSettings_t1257292354  get_m_Debug_13() const { return ___m_Debug_13; }
	inline NavMeshBuildDebugSettings_t1257292354 * get_address_of_m_Debug_13() { return &___m_Debug_13; }
	inline void set_m_Debug_13(NavMeshBuildDebugSettings_t1257292354  value)
	{
		___m_Debug_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHBUILDSETTINGS_T1985378544_H
#ifndef NAVMESHDATA_T1084598030_H
#define NAVMESHDATA_T1084598030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshData
struct  NavMeshData_t1084598030  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHDATA_T1084598030_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef OFFMESHLINKDATA_T1198555039_H
#define OFFMESHLINKDATA_T1198555039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.OffMeshLinkData
struct  OffMeshLinkData_t1198555039 
{
public:
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Valid
	int32_t ___m_Valid_0;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_Activated
	int32_t ___m_Activated_1;
	// System.Int32 UnityEngine.AI.OffMeshLinkData::m_InstanceID
	int32_t ___m_InstanceID_2;
	// UnityEngine.AI.OffMeshLinkType UnityEngine.AI.OffMeshLinkData::m_LinkType
	int32_t ___m_LinkType_3;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_StartPos
	Vector3_t3722313464  ___m_StartPos_4;
	// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::m_EndPos
	Vector3_t3722313464  ___m_EndPos_5;

public:
	inline static int32_t get_offset_of_m_Valid_0() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_Valid_0)); }
	inline int32_t get_m_Valid_0() const { return ___m_Valid_0; }
	inline int32_t* get_address_of_m_Valid_0() { return &___m_Valid_0; }
	inline void set_m_Valid_0(int32_t value)
	{
		___m_Valid_0 = value;
	}

	inline static int32_t get_offset_of_m_Activated_1() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_Activated_1)); }
	inline int32_t get_m_Activated_1() const { return ___m_Activated_1; }
	inline int32_t* get_address_of_m_Activated_1() { return &___m_Activated_1; }
	inline void set_m_Activated_1(int32_t value)
	{
		___m_Activated_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_LinkType_3() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_LinkType_3)); }
	inline int32_t get_m_LinkType_3() const { return ___m_LinkType_3; }
	inline int32_t* get_address_of_m_LinkType_3() { return &___m_LinkType_3; }
	inline void set_m_LinkType_3(int32_t value)
	{
		___m_LinkType_3 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_4() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_StartPos_4)); }
	inline Vector3_t3722313464  get_m_StartPos_4() const { return ___m_StartPos_4; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_4() { return &___m_StartPos_4; }
	inline void set_m_StartPos_4(Vector3_t3722313464  value)
	{
		___m_StartPos_4 = value;
	}

	inline static int32_t get_offset_of_m_EndPos_5() { return static_cast<int32_t>(offsetof(OffMeshLinkData_t1198555039, ___m_EndPos_5)); }
	inline Vector3_t3722313464  get_m_EndPos_5() const { return ___m_EndPos_5; }
	inline Vector3_t3722313464 * get_address_of_m_EndPos_5() { return &___m_EndPos_5; }
	inline void set_m_EndPos_5(Vector3_t3722313464  value)
	{
		___m_EndPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OFFMESHLINKDATA_T1198555039_H
#ifndef NAVMESHBUILDSOURCE_T688186225_H
#define NAVMESHBUILDSOURCE_T688186225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshBuildSource
struct  NavMeshBuildSource_t688186225 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.AI.NavMeshBuildSource::m_Transform
	Matrix4x4_t1817901843  ___m_Transform_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshBuildSource::m_Size
	Vector3_t3722313464  ___m_Size_1;
	// UnityEngine.AI.NavMeshBuildSourceShape UnityEngine.AI.NavMeshBuildSource::m_Shape
	int32_t ___m_Shape_2;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_Area
	int32_t ___m_Area_3;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_ComponentID
	int32_t ___m_ComponentID_5;

public:
	inline static int32_t get_offset_of_m_Transform_0() { return static_cast<int32_t>(offsetof(NavMeshBuildSource_t688186225, ___m_Transform_0)); }
	inline Matrix4x4_t1817901843  get_m_Transform_0() const { return ___m_Transform_0; }
	inline Matrix4x4_t1817901843 * get_address_of_m_Transform_0() { return &___m_Transform_0; }
	inline void set_m_Transform_0(Matrix4x4_t1817901843  value)
	{
		___m_Transform_0 = value;
	}

	inline static int32_t get_offset_of_m_Size_1() { return static_cast<int32_t>(offsetof(NavMeshBuildSource_t688186225, ___m_Size_1)); }
	inline Vector3_t3722313464  get_m_Size_1() const { return ___m_Size_1; }
	inline Vector3_t3722313464 * get_address_of_m_Size_1() { return &___m_Size_1; }
	inline void set_m_Size_1(Vector3_t3722313464  value)
	{
		___m_Size_1 = value;
	}

	inline static int32_t get_offset_of_m_Shape_2() { return static_cast<int32_t>(offsetof(NavMeshBuildSource_t688186225, ___m_Shape_2)); }
	inline int32_t get_m_Shape_2() const { return ___m_Shape_2; }
	inline int32_t* get_address_of_m_Shape_2() { return &___m_Shape_2; }
	inline void set_m_Shape_2(int32_t value)
	{
		___m_Shape_2 = value;
	}

	inline static int32_t get_offset_of_m_Area_3() { return static_cast<int32_t>(offsetof(NavMeshBuildSource_t688186225, ___m_Area_3)); }
	inline int32_t get_m_Area_3() const { return ___m_Area_3; }
	inline int32_t* get_address_of_m_Area_3() { return &___m_Area_3; }
	inline void set_m_Area_3(int32_t value)
	{
		___m_Area_3 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_4() { return static_cast<int32_t>(offsetof(NavMeshBuildSource_t688186225, ___m_InstanceID_4)); }
	inline int32_t get_m_InstanceID_4() const { return ___m_InstanceID_4; }
	inline int32_t* get_address_of_m_InstanceID_4() { return &___m_InstanceID_4; }
	inline void set_m_InstanceID_4(int32_t value)
	{
		___m_InstanceID_4 = value;
	}

	inline static int32_t get_offset_of_m_ComponentID_5() { return static_cast<int32_t>(offsetof(NavMeshBuildSource_t688186225, ___m_ComponentID_5)); }
	inline int32_t get_m_ComponentID_5() const { return ___m_ComponentID_5; }
	inline int32_t* get_address_of_m_ComponentID_5() { return &___m_ComponentID_5; }
	inline void set_m_ComponentID_5(int32_t value)
	{
		___m_ComponentID_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHBUILDSOURCE_T688186225_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ONNAVMESHPREUPDATE_T1580782682_H
#define ONNAVMESHPREUPDATE_T1580782682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct  OnNavMeshPreUpdate_t1580782682  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONNAVMESHPREUPDATE_T1580782682_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef NAVMESHOBSTACLE_T3657678309_H
#define NAVMESHOBSTACLE_T3657678309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshObstacle
struct  NavMeshObstacle_t3657678309  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHOBSTACLE_T3657678309_H
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
// UnityEngine.AI.NavMeshBuildSource[]
struct NavMeshBuildSourceU5BU5D_t2809533356  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NavMeshBuildSource_t688186225  m_Items[1];

public:
	inline NavMeshBuildSource_t688186225  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NavMeshBuildSource_t688186225 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NavMeshBuildSource_t688186225  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NavMeshBuildSource_t688186225  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NavMeshBuildSource_t688186225 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NavMeshBuildSource_t688186225  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AI.NavMeshBuildMarkup[]
struct NavMeshBuildMarkupU5BU5D_t3844975876  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NavMeshBuildMarkup_t1313583865  m_Items[1];

public:
	inline NavMeshBuildMarkup_t1313583865  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NavMeshBuildMarkup_t1313583865 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NavMeshBuildMarkup_t1313583865  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NavMeshBuildMarkup_t1313583865  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NavMeshBuildMarkup_t1313583865 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NavMeshBuildMarkup_t1313583865  value)
	{
		m_Items[index] = value;
	}
};


// !0[] System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>::ToArray()
extern "C"  NavMeshBuildMarkupU5BU5D_t3844975876* List_1_ToArray_m827541566_gshared (List_1_t2785658607 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>::Clear()
extern "C"  void List_1_Clear_m1060961220_gshared (List_1_t2160260967 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m2521234691_gshared (List_1_t2160260967 * __this, RuntimeObject* p0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)
extern "C"  int32_t NavMesh_AddNavMeshDataInternal_m1195394122 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshDataInstance::set_id(System.Int32)
extern "C"  void NavMeshDataInstance_set_id_m696452438 (NavMeshDataInstance_t1498462893 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataTransformedInternal(UnityEngine.AI.NavMeshData,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  int32_t NavMesh_AddNavMeshDataTransformedInternal_m2237475893 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMesh::INTERNAL_CALL_AddNavMeshDataTransformedInternal(UnityEngine.AI.NavMeshData,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  int32_t NavMesh_INTERNAL_CALL_AddNavMeshDataTransformedInternal_m1836251411 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMesh::AddLinkInternal(UnityEngine.AI.NavMeshLinkData,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  int32_t NavMesh_AddLinkInternal_m243741424 (RuntimeObject * __this /* static, unused */, NavMeshLinkData_t3788091180  ___link0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkInstance::set_id(System.Int32)
extern "C"  void NavMeshLinkInstance_set_id_m1641519495 (NavMeshLinkInstance_t3753324387 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMesh::INTERNAL_CALL_AddLinkInternal(UnityEngine.AI.NavMeshLinkData&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  int32_t NavMesh_INTERNAL_CALL_AddLinkInternal_m848328330 (RuntimeObject * __this /* static, unused */, NavMeshLinkData_t3788091180 * ___link0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMesh::INTERNAL_CALL_GetSettingsByID(System.Int32,UnityEngine.AI.NavMeshBuildSettings&)
extern "C"  void NavMesh_INTERNAL_CALL_GetSettingsByID_m3136371325 (RuntimeObject * __this /* static, unused */, int32_t ___agentTypeID0, NavMeshBuildSettings_t1985378544 * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern "C"  void OnNavMeshPreUpdate_Invoke_m2576853418 (OnNavMeshPreUpdate_t1580782682 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864 (RuntimeObject * __this /* static, unused */, NavMeshAgent_t1276799816 * ___self0, Vector3_t3722313464 * ___target1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_set_destination_m3067388997 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
extern "C"  OffMeshLinkData_t1198555039  NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t3722313464  Bounds_get_extents_m1304537151 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_Max_m3304052994 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C"  void Bounds_set_extents_m2537337060 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>::ToArray()
#define List_1_ToArray_m827541566(__this, method) ((  NavMeshBuildMarkupU5BU5D_t3844975876* (*) (List_1_t2785658607 *, const RuntimeMethod*))List_1_ToArray_m827541566_gshared)(__this, method)
// UnityEngine.AI.NavMeshBuildSource[] UnityEngine.AI.NavMeshBuilder::CollectSourcesInternal(System.Int32,UnityEngine.Bounds,UnityEngine.Transform,System.Boolean,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,UnityEngine.AI.NavMeshBuildMarkup[])
extern "C"  NavMeshBuildSourceU5BU5D_t2809533356* NavMeshBuilder_CollectSourcesInternal_m801661767 (RuntimeObject * __this /* static, unused */, int32_t ___includedLayerMask0, Bounds_t2266837910  ___includedWorldBounds1, Transform_t3600365921 * ___root2, bool ___useBounds3, int32_t ___geometry4, int32_t ___defaultArea5, NavMeshBuildMarkupU5BU5D_t3844975876* ___markups6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>::Clear()
#define List_1_Clear_m1060961220(__this, method) ((  void (*) (List_1_t2160260967 *, const RuntimeMethod*))List_1_Clear_m1060961220_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2521234691(__this, p0, method) ((  void (*) (List_1_t2160260967 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m2521234691_gshared)(__this, p0, method)
// UnityEngine.AI.NavMeshBuildSource[] UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_CollectSourcesInternal(System.Int32,UnityEngine.Bounds&,UnityEngine.Transform,System.Boolean,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,UnityEngine.AI.NavMeshBuildMarkup[])
extern "C"  NavMeshBuildSourceU5BU5D_t2809533356* NavMeshBuilder_INTERNAL_CALL_CollectSourcesInternal_m426345087 (RuntimeObject * __this /* static, unused */, int32_t ___includedLayerMask0, Bounds_t2266837910 * ___includedWorldBounds1, Transform_t3600365921 * ___root2, bool ___useBounds3, int32_t ___geometry4, int32_t ___defaultArea5, NavMeshBuildMarkupU5BU5D_t3844975876* ___markups6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMeshBuildSettings::get_agentTypeID()
extern "C"  int32_t NavMeshBuildSettings_get_agentTypeID_m3314078478 (NavMeshBuildSettings_t1985378544 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::.ctor(System.Int32)
extern "C"  void NavMeshData__ctor_m4156228563 (NavMeshData_t1084598030 * __this, int32_t ___agentTypeID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::set_position(UnityEngine.Vector3)
extern "C"  void NavMeshData_set_position_m4027570316 (NavMeshData_t1084598030 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::set_rotation(UnityEngine.Quaternion)
extern "C"  void NavMeshData_set_rotation_m2213365812 (NavMeshData_t1084598030 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
extern "C"  bool NavMeshBuilder_UpdateNavMeshDataListInternal_m2558231733 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544  ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910  ___localBounds3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
extern "C"  bool NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataListInternal_m2660298689 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544 * ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910 * ___localBounds3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
extern "C"  AsyncOperation_t1445031843 * NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_m3269931782 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544  ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910  ___localBounds3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
extern "C"  AsyncOperation_t1445031843 * NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal_m326953953 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544 * ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910 * ___localBounds3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_overrideArea(System.Boolean)
extern "C"  void NavMeshBuildMarkup_set_overrideArea_m229372463 (NavMeshBuildMarkup_t1313583865 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_area(System.Int32)
extern "C"  void NavMeshBuildMarkup_set_area_m1361147558 (NavMeshBuildMarkup_t1313583865 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_ignoreFromBuild(System.Boolean)
extern "C"  void NavMeshBuildMarkup_set_ignoreFromBuild_m709640216 (NavMeshBuildMarkup_t1313583865 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C"  int32_t Object_GetInstanceID_m1255174761 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_root(UnityEngine.Transform)
extern "C"  void NavMeshBuildMarkup_set_root_m518958946 (NavMeshBuildMarkup_t1313583865 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_agentTypeID(System.Int32)
extern "C"  void NavMeshBuildSettings_set_agentTypeID_m3995891764 (NavMeshBuildSettings_t1985378544 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_overrideVoxelSize(System.Boolean)
extern "C"  void NavMeshBuildSettings_set_overrideVoxelSize_m1423447633 (NavMeshBuildSettings_t1985378544 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_voxelSize(System.Single)
extern "C"  void NavMeshBuildSettings_set_voxelSize_m2794829786 (NavMeshBuildSettings_t1985378544 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_overrideTileSize(System.Boolean)
extern "C"  void NavMeshBuildSettings_set_overrideTileSize_m1668241129 (NavMeshBuildSettings_t1985378544 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_tileSize(System.Int32)
extern "C"  void NavMeshBuildSettings_set_tileSize_m1243065940 (NavMeshBuildSettings_t1985378544 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.AI.NavMeshBuildSource::get_transform()
extern "C"  Matrix4x4_t1817901843  NavMeshBuildSource_get_transform_m868807620 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_transform(UnityEngine.Matrix4x4)
extern "C"  void NavMeshBuildSource_set_transform_m1212452088 (NavMeshBuildSource_t688186225 * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshBuildSource::get_size()
extern "C"  Vector3_t3722313464  NavMeshBuildSource_get_size_m1205786197 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_size(UnityEngine.Vector3)
extern "C"  void NavMeshBuildSource_set_size_m682598383 (NavMeshBuildSource_t688186225 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AI.NavMeshBuildSourceShape UnityEngine.AI.NavMeshBuildSource::get_shape()
extern "C"  int32_t NavMeshBuildSource_get_shape_m2698270452 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_shape(UnityEngine.AI.NavMeshBuildSourceShape)
extern "C"  void NavMeshBuildSource_set_shape_m2067493469 (NavMeshBuildSource_t688186225 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_area(System.Int32)
extern "C"  void NavMeshBuildSource_set_area_m2888906222 (NavMeshBuildSource_t688186225 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AI.NavMeshBuildSource::InternalGetObject(System.Int32)
extern "C"  Object_t631007953 * NavMeshBuildSource_InternalGetObject_m2319932240 (NavMeshBuildSource_t688186225 * __this, int32_t ___instanceID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AI.NavMeshBuildSource::get_sourceObject()
extern "C"  Object_t631007953 * NavMeshBuildSource_get_sourceObject_m603070145 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_sourceObject(UnityEngine.Object)
extern "C"  void NavMeshBuildSource_set_sourceObject_m1573220770 (NavMeshBuildSource_t688186225 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.AI.NavMeshBuildSource::InternalGetComponent(System.Int32)
extern "C"  Component_t1923634451 * NavMeshBuildSource_InternalGetComponent_m3310896321 (NavMeshBuildSource_t688186225 * __this, int32_t ___instanceID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.AI.NavMeshBuildSource::get_component()
extern "C"  Component_t1923634451 * NavMeshBuildSource_get_component_m3010658605 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)
extern "C"  void NavMeshData_Internal_Create_m3377667956 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___mono0, int32_t ___agentTypeID1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::INTERNAL_get_sourceBounds(UnityEngine.Bounds&)
extern "C"  void NavMeshData_INTERNAL_get_sourceBounds_m1975636456 (NavMeshData_t1084598030 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void NavMeshData_INTERNAL_set_position_m3531837906 (NavMeshData_t1084598030 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshData::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void NavMeshData_INTERNAL_set_rotation_m1616928503 (NavMeshData_t1084598030 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMesh::IsValidNavMeshDataHandle(System.Int32)
extern "C"  bool NavMesh_IsValidNavMeshDataHandle_m2817386384 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshDataInstance::get_valid()
extern "C"  bool NavMeshDataInstance_get_valid_m2577459468 (NavMeshDataInstance_t1498462893 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMeshDataInstance::get_id()
extern "C"  int32_t NavMeshDataInstance_get_id_m1137607313 (NavMeshDataInstance_t1498462893 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMesh::RemoveNavMeshDataInternal(System.Int32)
extern "C"  void NavMesh_RemoveNavMeshDataInternal_m1168224379 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshDataInstance::Remove()
extern "C"  void NavMeshDataInstance_Remove_m996936756 (NavMeshDataInstance_t1498462893 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMesh::InternalSetOwner(System.Int32,System.Int32)
extern "C"  bool NavMesh_InternalSetOwner_m642600982 (RuntimeObject * __this /* static, unused */, int32_t ___dataID0, int32_t ___ownerID1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshDataInstance::set_owner(UnityEngine.Object)
extern "C"  void NavMeshDataInstance_set_owner_m70396501 (NavMeshDataInstance_t1498462893 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_startPosition(UnityEngine.Vector3)
extern "C"  void NavMeshLinkData_set_startPosition_m3045742894 (NavMeshLinkData_t3788091180 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_endPosition(UnityEngine.Vector3)
extern "C"  void NavMeshLinkData_set_endPosition_m2303385154 (NavMeshLinkData_t3788091180 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_costModifier(System.Single)
extern "C"  void NavMeshLinkData_set_costModifier_m810391751 (NavMeshLinkData_t3788091180 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_bidirectional(System.Boolean)
extern "C"  void NavMeshLinkData_set_bidirectional_m3986953410 (NavMeshLinkData_t3788091180 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_width(System.Single)
extern "C"  void NavMeshLinkData_set_width_m208166935 (NavMeshLinkData_t3788091180 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_area(System.Int32)
extern "C"  void NavMeshLinkData_set_area_m2802059526 (NavMeshLinkData_t3788091180 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkData::set_agentTypeID(System.Int32)
extern "C"  void NavMeshLinkData_set_agentTypeID_m1705603987 (NavMeshLinkData_t3788091180 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMesh::IsValidLinkHandle(System.Int32)
extern "C"  bool NavMesh_IsValidLinkHandle_m2171705503 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshLinkInstance::get_valid()
extern "C"  bool NavMeshLinkInstance_get_valid_m1072803140 (NavMeshLinkInstance_t3753324387 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AI.NavMeshLinkInstance::get_id()
extern "C"  int32_t NavMeshLinkInstance_get_id_m2382361339 (NavMeshLinkInstance_t3753324387 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMesh::RemoveLinkInternal(System.Int32)
extern "C"  void NavMesh_RemoveLinkInternal_m1296440649 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkInstance::Remove()
extern "C"  void NavMeshLinkInstance_Remove_m1422082466 (NavMeshLinkInstance_t3753324387 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMesh::InternalSetLinkOwner(System.Int32,System.Int32)
extern "C"  bool NavMesh_InternalSetLinkOwner_m4230039354 (RuntimeObject * __this /* static, unused */, int32_t ___linkID0, int32_t ___ownerID1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshLinkInstance::set_owner(UnityEngine.Object)
extern "C"  void NavMeshLinkInstance_set_owner_m1819110525 (NavMeshLinkInstance_t3753324387 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
extern "C"  Vector3_t3722313464  OffMeshLinkData_get_endPos_m3360690749 (OffMeshLinkData_t1198555039 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMesh::AddNavMeshData(UnityEngine.AI.NavMeshData)
extern "C"  NavMeshDataInstance_t1498462893  NavMesh_AddNavMeshData_m3251627004 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMesh_AddNavMeshData_m3251627004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshDataInstance_t1498462893  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NavMeshDataInstance_t1498462893  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		NavMeshData_t1084598030 * L_0 = ___navMeshData0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3320302194, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NavMeshDataInstance_t1498462893 ));
		NavMeshData_t1084598030 * L_3 = ___navMeshData0;
		int32_t L_4 = NavMesh_AddNavMeshDataInternal_m1195394122(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NavMeshDataInstance_set_id_m696452438((&V_0), L_4, /*hidden argument*/NULL);
		NavMeshDataInstance_t1498462893  L_5 = V_0;
		V_1 = L_5;
		goto IL_0034;
	}

IL_0034:
	{
		NavMeshDataInstance_t1498462893  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMesh::AddNavMeshData(UnityEngine.AI.NavMeshData,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  NavMeshDataInstance_t1498462893  NavMesh_AddNavMeshData_m1391221680 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMesh_AddNavMeshData_m1391221680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshDataInstance_t1498462893  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NavMeshDataInstance_t1498462893  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		NavMeshData_t1084598030 * L_0 = ___navMeshData0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3320302194, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NavMeshDataInstance_t1498462893 ));
		NavMeshData_t1084598030 * L_3 = ___navMeshData0;
		Vector3_t3722313464  L_4 = ___position1;
		Quaternion_t2301928331  L_5 = ___rotation2;
		int32_t L_6 = NavMesh_AddNavMeshDataTransformedInternal_m2237475893(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		NavMeshDataInstance_set_id_m696452438((&V_0), L_6, /*hidden argument*/NULL);
		NavMeshDataInstance_t1498462893  L_7 = V_0;
		V_1 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		NavMeshDataInstance_t1498462893  L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.AI.NavMesh::IsValidNavMeshDataHandle(System.Int32)
extern "C"  bool NavMesh_IsValidNavMeshDataHandle_m2817386384 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_IsValidNavMeshDataHandle_m2817386384_ftn) (int32_t);
	static NavMesh_IsValidNavMeshDataHandle_m2817386384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_IsValidNavMeshDataHandle_m2817386384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::IsValidNavMeshDataHandle(System.Int32)");
	bool retVal = _il2cpp_icall_func(___handle0);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::IsValidLinkHandle(System.Int32)
extern "C"  bool NavMesh_IsValidLinkHandle_m2171705503 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_IsValidLinkHandle_m2171705503_ftn) (int32_t);
	static NavMesh_IsValidLinkHandle_m2171705503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_IsValidLinkHandle_m2171705503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::IsValidLinkHandle(System.Int32)");
	bool retVal = _il2cpp_icall_func(___handle0);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::InternalSetOwner(System.Int32,System.Int32)
extern "C"  bool NavMesh_InternalSetOwner_m642600982 (RuntimeObject * __this /* static, unused */, int32_t ___dataID0, int32_t ___ownerID1, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_InternalSetOwner_m642600982_ftn) (int32_t, int32_t);
	static NavMesh_InternalSetOwner_m642600982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_InternalSetOwner_m642600982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::InternalSetOwner(System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(___dataID0, ___ownerID1);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMesh::InternalSetLinkOwner(System.Int32,System.Int32)
extern "C"  bool NavMesh_InternalSetLinkOwner_m4230039354 (RuntimeObject * __this /* static, unused */, int32_t ___linkID0, int32_t ___ownerID1, const RuntimeMethod* method)
{
	typedef bool (*NavMesh_InternalSetLinkOwner_m4230039354_ftn) (int32_t, int32_t);
	static NavMesh_InternalSetLinkOwner_m4230039354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_InternalSetLinkOwner_m4230039354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::InternalSetLinkOwner(System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(___linkID0, ___ownerID1);
	return retVal;
}
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)
extern "C"  int32_t NavMesh_AddNavMeshDataInternal_m1195394122 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, const RuntimeMethod* method)
{
	typedef int32_t (*NavMesh_AddNavMeshDataInternal_m1195394122_ftn) (NavMeshData_t1084598030 *);
	static NavMesh_AddNavMeshDataInternal_m1195394122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_AddNavMeshDataInternal_m1195394122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)");
	int32_t retVal = _il2cpp_icall_func(___navMeshData0);
	return retVal;
}
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataTransformedInternal(UnityEngine.AI.NavMeshData,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  int32_t NavMesh_AddNavMeshDataTransformedInternal_m2237475893 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NavMeshData_t1084598030 * L_0 = ___navMeshData0;
		int32_t L_1 = NavMesh_INTERNAL_CALL_AddNavMeshDataTransformedInternal_m1836251411(NULL /*static, unused*/, L_0, (&___position1), (&___rotation2), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::INTERNAL_CALL_AddNavMeshDataTransformedInternal(UnityEngine.AI.NavMeshData,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  int32_t NavMesh_INTERNAL_CALL_AddNavMeshDataTransformedInternal_m1836251411 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___navMeshData0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method)
{
	typedef int32_t (*NavMesh_INTERNAL_CALL_AddNavMeshDataTransformedInternal_m1836251411_ftn) (NavMeshData_t1084598030 *, Vector3_t3722313464 *, Quaternion_t2301928331 *);
	static NavMesh_INTERNAL_CALL_AddNavMeshDataTransformedInternal_m1836251411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_INTERNAL_CALL_AddNavMeshDataTransformedInternal_m1836251411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::INTERNAL_CALL_AddNavMeshDataTransformedInternal(UnityEngine.AI.NavMeshData,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	int32_t retVal = _il2cpp_icall_func(___navMeshData0, ___position1, ___rotation2);
	return retVal;
}
// System.Void UnityEngine.AI.NavMesh::RemoveNavMeshDataInternal(System.Int32)
extern "C"  void NavMesh_RemoveNavMeshDataInternal_m1168224379 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef void (*NavMesh_RemoveNavMeshDataInternal_m1168224379_ftn) (int32_t);
	static NavMesh_RemoveNavMeshDataInternal_m1168224379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_RemoveNavMeshDataInternal_m1168224379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::RemoveNavMeshDataInternal(System.Int32)");
	_il2cpp_icall_func(___handle0);
}
// UnityEngine.AI.NavMeshLinkInstance UnityEngine.AI.NavMesh::AddLink(UnityEngine.AI.NavMeshLinkData,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  NavMeshLinkInstance_t3753324387  NavMesh_AddLink_m378191419 (RuntimeObject * __this /* static, unused */, NavMeshLinkData_t3788091180  ___link0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	NavMeshLinkInstance_t3753324387  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NavMeshLinkInstance_t3753324387  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NavMeshLinkInstance_t3753324387 ));
		NavMeshLinkData_t3788091180  L_0 = ___link0;
		Vector3_t3722313464  L_1 = ___position1;
		Quaternion_t2301928331  L_2 = ___rotation2;
		int32_t L_3 = NavMesh_AddLinkInternal_m243741424(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		NavMeshLinkInstance_set_id_m1641519495((&V_0), L_3, /*hidden argument*/NULL);
		NavMeshLinkInstance_t3753324387  L_4 = V_0;
		V_1 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		NavMeshLinkInstance_t3753324387  L_5 = V_1;
		return L_5;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::AddLinkInternal(UnityEngine.AI.NavMeshLinkData,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  int32_t NavMesh_AddLinkInternal_m243741424 (RuntimeObject * __this /* static, unused */, NavMeshLinkData_t3788091180  ___link0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = NavMesh_INTERNAL_CALL_AddLinkInternal_m848328330(NULL /*static, unused*/, (&___link0), (&___position1), (&___rotation2), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::INTERNAL_CALL_AddLinkInternal(UnityEngine.AI.NavMeshLinkData&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  int32_t NavMesh_INTERNAL_CALL_AddLinkInternal_m848328330 (RuntimeObject * __this /* static, unused */, NavMeshLinkData_t3788091180 * ___link0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, const RuntimeMethod* method)
{
	typedef int32_t (*NavMesh_INTERNAL_CALL_AddLinkInternal_m848328330_ftn) (NavMeshLinkData_t3788091180 *, Vector3_t3722313464 *, Quaternion_t2301928331 *);
	static NavMesh_INTERNAL_CALL_AddLinkInternal_m848328330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_INTERNAL_CALL_AddLinkInternal_m848328330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::INTERNAL_CALL_AddLinkInternal(UnityEngine.AI.NavMeshLinkData&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	int32_t retVal = _il2cpp_icall_func(___link0, ___position1, ___rotation2);
	return retVal;
}
// System.Void UnityEngine.AI.NavMesh::RemoveLinkInternal(System.Int32)
extern "C"  void NavMesh_RemoveLinkInternal_m1296440649 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef void (*NavMesh_RemoveLinkInternal_m1296440649_ftn) (int32_t);
	static NavMesh_RemoveLinkInternal_m1296440649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_RemoveLinkInternal_m1296440649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::RemoveLinkInternal(System.Int32)");
	_il2cpp_icall_func(___handle0);
}
// UnityEngine.AI.NavMeshBuildSettings UnityEngine.AI.NavMesh::GetSettingsByID(System.Int32)
extern "C"  NavMeshBuildSettings_t1985378544  NavMesh_GetSettingsByID_m546770701 (RuntimeObject * __this /* static, unused */, int32_t ___agentTypeID0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NavMeshBuildSettings_t1985378544  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___agentTypeID0;
		NavMesh_INTERNAL_CALL_GetSettingsByID_m3136371325(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		NavMeshBuildSettings_t1985378544  L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		NavMeshBuildSettings_t1985378544  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AI.NavMesh::INTERNAL_CALL_GetSettingsByID(System.Int32,UnityEngine.AI.NavMeshBuildSettings&)
extern "C"  void NavMesh_INTERNAL_CALL_GetSettingsByID_m3136371325 (RuntimeObject * __this /* static, unused */, int32_t ___agentTypeID0, NavMeshBuildSettings_t1985378544 * ___value1, const RuntimeMethod* method)
{
	typedef void (*NavMesh_INTERNAL_CALL_GetSettingsByID_m3136371325_ftn) (int32_t, NavMeshBuildSettings_t1985378544 *);
	static NavMesh_INTERNAL_CALL_GetSettingsByID_m3136371325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_INTERNAL_CALL_GetSettingsByID_m3136371325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::INTERNAL_CALL_GetSettingsByID(System.Int32,UnityEngine.AI.NavMeshBuildSettings&)");
	_il2cpp_icall_func(___agentTypeID0, ___value1);
}
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern "C"  void NavMesh_Internal_CallOnNavMeshPreUpdate_m3135297503 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMesh_Internal_CallOnNavMeshPreUpdate_m3135297503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnNavMeshPreUpdate_t1580782682 * L_0 = ((NavMesh_t1865600375_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t1865600375_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		OnNavMeshPreUpdate_t1580782682 * L_1 = ((NavMesh_t1865600375_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t1865600375_il2cpp_TypeInfo_var))->get_onPreUpdate_0();
		NullCheck(L_1);
		OnNavMeshPreUpdate_Invoke_m2576853418(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t1580782682 (OnNavMeshPreUpdate_t1580782682 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnNavMeshPreUpdate__ctor_m2758342548 (OnNavMeshPreUpdate_t1580782682 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern "C"  void OnNavMeshPreUpdate_Invoke_m2576853418 (OnNavMeshPreUpdate_t1580782682 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnNavMeshPreUpdate_Invoke_m2576853418((OnNavMeshPreUpdate_t1580782682 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnNavMeshPreUpdate_BeginInvoke_m973935099 (OnNavMeshPreUpdate_t1580782682 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::EndInvoke(System.IAsyncResult)
extern "C"  void OnNavMeshPreUpdate_EndInvoke_m1536959430 (OnNavMeshPreUpdate_t1580782682 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m2826390109 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  ___target0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864(NULL /*static, unused*/, __this, (&___target0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864 (RuntimeObject * __this /* static, unused */, NavMeshAgent_t1276799816 * ___self0, Vector3_t3722313464 * ___target1, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_CALL_SetDestination_m233602864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)");
	bool retVal = _il2cpp_icall_func(___self0, ___target1);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
extern "C"  void NavMeshAgent_set_destination_m41262300 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		NavMeshAgent_INTERNAL_set_destination_m3067388997(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_set_destination_m3067388997 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_INTERNAL_set_destination_m3067388997_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_set_destination_m3067388997_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_set_destination_m3067388997_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_set_destination(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
extern "C"  Vector3_t3722313464  NavMeshAgent_get_desiredVelocity_m3997864340 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415_ftn) (NavMeshAgent_t1276799816 *, Vector3_t3722313464 *);
	static NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_INTERNAL_get_desiredVelocity_m3881144415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
extern "C"  float NavMeshAgent_get_remainingDistance_m3597336304 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_remainingDistance_m3597336304_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_remainingDistance_m3597336304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m3597336304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_remainingDistance()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AI.NavMeshAgent::get_baseOffset()
extern "C"  float NavMeshAgent_get_baseOffset_m526065499 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_baseOffset_m526065499_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_baseOffset_m526065499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_baseOffset_m526065499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_baseOffset()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()
extern "C"  bool NavMeshAgent_get_isOnOffMeshLink_m2179100791 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_isOnOffMeshLink_m2179100791_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_isOnOffMeshLink_m2179100791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_isOnOffMeshLink_m2179100791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_isOnOffMeshLink()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::get_currentOffMeshLinkData()
extern "C"  OffMeshLinkData_t1198555039  NavMeshAgent_get_currentOffMeshLinkData_m3659517268 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t1198555039  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		OffMeshLinkData_t1198555039  L_0 = NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		OffMeshLinkData_t1198555039  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AI.OffMeshLinkData UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()
extern "C"  OffMeshLinkData_t1198555039  NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef OffMeshLinkData_t1198555039  (*NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_GetCurrentOffMeshLinkDataInternal_m2584445831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::GetCurrentOffMeshLinkDataInternal()");
	OffMeshLinkData_t1198555039  retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::CompleteOffMeshLink()
extern "C"  void NavMeshAgent_CompleteOffMeshLink_m248742111 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_CompleteOffMeshLink_m248742111_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_CompleteOffMeshLink_m248742111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_CompleteOffMeshLink_m248742111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::CompleteOffMeshLink()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)
extern "C"  void NavMeshAgent_set_autoTraverseOffMeshLink_m770708411 (NavMeshAgent_t1276799816 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_autoTraverseOffMeshLink_m770708411_ftn) (NavMeshAgent_t1276799816 *, bool);
	static NavMeshAgent_set_autoTraverseOffMeshLink_m770708411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_autoTraverseOffMeshLink_m770708411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_autoTraverseOffMeshLink(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
extern "C"  bool NavMeshAgent_get_pathPending_m4180342381 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef bool (*NavMeshAgent_get_pathPending_m4180342381_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_pathPending_m4180342381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_pathPending_m4180342381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_pathPending()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AI.NavMeshAgent::get_speed()
extern "C"  float NavMeshAgent_get_speed_m2783594252 (NavMeshAgent_t1276799816 * __this, const RuntimeMethod* method)
{
	typedef float (*NavMeshAgent_get_speed_m2783594252_ftn) (NavMeshAgent_t1276799816 *);
	static NavMeshAgent_get_speed_m2783594252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_speed_m2783594252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_speed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C"  void NavMeshAgent_set_updatePosition_m706910944 (NavMeshAgent_t1276799816 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_updatePosition_m706910944_ftn) (NavMeshAgent_t1276799816 *, bool);
	static NavMeshAgent_set_updatePosition_m706910944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updatePosition_m706910944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C"  void NavMeshAgent_set_updateRotation_m333199218 (NavMeshAgent_t1276799816 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshAgent_set_updateRotation_m333199218_ftn) (NavMeshAgent_t1276799816 *, bool);
	static NavMeshAgent_set_updateRotation_m333199218_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateRotation_m333199218_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshBuilder::CollectSources(UnityEngine.Bounds,System.Int32,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>)
extern "C"  void NavMeshBuilder_CollectSources_m553736863 (RuntimeObject * __this /* static, unused */, Bounds_t2266837910  ___includedWorldBounds0, int32_t ___includedLayerMask1, int32_t ___geometry2, int32_t ___defaultArea3, List_1_t2785658607 * ___markups4, List_1_t2160260967 * ___results5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuilder_CollectSources_m553736863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshBuildSourceU5BU5D_t2809533356* V_0 = NULL;
	{
		List_1_t2785658607 * L_0 = ___markups4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2672144621, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0013:
	{
		List_1_t2160260967 * L_2 = ___results5;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2001578372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0025:
	{
		Vector3_t3722313464  L_4 = Bounds_get_extents_m1304537151((&___includedWorldBounds0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (0.001f), L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_Max_m3304052994(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Bounds_set_extents_m2537337060((&___includedWorldBounds0), L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___includedLayerMask1;
		Bounds_t2266837910  L_9 = ___includedWorldBounds0;
		int32_t L_10 = ___geometry2;
		int32_t L_11 = ___defaultArea3;
		List_1_t2785658607 * L_12 = ___markups4;
		NullCheck(L_12);
		NavMeshBuildMarkupU5BU5D_t3844975876* L_13 = List_1_ToArray_m827541566(L_12, /*hidden argument*/List_1_ToArray_m827541566_RuntimeMethod_var);
		NavMeshBuildSourceU5BU5D_t2809533356* L_14 = NavMeshBuilder_CollectSourcesInternal_m801661767(NULL /*static, unused*/, L_8, L_9, (Transform_t3600365921 *)NULL, (bool)1, L_10, L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		List_1_t2160260967 * L_15 = ___results5;
		NullCheck(L_15);
		List_1_Clear_m1060961220(L_15, /*hidden argument*/List_1_Clear_m1060961220_RuntimeMethod_var);
		List_1_t2160260967 * L_16 = ___results5;
		NavMeshBuildSourceU5BU5D_t2809533356* L_17 = V_0;
		NullCheck(L_16);
		List_1_AddRange_m2521234691(L_16, (RuntimeObject*)(RuntimeObject*)L_17, /*hidden argument*/List_1_AddRange_m2521234691_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshBuilder::CollectSources(UnityEngine.Transform,System.Int32,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>)
extern "C"  void NavMeshBuilder_CollectSources_m1517047385 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___root0, int32_t ___includedLayerMask1, int32_t ___geometry2, int32_t ___defaultArea3, List_1_t2785658607 * ___markups4, List_1_t2160260967 * ___results5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuilder_CollectSources_m1517047385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NavMeshBuildSourceU5BU5D_t2809533356* V_1 = NULL;
	{
		List_1_t2785658607 * L_0 = ___markups4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2672144621, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0013:
	{
		List_1_t2160260967 * L_2 = ___results5;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2001578372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0025:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t2266837910 ));
		int32_t L_4 = ___includedLayerMask1;
		Bounds_t2266837910  L_5 = V_0;
		Transform_t3600365921 * L_6 = ___root0;
		int32_t L_7 = ___geometry2;
		int32_t L_8 = ___defaultArea3;
		List_1_t2785658607 * L_9 = ___markups4;
		NullCheck(L_9);
		NavMeshBuildMarkupU5BU5D_t3844975876* L_10 = List_1_ToArray_m827541566(L_9, /*hidden argument*/List_1_ToArray_m827541566_RuntimeMethod_var);
		NavMeshBuildSourceU5BU5D_t2809533356* L_11 = NavMeshBuilder_CollectSourcesInternal_m801661767(NULL /*static, unused*/, L_4, L_5, L_6, (bool)0, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		List_1_t2160260967 * L_12 = ___results5;
		NullCheck(L_12);
		List_1_Clear_m1060961220(L_12, /*hidden argument*/List_1_Clear_m1060961220_RuntimeMethod_var);
		List_1_t2160260967 * L_13 = ___results5;
		NavMeshBuildSourceU5BU5D_t2809533356* L_14 = V_1;
		NullCheck(L_13);
		List_1_AddRange_m2521234691(L_13, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/List_1_AddRange_m2521234691_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.AI.NavMeshBuildSource[] UnityEngine.AI.NavMeshBuilder::CollectSourcesInternal(System.Int32,UnityEngine.Bounds,UnityEngine.Transform,System.Boolean,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,UnityEngine.AI.NavMeshBuildMarkup[])
extern "C"  NavMeshBuildSourceU5BU5D_t2809533356* NavMeshBuilder_CollectSourcesInternal_m801661767 (RuntimeObject * __this /* static, unused */, int32_t ___includedLayerMask0, Bounds_t2266837910  ___includedWorldBounds1, Transform_t3600365921 * ___root2, bool ___useBounds3, int32_t ___geometry4, int32_t ___defaultArea5, NavMeshBuildMarkupU5BU5D_t3844975876* ___markups6, const RuntimeMethod* method)
{
	NavMeshBuildSourceU5BU5D_t2809533356* V_0 = NULL;
	{
		int32_t L_0 = ___includedLayerMask0;
		Transform_t3600365921 * L_1 = ___root2;
		bool L_2 = ___useBounds3;
		int32_t L_3 = ___geometry4;
		int32_t L_4 = ___defaultArea5;
		NavMeshBuildMarkupU5BU5D_t3844975876* L_5 = ___markups6;
		NavMeshBuildSourceU5BU5D_t2809533356* L_6 = NavMeshBuilder_INTERNAL_CALL_CollectSourcesInternal_m426345087(NULL /*static, unused*/, L_0, (&___includedWorldBounds1), L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		NavMeshBuildSourceU5BU5D_t2809533356* L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.AI.NavMeshBuildSource[] UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_CollectSourcesInternal(System.Int32,UnityEngine.Bounds&,UnityEngine.Transform,System.Boolean,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,UnityEngine.AI.NavMeshBuildMarkup[])
extern "C"  NavMeshBuildSourceU5BU5D_t2809533356* NavMeshBuilder_INTERNAL_CALL_CollectSourcesInternal_m426345087 (RuntimeObject * __this /* static, unused */, int32_t ___includedLayerMask0, Bounds_t2266837910 * ___includedWorldBounds1, Transform_t3600365921 * ___root2, bool ___useBounds3, int32_t ___geometry4, int32_t ___defaultArea5, NavMeshBuildMarkupU5BU5D_t3844975876* ___markups6, const RuntimeMethod* method)
{
	typedef NavMeshBuildSourceU5BU5D_t2809533356* (*NavMeshBuilder_INTERNAL_CALL_CollectSourcesInternal_m426345087_ftn) (int32_t, Bounds_t2266837910 *, Transform_t3600365921 *, bool, int32_t, int32_t, NavMeshBuildMarkupU5BU5D_t3844975876*);
	static NavMeshBuilder_INTERNAL_CALL_CollectSourcesInternal_m426345087_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuilder_INTERNAL_CALL_CollectSourcesInternal_m426345087_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_CollectSourcesInternal(System.Int32,UnityEngine.Bounds&,UnityEngine.Transform,System.Boolean,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,UnityEngine.AI.NavMeshBuildMarkup[])");
	NavMeshBuildSourceU5BU5D_t2809533356* retVal = _il2cpp_icall_func(___includedLayerMask0, ___includedWorldBounds1, ___root2, ___useBounds3, ___geometry4, ___defaultArea5, ___markups6);
	return retVal;
}
// UnityEngine.AI.NavMeshData UnityEngine.AI.NavMeshBuilder::BuildNavMeshData(UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  NavMeshData_t1084598030 * NavMeshBuilder_BuildNavMeshData_m2250664010 (RuntimeObject * __this /* static, unused */, NavMeshBuildSettings_t1985378544  ___buildSettings0, List_1_t2160260967 * ___sources1, Bounds_t2266837910  ___localBounds2, Vector3_t3722313464  ___position3, Quaternion_t2301928331  ___rotation4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuilder_BuildNavMeshData_m2250664010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshData_t1084598030 * V_0 = NULL;
	NavMeshData_t1084598030 * V_1 = NULL;
	{
		List_1_t2160260967 * L_0 = ___sources1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1887279536, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		int32_t L_2 = NavMeshBuildSettings_get_agentTypeID_m3314078478((&___buildSettings0), /*hidden argument*/NULL);
		NavMeshData_t1084598030 * L_3 = (NavMeshData_t1084598030 *)il2cpp_codegen_object_new(NavMeshData_t1084598030_il2cpp_TypeInfo_var);
		NavMeshData__ctor_m4156228563(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		NavMeshData_t1084598030 * L_4 = V_0;
		Vector3_t3722313464  L_5 = ___position3;
		NullCheck(L_4);
		NavMeshData_set_position_m4027570316(L_4, L_5, /*hidden argument*/NULL);
		NavMeshData_t1084598030 * L_6 = V_0;
		Quaternion_t2301928331  L_7 = ___rotation4;
		NullCheck(L_6);
		NavMeshData_set_rotation_m2213365812(L_6, L_7, /*hidden argument*/NULL);
		NavMeshData_t1084598030 * L_8 = V_0;
		NavMeshBuildSettings_t1985378544  L_9 = ___buildSettings0;
		List_1_t2160260967 * L_10 = ___sources1;
		Bounds_t2266837910  L_11 = ___localBounds2;
		NavMeshBuilder_UpdateNavMeshDataListInternal_m2558231733(NULL /*static, unused*/, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		NavMeshData_t1084598030 * L_12 = V_0;
		V_1 = L_12;
		goto IL_003f;
	}

IL_003f:
	{
		NavMeshData_t1084598030 * L_13 = V_1;
		return L_13;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshData(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds)
extern "C"  bool NavMeshBuilder_UpdateNavMeshData_m3498158452 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544  ___buildSettings1, List_1_t2160260967 * ___sources2, Bounds_t2266837910  ___localBounds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuilder_UpdateNavMeshData_m3498158452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NavMeshData_t1084598030 * L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral2037252866, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0018:
	{
		List_1_t2160260967 * L_3 = ___sources2;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_4 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_4, _stringLiteral1887279536, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0029:
	{
		NavMeshData_t1084598030 * L_5 = ___data0;
		NavMeshBuildSettings_t1985378544  L_6 = ___buildSettings1;
		List_1_t2160260967 * L_7 = ___sources2;
		Bounds_t2266837910  L_8 = ___localBounds3;
		bool L_9 = NavMeshBuilder_UpdateNavMeshDataListInternal_m2558231733(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
extern "C"  bool NavMeshBuilder_UpdateNavMeshDataListInternal_m2558231733 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544  ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910  ___localBounds3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NavMeshData_t1084598030 * L_0 = ___data0;
		RuntimeObject * L_1 = ___sources2;
		bool L_2 = NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataListInternal_m2660298689(NULL /*static, unused*/, L_0, (&___buildSettings1), L_1, (&___localBounds3), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
extern "C"  bool NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataListInternal_m2660298689 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544 * ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910 * ___localBounds3, const RuntimeMethod* method)
{
	typedef bool (*NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataListInternal_m2660298689_ftn) (NavMeshData_t1084598030 *, NavMeshBuildSettings_t1985378544 *, RuntimeObject *, Bounds_t2266837910 *);
	static NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataListInternal_m2660298689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataListInternal_m2660298689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)");
	bool retVal = _il2cpp_icall_func(___data0, ___buildSettings1, ___sources2, ___localBounds3);
	return retVal;
}
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsync(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds)
extern "C"  AsyncOperation_t1445031843 * NavMeshBuilder_UpdateNavMeshDataAsync_m159354334 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544  ___buildSettings1, List_1_t2160260967 * ___sources2, Bounds_t2266837910  ___localBounds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuilder_UpdateNavMeshDataAsync_m159354334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_t1445031843 * V_0 = NULL;
	{
		NavMeshData_t1084598030 * L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral2037252866, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0018:
	{
		List_1_t2160260967 * L_3 = ___sources2;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_4 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_4, _stringLiteral1887279536, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0029:
	{
		NavMeshData_t1084598030 * L_5 = ___data0;
		NavMeshBuildSettings_t1985378544  L_6 = ___buildSettings1;
		List_1_t2160260967 * L_7 = ___sources2;
		Bounds_t2266837910  L_8 = ___localBounds3;
		AsyncOperation_t1445031843 * L_9 = NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_m3269931782(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		AsyncOperation_t1445031843 * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
extern "C"  AsyncOperation_t1445031843 * NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_m3269931782 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544  ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910  ___localBounds3, const RuntimeMethod* method)
{
	AsyncOperation_t1445031843 * V_0 = NULL;
	{
		NavMeshData_t1084598030 * L_0 = ___data0;
		RuntimeObject * L_1 = ___sources2;
		AsyncOperation_t1445031843 * L_2 = NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal_m326953953(NULL /*static, unused*/, L_0, (&___buildSettings1), L_1, (&___localBounds3), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		AsyncOperation_t1445031843 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
extern "C"  AsyncOperation_t1445031843 * NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal_m326953953 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___data0, NavMeshBuildSettings_t1985378544 * ___buildSettings1, RuntimeObject * ___sources2, Bounds_t2266837910 * ___localBounds3, const RuntimeMethod* method)
{
	typedef AsyncOperation_t1445031843 * (*NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal_m326953953_ftn) (NavMeshData_t1084598030 *, NavMeshBuildSettings_t1985378544 *, RuntimeObject *, Bounds_t2266837910 *);
	static NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal_m326953953_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuilder_INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal_m326953953_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuilder::INTERNAL_CALL_UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)");
	AsyncOperation_t1445031843 * retVal = _il2cpp_icall_func(___data0, ___buildSettings1, ___sources2, ___localBounds3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_overrideArea(System.Boolean)
extern "C"  void NavMeshBuildMarkup_set_overrideArea_m229372463 (NavMeshBuildMarkup_t1313583865 * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildMarkup_t1313583865 * G_B2_0 = NULL;
	NavMeshBuildMarkup_t1313583865 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildMarkup_t1313583865 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->set_m_OverrideArea_0(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshBuildMarkup_set_overrideArea_m229372463_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildMarkup_t1313583865 * _thisAdjusted = reinterpret_cast<NavMeshBuildMarkup_t1313583865 *>(__this + 1);
	NavMeshBuildMarkup_set_overrideArea_m229372463(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_area(System.Int32)
extern "C"  void NavMeshBuildMarkup_set_area_m1361147558 (NavMeshBuildMarkup_t1313583865 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Area_1(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildMarkup_set_area_m1361147558_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildMarkup_t1313583865 * _thisAdjusted = reinterpret_cast<NavMeshBuildMarkup_t1313583865 *>(__this + 1);
	NavMeshBuildMarkup_set_area_m1361147558(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_ignoreFromBuild(System.Boolean)
extern "C"  void NavMeshBuildMarkup_set_ignoreFromBuild_m709640216 (NavMeshBuildMarkup_t1313583865 * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildMarkup_t1313583865 * G_B2_0 = NULL;
	NavMeshBuildMarkup_t1313583865 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildMarkup_t1313583865 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->set_m_IgnoreFromBuild_2(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshBuildMarkup_set_ignoreFromBuild_m709640216_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildMarkup_t1313583865 * _thisAdjusted = reinterpret_cast<NavMeshBuildMarkup_t1313583865 *>(__this + 1);
	NavMeshBuildMarkup_set_ignoreFromBuild_m709640216(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildMarkup::set_root(UnityEngine.Transform)
extern "C"  void NavMeshBuildMarkup_set_root_m518958946 (NavMeshBuildMarkup_t1313583865 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuildMarkup_set_root_m518958946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshBuildMarkup_t1313583865 * G_B2_0 = NULL;
	NavMeshBuildMarkup_t1313583865 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildMarkup_t1313583865 * G_B3_1 = NULL;
	{
		Transform_t3600365921 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		Transform_t3600365921 * L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = Object_GetInstanceID_m1255174761(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->set_m_InstanceID_3(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshBuildMarkup_set_root_m518958946_AdjustorThunk (RuntimeObject * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	NavMeshBuildMarkup_t1313583865 * _thisAdjusted = reinterpret_cast<NavMeshBuildMarkup_t1313583865 *>(__this + 1);
	NavMeshBuildMarkup_set_root_m518958946(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.AI.NavMeshBuildSettings::get_agentTypeID()
extern "C"  int32_t NavMeshBuildSettings_get_agentTypeID_m3314078478 (NavMeshBuildSettings_t1985378544 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_AgentTypeID_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t NavMeshBuildSettings_get_agentTypeID_m3314078478_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * _thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t1985378544 *>(__this + 1);
	return NavMeshBuildSettings_get_agentTypeID_m3314078478(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_agentTypeID(System.Int32)
extern "C"  void NavMeshBuildSettings_set_agentTypeID_m3995891764 (NavMeshBuildSettings_t1985378544 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_AgentTypeID_0(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSettings_set_agentTypeID_m3995891764_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * _thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t1985378544 *>(__this + 1);
	NavMeshBuildSettings_set_agentTypeID_m3995891764(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_overrideVoxelSize(System.Boolean)
extern "C"  void NavMeshBuildSettings_set_overrideVoxelSize_m1423447633 (NavMeshBuildSettings_t1985378544 * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * G_B2_0 = NULL;
	NavMeshBuildSettings_t1985378544 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildSettings_t1985378544 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->set_m_OverrideVoxelSize_8(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshBuildSettings_set_overrideVoxelSize_m1423447633_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * _thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t1985378544 *>(__this + 1);
	NavMeshBuildSettings_set_overrideVoxelSize_m1423447633(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_voxelSize(System.Single)
extern "C"  void NavMeshBuildSettings_set_voxelSize_m2794829786 (NavMeshBuildSettings_t1985378544 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_VoxelSize_9(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSettings_set_voxelSize_m2794829786_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * _thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t1985378544 *>(__this + 1);
	NavMeshBuildSettings_set_voxelSize_m2794829786(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_overrideTileSize(System.Boolean)
extern "C"  void NavMeshBuildSettings_set_overrideTileSize_m1668241129 (NavMeshBuildSettings_t1985378544 * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * G_B2_0 = NULL;
	NavMeshBuildSettings_t1985378544 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildSettings_t1985378544 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->set_m_OverrideTileSize_10(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshBuildSettings_set_overrideTileSize_m1668241129_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * _thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t1985378544 *>(__this + 1);
	NavMeshBuildSettings_set_overrideTileSize_m1668241129(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSettings::set_tileSize(System.Int32)
extern "C"  void NavMeshBuildSettings_set_tileSize_m1243065940 (NavMeshBuildSettings_t1985378544 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_TileSize_11(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSettings_set_tileSize_m1243065940_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSettings_t1985378544 * _thisAdjusted = reinterpret_cast<NavMeshBuildSettings_t1985378544 *>(__this + 1);
	NavMeshBuildSettings_set_tileSize_m1243065940(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Matrix4x4 UnityEngine.AI.NavMeshBuildSource::get_transform()
extern "C"  Matrix4x4_t1817901843  NavMeshBuildSource_get_transform_m868807620 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method)
{
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Matrix4x4_t1817901843  L_0 = __this->get_m_Transform_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Matrix4x4_t1817901843  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Matrix4x4_t1817901843  NavMeshBuildSource_get_transform_m868807620_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_get_transform_m868807620(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_transform(UnityEngine.Matrix4x4)
extern "C"  void NavMeshBuildSource_set_transform_m1212452088 (NavMeshBuildSource_t688186225 * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method)
{
	{
		Matrix4x4_t1817901843  L_0 = ___value0;
		__this->set_m_Transform_0(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSource_set_transform_m1212452088_AdjustorThunk (RuntimeObject * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	NavMeshBuildSource_set_transform_m1212452088(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshBuildSource::get_size()
extern "C"  Vector3_t3722313464  NavMeshBuildSource_get_size_m1205786197 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Size_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  NavMeshBuildSource_get_size_m1205786197_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_get_size_m1205786197(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_size(UnityEngine.Vector3)
extern "C"  void NavMeshBuildSource_set_size_m682598383 (NavMeshBuildSource_t688186225 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_m_Size_1(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSource_set_size_m682598383_AdjustorThunk (RuntimeObject * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	NavMeshBuildSource_set_size_m682598383(_thisAdjusted, ___value0, method);
}
// UnityEngine.AI.NavMeshBuildSourceShape UnityEngine.AI.NavMeshBuildSource::get_shape()
extern "C"  int32_t NavMeshBuildSource_get_shape_m2698270452 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Shape_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t NavMeshBuildSource_get_shape_m2698270452_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_get_shape_m2698270452(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_shape(UnityEngine.AI.NavMeshBuildSourceShape)
extern "C"  void NavMeshBuildSource_set_shape_m2067493469 (NavMeshBuildSource_t688186225 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Shape_2(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSource_set_shape_m2067493469_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	NavMeshBuildSource_set_shape_m2067493469(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_area(System.Int32)
extern "C"  void NavMeshBuildSource_set_area_m2888906222 (NavMeshBuildSource_t688186225 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Area_3(L_0);
		return;
	}
}
extern "C"  void NavMeshBuildSource_set_area_m2888906222_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	NavMeshBuildSource_set_area_m2888906222(_thisAdjusted, ___value0, method);
}
// UnityEngine.Object UnityEngine.AI.NavMeshBuildSource::get_sourceObject()
extern "C"  Object_t631007953 * NavMeshBuildSource_get_sourceObject_m603070145 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method)
{
	Object_t631007953 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_m_InstanceID_4();
		Object_t631007953 * L_1 = NavMeshBuildSource_InternalGetObject_m2319932240(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		Object_t631007953 * L_2 = V_0;
		return L_2;
	}
}
extern "C"  Object_t631007953 * NavMeshBuildSource_get_sourceObject_m603070145_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_get_sourceObject_m603070145(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_sourceObject(UnityEngine.Object)
extern "C"  void NavMeshBuildSource_set_sourceObject_m1573220770 (NavMeshBuildSource_t688186225 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshBuildSource_set_sourceObject_m1573220770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshBuildSource_t688186225 * G_B2_0 = NULL;
	NavMeshBuildSource_t688186225 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildSource_t688186225 * G_B3_1 = NULL;
	{
		Object_t631007953 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		Object_t631007953 * L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = Object_GetInstanceID_m1255174761(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->set_m_InstanceID_4(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshBuildSource_set_sourceObject_m1573220770_AdjustorThunk (RuntimeObject * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	NavMeshBuildSource_set_sourceObject_m1573220770(_thisAdjusted, ___value0, method);
}
// UnityEngine.Component UnityEngine.AI.NavMeshBuildSource::get_component()
extern "C"  Component_t1923634451 * NavMeshBuildSource_get_component_m3010658605 (NavMeshBuildSource_t688186225 * __this, const RuntimeMethod* method)
{
	Component_t1923634451 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_m_ComponentID_5();
		Component_t1923634451 * L_1 = NavMeshBuildSource_InternalGetComponent_m3310896321(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		Component_t1923634451 * L_2 = V_0;
		return L_2;
	}
}
extern "C"  Component_t1923634451 * NavMeshBuildSource_get_component_m3010658605_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_get_component_m3010658605(_thisAdjusted, method);
}
// UnityEngine.Component UnityEngine.AI.NavMeshBuildSource::InternalGetComponent(System.Int32)
extern "C"  Component_t1923634451 * NavMeshBuildSource_InternalGetComponent_m3310896321 (NavMeshBuildSource_t688186225 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef Component_t1923634451 * (*NavMeshBuildSource_InternalGetComponent_m3310896321_ftn) (NavMeshBuildSource_t688186225 *, int32_t);
	static NavMeshBuildSource_InternalGetComponent_m3310896321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuildSource_InternalGetComponent_m3310896321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuildSource::InternalGetComponent(System.Int32)");
	Component_t1923634451 * retVal = _il2cpp_icall_func(__this, ___instanceID0);
	return retVal;
}
extern "C"  Component_t1923634451 * NavMeshBuildSource_InternalGetComponent_m3310896321_AdjustorThunk (RuntimeObject * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_InternalGetComponent_m3310896321(_thisAdjusted, ___instanceID0, method);
}
// UnityEngine.Object UnityEngine.AI.NavMeshBuildSource::InternalGetObject(System.Int32)
extern "C"  Object_t631007953 * NavMeshBuildSource_InternalGetObject_m2319932240 (NavMeshBuildSource_t688186225 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*NavMeshBuildSource_InternalGetObject_m2319932240_ftn) (NavMeshBuildSource_t688186225 *, int32_t);
	static NavMeshBuildSource_InternalGetObject_m2319932240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuildSource_InternalGetObject_m2319932240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuildSource::InternalGetObject(System.Int32)");
	Object_t631007953 * retVal = _il2cpp_icall_func(__this, ___instanceID0);
	return retVal;
}
extern "C"  Object_t631007953 * NavMeshBuildSource_InternalGetObject_m2319932240_AdjustorThunk (RuntimeObject * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	NavMeshBuildSource_t688186225 * _thisAdjusted = reinterpret_cast<NavMeshBuildSource_t688186225 *>(__this + 1);
	return NavMeshBuildSource_InternalGetObject_m2319932240(_thisAdjusted, ___instanceID0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshData::.ctor()
extern "C"  void NavMeshData__ctor_m4164090663 (NavMeshData_t1084598030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshData__ctor_m4164090663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		NavMeshData_Internal_Create_m3377667956(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::.ctor(System.Int32)
extern "C"  void NavMeshData__ctor_m4156228563 (NavMeshData_t1084598030 * __this, int32_t ___agentTypeID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshData__ctor_m4156228563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___agentTypeID0;
		NavMeshData_Internal_Create_m3377667956(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)
extern "C"  void NavMeshData_Internal_Create_m3377667956 (RuntimeObject * __this /* static, unused */, NavMeshData_t1084598030 * ___mono0, int32_t ___agentTypeID1, const RuntimeMethod* method)
{
	typedef void (*NavMeshData_Internal_Create_m3377667956_ftn) (NavMeshData_t1084598030 *, int32_t);
	static NavMeshData_Internal_Create_m3377667956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_Internal_Create_m3377667956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)");
	_il2cpp_icall_func(___mono0, ___agentTypeID1);
}
// UnityEngine.Bounds UnityEngine.AI.NavMeshData::get_sourceBounds()
extern "C"  Bounds_t2266837910  NavMeshData_get_sourceBounds_m3272843480 (NavMeshData_t1084598030 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		NavMeshData_INTERNAL_get_sourceBounds_m1975636456(__this, (&V_0), /*hidden argument*/NULL);
		Bounds_t2266837910  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Bounds_t2266837910  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.AI.NavMeshData::INTERNAL_get_sourceBounds(UnityEngine.Bounds&)
extern "C"  void NavMeshData_INTERNAL_get_sourceBounds_m1975636456 (NavMeshData_t1084598030 * __this, Bounds_t2266837910 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshData_INTERNAL_get_sourceBounds_m1975636456_ftn) (NavMeshData_t1084598030 *, Bounds_t2266837910 *);
	static NavMeshData_INTERNAL_get_sourceBounds_m1975636456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_INTERNAL_get_sourceBounds_m1975636456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::INTERNAL_get_sourceBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshData::set_position(UnityEngine.Vector3)
extern "C"  void NavMeshData_set_position_m4027570316 (NavMeshData_t1084598030 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		NavMeshData_INTERNAL_set_position_m3531837906(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void NavMeshData_INTERNAL_set_position_m3531837906 (NavMeshData_t1084598030 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshData_INTERNAL_set_position_m3531837906_ftn) (NavMeshData_t1084598030 *, Vector3_t3722313464 *);
	static NavMeshData_INTERNAL_set_position_m3531837906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_INTERNAL_set_position_m3531837906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshData::set_rotation(UnityEngine.Quaternion)
extern "C"  void NavMeshData_set_rotation_m2213365812 (NavMeshData_t1084598030 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		NavMeshData_INTERNAL_set_rotation_m1616928503(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void NavMeshData_INTERNAL_set_rotation_m1616928503 (NavMeshData_t1084598030 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*NavMeshData_INTERNAL_set_rotation_m1616928503_ftn) (NavMeshData_t1084598030 *, Quaternion_t2301928331 *);
	static NavMeshData_INTERNAL_set_rotation_m1616928503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_INTERNAL_set_rotation_m1616928503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshDataInstance::get_valid()
extern "C"  bool NavMeshDataInstance_get_valid_m2577459468 (NavMeshDataInstance_t1498462893 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_m_Handle_0();
		bool L_2 = NavMesh_IsValidNavMeshDataHandle_m2817386384(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool NavMeshDataInstance_get_valid_m2577459468_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshDataInstance_t1498462893 * _thisAdjusted = reinterpret_cast<NavMeshDataInstance_t1498462893 *>(__this + 1);
	return NavMeshDataInstance_get_valid_m2577459468(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AI.NavMeshDataInstance::get_id()
extern "C"  int32_t NavMeshDataInstance_get_id_m1137607313 (NavMeshDataInstance_t1498462893 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t NavMeshDataInstance_get_id_m1137607313_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshDataInstance_t1498462893 * _thisAdjusted = reinterpret_cast<NavMeshDataInstance_t1498462893 *>(__this + 1);
	return NavMeshDataInstance_get_id_m1137607313(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshDataInstance::set_id(System.Int32)
extern "C"  void NavMeshDataInstance_set_id_m696452438 (NavMeshDataInstance_t1498462893 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Handle_0(L_0);
		return;
	}
}
extern "C"  void NavMeshDataInstance_set_id_m696452438_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshDataInstance_t1498462893 * _thisAdjusted = reinterpret_cast<NavMeshDataInstance_t1498462893 *>(__this + 1);
	NavMeshDataInstance_set_id_m696452438(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshDataInstance::Remove()
extern "C"  void NavMeshDataInstance_Remove_m996936756 (NavMeshDataInstance_t1498462893 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = NavMeshDataInstance_get_id_m1137607313(__this, /*hidden argument*/NULL);
		NavMesh_RemoveNavMeshDataInternal_m1168224379(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void NavMeshDataInstance_Remove_m996936756_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshDataInstance_t1498462893 * _thisAdjusted = reinterpret_cast<NavMeshDataInstance_t1498462893 *>(__this + 1);
	NavMeshDataInstance_Remove_m996936756(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshDataInstance::set_owner(UnityEngine.Object)
extern "C"  void NavMeshDataInstance_set_owner_m70396501 (NavMeshDataInstance_t1498462893 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshDataInstance_set_owner_m70396501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object_t631007953 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t631007953 * L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = Object_GetInstanceID_m1255174761(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		int32_t L_4 = NavMeshDataInstance_get_id_m1137607313(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		bool L_6 = NavMesh_InternalSetOwner_m642600982(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3541627765, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
extern "C"  void NavMeshDataInstance_set_owner_m70396501_AdjustorThunk (RuntimeObject * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	NavMeshDataInstance_t1498462893 * _thisAdjusted = reinterpret_cast<NavMeshDataInstance_t1498462893 *>(__this + 1);
	NavMeshDataInstance_set_owner_m70396501(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshLinkData::set_startPosition(UnityEngine.Vector3)
extern "C"  void NavMeshLinkData_set_startPosition_m3045742894 (NavMeshLinkData_t3788091180 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_m_StartPosition_0(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_startPosition_m3045742894_AdjustorThunk (RuntimeObject * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_startPosition_m3045742894(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkData::set_endPosition(UnityEngine.Vector3)
extern "C"  void NavMeshLinkData_set_endPosition_m2303385154 (NavMeshLinkData_t3788091180 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_m_EndPosition_1(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_endPosition_m2303385154_AdjustorThunk (RuntimeObject * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_endPosition_m2303385154(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkData::set_costModifier(System.Single)
extern "C"  void NavMeshLinkData_set_costModifier_m810391751 (NavMeshLinkData_t3788091180 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_CostModifier_2(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_costModifier_m810391751_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_costModifier_m810391751(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkData::set_bidirectional(System.Boolean)
extern "C"  void NavMeshLinkData_set_bidirectional_m3986953410 (NavMeshLinkData_t3788091180 * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * G_B2_0 = NULL;
	NavMeshLinkData_t3788091180 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshLinkData_t3788091180 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->set_m_Bidirectional_3(G_B3_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_bidirectional_m3986953410_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_bidirectional_m3986953410(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkData::set_width(System.Single)
extern "C"  void NavMeshLinkData_set_width_m208166935 (NavMeshLinkData_t3788091180 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Width_4(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_width_m208166935_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_width_m208166935(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkData::set_area(System.Int32)
extern "C"  void NavMeshLinkData_set_area_m2802059526 (NavMeshLinkData_t3788091180 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Area_5(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_area_m2802059526_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_area_m2802059526(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkData::set_agentTypeID(System.Int32)
extern "C"  void NavMeshLinkData_set_agentTypeID_m1705603987 (NavMeshLinkData_t3788091180 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_AgentTypeID_6(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkData_set_agentTypeID_m1705603987_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshLinkData_t3788091180 * _thisAdjusted = reinterpret_cast<NavMeshLinkData_t3788091180 *>(__this + 1);
	NavMeshLinkData_set_agentTypeID_m1705603987(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshLinkInstance::get_valid()
extern "C"  bool NavMeshLinkInstance_get_valid_m1072803140 (NavMeshLinkInstance_t3753324387 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_m_Handle_0();
		bool L_2 = NavMesh_IsValidLinkHandle_m2171705503(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool NavMeshLinkInstance_get_valid_m1072803140_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshLinkInstance_t3753324387 * _thisAdjusted = reinterpret_cast<NavMeshLinkInstance_t3753324387 *>(__this + 1);
	return NavMeshLinkInstance_get_valid_m1072803140(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AI.NavMeshLinkInstance::get_id()
extern "C"  int32_t NavMeshLinkInstance_get_id_m2382361339 (NavMeshLinkInstance_t3753324387 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t NavMeshLinkInstance_get_id_m2382361339_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshLinkInstance_t3753324387 * _thisAdjusted = reinterpret_cast<NavMeshLinkInstance_t3753324387 *>(__this + 1);
	return NavMeshLinkInstance_get_id_m2382361339(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshLinkInstance::set_id(System.Int32)
extern "C"  void NavMeshLinkInstance_set_id_m1641519495 (NavMeshLinkInstance_t3753324387 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Handle_0(L_0);
		return;
	}
}
extern "C"  void NavMeshLinkInstance_set_id_m1641519495_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshLinkInstance_t3753324387 * _thisAdjusted = reinterpret_cast<NavMeshLinkInstance_t3753324387 *>(__this + 1);
	NavMeshLinkInstance_set_id_m1641519495(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshLinkInstance::Remove()
extern "C"  void NavMeshLinkInstance_Remove_m1422082466 (NavMeshLinkInstance_t3753324387 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = NavMeshLinkInstance_get_id_m2382361339(__this, /*hidden argument*/NULL);
		NavMesh_RemoveLinkInternal_m1296440649(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void NavMeshLinkInstance_Remove_m1422082466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavMeshLinkInstance_t3753324387 * _thisAdjusted = reinterpret_cast<NavMeshLinkInstance_t3753324387 *>(__this + 1);
	NavMeshLinkInstance_Remove_m1422082466(_thisAdjusted, method);
}
// System.Void UnityEngine.AI.NavMeshLinkInstance::set_owner(UnityEngine.Object)
extern "C"  void NavMeshLinkInstance_set_owner_m1819110525 (NavMeshLinkInstance_t3753324387 * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavMeshLinkInstance_set_owner_m1819110525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object_t631007953 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t631007953 * L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = Object_GetInstanceID_m1255174761(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		int32_t L_4 = NavMeshLinkInstance_get_id_m2382361339(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		bool L_6 = NavMesh_InternalSetLinkOwner_m4230039354(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2692804195, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
extern "C"  void NavMeshLinkInstance_set_owner_m1819110525_AdjustorThunk (RuntimeObject * __this, Object_t631007953 * ___value0, const RuntimeMethod* method)
{
	NavMeshLinkInstance_t3753324387 * _thisAdjusted = reinterpret_cast<NavMeshLinkInstance_t3753324387 *>(__this + 1);
	NavMeshLinkInstance_set_owner_m1819110525(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.AI.OffMeshLinkData::get_endPos()
extern "C"  Vector3_t3722313464  OffMeshLinkData_get_endPos_m3360690749 (OffMeshLinkData_t1198555039 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_EndPos_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  OffMeshLinkData_get_endPos_m3360690749_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	OffMeshLinkData_t1198555039 * _thisAdjusted = reinterpret_cast<OffMeshLinkData_t1198555039 *>(__this + 1);
	return OffMeshLinkData_get_endPos_m3360690749(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
