﻿#include "il2cpp-config.h"

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


// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Func`3<System.Int32,System.Int32,System.Int32>
struct Func_3_t3344861838;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Uri
struct Uri_t100236324;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2800740313;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t1810289389;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t1185182177;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t751358689;
// System.Collections.BitArray
struct BitArray_t4087883509;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t2609070824;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2722445759;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1861210811;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t434143540;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1942268960;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.ServicePoint
struct ServicePoint_t2786966844;
// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3131094331;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1870286136;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3313059048;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2330998371;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t297610732;
// System.Linq.Expressions.NewExpression
struct NewExpression_t1271006003;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3895063248;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t1478067987;




#ifndef U3CMODULEU3E_T692745528_H
#define U3CMODULEU3E_T692745528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745528 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745528_H
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
#ifndef KEYBUILDER_T2049230356_H
#define KEYBUILDER_T2049230356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2049230356  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2049230356_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t386037858 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2049230356_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t386037858 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t386037858 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2049230356_H
#ifndef SYMMETRICTRANSFORM_T3802591843_H
#define SYMMETRICTRANSFORM_T3802591843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591843  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591843_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

struct Enumerable_t538148348_StaticFields
{
public:
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cache0
	Func_3_t3344861838 * ___U3CU3Ef__amU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(Enumerable_t538148348_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_3_t3344861838 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_3_t3344861838 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_3_t3344861838 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef URIPARSER_T3890150400_H
#define URIPARSER_T3890150400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t3890150400  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t3890150400, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t3890150400_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t1853889766 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t3657309853 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t3657309853 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___table_1)); }
	inline Hashtable_t1853889766 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1853889766 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1853889766 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___uri_regex_4)); }
	inline Regex_t3657309853 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t3657309853 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t3657309853 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t3890150400_StaticFields, ___auth_regex_5)); }
	inline Regex_t3657309853 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t3657309853 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t3657309853 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T3890150400_H
#ifndef CHECK_T192468399_H
#define CHECK_T192468399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Check
struct  Check_t192468399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECK_T192468399_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_30)); }
	inline UriParser_t3890150400 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t3890150400 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t3890150400 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef EXTENSIONS_T2537735880_H
#define EXTENSIONS_T2537735880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Extensions
struct  Extensions_t2537735880  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONS_T2537735880_H
#ifndef URIBUILDER_T579353065_H
#define URIBUILDER_T579353065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriBuilder
struct  UriBuilder_t579353065  : public RuntimeObject
{
public:
	// System.String System.UriBuilder::scheme
	String_t* ___scheme_0;
	// System.String System.UriBuilder::host
	String_t* ___host_1;
	// System.Int32 System.UriBuilder::port
	int32_t ___port_2;
	// System.String System.UriBuilder::path
	String_t* ___path_3;
	// System.String System.UriBuilder::query
	String_t* ___query_4;
	// System.String System.UriBuilder::fragment
	String_t* ___fragment_5;
	// System.String System.UriBuilder::username
	String_t* ___username_6;
	// System.String System.UriBuilder::password
	String_t* ___password_7;
	// System.Uri System.UriBuilder::uri
	Uri_t100236324 * ___uri_8;
	// System.Boolean System.UriBuilder::modified
	bool ___modified_9;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_host_1() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___host_1)); }
	inline String_t* get_host_1() const { return ___host_1; }
	inline String_t** get_address_of_host_1() { return &___host_1; }
	inline void set_host_1(String_t* value)
	{
		___host_1 = value;
		Il2CppCodeGenWriteBarrier((&___host_1), value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_query_4() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___query_4)); }
	inline String_t* get_query_4() const { return ___query_4; }
	inline String_t** get_address_of_query_4() { return &___query_4; }
	inline void set_query_4(String_t* value)
	{
		___query_4 = value;
		Il2CppCodeGenWriteBarrier((&___query_4), value);
	}

	inline static int32_t get_offset_of_fragment_5() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___fragment_5)); }
	inline String_t* get_fragment_5() const { return ___fragment_5; }
	inline String_t** get_address_of_fragment_5() { return &___fragment_5; }
	inline void set_fragment_5(String_t* value)
	{
		___fragment_5 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_5), value);
	}

	inline static int32_t get_offset_of_username_6() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___username_6)); }
	inline String_t* get_username_6() const { return ___username_6; }
	inline String_t** get_address_of_username_6() { return &___username_6; }
	inline void set_username_6(String_t* value)
	{
		___username_6 = value;
		Il2CppCodeGenWriteBarrier((&___username_6), value);
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier((&___password_7), value);
	}

	inline static int32_t get_offset_of_uri_8() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___uri_8)); }
	inline Uri_t100236324 * get_uri_8() const { return ___uri_8; }
	inline Uri_t100236324 ** get_address_of_uri_8() { return &___uri_8; }
	inline void set_uri_8(Uri_t100236324 * value)
	{
		___uri_8 = value;
		Il2CppCodeGenWriteBarrier((&___uri_8), value);
	}

	inline static int32_t get_offset_of_modified_9() { return static_cast<int32_t>(offsetof(UriBuilder_t579353065, ___modified_9)); }
	inline bool get_modified_9() const { return ___modified_9; }
	inline bool* get_address_of_modified_9() { return &___modified_9; }
	inline void set_modified_9(bool value)
	{
		___modified_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIBUILDER_T579353065_H
#ifndef EXPRESSIONVISITOR_T1561124052_H
#define EXPRESSIONVISITOR_T1561124052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionVisitor
struct  ExpressionVisitor_t1561124052  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONVISITOR_T1561124052_H
#ifndef EXPRESSION_T2722445759_H
#define EXPRESSION_T2722445759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t2722445759  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T2722445759_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
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
#ifndef LOCALE_T4128636110_H
#define LOCALE_T4128636110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636110  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636110_H
#ifndef ELEMENTINIT_T2682486961_H
#define ELEMENTINIT_T2682486961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ElementInit
struct  ElementInit_t2682486961  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::add_method
	MethodInfo_t * ___add_method_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_1;

public:
	inline static int32_t get_offset_of_add_method_0() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___add_method_0)); }
	inline MethodInfo_t * get_add_method_0() const { return ___add_method_0; }
	inline MethodInfo_t ** get_address_of_add_method_0() { return &___add_method_0; }
	inline void set_add_method_0(MethodInfo_t * value)
	{
		___add_method_0 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___arguments_1)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_1() const { return ___arguments_1; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTINIT_T2682486961_H
#ifndef EXTENSIONATTRIBUTE_T1723066603_H
#define EXTENSIONATTRIBUTE_T1723066603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t1723066603  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T1723066603_H
#ifndef U24ARRAYTYPEU2412_T2490092598_H
#define U24ARRAYTYPEU2412_T2490092598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2490092598 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2490092598__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2490092598_H
#ifndef MONOTODOATTRIBUTE_T4131080583_H
#define MONOTODOATTRIBUTE_T4131080583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080583  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080583_H
#ifndef U24ARRAYTYPEU24128_T4289081660_H
#define U24ARRAYTYPEU24128_T4289081660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t4289081660 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t4289081660__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T4289081660_H
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
#ifndef INTERVAL_T1802865632_H
#define INTERVAL_T1802865632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interval
struct  Interval_t1802865632 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interval::low
	int32_t ___low_0;
	// System.Int32 System.Text.RegularExpressions.Interval::high
	int32_t ___high_1;
	// System.Boolean System.Text.RegularExpressions.Interval::contiguous
	bool ___contiguous_2;

public:
	inline static int32_t get_offset_of_low_0() { return static_cast<int32_t>(offsetof(Interval_t1802865632, ___low_0)); }
	inline int32_t get_low_0() const { return ___low_0; }
	inline int32_t* get_address_of_low_0() { return &___low_0; }
	inline void set_low_0(int32_t value)
	{
		___low_0 = value;
	}

	inline static int32_t get_offset_of_high_1() { return static_cast<int32_t>(offsetof(Interval_t1802865632, ___high_1)); }
	inline int32_t get_high_1() const { return ___high_1; }
	inline int32_t* get_address_of_high_1() { return &___high_1; }
	inline void set_high_1(int32_t value)
	{
		___high_1 = value;
	}

	inline static int32_t get_offset_of_contiguous_2() { return static_cast<int32_t>(offsetof(Interval_t1802865632, ___contiguous_2)); }
	inline bool get_contiguous_2() const { return ___contiguous_2; }
	inline bool* get_address_of_contiguous_2() { return &___contiguous_2; }
	inline void set_contiguous_2(bool value)
	{
		___contiguous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interval
struct Interval_t1802865632_marshaled_pinvoke
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interval
struct Interval_t1802865632_marshaled_com
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
#endif // INTERVAL_T1802865632_H
#ifndef COMPOSITEEXPRESSION_T1252229802_H
#define COMPOSITEEXPRESSION_T1252229802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t1252229802  : public Expression_t2722445759
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t1810289389 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t1252229802, ___expressions_0)); }
	inline ExpressionCollection_t1810289389 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t1810289389 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t1810289389 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T1252229802_H
#ifndef INVALIDTIMEZONEEXCEPTION_T4066718130_H
#define INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t4066718130  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591843
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t4116647657* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t4116647657* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2770800703* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2770800703* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2770800703* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2770800703* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2770800703* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2770800703* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2770800703* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2770800703* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef EXPRESSIONPRINTER_T2120383524_H
#define EXPRESSIONPRINTER_T2120383524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionPrinter
struct  ExpressionPrinter_t2120383524  : public ExpressionVisitor_t1561124052
{
public:
	// System.Text.StringBuilder System.Linq.Expressions.ExpressionPrinter::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(ExpressionPrinter_t2120383524, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONPRINTER_T2120383524_H
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
#ifndef U24ARRAYTYPEU2416_T3254766646_H
#define U24ARRAYTYPEU2416_T3254766646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t3254766646 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t3254766646__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T3254766646_H
#ifndef URITYPECONVERTER_T3695916615_H
#define URITYPECONVERTER_T3695916615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t3695916615  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T3695916615_H
#ifndef GENERICURIPARSER_T1141496137_H
#define GENERICURIPARSER_T1141496137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t1141496137  : public UriParser_t3890150400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T1141496137_H
#ifndef URISCHEME_T722425697_H
#define URISCHEME_T722425697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t722425697 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T722425697_H
#ifndef LITERAL_T434143540_H
#define LITERAL_T434143540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Literal
struct  Literal_t434143540  : public Expression_t2722445759
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Literal::str
	String_t* ___str_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Literal::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(Literal_t434143540, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Literal_t434143540, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T434143540_H
#ifndef REFERENCE_T1799410108_H
#define REFERENCE_T1799410108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t1799410108  : public Expression_t2722445759
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t751358689 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t1799410108, ___group_0)); }
	inline CapturingGroup_t751358689 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t751358689 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t751358689 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t1799410108, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T1799410108_H
#ifndef DEFAULTURIPARSER_T95882050_H
#define DEFAULTURIPARSER_T95882050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t95882050  : public UriParser_t3890150400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T95882050_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef ALTERNATION_T625481451_H
#define ALTERNATION_T625481451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Alternation
struct  Alternation_t625481451  : public CompositeExpression_t1252229802
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALTERNATION_T625481451_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef MEMBERBINDINGTYPE_T648944624_H
#define MEMBERBINDINGTYPE_T648944624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBindingType
struct  MemberBindingType_t648944624 
{
public:
	// System.Int32 System.Linq.Expressions.MemberBindingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberBindingType_t648944624, ___value___1)); }
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
#endif // MEMBERBINDINGTYPE_T648944624_H
#ifndef POSITION_T2536274344_H
#define POSITION_T2536274344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t2536274344 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t2536274344, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T2536274344_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef BACKSLASHNUMBER_T3656518667_H
#define BACKSLASHNUMBER_T3656518667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct  BackslashNumber_t3656518667  : public Reference_t1799410108
{
public:
	// System.String System.Text.RegularExpressions.Syntax.BackslashNumber::literal
	String_t* ___literal_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ecma
	bool ___ecma_3;

public:
	inline static int32_t get_offset_of_literal_2() { return static_cast<int32_t>(offsetof(BackslashNumber_t3656518667, ___literal_2)); }
	inline String_t* get_literal_2() const { return ___literal_2; }
	inline String_t** get_address_of_literal_2() { return &___literal_2; }
	inline void set_literal_2(String_t* value)
	{
		___literal_2 = value;
		Il2CppCodeGenWriteBarrier((&___literal_2), value);
	}

	inline static int32_t get_offset_of_ecma_3() { return static_cast<int32_t>(offsetof(BackslashNumber_t3656518667, ___ecma_3)); }
	inline bool get_ecma_3() const { return ___ecma_3; }
	inline bool* get_address_of_ecma_3() { return &___ecma_3; }
	inline void set_ecma_3(bool value)
	{
		___ecma_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKSLASHNUMBER_T3656518667_H
#ifndef GROUP_T1458537008_H
#define GROUP_T1458537008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t1458537008  : public CompositeExpression_t1252229802
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T1458537008_H
#ifndef CHARACTERCLASS_T839120860_H
#define CHARACTERCLASS_T839120860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t839120860  : public Expression_t2722445759
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t4087883509 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t4087883509 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t2609070824 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t839120860, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t839120860, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t839120860, ___pos_cats_3)); }
	inline BitArray_t4087883509 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t4087883509 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t4087883509 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier((&___pos_cats_3), value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t839120860, ___neg_cats_4)); }
	inline BitArray_t4087883509 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t4087883509 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t4087883509 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier((&___neg_cats_4), value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t839120860, ___intervals_5)); }
	inline IntervalCollection_t2609070824 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t2609070824 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t2609070824 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_5), value);
	}
};

struct CharacterClass_t839120860_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t1802865632  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t839120860_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t1802865632  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t1802865632 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t1802865632  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCLASS_T839120860_H
#ifndef SORTDIRECTION_T3222219096_H
#define SORTDIRECTION_T3222219096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.SortDirection
struct  SortDirection_t3222219096 
{
public:
	// System.Int32 System.Linq.SortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SortDirection_t3222219096, ___value___1)); }
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
#endif // SORTDIRECTION_T3222219096_H
#ifndef FALLBACK_T3495999270_H
#define FALLBACK_T3495999270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3495999270 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3495999270, ___value___1)); }
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
#endif // FALLBACK_T3495999270_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255363_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255363  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2416_t3254766646  ___U24U24fieldU2D1_0;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24128_t4289081660  ___U24U24fieldU2D2_1;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2412_t2490092598  ___U24U24fieldU2D3_2;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2412_t2490092598  ___U24U24fieldU2D4_3;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___U24U24fieldU2D1_0)); }
	inline U24ArrayTypeU2416_t3254766646  get_U24U24fieldU2D1_0() const { return ___U24U24fieldU2D1_0; }
	inline U24ArrayTypeU2416_t3254766646 * get_address_of_U24U24fieldU2D1_0() { return &___U24U24fieldU2D1_0; }
	inline void set_U24U24fieldU2D1_0(U24ArrayTypeU2416_t3254766646  value)
	{
		___U24U24fieldU2D1_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___U24U24fieldU2D2_1)); }
	inline U24ArrayTypeU24128_t4289081660  get_U24U24fieldU2D2_1() const { return ___U24U24fieldU2D2_1; }
	inline U24ArrayTypeU24128_t4289081660 * get_address_of_U24U24fieldU2D2_1() { return &___U24U24fieldU2D2_1; }
	inline void set_U24U24fieldU2D2_1(U24ArrayTypeU24128_t4289081660  value)
	{
		___U24U24fieldU2D2_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___U24U24fieldU2D3_2)); }
	inline U24ArrayTypeU2412_t2490092598  get_U24U24fieldU2D3_2() const { return ___U24U24fieldU2D3_2; }
	inline U24ArrayTypeU2412_t2490092598 * get_address_of_U24U24fieldU2D3_2() { return &___U24U24fieldU2D3_2; }
	inline void set_U24U24fieldU2D3_2(U24ArrayTypeU2412_t2490092598  value)
	{
		___U24U24fieldU2D3_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields, ___U24U24fieldU2D4_3)); }
	inline U24ArrayTypeU2412_t2490092598  get_U24U24fieldU2D4_3() const { return ___U24U24fieldU2D4_3; }
	inline U24ArrayTypeU2412_t2490092598 * get_address_of_U24U24fieldU2D4_3() { return &___U24U24fieldU2D4_3; }
	inline void set_U24U24fieldU2D4_3(U24ArrayTypeU2412_t2490092598  value)
	{
		___U24U24fieldU2D4_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255363_H
#ifndef EXPRESSIONTYPE_T2886294549_H
#define EXPRESSIONTYPE_T2886294549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t2886294549 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExpressionType_t2886294549, ___value___1)); }
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
#endif // EXPRESSIONTYPE_T2886294549_H
#ifndef URIPARTIAL_T1736313903_H
#define URIPARTIAL_T1736313903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriPartial
struct  UriPartial_t1736313903 
{
public:
	// System.Int32 System.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_t1736313903, ___value___1)); }
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
#endif // URIPARTIAL_T1736313903_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___1)); }
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
#endif // URIKIND_T3816567336_H
#ifndef URIHOSTNAMETYPE_T881866241_H
#define URIHOSTNAMETYPE_T881866241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t881866241 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriHostNameType_t881866241, ___value___1)); }
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
#endif // URIHOSTNAMETYPE_T881866241_H
#ifndef ASSERTION_T3267412828_H
#define ASSERTION_T3267412828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Assertion
struct  Assertion_t3267412828  : public CompositeExpression_t1252229802
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTION_T3267412828_H
#ifndef SSLPOLICYERRORS_T2205227823_H
#define SSLPOLICYERRORS_T2205227823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2205227823 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2205227823, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2205227823_H
#ifndef REPETITION_T2393242404_H
#define REPETITION_T2393242404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t2393242404  : public CompositeExpression_t1252229802
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t2393242404, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t2393242404, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t2393242404, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T2393242404_H
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
#ifndef ANCHORINFO_T3387011151_H
#define ANCHORINFO_T3387011151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t3387011151  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t2722445759 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t3387011151, ___expr_0)); }
	inline Expression_t2722445759 * get_expr_0() const { return ___expr_0; }
	inline Expression_t2722445759 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t2722445759 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t3387011151, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t3387011151, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t3387011151, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t3387011151, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t3387011151, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T3387011151_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
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
#ifndef CAPTUREASSERTION_T3786084589_H
#define CAPTUREASSERTION_T3786084589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t3786084589  : public Assertion_t3267412828
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t1861210811 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t751358689 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t434143540 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t3786084589, ___alternate_1)); }
	inline ExpressionAssertion_t1861210811 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t1861210811 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t1861210811 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier((&___alternate_1), value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t3786084589, ___group_2)); }
	inline CapturingGroup_t751358689 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t751358689 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t751358689 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier((&___group_2), value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t3786084589, ___literal_3)); }
	inline Literal_t434143540 * get_literal_3() const { return ___literal_3; }
	inline Literal_t434143540 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t434143540 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier((&___literal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREASSERTION_T3786084589_H
#ifndef POSITIONASSERTION_T3339288061_H
#define POSITIONASSERTION_T3339288061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t3339288061  : public Expression_t2722445759
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t3339288061, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T3339288061_H
#ifndef CAPTURINGGROUP_T751358689_H
#define CAPTURINGGROUP_T751358689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_t751358689  : public Group_t1458537008
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_t751358689, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_t751358689, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURINGGROUP_T751358689_H
#ifndef EXPRESSIONASSERTION_T1861210811_H
#define EXPRESSIONASSERTION_T1861210811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct  ExpressionAssertion_t1861210811  : public Assertion_t3267412828
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::reverse
	bool ___reverse_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::negate
	bool ___negate_2;

public:
	inline static int32_t get_offset_of_reverse_1() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t1861210811, ___reverse_1)); }
	inline bool get_reverse_1() const { return ___reverse_1; }
	inline bool* get_address_of_reverse_1() { return &___reverse_1; }
	inline void set_reverse_1(bool value)
	{
		___reverse_1 = value;
	}

	inline static int32_t get_offset_of_negate_2() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t1861210811, ___negate_2)); }
	inline bool get_negate_2() const { return ___negate_2; }
	inline bool* get_address_of_negate_2() { return &___negate_2; }
	inline void set_negate_2(bool value)
	{
		___negate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONASSERTION_T1861210811_H
#ifndef NONBACKTRACKINGGROUP_T3074098547_H
#define NONBACKTRACKINGGROUP_T3074098547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
struct  NonBacktrackingGroup_t3074098547  : public Group_t1458537008
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBACKTRACKINGGROUP_T3074098547_H
#ifndef URIFORMATEXCEPTION_T953270471_H
#define URIFORMATEXCEPTION_T953270471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t953270471  : public FormatException_t154580423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T953270471_H
#ifndef MEMBERBINDING_T265491700_H
#define MEMBERBINDING_T265491700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBinding
struct  MemberBinding_t265491700  : public RuntimeObject
{
public:
	// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::binding_type
	int32_t ___binding_type_0;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_binding_type_0() { return static_cast<int32_t>(offsetof(MemberBinding_t265491700, ___binding_type_0)); }
	inline int32_t get_binding_type_0() const { return ___binding_type_0; }
	inline int32_t* get_address_of_binding_type_0() { return &___binding_type_0; }
	inline void set_binding_type_0(int32_t value)
	{
		___binding_type_0 = value;
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(MemberBinding_t265491700, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((&___member_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERBINDING_T265491700_H
#ifndef EXPRESSION_T1588164026_H
#define EXPRESSION_T1588164026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t1588164026  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::node_type
	int32_t ___node_type_0;
	// System.Type System.Linq.Expressions.Expression::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_node_type_0() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___node_type_0)); }
	inline int32_t get_node_type_0() const { return ___node_type_0; }
	inline int32_t* get_address_of_node_type_0() { return &___node_type_0; }
	inline void set_node_type_0(int32_t value)
	{
		___node_type_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1588164026_H
#ifndef REGULAREXPRESSION_T3834220169_H
#define REGULAREXPRESSION_T3834220169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t3834220169  : public Group_t1458537008
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t3834220169, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T3834220169_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t3014364904  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifndef HTTPCONTINUEDELEGATE_T3009151163_H
#define HTTPCONTINUEDELEGATE_T3009151163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpContinueDelegate
struct  HttpContinueDelegate_t3009151163  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPCONTINUEDELEGATE_T3009151163_H
#ifndef CONSTANTEXPRESSION_T3613654278_H
#define CONSTANTEXPRESSION_T3613654278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t3613654278  : public Expression_t1588164026
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ConstantExpression_t3613654278, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSION_T3613654278_H
#ifndef BINDIPENDPOINT_T1029027275_H
#define BINDIPENDPOINT_T1029027275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.BindIPEndPoint
struct  BindIPEndPoint_t1029027275  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDIPENDPOINT_T1029027275_H
#ifndef CONDITIONALEXPRESSION_T1874387742_H
#define CONDITIONALEXPRESSION_T1874387742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t1874387742  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::test
	Expression_t1588164026 * ___test_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_true
	Expression_t1588164026 * ___if_true_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_false
	Expression_t1588164026 * ___if_false_4;

public:
	inline static int32_t get_offset_of_test_2() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___test_2)); }
	inline Expression_t1588164026 * get_test_2() const { return ___test_2; }
	inline Expression_t1588164026 ** get_address_of_test_2() { return &___test_2; }
	inline void set_test_2(Expression_t1588164026 * value)
	{
		___test_2 = value;
		Il2CppCodeGenWriteBarrier((&___test_2), value);
	}

	inline static int32_t get_offset_of_if_true_3() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___if_true_3)); }
	inline Expression_t1588164026 * get_if_true_3() const { return ___if_true_3; }
	inline Expression_t1588164026 ** get_address_of_if_true_3() { return &___if_true_3; }
	inline void set_if_true_3(Expression_t1588164026 * value)
	{
		___if_true_3 = value;
		Il2CppCodeGenWriteBarrier((&___if_true_3), value);
	}

	inline static int32_t get_offset_of_if_false_4() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___if_false_4)); }
	inline Expression_t1588164026 * get_if_false_4() const { return ___if_false_4; }
	inline Expression_t1588164026 ** get_address_of_if_false_4() { return &___if_false_4; }
	inline void set_if_false_4(Expression_t1588164026 * value)
	{
		___if_false_4 = value;
		Il2CppCodeGenWriteBarrier((&___if_false_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALEXPRESSION_T1874387742_H
#ifndef BINARYEXPRESSION_T77573129_H
#define BINARYEXPRESSION_T77573129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t77573129  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t1588164026 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t1588164026 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t3131094331 * ___conversion_4;
	// System.Reflection.MethodInfo System.Linq.Expressions.BinaryExpression::method
	MethodInfo_t * ___method_5;
	// System.Boolean System.Linq.Expressions.BinaryExpression::lift_to_null
	bool ___lift_to_null_6;
	// System.Boolean System.Linq.Expressions.BinaryExpression::is_lifted
	bool ___is_lifted_7;

public:
	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___left_2)); }
	inline Expression_t1588164026 * get_left_2() const { return ___left_2; }
	inline Expression_t1588164026 ** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Expression_t1588164026 * value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier((&___left_2), value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___right_3)); }
	inline Expression_t1588164026 * get_right_3() const { return ___right_3; }
	inline Expression_t1588164026 ** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Expression_t1588164026 * value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier((&___right_3), value);
	}

	inline static int32_t get_offset_of_conversion_4() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___conversion_4)); }
	inline LambdaExpression_t3131094331 * get_conversion_4() const { return ___conversion_4; }
	inline LambdaExpression_t3131094331 ** get_address_of_conversion_4() { return &___conversion_4; }
	inline void set_conversion_4(LambdaExpression_t3131094331 * value)
	{
		___conversion_4 = value;
		Il2CppCodeGenWriteBarrier((&___conversion_4), value);
	}

	inline static int32_t get_offset_of_method_5() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___method_5)); }
	inline MethodInfo_t * get_method_5() const { return ___method_5; }
	inline MethodInfo_t ** get_address_of_method_5() { return &___method_5; }
	inline void set_method_5(MethodInfo_t * value)
	{
		___method_5 = value;
		Il2CppCodeGenWriteBarrier((&___method_5), value);
	}

	inline static int32_t get_offset_of_lift_to_null_6() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___lift_to_null_6)); }
	inline bool get_lift_to_null_6() const { return ___lift_to_null_6; }
	inline bool* get_address_of_lift_to_null_6() { return &___lift_to_null_6; }
	inline void set_lift_to_null_6(bool value)
	{
		___lift_to_null_6 = value;
	}

	inline static int32_t get_offset_of_is_lifted_7() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___is_lifted_7)); }
	inline bool get_is_lifted_7() const { return ___is_lifted_7; }
	inline bool* get_address_of_is_lifted_7() { return &___is_lifted_7; }
	inline void set_is_lifted_7(bool value)
	{
		___is_lifted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYEXPRESSION_T77573129_H
#ifndef COLLECTIONCHANGEEVENTHANDLER_T2526189854_H
#define COLLECTIONCHANGEEVENTHANDLER_T2526189854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventHandler
struct  CollectionChangeEventHandler_t2526189854  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTHANDLER_T2526189854_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#define PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t3836340606  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#ifndef LAMBDAEXPRESSION_T3131094331_H
#define LAMBDAEXPRESSION_T3131094331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3131094331  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1588164026 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2330998371 * ___parameters_3;

public:
	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___body_2)); }
	inline Expression_t1588164026 * get_body_2() const { return ___body_2; }
	inline Expression_t1588164026 ** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(Expression_t1588164026 * value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((&___body_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___parameters_3)); }
	inline ReadOnlyCollection_1_t2330998371 * get_parameters_3() const { return ___parameters_3; }
	inline ReadOnlyCollection_1_t2330998371 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ReadOnlyCollection_1_t2330998371 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T3131094331_H
#ifndef BALANCINGGROUP_T2395658894_H
#define BALANCINGGROUP_T2395658894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t2395658894  : public CapturingGroup_t751358689
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t751358689 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t2395658894, ___balance_3)); }
	inline CapturingGroup_t751358689 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t751358689 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t751358689 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier((&___balance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALANCINGGROUP_T2395658894_H
#ifndef LOCALCERTIFICATESELECTIONCALLBACK_T2354453884_H
#define LOCALCERTIFICATESELECTIONCALLBACK_T2354453884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.LocalCertificateSelectionCallback
struct  LocalCertificateSelectionCallback_t2354453884  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALCERTIFICATESELECTIONCALLBACK_T2354453884_H
#ifndef INVOCATIONEXPRESSION_T3698930233_H
#define INVOCATIONEXPRESSION_T3698930233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression
struct  InvocationExpression_t3698930233  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::expression
	Expression_t1588164026 * ___expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(InvocationExpression_t3698930233, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(InvocationExpression_t3698930233, ___arguments_3)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION_T3698930233_H
#ifndef UNARYEXPRESSION_T3914580921_H
#define UNARYEXPRESSION_T3914580921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t3914580921  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::operand
	Expression_t1588164026 * ___operand_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::method
	MethodInfo_t * ___method_3;
	// System.Boolean System.Linq.Expressions.UnaryExpression::is_lifted
	bool ___is_lifted_4;

public:
	inline static int32_t get_offset_of_operand_2() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___operand_2)); }
	inline Expression_t1588164026 * get_operand_2() const { return ___operand_2; }
	inline Expression_t1588164026 ** get_address_of_operand_2() { return &___operand_2; }
	inline void set_operand_2(Expression_t1588164026 * value)
	{
		___operand_2 = value;
		Il2CppCodeGenWriteBarrier((&___operand_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier((&___method_3), value);
	}

	inline static int32_t get_offset_of_is_lifted_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___is_lifted_4)); }
	inline bool get_is_lifted_4() const { return ___is_lifted_4; }
	inline bool* get_address_of_is_lifted_4() { return &___is_lifted_4; }
	inline void set_is_lifted_4(bool value)
	{
		___is_lifted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSION_T3914580921_H
#ifndef TYPEBINARYEXPRESSION_T2086022908_H
#define TYPEBINARYEXPRESSION_T2086022908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypeBinaryExpression
struct  TypeBinaryExpression_t2086022908  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::expression
	Expression_t1588164026 * ___expression_2;
	// System.Type System.Linq.Expressions.TypeBinaryExpression::type_operand
	Type_t * ___type_operand_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t2086022908, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_type_operand_3() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t2086022908, ___type_operand_3)); }
	inline Type_t * get_type_operand_3() const { return ___type_operand_3; }
	inline Type_t ** get_address_of_type_operand_3() { return &___type_operand_3; }
	inline void set_type_operand_3(Type_t * value)
	{
		___type_operand_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_operand_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBINARYEXPRESSION_T2086022908_H
#ifndef NEWEXPRESSION_T1271006003_H
#define NEWEXPRESSION_T1271006003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t1271006003  : public Expression_t1588164026
{
public:
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::constructor
	ConstructorInfo_t5769829 * ___constructor_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t297610732 * ___members_4;

public:
	inline static int32_t get_offset_of_constructor_2() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___constructor_2)); }
	inline ConstructorInfo_t5769829 * get_constructor_2() const { return ___constructor_2; }
	inline ConstructorInfo_t5769829 ** get_address_of_constructor_2() { return &___constructor_2; }
	inline void set_constructor_2(ConstructorInfo_t5769829 * value)
	{
		___constructor_2 = value;
		Il2CppCodeGenWriteBarrier((&___constructor_2), value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___arguments_3)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_3), value);
	}

	inline static int32_t get_offset_of_members_4() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___members_4)); }
	inline ReadOnlyCollection_1_t297610732 * get_members_4() const { return ___members_4; }
	inline ReadOnlyCollection_1_t297610732 ** get_address_of_members_4() { return &___members_4; }
	inline void set_members_4(ReadOnlyCollection_1_t297610732 * value)
	{
		___members_4 = value;
		Il2CppCodeGenWriteBarrier((&___members_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWEXPRESSION_T1271006003_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef NEWARRAYEXPRESSION_T679298166_H
#define NEWARRAYEXPRESSION_T679298166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayExpression
struct  NewArrayExpression_t679298166  : public Expression_t1588164026
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::expressions
	ReadOnlyCollection_1_t2800740313 * ___expressions_2;

public:
	inline static int32_t get_offset_of_expressions_2() { return static_cast<int32_t>(offsetof(NewArrayExpression_t679298166, ___expressions_2)); }
	inline ReadOnlyCollection_1_t2800740313 * get_expressions_2() const { return ___expressions_2; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_expressions_2() { return &___expressions_2; }
	inline void set_expressions_2(ReadOnlyCollection_1_t2800740313 * value)
	{
		___expressions_2 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYEXPRESSION_T679298166_H
#ifndef METHODCALLEXPRESSION_T3675920717_H
#define METHODCALLEXPRESSION_T3675920717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t3675920717  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t1588164026 * ___obj_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t * ___method_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3675920717, ___obj_2)); }
	inline Expression_t1588164026 * get_obj_2() const { return ___obj_2; }
	inline Expression_t1588164026 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(Expression_t1588164026 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3675920717, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier((&___method_3), value);
	}

	inline static int32_t get_offset_of_arguments_4() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3675920717, ___arguments_4)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_4() const { return ___arguments_4; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_4() { return &___arguments_4; }
	inline void set_arguments_4(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_4 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION_T3675920717_H
#ifndef LISTINITEXPRESSION_T4000042569_H
#define LISTINITEXPRESSION_T4000042569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t4000042569  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t1271006003 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t3895063248 * ___initializers_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(ListInitExpression_t4000042569, ___new_expression_2)); }
	inline NewExpression_t1271006003 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t1271006003 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t1271006003 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___new_expression_2), value);
	}

	inline static int32_t get_offset_of_initializers_3() { return static_cast<int32_t>(offsetof(ListInitExpression_t4000042569, ___initializers_3)); }
	inline ReadOnlyCollection_1_t3895063248 * get_initializers_3() const { return ___initializers_3; }
	inline ReadOnlyCollection_1_t3895063248 ** get_address_of_initializers_3() { return &___initializers_3; }
	inline void set_initializers_3(ReadOnlyCollection_1_t3895063248 * value)
	{
		___initializers_3 = value;
		Il2CppCodeGenWriteBarrier((&___initializers_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTINITEXPRESSION_T4000042569_H
#ifndef MEMBERASSIGNMENT_T1201848431_H
#define MEMBERASSIGNMENT_T1201848431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberAssignment
struct  MemberAssignment_t1201848431  : public MemberBinding_t265491700
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::expression
	Expression_t1588164026 * ___expression_2;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberAssignment_t1201848431, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERASSIGNMENT_T1201848431_H
#ifndef MEMBEREXPRESSION_T2956213603_H
#define MEMBEREXPRESSION_T2956213603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberExpression
struct  MemberExpression_t2956213603  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::expression
	Expression_t1588164026 * ___expression_2;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::member
	MemberInfo_t * ___member_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberExpression_t2956213603, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_member_3() { return static_cast<int32_t>(offsetof(MemberExpression_t2956213603, ___member_3)); }
	inline MemberInfo_t * get_member_3() const { return ___member_3; }
	inline MemberInfo_t ** get_address_of_member_3() { return &___member_3; }
	inline void set_member_3(MemberInfo_t * value)
	{
		___member_3 = value;
		Il2CppCodeGenWriteBarrier((&___member_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBEREXPRESSION_T2956213603_H
#ifndef MEMBERINITEXPRESSION_T676945469_H
#define MEMBERINITEXPRESSION_T676945469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t676945469  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t1271006003 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t1478067987 * ___bindings_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(MemberInitExpression_t676945469, ___new_expression_2)); }
	inline NewExpression_t1271006003 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t1271006003 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t1271006003 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___new_expression_2), value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t676945469, ___bindings_3)); }
	inline ReadOnlyCollection_1_t1478067987 * get_bindings_3() const { return ___bindings_3; }
	inline ReadOnlyCollection_1_t1478067987 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(ReadOnlyCollection_1_t1478067987 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier((&___bindings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINITEXPRESSION_T676945469_H
#ifndef MEMBERLISTBINDING_T3353502159_H
#define MEMBERLISTBINDING_T3353502159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberListBinding
struct  MemberListBinding_t3353502159  : public MemberBinding_t265491700
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::initializers
	ReadOnlyCollection_1_t3895063248 * ___initializers_2;

public:
	inline static int32_t get_offset_of_initializers_2() { return static_cast<int32_t>(offsetof(MemberListBinding_t3353502159, ___initializers_2)); }
	inline ReadOnlyCollection_1_t3895063248 * get_initializers_2() const { return ___initializers_2; }
	inline ReadOnlyCollection_1_t3895063248 ** get_address_of_initializers_2() { return &___initializers_2; }
	inline void set_initializers_2(ReadOnlyCollection_1_t3895063248 * value)
	{
		___initializers_2 = value;
		Il2CppCodeGenWriteBarrier((&___initializers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERLISTBINDING_T3353502159_H
#ifndef MEMBERMEMBERBINDING_T3826576684_H
#define MEMBERMEMBERBINDING_T3826576684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberMemberBinding
struct  MemberMemberBinding_t3826576684  : public MemberBinding_t265491700
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::bindings
	ReadOnlyCollection_1_t1478067987 * ___bindings_2;

public:
	inline static int32_t get_offset_of_bindings_2() { return static_cast<int32_t>(offsetof(MemberMemberBinding_t3826576684, ___bindings_2)); }
	inline ReadOnlyCollection_1_t1478067987 * get_bindings_2() const { return ___bindings_2; }
	inline ReadOnlyCollection_1_t1478067987 ** get_address_of_bindings_2() { return &___bindings_2; }
	inline void set_bindings_2(ReadOnlyCollection_1_t1478067987 * value)
	{
		___bindings_2 = value;
		Il2CppCodeGenWriteBarrier((&___bindings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERMEMBERBINDING_T3826576684_H
#ifndef PARAMETEREXPRESSION_T1118422084_H
#define PARAMETEREXPRESSION_T1118422084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t1118422084  : public Expression_t1588164026
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ParameterExpression_t1118422084, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSION_T1118422084_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (RegularExpression_t3834220169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[1] = 
{
	RegularExpression_t3834220169::get_offset_of_group_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (CapturingGroup_t751358689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1401[2] = 
{
	CapturingGroup_t751358689::get_offset_of_gid_1(),
	CapturingGroup_t751358689::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (BalancingGroup_t2395658894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[1] = 
{
	BalancingGroup_t2395658894::get_offset_of_balance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (NonBacktrackingGroup_t3074098547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (Repetition_t2393242404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[3] = 
{
	Repetition_t2393242404::get_offset_of_min_1(),
	Repetition_t2393242404::get_offset_of_max_2(),
	Repetition_t2393242404::get_offset_of_lazy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (Assertion_t3267412828), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (CaptureAssertion_t3786084589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[3] = 
{
	CaptureAssertion_t3786084589::get_offset_of_alternate_1(),
	CaptureAssertion_t3786084589::get_offset_of_group_2(),
	CaptureAssertion_t3786084589::get_offset_of_literal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (ExpressionAssertion_t1861210811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[2] = 
{
	ExpressionAssertion_t1861210811::get_offset_of_reverse_1(),
	ExpressionAssertion_t1861210811::get_offset_of_negate_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (Alternation_t625481451), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (Literal_t434143540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1409[2] = 
{
	Literal_t434143540::get_offset_of_str_0(),
	Literal_t434143540::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (PositionAssertion_t3339288061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[1] = 
{
	PositionAssertion_t3339288061::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (Reference_t1799410108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[2] = 
{
	Reference_t1799410108::get_offset_of_group_0(),
	Reference_t1799410108::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (BackslashNumber_t3656518667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1412[2] = 
{
	BackslashNumber_t3656518667::get_offset_of_literal_2(),
	BackslashNumber_t3656518667::get_offset_of_ecma_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (CharacterClass_t839120860), -1, sizeof(CharacterClass_t839120860_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1413[6] = 
{
	CharacterClass_t839120860_StaticFields::get_offset_of_upper_case_characters_0(),
	CharacterClass_t839120860::get_offset_of_negate_1(),
	CharacterClass_t839120860::get_offset_of_ignore_2(),
	CharacterClass_t839120860::get_offset_of_pos_cats_3(),
	CharacterClass_t839120860::get_offset_of_neg_cats_4(),
	CharacterClass_t839120860::get_offset_of_intervals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (AnchorInfo_t3387011151), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[6] = 
{
	AnchorInfo_t3387011151::get_offset_of_expr_0(),
	AnchorInfo_t3387011151::get_offset_of_pos_1(),
	AnchorInfo_t3387011151::get_offset_of_offset_2(),
	AnchorInfo_t3387011151::get_offset_of_str_3(),
	AnchorInfo_t3387011151::get_offset_of_width_4(),
	AnchorInfo_t3387011151::get_offset_of_ignore_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (DefaultUriParser_t95882050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (GenericUriParser_t1141496137), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (Uri_t100236324), -1, sizeof(Uri_t100236324_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1417[36] = 
{
	Uri_t100236324::get_offset_of_isUnixFilePath_0(),
	Uri_t100236324::get_offset_of_source_1(),
	Uri_t100236324::get_offset_of_scheme_2(),
	Uri_t100236324::get_offset_of_host_3(),
	Uri_t100236324::get_offset_of_port_4(),
	Uri_t100236324::get_offset_of_path_5(),
	Uri_t100236324::get_offset_of_query_6(),
	Uri_t100236324::get_offset_of_fragment_7(),
	Uri_t100236324::get_offset_of_userinfo_8(),
	Uri_t100236324::get_offset_of_isUnc_9(),
	Uri_t100236324::get_offset_of_isOpaquePart_10(),
	Uri_t100236324::get_offset_of_isAbsoluteUri_11(),
	Uri_t100236324::get_offset_of_userEscaped_12(),
	Uri_t100236324::get_offset_of_cachedAbsoluteUri_13(),
	Uri_t100236324::get_offset_of_cachedToString_14(),
	Uri_t100236324::get_offset_of_cachedLocalPath_15(),
	Uri_t100236324::get_offset_of_cachedHashCode_16(),
	Uri_t100236324_StaticFields::get_offset_of_hexUpperChars_17(),
	Uri_t100236324_StaticFields::get_offset_of_SchemeDelimiter_18(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeFile_19(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeFtp_20(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeGopher_21(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeHttp_22(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeHttps_23(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeMailto_24(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeNews_25(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeNntp_26(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeNetPipe_27(),
	Uri_t100236324_StaticFields::get_offset_of_UriSchemeNetTcp_28(),
	Uri_t100236324_StaticFields::get_offset_of_schemes_29(),
	Uri_t100236324::get_offset_of_parser_30(),
	Uri_t100236324_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_31(),
	Uri_t100236324_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_32(),
	Uri_t100236324_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_33(),
	Uri_t100236324_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_34(),
	Uri_t100236324_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (UriScheme_t722425697)+ sizeof (RuntimeObject), sizeof(UriScheme_t722425697_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1418[3] = 
{
	UriScheme_t722425697::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t722425697::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t722425697::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (UriBuilder_t579353065), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[10] = 
{
	UriBuilder_t579353065::get_offset_of_scheme_0(),
	UriBuilder_t579353065::get_offset_of_host_1(),
	UriBuilder_t579353065::get_offset_of_port_2(),
	UriBuilder_t579353065::get_offset_of_path_3(),
	UriBuilder_t579353065::get_offset_of_query_4(),
	UriBuilder_t579353065::get_offset_of_fragment_5(),
	UriBuilder_t579353065::get_offset_of_username_6(),
	UriBuilder_t579353065::get_offset_of_password_7(),
	UriBuilder_t579353065::get_offset_of_uri_8(),
	UriBuilder_t579353065::get_offset_of_modified_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (UriFormatException_t953270471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (UriHostNameType_t881866241)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1421[6] = 
{
	UriHostNameType_t881866241::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (UriKind_t3816567336)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1422[4] = 
{
	UriKind_t3816567336::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (UriParser_t3890150400), -1, sizeof(UriParser_t3890150400_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1423[6] = 
{
	UriParser_t3890150400_StaticFields::get_offset_of_lock_object_0(),
	UriParser_t3890150400_StaticFields::get_offset_of_table_1(),
	UriParser_t3890150400::get_offset_of_scheme_name_2(),
	UriParser_t3890150400::get_offset_of_default_port_3(),
	UriParser_t3890150400_StaticFields::get_offset_of_uri_regex_4(),
	UriParser_t3890150400_StaticFields::get_offset_of_auth_regex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (UriPartial_t1736313903)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1424[5] = 
{
	UriPartial_t1736313903::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (UriTypeConverter_t3695916615), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (CollectionChangeEventHandler_t2526189854), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (PropertyChangedEventHandler_t3836340606), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (LocalCertificateSelectionCallback_t2354453884), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (RemoteCertificateValidationCallback_t3014364904), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (BindIPEndPoint_t1029027275), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (HttpContinueDelegate_t3009151163), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255363), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1432[4] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields::get_offset_of_U24U24fieldU2D1_0(),
	U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields::get_offset_of_U24U24fieldU2D2_1(),
	U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields::get_offset_of_U24U24fieldU2D3_2(),
	U3CPrivateImplementationDetailsU3E_t3057255363_StaticFields::get_offset_of_U24U24fieldU2D4_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (U24ArrayTypeU2416_t3254766646)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t3254766646 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (U24ArrayTypeU24128_t4289081660)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t4289081660 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (U24ArrayTypeU2412_t2490092598)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2490092598 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (U3CModuleU3E_t692745528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (ExtensionAttribute_t1723066603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (LambdaExpression_t3131094331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[2] = 
{
	LambdaExpression_t3131094331::get_offset_of_body_2(),
	LambdaExpression_t3131094331::get_offset_of_parameters_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (Expression_t1588164026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1440[2] = 
{
	Expression_t1588164026::get_offset_of_node_type_0(),
	Expression_t1588164026::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (Locale_t4128636110), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (MonoTODOAttribute_t4131080583), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (KeyBuilder_t2049230356), -1, sizeof(KeyBuilder_t2049230356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1443[1] = 
{
	KeyBuilder_t2049230356_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (SymmetricTransform_t3802591843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1444[12] = 
{
	SymmetricTransform_t3802591843::get_offset_of_algo_0(),
	SymmetricTransform_t3802591843::get_offset_of_encrypt_1(),
	SymmetricTransform_t3802591843::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t3802591843::get_offset_of_temp_3(),
	SymmetricTransform_t3802591843::get_offset_of_temp2_4(),
	SymmetricTransform_t3802591843::get_offset_of_workBuff_5(),
	SymmetricTransform_t3802591843::get_offset_of_workout_6(),
	SymmetricTransform_t3802591843::get_offset_of_FeedBackByte_7(),
	SymmetricTransform_t3802591843::get_offset_of_FeedBackIter_8(),
	SymmetricTransform_t3802591843::get_offset_of_m_disposed_9(),
	SymmetricTransform_t3802591843::get_offset_of_lastBlock_10(),
	SymmetricTransform_t3802591843::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1445[14] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1446[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1448[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (BinaryExpression_t77573129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1449[6] = 
{
	BinaryExpression_t77573129::get_offset_of_left_2(),
	BinaryExpression_t77573129::get_offset_of_right_3(),
	BinaryExpression_t77573129::get_offset_of_conversion_4(),
	BinaryExpression_t77573129::get_offset_of_method_5(),
	BinaryExpression_t77573129::get_offset_of_lift_to_null_6(),
	BinaryExpression_t77573129::get_offset_of_is_lifted_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (ConditionalExpression_t1874387742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1450[3] = 
{
	ConditionalExpression_t1874387742::get_offset_of_test_2(),
	ConditionalExpression_t1874387742::get_offset_of_if_true_3(),
	ConditionalExpression_t1874387742::get_offset_of_if_false_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (ConstantExpression_t3613654278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1451[1] = 
{
	ConstantExpression_t3613654278::get_offset_of_value_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (ElementInit_t2682486961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1452[2] = 
{
	ElementInit_t2682486961::get_offset_of_add_method_0(),
	ElementInit_t2682486961::get_offset_of_arguments_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (ExpressionPrinter_t2120383524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[1] = 
{
	ExpressionPrinter_t2120383524::get_offset_of_builder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (ExpressionType_t2886294549)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[47] = 
{
	ExpressionType_t2886294549::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (ExpressionVisitor_t1561124052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (Extensions_t2537735880), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (InvocationExpression_t3698930233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[2] = 
{
	InvocationExpression_t3698930233::get_offset_of_expression_2(),
	InvocationExpression_t3698930233::get_offset_of_arguments_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (ListInitExpression_t4000042569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1458[2] = 
{
	ListInitExpression_t4000042569::get_offset_of_new_expression_2(),
	ListInitExpression_t4000042569::get_offset_of_initializers_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (MemberAssignment_t1201848431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1459[1] = 
{
	MemberAssignment_t1201848431::get_offset_of_expression_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (MemberBinding_t265491700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1460[2] = 
{
	MemberBinding_t265491700::get_offset_of_binding_type_0(),
	MemberBinding_t265491700::get_offset_of_member_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (MemberBindingType_t648944624)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1461[4] = 
{
	MemberBindingType_t648944624::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (MemberExpression_t2956213603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[2] = 
{
	MemberExpression_t2956213603::get_offset_of_expression_2(),
	MemberExpression_t2956213603::get_offset_of_member_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (MemberInitExpression_t676945469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[2] = 
{
	MemberInitExpression_t676945469::get_offset_of_new_expression_2(),
	MemberInitExpression_t676945469::get_offset_of_bindings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (MemberListBinding_t3353502159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[1] = 
{
	MemberListBinding_t3353502159::get_offset_of_initializers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (MemberMemberBinding_t3826576684), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	MemberMemberBinding_t3826576684::get_offset_of_bindings_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (MethodCallExpression_t3675920717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[3] = 
{
	MethodCallExpression_t3675920717::get_offset_of_obj_2(),
	MethodCallExpression_t3675920717::get_offset_of_method_3(),
	MethodCallExpression_t3675920717::get_offset_of_arguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (NewArrayExpression_t679298166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[1] = 
{
	NewArrayExpression_t679298166::get_offset_of_expressions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (NewExpression_t1271006003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[3] = 
{
	NewExpression_t1271006003::get_offset_of_constructor_2(),
	NewExpression_t1271006003::get_offset_of_arguments_3(),
	NewExpression_t1271006003::get_offset_of_members_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (ParameterExpression_t1118422084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[1] = 
{
	ParameterExpression_t1118422084::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (TypeBinaryExpression_t2086022908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1470[2] = 
{
	TypeBinaryExpression_t2086022908::get_offset_of_expression_2(),
	TypeBinaryExpression_t2086022908::get_offset_of_type_operand_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (UnaryExpression_t3914580921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[3] = 
{
	UnaryExpression_t3914580921::get_offset_of_operand_2(),
	UnaryExpression_t3914580921::get_offset_of_method_3(),
	UnaryExpression_t3914580921::get_offset_of_is_lifted_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (Check_t192468399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (Enumerable_t538148348), -1, sizeof(Enumerable_t538148348_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1473[1] = 
{
	Enumerable_t538148348_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (Fallback_t3495999270)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1474[3] = 
{
	Fallback_t3495999270::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1475[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1476[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1477[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1478[11] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1479[18] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1480[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1481[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1483[13] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1484[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1486[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1489[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1490[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1491[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1492[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (SortDirection_t3222219096)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1494[3] = 
{
	SortDirection_t3222219096::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (Aes_t1218282760), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (AesManaged_t1129950597), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (AesTransform_t2957123611), -1, sizeof(AesTransform_t2957123611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1498[14] = 
{
	AesTransform_t2957123611::get_offset_of_expandedKey_12(),
	AesTransform_t2957123611::get_offset_of_Nk_13(),
	AesTransform_t2957123611::get_offset_of_Nr_14(),
	AesTransform_t2957123611_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t2957123611_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T0_18(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T1_19(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T2_20(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T3_21(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (InvalidTimeZoneException_t4066718130), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
